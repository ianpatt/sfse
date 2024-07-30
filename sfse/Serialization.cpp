#include "Serialization.h"
#include "GameEvents.h"

#include "sfse_common/Log.h"
#include "sfse_common/Errors.h"
#include "sfse_common/sfse_version.h"
#include "sfse_common/FileStream.h"
#include "sfse/GameSettings.h"

#include <ShlObj.h>
#include <unordered_map>
#include <unordered_set>
#include <io.h>

namespace Serialization
{
	const char* kSavegamePath = "\\My Games\\" SAVE_FOLDER_NAME "\\";

	std::unordered_map<u32, u32> changedIDs;
	std::unordered_set<u32> deletedIDs;
	std::string s_savePath;

	struct IDRemapDeleteListener :
		public BSTEventSink<TESFormIDRemapEvent>,
		public BSTEventSink<TESFormDeleteEvent>
	{
		IDRemapDeleteListener()
		{
			GetEventSource<TESFormIDRemapEvent>()->RegisterSink(static_cast<BSTEventSink<TESFormIDRemapEvent>*>(this));
			GetEventSource<TESFormDeleteEvent>()->RegisterSink(static_cast<BSTEventSink<TESFormDeleteEvent>*>(this));
		}

		virtual	EventResult	ProcessEvent(const TESFormIDRemapEvent& arEvent, BSTEventSource<TESFormIDRemapEvent>* eventSource)
		{
			changedIDs[arEvent.oldID] = arEvent.newID;
			return EventResult::kContinue;
		};

		virtual	EventResult	ProcessEvent(const TESFormDeleteEvent& arEvent, BSTEventSource<TESFormDeleteEvent>* eventSource)
		{
			deletedIDs.insert(arEvent.formId);
			return EventResult::kContinue;
		};
	};

	void RemoveFileExtension(std::string& path)
	{
		size_t lastDot = path.find_last_of('.');
		if (lastDot != std::string::npos) {
			path.erase(lastDot);
		}
	}

	std::string MakeSavePath(std::string name, const char* extension, bool hasExtension)
	{
		if (hasExtension)
		{
			RemoveFileExtension(name);
		}

		char path[MAX_PATH];
		ASSERT(SUCCEEDED(SHGetFolderPath(NULL, CSIDL_MYDOCUMENTS, NULL, SHGFP_TYPE_CURRENT, path)));

		std::string	result = path;
		result += kSavegamePath;
		Setting* localSavePath = (*SettingT<INISettingCollection>::pCollection)->GetSetting("sLocalSavePath:General");
		if (localSavePath && (localSavePath->GetType() == Setting::kType_String))
			result += localSavePath->data.s;
		else
			result += "Saves\\";

		result += "\\";
		result += name;
		if (extension)
			result += extension;
		return result;
	}

	void SetSaveName(const char* name, bool hasExtension)
	{
		if (name)
		{
			_MESSAGE("save name is %s", name);
			s_savePath = MakeSavePath(name, ".sfse", hasExtension);
			_MESSAGE("full save path: %s", s_savePath.c_str());
		}
		else
		{
			_MESSAGE("cleared save path");
			s_savePath.clear();
		}
	}

	void HandleBeginLoad()
	{
		//if the remap listener isn't already registered, register it now.
		static IDRemapDeleteListener listener{};
		changedIDs.clear();
		deletedIDs.clear();
	}

	void HandleEndLoad()
	{
		changedIDs.clear();
		deletedIDs.clear();
	}

	bool ResolveFormId(u32 formId, u32* formIdOut)
	{
		if (auto iter = changedIDs.find(formId); iter != changedIDs.end()) {
			(*formIdOut) = iter->second;
			return true;
		}
		
		if (deletedIDs.find(formId) == deletedIDs.end())
		{
			(*formIdOut) = formId;
			return true;
		}
		else
		{
			return false;
		}
	}

	bool ResolveHandle(u64 handle, u64* handleOut)
	{
		u32 formId = static_cast<u32>(handle & 0x00000000FFFFFFFF);
		if (auto iter = changedIDs.find(formId); iter != changedIDs.end()) {
			(*handleOut) = (handle & 0xFFFFFFFF00000000) | static_cast<u64>(iter->second);
			return true;
		}

		if (deletedIDs.find(formId) == deletedIDs.end())
		{
			(*handleOut) = handle;
			return true;
		}
		else
		{
			return false;
		}
	}

	void HandleRevertGlobalData()
	{
		_MESSAGE("RevertGlobalData");

		//TODO: add implementation for revert callbacks.
	}

	void HandleSaveGlobalData()
	{
		_MESSAGE("SaveGlobalData");

		//TODO: add implementation for serialization & save callbacks.
	}

	void HandleLoadGlobalData()
	{
		_MESSAGE("LoadGlobalData");

		//TODO: add implementation for deserialization & load callbacks.
	}

	void HandleDeleteSave(std::string filePath)
	{
		//check if old file is gone
		FileStream saveFile;
		if (!saveFile.open(filePath.c_str()))
		{
			RemoveFileExtension(filePath);
			filePath += ".sfse";
			_MESSAGE("deleting co-save %s", filePath.c_str());
			DeleteFile(filePath.c_str());
		}
		else
		{
			_MESSAGE("skipped delete of co-save for file %s", filePath.c_str());
		}
	}
}