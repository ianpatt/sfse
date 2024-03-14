#include "sfse/ScaleformMemory.h"

RelocPtr<Scaleform::MemoryHeap*> Scaleform::Memory::pGlobalHeap(0x0605EF98);

void* ScaleformHeap_Allocate(u64 size)
{
	return (*Scaleform::Memory::pGlobalHeap)->Alloc(size);
}

void ScaleformHeap_Free(void* ptr)
{
	(*Scaleform::Memory::pGlobalHeap)->Free(ptr);
}