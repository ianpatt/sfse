#include "sfse/GameMemory.h"

RelocAddr<_GetMemoryManager> GetMemoryManager(0x002B0700);

void* Heap_Allocate(size_t size)
{
    return GetMemoryManager()->Allocate(size, 0, false);
}

void Heap_Free(void* ptr)
{
    GetMemoryManager()->Free(ptr, false);
}
