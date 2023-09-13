#pragma once

namespace BSTEventDetail
{
    class SinkBase
    {
        virtual ~SinkBase() = 0;
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
class BSTEventSource
{
public:
    // Sinks go here
};

struct MenuOpenCloseEvent
{
    void*/*BSFixedString*/	MenuName;
    bool			bOpening;
};
