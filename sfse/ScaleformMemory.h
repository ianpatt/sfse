#pragma once

#include "sfse/ScaleformTypes.h"
#include "sfse_common/Relocation.h"

namespace Scaleform
{
class StatBag;
class SysAllocPaged;
class AllocInfo;

class Heap
{
public:
    class SegVisitor {};
    class MemVisitor {};
};

class MemoryHeap
{
public:
    virtual ~MemoryHeap();

    class HeapDesc {};
    class LimitHandler {};
    class HeapTracer {};
    class RootStats {};
    class SegVisitor {};

    virtual void CreateArena(UPInt arena, SysAllocPaged*) = 0;
    virtual void DestroyArena(UPInt arena) = 0;
    virtual bool ArenaIsEmpty(UPInt arena) = 0;
    virtual MemoryHeap* CreateHeap(const char* name, const HeapDesc& desc) = 0;
    virtual void SetLimitHandler(LimitHandler* handler) = 0;
    virtual void SetLimit(UPInt newLimit) = 0;
    virtual void AddRef() = 0;
    virtual void Release() = 0;
    virtual void* Alloc(UPInt size, UPInt align, const AllocInfo* info = nullptr) = 0;
    virtual void* Alloc(UPInt size, const AllocInfo* info = nullptr) = 0;
    virtual void* Realloc(void* oldPtr, UPInt newSize) = 0;
    virtual void Free(void* ptr) = 0;
    virtual void* AllocAutoHeap(const void* thisPtr, UPInt size, UPInt align, const AllocInfo* info) = 0;
    virtual void* AllocAutoHeap(const void* thisPtr, UPInt size, const AllocInfo* info) = 0;
    virtual MemoryHeap* GetAllocHeap(const void* thisPtr) = 0;
    virtual UPInt GetUsableSize(const void* ptr) = 0;
    virtual void* AllocSysDirect(UPInt size) = 0;
    virtual void FreeSysDirect(void* ptr, UPInt size) = 0;
    virtual bool GetStats(StatBag* bag) = 0;
    virtual UPInt GetFootprint() const = 0;
    virtual UPInt GetTotalFootprint() const = 0;
    virtual UPInt GetUsedSpace() const = 0;
    virtual UPInt GetTotalUsedSpace() const = 0;
    virtual void GetRootStats(RootStats* stats) = 0;
    virtual void VisitMem(Heap::MemVisitor* visitor, unsigned int flags) = 0;
    virtual void VisitRootSegments(SegVisitor* visitor) = 0;
    virtual void VisitHeapSegments(SegVisitor* visitor) const = 0;
    virtual void SetTracer(HeapTracer* tracer) = 0;
    virtual void destroyItself() = 0;
    virtual void ultimateCheck() = 0;
    virtual void releaseCachedMem() = 0;
    virtual bool dumpMemoryLeaks() = 0;
    virtual void checkIntegrity() const = 0;
    virtual void getUserDebugStats(RootStats* stats) const = 0;

    // Members...
};
class Memory
{
public:
    static RelocPtr<MemoryHeap*> pGlobalHeap;
};
}

extern void* ScaleformHeap_Allocate(u64 size);
extern void ScaleformHeap_Free(void* ptr);