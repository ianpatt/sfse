#include "BranchTrampoline.h"
#include "SafeWrite.h"
#include <climits>
#include <Windows.h>
#include "sfse_common/Log.h"
#include "sfse_common/Errors.h"

BranchTrampoline g_branchTrampoline;
BranchTrampoline g_localTrampoline;

BranchTrampoline::BranchTrampoline()
	:m_base(nullptr)
	, m_len(0)
	, m_allocated(0)
	, m_curAlloc(nullptr)
{
	//
}

BranchTrampoline::~BranchTrampoline()
{
	destroy();
}

bool BranchTrampoline::create(size_t len, void * module)
{
	if (!module) module = GetModuleHandle(NULL);

	// search backwards from module base
	uintptr_t moduleBase = uintptr_t(module);
	uintptr_t addr = moduleBase;
	uintptr_t maxDisplacement = 0x80000000 - (1024 * 1024 * 128); // largest 32-bit displacement with 128MB scratch space
	uintptr_t lowestOKAddress = (moduleBase >= maxDisplacement) ? moduleBase - maxDisplacement : 0;
	addr--;

	while (!m_base)
	{
		MEMORY_BASIC_INFORMATION info;

		if (!VirtualQuery((void *)addr, &info, sizeof(info)))
		{
			_ERROR("VirtualQuery failed: %08X", GetLastError());
			break;
		}

		if (info.State == MEM_FREE)
		{
			// free block, big enough?
			if (info.RegionSize >= len)
			{
				// try to allocate it
				addr = ((uintptr_t)info.BaseAddress) + info.RegionSize - len;

				m_base = (void *)VirtualAlloc((void *)addr, len, MEM_COMMIT | MEM_RESERVE, PAGE_EXECUTE_READWRITE);
				if (m_base)
				{
					m_len = len;
					m_allocated = 0;
				}
				else
				{
					_WARNING("trampoline alloc %016I64Xx%016I64X failed (%08X)", addr, len, GetLastError());
				}
			}
		}

		// move back and try again
		if (!m_base)
		{
			addr = ((uintptr_t)info.BaseAddress) - 1;
		}

		if (addr < lowestOKAddress)
		{
			_ERROR("couldn't allocate trampoline, no free space before image");
			break;
		}
	}

	return m_base != nullptr;
}

void BranchTrampoline::destroy()
{
	if (m_base)
	{
		VirtualFree(m_base, 0, MEM_RELEASE);
		m_base = nullptr;
	}
}

void BranchTrampoline::setBase(size_t len, void * base)
{
	ASSERT(!m_base);
	m_base = base;
	m_len = len;
	m_allocated = 0;
	m_curAlloc = nullptr;
}

void * BranchTrampoline::startAlloc()
{
	ASSERT(m_base);
	ASSERT(!m_curAlloc);

	m_curAlloc = ((u8 *)m_base) + m_allocated;

	return m_curAlloc;
}

void BranchTrampoline::endAlloc(const void * end)
{
	ASSERT(m_base);
	ASSERT(m_curAlloc);

	size_t len = uintptr_t(end) - uintptr_t(m_curAlloc);
	ASSERT(len <= remain());

	m_allocated += len;
	m_curAlloc = nullptr;
}

void * BranchTrampoline::allocate(size_t size)
{
	ASSERT(m_base);

	void * result = nullptr;

	if (size <= remain())
	{
		result = ((u8 *)m_base) + m_allocated;
		m_allocated += size;
	}

	return result;
}

bool BranchTrampoline::write6Branch(uintptr_t src, uintptr_t dst)
{
	return write6Branch_Internal(src, dst, 0x25);
}

bool BranchTrampoline::write6Call(uintptr_t src, uintptr_t dst)
{
	return write6Branch_Internal(src, dst, 0x15);
}

bool BranchTrampoline::write5Branch(uintptr_t src, uintptr_t dst)
{
	return write5Branch_Internal(src, dst, 0xE9);
}

bool BranchTrampoline::write5Call(uintptr_t src, uintptr_t dst)
{
	return write5Branch_Internal(src, dst, 0xE8);
}

bool BranchTrampoline::write6Branch_Internal(uintptr_t src, uintptr_t dst, u8 op)
{
	bool result = false;

	uintptr_t * trampoline = (uintptr_t *)allocate();
	if (trampoline)
	{
		uintptr_t	trampolineAddr = (uintptr_t)trampoline;
		uintptr_t	nextInstr = src + 6;
		ptrdiff_t	trampolineDispl = trampolineAddr - nextInstr;

		if ((trampolineDispl >= _I32_MIN) && (trampolineDispl <= _I32_MAX))
		{
			u8	code[6];

			// jmp [rip+imm32]
			code[0] = 0xFF;
			code[1] = op;
			*((s32 *)&code[2]) = (s32)trampolineDispl;

			safeWriteBuf(src, code, sizeof(code));

			*trampoline = dst;

			result = true;
		}
	}

	// do this for now so it's obvious when something goes wrong
	ASSERT(result);

	return result;
}

bool BranchTrampoline::write5Branch_Internal(uintptr_t src, uintptr_t dst, u8 op)
{
	bool result = false;

#pragma pack(push, 1)
	// code placed in trampoline
	struct TrampolineCode
	{
		// jmp [rip]
		u8	escape;	// FF
		u8	modrm;	// 25
		u32	displ;	// 00000000
		// rip points here
		u64	dst;	// target

		void Init(uintptr_t _dst)
		{
			escape = 0xFF;
			modrm = 0x25;
			displ = 0;
			dst = _dst;
		}
	};

	struct HookCode
	{
		// jmp disp32
		u8	op;		// E9 for jmp, E8 for call
		s32	displ;	// 

		void Init(s32 _displ, u8 _op)
		{
			op = _op;
			displ = _displ;
		}
	};
#pragma pack(pop)

	STATIC_ASSERT(sizeof(TrampolineCode) == 14);
	STATIC_ASSERT(sizeof(HookCode) == 5);

	TrampolineCode * trampolineCode = (TrampolineCode *)allocate(sizeof(TrampolineCode));
	if (trampolineCode)
	{
		trampolineCode->Init(dst);

		HookCode hookCode;

		uintptr_t	trampolineAddr = uintptr_t(trampolineCode);
		uintptr_t	nextInstr = src + sizeof(hookCode);
		ptrdiff_t	trampolineDispl = trampolineAddr - nextInstr;

		// should never fail because we're branching in to the trampoline
		ASSERT((trampolineDispl >= _I32_MIN) && (trampolineDispl <= _I32_MAX));

		hookCode.Init(trampolineDispl, op);

		safeWriteBuf(src, &hookCode, sizeof(hookCode));

		result = true;
	}

	// do this for now so it's obvious when something goes wrong
	ASSERT(result);

	return result;
}
