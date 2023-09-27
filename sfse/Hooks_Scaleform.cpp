#include "Hooks_Scaleform.h"
#include "sfse_common/Relocation.h"
#include "sfse_common/Types.h"
#include "sfse_common/Log.h"
#include "sfse_common/SafeWrite.h"
#include "sfse_common/BranchTrampoline.h"
#include "xbyak/xbyak.h"

#include "sfse/GameMenu.h"

#include <stdarg.h>
#ifdef _DEBUG
#include <windows.h>
#endif

// Scaleform::Log vtable
RelocAddr <uintptr_t> kHook_Scaleform_Log_Offset(0x0407AC48 + 0x08);

typedef bool(*_IMenu_LoadMovie)(IMenu* menu, bool addEventDispatcher, bool unk2);
RelocAddr <_IMenu_LoadMovie> IMenu_LoadMovie(0x02E7D434); // IMenu vtable +7
_IMenu_LoadMovie IMenu_LoadMovie_Original = nullptr;

static std::list<SFSEMenuInterface::RegisterCallback> s_plugins;
void RegisterMenuPlugin(SFSEMenuInterface::RegisterCallback callback)
{
	s_plugins.push_back(callback);
}

bool IMenu_LoadMovie_Hook(IMenu* menu, bool addEventDispatcher, bool unk2)
{
	bool ret = IMenu_LoadMovie_Original(menu, addEventDispatcher, unk2);

	for (auto cb : s_plugins)
	{
		cb(menu);
	}

	return ret;
}

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
	{
		struct IMenu_LoadMovie_Code : Xbyak::CodeGenerator {
			IMenu_LoadMovie_Code(void* buf) : Xbyak::CodeGenerator(4096, buf)
			{
				Xbyak::Label retnLabel;
				mov(ptr[rsp + 0x10], rbx);
				jmp(ptr[rip + retnLabel]);
				L(retnLabel);
				dq(IMenu_LoadMovie.getUIntPtr() + 5);
			}
		};
		void* codeBuf = g_localTrampoline.startAlloc();
		IMenu_LoadMovie_Code code(codeBuf);
		g_localTrampoline.endAlloc(code.getCurr());
		IMenu_LoadMovie_Original = (_IMenu_LoadMovie)codeBuf;
		g_branchTrampoline.write5Branch(IMenu_LoadMovie.getUIntPtr(), (uintptr_t)IMenu_LoadMovie_Hook);
	}

    safeWrite64(kHook_Scaleform_Log_Offset, (uintptr_t)Scaleform_LogMessageVarg);
}
