#pragma once

#include "sfse_common/DataStream.h"

class BufferStream : public DataStream
{
public:
	BufferStream() :m_buf(nullptr) { }

	void attach(void * buf, u64 len) { m_buf = (u8 *)buf; m_len = len; }

	virtual u64 seek(u64 offset) { m_offset = offset; return offset; }

	virtual u64 read(void * dst, u64 len);
	virtual u64 write(const void * src, u64 len);

protected:
	u8 * m_buf;
};
