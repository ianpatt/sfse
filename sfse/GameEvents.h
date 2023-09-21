#pragma once

#include "sfse/GameTypes.h"

namespace BSTEventDetail
{
    class SinkBase
    {
    public:
        virtual ~SinkBase() = 0;
    };

    class SourceBase
    {
    public:
        virtual ~SourceBase() = 0;
    };
}

enum EventResult
{
    kEvent_Continue = 0,
    kEvent_Abort
};

// 08
template <typename T>
class BSTEventSink : public BSTEventDetail::SinkBase
{
public:
    virtual ~BSTEventSink() { };
    virtual	EventResult	ProcessEvent(const T* arEvent, void* eventSource) { return kEvent_Continue; }; // pure
};

template<typename T>
class BSTEventSource : public BSTEventDetail::SourceBase
{
public:
    virtual ~BSTEventSource();

    BSTArray<BSTEventSink<T>> pSinksA;
    u32 unk18;
    u32 unk1C;
    u32 unk20;
    u32 unk24;
};

struct MenuOpenCloseEvent
{
    BSFixedString	MenuName;
    bool			bOpening;
};

struct UpdateSceneRectEvent{};
struct MenuModeChangeEvent{};
struct MenuPauseChangeEvent{};
struct MenuPauseCounterChangeEvent{};
struct TutorialEvent{};
struct BSCursorTypeChange{};
struct BSCursorRotationChange{};
struct BIUIMenuVisiblePausedBeginEvent{};
struct BIUIMenuVisiblePausedEndEvent{};