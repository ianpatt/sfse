#pragma once
#include <string>
#include "sfse_common/Types.h"

namespace Serialization
{
	void SetSaveName(const char* name, bool hasExtension = false);
	void HandleBeginLoad();
	void HandleEndLoad();
	bool ResolveFormId(u32 formId, u32* formIdOut);
	bool ResolveHandle(u64 handle, u64* handleOut);
	void HandleRevertGlobalData();
	void HandleSaveGlobalData();
	void HandleLoadGlobalData();

	void HandleDeleteSave(std::string filePath);
}