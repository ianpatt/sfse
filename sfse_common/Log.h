#pragma once

#include <cstdarg>
#include <cstdio>

class DebugLog
{
public:
	static void open(const char * path);
	static void openRelative(int folderID, const char * relPath);

	enum LogLevel
	{
		kLevel_FatalError = 0,
		kLevel_Error,
		kLevel_Warning,
		kLevel_Message,
		kLevel_VerboseMessage,
		kLevel_DebugMessage
	};

	static void log(LogLevel level, const char * fmt, va_list args);

private:
	static FILE * s_log;

	static LogLevel s_fileLevel;
	static LogLevel s_printLevel;

	static char s_formatBuf[8192];
};

inline void _FATALERROR(const char * fmt, ...)
{
	va_list args;

	va_start(args, fmt);
	DebugLog::log(DebugLog::kLevel_FatalError, fmt, args);
	va_end(args);
}

inline void _ERROR(const char * fmt, ...)
{
	va_list args;

	va_start(args, fmt);
	DebugLog::log(DebugLog::kLevel_Error, fmt, args);
	va_end(args);
}

inline void _WARNING(const char * fmt, ...)
{
	va_list args;

	va_start(args, fmt);
	DebugLog::log(DebugLog::kLevel_Warning, fmt, args);
	va_end(args);
}

inline void _MESSAGE(const char * fmt, ...)
{
	va_list args;

	va_start(args, fmt);
	DebugLog::log(DebugLog::kLevel_Message, fmt, args);
	va_end(args);
}

inline void _VMESSAGE(const char * fmt, ...)
{
	va_list args;

	va_start(args, fmt);
	DebugLog::log(DebugLog::kLevel_VerboseMessage, fmt, args);
	va_end(args);
}

inline void _DMESSAGE(const char * fmt, ...)
{
	va_list args;

	va_start(args, fmt);
	DebugLog::log(DebugLog::kLevel_DebugMessage, fmt, args);
	va_end(args);
}
