#pragma once

#include "sfse/ScaleformFunctions.h"
#include "sfse/GameUI.h"
#include "sfse/GameEvents.h"
#include "sfse/ScaleformValue.h"

class TESNPC;

namespace Scaleform
{
namespace GFx
{
class MovieImpl;
}
}

class IMenu : 
    public SWFToCodeFunctionHandler,          // 00
    public BSInputEventUser,                  // 10
    public BSTEventSink<UpdateSceneRectEvent> // 50
{
public:
    virtual const char* GetName() const ; // 03
    virtual const char* GetRootPath() const; // 04
    virtual void Unk_05(); // 05
    virtual void Unk_06(); // 06
    virtual bool LoadMovie(bool addEventDispatcher, bool unk2); // 07
    virtual void Unk_08(); // 08
    virtual void Unk_09(); // 09
    virtual void Unk_0A(); // 0A
    virtual void Unk_0B(); // 0B
    virtual void Unk_0C(); // 0C
    virtual void Unk_0D(); // 0D
    virtual void Unk_0E(); // 0E
    virtual void Unk_0F(); // 0F
    virtual void Unk_10(); // 10
    virtual void Unk_11(); // 11
    virtual void Unk_12(); // 12
    virtual void Unk_13(); // 13
    virtual void Unk_14(); // 14
    virtual void Unk_15(); // 15
    virtual void Unk_16(); // 16
    virtual void Unk_17(); // 17
    virtual void Unk_18(); // 18
    virtual void Unk_19(); // 19
    virtual void Unk_1A(); // 1A

    s64 unk58;  // 58
    s64 unk60;  // 60
    Scaleform::GFx::Value MenuObj;  // 80
    Scaleform::GFx::MovieImpl* pUIMovie;  // 88
    u64 unk90;  // 90 - EventDispatcherBackend?
    u64 unk98;  // 98
    u64 unkA0;  // A0
    u32 unkA8;  // A8
    u32 unkAC;  // AC
    BSFixedString MenuName; // B0
    BSFixedString unkB8;    // B8
    u64 unkC0;  // C0 - Flags?
    u32 unkC8;  // C8
    u32 unkCC;  // CC
    u32 unkD0;  // D0
    u32 unkD4;  // D4
    u64 unkD8;  // D8
    u64 unkE0;  // E0
    u64 unkE8;  // E8
    u64 unkF0;  // F0
    u64 unkF8;  // F8
    u64 unk100; // 100
    u32 unk108; // 108
    u32 unk10C; // 10C
    u64 unk110; // 110
    u64 unk118; // 118
    u64 unk120; // 120
    u64 unk128; // 128
};
static_assert(offsetof(IMenu, pUIMovie) == 0x88);
static_assert(offsetof(IMenu, MenuName) == 0xB0);

class GameMenuBase : public IMenu
{
public:

};

struct CharGen_CloseMenu {};
struct CharGen_PresetChange {};
struct CharGen_HeadpartPresetChange {};
struct CharGen_SetSex {};
struct CharGen_SetSlider {};
struct CharGen_StartTextEntry {};
struct CharGen_EndTextEntry {};
struct CharGen_CancelTextEntry {};
struct CharGen_ShowPlayerRenameMessage {};
struct CharGen_ShowChooseBackgroundMessage {};
struct CharGen_SetBodyValues {};
struct CharGen_SetCameraPosition {};
struct CharGen_HeadpartPlusSelectorChange {};
struct CharGen_SkintoneChange {};
struct CharGen_DirtScarsEtcChange {};
struct CharGen_ToggleMarking {};
struct CharGen_SetTrait {};
struct CharGen_SetBackground {};
struct CharGen_EyeColorChange {};
struct CharGen_BrowChange {};
struct CharGen_HairChange {};
struct CharGen_HairColorChange {};
struct CharGen_FacialHairChange {};
struct CharGen_FacialHairColorChange {};
struct CharGen_BrowColorChange {};
struct CharGen_TeethChange {};
struct CharGen_CyclePronoun {};
struct CharGen_SetPronoun {};
struct CharGen_TogglePreviewHabSuit {};
struct CharGen_SwitchLocomotion {};
struct CharGen_SwitchBodyType {};
struct CharGen_RotatePaperdoll {};
struct CharGen_RollOnLocomotion {};
struct CharGen_RollOffLocomotion {};
struct CharGen_TeethRollOn {};
struct CharGen_TeethRollOff {};
struct CharGen_JewelryChange {};
struct CharGen_JewelryColorChange {};
struct CharGen_StartBodyChange {};
struct CharGen_EndBodyChange {};
struct CharGen_SetAdditionalSlider {};
struct CharGen_SetBlockInputUnderPopup {};
struct CharGen_PostBlendFaceChange {};
struct CharGen_PostBlendColorOptionChange {};
struct CharGen_PostBlendIntensityChange {};
struct CharGen_MakeupChange {};
struct CharGen_MarkingsChange {};
struct UIMenuChargenMenuDisablePaperdoll {};

// 658
class ChargenMenu : 
    public IMenu,                                               // 00
    public IDataModel,                                          // 130
    public BSTEventSink<CharGen_CloseMenu>,                     // 140
    public BSTEventSink<CharGen_PresetChange>,                  // 148
    public BSTEventSink<CharGen_HeadpartPresetChange>,          // 150
    public BSTEventSink<CharGen_SetSex>,                        // 158
    public BSTEventSink<CharGen_SetSlider>,                     // 160
    public BSTEventSink<CharGen_StartTextEntry>,                // 168
    public BSTEventSink<CharGen_EndTextEntry>,                  // 170
    public BSTEventSink<CharGen_CancelTextEntry>,               // 178
    public BSTEventSink<CharGen_ShowPlayerRenameMessage>,       // 180
    public BSTEventSink<CharGen_ShowChooseBackgroundMessage>,   // 188
    public BSTEventSink<CharGen_SetBodyValues>,                 // 190
    public BSTEventSink<CharGen_SetCameraPosition>,             // 198
    public BSTEventSink<CharGen_HeadpartPlusSelectorChange>,    // 1A0
    public BSTEventSink<CharGen_SkintoneChange>,                // 1A8
    public BSTEventSink<CharGen_DirtScarsEtcChange>,            // 1B0
    public BSTEventSink<CharGen_ToggleMarking>,                 // 1B8
    public BSTEventSink<CharGen_SetTrait>,                      // 1C0
    public BSTEventSink<CharGen_SetBackground>,                 // 1C8
    public BSTEventSink<CharGen_EyeColorChange>,                // 1D0
    public BSTEventSink<CharGen_BrowChange>,                    // 1D8
    public BSTEventSink<CharGen_HairChange>,                    // 1E0
    public BSTEventSink<CharGen_HairColorChange>,               // 1E8
    public BSTEventSink<CharGen_FacialHairChange>,              // 1F0
    public BSTEventSink<CharGen_FacialHairColorChange>,         // 1F8
    public BSTEventSink<CharGen_BrowColorChange>,               // 200
    public BSTEventSink<CharGen_TeethChange>,                   // 208
    public BSTEventSink<CharGen_CyclePronoun>,                  // 210
    public BSTEventSink<CharGen_SetPronoun>,                    // 218
    public BSTEventSink<CharGen_TogglePreviewHabSuit>,          // 220
    public BSTEventSink<CharGen_SwitchLocomotion>,              // 228
    public BSTEventSink<CharGen_SwitchBodyType>,                // 230
    public BSTEventSink<CharGen_RotatePaperdoll>,               // 238
    public BSTEventSink<CharGen_RollOnLocomotion>,              // 240
    public BSTEventSink<CharGen_RollOffLocomotion>,             // 248
    public BSTEventSink<CharGen_TeethRollOn>,                   // 250
    public BSTEventSink<CharGen_TeethRollOff>,                  // 258
    public BSTEventSink<CharGen_JewelryChange>,                 // 260
    public BSTEventSink<CharGen_JewelryColorChange>,            // 268
    public BSTEventSink<CharGen_StartBodyChange>,               // 270
    public BSTEventSink<CharGen_EndBodyChange>,                 // 278
    public BSTEventSink<CharGen_SetAdditionalSlider>,           // 280
    public BSTEventSink<CharGen_SetBlockInputUnderPopup>,       // 288
    public BSTEventSink<CharGen_PostBlendFaceChange>,           // 290
    public BSTEventSink<CharGen_PostBlendColorOptionChange>,    // 298
    public BSTEventSink<CharGen_PostBlendIntensityChange>,      // 2A0
    public BSTEventSink<CharGen_MakeupChange>,                  // 2A8
    public BSTEventSink<CharGen_MarkingsChange>,                // 2B0
    public BSTEventSink<UIMenuChargenMenuDisablePaperdoll>      // 2B8
{
public:
    MenuPaperDoll* pPaperDoll;   // 2C0
    TESNPC* npc;                 // 2C8
    // More ...
};
