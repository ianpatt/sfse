#pragma once

#include "sfse/GameForms.h"
#include "sfse/GameFormComponents.h"

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

    /*
    TESActorBaseData actorBaseData; // 118
    TESContainer     container;     // 188
    TESSpellList     spellList;     // 1A0
    TESAIForm        aiForm;        // 1B8
    TESFullName      fullName;      // 1F8
    ActorValueOwner  actorValue;    // 208
    BGSDestructibleObjectForm   destructibleObject; // 210
    BGSSkinForm      skinForm;  // 220
    BGSKeywordForm   keywords;  // 230
    BGSAttackDataForm   attackData; // 260
    BGSPerkRankArray    perkRankArray;  // 270
    BGSPropertySheet    propertySheet;  // 288
    */
};
/*static_assert(offsetof(TESActorBase, actorBaseData) == 0x118);
static_assert(offsetof(TESActorBase, container) == 0x188);
static_assert(offsetof(TESActorBase, spellList) == 0x1A0);
static_assert(offsetof(TESActorBase, aiForm) == 0x1B8);
static_assert(offsetof(TESActorBase, fullName) == 0x1F8);
static_assert(offsetof(TESActorBase, actorValue) == 0x208);
static_assert(offsetof(TESActorBase, destructibleObject) == 0x210);
static_assert(offsetof(TESActorBase, skinForm) == 0x220);
static_assert(offsetof(TESActorBase, keywords) == 0x230);
static_assert(offsetof(TESActorBase, attackData) == 0x260);
static_assert(offsetof(TESActorBase, perkRankArray) == 0x270);
static_assert(offsetof(TESActorBase, propertySheet) == 0x288);*/

class TESNPC : 
    public TESActorBase,
    public TESRaceForm,                 // 298
    public BGSOverridePackCollection,   // 2A8
    public BGSForcedLocRefType,         // 2F0
    public BGSNativeTerminalForm        // 308
{
public:
    /*TESRaceForm                 raceForm;   // 298
    BGSOverridePackCollection   overridePackCollection; // 2A8
    BGSForcedLocRefType         forcedLocRefType;   // 2F0
    BGSNativeTerminalForm       terminalForm;       // 308
    */

    // More here, havent decoded this yet
};
/*static_assert(offsetof(TESNPC, raceForm) == 0x298);
static_assert(offsetof(TESNPC, overridePackCollection) == 0x2A8);
static_assert(offsetof(TESNPC, forcedLocRefType) == 0x2F0);
static_assert(offsetof(TESNPC, terminalForm) == 0x308);*/
