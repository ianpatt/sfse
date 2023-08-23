#pragma once

#include "sfse_common/Types.h"

class DataStream
{
public:
	DataStream() : m_len(0), m_offset(0) { }
	virtual ~DataStream() { }

	virtual u64 seek(u64 offset) = 0;

	virtual u64 read(void * dst, u64 len) = 0;
	virtual u64 write(const void * src, u64 len) = 0;

	u64 offset() { return m_offset; }
	u64 length() { return m_len; }
	u64 remain() { return (m_offset <= m_len) ? m_len - m_offset : 0; }
	void skip(u64 len) { seek(offset() + len); }
	
	template <typename T>
	T read() { T t; read(&t, sizeof(t)); return t; }

	template <typename T>
	u64 read(T * t) { return read(t, sizeof(T)); }

	template <typename T>
	void write(T t) { write(&t, sizeof(t)); }

	u8 r8() { return read <u8>(); }
	u16 r16() { return read <u16>(); }
	u32 r32() { return read <u32>(); }
	u64 r64() { return read <u64>(); }
	f32 rf32() { return read <f32>(); }
	f64 rf64() { return read <f64>(); }

	void w8(u8 d) { write <u8>(d); }
	void w16(u16 d) { write <u16>(d); }
	void w32(u32 d) { write <u32>(d); }
	void w64(u64 d) { write <u64>(d); }
	void wf32(f32 d) { write <f32>(d); }
	void wf64(f64 d) { write <f64>(d); }

protected:
	u64 m_len;
	u64 m_offset;
};

void copy(DataStream * src, DataStream * dst, size_t len, void * buf = nullptr, size_t bufLen = 0);

class SubStream : public DataStream
{
public:
	SubStream() : m_subBase(0), m_parent(nullptr) { }
	virtual ~SubStream() { }

	void attach(DataStream * stream, u64 base, u64 len)
	{
		m_len = len;
		m_subBase = base;
		m_parent = stream;
	}

	virtual u64 seek(u64 offset)
	{
		m_offset = offset;

		fixOffset();

		return m_offset;
	}

	virtual u64 read(void * dst, u64 len)
	{
		fixOffset();

		return m_parent->read(dst, len);
	}

	virtual u64 write(const void * src, u64 len)
	{
		fixOffset();

		return m_parent->write(src, len);
	}

protected:
	u64			m_subBase;
	DataStream	* m_parent;

	void fixOffset()
	{
		u64 realOffset = m_subBase + m_offset;

		if (m_parent->offset() != realOffset)
			m_parent->seek(realOffset);
	}
};
