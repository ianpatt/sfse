#include "Relocation.h"
#include <Windows.h>

// the goal of this file is to support pointers in to a relocated binary with as little runtime overhead, code bloat, and hassle as possible
// 
// since the main executable will always be loaded before the dll, the easiest solution is to perform the relocation in the constructor of
// a pointer class that supports conversion to T*. however, since we can't control anything about initialization order, each constructor
// must call GetModuleHandle(NULL) locally, which sucks. each pointer will need an entry in the static init table, and nothing can be done
// with the pointers in any other static constructors.
// 
// one solution to this problem is init_seg(lib). any objects constructed in a file containing this pragma will be constructed before standard
// 'user' level code. this means we can use the constructor of that object to call GetModuleHandle once and initialize a global with the load
// address, which the pointer class constructor then references to fix up the addresses. this still creates an entry in the static init table
// for each pointer, but only calls GetModuleHandle once. pointers are not fixed up until all static init has finished, so other static ctors
// can't safely use pointers.
// 
// the problem can't be solved further without moving the RelocPtr constructors in to init_seg(lib), which doesn't appear to be possible
// without forcing all pointers to be defined in a file with init_seg(lib). that is really ugly and doesn't seem like a good idea.

// anything in this file will initialized after the crt but before any user code
#pragma warning(disable: 4073)	// yes this is intentional
#pragma init_seg(lib)

static RelocationManager s_relocMgr;

uintptr_t RelocationManager::s_baseAddr = 0;

RelocationManager::RelocationManager()
{
	s_baseAddr = reinterpret_cast<uintptr_t>(GetModuleHandle(NULL));
}
