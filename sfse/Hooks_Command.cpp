#include "Hooks_Command.h"
#include "sfse_common/Relocation.h"
#include "sfse_common/Types.h"
#include "sfse_common/Log.h"
#include "sfse_common/SafeWrite.h"
#include "sfse_common/BranchTrampoline.h"
#include "xbyak/xbyak.h"

#include <mutex>
#include <queue>
#include <vector>

using _Command_Process = bool (*)(void* __this);
RelocAddr <_Command_Process> Command_Process(0x03459918);
_Command_Process Command_Process_Original = nullptr;

namespace TaskInterface
{
std::recursive_mutex s_taskQueueLock;
std::queue<SFSETaskInterface::ITaskDelegate*> s_tasks;
std::vector<SFSETaskInterface::ITaskDelegate*> s_tasksPermanent;

bool Command_Process_Hook(void* __this)
{
	bool ret = Command_Process_Original(__this);

	std::lock_guard<std::recursive_mutex> lock(s_taskQueueLock);

	for (auto task : s_tasksPermanent)
	{
		task->Run();
	}

	while (!s_tasks.empty())
	{
		auto cmd = s_tasks.front();
		s_tasks.pop();
		cmd->Run();
		cmd->Destroy();
	}

	return ret;
}

void addTask(SFSETaskInterface::ITaskDelegate* task)
{
	std::lock_guard<std::recursive_mutex> lock(s_taskQueueLock);
	s_tasks.push(task);
}

void addTaskPermanent(SFSETaskInterface::ITaskDelegate* task)
{
	std::lock_guard<std::recursive_mutex> lock(s_taskQueueLock);
	s_tasksPermanent.push_back(task);
}
}

void Hooks_Command_Apply()
{
	{
		struct Command_Process_Code : Xbyak::CodeGenerator {
			Command_Process_Code(void* buf) : Xbyak::CodeGenerator(4096, buf)
			{
				Xbyak::Label retnLabel;
				mov(rax, rsp);
				mov(ptr[rax + 0x10], rbx);
				jmp(ptr[rip + retnLabel]);
				L(retnLabel);
				dq(Command_Process.getUIntPtr() + 7);
			}
		};
		void* codeBuf = g_localTrampoline.startAlloc();
		Command_Process_Code code(codeBuf);
		g_localTrampoline.endAlloc(code.getCurr());
		Command_Process_Original = (_Command_Process)codeBuf;
		g_branchTrampoline.write6Branch(Command_Process.getUIntPtr(), (uintptr_t)TaskInterface::Command_Process_Hook);
	}
}
