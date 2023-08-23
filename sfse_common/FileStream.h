#pragma once

#include "sfse_common/DataStream.h"
#include <cstdio>

class FileStream : public DataStream
{
public:
	FileStream();
	virtual ~FileStream();

	bool open(const char * path);
	bool open(const wchar_t * path);
	bool create(const char * path);
	bool create(const wchar_t * path);
	void close();

	void flush();

	// DataStream interface
	virtual u64 seek(u64 offset);

	virtual u64 read(void * dst, u64 len);
	virtual u64 write(const void * src, u64 len);

	static void makeDirs(const char * path);

protected:
	FILE	* m_file;

	bool internalOpen(const char * path, const char * mode);
	bool internalOpen(const wchar_t * path, const wchar_t * mode);
	void internalSetup();
};
