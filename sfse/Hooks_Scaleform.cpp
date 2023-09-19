#include "Hooks_Scaleform.h"
#include "sfse_common/Relocation.h"
#include "sfse_common/Types.h"
#include "sfse_common/Log.h"
#include "sfse_common/SafeWrite.h"

#include <stdarg.h>
#ifdef _DEBUG
#include <windows.h>
#endif

// Scaleform::Log vtable
RelocAddr <uintptr_t> kHook_Scaleform_Log_Offset(0x04077C48 + 0x08);

void Scaleform_LogMessageVarg(void*/*Scaleform::GFx::Log::State* */ logger, u32 messageType, const char* fmt, va_list args)
{
    DebugLog::log(DebugLog::kLevel_Message, fmt, args);
#ifdef _DEBUG
    char szBuff[1024];
    vsnprintf_s(szBuff, sizeof(szBuff), fmt, args);
    strcat_s(szBuff, "\n");
    OutputDebugString(szBuff);
#endif
}

void Hooks_Scaleform_Apply()
{
    safeWrite64(kHook_Scaleform_Log_Offset, (uintptr_t)Scaleform_LogMessageVarg);
}