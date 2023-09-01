#include "Log.h"
#include "Errors.h"
#include "FileStream.h"
#include <share.h>
#include <shlobj.h>

FILE * DebugLog::s_log = nullptr;
DebugLog::LogLevel DebugLog::s_fileLevel = DebugLog::kLevel_DebugMessage;
DebugLog::LogLevel DebugLog::s_printLevel = DebugLog::kLevel_Message;
char DebugLog::s_formatBuf[8192] = { 0 };

void DebugLog::open(const char * path)
{
	s_log = _fsopen(path, "w", _SH_DENYWR);
}

void DebugLog::openRelative(int folderID, const char * relPath)
{
	char	path[MAX_PATH];

	HRESULT err = SHGetFolderPath(NULL, folderID | CSIDL_FLAG_CREATE, NULL, SHGFP_TYPE_CURRENT, path);
	if(!SUCCEEDED(err))
	{
		_FATALERROR("Your virus scanner is blocking access to your My Documents folder. SHGetFolderPath %08X failed (result = %08X lasterr = %08X)", folderID, err, GetLastError());
	}
	ASSERT_CODE(SUCCEEDED(err), err);

	strcat_s(path, sizeof(path), relPath);

	FileStream::makeDirs(path);

	open(path);
}

void DebugLog::log(LogLevel level, const char * fmt, va_list args)
{
	bool	toFile = (level <= s_fileLevel);
	bool	toConsole = (level <= s_printLevel);

	static FILE * s_stdout = nullptr;

	if(toFile || toConsole)
	{
		vsprintf_s(s_formatBuf, sizeof(s_formatBuf), fmt, args);
		strcat_s(s_formatBuf, sizeof(s_formatBuf), "\n");
	}

	if(toFile && s_log)
		fputs(s_formatBuf, s_log);

	if(toConsole)
	{
		if(!s_stdout)
			s_stdout = stdout;

		if(s_stdout)
			fputs(s_formatBuf, s_stdout);
	}
}

void DebugLog::flush()
{
	if(s_log)
		fflush(s_log);
}
