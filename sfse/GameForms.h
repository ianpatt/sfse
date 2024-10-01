#pragma once

#include "sfse/GameFormComponents.h"
#include "sfse/GameReflection.h"
#include "sfse/GameChargen.h"
#include "sfse/NiTypes.h"

class TESFile;
class TESObjectREFR;
class BGSMorphableObject;
class TESNPC;
class NiAVObject;
class TESWaterForm;

enum class FormType : u32
{
	kNONE = 0,  // 00
	kTES4,      // 01
	kGRUP,      // 02
	kGMST,      // 03
	kKYWD,      // 04 BGSKeyword
	kFFKW,      // 05 BGSFormFolderKeywordList
	kLCRT,      // 06 BGSLocationRefType
	kAACT,      // 07 BGSAction
	kTRNS,      // 08 BGSTransform
	kTXST,      // 09 BGSTextureSet
	kGLOB,      // 0A TESGlobal
	kDMGT,      // 0B BGSDamageType
	kCLAS,      // 0C TESClass
	kFACT,      // 0D TESFaction
	kAFFE,      // 0E BGSAffinityEvent
	kHDPT,      // 0F BGSHeadPart
	kEYES,      // 10 TESEyes
	kRACE,      // 11 TESRace
	kSOUN,      // 12 TESSound
	kSECH,      // 13 BGSSoundEcho
	kASPC,      // 14 BGSAcousticSpace
	kAOPF,      // 15 BGSAudioOcclusionPrimitive
	kSKIL,      // 16
	kMGEF,      // 17 EffectSetting
	kSCPT,      // 18 Script
	kLTEX,      // 19 TESLandTexture
	kPDCL,      // 1A BGSProjectedDecal
	kENCH,      // 1B EnchantmentItem
	kSPEL,      // 1C SpellItem
	kSCRL,      // 1D ScrollItem
	kACTI,      // 1E TESObjectACTI
	kTACT,      // 1F BGSTalkingActivator
	kCURV,      // 20 BGSCurveForm
	kCUR3,      // 21 BGSCurve3DForm
	kARMO,      // 22 TESObjectARMO
	kBOOK,      // 23 TESObjectBOOK
	kCONT,      // 24 TESObjectCONT
	kDOOR,      // 25 TESObjectDOOR
	kINGR,      // 26 IngredientItem
	kLIGH,      // 27 TESObjectLIGH
	kMISC,      // 28 TESObjectMISC
	kSTAT,      // 29 TESObjectSTAT
	kSCOL,      // 2A BGSStaticCollection
	kPKIN,      // 2B BGSPackIn
	kMSTT,      // 2C BGSMovableStatic
	kGRAS,      // 2D TESGrass
	kFLOR,      // 2E TESFlora
	kFURN,      // 2F TESFurniture
	kWEAP,      // 30 TESObjectWEAP
	kAMMO,      // 31 TESAmmo
	kNPC_,      // 32 TESNPC
	kLVLN,      // 33 TESLevCharacter
	kLVLP,      // 34 BGSLevPackIn
	kKEYM,      // 35 TESKey
	kALCH,      // 36 AlchemyItem
	kIDLM,      // 37 BGSIdleMarker
	kBMMO,      // 38 BGSBiomeMarkerObject
	kNOTE,      // 39 BGSNote
	kPROJ,      // 3A BGSProjectile
	kHAZD,      // 3B BGSHazard
	kBNDS,      // 3C BGSBendableSpline
	kSLGM,      // 3D TESSoulGem
	kTERM,      // 3E BGSTerminal
	kLVLI,      // 3F TESLevItem
	kGBFT,      // 40 BGSGenericBaseFormTemplate
	kGBFM,      // 41 BGSGenericBaseForm
	kLVLB,      // 42 BGSLevGenericBaseForm
	kWTHR,      // 43 TESWeather
	kWTHS,      // 44 BGSWeatherSettingsForm
	kCLMT,      // 45 TESClimate
	kSPGD,      // 46 BGSShaderParticleGeometryData
	kREGN,      // 47 TESRegion
	kNAVI,      // 48 NavMeshInfoMap
	kCELL,      // 49 TESObjectCELL
	kREFR,      // 4A TESObjectREFR
	kACHR,      // 4B Actor
	kPMIS,      // 4C MissileProjectile
	kPARW,      // 4D ArrowProjectile
	kPGRE,      // 4E GrenadeProjectile
	kPBEA,      // 4F BeamProjectile
	kPFLA,      // 50 FlameProjectile
	kPCON,      // 51 ConeProjectile
	kPPLA,      // 52 PlasmaProjectile
	kPBAR,      // 53 BarrierProjectile
	kPEMI,      // 54 EmitterProjectile
	kPHZD,      // 55 Hazard
	kWRLD,      // 56 TESWorldSpace
	kNAVM,      // 57 NavMesh
	kTLOD,      // 58
	kDIAL,      // 59 TESTopic
	kINFO,      // 5A TESTopicInfo
	kQUST,      // 5B TESQuest
	kIDLE,      // 5C TESIdleForm
	kPACK,      // 5D TESPackage
	kCSTY,      // 5E TESCombatStyle
	kLSCR,      // 5F TESLoadScreen
	kLVSP,      // 60 TESLevSpell
	kANIO,      // 61 TESObjectANIO
	kWATR,      // 62 TESWaterForm
	kEFSH,      // 63 TESEffectShader
	kTOFT,      // 64
	kEXPL,      // 65 BGSExplosion
	kDEBR,      // 66 BGSDebris
	kIMGS,      // 67 TESImageSpace
	kIMAD,      // 68 TESImageSpaceModifier
	kFLST,      // 69 BGSListForm
	kPERK,      // 6A BGSPerk
	kBPTD,      // 6B BGSBodyPartData
	kADDN,      // 6C BGSAddonNode
	kAVIF,      // 6D ActorValueInfo
	kCAMS,      // 6E BGSCameraShot
	kCPTH,      // 6F BGSCameraPath
	kVTYP,      // 70 BGSVoiceType
	kMATT,      // 71 BGSMaterialType
	kIPCT,      // 72 BGSImpactData
	kIPDS,      // 73 BGSImpactDataSet
	kARMA,      // 74 TESObjectARMA
	kLCTN,      // 75 BGSLocation
	kMESG,      // 76 BGSMessage
	kRGDL,      // 77
	kDOBJ,      // 78 BGSDefaultObjectManager
	kDFOB,      // 79 BGSDefaultObject
	kLGTM,      // 7A BGSLightingTemplate
	kMUSC,      // 7B BGSMusicType
	kFSTP,      // 7C BGSFootstep
	kFSTS,      // 7D BGSFootstepSet
	kSMBN,      // 7E BGSStoryManagerBranchNode
	kSMQN,      // 7F BGSStoryManagerQuestNode
	kSMEN,      // 80 BGSStoryManagerEventNode
	kDLBR,      // 81 BGSDialogueBranch
	kMUST,      // 82 BGSMusicTrackFormWrapper
	kDLVW,      // 83
	kWOOP,      // 84 TESWordOfPower
	kSHOU,      // 85 TESShout
	kEQUP,      // 86 BGSEquipSlot
	kRELA,      // 87 BGSRelationship
	kSCEN,      // 88 BGSScene
	kASTP,      // 89 BGSAssociationType
	kOTFT,      // 8A BGSOutfit
	kARTO,      // 8B BGSArtObject
	kMATO,      // 8C BGSMaterialObject
	kMOVT,      // 8D BGSMovementType
	kDUAL,      // 8E BGSDualCastData
	kCOLL,      // 8F BGSCollisionLayer
	kCLFM,      // 90 BGSColorForm
	kREVB,      // 91 BGSReverbParameters
	kRFGP,      // 92 BGSReferenceGroup
	kAMDL,      // 93 BGSAimModel
	kAAMD,      // 94 BGSAimAssistModel
	kMAAM,      // 95 BGSMeleeAimAssistModel
	kLAYR,      // 96
	kCOBJ,      // 97 BGSConstructibleObject
	kOMOD,      // 98 BGSMod::Attachment::Mod
	kZOOM,      // 99 BGSAimDownSightModel
	kINNR,      // 9A BGSInstanceNamingRules
	kKSSM,      // 9B BGSSoundKeywordMapping
	kSCCO,      // 9C
	kAORU,      // 9D BGSAttractionRule
	kSTAG,      // 9E BGSSoundTagSet
	kIRES,      // 9F BGSResource
	kBIOM,      // A0 BGSBiome
	kNOCM,      // A1 NavMeshObstacleCoverManager
	kLENS,      // A2 BGSLensFlare
	kLSPR,      // A3
	kOVIS,      // A4 BGSObjectVisibilityManager
	kDLYR,      // A5
	kSTND,      // A6 BGSSnapTemplateNode
	kSTMP,      // A7 BGSSnapTemplate
	kGCVR,      // A8 BGSGroundCover
	kMRPH,      // A9 BGSMorphableObject
	kTRAV,      // AA BGSTraversal
	kRSGD,      // AB BGSResourceGenerationData
	kOSWP,      // AC BGSObjectSwap
	kATMO,      // AD BGSAtmosphere
	kLVSC,      // AE BGSLevSpaceCell
	kSPCH,      // AF BGSSpeechChallengeObject
	kRESO,      // B0
	kAAPD,      // B1 BGSAimAssistPoseData
	kVOLI,      // B2 BGSVolumetricLighting
	kSFBK,      // B3 BGSSurface::Block
	kSFPC,      // B4
	kSFPT,      // B5 BGSSurface::Pattern
	kSFTR,      // B6 BGSSurface::Tree
	kPCMT,      // B7 BGSPlanetContentManagerTree
	kBMOD,      // B8 BGSBoneModifier
	kSTBH,      // B9 BGSSnapBehavior
	kPNDT,      // BA BGSPlanet::PlanetData
	kIUTF,      // BB
	kCNDF,      // BC BGSConditionForm
	kPCBN,      // BD BGSPlanetContentManagerBranchNode
	kPCCN,      // BE BGSPlanetContentManagerContentNode
	kSTDT,      // BF BSGalaxy::BGSStar
	kWWED,      // C0 BGSWwiseEventForm
	kRSPJ,      // C1 BGSResearchProjectForm
	kAOPS,      // C2 BGSAimOpticalSightModel
	kAMBS,      // C3 BGSAmbienceSet
	kWBAR,      // C4 BGSWeaponBarrelModel
	kPTST,      // C5 BGSSurface::PatternStyle
	kLMSW,      // C6 BGSLayeredMaterialSwap
	kFORC,      // C7 BGSForceData
	kTMLM,      // C8 BGSTerminalMenu
	kEFSQ,      // C9 BGSEffectSequenceForm
	kSDLT,      // CA BGSSecondaryDamageList
	kMTPT,      // CB BGSMaterialPathForm
	kCLDF,      // CC BGSCloudForm
	kFOGV,      // CD BGSFogVolumeForm
	kWKMF,      // CE BGSWwiseKeywordMapping
	kLGDI,      // CF BGSLegendaryItem
	kPSDC,      // D0 BGSParticleSystemDefineCollection
	kSUNP,      // D1 BSGalaxy::BGSSunPresetForm
	kPMFT,      // D2 BGSPhotoModeFeature
	kTODD,      // D3 BGSTimeOfDayData
	kAVMD,      // D4 BGSAVMData
	kPERS,      // D5 TESDataHandlerPersistentCreatedUtil::BGSPersistentIDsForm
	kCHAL,      // D6 BGSChallengeForm
	kUNK1,      // D7
	kUNK2,      // D8
	kUNK3,      // D9
	kTotal      // DA
};

class TESForm : public TESFormRefCount, public BSReflection::IObject
{
public:
	virtual ~TESForm();  // 00

	struct ACTIVATE_DATA
	{
		TESObjectREFR*	activatedRef;
		TESObjectREFR*	actionRef;
		TESForm*		objectToGet;
		s32				count;
		bool			unk1C;
	};

	// add
	virtual void          Unk_08();                                                         // 08
	virtual void          Unk_09();                                                         // 09
	virtual void          Unk_0A();                                                         // 0A
	virtual void          Unk_0B();                                                         // 0B
	virtual void          Unk_0C();                                                         // 0C
	virtual void          Unk_0D();                                                         // 0D
	virtual void          Unk_0E();                                                         // 0E
	virtual void          Unk_0F();                                                         // 0F
	virtual void          Unk_10();                                                         // 10
	virtual void          Unk_11();                                                         // 11
	virtual void          Unk_12();                                                         // 12
	virtual void          Unk_13();                                                         // 13
	virtual void          Unk_14();                                                         // 14
	virtual void          Unk_15();                                                         // 15
	virtual void          Unk_16();                                                         // 16
	virtual bool          AddChange(u32 a_changeFlags);                           // 17
	virtual void          RemoveChange(u32 a_changeFlags);                        // 18
	virtual void          Unk_19();                                                         // 19
	virtual void          Unk_1A();                                                         // 1A
	virtual void          Unk_1B();                                                         // 1B
	virtual void          Unk_1C();                                                         // 1C
	virtual void          Unk_1D();                                                         // 1D
	virtual void          Unk_1E();                                                         // 1E
	virtual void          InitItemImpl();                                                   // 1F
	virtual TESFile* GetRevertFile() const;                                            // 20
	virtual TESFile* GetDescriptionOwnerFile() const;                                  // 21
	virtual u8  GetSavedFormType();                                               // 22
	virtual void          GetFormDetailedString(char* a_dest, u32 a_size) const;  // 23
	virtual bool          GetKnown() const;                                                 // 24
	virtual bool          GetRandomAnim() const;                                            // 25
	virtual bool          GetPlayable() const;                                              // 26
	virtual void          SetPlayable(bool a_set);                                          // 27
	virtual void          Unk_28();                                                         // 28
	virtual void          Unk_29();                                                         // 29
	virtual bool          GetDangerous() const;                                             // 2A
	virtual bool          QHasCurrents() const;                                             // 2B
	virtual bool          GetObstacle() const;                                              // 2C
	virtual void          Unk_2D();                                                         // 2D
	virtual bool          GetOnLocalMap() const;                                            // 2E
	virtual bool          GetMustUpdate() const;                                            // 2F
	virtual void          SetOnLocalMap(bool a_val);                                        // 30
	virtual void          Unk_31();                                                         // 31 - new?
	virtual void          Unk_32();                                                         // 32 - GetIgnoredBySandbox()?
	virtual void          SetDelete(bool a_deleted);                                        // 33
	virtual void          SetAltered(bool a_altered);                                       // 34
	virtual void          Unk_35();                                                         // 35
	virtual void          Unk_36();                                                         // 36
	virtual void          Unk_37();                                                         // 37
	virtual void          Unk_38();                                                         // 38
	virtual void          Unk_39();                                                         // 39
	virtual void          Unk_3A();                                                         // 3A
	virtual void          Unk_3B();                                                         // 3B
	virtual void          Unk_3C();                                                         // 3C
	virtual void          Unk_3D();                                                         // 3D
	virtual void          Unk_3E();                                                         // 3E
	virtual void          Unk_3F();                                                         // 3F
	virtual bool          IsFurniture();                                                    // 40 - new
	virtual void          Unk_41();                                                         // 41
	virtual void          Unk_42();                                                         // 42
	virtual void          Unk_43();                                                         // 43
	virtual void          Unk_44();                                                         // 44
	virtual void          Unk_45();                                                         // 45
	virtual void          Unk_46();                                                         // 46
	virtual void          Unk_47();                                                         // 47
	virtual void          Unk_48();                                                         // 48
	virtual void          Unk_49();                                                         // 49
	virtual void          Unk_4A();                                                         // 4A
	virtual void          Unk_4B();                                                         // 4B
	virtual u32 GetFullNameLength() const;                                        // 4C - new
	virtual const char* GetFullName() const;                                              // 4D - new
	virtual void          Unk_4E();                                                         // 4E
	virtual void          Unk_4F();                                                         // 4F
	virtual void          Unk_50();                                                         // 50
	virtual void          Unk_51();                                                         // 51
	virtual void          Unk_52();                                                         // 52
	virtual void          Unk_53();                                                         // 53
	virtual bool          Activate(const ACTIVATE_DATA& a_activateData);                    // 54
	virtual void          Unk_55();                                                         // 55
	virtual void          Unk_56();                                                         // 56
	virtual void          Unk_57();                                                         // 57
	virtual void          Unk_58();                                                         // 58
	virtual void          Unk_59();                                                         // 59
	virtual void          Unk_5A();                                                         // 5A
	virtual void          Unk_5B();                                                         // 5B
	virtual void          Unk_5C();                                                         // 5C
	virtual u32 GetFilledSlots() const;                                           // 5D
	virtual u32 GetFilledSlotsImpl() const;                                       // 5E
	virtual float         GetDesirability() const;                                          // 5F
	virtual void          Unk_60();                                                         // 60
	virtual void          Unk_61();                                                         // 61

	// members
	u32 unk18;        // 18
	u32 unk1C;        // 1C
	u32 formFlags;    // 20
	u32 unk24;        // 24
	u32 formID;       // 28
	u8  unk2C;        // 2C - also flag
	u8  unk2D;        // 2D
	u8  formType;     // 2E
	u16  modIndex;    // 2F - changed to u16 in 1.14.70

	using _GetFormByNumericID = TESForm * (*)(u32 formId);
	static RelocAddr<_GetFormByNumericID> GetFormByNumericID;

	using _GetFormByEditorID = TESForm * (*)(const char*);
	static RelocAddr<_GetFormByEditorID> GetFormByEditorID;
};
static_assert(offsetof(TESForm, refCount) == 0x08);
static_assert(sizeof(TESForm) == 0x38);

class BGSKeyword : public TESForm
{
public:
	//...
};

struct OBJ_REFR
{
public:
	// members
	NiPoint3 angle;            // 00
	NiPoint3 location;         // 0C
	TESForm* objectReference;  // 18 - TESBoundObject
};
static_assert(sizeof(OBJ_REFR) == 0x20);

struct LOADED_REF_DATA
{
public:
	// members
	void* handleList;								// 00 - TODO
	NiPointer<NiAVObject>	data3D;					// 08
	TESWaterForm*			currentWaterType;		// 10
	float					relevantWaterHeight;	// 18
	float					cachedRadius;			// 1C
	u32						flags;					// 20
	u16						underwaterCount;		// 24
};
static_assert(sizeof(LOADED_REF_DATA) == 0x28);

class BGSListForm :
	public TESForm
{
public:
	BSTArray<TESForm*> ArrayOfForms;		// 30
	u64	unk40;	// 40
	u64	unk48;	// 48
	u64	unk50;	// 50
	u64	unk58;	// 58
	u64	unk60;	// 60
	u64	unk68;	// 68
	u64	unk70;	// 70
	u64	unk78;	// 78
	u64	unk80;	// 80
};
static_assert(sizeof(BGSListForm) == 0x90);

class BGSMorphableObject : public TESForm
{
public:
	BSFixedString		unk30;					// 30
	BGSMorphableObject*	unk38;					// 38 - Seems to point to itself?
	BSFixedString		performanceMaterial;	// 40
	BSFixedString		chargenMaterial;		// 48
	BSFixedString		unk50;					// 50
	u32					unk58;					// 58
	u32					unk5C;					// 5C
};
static_assert(sizeof(BGSMorphableObject) == 0x68);

class BGSHeadPart : 
	public TESForm,
	public TESFullName,			// 30
	public BGSModelMaterialSwap // 40
{
public:
	enum HeadPartType : s32
	{
		HeadPartMisc = 0,
		HeadPartFace,
		HeadPartRightEye,
		HeadPartHair,
		HeadPartFacialHair,
		HeadPart5,
		HeadPartEyebrows,
		HeadPartJewelry,
		HeadPart8,
		HeadPartTeeth,
		HeadPart10,
		HeadPart11,
		HeadPartLeftEye,
		HeadPartEyelashes
	};

	BSFixedString unk68; // 68
	BGSHeadPart* unk70;	// 70
	TESModel ChargenModel;	// 78
	TESModelTri MorphsA[3];	// 98
	u8	unkF8;	// F8
	u8	padF9[7];	// F9
	u64	unk100; // 100
	BSTArray<BGSHeadPart*>	extraParts;	// 108
	BGSMorphableObject*	morph;	// 118
	u64	unk120;	// 120
	BGSListForm*	unk128;	// 128
	BSFixedString	unk130;	// 130
	BSFixedString	unk148;	// 138
	HeadPartType	eType;	// 140
	u32	unk144; // 144
};
static_assert(sizeof(BGSHeadPart) == 0x150);
static_assert(offsetof(BGSHeadPart, strFullName) == 0x40);
static_assert(offsetof(BGSHeadPart, cModel) == 0x50);

class BGSBoneModifier : public TESForm
{
public:
	virtual ~BGSBoneModifier();

	BoneModifierData*	unk30;	// 30
};
static_assert(sizeof(BGSBoneModifier) == 0x40);

class BGSEquipSlot : public TESForm
{
public:
	virtual ~BGSEquipSlot();

	BSFixedString	unk30;	// 30
	void*			unk38;	// 38
	u64				unk40;	// 40
	u64				unk48;	// 48
	u64				unk50;	// 50
	u64				unk58;	// 58
};
static_assert(sizeof(BGSEquipSlot) == 0x68);

class BGSBodyPartData : 
	public TESForm,
	public TESModel,		// 30
	public BGSPreloadable
{
public:
	u64	unk58[(0x128 - 0x58) >> 3];	// 58
	BSFixedString	unk128;			// 128
	BSFixedString	unk130;			// 130
	BSFixedString	unk138;			// 138
	BSFixedString	unk140;			// 140
	BSFixedString	unk148;			// 148
};
static_assert(sizeof(BGSBodyPartData) == 0x158);

class BGSMovementType : public TESForm
{
public:
	BSFixedString	unk30;	// 30
	u64	unk38[(0x140 - 0x38) >> 3];
};
static_assert(sizeof(BGSMovementType) == 0x148);

class BGSAimAssistPoseData : public TESForm
{
public:
	u64	unk30;	// 30
	u64	unk38;	// 38
	u64	unk40;	// 40
	u64	unk48;	// 48
	u64	unk50;	// 50
};

class TESRace :
	public TESForm,
	public TESFullName,
	public TESDescription,
	public TESSpellList,
	public BGSSkinForm,
	public BGSBipedObjectForm,
	public BGSKeywordForm,
	public BGSAttackDataForm,
	public BGSPropertySheet,
	public BGSPreloadable
{
public:
	BSFixedString	editorID;		// E8
	void*			unkF0;			// F0
	void*			unkF8;			// F8
	float			unk100;			// 100
	u32				unk104;			// 104
	u32				unk108;			// 108
	u32				unk10C;			// 10C
	u64				unk110;			// 110
	u64				unk118;			// 118
	u64				unk120;			// 120
	u64				unk128;			// 128
	u32				unk130;			// 130
	u32				unk134;			// 134
	u32				unk138;			// 138
	u32				unk13C;			// 13C
	u64				unk140;			// 140
	u64				unk148;			// 148
	u64				unk150;			// 150
	u64				unk158;			// 158
	BSFixedString	slotNames[64];	// 160
	void*			unk360[64];		// 360
	BSTHashMap<BSFixedString, u32>	slotMap;	// 560
	struct EquipSlot
	{
		BGSEquipSlot*	unk00;	// 00
		void*			unk08;	// 08
	};
	BSTArray<EquipSlot>		unk598;			// 598
	u64				unk5A8;			// 5A8
	u64				unk5B0;			// 5B0
	u64				unk5B8;			// 5B8
	BSTArray<BGSBoneModifier*>			unk5C0[2];		// 5C0
	u64				unk5E0;			// 5E0
	TESModel		unk5E8[4];		// 5E8
	TESModel		faceBones[2];	// 668
	struct Unk6A8
	{
		s32				unk00;
		float			unk04;
		float			unk08;
		float			unk0C;
		float			unk10;
		u32				unk14;
		u64				unk18;
		float			unk20;
		u32				unk24;
		float			unk28;
		float			unk2C;
		float			unk30;
		float			unk34;
		float			unk38;
		float			unk3C;
		float			unk40;
		float			unk44;
		float			unk48;
		float			unk4C;
		u32				unk50;
		float			unk54;
		float			unk58;
		u32				unk5C;
		float			unk60;
		float			unk64;
		struct Unk68
		{
			float		unk00;
			float		unk08;
			float		unk0C;
		};
		Unk68			unk68[2];
		void*			unk80;
		s32				unk88;
		s32				unk8C;
		s32				unk90;
		s32				unk94;
		s32				unk98;
		s32				unk9C;
		float			unkA0;
		float			unkA4;
		float			unkA8;
		float			unkAC;
		float			unkB0;
		float			unkB4;
		float			unkB8;
		float			unkBC;
		u32				unkC0;
		u32				unkC4;
		u32				unkC8;
		u32				unkCC;
		u64				unkD0;
		u64				unkD8;
		u64				unkE0;
		u32				unkE8;
		u32				unkEC;
		float			unkF0;
		float			unkF4;
		u32				unkF8;
		u32				unkFC;
	};
	Unk6A8			unk6A8;					// 6A8
	u64				unk7A8;					// 7A8
	BGSTextureModel	unk7B0[2];				// 7B0
	BGSAnimationGraphComponent unk7F0[4];	// 7F0
	void*					unk8F0[2];		// 8F0
	BGSBodyPartInfo			bodyPartInfo;	// 900
	BGSAttachParentArray	attachParentA;	// 928
	u64						unk940;			// 940
	u64						unk948;			// 948
	u64						unk950;			// 950
	BGSMovementType*		unk958[4];		// 958
	u64						unk978;			// 978
	u64						unk980;			// 980

	using FaceSliderID = u32;
	using FaceMorphID = u32;
	struct ChargenData
	{
		struct FaceMorphData
		{
			BSFixedString			Name;					// 00
			BSFixedString			SecondaryMorphName;		// 08
			BSFixedStringCS			AssociatedMorphGroup;	// 10
			u64						AssociatedHeadPartType;	// 18
			BSFixedString			unk20;					// 20
			BSFixedString			unk28;					// 28
			BSTArray<BSFixedString> BonesA;					// 30 - Probably CS?
			BSTArray<u64>			AssociatedMorphs;		// 40
			BSTArray<FaceSliderID>	PostBlendSliderA;		// 50
			FaceMorphID				ID;						// 60
			u8						SculptRegion;			// 64
		};
		BSTHashMap<FaceMorphID, FaceMorphData*>							faceMorphMap;
		BSTHashMap<FaceSliderID, BGSCharacterMorph::FacialBoneSlider*>	facialSliderMap;
		BSTHashMap<FaceSliderID, BGSCharacterMorph::FacialBoneSlider*>	unk70;
		BSTHashMap<BSFixedString, BSTHashMap<BSFixedString, float>*>	facialBoneRegionCategoryMapping;
		BSTArray<FaceMorphID>	headMorphA;	// E0
		BSFixedString			unkF0;	// F0
		u64						unkF8;	// F8
		u64*					unk100;	// 100
		u64						sliderCount;	// 108
		u64						unk110;	// 110
		BSTArray<TESNPC*>		unk118;	// 118
		struct MorphGroup
		{
			BSFixedString				name;	// Probably CS?
			BSTArray<BSFixedString>		MorphA;	// Probably CS?
		};
		BSTArray<MorphGroup*>			morphGroupA;		// 128
		char*							unk138;				// 138 - This is a giant csv of somekind
		void*							unk140;				// 140
		BSFixedString					unk148;				// 148
	};
	ChargenData*			chargenData[2];					// 988
	u64						unk998;							// 998
	BSFixedString			handMaterials[2];				// 9A0
	BSFixedString			skinMaterials[2];				// 9B0
	BSFixedString			unk9C0[2];						// 9C0
	BSTArray<BGSHeadPart*>	headParts[2];					// 9D0
	struct Unk9F0
	{
		void* unk00[2];
	};
	Unk9F0					unk9F0[2];
	BSFixedString			unkA10;
};

static_assert(offsetof(TESRace, unk360) == 0x368);
static_assert(offsetof(TESRace, unk5C0) == 0x5C8);
static_assert(offsetof(TESRace, unk5E8) == 0x5F0);
static_assert(offsetof(TESRace::Unk6A8, unk80) == 0x80);
static_assert(offsetof(TESRace, unk6A8) == 0x6B0);
static_assert(offsetof(TESRace, unk7B0) == 0x7B8);
static_assert(offsetof(TESRace, unk7F0) == 0x7F8);
static_assert(offsetof(TESRace, unk8F0) == 0x8F8);
static_assert(offsetof(TESRace, bodyPartInfo) == 0x908);
static_assert(offsetof(TESRace, attachParentA) == 0x930);
static_assert(offsetof(TESRace, unk940) == 0x948);
static_assert(offsetof(TESRace, headParts) == 0x9D8);
static_assert(offsetof(TESRace, unk9F0) == 0x9F8);
static_assert(offsetof(TESRace, unkA10) == 0xA18);
static_assert(sizeof(TESRace::Unk6A8) == 0x100);
static_assert(sizeof(TESRace::ChargenData::FaceMorphData) == 0x68);
static_assert(sizeof(TESRace::ChargenData) == 0x150);
static_assert(sizeof(TESRace) == 0xA20);

class BGSAVMData : public TESForm
{
public:
	BSFixedString	editorName;	// 30
	BGSAVMData*		unk38;		// 38 - Points to itself?
	enum Type
	{
		SIMPLE,
		COMPLEX,
		MODULATION
	};
	u64				type;		// 40
	BSFixedString	name;		// 48
	BSFixedString	name2;		// 50
	struct Entry
	{
		BSFixedString	name;
		BSFixedString	textureOrAVM;
		struct Color
		{
			u8 r, g, b, a;
		};
		Color			color;
		u32				unk14;
	};
	Entry*			entryBegin;	// 58
	Entry*			entryEnd;	// 60
	Entry*			unk68;		// 68 - Why are there 2 end pointers?
	u64				unk70;		// 70
};
static_assert(sizeof(BGSAVMData) == 0x80);
