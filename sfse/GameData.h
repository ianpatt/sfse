#pragma once

#include "sfse/GameTypes.h"
#include "sfse/GameForms.h"
#include "sfse/GameEvents.h"
#include "sfse/NiTypes.h"

class TESForm;
class TESRegionList;
class BGSAddonNode;
class TESPackedFile;
class TESFile;
class BGSAVMData;

struct TESFileCollection
{
	BSTArray<TESFile*> FileA;
	BSTArray<TESFile*> SmallFileA;
	BSTArray<TESFile*> MediumFileA;
};

class TESFile
{
public:
	virtual ~TESFile();

	struct PLUGIN_HEADER
	{
		float	version;
		u32	numRecords;
		u32 nextObjectID;

		enum Flags
		{
			kFlags_Active = (1 << 2)
		};

		u32	flags;
	};

	u64	unk08;
	void*	unk10;
	u64	unk18;
	u64	unk20;
	u64	unk28;
	u64	unk30;
	char filePath[0x104]; // 38
	u32	unk13C;
	u64	unk140;
	u64	unk148;
	u64	unk150;
	u64	unk158;
	u64	unk160;
	u64	unk168;
	u64	unk170;
	u64	unk178;
	u64	unk180;
	u64	unk188;
	u64	unk190;
	u64	unk198;
	u64	unk1A0;
	u32	unk1A8;
	PLUGIN_HEADER header;
	u32	unk1BC;
	BSTArray<BSFixedString> masterNames;
	BSTArray<TESFile*> masterFiles;
	TESFileCollection fileCollection;	// 1E0
	u64	unkPad2;
	u8	cCompileIndex;			// 218
	u16	sSmallFileCompileIndex;	// 21A
	u8	pad21C[10];
	u16	unk226;
	u16 unk228;
	u8	unk22C[4];
	u64	unk230;
	u16	unk238;
	u16	unk23A;
	u32	unk23C;
	u64	unk240;
	u32	unk248;
	u32	unk24C;
	char* unk250;
	u32	unk258;
	u32	unk25C;

	static const u8 LightIndex = 0xFE;
	static const u8 MediumIndex = 0xFD;

	static bool IsActive(u8 index) { return index != 0xFF; }
	static bool IsLight(u8 index) { return index == LightIndex; }
	static bool IsMedium(u8 index) { return index == MediumIndex; }

	bool IsActive() const { return IsActive(cCompileIndex); }
	bool IsLight() const { return IsLight(cCompileIndex); }
	bool IsMedium() const { return IsMedium(cCompileIndex); }
};
static_assert(sizeof(TESFile) == 0x260);
static_assert(offsetof(TESFile, cCompileIndex) == 0x218);
static_assert(offsetof(TESFile, sSmallFileCompileIndex) == 0x21A);

class TESPackedFile : public TESFile
{
public:
	virtual ~TESPackedFile();

	u64	unk250[(0x3C8 - 0x260) >> 3];
};
static_assert(sizeof(TESPackedFile) == 0x3C8);

class TESDataHandler :
	public BSTEventSource<BGSHotloadCompletedEvent>
{
public:
	virtual ~TESDataHandler();

	struct FormItem
	{
		u64	unk00;
		BSTArray<TESForm*> pFormsA;
	};



	void* unk28; // BSService::Detail::TService<BSService::Detail::TServiceTraits<TESDataHandler,BSService::Detail::ReferenceGetterDefaultPointer<TESDataHandler *>>>
	u64	unk30;
	u64	unk38;
	u64	unk40;
	u64	unk48;
	u64	unk50;
	u64	unk58;
	u64	unk60;
	u64	unk68;
	FormItem pFormArray[static_cast<u64>(FormType::kTotal)];	// 70
	TESRegionList* regionList;
	BSTArray<TESObjectCELL*> unk14E8;
	u64	unk14F8;
	NiTPrimitiveArray<BGSAddonNode*> unk1500;
	u64	unk1518;
	u64	unk1520;
	u64	unk1528;
	u64	unk1530;
	BSSimpleList<TESPackedFile*> listFiles; // 1538
	TESFileCollection CompiledFileCollection; // 1548
	u64 unk1578[(0x17C8 - 0x1578) >> 3];
	void* regionDataManager;	// 17C8

	static TESDataHandler* GetSingleton()
	{
		RelocPtr<TESDataHandler*> singleton(0x065E0250);
		return *singleton;
	}

	uint32_t GetSubIndex(const TESFile* file) const
	{
		if (!file->IsActive())
			return -1;

		if (file->IsLight())
		{
			return file->sSmallFileCompileIndex;
		}
		else if (file->IsMedium())
		{
			int32_t foundIndex = -1;
			for(uint32_t i = 0; i < CompiledFileCollection.MediumFileA.size(); ++i)
			{
				if (file == CompiledFileCollection.MediumFileA[i])
				{
					foundIndex = i;
					break;
				}
			}
			return foundIndex;
		}

		return file->cCompileIndex;
	}

	const TESFile* GetModByFormId(const uint32_t formId)
	{
		uint8_t modIndex = formId >> 24;
		uint16_t middleIndex = (formId >> 12) & 0xFFF;
		if (TESFile::IsLight(modIndex))
		{
			if (middleIndex < CompiledFileCollection.SmallFileA.size())
			{
				return CompiledFileCollection.SmallFileA[middleIndex];
			}
		}
		else if (TESFile::IsMedium(modIndex))
		{
			if (middleIndex < CompiledFileCollection.MediumFileA.size())
			{
				return CompiledFileCollection.MediumFileA[middleIndex];
			}
		}
		else if (modIndex < CompiledFileCollection.FileA.size())
		{
			return CompiledFileCollection.FileA[modIndex];
		}
		return nullptr;
	}
};
static_assert(offsetof(TESDataHandler, pFormArray) == 0x70);
static_assert(offsetof(TESDataHandler, listFiles) == 0x1538);
static_assert(offsetof(TESDataHandler, CompiledFileCollection) == 0x1548);
static_assert(offsetof(TESDataHandler, regionDataManager) == 0x17C8);

struct MaterialDatabase
{
	BSTHashMap<BSFixedString, BGSAVMData*>	materialMaps[3]; // Simple, Complex, Modulation
	BSTHashMap<BSFixedString, void*>		fullMap; // This is probably a set, every value is 0
};

extern RelocPtr<MaterialDatabase> g_materialDatabase;
