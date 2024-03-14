#include "Hooks_Version.h"
#include "sfse_common/SafeWrite.h"
#include "sfse_common/sfse_version.h"
#include "sfse_common/Errors.h"
#include "sfse_common/BranchTrampoline.h"
#include "sfse_common/Relocation.h"
#include "xbyak/xbyak.h"
#include <cstring>

const char * kHook_ShowVersion_FormatString =
	"%08x v%s [SFSE " __PREPRO_TOKEN_STR__(SFSE_VERSION_INTEGER) "."
	__PREPRO_TOKEN_STR__(SFSE_VERSION_INTEGER_MINOR) "."
	__PREPRO_TOKEN_STR__(SFSE_VERSION_INTEGER_BETA) "]";
RelocAddr <uintptr_t> kHook_ShowVersion_Offset(0x0203FE90 + 0x5D);

void Hooks_Version_Apply()
{
	// show SFSE version in main menu settings (not hooking ingame settings)
	{
		struct ShowVersion_Code: Xbyak::CodeGenerator {
			ShowVersion_Code(void * buf) : Xbyak::CodeGenerator(4096, buf)
			{
				Xbyak::Label retnLabel;
				Xbyak::Label dataLabel;

				mov(rdx, ptr[rip + dataLabel]);
				jmp(ptr[rip + retnLabel]);

				L(retnLabel);
				dq(kHook_ShowVersion_Offset.getUIntPtr() + 0x7);

				L(dataLabel);
				dq(uintptr_t(kHook_ShowVersion_FormatString));
			}
		};

		void * codeBuf = g_localTrampoline.startAlloc();
		ShowVersion_Code code(codeBuf);
		g_localTrampoline.endAlloc(code.getCurr());

		g_branchTrampoline.write6Branch(kHook_ShowVersion_Offset.getUIntPtr(), uintptr_t(code.getCode()));
		safeWrite8(kHook_ShowVersion_Offset.getUIntPtr() + 6, 0x90);
	}
}
