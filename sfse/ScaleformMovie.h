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

class ASMovieRootBase : public RefCountBase<ASMovieRootBase>
{
public:
    virtual ~ASMovieRootBase();

    virtual void SetMovie(MovieImpl*);
    virtual void AdvanceFrame(bool);
    virtual void ChangeMouseCursorType(unsigned int, unsigned int);
    virtual bool CheckAvm();
    virtual void ClearDisplayList();
    virtual MovieDefRootNode* CreateMovieDefRootNode(MemoryHeap*, MovieDefImpl*, bool);
    virtual void DoActions();
    virtual InteractiveObject* FindTarget(const ASString*);
    virtual void ForceCollect(unsigned int);
    virtual void ForceEmergencyCollect();
    virtual void SuspendGC(bool);
    virtual void ScheduleGC(unsigned int);
    virtual void GenerateMouseEvents(unsigned int);
    virtual void GenerateTouchEvents(unsigned int);
    virtual void GenerateGestureEvents(InteractiveObject*, unsigned int, const Render::Point<float>*, const Render::Point<float>*, const Render::Point<float>*, float, unsigned int);
    virtual DisplayObjContainer* GetRootMovie(DisplayObject*);
    virtual bool Init(MovieDefImpl*);
    virtual void NotifyMouseEvent(const InputEventsQueueEntry*, const MouseState*, int);
    virtual void NotifyOnResize();
    virtual void NotifyQueueSetFocus(InteractiveObject*, unsigned int, FocusMovedType);
    virtual void NotifyTransferFocus(InteractiveObject*, InteractiveObject*, unsigned int);
    virtual bool NotifyOnFocusChange(InteractiveObject*, InteractiveObject*, unsigned int, FocusMovedType, ProcessFocusKeyInfo*);
    virtual void NotifyGamePadAnalogEvent(const EventId*);
    virtual void NotifyStatusEvent(const EventId*);
    virtual void NotifyAccelerometerEvent(const EventId*, int);
    virtual void NotifyGeolocationEvent(const EventId*, int);
    virtual void OnMovieFocus(bool);
    virtual void OnNextFrame();
    virtual void OnDeviceOrientationChanged(const OrientationEvent*);
    virtual void OnAppLifecycleEvent(const AppLifecycleEvent*);
    virtual void OnAccelerometerEvent(const AccelerometerEvent*);
    virtual void OnGeolocationEvent(const GeolocationEvent*);
    virtual void PrintObjectsReport(unsigned int, Log*, const char*);
    virtual void GetObjectsTree(struct /*Array<Ptr<AmpMovieObjectDesc>, 2, ArrayDefaultPolicy>**/void*, MemoryHeap*);
    virtual AmpMovieObjectDesc* GetDisplayObjectsTree(MemoryHeap*);
    virtual void ProcessLoadQueueEntry(LoadQueueEntry*, LoadStates*);
    virtual void ProcessLoadVarsMT(LoadQueueEntry*, LoadStates*, const String*, unsigned __int64, bool);
    virtual void ProcessLoadBinaryMT(LoadQueueEntry*, LoadStates*, const /*ArrayPOD<unsigned char, 2, ArrayDefaultPolicy>**/void*, unsigned __int64, bool);
    virtual void RegisterAuxASClasses();
    virtual void ResolveStickyVariables(InteractiveObject*);
    virtual void SetExternalInterfaceRetVal(const Value*);
    virtual void SetMemoryParams(unsigned int, unsigned int);
    virtual void Shutdown();
    virtual void CreateString(Value*, const char*);
    virtual void CreateStringW(Value*, const wchar_t*);
    virtual void CreateObject(Value*, const char*, const Value*, unsigned int);
    virtual void CreateArray(Value*);
    virtual void CreateFunction(Value*, FunctionHandler*, void*);
    virtual bool SetVariable(const char*, const Value*, Movie::SetVarType);
    virtual bool GetVariable(Value*, const char*);
    virtual bool SetVariableArray(Movie::SetArrayType, const char*, unsigned int, const void*, unsigned int, Movie::SetVarType);
    virtual bool SetVariableArraySize(const char*, unsigned int, Movie::SetVarType);
    virtual unsigned int GetVariableArraySize(const char*);
    virtual bool GetVariableArray(Movie::SetArrayType, const char*, unsigned int, void*, unsigned int);
    virtual bool IsAvailable(const char*);
    virtual bool Invoke(const char*, Value*, const char*, ...);
    virtual bool Invoke(const char*, Value*, const Value*, unsigned int);
    virtual bool InvokeArgs(const char*, Value*, const char*, char*);
    virtual MemoryContext*  GetMemoryContext();
    virtual ASStringManager*  GetStringManager();
    virtual Render::Text::Allocator*  GetTextAllocator();
};
}
}