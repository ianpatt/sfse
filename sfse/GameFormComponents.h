#pragma once

#include "sfse/GameTypes.h"
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
class BGSModelMaterialSwap;
class BGSBodyPartData;
class BGSAimAssistPoseData;

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

class TESFormRefCount : public BaseFormComponent
{
public:
	volatile u64 refCount;  // 00
};

class TBO_InstanceData : public BSIntrusiveRefCounted
{
public:
	virtual ~TBO_InstanceData();

	virtual void Unk_01();
	virtual void Unk_02();
	virtual void Unk_03();
	virtual void Unk_04();
	virtual void Unk_05();
	virtual void Unk_06();
	virtual void Unk_07();
	virtual void Unk_08();
	virtual void Unk_09();
	virtual void Unk_0A();
	virtual void Unk_0B();
	virtual void Unk_0C();
	virtual void Unk_0D();
	virtual void Unk_0E();
	virtual void Unk_0F();
	virtual void Unk_10();
};

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
};
static_assert(sizeof(BGSObjectPlacementDefaults) == 0x10);

struct alignas(0x4) ACTOR_BASE_DATA
{
	enum Flags
	{
		kFlags_None = 0,
		kFlags_Gender = (1 << 0),
		kFlags_Essential = (1 << 1),
		kFlags_Unique = (1 << 5),
		kFlags_Protected = (1 << 11),
		kFlags_WalkStyle = (1 << 19),
	};

	u8 GetSex() const { return iActorBaseFlags & kFlags_Gender; }
	bool IsEssential() const { return iActorBaseFlags & kFlags_Essential; }
	bool IsUnique() const { return iActorBaseFlags & kFlags_Unique; }
	bool IsProtected() const { return iActorBaseFlags & kFlags_Protected; }

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

	ACTOR_BASE_DATA	actorData;	// 08
	s32	unk1C;	// 1C
	u64	unk20;	// 20
	u64 unkPad; // Added in 1.10.31
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
static_assert(sizeof(TESActorBaseData) == 0x78);

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
	BSFixedString strFullName;	// 08
};
static_assert(sizeof(TESFullName) == 0x10);

class TESDescription : public BaseFormComponent
{
public:
	u32						uiFileOffset;		// 08
	u32						uiChunkOffset;		// 0C
	BGSLocalizedStringDL	DescriptionText;	// 10
};
static_assert(sizeof(TESDescription) == 0x18);

class BGSBipedObjectForm : public BaseFormComponent
{
public:
	void* unk08; // 08
};
static_assert(sizeof(BGSBipedObjectForm) == 0x10);

class BGSPreloadable
{
public:
	virtual ~BGSPreloadable();
};

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
	virtual void CollectAllKeywords(BSScrapArray<const BGSKeyword>& arOutKeywordA, const TBO_InstanceData* apData);
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
	BSTArray<PerkRankData>	pPerksA;		// 08
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
	u64	unk08[8];
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

class BGSAttachParentArray : public BaseFormComponent
{
public:
	void*/*BGSTypedKeywordValue<2>*/ pArray;	// 08
	u32	uiSize;	// 10
};
static_assert(sizeof(BGSAttachParentArray) == 0x18);

class TESModel : public BaseFormComponent
{
public:
	virtual void Unk_08(); // 08 - Record related
	virtual void Unk_09(); // 09
	virtual void Unk_0A(); // 0A
	virtual void Unk_0B(); // 0B
	virtual void Unk_0C(); // 0C
	virtual void Unk_0D(); // 0D
	virtual BGSModelMaterialSwap* GetAsModelMaterialSwap(); // 0E

	BSFixedString cModel;	// 08
	u64	unk10;				// 10
	u32	unk18;				// 18
	u32	unk1C;				// 1C
};
static_assert(sizeof(TESModel) == 0x20);

class TESModelTri : public TESModel
{
public:

};
static_assert(sizeof(TESModelTri) == 0x20);

class BGSTextureModel : public TESModel
{
public:

};
static_assert(sizeof(BGSTextureModel) == 0x20);

class BGSModelMaterialSwap : public TESModel
{
public:
	float fColorRemappingIndex; // 20
	u32 pad24; // 24
};
static_assert(sizeof(BGSModelMaterialSwap) == 0x28);

class IAnimationGraphComponent
{
public:
	virtual ~IAnimationGraphComponent();

	virtual void Unk_01();
	virtual void Unk_02();
};

class BGSAnimationGraphComponent : public BaseFormComponent, public IAnimationGraphComponent
{
public:
	BSFixedString	unk10;	// 10
	BSFixedString	unk18;	// 18
	BSFixedString	unk20;	// 20
	BSFixedString	unk28;	// 28
	u64	unk30;
	u8	unk38;
};
static_assert(sizeof(BGSAnimationGraphComponent) == 0x40);

struct FACEFX_BONESET
{
	virtual ~FACEFX_BONESET();

	u64	unk08;
	u64	unk10;
	u64	unk18;
	u64	unk20;
};

class BoneModifierData
{
public:
	virtual ~BoneModifierData();
	
	virtual void Unk_01();
	virtual void Unk_02();
	virtual void Unk_03();
	virtual void Unk_04();
	virtual void Unk_05();
	virtual void Unk_06();

	BSFixedString	unk08;	// 08
	BSFixedString	unk10;	// 10
	float			unk18;	// 18
};

class LookAtChainData : public BoneModifierData
{
public:
	BSFixedString	unk20;	// 20
};

class MorphDriverData : public BoneModifierData
{
public:
	float	unk20;
	float	unk24;
	float	unk28;
	float	unk2C;
	float	unk30;
	u8		unk34;
};

class PoseDeformerData : public BoneModifierData
{
public:
	float	unk20[(0x58 - 0x20) >> 2];
	u8		unk58;
};
static_assert(sizeof(PoseDeformerData) == 0x60);

class SpringBoneData : public BoneModifierData
{
public:
	float	unk20[(0x60 - 0x20) >> 2];
	u8		unk60;
};
static_assert(sizeof(SpringBoneData) == 0x68);

class BGSBodyPartInfo : public BaseFormComponent
{
public:
	BGSBodyPartData*		unk08;	// 08
	FACEFX_BONESET*			unk10;	// 10
	FACEFX_BONESET*			unk18;	// 18
	BGSAimAssistPoseData*	unk20;	// 20
};
static_assert(sizeof(BGSBodyPartInfo) == 0x28);