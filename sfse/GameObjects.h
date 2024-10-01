#pragma once

#include "sfse/GameForms.h"
#include "sfse/GameFormComponents.h"
#include "sfse/GameEvents.h"

class TESClass;
class TESCombatStyle;
class BGSOutfit;
class BGSListForm;
class TESFaction;
class BGSHeadPart;

class TESObject : public TESForm
{
public:
    virtual void    Unk_62(); // 62
    virtual void    Unk_63(); // 63
    virtual void    Unk_64(); // 64
    virtual void    Unk_65(); // 65
    virtual void    Unk_66(); // 66
    virtual void    Unk_67(); // 67
    virtual void    Unk_68(); // 68
    virtual void    Unk_69(); // 69
    virtual void    Unk_6A(); // 6A
    virtual void    Unk_6B(); // 6B

    BGSSnapTemplateComponent    snapTemplate;   // 30
};

class TESBoundObject : public TESObject
{
public:
    virtual void    Unk_6C(); // 6C
    virtual void    Unk_6D(); // 6D
    virtual void    Unk_6E(); // 6E
    virtual void    Unk_6F(); // 6F
    virtual void    Unk_70(); // 70
    virtual void    Unk_71(); // 71
    virtual void    Unk_72(); // 72
    virtual void    Unk_73(); // 73
    virtual void    Unk_74(); // 74
    virtual void    Unk_75(); // 75
    virtual void    Unk_76(); // 76
    virtual void    Unk_77(); // 77
    virtual void    Unk_78(); // 78
    virtual void    Unk_79(); // 79
    virtual void    Unk_7A(); // 7A
    virtual void    Unk_7B(); // 7B
    virtual void    Unk_7C(); // 7C
    virtual void    Unk_7D(); // 7D
    virtual void    Unk_7E(); // 7E
    virtual void    Unk_7F(); // 7F

    NiPoint3                    boundMin;           // 48
    NiPoint3                    boundMax;           // 54
    BGSMod::Template::Items     templateItems;      // 60
    BGSPreviewTransform         previewTransform;   // 80
    BGSObjectPlacementDefaults  placementDefaults;  // C8
    u32                         unkD8;              // D8
};
static_assert(offsetof(TESBoundObject, templateItems) == 0x60);
static_assert(offsetof(TESBoundObject, previewTransform) == 0x80);
static_assert(offsetof(TESBoundObject, placementDefaults) == 0xC8);
static_assert(sizeof(TESBoundObject) == 0xE0);

class TESBoundAnimObject : public TESBoundObject
{
public:
    virtual ~TESBoundAnimObject();

    virtual void    Unk_80(); // 80
    virtual void    Unk_81(); // 81
};
static_assert(sizeof(TESBoundAnimObject) == 0xE0);

class TESActorBase : 
    public TESBoundAnimObject,
    public TESActorBaseData,            // E0
    public TESContainer,                // 150
    public TESSpellList,                // 168
    public TESAIForm,                   // 180
    public TESFullName,                 // 1C0
    public ActorValueOwner,             // 1D0
    public BGSDestructibleObjectForm,   // 1D8
    public BGSSkinForm,                 // 1E8
    public BGSKeywordForm,              // 1F8
    public BGSAttackDataForm,           // 200
    public BGSPerkRankArray,            // 228
    public BGSPropertySheet             // 238
{
public:
    virtual void    Unk_82(); // 82
    virtual void    Unk_83(); // 83
    virtual void    Unk_84(); // 84
    virtual void    Unk_85(); // 85
};

class TESNPC : 
    public TESActorBase,
    public TESRaceForm,                     // 250
    public BGSOverridePackCollection,       // 260
    public BGSForcedLocRefType,             // 270
    public BGSNativeTerminalForm,           // 2B8
    public BSTEventSink<MenuOpenCloseEvent> // 2D0
{
public:
    class InstanceData : public TBO_InstanceData
    {
    public:
        u64 unk10[(0x158 - 0x10) >> 3];
    };

    BGSAttachParentArray AttachParents;  // 2E8
    u64 unk300; // 300
    u32 unk308; // 308
    u32 unk30C; // 30C
    TESClass* pCl;  // 310
    //u64 unk318; // 318 - Removed 1.10.31
    u64 unk320; // 320
    TESCombatStyle* pCombatStyle;   // 328
    u32 unk330; // 330
    u32 unk334; // 334
    u64 unk338; // 338
    TESNPC* pFaceNPC; // 340
    NiPoint3 MorphWeight; // 348
    float fHeight; // 354
    float fHeightMax; // 358
    u32     unk35C; // 35C
    u64     unk360; // 360
    u64     unk368; // 368
    u64     unk370; // 370
    BSFixedString   unk378; // 378
    u64     unk380; // 380
    u64     unk388; // 388
    BGSOutfit* pDefOutfit;  // 390
    BGSOutfit* pSleepOutfit;    // 398
    BGSListForm* pDefaultPackList;  // 3A0
    TESFaction* pCrimeFaction;  // 3A8
    u64 unk3B0; // 3B0
    BSTArray<BGSHeadPart*> HeadPartsA;  // 3B8
    u64 unk3C8; // 3C8
    BSTArray<float>* unk3D0; // 3D0  -- 5 floats entries?
    BSTHashMap2<u32, float>* AdditionalSliders;   // 3D8
    BSTHashMap<u32, BSTHashMap<BSFixedStringCS, float>*>* unk3E0;   // 3E0
    struct HeadPartData
    {
        u32 type;                       // 00 1 - Mask? 
        u32 unk04;                      // 04
        BSFixedStringCS group;             // 08
        BSFixedStringCS name;         // 10
        BSFixedStringCS texture; // 18
        struct Color
        {
            u8 r, g, b, a;
        };
        Color color;                    // 20
        u32 intensity;                  // 24 up to 128 for some reason replaces alpha, color.a does nothing?
    };
    BSTArray<HeadPartData> HeadPartDataA;    // 3E0
    u32 skinTone; // 3F8
    u32 unk3FC; // 3FC
    BSFixedStringCS teeth;   // 400
    BSFixedStringCS jewelryColor;   // 408
    BSFixedStringCS eyeColor;   // 410
    BSFixedStringCS hairColor;   // 418
    BSFixedStringCS facialHairColor;   // 420
    BSFixedStringCS eyebrowColor;   // 428
    u64 unk468; // 430
    BSFixedString unk438; // 438
    BSTHashMap<BSFixedStringCS, float>* shapeBlendData; // 440 - ShapeBlendData Map
    u8 pronoun;  // 448
    u8 pad449[7]; // 449

    DEFINE_MEMBER_FN_1(DeriveGeneticParentAppearance, void, 0x01BB5548, TESNPC* source);
    DEFINE_MEMBER_FN_1(CopyAppearance, void, 0x01BB3980, TESNPC* source);
};
static_assert(sizeof(TESNPC) == 0x450); // Un-verified after 1.10.31
static_assert(sizeof(TESNPC::HeadPartData) == 0x28);
static_assert(sizeof(TESNPC::InstanceData) == 0x158);
