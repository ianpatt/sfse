#pragma once

#include "sfse_common/Relocation.h"
#include "sfse_common/Utilities.h"

class ConsoleLog
{
public:
	DEFINE_MEMBER_FN_2(VPrint, void, 0x028D8AD8, const char* fmt, va_list args);
};

extern RelocPtr <ConsoleLog*> g_console;

void Console_Print(const char* fmt, ...);
