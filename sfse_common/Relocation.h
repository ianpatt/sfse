#pragma once

#include <cstdint>

class RelocationManager
{
public:
	RelocationManager();

	static uintptr_t	s_baseAddr;
};

// use this for addresses that represent pointers to a type T
template <typename T>
class RelocPtr
{
public:
	RelocPtr(uintptr_t offset)
		:m_offset(offset + RelocationManager::s_baseAddr)
	{
		//
	}

	operator T *() const
	{
		return getPtr();
	}

	T * operator->() const
	{
		return getPtr();
	}

	T * getPtr() const
	{
		return reinterpret_cast <T *>(m_offset);
	}

	const T * getConst() const
	{
		return reinterpret_cast <T *>(m_offset);
	}

	uintptr_t getUIntPtr() const
	{
		return m_offset;
	}

private:
	uintptr_t	m_offset;

	// hide
	RelocPtr() = delete;
	RelocPtr(RelocPtr & rhs) = delete;
	RelocPtr & operator=(RelocPtr & rhs) = delete;
};

// use this for direct addresses to types T. needed to avoid ambiguity
template <typename T>
class RelocAddr
{
public:
	RelocAddr(uintptr_t offset)
		:m_offset(reinterpret_cast <BlockConversionType *>(offset + RelocationManager::s_baseAddr))
	{
		//
	}

	operator T()
	{
		return reinterpret_cast <T>(m_offset);
	}

	uintptr_t getUIntPtr() const
	{
		return reinterpret_cast <uintptr_t>(m_offset);
	}

private:
	// apparently you can't reinterpret_cast from a type to the same type
	// that's kind of stupid and makes it impossible to use this for uintptr_ts if I use the same type
	// so we make a new type by storing the data in a pointer to this useless struct
	// at least this is hidden by a wrapper
	struct BlockConversionType { };
	BlockConversionType * m_offset;

	// hide
	RelocAddr() = delete;
	RelocAddr(RelocAddr & rhs) = delete;
	RelocAddr & operator=(RelocAddr & rhs) = delete;
};
