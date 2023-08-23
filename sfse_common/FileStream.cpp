#include "FileStream.h"
#include <string>
#include <direct.h>

FileStream::FileStream()
: m_file(nullptr)
{
	//
}

FileStream::~FileStream()
{
	close();
}

bool FileStream::open(const char * path)
{
	return internalOpen(path, "rb");
}

bool FileStream::open(const wchar_t * path)
{
	return internalOpen(path, L"rb");
}

bool FileStream::create(const char * path)
{
	return internalOpen(path, "wb");
}

bool FileStream::create(const wchar_t * path)
{
	return internalOpen(path, L"wb");
}

void FileStream::close()
{
	if (m_file)
	{
		fclose(m_file);

		m_file = nullptr;
		m_len = 0;
		m_offset = 0;
	}
}

void FileStream::flush()
{
	fflush(m_file);
}

u64 FileStream::seek(u64 offset)
{
	_fseeki64_nolock(m_file, offset, SEEK_SET);

	m_offset = offset;

	return offset;
}

u64 FileStream::read(void * dst, u64 len)
{
	u64 bytesRead = _fread_nolock(dst, 1, len, m_file);

	m_offset += bytesRead;

	return bytesRead;
}

u64 FileStream::write(const void * src, u64 len)
{
	u64 bytesWritten = _fwrite_nolock(src, 1, len, m_file);

	m_offset += bytesWritten;

	return bytesWritten;
}

bool FileStream::internalOpen(const char * path, const char * mode)
{
	close();

	fopen_s(&m_file, path, mode);
	if (!m_file) return false;

	internalSetup();

	return true;
}

bool FileStream::internalOpen(const wchar_t * path, const wchar_t * mode)
{
	close();

	_wfopen_s(&m_file, path, mode);
	if (!m_file) return false;

	internalSetup();

	return true;
}

void FileStream::internalSetup()
{
	fseek(m_file, 0, SEEK_END);
	m_len = _ftelli64_nolock(m_file);

	fseek(m_file, 0, SEEK_SET);
	m_offset = 0;
}

void FileStream::makeDirs(const char * path)
{
	std::string fullPath = path;

	for (uint i = 1; i < fullPath.size(); i++)
	{
		char data = fullPath[i];

		if ((data == '\\') || (data == '/'))
		{
			_mkdir(fullPath.substr(0, i).c_str());
		}
	}
}
