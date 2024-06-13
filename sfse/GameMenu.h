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

    Scaleform::GFx::Value MenuObj;  // 58
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
    u64 unk130; // 130
};
static_assert(offsetof(IMenu, pUIMovie) == 0x88);
static_assert(offsetof(IMenu, MenuName) == 0xB0);

class GameMenuBase : public IMenu
{
public:

};

// 658
class ChargenMenu : 
    public IMenu,                                               // 00
    public IDataModel,                                          // 138
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
    MenuPaperDoll* pPaperDoll;   // 2C8
    TESNPC* npc;                 // 2D0
    u64 unk2D8[(0x5B8 - 0x2D8) >> 3];
    u32 cameraPosition;          // 5B8
    u32 unk5BC;                  // 5BC
    u64 unk5C0[(0x650 - 0x5C0) >> 3];

    enum
    {
        FACE_CAMERA_POSITION = 0,
        BODY_CAMERA_POSITION,
        BACKGROUND_CAMERA_POSITION,
        PRESET_CAMERA_POSITION,
        TRAITS_CAMERA_POSITION
    };
};
static_assert(offsetof(ChargenMenu, cameraPosition) == 0x5B8);
static_assert(sizeof(ChargenMenu) == 0x650);