#pragma once
#include <string>
#include "sfse_common/Types.h"
#include "sfse/PluginAPI.h"

namespace Serialization
{
	struct PluginCallbacks
	{

		SFSESerializationInterface::EventCallback		revert = nullptr;
		SFSESerializationInterface::EventCallback		save = nullptr;
		SFSESerializationInterface::EventCallback		load = nullptr;
		SFSESerializationInterface::FormDeleteCallback	formDelete = nullptr;

		u32										uid = 0;

		bool									hadUID = false;
		bool									hadData = false;
	};

	void SetSaveName(const char* name, bool hasExtension = false);
	void HandleBeginLoad();
	void HandleEndLoad();
	bool ResolveFormId(u32 formId, u32* formIdOut);
	bool ResolveHandle(u64 handle, u64* handleOut);
	void HandleRevertGlobalData();
	void HandleSaveGlobalData();
	void HandleLoadGlobalData();

	void HandleDeleteSave(std::string filePath);

	void SetUniqueID(PluginHandle plugin, u32 uid);
	void SetRevertCallback(PluginHandle plugin, SFSESerializationInterface::EventCallback callback);
	void SetSaveCallback(PluginHandle plugin, SFSESerializationInterface::EventCallback callback);
	void SetLoadCallback(PluginHandle plugin, SFSESerializationInterface::EventCallback callback);
	void SetFormDeleteCallback(PluginHandle plugin, SFSESerializationInterface::FormDeleteCallback callback);

	bool WriteRecord(u32 type, u32 version, const void* buf, u32 length);
	bool OpenRecord(u32 type, u32 version);
	bool WriteRecordData(const void* buf, u32 length);
	bool GetNextRecordInfo(u32* type, u32* version, u32* length);
	u32  ReadRecordData(void* buf, u32 length);
}
