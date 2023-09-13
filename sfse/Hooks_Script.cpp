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

bool GetSFSEVersion_Execute(const SCRIPT_PARAMETER* paramInfo, const char*, TESObjectREFR* thisObj, TESObjectREFR* containingObj, Script* script, ScriptLocals* locals, float* result, u32* opcodeOffsetPtr)
{
	_MESSAGE("GetSFSEVersion_Execute");

	Console_Print("SFSE version: %d.%d.%d, release idx %d, runtime %08X",
		SFSE_VERSION_INTEGER, SFSE_VERSION_INTEGER_MINOR, SFSE_VERSION_INTEGER_BETA,
		SFSE_VERSION_RELEASEIDX, RUNTIME_VERSION);

	return true;
}

typedef bool (*_ConsoleCommandInit)(void* unk1);
RelocAddr <_ConsoleCommandInit> ConsoleCommandInit(0x01AEB870);
_ConsoleCommandInit ConsoleCommandInit_Original = nullptr;

void ConsoleCommandInit_Hook(void* unk1)
{
	ConsoleCommandInit_Original(unk1);

	for (Script::SCRIPT_FUNCTION* iter = g_firstConsoleCommand; iter->eOutput < (Script::kScript_NumConsoleCommands + Script::kScript_ConsoleOpBase); ++iter)
	{
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
			break;
		}
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
