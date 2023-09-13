#pragma once

#include "sfse_common/Utilities.h"
#include "sfse_common/Types.h"

class TESObjectARMO;
class ActorValueInfo;
class BGSKeyword;
class TBO_InstanceData;
class BGSPerk;
class TESRace;
class BGSLocationRefType;
class BGSTerminal;

struct TESFormRefCount
{
public:
	// members
	volatile u64 refCount;  // 00
};

class BaseFormComponent
{
public:
	virtual ~BaseFormComponent();  // 00

	// add
	virtual void InitializeDataComponent();                // 01
	virtual void ClearDataComponent();                     // 02
	virtual void CopyComponent(BaseFormComponent* a_rhs);  // 03 - { return; }
	virtual void Unk_04();                                 // 04
	virtual void Unk_05();                                 // 05
	virtual void Unk_06();                                 // 06
	virtual void Unk_07();                                 // 07
};
static_assert(sizeof(BaseFormComponent) == 0x08);

class BGSSnapTemplateComponent : public BaseFormComponent
{
public:
	virtual ~BGSSnapTemplateComponent();

	virtual void Unk_08();                                 // 08
	virtual void Unk_09();                                 // 09
	virtual void Unk_0A();                                 // 0A

	u64 unk08;	// 08
	u64 unk10;	// 10
};
static_assert(sizeof(BGSSnapTemplateComponent) == 0x18);

class BGSPreviewTransform : public BaseFormComponent
{
public:
	virtual ~BGSPreviewTransform();

	virtual void Unk_08();                                 // 08
	virtual void Unk_09();                                 // 09
	virtual void Unk_0A();                                 // 0A

	u64	unk08;	// 08
	u64	unk10;	// 10
	u64	unk18;	// 18
	u64	unk20;	// 20
	u64	unk28;	// 28
	u64	unk30;	// 30
	u64	unk38;	// 38
	u64	unk40;	// 40
};
static_assert(sizeof(BGSPreviewTransform) == 0x48);

class BGSMod
{
public:
	class Template
	{
	public:
		class Items : public BaseFormComponent
		{
		public:
			virtual ~Items();

			virtual void	Unk_08();	// 08
			virtual void	Unk_09();	// 09
			virtual void	Unk_0A();	// 0A

			void* unk08;	// 08
			void* unk10;	// 10
			void* unk18;	// 18
		};
	};
};
static_assert(sizeof(BGSMod::Template::Items) == 0x20);

class BGSObjectPlacementDefaults : public BaseFormComponent
{
public:
	virtual void	Unk_08();	// 08
	virtual void	Unk_09();	// 09
	virtual void	Unk_0A();	// 0A

	u64 unk08;	// 08
	u32	unk10;	// 10
	u32 unk14;	// 14
	u32	unk18;	// 18
};
static_assert(sizeof(BGSObjectPlacementDefaults) == 0x20);

struct alignas(0x4) ACTOR_BASE_DATA
{
	s32 iActorBaseFlags;
	s16 sXPValueOffset;
	s16 sLevel;
	u16 usCalcLevelMin;
	u16 usCalcLevelMax;
	u16 usBaseDisposition;
	s16 sTemplateUseFlags;
	s16 sBleedoutOverride;
};
static_assert(sizeof(ACTOR_BASE_DATA) == 0x14);

class TESActorBaseData : public BaseFormComponent
{
public:
	virtual void	Unk_08();	// 08
	virtual void	Unk_09();	// 09
	virtual void	Unk_0A();	// 0A
	virtual void	Unk_10();	// 10
	virtual void	Unk_11();	// 11
	virtual void	Unk_12();	// 12
	virtual void	Unk_13();	// 13

	ACTOR_BASE_DATA	actorData;	// 18
	s32	unk1C;	// 1C
	u64	unk20;	// 20
	u64	unk28;	// 28
	u64	unk30;	// 30
	u64	unk38;	// 38
	u64	unk40;	// 40
	u64	unk48;	// 48
	u64	unk50;	// 50
	u64	unk58;	// 58
	u64	unk60;	// 60
	u64	unk68;	// 68
};
static_assert(sizeof(TESActorBaseData) == 0x70);

class TESContainer : public BaseFormComponent
{
public:
	virtual void	Unk_08();	// 08
	virtual void	Unk_09();	// 09
	virtual void	Unk_0A();	// 0A

	void* pContainerObjectsA;	// 08
	u32	uiNumContainerObjects;	// 10
};
static_assert(sizeof(TESContainer) == 0x18);

class TESSpellList : public BaseFormComponent
{
public:
	u32 unk08;	// 08
	u32	unk0C;	// 0C
	u64	unk10;	// 10
};
static_assert(sizeof(TESSpellList) == 0x18);

class PackageList
{
public:
	virtual void Unk_00();

	u64	unk08;	// 08
	u64	unk10;	// 10
	u64	unk18;	// 18
	u64	unk20;	// 20
};
static_assert(sizeof(PackageList) == 0x28);

struct alignas(0x4) AIDATA_GAME
{
	u16 unk00;	// 00
	u8  unk02;	// 02
	u8	pad03;	// 03
	u16 uiAggroRadius[4];	// 04
	u16	pad0A;	// 0A
	u8	unk0C;	// 0C
};
static_assert(sizeof(AIDATA_GAME) == 0x10);

class TESAIForm : public BaseFormComponent
{
public:
	AIDATA_GAME AIData;		// 08
	PackageList AIPackList;	// 18
};
static_assert(sizeof(TESAIForm) == 0x40);

class TESFullName : public BaseFormComponent
{
public:
	void* strFullName;	// 08
};
static_assert(sizeof(TESFullName) == 0x10);

enum ACTOR_VALUE_MODIFIER
{
	AVM_PERMANENT,
	AVM_TEMPORARY,
	AVM_DAMAGE,
	AVM_COUNT
};

class ActorValueOwner
{
public:
	virtual float GetActorValue(const ActorValueInfo* arInfo);
	virtual float GetPermanentActorValue(const ActorValueInfo* arInfo);
	virtual float GetBaseActorValue(const ActorValueInfo* arInfo);
	virtual void SetBaseActorValue(const ActorValueInfo* arInfo, float afValue);
	virtual void ModBaseActorValue(const ActorValueInfo* arInfo, float afDelta);
	virtual void ModActorValue(ACTOR_VALUE_MODIFIER aeModifier, const ActorValueInfo* arInfo);
	virtual float GetModifier(ACTOR_VALUE_MODIFIER aeModifier, const ActorValueInfo* arInfo);
	virtual void RestorActorValue(const ActorValueInfo* arInfo, float afAmount);
	virtual void SetActorValue(const ActorValueInfo* arInfo, float afValue);
};

class BGSDestructibleObjectForm : public BaseFormComponent
{
public:
	void* pData; // 08
};
static_assert(sizeof(BGSDestructibleObjectForm) == 0x10);

class BGSSkinForm : public BaseFormComponent
{
public:
	TESObjectARMO* pFormSkin;	// 08
};
static_assert(sizeof(BGSSkinForm) == 0x10);

class IKeywordFormBase
{
public:
	virtual ~IKeywordFormBase();

	virtual bool HasKeyword(const BGSKeyword* apKeyword, const TBO_InstanceData* apData);
	virtual void CollectAllKeywords(void*/* BSScrapArray<const BGSKeyword> */ arOutKeywordA, const TBO_InstanceData* apData);
};

class BGSKeywordForm : 
	public BaseFormComponent,
	public IKeywordFormBase	// 08
{
public:
	u32	unk10;
	u32	unk14;
	u64	unk18;
	u32	unk20;
	u32	unk24;
	u64	unk28;
};
static_assert(sizeof(BGSKeywordForm) == 0x30);

class BGSAttackDataForm : public BaseFormComponent
{
public:
	void*/*NiPointer<BGSAttackDataMap>*/ spAttackDataMap;	// 08
};
static_assert(sizeof(BGSAttackDataForm) == 0x10);

struct PerkRankData
{
	BGSPerk*	pPerk;			// 00
	u8			cCurrentRank;	// 08
};

class BGSPerkRankArray : public BaseFormComponent
{
public:
	PerkRankData*	pPerksA;		// 08
	u32				uiPerkCount;	// 10
};
static_assert(sizeof(BGSPerkRankArray) == 0x18);

class BGSPropertySheet : public BaseFormComponent
{
public:
	u64	unk08;
};
static_assert(sizeof(BGSPropertySheet) == 0x10);

class TESRaceForm : public BaseFormComponent
{
public:
	TESRace* pFormRace;	// 08
};
static_assert(sizeof(TESRaceForm) == 0x10);

class BGSOverridePackCollection : public BaseFormComponent
{
public:
	u64	unk08;
	u64	unk10;
	u64	unk18;
	u64	unk20;
	u64	unk28;
	u64	unk30;
	u64	unk38;
	u64	unk40;
};
static_assert(sizeof(BGSOverridePackCollection) == 0x48);

class BGSForcedLocRefType : public BaseFormComponent
{
public:
	u64						unk08;	// 08
	u64						unk10;	// 10
};
static_assert(sizeof(BGSForcedLocRefType) == 0x18);

class BGSNativeTerminalForm : public BaseFormComponent
{
public:
	BGSTerminal* pTerminal;	// 08
};
static_assert(sizeof(BGSNativeTerminalForm) == 0x10);
