#pragma once

#include "sfse_common/Utilities.h"

class ScrapHeap // Has parent classes
{
public:
    virtual ~ScrapHeap();

    u64 unk08[(0x4B8 - 0x08) >> 3]; // 08
    u32 currentThreadId;            // 4B8
};
static_assert(offsetof(ScrapHeap, currentThreadId) == 0x4B8);

class MemoryManager
{
public:
    DEFINE_MEMBER_FN_3(Allocate, void*, 0x00547FF4, size_t size, size_t alignment, bool aligned);
    DEFINE_MEMBER_FN_2(Free, void, 0x0054FDE4, void* buf, bool aligned);
    DEFINE_MEMBER_FN_0(GetThreadScrapHeap, ScrapHeap*, 0x00834900);
};

using _GetMemoryManager = MemoryManager * (*)();
extern RelocAddr<_GetMemoryManager> GetMemoryManager;

void* Heap_Allocate(size_t size);
void Heap_Free(void* ptr);