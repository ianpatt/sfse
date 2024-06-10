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
	u64	unk200;
	u64	unkPad1; // Added in 1.10.31
	u64	unkPad2; // Added in 1.10.31
	u8	cCompileIndex;			// 208
	u16	sSmallFileCompileIndex;	// 20A
	u8	pad[3];
	u64	unk210;
	u64	unk218;
	u64	unk220;
	u32	unk228;
	u32	unk22C;
	u64	unk230;
	u32	unk238;
	u32	unk23C;
	u64	unk240;
	u32	unk248;
	u32	unk24C;
};
static_assert(sizeof(TESFile) == 0x260); // Unverified after 1.10.31
static_assert(offsetof(TESFile, cCompileIndex) == 0x218);
static_assert(offsetof(TESFile, sSmallFileCompileIndex) == 0x21A);

class TESPackedFile : public TESFile
{
public:
	virtual ~TESPackedFile();

	u64	unk250[(0x3C8 - 0x260) >> 3];
};
static_assert(sizeof(TESPackedFile) == 0x3C8); // Unverified after 1.10.31

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
	FormItem pFormArray[static_cast<u64>(FormType::kTotal)];
	TESRegionList* unk1498;
	BSTArray<TESObjectCELL*> unk14A0;
	u64	unk14B0;
	NiTPrimitiveArray<BGSAddonNode*> unk14B8;
	u64	unk14D0;
	u64	unk14D8;
	u64	unk14E0;
	u64	unk14E8;
	BSSimpleList<TESPackedFile*> listFiles; // 14F0
	TESFileCollection CompiledFileCollection; // 1500
	u64	unk1520;
	u64 unk1528[(0x1718 - 0x1528) >> 3];

	static TESDataHandler* GetSingleton()
	{
		RelocPtr<TESDataHandler*> singleton(0x0642CAC8);
		return *singleton;
	}
};
static_assert(offsetof(TESDataHandler, pFormArray) == 0x70);
static_assert(offsetof(TESDataHandler, listFiles) == 0x1538);

struct MaterialDatabase
{
	BSTHashMap<BSFixedString, BGSAVMData*>	materialMaps[3]; // Simple, Complex, Modulation
	BSTHashMap<BSFixedString, void*>		fullMap; // This is probably a set, every value is 0
};

extern RelocPtr<MaterialDatabase> g_materialDatabase;
