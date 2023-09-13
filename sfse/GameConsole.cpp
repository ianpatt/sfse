#include "sfse/GameConsole.h"
#include <stdarg.h>

RelocPtr <ConsoleLog*> g_console(0x058F7A90);

void Console_Print(const char* fmt, ...)
{
	ConsoleLog* mgr = *g_console;
	if (mgr)
	{
		va_list args;
		va_start(args, fmt);

		CALL_MEMBER_FN(mgr, VPrint)(fmt, args);

		va_end(args);
	}
}
