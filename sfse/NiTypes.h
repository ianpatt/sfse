#pragma once

#include "sfse_common/Types.h"

class NiPoint3
{
public:
	NiPoint3() : x(0), y(0), z(0) { }
	NiPoint3(float _x, float _y, float _z) : x(_x), y(_y), z(_z) { }

	float x;
	float y;
	float z;
};
static_assert(sizeof(NiPoint3) == 0xC);

class alignas(0x10) NiPoint3A :
	public NiPoint3
{
public:
};
static_assert(sizeof(NiPoint3A) == 0x10);

template<typename T>
class NiTArray
{
public:
	virtual ~NiTArray();

	T* m_pBase;
	u16 m_usMaxSize;
	u16 m_usSize;
	u16 m_usESize;
	u16 m_usGrowBy;
};

template<typename T>
class NiTPrimitiveArray : public NiTArray<T>
{
public:
	virtual ~NiTPrimitiveArray();
};
