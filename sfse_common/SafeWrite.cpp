#include "SafeWrite.h"
#include <Windows.h>
#include "sfse_common/Errors.h"

void safeWriteBuf(uintptr_t addr, void * data, size_t len)
{
	DWORD oldProtect;

	VirtualProtect((void *)addr, len, PAGE_EXECUTE_READWRITE, &oldProtect);
	memcpy((void *)addr, data, len);
	VirtualProtect((void *)addr, len, oldProtect, &oldProtect);
}

void safeWrite8(uintptr_t addr, u8 data)
{
	safeWriteBuf(addr, &data, sizeof(data));
}

void safeWrite16(uintptr_t addr, u16 data)
{
	safeWriteBuf(addr, &data, sizeof(data));
}

void safeWrite32(uintptr_t addr, u32 data)
{
	safeWriteBuf(addr, &data, sizeof(data));
}

void safeWrite64(uintptr_t addr, u64 data)
{
	safeWriteBuf(addr, &data, sizeof(data));
}

static bool safeWriteJump_Internal(uintptr_t src, uintptr_t dst, u8 op)
{
#pragma pack(push, 1)
	struct Code
	{
		u8	op;
		s32	displ;
	};
#pragma pack(pop)

	STATIC_ASSERT(sizeof(Code) == 5);

	ptrdiff_t delta = dst - (src + sizeof(Code));
	if((delta < INT_MIN) || (delta > INT_MAX))
		return false;

	Code code;

	code.op = op;
	code.displ = delta;

	safeWriteBuf(src, &code, sizeof(code));

	return true;
}

bool safeWriteJump(uintptr_t src, uintptr_t dst)
{
	return safeWriteJump_Internal(src, dst, 0xE9);
}

bool safeWriteCall(uintptr_t src, uintptr_t dst)
{
	return safeWriteJump_Internal(src, dst, 0xE8);
}
