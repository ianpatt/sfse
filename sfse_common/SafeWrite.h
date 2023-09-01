#pragma once

#include <cstdint>
#include "sfse_common/Types.h"

void safeWriteBuf(uintptr_t addr, void * data, size_t len);
void safeWrite8(uintptr_t addr, u8 data);
void safeWrite16(uintptr_t addr, u16 data);
void safeWrite32(uintptr_t addr, u32 data);
void safeWrite64(uintptr_t addr, u64 data);

// ### warning: if you try to branch more than +/- 2GB with these, they will fail and return false
// ### this is a limitation of the 'jmp' instruction and more generally the x64 ISA
// 5 bytes written to src
bool safeWriteJump(uintptr_t src, uintptr_t dst);
bool safeWriteCall(uintptr_t src, uintptr_t dst);
