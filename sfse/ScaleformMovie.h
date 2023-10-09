#pragma once

#include "sfse/ScaleformState.h"

namespace Scaleform
{
class MemoryHeap;
class Log;
class AmpMovieObjectDesc;
class String;

namespace Render
{
template<typename T>
class Point
{
    T x;
    T y;
};
namespace Text
{
class Allocator;
}
}

namespace GFx
{
class ASMovieRootBase;
class Movie : 
    public RefCountBase<Movie>,
    public StateBag
{
public:
    virtual ~Movie();

    enum SetVarType
    {
      SV_Normal,
      SV_Sticky1,
      SV_Permanent,
    };

    enum SetArrayType
    {
        SA_Int,
        SA_Double,
        SA_Float,
        SA_String,
        SA_StringW,
        SA_Value,
    };

    Ptr<ASMovieRootBase> pASMovieRoot;
};

class MovieImpl : public Movie
{
public:
    // More...
};

class MovieDefImpl;
class ASString;
class DisplayObject;
class InputEventsQueueEntry;
class InteractiveObject;
class ProcessFocusKeyInfo;
class EventId;
class OrientationEvent;
class AppLifecycleEvent;
class AccelerometerEvent;
class GeolocationEvent;
class Value;
class MemoryContext;
class ASStringManager;
class FunctionHandler;
class MouseState;
struct MovieDefRootNode;
class DisplayObjContainer;
class LoadQueueEntry;
class LoadStates;

class ASMovieRootBase : public RefCountBase<ASMovieRootBase>
{
public:
    virtual ~ASMovieRootBase() { };

    virtual void SetMovie(MovieImpl* pmovie) = 0;
    virtual void AdvanceFrame(bool nextFrame) = 0;
    virtual void ChangeMouseCursorType(unsigned int mouseIdx, unsigned int newCursorType) = 0;
    virtual bool CheckAvm() = 0;
    virtual void ClearDisplayList() = 0;
    virtual MovieDefRootNode* CreateMovieDefRootNode(MemoryHeap*, MovieDefImpl*, bool) = 0;
    virtual void DoActions() = 0;
    virtual InteractiveObject* FindTarget(const ASString& path) = 0;
    virtual void ForceCollect(unsigned int) = 0;
    virtual void ForceEmergencyCollect() = 0;
    virtual void SuspendGC(bool) = 0;
    virtual void ScheduleGC(unsigned int) = 0;
    virtual void GenerateMouseEvents(unsigned int) = 0;
    virtual void GenerateTouchEvents(unsigned int) = 0;
    virtual void GenerateGestureEvents(InteractiveObject*, unsigned int, const Render::Point<float>*, const Render::Point<float>*, const Render::Point<float>*, float, unsigned int) = 0;
    virtual DisplayObjContainer* GetRootMovie(DisplayObject*) = 0;
    virtual bool Init(MovieDefImpl*) = 0;
    virtual void NotifyMouseEvent(const InputEventsQueueEntry*, const MouseState*, int) = 0;
    virtual void NotifyOnResize() = 0;
    virtual void NotifyQueueSetFocus(InteractiveObject*, unsigned int, FocusMovedType) = 0;
    virtual void NotifyTransferFocus(InteractiveObject*, InteractiveObject*, unsigned int) = 0;
    virtual bool NotifyOnFocusChange(InteractiveObject*, InteractiveObject*, unsigned int, FocusMovedType, ProcessFocusKeyInfo*) = 0;
    virtual void NotifyGamePadAnalogEvent(const EventId*) = 0;
    virtual void NotifyStatusEvent(const EventId*) = 0;
    virtual void NotifyAccelerometerEvent(const EventId*, int) = 0;
    virtual void NotifyGeolocationEvent(const EventId*, int) = 0;
    virtual void OnMovieFocus(bool) = 0;
    virtual void OnNextFrame() = 0;
    virtual void OnDeviceOrientationChanged(const OrientationEvent*) = 0;
    virtual void OnAppLifecycleEvent(const AppLifecycleEvent*) = 0;
    virtual void OnAccelerometerEvent(const AccelerometerEvent*) = 0;
    virtual void OnGeolocationEvent(const GeolocationEvent*) = 0;
    virtual void PrintObjectsReport(unsigned int, Log*, const char*) = 0;
    virtual void GetObjectsTree(/*Array<Ptr<AmpMovieObjectDesc>, 2, ArrayDefaultPolicy>**/void*, MemoryHeap*) = 0;
    virtual AmpMovieObjectDesc* GetDisplayObjectsTree(MemoryHeap*) = 0;
    virtual void ProcessLoadQueueEntry(LoadQueueEntry*, LoadStates*) = 0;
    virtual void ProcessLoadVarsMT(LoadQueueEntry*, LoadStates*, const String*, unsigned __int64, bool) = 0;
    virtual void ProcessLoadBinaryMT(LoadQueueEntry*, LoadStates*, const /*ArrayPOD<unsigned char, 2, ArrayDefaultPolicy>**/void*, unsigned __int64, bool) = 0;
    virtual void RegisterAuxASClasses() = 0;
    virtual void ResolveStickyVariables(InteractiveObject*) = 0;
    virtual void SetExternalInterfaceRetVal(const Value&) = 0;
    virtual void SetMemoryParams(unsigned int, unsigned int) = 0;
    virtual void Shutdown() = 0;
    virtual void CreateString(Value* pvalue, const char* pstring) = 0;
    virtual void CreateStringW(Value* pvalue, const wchar_t* pstring) = 0;
    virtual void CreateObject(Value* pvalue, const char* className = nullptr, const Value* pargs = nullptr, unsigned int nargs = 0) = 0;
    virtual void CreateArray(Value* pvalue) = 0;
    virtual void CreateFunction(Value* pvalue, FunctionHandler* pfc, void* puserData = nullptr) = 0;
    virtual bool SetVariable(const char* ppathToVar, const Value& value, Movie::SetVarType setType = Movie::SV_Sticky1) = 0;
    virtual bool GetVariable(Value* pval, const char* ppathToVar) = 0;
    virtual bool SetVariableArray(Movie::SetArrayType type, const char* ppathToVar, unsigned int index, const void* pdata, unsigned int count, Movie::SetVarType = Movie::SV_Sticky1) = 0;
    virtual bool SetVariableArraySize(const char* ppathToVar, unsigned int count, Movie::SetVarType setType = Movie::SV_Sticky1) = 0;
    virtual unsigned int GetVariableArraySize(const char* ppathToVar) = 0;
    virtual bool GetVariableArray(Movie::SetArrayType type, const char* ppathToVar, unsigned int index, void* pdata, unsigned int count) = 0;
    virtual bool IsAvailable(const char* ppathToVar) = 0;
    virtual bool Invoke(const char* ppathToMethod, Value* presult, const char* pargFmt, ...) = 0;
    virtual bool Invoke(const char* ppathToMethod, Value* presult, const Value* pargs, unsigned int numArgs) = 0;
    virtual bool InvokeArgs(const char* ppathToMethod, Value* presult, const char* pargFmt, va_list args) = 0;
    virtual MemoryContext*  GetMemoryContext() = 0;
    virtual ASStringManager*  GetStringManager() = 0;
    virtual Render::Text::Allocator*  GetTextAllocator() = 0;
};
}
}
