#include "DirectoryIterator.h"

DirectoryIterator::DirectoryIterator(const char * path, const char * match)
:m_searchHandle(INVALID_HANDLE_VALUE), m_done(false)
{
	if(!match) match = "*";

	strcpy_s(m_path, sizeof(m_path), path);

	char	wildcardPath[MAX_PATH];
	sprintf_s(wildcardPath, sizeof(wildcardPath), "%s\\%s", path, match);

	m_searchHandle = FindFirstFile(wildcardPath, &m_result);
	if(m_searchHandle == INVALID_HANDLE_VALUE)
		m_done = true;
}

DirectoryIterator::~DirectoryIterator()
{
	if(m_searchHandle != INVALID_HANDLE_VALUE)
		FindClose(m_searchHandle);
}

void DirectoryIterator::fullPath(char * out, size_t outLen)
{
	sprintf_s(out, outLen, "%s\\%s", m_path, m_result.cFileName);
}

std::string DirectoryIterator::fullPath()
{
	return std::string(m_path) + "\\" + std::string(m_result.cFileName);
}

void DirectoryIterator::next()
{
	BOOL	result = FindNextFile(m_searchHandle, &m_result);
	if(!result)
		m_done = true;
}
