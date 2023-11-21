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

    BGSSnapTemplateComponent    snapTemplate;   // 38
    u64                         unk50;          // 50
    u32                         unk58;          // 58
    u32                         unk5C;          // 5C
    u64                         unk60;          // 60
    BGSMod::Template::Items     templateItems;  // 68
    BGSPreviewTransform         previewTransform; // 88
    BGSObjectPlacementDefaults  placementDefaults;  // D0
};
static_assert(offsetof(TESBoundObject, templateItems) == 0x68);
static_assert(offsetof(TESBoundObject, previewTransform) == 0x88);
static_assert(offsetof(TESBoundObject, placementDefaults) == 0xD0);
static_assert(sizeof(TESBoundObject) == 0xF0);

class TESBoundAnimObject : public TESBoundObject
{
public:
    virtual ~TESBoundAnimObject();

    virtual void    Unk_80(); // 80
    virtual void    Unk_81(); // 81

    u64 unkF0;  // F0
    u64 unkF8;  // F8
    u64 unk100; // 100
    u64 unk108; // 108
    u64 unk110; // 110
};
static_assert(sizeof(TESBoundAnimObject) == 0x118);

class TESActorBase : 
    public TESBoundAnimObject,
    public TESActorBaseData,            // 118
    public TESContainer,                // 188
    public TESSpellList,                // 1A0
    public TESAIForm,                   // 1B8
    public TESFullName,                 // 1F8
    public ActorValueOwner,             // 208
    public BGSDestructibleObjectForm,   // 210
    public BGSSkinForm,                 // 220
    public BGSKeywordForm,              // 230
    public BGSAttackDataForm,           // 260
    public BGSPerkRankArray,            // 270
    public BGSPropertySheet             // 288
{
public:
    virtual void    Unk_82(); // 82
    virtual void    Unk_83(); // 83
    virtual void    Unk_84(); // 84
    virtual void    Unk_85(); // 85
};

class TESNPC : 
    public TESActorBase,
    public TESRaceForm,                     // 298
    public BGSOverridePackCollection,       // 2A8
    public BGSForcedLocRefType,             // 2F0
    public BGSNativeTerminalForm,           // 308
    public BSTEventSink<MenuOpenCloseEvent> // 318
{
public:
    class InstanceData : public TBO_InstanceData
    {
    public:
        u64 unk10[(0x158 - 0x10) >> 3];
    };

    BGSAttachParentArray AttachParents;  // 320
    u64 unk338; // 338
    u32 unk340; // 340
    u32 unk344; // 344
    TESClass* pCl;  // 348
    u64 unk350; // 350
    u64 unk358; // 358
    TESCombatStyle* pCombatStyle;   // 360
    u32 unk368; // 368
    u32 unk36C; // 36C
    u64 unk370; // 370
    TESNPC* pFaceNPC; // 378
    NiPoint3 MorphWeight; // 380
    float fHeight; // 38C
    float fHeightMax; // 390
    u32     unk394; // 394
    u64     unk398; // 398
    u64     unk3A0; // 3A0
    u64     unk3A8; // 3A8
    BSFixedString   unk3B0; // 3B0
    u64     unk3B8; // 3B8
    u64     unk3C0; // 3C0
    BGSOutfit* pDefOutfit;  // 3C8
    BGSOutfit* pSleepOutfit;    // 3D0
    BGSListForm* pDefaultPackList;  // 3D8
    TESFaction* pCrimeFaction;  // 3E0
    u64 unk3F8; // 3E8
    BSTArray<BGSHeadPart*> HeadPartsA;  // 3F0
    u64 unk400; // 400
    BSTArray<float>* unk408; // 408  -- 5 floats entries?
    BSTHashMap2<u32, float>* AdditionalSliders;   // 410
    BSTHashMap<u32, BSTHashMap<BSFixedString, float>*>* unk418;   // 418
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
    BSTArray<HeadPartData> HeadPartDataA;    // 420
    u32 skinTone; // 430
    u32 unk434; // 434
    BSFixedString teeth;   // 438
    BSFixedString jewelryColor;   // 440
    BSFixedString eyeColor;   // 448
    BSFixedString hairColor;   // 450
    BSFixedString facialHairColor;   // 458
    BSFixedString eyebrowColor;   // 460
    u64 unk468; // 468
    BSFixedString unk470; // 470
    BSTHashMap<BSFixedString, float>* shapeBlendData; // 478 - ShapeBlendData Map
    u8 pronoun;  // 480
    u8 pad481[7]; // 481

    DEFINE_MEMBER_FN_1(DeriveGeneticParentAppearance, void, 0x01B2DBE8, TESNPC* source);
    DEFINE_MEMBER_FN_1(CopyAppearance, void, 0x01B2C020, TESNPC* source);
};
static_assert(sizeof(TESNPC) == 0x488);
static_assert(sizeof(TESNPC::HeadPartData) == 0x28);
static_assert(sizeof(TESNPC::InstanceData) == 0x158);
