#pragma once

#include "sfse_common/Types.h"
#include "sfse_common/Utilities.h"
#include "sfse/GameSingleton.h"
#include "sfse/GameEvents.h"
#include <cstddef>

class IMenu;
class TESObjectCELL;
class MenuActor;
class BGSKeyword;
class TESObjectREFR;

class UICellRenderer : public BSIntrusiveRefCounted
{
public:
    virtual ~UICellRenderer();

    TESObjectCELL* unk10;  // 10
    void* unk18;  // 18 - const BSResource2::TEntryType<0,LoadedCellDB::DBTraits,BSResource2::DBDefaultStreamPolicy>
    float unk20;  // 20
    float unk24;  // 24
    u64 unk28;  // 28
    void* unk30[4];   // 30 - const BSResource2::TEntryType<0,TextureDB::DBTraits,BSResource2::DBDefaultStreamPolicy>
    u64 unk50;  // 50
    u8 unk58[8];  // 58
    u64 unk60;  // 60
    u64 unk68;  // 68 - BSMenu3D::Scene
};

class MenuPaperDoll : public UICellRenderer
{
public:
    virtual ~MenuPaperDoll();

    u64 unk70;  // 70
    u64 unk78;  // 78
    u64 unk80;  // 80
    u64 unk88;  // 88
    u64 unk90;  // 90
    u64 unk98;  // 98
    u64 unkA0;  // A0
    u64 unkA8;  // A8
    MenuActor* menuActor;   // B0
    u64 unkB8[(0x1A0 - 0xB8) >> 3];
    BGSKeyword* unk1A0;     // 1A0
    TESObjectREFR* unk1A8;  // 1A8
};
static_assert(offsetof(MenuPaperDoll, menuActor) == 0xB0);
static_assert(offsetof(MenuPaperDoll, unk1A0) == 0x1A0);

class IDataModel
{
public:
    virtual ~IDataModel();

    virtual void Unk_01();
    virtual void Unk_02();
    virtual void Unk_03();

    void* unk08;    // 08 - Model object?
};

class BSInputEventUser
{
public:
    virtual ~BSInputEventUser();

    virtual void Unk_01();
    virtual void Unk_02();
    virtual void Unk_03();
    virtual void Unk_04();
    virtual void Unk_05();
    virtual void Unk_06();
    virtual void Unk_07();
    virtual void Unk_08();
    virtual void Unk_09();

    u64 unk08[(0x38 - 0x08) >> 3];  // 08
    bool InputEventHandlingEnabled; // 38
};
static_assert(sizeof(BSInputEventUser) == 0x40);

class BSInputEventReceiver
{
public:
    virtual ~BSInputEventReceiver();
    virtual void Unk_01() = 0;

    void* unk08; // 08
};
static_assert(sizeof(BSInputEventReceiver) == 0x10);

class UI :
    //public BSTSingletonSDM<UI>,
    public BSInputEventReceiver,                            // 00
    public BSTEventSource<MenuOpenCloseEvent>,              // 10
    public BSTEventSource<MenuModeChangeEvent>,             // 38
    public BSTEventSource<MenuPauseChangeEvent>,            // 60
    public BSTEventSource<MenuPauseCounterChangeEvent>,     // 88
    public BSTEventSource<TutorialEvent>,                   // B0
    public BSTEventSource<BSCursorTypeChange>,              // D8
    public BSTEventSource<BSCursorRotationChange>,          // 100
    public BSTEventSource<BIUIMenuVisiblePausedBeginEvent>, // 128
    public BSTEventSource<BIUIMenuVisiblePausedEndEvent>    // 150
{
public:
    virtual ~UI();

    virtual void Unk_01();

    u64 unk178[(0x3F0 - 0x178) >> 3]; // 178
    BSTArray<IMenu*> openMenus; // 3F0
    u64 unk400[(0x4F8 - 0x400) >> 3]; // 400

    // This properly locks the data structure, use this
    DEFINE_MEMBER_FN_2(IsMenuOpen, bool, 0x0316C054, const BSFixedString&);

    static UI* GetSingleton()
    {
        RelocPtr<UI*> singleton(0x0682A780);
        return *singleton;
    }
};
static_assert(offsetof(UI, openMenus) == 0x3F0);
