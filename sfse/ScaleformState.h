#pragma once

#include "sfse_common/Utilities.h"
#include "sfse/ScaleformMemory.h"
#include "sfse/ScaleformTypes.h"

namespace Scaleform
{
namespace GFx
{
struct FileTypeConstants{};

class State : public RefCountBase<State>
{
public:
    // States with numbers have been code-verified
    enum StateType
    {
        State_None,
        State_Translator = 1,                // BSScaleformTranslator::ScaleformImpl
        State_Log = 2,
        State_ActionControl = 3,
        State_UserEventHandler = 4,
        State_FSCommandHandler = 5,
        State_ExternalInterface = 6,
        State_FileOpener = 12,               // BSScaleformFileOpener
        State_URLBuilder,
        State_ImageCreator = 14,             // BSScaleformImageLoader
        State_ImageFileHandlerRegistry = 15, // Scaleform::GFx::ImageFileHandlerRegistry
        State_ParseControl = 16,             // Scaleform::GFx::ParseControl
        State_ProgressHandler,
        State_ImportVisitor,
        State_FontPackParams,
        State_FontLib = 20,                  // Scaleform::GFx::FontLib
        State_DefaultFontLibNameState = 21,  // Scaleform::Gfx::DefaultFontLibNameState
        State_FontProvider = 22,
        State_FontMap = 23,                  // Scaleform::GFx::FontMap
        State_TaskManager,
        State_TextClipboard = 25,            // Scaleform::GFx::Clipboard
        State_TextKeyMap = 26,               // Scaleform::GFx::TextKeyMap
        State_PreprocessParams,
        State_IMEManager,
        State_XMLSupport,
        State_ZlibSupport = 29,              // Scaleform::GFx::ZlibSupport
        State_LZMASupport = 30,              // Scaleform::GFx::ZLMASupport
        State_FontCompactorParams,
        State_ImagePackerParams,
        State_Audio = 41,
        State_Video,
        State_TestStream,
        State_SharedObject,
        State_LocSupport,
        State_AS2Support = 40,
        State_AS3Support = 41                // Scaleform::GFx::AS3Support
    };
public:
    State(StateType st = State_None) : SType(st) { }
    virtual ~State() { }

    StateType       SType;

    DEFINE_STATIC_HEAP(ScaleformHeap_Allocate, ScaleformHeap_Free);
};

class StateBag : public FileTypeConstants
{
protected:
    virtual StateBag* GetStateBagImpl() const { return 0; }

public:
    virtual ~StateBag() { }

    virtual void SetState(State::StateType state, State* pstate) = 0;
    virtual State* GetStateAddRef(State::StateType state) const = 0;
    virtual void GetStatesAddRef(State** pstateList, const State::StateType* pstates, unsigned count) const = 0;
};
}
}
