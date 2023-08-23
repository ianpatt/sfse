#include "LoaderError.h"
#include "IdentifyEXE.h"
#include "sfse_common/FileStream.h"
#include "sfse_common/Log.h"
#include <Windows.h>

// remote thread creation

static bool DoInjectDLLThread(PROCESS_INFORMATION * info, const char * dllPath, bool sync, bool noTimeout);

bool InjectDLLThread(PROCESS_INFORMATION * info, const char * dllPath, bool sync, bool noTimeout)
{
	bool	result = false;

	// wrap DLL injection in SEH, if it crashes print a message
	__try {
		result = DoInjectDLLThread(info, dllPath, sync, noTimeout);
	}
	__except(EXCEPTION_EXECUTE_HANDLER)
	{
		PrintLoaderError("DLL injection failed. In most cases, this is caused by an overly paranoid software firewall or antivirus package. Disabling either of these may solve the problem.");
		result = false;
	}

	return result;
}

/*
	48:83EC 28               | sub rsp, 28                             |
	48:8BD9                  | mov rbx,rcx                             | save to non-volatile register
	48:8D4B 10               | lea rcx,qword ptr ds:[rbx+10]           | offsetof(InjectDLLThreadData, dllPath)
	FF13                     | call qword ptr ds:[rbx]                 | offsetof(InjectDLLThreadData, loadLibraryA)
	48:8BC8                  | mov rcx,rax                             |
	BA 01000000              | mov edx,1                               |
	FF53 08                  | call qword ptr ds:[rbx+8]               | offsetof(InjectDLLThreadData, getProcAddress)
	FFD0                     | call rax                                |
	48:83C4 28               | add rsp, 28                             |
	C3                       | ret                                     |
*/

struct InjectDLLThreadData
{
	InjectDLLThreadData(uintptr_t _loadLibraryA, uintptr_t _getProcAddress, const char * _dllPath)
	{
		memset(this, 0, sizeof(*this));
		loadLibraryA = _loadLibraryA;
		getProcAddress = _getProcAddress;
		strcpy_s(dllPath, sizeof(dllPath), _dllPath);
		
		static const u8 kCode[] =
		{
			0x48, 0x83, 0xEC, 0x28,
			0x48, 0x8B, 0xD9,
			0x48, 0x8D, 0x4B, 0x10,
			0xFF, 0x13,
			0x48, 0x8B, 0xC8,
			0xBA, 0x01, 0x00, 0x00, 0x00,
			0xFF, 0x53, 0x08,
			0xFF, 0xD0,
			0x48, 0x83, 0xC4, 0x28,
			0xC3,
		};
		
		memcpy(code, kCode, sizeof(kCode));
	}
	
	uintptr_t	loadLibraryA;		// 00
	uintptr_t	getProcAddress;		// 08
	char		dllPath[2048];		// 10
	u8			code[128];			// 810
};

static bool DoInjectDLLThread(PROCESS_INFORMATION * info, const char * dllPath, bool sync, bool noTimeout)
{
	bool	result = false;

	// make sure the dll exists
	FileStream	fileCheck;
	if(!fileCheck.open(dllPath))
	{
		PrintLoaderError("Couldn't find %s.", dllPath);
		return false;
	}

	fileCheck.close();

	HANDLE	process = OpenProcess(
		PROCESS_CREATE_THREAD | PROCESS_QUERY_INFORMATION | PROCESS_VM_OPERATION | PROCESS_VM_WRITE | PROCESS_VM_READ, FALSE, info->dwProcessId);
	if(process)
	{
		uintptr_t	hookBase = (uintptr_t)VirtualAllocEx(process, NULL, 8192, MEM_COMMIT, PAGE_EXECUTE_READWRITE);
		if(hookBase)
		{
			// safe because kernel32 is loaded at the same address in all processes
			// (can change across restarts)
			uintptr_t	loadLibraryAAddr = (uintptr_t)GetProcAddress(GetModuleHandle("kernel32.dll"), "LoadLibraryA");
			uintptr_t	getProcAddressAddr = (uintptr_t)GetProcAddress(GetModuleHandle("kernel32.dll"), "GetProcAddress");

			_MESSAGE("hookBase = %016I64X", hookBase);
			_MESSAGE("loadLibraryAAddr = %016I64X", loadLibraryAAddr);
			_MESSAGE("getProcAddressAddr = %016I64X", getProcAddressAddr);
			
			InjectDLLThreadData data(loadLibraryAAddr, getProcAddressAddr, dllPath);

			size_t	bytesWritten;
			WriteProcessMemory(process, (LPVOID)hookBase, (void *)&data, sizeof(data), &bytesWritten);

			auto * remoteData = (InjectDLLThreadData *)hookBase;

			HANDLE	thread = CreateRemoteThread(process, NULL, 0, (LPTHREAD_START_ROUTINE)(&remoteData->code), (void *)remoteData, 0, NULL);
			if(thread)
			{
				if(sync)
				{
					switch(WaitForSingleObject(thread, noTimeout ? INFINITE : 1000 * 60))	// timeout = one minute
					{
					case WAIT_OBJECT_0:
						_MESSAGE("hook thread complete");
						result = true;
						break;

					case WAIT_ABANDONED:
						_ERROR("Process::InstallHook: waiting for thread = WAIT_ABANDONED");
						break;

					case WAIT_TIMEOUT:
						_ERROR("Process::InstallHook: waiting for thread = WAIT_TIMEOUT");
						break;
					}
				}
				else
					result = true;

				CloseHandle(thread);
			}
			else
				_ERROR("CreateRemoteThread failed (%d)", GetLastError());

			VirtualFreeEx(process, (LPVOID)hookBase, 0, MEM_RELEASE);
		}
		else
			_ERROR("Process::InstallHook: couldn't allocate memory in target process");

		CloseHandle(process);
	}
	else
		_ERROR("Process::InstallHook: couldn't get process handle");

	return result;
}
