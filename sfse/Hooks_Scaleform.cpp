#include "Hooks_Scaleform.h"
#include "sfse_common/Relocation.h"
#include "sfse_common/Types.h"
#include "sfse_common/Log.h"
#include "sfse_common/SafeWrite.h"
#include "sfse_common/BranchTrampoline.h"
#include "sfse_common/Utilities.h"
#include "xbyak/xbyak.h"

#include "sfse/GameMenu.h"

#include "sfse/ScaleformManager.h"
#include "sfse/ScaleformMemory.h"
#include "sfse/ScaleformLog.h"
#include "sfse/ScaleformTranslator.h"

#include <stdarg.h>
#ifdef _DEBUG
#include <windows.h>
#endif

typedef bool(*_IMenu_LoadMovie)(IMenu* menu, bool addEventDispatcher, bool unk2);
RelocAddr <_IMenu_LoadMovie> IMenu_LoadMovie(0x03175204); // IMenu vtable +7
_IMenu_LoadMovie IMenu_LoadMovie_Original = nullptr;

using _BSScaleformManager_ctor = BSScaleformManager*(*)(BSScaleformManager* __this);
RelocAddr <_BSScaleformManager_ctor> BSScaleformManager_ctor(0x03177860);
_BSScaleformManager_ctor BSScaleformManager_ctor_Original = nullptr;

static bool s_enableScaleformLog = false;

static std::list<SFSEMenuInterface::MenuMovieCreatedCallback> s_menuPlugins;
void RegisterMenuPlugin(SFSEMenuInterface::MenuMovieCreatedCallback callback)
{
	s_menuPlugins.push_back(callback);
}

static std::list<SFSEMenuInterface::ScaleformManagerCreatedCallback> s_managerPlugins;
void RegisterManagerPlugin(SFSEMenuInterface::ScaleformManagerCreatedCallback callback)
{
	s_managerPlugins.push_back(callback);
}


bool IMenu_LoadMovie_Hook(IMenu* menu, bool addEventDispatcher, bool unk2)
{
	bool ret = IMenu_LoadMovie_Original(menu, addEventDispatcher, unk2);

	for (auto cb : s_menuPlugins)
	{
		cb(menu);
	}

	return ret;
}

class SFSEScaleformLogger : public Scaleform::Log
{
public:
	virtual void LogMessageVarg(Scaleform::LogMessageId messageId, const char* fmt, va_list argList) final override
	{
		if(!s_enableScaleformLog)
			return;

		DebugLog::log(DebugLog::kLevel_Message, fmt, argList);
#ifdef _DEBUG
		char szBuff[1024];
		vsnprintf_s(szBuff, sizeof(szBuff), fmt, argList);
		strcat_s(szBuff, "\n");
		OutputDebugString(szBuff);
#endif
	}

	DEFINE_STATIC_HEAP(ScaleformHeap_Allocate, ScaleformHeap_Free);
};

BSScaleformManager* BSScaleformManager_ctor_Hook(BSScaleformManager* __this)
{
	auto ret = BSScaleformManager_ctor_Original(__this);
	if (ret->pLoader)
	{
		ret->pLoader->SetState(Scaleform::GFx::State::State_Log, new Scaleform::GFx::LogState(new SFSEScaleformLogger));
	}

	for (auto cb : s_managerPlugins)
	{
		cb(ret);
	}
	
	return ret;
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

	u32 enableScaleformLog = 0;
	if(getConfigOption_u32("Scaleform", "EnableLog", &enableScaleformLog))
		s_enableScaleformLog = enableScaleformLog != 0;

	{
		struct BSScaleformManager_ctor_Code : Xbyak::CodeGenerator {
			BSScaleformManager_ctor_Code(void* buf) : Xbyak::CodeGenerator(4096, buf)
			{
				Xbyak::Label retnLabel;
				mov(ptr[rsp - 0x08 + 0x10], rcx);
				jmp(ptr[rip + retnLabel]);
				L(retnLabel);
				dq(BSScaleformManager_ctor.getUIntPtr() + 5);
			}
		};
		void* codeBuf = g_localTrampoline.startAlloc();
		BSScaleformManager_ctor_Code code(codeBuf);
		g_localTrampoline.endAlloc(code.getCurr());
		BSScaleformManager_ctor_Original = (_BSScaleformManager_ctor)codeBuf;
		g_branchTrampoline.write5Branch(BSScaleformManager_ctor.getUIntPtr(), (uintptr_t)BSScaleformManager_ctor_Hook);
	}
}
