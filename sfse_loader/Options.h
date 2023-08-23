#pragma once

#include "sfse_common/Types.h"
#include <string>

class Options
{
public:
	Options();
	~Options();

	bool	Read(int argc, char ** argv);

	void	PrintUsage(void);

	bool	m_launchCS;

	bool	m_setPriority;
	u32		m_priority;

	bool	m_optionsOnly;
	bool	m_crcOnly;
	bool	m_waitForClose;
	bool	m_verbose;
	bool	m_moduleInfo;
	bool	m_skipLauncher;
	bool	m_launchSteam;
	bool	m_noTimeout;
	bool	m_forceSteamLoader;

	u64		m_affinity;

	std::string	m_altEXE;
	std::string	m_altDLL;

private:
	bool	Verify(void);
};

extern Options g_options;
