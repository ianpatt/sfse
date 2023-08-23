#include "BufferStream.h"
#include <cstring>

u64 BufferStream::read(void * dst, u64 len)
{
	memcpy(dst, &m_buf[m_offset], len);
	m_offset += len;

	return len;
}

u64 BufferStream::write(const void * src, u64 len)
{
	memcpy(&m_buf[m_offset], src, len);
	m_offset += len;

	return len;
}
