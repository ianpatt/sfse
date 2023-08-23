#include "IdentifyEXE.h"
#include "LoaderError.h"
#include "sfse_common/sfse_version.h"
#include "sfse_common/Log.h"
#include <string>
#include <Windows.h>

static bool GetFileVersion(const char * path, VS_FIXEDFILEINFO * info, std::string * outProductName, std::string * outProductVersion)
{
	bool result = false;

	u32	versionSize = GetFileVersionInfoSize(path, NULL);
	if(!versionSize)
	{
		_ERROR("GetFileVersionInfoSize failed (%08X)", GetLastError());
		return false;
	}

	u8	* versionBuf = new u8[versionSize];
	if(versionBuf)
	{
		if(GetFileVersionInfo(path, NULL, versionSize, versionBuf))
		{
			VS_FIXEDFILEINFO	* retrievedInfo = NULL;
			u32				realVersionSize = sizeof(VS_FIXEDFILEINFO);

			if(VerQueryValue(versionBuf, "\\", (void **)&retrievedInfo, (PUINT)&realVersionSize) && retrievedInfo)
			{
				*info = *retrievedInfo;
				result = true;
			}
			else
			{
				_ERROR("VerQueryValue failed (%08X)", GetLastError());
			}

			if(outProductName)
			{
				// try to get the product name, failure is ok
				char * productName = NULL;
				u32 productNameLen = 0;
				if(VerQueryValue(versionBuf, "\\StringFileInfo\\040904B0\\ProductName", (void **)&productName, (PUINT)&productNameLen) && productNameLen && productName)
				{
					*outProductName = productName;
				}
			}

			{
				char * productVersion = NULL;
				u32 productVersionLen = 0;
				if (VerQueryValue(versionBuf, "\\StringFileInfo\\040904B0\\ProductVersion", (void **)&productVersion, (PUINT)&productVersionLen) && productVersionLen && productVersion)
				{
					*outProductVersion = productVersion;
				}
			}
		}
		else
		{
			_ERROR("GetFileVersionInfo failed (%08X)", GetLastError());
		}

		delete [] versionBuf;
	}

	return result;
}

static bool VersionStrToInt(const std::string & verStr, u64 * out)
{
	u64 result = 0;
	int parts[4];

	if (sscanf_s(verStr.c_str(), "%d.%d.%d.%d", &parts[0], &parts[1], &parts[2], &parts[3]) != 4)
		return false;

	for (int i = 0; i < 4; i++)
	{
		if (parts[i] > 0xFFFF)
			return false;

		result <<= 16;
		result |= parts[i];
	}

	*out = result;

	return true;
}

static bool GetFileVersionData(const char * path, u64 * out, std::string * outProductName)
{
	std::string productVersionStr;
	VS_FIXEDFILEINFO	versionInfo;
	if(!GetFileVersion(path, &versionInfo, outProductName, &productVersionStr))
		return false;

	_MESSAGE("dwSignature = %08X", versionInfo.dwSignature);
	_MESSAGE("dwStrucVersion = %08X", versionInfo.dwStrucVersion);
	_MESSAGE("dwFileVersionMS = %08X", versionInfo.dwFileVersionMS);
	_MESSAGE("dwFileVersionLS = %08X", versionInfo.dwFileVersionLS);
	_MESSAGE("dwProductVersionMS = %08X", versionInfo.dwProductVersionMS);
	_MESSAGE("dwProductVersionLS = %08X", versionInfo.dwProductVersionLS);
	_MESSAGE("dwFileFlagsMask = %08X", versionInfo.dwFileFlagsMask);
	_MESSAGE("dwFileFlags = %08X", versionInfo.dwFileFlags);
	_MESSAGE("dwFileOS = %08X", versionInfo.dwFileOS);
	_MESSAGE("dwFileType = %08X", versionInfo.dwFileType);
	_MESSAGE("dwFileSubtype = %08X", versionInfo.dwFileSubtype);
	_MESSAGE("dwFileDateMS = %08X", versionInfo.dwFileDateMS);
	_MESSAGE("dwFileDateLS = %08X", versionInfo.dwFileDateLS);
	_MESSAGE("productVersionStr = %s", productVersionStr.c_str());

	u64 version = 0;
	if (!VersionStrToInt(productVersionStr, &version))
		return false;

	*out = version;

	return true;
}

// non-relocated image
const IMAGE_SECTION_HEADER * GetImageSection(const u8 * base, const char * name)
{
	const IMAGE_DOS_HEADER		* dosHeader = (IMAGE_DOS_HEADER *)base;
	const IMAGE_NT_HEADERS		* ntHeader = (IMAGE_NT_HEADERS *)(base + dosHeader->e_lfanew);
	const IMAGE_SECTION_HEADER	* sectionHeader = IMAGE_FIRST_SECTION(ntHeader);

	for(u32 i = 0; i < ntHeader->FileHeader.NumberOfSections; i++)
	{
		const IMAGE_SECTION_HEADER	* section = &sectionHeader[i];

		if(!strcmp((const char *)section->Name, name))
		{
			return section;
		}
	}

	return NULL;
}

// non-relocated image
bool HasImportedLibrary(const u8 * base, const char * name)
{
	auto * dosHeader = (const IMAGE_DOS_HEADER *)base;
	auto * ntHeader = (const IMAGE_NT_HEADERS *)(base + dosHeader->e_lfanew);
	auto * importDir = (const IMAGE_DATA_DIRECTORY *)&ntHeader->OptionalHeader.DataDirectory[IMAGE_DIRECTORY_ENTRY_IMPORT];

	if(!importDir->Size || !importDir->VirtualAddress) return false;

	// resolve RVA -> file offset
	const auto * sectionHeader = IMAGE_FIRST_SECTION(ntHeader);

	auto LookupRVA = [ntHeader, sectionHeader, base](u32 rva) -> const u8 *
	{
		for(u32 i = 0; i < ntHeader->FileHeader.NumberOfSections; i++)
		{
			const auto * section = &sectionHeader[i];

			if(	(rva >= section->VirtualAddress) &&
				(rva < section->VirtualAddress + section->SizeOfRawData))
			{
				return base + rva - section->VirtualAddress + section->PointerToRawData;
			}
		}

		return nullptr;
	};

	if(const auto * importTable = (const IMAGE_IMPORT_DESCRIPTOR *)LookupRVA(importDir->VirtualAddress))
	{
		for(; importTable->Characteristics; ++importTable)
		{
			auto * dllName = (const char *)LookupRVA(importTable->Name);

			if(dllName && !_stricmp(dllName, name))
			{
				return true;
			}
		}
	}

	return false;
}

// steam EXE will have the .bind section
static bool IsSteamImage(const u8 * base)
{
	return GetImageSection(base, ".bind") != NULL;
}

static bool IsUPXImage(const u8 * base)
{
	return GetImageSection(base, "UPX0") != NULL;
}

static bool IsWinStoreImage(const u8 * base)
{
	return GetImageSection(base, ".xbld") != NULL;
}

static bool IsGOGImage(const u8 * base)
{
	return HasImportedLibrary(base, "Galaxy64.dll");
}

static bool IsEpicImage(const u8 * base)
{
	return HasImportedLibrary(base, "eossdk-win64-shipping.dll");
}

bool ScanEXE(const char * path, ProcHookInfo * hookInfo)
{
	// open and map the file in to memory
	HANDLE	file = CreateFile(path, GENERIC_READ, FILE_SHARE_READ, NULL, OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL, NULL);
	if(file == INVALID_HANDLE_VALUE)
	{
		_ERROR("ScanEXE: couldn't open file (%d)", GetLastError());
		return false;
	}

	bool result = false;

	HANDLE	mapping = CreateFileMapping(file, NULL, PAGE_READONLY, 0, 0, NULL);
	if(mapping)
	{
		const u8	* fileBase = (const u8 *)MapViewOfFile(mapping, FILE_MAP_READ, 0, 0, 0);
		if(fileBase)
		{
			// scan for packing type
			bool	isWinStore = IsWinStoreImage(fileBase);

			if(IsUPXImage(fileBase))
			{
				hookInfo->procType = kProcType_Packed;
			}
			else if(IsSteamImage(fileBase))
			{
				hookInfo->procType = kProcType_Steam;
			}
			else if(IsWinStoreImage(fileBase))
			{
				hookInfo->procType = kProcType_WinStore;
			}
			else if(IsGOGImage(fileBase))
			{
				hookInfo->procType = kProcType_GOG;
			}
			else if(IsEpicImage(fileBase))
			{
				hookInfo->procType = kProcType_Epic;
			}
			else
			{
				hookInfo->procType = kProcType_Normal;
			}

			result = true;

			UnmapViewOfFile(fileBase);
		}
		else
		{
			_ERROR("ScanEXE: couldn't map file (%d)", GetLastError());
		}

		CloseHandle(mapping);
	}
	else
	{
		_ERROR("ScanEXE: couldn't create file mapping (%d)", GetLastError());
	}

	CloseHandle(file);

	return result;
}

bool IdentifyEXE(const char * procName, bool isEditor, std::string * dllSuffix, ProcHookInfo * hookInfo)
{
	u64	version;
	std::string	productName;

	// check file version
	if(!GetFileVersionData(procName, &version, &productName))
	{
		PrintLoaderError("Couldn't retrieve EXE version information.");
		return false;
	}

	_MESSAGE("version = %016I64X", version);
	_MESSAGE("product name = %s", productName.c_str());

	if(productName == "SFSE")
	{
		_MESSAGE("found an SFSE component");
		return false;
	}

	// check protection type
	if(!ScanEXE(procName, hookInfo))
	{
		PrintLoaderError("Failed to identify EXE type.");
		return false;
	}

	switch(hookInfo->procType)
	{
	case kProcType_Steam:		_MESSAGE("steam exe"); break;
	case kProcType_Normal:		_MESSAGE("normal exe"); break;
	case kProcType_Packed:		_MESSAGE("packed exe"); break;
	case kProcType_WinStore:	_MESSAGE("winstore exe"); break;
	case kProcType_GOG:			_MESSAGE("gog exe"); break;
	case kProcType_Epic:		_MESSAGE("epic exe"); break;
	case kProcType_Unknown:
	default:					_MESSAGE("unknown exe type"); break;
	}

	if(hookInfo->procType == kProcType_WinStore)
	{
		PrintLoaderError("The Windows Store (gamepass) version of Skyrim is not supported.");
		return false;
	}
	
	if(hookInfo->procType == kProcType_Epic)
	{
		PrintLoaderError("The Epic Store version of Skyrim is not supported.");
		return false;
	}

	bool result = false;

	const u64 kCurVersion =
		(u64(GET_EXE_VERSION_MAJOR(RUNTIME_VERSION)) << 48) |
		(u64(GET_EXE_VERSION_MINOR(RUNTIME_VERSION)) << 32) |
		(u64(GET_EXE_VERSION_BUILD(RUNTIME_VERSION)) << 16);

	// convert version resource to internal version format
	u32 versionInternal = MAKE_EXE_VERSION(version >> 48, version >> 32, version >> 16);

	// version mismatch could mean exe type mismatch
	if(version != kCurVersion)
	{
#if GET_EXE_VERSION_SUB(RUNTIME_VERSION) == RUNTIME_TYPE_BETHESDA
		const int expectedProcType = kProcType_Steam;
		const char * expectedProcTypeName = "Steam";
#elif GET_EXE_VERSION_SUB(RUNTIME_VERSION) == RUNTIME_TYPE_GOG
		const int expectedProcType = kProcType_GOG;
		const char * expectedProcTypeName = "GOG";
#else
#error unknown runtime type
#endif

		// we only care about steam/gog for this check
		const char * foundProcTypeName = nullptr;

		switch(hookInfo->procType)
		{
			case kProcType_Steam:
				foundProcTypeName = "Steam";
				break;

			case kProcType_GOG:
				foundProcTypeName = "GOG";
				break;
		}

		if(foundProcTypeName && (hookInfo->procType != expectedProcType))
		{
			// different build
			PrintLoaderError(
				"This version of SFSE is compatible with the %s version of the game.\n"
				"You have the %s version of the game. Please download the correct version from the website.\n"
				"Runtime: %d.%d.%d\n"
				"SFSE: %d.%d.%d",
				expectedProcTypeName, foundProcTypeName,
				GET_EXE_VERSION_MAJOR(versionInternal), GET_EXE_VERSION_MINOR(versionInternal), GET_EXE_VERSION_BUILD(versionInternal),
				SFSE_VERSION_INTEGER, SFSE_VERSION_INTEGER_MINOR, SFSE_VERSION_INTEGER_BETA);

			return false;
		}
	}

	if(version < kCurVersion)
	{
#if SFSE_TARGETING_BETA_VERSION
		if(versionInternal == CURRENT_RELEASE_RUNTIME)
			PrintLoaderError(
				"You are using the version of SFSE intended for the Steam beta branch (%d.%d.%d).\n"
				"Download and install the non-beta branch version (%s) from http://sfse.silverlock.org/.",
				SFSE_VERSION_INTEGER, SFSE_VERSION_INTEGER_MINOR, SFSE_VERSION_INTEGER_BETA, CURRENT_RELEASE_SFSE_STR);
		else
			PrintLoaderError(
				"You are using Starfield version %d.%d.%d, which is out of date and incompatible with this version of SFSE (%d.%d.%d). Update to the latest beta version.",
				GET_EXE_VERSION_MAJOR(versionInternal), GET_EXE_VERSION_MINOR(versionInternal), GET_EXE_VERSION_BUILD(versionInternal),
				SFSE_VERSION_INTEGER, SFSE_VERSION_INTEGER_MINOR, SFSE_VERSION_INTEGER_BETA);
#else
		PrintLoaderError(
			"You are using Starfield version %d.%d.%d, which is out of date and incompatible with this version of SFSE (%d.%d.%d). Update to the latest version.",
			GET_EXE_VERSION_MAJOR(versionInternal), GET_EXE_VERSION_MINOR(versionInternal), GET_EXE_VERSION_BUILD(versionInternal),
			SFSE_VERSION_INTEGER, SFSE_VERSION_INTEGER_MINOR, SFSE_VERSION_INTEGER_BETA);
#endif
	}
	else if(version > kCurVersion)
	{
		PrintLoaderError(
			"You are using a newer version of Skyrim than this version of SFSE supports.\n"
			"If this version just came out, please be patient while we update our code.\n"
			"In the meantime, please check http://sfse.silverlock.org for updates.\n"
			"Do not email about this!\n"
			"Runtime: %d.%d.%d\n"
			"SFSE: %d.%d.%d",
			GET_EXE_VERSION_MAJOR(versionInternal), GET_EXE_VERSION_MINOR(versionInternal), GET_EXE_VERSION_BUILD(versionInternal),
			SFSE_VERSION_INTEGER, SFSE_VERSION_INTEGER_MINOR, SFSE_VERSION_INTEGER_BETA);
	}
	else if(isEditor)
	{
		switch(hookInfo->procType)
		{
		case kProcType_Steam:
		case kProcType_Normal:
		case kProcType_WinStore:
		case kProcType_GOG:
			*dllSuffix = "";

			result = true;

			break;
		case kProcType_Unknown:
		default:
			PrintLoaderError("Unsupported editor executable type.");
			break;
		}
	}
	else
	{
		char versionStr[256];
		sprintf_s(versionStr, "%d_%d_%d", GET_EXE_VERSION_MAJOR(versionInternal), GET_EXE_VERSION_MINOR(versionInternal), GET_EXE_VERSION_BUILD(versionInternal));

		switch(hookInfo->procType)
		{
		case kProcType_Steam:
		case kProcType_Normal:
		case kProcType_GOG:
			*dllSuffix = versionStr;

			result = true;

			break;

		case kProcType_WinStore:
			*dllSuffix = versionStr;
			*dllSuffix += "_winstore";

			result = true;

			break;

		case kProcType_Packed:
			PrintLoaderError("Packed versions of Starfield are not supported.");
			break;

		case kProcType_Unknown:
		default:
			PrintLoaderError("Unknown executable type.");
			break;
		}
	}

	return result;
}
