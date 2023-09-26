#pragma once

#include "sfse_common/Types.h"

namespace Scaleform
{
using UPInt = unsigned __int64;

class RefCountImplCore
{
public:
	RefCountImplCore() : RefCount(1) { }
	virtual ~RefCountImplCore() { }

	volatile	int	RefCount;	// 08
};

class RefCountImpl : public RefCountImplCore
{
public:
	RefCountImpl() { }
	virtual ~RefCountImpl() { }
};

template<class T>
class RefCountBaseStatImpl : public T
{
public:
	RefCountBaseStatImpl() { }
	virtual ~RefCountBaseStatImpl() { }
};

template<class T>
class RefCountBase : public RefCountBaseStatImpl<RefCountImpl>
{
public:
	RefCountBase() { }
	virtual ~RefCountBase() { }
};

template<class T>
class Ptr
{
public:
	T* pObject;	// 00
};
}
