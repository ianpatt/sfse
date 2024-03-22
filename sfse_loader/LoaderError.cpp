#include "LoaderError.h"
#include <cstdarg>
#include <cstdio>
#include <Windows.h>
#include "sfse_common/Log.h"

void PrintLoaderError(const char * fmt, ...)
{
	char	buf[4096];

	va_list	args;

	va_start(args, fmt);
	DebugLog::log(DebugLog::kLevel_FatalError, fmt, args);
	va_end(args);

	va_start(args, fmt);
	vsprintf_s(buf, sizeof(buf), fmt, args);
	va_end(args);

	MessageBox(NULL, buf, "SFSE Loader", MB_OK | MB_ICONEXCLAMATION);
}
