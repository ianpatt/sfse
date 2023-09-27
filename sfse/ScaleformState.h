#pragma once

#include "sfse/ScaleformTypes.h"

namespace Scaleform
{
namespace GFx
{
struct FileTypeConstants{};

class State : public RefCountBase<State>
{
public:
    enum StateType
    {
        State_None,
        State_Translator,
        State_Log,
        State_ActionControl,
        State_UserEventHandler,
        State_FSCommandHandler,
        State_ExternalInterface,
        State_FileOpener,
        State_URLBuilder,
        State_ImageCreator,
        State_ImageFileHandlerRegistry,
        State_ParseControl,
        State_ProgressHandler,
        State_ImportVisitor,
        State_FontPackParams,
        State_FontLib,
        State_FontProvider,
        State_FontMap,
        State_TaskManager,
        State_TextClipboard,
        State_TextKeyMap,
        State_PreprocessParams,
        State_IMEManager,
        State_XMLSupport,
        State_ZlibSupport,
        State_FontCompactorParams,
        State_ImagePackerParams,
        State_Audio,
        State_Video,
        State_TestStream,
        State_SharedObject,
        State_LocSupport,
        State_AS2Support,
        State_AS3Support
    };
public:
    State(StateType st = State_None) : SType(st) { }
    virtual ~State() { }

    StateType       SType;
};

class StateBag : public FileTypeConstants
{
protected:
    virtual StateBag* GetStateBagImpl() const { return 0; }

public:
    virtual ~StateBag() { }

    virtual void SetState(State::StateType state, State* pstate);
    virtual State* GetStateAddRef(State::StateType state) const;
    virtual void GetStatesAddRef(State** pstateList, const State::StateType* pstates, unsigned count) const;
};
}
}
