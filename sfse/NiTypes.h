#pragma once

#include "sfse_common/Types.h"

template <typename T>
class NiPointer
{
public:
	T* m_pObject;

	inline NiPointer(const NiPointer& rhs) :
		m_pObject(rhs.m_pObject)
	{
		if (m_pObject) {
			m_pObject->IncRef();
		}
	}

	inline NiPointer(T* pObject = (T*)0)
	{
		m_pObject = pObject;
		if (m_pObject) m_pObject->IncRef();
	}

	inline ~NiPointer()
	{
		if (m_pObject) m_pObject->DecRef();
	}

	inline operator T* () const
	{
		return m_pObject;
	}

	inline T& operator*() const
	{
		return *m_pObject;
	}

	inline T* operator->() const
	{
		return m_pObject;
	}

	inline NiPointer <T>& operator=(const NiPointer& rhs)
	{
		if (m_pObject != rhs.m_pObject)
		{
			if (rhs) rhs.m_pObject->IncRef();
			if (m_pObject) m_pObject->DecRef();

			m_pObject = rhs.m_pObject;
		}

		return *this;
	}

	inline NiPointer <T>& operator=(T* rhs)
	{
		if (m_pObject != rhs)
		{
			if (rhs) rhs->IncRef();
			if (m_pObject) m_pObject->DecRef();

			m_pObject = rhs;
		}

		return *this;
	}

	inline bool operator==(T* pObject) const
	{
		return m_pObject == pObject;
	}

	inline bool operator!=(T* pObject) const
	{
		return m_pObject != pObject;
	}

	inline bool operator==(const NiPointer& ptr) const
	{
		return m_pObject == ptr.m_pObject;
	}

	inline bool operator!=(const NiPointer& ptr) const
	{
		return m_pObject != ptr.m_pObject;
	}

	inline T* get()
	{
		return m_pObject;
	}
};

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

class NiPoint4
{
public:
	struct NiPoint4Struct
	{
	public:
		// members
		float x;  // 00
		float y;  // 04
		float z;  // 08
		float w;  // 0C
	};
	static_assert(sizeof(NiPoint4Struct) == 0x10);

	// members
	union
	{
		NiPoint4Struct v;
		float          pt[4]{ 0.0F };
	};  // 00
};
static_assert(sizeof(NiPoint4) == 0x10);

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

class alignas(0x10) NiMatrix3
{
public:
	void MakeIdentity() noexcept
	{
		entry[0].v = { 1.0F, 0.0F, 0.0F, 0.0F };
		entry[1].v = { 0.0F, 1.0F, 0.0F, 0.0F };
		entry[2].v = { 0.0F, 0.0F, 1.0F, 0.0F };
	}

	NiMatrix3 operator*(const NiMatrix3& rhs) const
	{
		NiMatrix3 tmp;
		tmp.entry[0].pt[0] =
			entry[0].pt[0] * rhs.entry[0].pt[0] +
			entry[0].pt[1] * rhs.entry[1].pt[0] +
			entry[0].pt[2] * rhs.entry[2].pt[0];
		tmp.entry[1].pt[0] =
			entry[1].pt[0] * rhs.entry[0].pt[0] +
			entry[1].pt[1] * rhs.entry[1].pt[0] +
			entry[1].pt[2] * rhs.entry[2].pt[0];
		tmp.entry[2].pt[0] =
			entry[2].pt[0] * rhs.entry[0].pt[0] +
			entry[2].pt[1] * rhs.entry[1].pt[0] +
			entry[2].pt[2] * rhs.entry[2].pt[0];
		tmp.entry[0].pt[1] =
			entry[0].pt[0] * rhs.entry[0].pt[1] +
			entry[0].pt[1] * rhs.entry[1].pt[1] +
			entry[0].pt[2] * rhs.entry[2].pt[1];
		tmp.entry[1].pt[1] =
			entry[1].pt[0] * rhs.entry[0].pt[1] +
			entry[1].pt[1] * rhs.entry[1].pt[1] +
			entry[1].pt[2] * rhs.entry[2].pt[1];
		tmp.entry[2].pt[1] =
			entry[2].pt[0] * rhs.entry[0].pt[1] +
			entry[2].pt[1] * rhs.entry[1].pt[1] +
			entry[2].pt[2] * rhs.entry[2].pt[1];
		tmp.entry[0].pt[2] =
			entry[0].pt[0] * rhs.entry[0].pt[2] +
			entry[0].pt[1] * rhs.entry[1].pt[2] +
			entry[0].pt[2] * rhs.entry[2].pt[2];
		tmp.entry[1].pt[2] =
			entry[1].pt[0] * rhs.entry[0].pt[2] +
			entry[1].pt[1] * rhs.entry[1].pt[2] +
			entry[1].pt[2] * rhs.entry[2].pt[2];
		tmp.entry[2].pt[2] =
			entry[2].pt[0] * rhs.entry[0].pt[2] +
			entry[2].pt[1] * rhs.entry[1].pt[2] +
			entry[2].pt[2] * rhs.entry[2].pt[2];
		return tmp;
	}

	NiMatrix3 operator*(float scalar) const
	{
		NiMatrix3 result;
		result.entry[0].pt[0] = entry[0].pt[0] * scalar;
		result.entry[0].pt[1] = entry[0].pt[1] * scalar;
		result.entry[0].pt[2] = entry[0].pt[2] * scalar;
		result.entry[1].pt[0] = entry[1].pt[0] * scalar;
		result.entry[1].pt[1] = entry[1].pt[1] * scalar;
		result.entry[1].pt[2] = entry[1].pt[2] * scalar;
		result.entry[2].pt[0] = entry[2].pt[0] * scalar;
		result.entry[2].pt[1] = entry[2].pt[1] * scalar;
		result.entry[2].pt[2] = entry[2].pt[2] * scalar;
		return result;
	}

	NiPoint3 operator*(const NiPoint3& p) const
	{
		return NiPoint3(
			entry[0].pt[0] * p.x + entry[0].pt[1] * p.y + entry[0].pt[2] * p.z,
			entry[1].pt[0] * p.x + entry[1].pt[1] * p.y + entry[1].pt[2] * p.z,
			entry[2].pt[0] * p.x + entry[2].pt[1] * p.y + entry[2].pt[2] * p.z);
	}

	// members
	NiPoint4 entry[3];  // 00
};
static_assert(sizeof(NiMatrix3) == 0x30);

class NiTransform
{
public:
	void MakeIdentity() noexcept
	{
		rotate.MakeIdentity();
		translate = NiPoint3{};
		scale = 1.0F;
	}

	// members
	NiMatrix3 rotate;         // 00
	NiPoint3  translate;      // 30
	float     scale{ 1.0F };  // 3C
};
static_assert(sizeof(NiTransform) == 0x40);
