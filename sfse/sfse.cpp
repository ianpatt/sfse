#include <Windows.h>

HINSTANCE g_moduleHandle = nullptr;

extern "C" {
	void StartSFSE()
	{
		//
	}
	
	BOOL WINAPI DllMain(HANDLE hDllHandle, DWORD dwReason, LPVOID lpreserved)
	{
		switch(dwReason)
		{
		case DLL_PROCESS_ATTACH:
			g_moduleHandle = (HINSTANCE)hDllHandle;
			break;

		case DLL_PROCESS_DETACH:
			break;
		};

		return TRUE;
	}
}
