#include "Hooks_Script.h"
#include "sfse/GameConsole.h"
#include "sfse/GameScript.h"
#include "sfse/GameReferences.h"
#include "sfse_common/SafeWrite.h"
#include "sfse_common/sfse_version.h"
#include "sfse_common/BranchTrampoline.h"
#include "sfse_common/Relocation.h"
#include "sfse_common/Log.h"
#include "xbyak/xbyak.h"

#ifdef _DEBUG
#include "sfse/GameObjects.h"
#include "sfse/GameChargen.h"
#include "sfse/GameSettings.h"
#include "sfse/GameUI.h"
#include "sfse/GameMenu.h"

bool Test_Execute(const SCRIPT_PARAMETER* paramInfo, const char*, TESObjectREFR* thisObj, TESObjectREFR* containingObj, Script* script, ScriptLocals* locals, float* result, u32* opcodeOffsetPtr)
{
	if (thisObj) {
		TESNPC* npc = (TESNPC*)thisObj->data.objectReference;

		/*dumpClass(thisObj, 0x1100 >> 3);
		_MESSAGE("Name: %s", npc->strFullName.c_str());
		dumpClass(npc, 0x488 >> 3);
		dumpClass(TESNPCData::ChargenDataModel::GetSingleton(), 0x700 >> 3);*/

		npc->MorphWeight.x = 1.0f;
		npc->MorphWeight.y = 1.0f;
		npc->MorphWeight.z = 1.0f;
		bool unk1 = false;
		u32 unk2 = 0x28;
		bool unk3 = false;
		static_cast<Actor*>(thisObj)->UpdateAppearance(unk1, unk2, unk3);
	}
	else
	{
		/*auto ui = UI::GetSingleton();
		//dumpClass(ui, 0x500 >> 3);
		for (u32 i = 0; i < ui->openMenus.size; ++i)
		{
			//dumpClass(ui->openMenus.pData[i], 0x658);
			if (ui->openMenus.pData[i]->MenuName == BSFixedString("ChargenMenu"))
			{
				auto chargenMenu = static_cast<ChargenMenu*>(ui->openMenus.pData[i]);
				if (chargenMenu->pPaperDoll)
				{
					dumpClass(chargenMenu->npc, sizeof(TESNPC) >> 3);
				}
			}
		}*/
		auto& gameSettings = (*SettingT<GameSettingCollection>::pCollection);
		auto setting = gameSettings->GetSetting("sSkinToneDisplayName");
		Console_Print("Game Settings: %s", setting->name);
	}
	Console_Print("Dump Complete");
	return true;
}
#endif

bool GetSFSEVersion_Execute(const SCRIPT_PARAMETER* paramInfo, const char*, TESObjectREFR* thisObj, TESObjectREFR* containingObj, Script* script, ScriptLocals* locals, float* result, u32* opcodeOffsetPtr)
{
	_MESSAGE("GetSFSEVersion_Execute");

	Console_Print("SFSE version: %d.%d.%d, release idx %d, runtime %08X",
		SFSE_VERSION_INTEGER, SFSE_VERSION_INTEGER_MINOR, SFSE_VERSION_INTEGER_BETA,
		SFSE_VERSION_RELEASEIDX, RUNTIME_VERSION);

	return true;
}

typedef bool (*_ConsoleCommandInit)(void* unk1);
RelocAddr <_ConsoleCommandInit> ConsoleCommandInit(0x01B78270);
_ConsoleCommandInit ConsoleCommandInit_Original = nullptr;

void ConsoleCommandInit_Hook(void* unk1)
{
	ConsoleCommandInit_Original(unk1);

	for (Script::SCRIPT_FUNCTION* iter = g_firstConsoleCommand; iter->eOutput < (Script::kScript_NumConsoleCommands + Script::kScript_ConsoleOpBase); ++iter)
	{
		if (!iter->pExecuteFunction)
			continue;

		if (!strcmp(iter->pFunctionName, "BetaComment"))
		{
			Script::SCRIPT_FUNCTION& cmd = *iter;
			cmd.pFunctionName = "GetSFSEVersion";
			cmd.pShortName = "";
			cmd.pHelpString = "";
			cmd.bReferenceFunction = 0;
			cmd.sParamCount = 0;
			cmd.pExecuteFunction = GetSFSEVersion_Execute;
			cmd.bEditorFilter = 0;
			cmd.bInvalidatesCellList = 0;
		}
#ifdef _DEBUG
		else if (!strcmp(iter->pFunctionName, "GameComment"))
		{
			Script::SCRIPT_FUNCTION& cmd = *iter;
			cmd.pFunctionName = "test";
			cmd.pShortName = "";
			cmd.pHelpString = "";
			cmd.bReferenceFunction = 0;
			cmd.sParamCount = 0;
			cmd.pExecuteFunction = Test_Execute;
			cmd.bEditorFilter = 0;
			cmd.bInvalidatesCellList = 0;
		}

		RelocAddr<void*> EmptyFunc(0x012178A0);
		_MESSAGE("%s (%s)", iter->pFunctionName, iter->pExecuteFunction == EmptyFunc ? "Empty" : "Implemented");
#endif
	}
}

void Hooks_Script_Apply()
{
	{
		struct ConsoleCommandInit_Code : Xbyak::CodeGenerator {
			ConsoleCommandInit_Code(void* buf) : Xbyak::CodeGenerator(4096, buf)
			{
				Xbyak::Label retnLabel;

				push(rbx);
				sub(rsp, 0x20);

				jmp(ptr[rip + retnLabel]);

				L(retnLabel);
				dq(ConsoleCommandInit.getUIntPtr() + 6);
			}
		};

		void* codeBuf = g_localTrampoline.startAlloc();
		ConsoleCommandInit_Code code(codeBuf);
		g_localTrampoline.endAlloc(code.getCurr());

		ConsoleCommandInit_Original = (_ConsoleCommandInit)codeBuf;

		g_branchTrampoline.write6Branch(ConsoleCommandInit.getUIntPtr(), (uintptr_t)ConsoleCommandInit_Hook);
	}
}
