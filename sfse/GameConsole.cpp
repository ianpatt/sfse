#include "sfse/GameConsole.h"
#include <stdarg.h>

RelocPtr <ConsoleLog*> g_console(0x06A33590);

void Console_Print(const char* fmt, ...)
{
	ConsoleLog* mgr = *g_console;
	if (mgr)
	{
		va_list args;
		va_start(args, fmt);

		mgr->VPrint(fmt, args);

		va_end(args);
	}
}
