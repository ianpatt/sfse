#pragma once

#include "sfse_common/Relocation.h"
#include "sfse_common/Utilities.h"

class ConsoleLog
{
public:
	MEMBER_FN_PREFIX(ConsoleLog);
	DEFINE_MEMBER_FN(VPrint, void, 0x02883978, const char* fmt, va_list args);
};

extern RelocPtr <ConsoleLog*> g_console;

void Console_Print(const char* fmt, ...);
