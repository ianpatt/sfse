#include "Hooks_Scaleform.h"
#include "sfse_common/Relocation.h"
#include "sfse_common/Types.h"
#include "sfse_common/Log.h"
#include "sfse_common/SafeWrite.h"
#include "sfse_common/BranchTrampoline.h"
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
RelocAddr <_IMenu_LoadMovie> IMenu_LoadMovie(0x02E7D884); // IMenu vtable +7
_IMenu_LoadMovie IMenu_LoadMovie_Original = nullptr;

using _BSScaleformManager_ctor = BSScaleformManager*(*)(BSScaleformManager* __this);
RelocAddr <_BSScaleformManager_ctor> BSScaleformManager_ctor(0x02E7FF80);
_BSScaleformManager_ctor BSScaleformManager_ctor_Original = nullptr;

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

class SFSEScaleformLogger : public Scaleform::Log
{
public:
	virtual void LogMessageVarg(Scaleform::LogMessageId messageId, const char* fmt, va_list argList) final override
	{
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

		/*auto translator = (BSScaleformTranslator::ScaleformImpl*)ret->pLoader->GetStateAddRef(Scaleform::GFx::State::State_Translator);
		for (auto item : *translator->translationMap)
		{
			_MESSAGE("%ws - %ws", item.Key.c_str(), item.Value.c_str());
		}

		BSFixedStringWCS test(L"$ASTEROID BELTS");
		auto it = translator->translationMap->find(test);

		dumpClass(translator, 0x28 >> 3);*/
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
