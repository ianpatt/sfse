#include "Serialization.h"
#include "GameEvents.h"

#include "sfse_common/Log.h"
#include "sfse_common/Errors.h"
#include "sfse_common/sfse_version.h"
#include "sfse_common/FileStream.h"
#include "sfse/GameSettings.h"
#include "sfse/PluginManager.h"

#include <ShlObj.h>
#include <mutex>
#include <unordered_map>
#include <unordered_set>
#include <vector>
#include <io.h>

namespace Serialization
{
#define MACRO_SWAP32(a)			((((a) & 0x000000FF) << 24) | (((a) & 0x0000FF00) << 8) | (((a) & 0x00FF0000) >> 8) | (((a) & 0xFF000000) >> 24))

	const char* kSavegamePath = "\\My Games\\" SAVE_FOLDER_NAME "\\";

	struct Header
	{
		enum
		{
			kSignature =		MACRO_SWAP32('SFSE'),	// endian-swapping so the order matches
			kVersion =			1,
			kVersion_Invalid =	0
		};
		u32	magic;
		u32	formatVersion;
		u32	sfseVersion;
		u32	runtimeVersion;
		u32	numPlugins;
	};

	struct PluginHeader
	{
		u32	signature;
		u32	numChunks;
		u32	length;
	};

	struct ChunkHeader
	{
		u32	type;
		u32	version;
		u32	length;
	};

	std::unordered_map<u32, u32> changedIDs;
	std::unordered_set<u32> deletedIDs;
	std::string		s_savePath;
	FileStream		s_currentFile;

	std::mutex s_remapLock;
	std::mutex s_callbackLock;
	std::unordered_map<PluginHandle, PluginCallbacks> s_pluginCallbacks;

	Header			s_fileHeader = { 0 };

	u64				s_pluginHeaderOffset = 0;
	PluginHeader	s_pluginHeader = { 0 };

	bool			s_chunkOpen = false;
	u64				s_chunkHeaderOffset = 0;
	ChunkHeader		s_chunkHeader = { 0 };

	struct CallbackSnapshot
	{
		PluginHandle handle;
		PluginCallbacks callbacks;
	};

	std::vector<CallbackSnapshot> GetCallbackSnapshot()
	{
		std::lock_guard<std::mutex> locker(s_callbackLock);

		std::vector<CallbackSnapshot> result;
		result.reserve(s_pluginCallbacks.size());
		for (const auto& iter : s_pluginCallbacks)
		{
			result.push_back({ iter.first, iter.second });
		}
		return result;
	}

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
			std::lock_guard<std::mutex> locker(s_remapLock);
			changedIDs[arEvent.oldID] = arEvent.newID;
			return EventResult::kContinue;
		};

		virtual	EventResult	ProcessEvent(const TESFormDeleteEvent& arEvent, BSTEventSource<TESFormDeleteEvent>* eventSource)
		{
			{
				std::lock_guard<std::mutex> locker(s_remapLock);
				deletedIDs.insert(arEvent.formId);
			}

			std::vector<CallbackSnapshot> callbacks = GetCallbackSnapshot();
			for (const auto& iter : callbacks)
			{
				if (iter.callbacks.formDelete)
				{
					try
					{
						iter.callbacks.formDelete(arEvent.formId);
					}
					catch (...)
					{
						_ERROR("FormDelete callback for plugin %u failed", iter.handle);
					}
				}
			}
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
		std::lock_guard<std::mutex> locker(s_remapLock);
		changedIDs.clear();
		deletedIDs.clear();
	}

	void HandleEndLoad()
	{
		std::lock_guard<std::mutex> locker(s_remapLock);
		changedIDs.clear();
		deletedIDs.clear();
	}

	bool ResolveFormId(u32 formId, u32* formIdOut)
	{
		std::lock_guard<std::mutex> locker(s_remapLock);
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
		std::lock_guard<std::mutex> locker(s_remapLock);
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
		std::vector<CallbackSnapshot> callbacks = GetCallbackSnapshot();
		for (const auto& iter : callbacks)
		{
			if (iter.callbacks.revert)
			{
				try
				{
					iter.callbacks.revert(&g_SFSESerializationInterface);
				}
				catch (...)
				{
					_ERROR("Revert callback for plugin %u failed", iter.handle);
				}
			}
		}
	}

	bool WriteRecord(u32 type, u32 version, const void* buf, u32 length)
	{
		if (!OpenRecord(type, version))
			return false;

		return WriteRecordData(buf, length);
	}

	// flush a chunk header to the file if one is currently open
	static void FlushWriteChunk(void)
	{
		if (!s_chunkOpen)
			return;

		u64	curOffset = s_currentFile.offset();
		u64	chunkSize = curOffset - s_chunkHeaderOffset - sizeof(s_chunkHeader);

		ASSERT(chunkSize < 0x80000000);	// stupidity check

		s_chunkHeader.length = (u32)chunkSize;

		s_currentFile.seek(s_chunkHeaderOffset);
		s_currentFile.write(&s_chunkHeader, sizeof(s_chunkHeader));

		s_currentFile.seek(curOffset);

		s_pluginHeader.length += (u32)(chunkSize + sizeof(s_chunkHeader));

		s_chunkOpen = false;
	}

	bool OpenRecord(u32 type, u32 version)
	{
		if (!s_pluginHeader.numChunks)
		{
			ASSERT(!s_chunkOpen);

			s_pluginHeaderOffset = s_currentFile.offset();
			s_currentFile.skip(sizeof(s_pluginHeader));
		}

		FlushWriteChunk();

		s_chunkHeaderOffset = s_currentFile.offset();
		s_currentFile.skip(sizeof(s_chunkHeader));

		s_pluginHeader.numChunks++;

		s_chunkHeader.type = type;
		s_chunkHeader.version = version;
		s_chunkHeader.length = 0;

		s_chunkOpen = true;

		return true;
	}

	bool WriteRecordData(const void* buf, u32 length)
	{
		s_currentFile.write(buf, length);

		return true;
	}

	static void FlushReadRecord(void)
	{
		if (s_chunkOpen)
		{
			if (s_chunkHeader.length)
			{
				// _WARNING("plugin didn't finish reading chunk");
				s_currentFile.skip(s_chunkHeader.length);
			}

			s_chunkOpen = false;
		}
	}

	bool GetNextRecordInfo(u32* type, u32* version, u32* length)
	{
		FlushReadRecord();

		if (!s_pluginHeader.numChunks)
			return false;

		s_pluginHeader.numChunks--;

		s_currentFile.read(&s_chunkHeader, sizeof(s_chunkHeader));

		*type =		s_chunkHeader.type;
		*version =	s_chunkHeader.version;
		*length =	s_chunkHeader.length;

		s_chunkOpen = true;

		return true;
	}

	u32 ReadRecordData(void* buf, u32 length)
	{
		ASSERT(s_chunkOpen);

		if (length > s_chunkHeader.length)
			length = s_chunkHeader.length;

		s_currentFile.read(buf, length);

		s_chunkHeader.length -= length;

		return length;
	}

	void HandleSaveGlobalData()
	{
		_MESSAGE("creating co-save");

		if (s_savePath.empty())
		{
			return;
		}

		// write to a temp file, then swap it in once the save is complete so a
		// crash mid-save can't destroy the previous co-save
		std::string tempPath = s_savePath + ".tmp";
		FileStream::makeDirs(tempPath.c_str());
		if (!s_currentFile.create(tempPath.c_str()))
		{
			_ERROR("HandleSaveGlobalData: couldn't create save file (%s)", tempPath.c_str());
			return;
		}

		try
		{
			// init header
			s_fileHeader.magic =			Header::kSignature;
			s_fileHeader.formatVersion =	Header::kVersion;
			s_fileHeader.sfseVersion =		PACKED_SFSE_VERSION;
			s_fileHeader.runtimeVersion =	RUNTIME_VERSION;
			s_fileHeader.numPlugins =		0;

			s_currentFile.skip(sizeof(s_fileHeader));

			// iterate through plugins
			std::vector<CallbackSnapshot> callbacks = GetCallbackSnapshot();
			for (auto& iter : callbacks)
			{
				PluginCallbacks* info = &iter.callbacks;

				if (info->save && info->hadUID)
				{
					// set up header info
					s_pluginHeader.signature = info->uid;
					s_pluginHeader.numChunks = 0;
					s_pluginHeader.length = 0;

					s_chunkOpen = false;

					// call the plugin
					try
					{
						info->save(&g_SFSESerializationInterface);
					}
					catch (...)
					{
						_ERROR("HandleSaveGlobalData: exception occurred saving %08X at %016I64X data may be corrupt.", s_pluginHeader.signature, s_currentFile.offset());
					}

					// flush the remaining chunk data
					FlushWriteChunk();

					if (s_pluginHeader.numChunks)
					{
						u64 curOffset = s_currentFile.offset();

						s_currentFile.seek(s_pluginHeaderOffset);
						s_currentFile.write(&s_pluginHeader, sizeof(s_pluginHeader));

						s_currentFile.seek(curOffset);

						s_fileHeader.numPlugins++;
					}
				}
			}

			// write header
			s_currentFile.seek(0);
			s_currentFile.write(&s_fileHeader, sizeof(s_fileHeader));
		}
		catch (...)
		{
			_ERROR("HandleSaveGame: exception during save");
		}

		s_currentFile.close();

		if (!MoveFileEx(tempPath.c_str(), s_savePath.c_str(), MOVEFILE_REPLACE_EXISTING | MOVEFILE_WRITE_THROUGH))
		{
			_ERROR("HandleSaveGlobalData: couldn't replace save file (%s)", s_savePath.c_str());
			DeleteFile(tempPath.c_str());
		}
	}

	void HandleLoadGlobalData()
	{
		_MESSAGE("loading co-save");

		if (s_savePath.empty() || !s_currentFile.open(s_savePath.c_str()))
		{
			return;
		}

		try
		{
			Header	header;

			s_currentFile.read(&header, sizeof(header));

			if (header.magic != Header::kSignature)
			{
				_ERROR("HandleLoadGame: invalid file signature (found %08X expected %08X)", header.magic, Header::kSignature);
				goto done;
			}

			if (header.formatVersion <= Header::kVersion_Invalid)
			{
				_ERROR("HandleLoadGame: version invalid (%08X)", header.formatVersion);
				goto done;
			}

			if (header.formatVersion > Header::kVersion)
			{
				_ERROR("HandleLoadGame: version too new (found %08X current %08X)", header.formatVersion, Header::kVersion);
				goto done;
			}

			{
				// reset flags
				std::vector<CallbackSnapshot> callbacks = GetCallbackSnapshot();
				for (auto& iter : callbacks)
					iter.callbacks.hadData = false;

				// iterate through plugin data chunks
				while (s_currentFile.remain() >= sizeof(PluginHeader))
				{
					s_currentFile.read(&s_pluginHeader, sizeof(s_pluginHeader));

					u64	pluginChunkStart = s_currentFile.offset();

					CallbackSnapshot* target = nullptr;
					for (auto& iter : callbacks)
						if (iter.callbacks.hadUID && (iter.callbacks.uid == s_pluginHeader.signature))
							target = &iter;

					try
					{
						if (target)
						{
							target->callbacks.hadData = true;

							if (target->callbacks.load)
							{
								s_chunkOpen = false;
								target->callbacks.load(&g_SFSESerializationInterface);
							}
						}
						else
						{
							_WARNING("HandleLoadGame: plugin with signature %08X not loaded", s_pluginHeader.signature);
						}
					}
					catch (...)
					{
						_ERROR("HandleLoadGame: exception occurred loading %08X", s_pluginHeader.signature);
					}

					// if plugin failed to read all its data or threw exception, jump to the next chunk
					u64	expectedOffset = pluginChunkStart + s_pluginHeader.length;
					if (s_currentFile.offset() != expectedOffset)
					{
						_WARNING("HandleLoadGame: plugin did not read all of its data (at %016I64X expected %016I64X)", s_currentFile.offset(), expectedOffset);
						s_currentFile.seek(expectedOffset);
					}
				}

				// call load on plugins that had no data
				for (auto& iter : callbacks) {
					if (!iter.callbacks.hadData && iter.callbacks.load) {
						iter.callbacks.load(&g_SFSESerializationInterface);
					}
				}
			}
		}
		catch (...)
		{
			_ERROR("HandleLoadGame: exception during load");
		}

	done:
		s_currentFile.close();
	}

	void HandleDeleteSave(std::string saveName)
	{
		// The engine's delete worker passes the bare save name (".sfs" optional);
		// derive both full paths the same way the save path is derived elsewhere.
		std::string savePath = MakeSavePath(saveName, ".sfs", false);
		std::string cosavePath = MakeSavePath(saveName, ".sfse", false);

		// check if old file is gone
		FileStream saveFile;
		if (!saveFile.open(savePath.c_str()))
		{
			_MESSAGE("deleting co-save %s", cosavePath.c_str());
			DeleteFile(cosavePath.c_str());
		}
		else
		{
			_MESSAGE("skipped delete of co-save %s", cosavePath.c_str());
		}
	}

	// ---- plugin-facing API (backs SFSESerializationInterface) ----

	void SetUniqueID(PluginHandle plugin, u32 uid)
	{
		std::lock_guard<std::mutex> locker(s_callbackLock);
		PluginCallbacks& cb = s_pluginCallbacks[plugin];
		if (cb.hadUID)
		{
			_WARNING("plugin serialization UID already set (plugin = %d, existing uid = %08X, ignored uid = %08X)", plugin, cb.uid, uid);
			return;
		}

		for (const auto& iter : s_pluginCallbacks)
		{
			if (iter.first != plugin && iter.second.hadUID && (iter.second.uid == uid))
			{
				_ERROR("plugin serialization UID collision (uid = %08X, plugins = %d %d)", uid, plugin, iter.first);
				return;
			}
		}

		cb.uid = uid;
		cb.hadUID = true;
	}

	void SetRevertCallback(PluginHandle plugin, SFSESerializationInterface::EventCallback callback)
	{
		std::lock_guard<std::mutex> locker(s_callbackLock);
		s_pluginCallbacks[plugin].revert = callback;
	}

	void SetSaveCallback(PluginHandle plugin, SFSESerializationInterface::EventCallback callback)
	{
		std::lock_guard<std::mutex> locker(s_callbackLock);
		s_pluginCallbacks[plugin].save = callback;
	}

	void SetLoadCallback(PluginHandle plugin, SFSESerializationInterface::EventCallback callback)
	{
		std::lock_guard<std::mutex> locker(s_callbackLock);
		s_pluginCallbacks[plugin].load = callback;
	}

	void SetFormDeleteCallback(PluginHandle plugin, SFSESerializationInterface::FormDeleteCallback callback)
	{
		std::lock_guard<std::mutex> locker(s_callbackLock);
		s_pluginCallbacks[plugin].formDelete = callback;
	}

}
