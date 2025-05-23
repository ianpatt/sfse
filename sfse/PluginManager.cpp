#include "PluginManager.h"
#include "sfse_common/DirectoryIterator.h"
#include "sfse_common/FileStream.h"
#include "sfse_common/Utilities.h"
#include "sfse_common/sfse_version.h"
#include "sfse_common/BranchTrampoline.h"
#include "sfse_common/Log.h"
#include "sfse_common/Errors.h"

#include "sfse/Hooks_Scaleform.h"
#include "sfse/Hooks_Command.h"

PluginManager	g_pluginManager;

PluginManager::LoadedPlugin *	PluginManager::s_currentLoadingPlugin = nullptr;
PluginHandle					PluginManager::s_currentPluginHandle = 0;
u32								s_trampolineLog = 1;

BranchTrampolineManager g_branchTrampolineManager(g_branchTrampoline);
BranchTrampolineManager g_localTrampolineManager(g_localTrampoline);

static const SFSEInterface g_SFSEInterface =
{
	PACKED_SFSE_VERSION,
	RUNTIME_VERSION,
	SFSEInterface::kInterfaceVersion,

	PluginManager::queryInterface,
	PluginManager::getPluginHandle,
	PluginManager::getPluginInfo
};

static const SFSETrampolineInterface g_SFSETrampolineInterface =
{
	SFSETrampolineInterface::kInterfaceVersion,
	AllocateFromSFSEBranchPool,
	AllocateFromSFSELocalPool
};

static SFSEMessagingInterface g_SFSEMessagingInterface =
{
	SFSEMessagingInterface::kInterfaceVersion,
	PluginManager::registerListener,
	PluginManager::dispatchMessage,
};

static const SFSEMenuInterface g_SFSEMenuInterface =
{
	SFSEMenuInterface::kInterfaceVersion,
	RegisterMenuPlugin,
	RegisterManagerPlugin,
};

static const SFSETaskInterface g_SFSETaskInterface =
{
	SFSETaskInterface::kInterfaceVersion,
	TaskInterface::addTask,
	TaskInterface::addTaskPermanent
};

PluginManager::PluginManager()
{
	//
}

PluginManager::~PluginManager()
{
	deinit();
}

PluginManager::LoadedPlugin::LoadedPlugin()
{
	memset(&info, 0, sizeof(info));
	memset(&version, 0, sizeof(version));
}

void PluginManager::init()
{
	if(findPluginDirectory())
	{
		_MESSAGE("plugin directory = %s", m_pluginDirectory.c_str());

		// avoid realloc
		m_plugins.reserve(5);

		__try
		{
			scanPlugins();
		}
		__except(EXCEPTION_EXECUTE_HANDLER)
		{
			// something very bad happened
			_ERROR("exception occurred while loading plugins");
		}
	}
}

void PluginManager::installPlugins(u32 phase)
{
	for(size_t i = 0; i < m_plugins.size(); i++)
	{
		auto & plugin = m_plugins[i];

		// skip plugins that don't care about this phase
		if(phase == kPhase_Preload)
		{
			if(!plugin.hasPreload)
				continue;
		}
		else
		{
			if(!plugin.hasLoad)
				continue;
		}

		_MESSAGE("%sloading plugin \"%s\"", (phase == kPhase_Preload) ? "pre" : "", plugin.version.name);

		s_currentLoadingPlugin = &plugin;
		s_currentPluginHandle = plugin.internalHandle;

		std::string pluginPath = m_pluginDirectory + plugin.dllName;

		if(!plugin.handle)
		{
			plugin.handle = (HMODULE)LoadLibrary(pluginPath.c_str());
			if(!plugin.handle)
				logPluginLoadError(plugin, "couldn't load plugin", GetLastError());
		}

		bool	success = false;

		if(plugin.handle)
		{
			plugin.load[phase] = (_SFSEPlugin_Load)GetProcAddress(plugin.handle, (phase == kPhase_Preload) ? "SFSEPlugin_Preload" : "SFSEPlugin_Load");
			if(plugin.load)
			{
				const char * loadStatus = nullptr;

				loadStatus = safeCallLoadPlugin(&plugin, &g_SFSEInterface, phase);

				if(!loadStatus)
				{
					success = true;
				}
				else
				{
					logPluginLoadError(plugin, loadStatus);
				}
			}
			else
			{
				logPluginLoadError(plugin, "does not appear to be an SFSE plugin");
			}
		}

		if(!success)
		{
			// failed, unload the library
			if(plugin.handle) FreeLibrary(plugin.handle);

			// and remove from plugins list
			m_plugins.erase(m_plugins.begin() + i);

			// fix iterator
			i--;
		}

	}

	s_currentLoadingPlugin = nullptr;
	s_currentPluginHandle = 0;
}

void PluginManager::loadComplete()
{
	for(size_t i = 0; i < m_plugins.size(); i++)
	{
		auto & plugin = m_plugins[i];

		_MESSAGE("plugin %s (%08X %s %08X) %s (handle %d)",
			plugin.dllName.c_str(),
			plugin.version.dataVersion,
			plugin.version.name,
			plugin.version.pluginVersion,
			"loaded correctly",
			plugin.internalHandle);
	}

	reportPluginErrors();

	// make fake PluginInfo structs after m_plugins is locked
	for(auto & plugin : m_plugins)
	{
		plugin.info.infoVersion = PluginInfo::kInfoVersion;
		plugin.info.name = plugin.version.name;
		plugin.info.version = plugin.version.pluginVersion;
	}

	// alert any listeners that plugin load has finished
	dispatchMessage(0, SFSEMessagingInterface::kMessage_PostLoad, nullptr, 0, nullptr);
	// second post-load dispatch
	dispatchMessage(0, SFSEMessagingInterface::kMessage_PostPostLoad, nullptr, 0, nullptr);
}

void PluginManager::deinit()
{
	for(LoadedPluginList::iterator iter = m_plugins.begin(); iter != m_plugins.end(); ++iter)
	{
		LoadedPlugin	* plugin = &(*iter);

		if(plugin->handle)
		{
			FreeLibrary(plugin->handle);
		}
	}

	m_plugins.clear();
}

const PluginInfo * PluginManager::infoByName(const char * name) const
{
	for(LoadedPluginList::const_iterator iter = m_plugins.begin(); iter != m_plugins.end(); ++iter)
	{
		const LoadedPlugin * plugin = &(*iter);

		if(plugin->info.name && !_stricmp(name, plugin->info.name))
			return &plugin->info;
	}

	return nullptr;
}

u32 PluginManager::numPlugins() const
{
	u32	result = (u32)m_plugins.size();

	// is one currently loading?
	if(s_currentLoadingPlugin) result++;

	return result;
}

const char * PluginManager::pluginNameFromHandle(PluginHandle handle) const
{
	if(handle > 0 && handle <= m_plugins.size())
		return (m_plugins[handle - 1].version.name);
	else if(handle == 0)
		return "SFSE";

	return nullptr;
}

PluginHandle PluginManager::lookupHandleFromName(const char * pluginName) const
{
	if(!_stricmp("SFSE", pluginName))
		return 0;

	u32	idx = 1;
	for(LoadedPluginList::const_iterator iter = m_plugins.begin(); iter != m_plugins.end(); ++iter)
	{
		const LoadedPlugin * plugin = &(*iter);
		if(!_stricmp(plugin->version.name, pluginName))
		{
			return idx;
		}
		idx++;
	}
	return kPluginHandle_Invalid;
}

void * PluginManager::queryInterface(u32 id)
{
	void	* result = nullptr;

	switch(id)
	{
	case kInterface_Messaging:
		result = (void *)&g_SFSEMessagingInterface;
		break;
	case kInterface_Trampoline:
		result = (void *)&g_SFSETrampolineInterface;
		break;
	case kInterface_Menu:
		result = (void*)&g_SFSEMenuInterface;
		break;
	case kInterface_Task:
		result = (void*)&g_SFSETaskInterface;
		break;

	default:
		_WARNING("unknown QueryInterface %08X", id);
		break;
	}

	return result;
}

PluginHandle PluginManager::getPluginHandle(void)
{
	ASSERT_STR(s_currentPluginHandle, "A plugin has called SFSEInterface::GetPluginHandle outside of its Query/Load handlers");

	return s_currentPluginHandle;
}

const PluginInfo*	PluginManager::getPluginInfo(const char* name)
{
	return g_pluginManager.infoByName(name);
}

bool PluginManager::findPluginDirectory(void)
{
	bool	result = false;

	// find the path <runtime directory>/data/sfse/
	std::string	runtimeDirectory = getRuntimeDirectory();

	if(!runtimeDirectory.empty())
	{
		m_pluginDirectory = runtimeDirectory + "Data\\SFSE\\Plugins\\";
		result = true;
	}

	return result;
}

void PluginManager::scanPlugins(void)
{
	_MESSAGE("scanning plugin directory %s", m_pluginDirectory.c_str());

	u32 handleIdx = 1;	// start at 1, 0 is reserved for internal use

	for(DirectoryIterator iter(m_pluginDirectory.c_str(), "*.dll"); !iter.done(); iter.next())
	{
		std::string	pluginPath = iter.fullPath();

		LoadedPlugin	plugin;
		plugin.dllName = iter.get()->cFileName;

		_MESSAGE("checking plugin %s", plugin.dllName.c_str());

		HMODULE resourceHandle = (HMODULE)LoadLibraryEx(pluginPath.c_str(), nullptr, LOAD_LIBRARY_AS_IMAGE_RESOURCE);
		if(resourceHandle)
		{
			if(is64BitDLL(resourceHandle))
			{
				auto * version = (const SFSEPluginVersionData *)getResourceLibraryProcAddress(resourceHandle, "SFSEPlugin_Version");
				if(version)
				{
					plugin.version = *version;
					sanitize(&plugin.version);

					auto * loadStatus = checkPluginCompatibility(plugin.version);
					if(!loadStatus)
					{
						// compatible, add to list

						plugin.internalHandle = handleIdx;
						handleIdx++;

						plugin.hasLoad = getResourceLibraryProcAddress(resourceHandle, "SFSEPlugin_Load") != nullptr;
						plugin.hasPreload = getResourceLibraryProcAddress(resourceHandle, "SFSEPlugin_Preload") != nullptr;

						m_plugins.push_back(plugin);
					}
					else
					{
						logPluginLoadError(plugin, loadStatus);
					}
				}
				else
				{
					logPluginLoadError(plugin, "no version data", 0, false);
				}
			}
			else
			{
				logPluginLoadError(plugin, "32-bit plugins can never work");
			}

			FreeLibrary(resourceHandle);
		}
		else
		{
			logPluginLoadError(plugin, "couldn't load plugin", GetLastError());
		}
	}
}

const char * PluginManager::checkAddressLibrary(void)
{
	static bool s_checked = false;
	static const char * s_status = nullptr;

	if(s_checked)
	{
		return s_status;
	}

	const char * buildType = "";

	char fileName[256];
	_snprintf_s(fileName, 256, "Data\\SFSE\\Plugins\\versionlib-%d-%d-%d-%d%s.bin",
		GET_EXE_VERSION_MAJOR(RUNTIME_VERSION),
		GET_EXE_VERSION_MINOR(RUNTIME_VERSION),
		GET_EXE_VERSION_BUILD(RUNTIME_VERSION),
		0, buildType);

	FileStream versionLib;
	if(!versionLib.open(fileName))
	{
		m_oldAddressLibrary = true;
		s_status = "disabled, address library needs to be updated";
	}

	s_checked = true;

	return s_status;
}

const char * PluginManager::safeCallLoadPlugin(LoadedPlugin * plugin, const SFSEInterface * sfse, u32 phase)
{
	__try
	{
		if(!plugin->load[phase](sfse))
		{
			return "reported as incompatible during load";
		}
	}
	__except(EXCEPTION_EXECUTE_HANDLER)
	{
		// something very bad happened
		return "disabled, fatal error occurred while loading plugin";
	}

	return nullptr;
}

void PluginManager::sanitize(SFSEPluginVersionData * version)
{
	version->name[sizeof(version->name) - 1] = 0;
	version->author[sizeof(version->author) - 1] = 0;
}

enum
{
	kCompat_BlockFromRuntime =		1 << 0,
	kCompat_BlockFromEditor =		1 << 1,
	kCompat_NotVersionIndependent =	1 << 2,
};

struct PluginCompatEntry
{
	const char	* name;
	u32			minVersion;
	const char	* reason;
	u32			compatFlags;
};

static const PluginCompatEntry	kPluginCompatList[] =
{
	{	"BakaAchievementEnabler",	MAKE_EXE_VERSION(2, 0, 0),		"broken before plugin version 2.0.0",	kCompat_BlockFromRuntime	},
	{	"BakaKillMyGames",			MAKE_EXE_VERSION(2, 0, 0),		"broken before plugin version 2.0.0",	kCompat_BlockFromRuntime	},
	{	"BakaQuitGameFix",			MAKE_EXE_VERSION(2, 0, 0),		"broken before plugin version 2.0.0",	kCompat_BlockFromRuntime	},
	{	"BakaQuickFullSaves",		MAKE_EXE_VERSION(2, 0, 0),		"broken before plugin version 2.0.0",	kCompat_BlockFromRuntime	},

	// version data doesn't match the version listed on nexus, have contacted the author to update this
	{	"StarfieldRadio",			10001,		"crashes due to bad version data (update past version 1.0.3)",		kCompat_BlockFromRuntime	},

	{	"SaveTweaks",				4,			"crashes due to bad version data (update past version 3)",			kCompat_BlockFromRuntime	},

	{	"Starfield-NoAffinityLoss",	10301,		"crashes due to bad version data (update past version 1.3.0)",		kCompat_BlockFromRuntime	},

	// didn't set up version data correctly and implemented its own version check
	{	"Starfield Engine Fixes - SFSE Plugin by LarannKiar",	0,	"not version independent",	kCompat_NotVersionIndependent },

	{	nullptr, 0, nullptr }
};

const char * PluginManager::checkPluginCompatibility(const SFSEPluginVersionData & version)
{
	__try
	{
		// basic validity
		if(!version.dataVersion)
		{
			return "disabled, bad version data";
		}

		if(!version.name[0])
		{
			return "disabled, no name specified";
		}

		// check for 'known bad' versions of plugins
		const PluginCompatEntry * compat = nullptr;

		for(const PluginCompatEntry * iter = kPluginCompatList; iter->name; ++iter)
		{
			if(!strcmp(iter->name, version.name))
			{
				compat = iter;

				if(version.pluginVersion < iter->minVersion)
				{
#ifdef RUNTIME
					if(iter->compatFlags & kCompat_BlockFromRuntime)
					{
						return iter->reason;
					}
#endif

#ifdef EDITOR
					if(iter->compatFlags & kCompat_BlockFromEditor)
					{
						return iter->reason;
					}
#endif
				}

				break;
			}
		}

		// version compatibility means both address independence and structure independence
		bool hasAddressIndependence = version.addressIndependence &
			(SFSEPluginVersionData::kAddressIndependence_Signatures |
			SFSEPluginVersionData::kAddressIndependence_AddressLibraryV2);
		bool hasStructureIndependence = version.structureIndependence &
			(SFSEPluginVersionData::kStructureIndependence_NoStructs |
			SFSEPluginVersionData::kStructureIndependence_1_14_70_Layout);

		bool versionIndependent = hasAddressIndependence && hasStructureIndependence;

		// plugins with bad version data are not version independent
		if(compat && compat->compatFlags & kCompat_NotVersionIndependent)
			versionIndependent = false;

		// currently anything in the "breaking change" field means that compatibility has been broken by an update
		if(version.reservedBreaking)
			versionIndependent = false;

		// verify that address library is there to centralize error message
		if(version.addressIndependence & (SFSEPluginVersionData::kAddressIndependence_AddressLibrary | SFSEPluginVersionData::kAddressIndependence_AddressLibraryV2))
		{
			const char * result = checkAddressLibrary();
			if(result) return result;
		}

		// simple version list
		if(!versionIndependent)
		{
			bool found = false;

			for(u32 i = 0; i < _countof(version.compatibleVersions); i++)
			{
				u32 compatibleVersion = version.compatibleVersions[i];

				if(compatibleVersion == RUNTIME_VERSION)
				{
					found = true;
					break;
				}
				else if(!compatibleVersion)
				{
					break;
				}
			}

			if(!found)
			{
				return "disabled, incompatible with current version of the game";
			}
		}

		// SE version compatibility
		if(version.seVersionRequired > PACKED_SFSE_VERSION)
		{
			return "disabled, requires newer script extender";
		}
	}
	__except(EXCEPTION_EXECUTE_HANDLER)
	{
		// paranoia
		return "disabled, fatal error occurred while checking plugin compatibility";
	}

	return nullptr;
}

void PluginManager::logPluginLoadError(const LoadedPlugin & pluginSrc, const char * errStr, u32 errCode, bool isError)
{
	LoadedPlugin plugin = pluginSrc;

	plugin.errorState = errStr;
	plugin.errorCode = errCode;

	if(isError)
		m_erroredPlugins.push_back(plugin);

	_MESSAGE("plugin %s (%08X %s %08X) %s %d (handle %d)",
		plugin.dllName.c_str(),
		plugin.version.dataVersion,
		plugin.version.name,
		plugin.version.pluginVersion,
		plugin.errorState,
		plugin.errorCode,
		s_currentPluginHandle);
}

struct BetterPluginName
{
	const char * dllName;
	const char * userReportedName;
};

// some plugins have non-descriptive names resulting in bad bug reports
static const BetterPluginName kBetterPluginNames[] =
{
	{ "sfee.dll", "CharGenMenu" },
	{ nullptr, nullptr }
};

void PluginManager::reportPluginErrors()
{
	if(m_erroredPlugins.empty())
		return;

	if(m_oldAddressLibrary)
		updateAddressLibraryPrompt();

	// With this plugin DLL load error, the thread of prophecy is severed. Update your plugins to restore the weave of fate, or persist in the doomed world you have created

	std::string message = "Mods you have installed have failed to load correctly. Check for updates to the mods listed below.\n";

	for(auto & plugin : m_erroredPlugins)
	{
		message += "\n";

		bool foundReplacementName = false;
		for(auto * iter = kBetterPluginNames; iter->dllName; ++iter)
		{
			if(!_stricmp(iter->dllName, plugin.dllName.c_str()))
			{
				foundReplacementName = true;

				message += iter->userReportedName;
				message += " (" + plugin.dllName + ")";
			}
		}
		if(!foundReplacementName)
			message += plugin.dllName;

		if(plugin.version.pluginVersion)
		{
			char verStr[256];

			// heuristic to determine if we have a packed version from commonlib
			if(GET_EXE_VERSION_MAJOR(plugin.version.pluginVersion))
				sprintf_s(verStr, "%d.%d.%d.%d",
					GET_EXE_VERSION_MAJOR(plugin.version.pluginVersion),
					GET_EXE_VERSION_MINOR(plugin.version.pluginVersion),
					GET_EXE_VERSION_BUILD(plugin.version.pluginVersion),
					GET_EXE_VERSION_SUB(plugin.version.pluginVersion));
			else
				sprintf_s(verStr, "%d", plugin.version.pluginVersion);

			message += " v";
			message += verStr;
		}

		message += ": ";
		message += plugin.errorState;

		if(plugin.errorCode)
		{
			char codeStr[128];
			sprintf_s(codeStr, "%08X", plugin.errorCode);

			message += " (";
			message += codeStr;
			message += ")";
		}
	}

	message += "\n\nContinuing to load may result in lost save data or other undesired behavior.";
	message += "\nExit game? (yes highly suggested)";

	int result = MessageBox(0, message.c_str(),
		"SFSE Plugin Loader (" __PREPRO_TOKEN_STR__(SFSE_VERSION_INTEGER) "."
		__PREPRO_TOKEN_STR__(SFSE_VERSION_INTEGER_MINOR) "."
		__PREPRO_TOKEN_STR__(SFSE_VERSION_INTEGER_BETA) ")",
		MB_YESNO);

	if(result == IDYES)
	{
		DebugLog::flush();
		TerminateProcess(GetCurrentProcess(), 0);
	}
}

void PluginManager::updateAddressLibraryPrompt()
{
	int result = MessageBox(0,
		"DLL plugins you have installed require a new version of the Address Library. Either this is a new install, or Starfield was just updated. Visit the Address Library webpage for updates?",
		"SFSE Plugin Loader", MB_YESNO);

	if(result == IDYES)
	{
		ShellExecute(0, nullptr, "https://www.nexusmods.com/starfield/mods/3256", nullptr, nullptr, 0);
		TerminateProcess(GetCurrentProcess(), 0);
	}
}

// Plugin communication interface
struct PluginListener {
	PluginHandle	listener;
	SFSEMessagingInterface::EventCallback	handleMessage;
};

typedef std::vector<std::vector<PluginListener> > PluginListeners;
static PluginListeners s_pluginListeners;

bool PluginManager::registerListener(PluginHandle listener, const char* sender, SFSEMessagingInterface::EventCallback handler)
{
	// because this can be called while plugins are loading, gotta make sure number of plugins hasn't increased
	u32 numPlugins = g_pluginManager.numPlugins() + 1;
	if (s_pluginListeners.size() < numPlugins)
	{
		s_pluginListeners.resize(numPlugins + 5);	// add some extra room to avoid unnecessary re-alloc
	}

	_MESSAGE("registering plugin listener for %s at %u of %u", sender, listener, numPlugins);

	// handle > num plugins = invalid
	if (listener > g_pluginManager.numPlugins() || !handler) 
	{
		return false;
	}

	if (sender)
	{
		// is target loaded?
		PluginHandle target = g_pluginManager.lookupHandleFromName(sender);
		if (target == kPluginHandle_Invalid)
		{
			return false;
		}
		// is listener already registered?
		for (std::vector<PluginListener>::iterator iter = s_pluginListeners[target].begin(); iter != s_pluginListeners[target].end(); ++iter)
		{
			if (iter->listener == listener)
			{
				return true;
			}
		}

		// register new listener
		PluginListener newListener;
		newListener.handleMessage = handler;
		newListener.listener = listener;

		s_pluginListeners[target].push_back(newListener);
	}
	else
	{
		// register listener to every loaded plugin
		u32 idx = 0;
		for(PluginListeners::iterator iter = s_pluginListeners.begin(); iter != s_pluginListeners.end(); ++iter)
		{
			// don't add the listener to its own list
			if (idx && idx != listener)
			{
				bool skipCurrentList = false;
				for (std::vector<PluginListener>::iterator iterEx = iter->begin(); iterEx != iter->end(); ++iterEx)
				{
					// already registered with this plugin, skip it
					if (iterEx->listener == listener)
					{
						skipCurrentList = true;
						break;
					}
				}
				if (skipCurrentList)
				{
					continue;
				}
				PluginListener newListener;
				newListener.handleMessage = handler;
				newListener.listener = listener;

				iter->push_back(newListener);
			}
			idx++;
		}
	}

	return true;
}

bool PluginManager::dispatchMessage(PluginHandle sender, u32 messageType, void * data, u32 dataLen, const char* receiver)
{
	_MESSAGE("dispatch message (%d) to plugin listeners", messageType);
	u32 numRespondents = 0;
	PluginHandle target = kPluginHandle_Invalid;

	if (!s_pluginListeners.size())	// no listeners yet registered
	{
		_MESSAGE("no listeners registered");
		return false;
	}
	else if (sender >= s_pluginListeners.size())
	{
		_MESSAGE("sender is not in the list");
		return false;
	}

	if (receiver)
	{
		target = g_pluginManager.lookupHandleFromName(receiver);
		if (target == kPluginHandle_Invalid)
			return false;
	}

	const char* senderName = g_pluginManager.pluginNameFromHandle(sender);
	if (!senderName)
		return false;
	for (std::vector<PluginListener>::iterator iter = s_pluginListeners[sender].begin(); iter != s_pluginListeners[sender].end(); ++iter)
	{
		SFSEMessagingInterface::Message msg;
		msg.data = data;
		msg.type = messageType;
		msg.sender = senderName;
		msg.dataLen = dataLen;

		if (target != kPluginHandle_Invalid)	// sending message to specific plugin
		{
			if (iter->listener == target)
			{
				iter->handleMessage(&msg);
				return true;
			}
		}
		else
		{
			_DMESSAGE("sending message type %u to plugin %u", messageType, iter->listener);
			iter->handleMessage(&msg);
			numRespondents++;
		}
	}
	_DMESSAGE("dispatched message.");
	return numRespondents ? true : false;
}

inline void * BranchTrampolineManager::allocate(PluginHandle plugin, size_t size)
{
	auto mem = m_trampoline.allocate(size);
	if (mem) {
		std::lock_guard<decltype(m_lock)> locker(m_lock);

		auto findIt = m_stats.find(plugin);
		if (findIt != m_stats.end()) {
			findIt->second += size;
		}
		else {
			auto insIt = m_stats.insert(std::make_pair(plugin, size));
			ASSERT(insIt.second);   // insertion failed
		}
	}
	else {
		ASSERT(false);  // alloc failed
	}
	return mem;
}


void * AllocateFromSFSEBranchPool(PluginHandle plugin, size_t size)
{
	if (s_trampolineLog) {
		_DMESSAGE("plugin %d allocated %lld bytes from branch pool", plugin, size);
	}
	return g_branchTrampolineManager.allocate(plugin, size);
}

void * AllocateFromSFSELocalPool(PluginHandle plugin, size_t size)
{
	if (s_trampolineLog) {
		_DMESSAGE("plugin %d allocated %lld bytes from local pool", plugin, size);
	}
	return g_localTrampolineManager.allocate(plugin, size);
}
