#pragma once

#include "sfse_common/Types.h"
#include <string>

enum
{
	kProcType_Steam,
	kProcType_Normal,
	kProcType_WinStore,
	kProcType_GOG,
	kProcType_Epic,

	kProcType_Packed,

	kProcType_Unknown
};

struct ProcHookInfo
{
	u64	version;		// version from resource
	u32	packedVersion;	// internal packed version number
	u32	procType;		// kProcType_*

	u16 getVersionMajor() { return u16(version >> 48); }
	u16 getVersionMinor() { return u16(version >> 32); }
	u16 getVersionBuild() { return u16(version >> 16); }
};

bool IdentifyEXE(const char * procName, bool isEditor, std::string * dllSuffix, ProcHookInfo * hookInfo);
