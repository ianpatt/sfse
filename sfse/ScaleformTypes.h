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

	volatile long   RefCount;	// 08
};

class RefCountImpl : public RefCountImplCore
{
public:
	RefCountImpl() { }
	virtual ~RefCountImpl() { }

    void AddRef()
    {
        _InterlockedExchangeAdd(&RefCount, 1);
    }
    void Release()
    {
        if ((_InterlockedExchangeAdd(&RefCount, -1) - 1) == 0)
            delete this;
    }
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

template<class C>
class Ptr
{
public:
	C* pObject;	// 00

public:
    Ptr() : pObject(0) { }
    Ptr(C& robj) { pObject = &robj; }
    Ptr(C* pobj)
    {
        if (pobj) pobj->AddRef();
        pObject = pobj;
    }
    Ptr(const Ptr<C>& src)
    {
        if (src.pObject) src.pObject->AddRef();
        pObject = src.pObject;
    }
    template<class R>
    Ptr(Ptr<R>& src)
    {
        if (src) src->AddRef();
        pObject = src;
    }
    ~Ptr()
    {
        if (pObject) pObject->Release();
    }

    bool operator == (const Ptr& other) const { return pObject == other.pObject; }
    bool operator != (const Ptr& other) const { return pObject != other.pObject; }
    bool operator == (const C* pother) const { return pObject == pother; }
    bool operator != (const C* pother) const { return pObject != pother; }
    bool operator == (C* pother) const { return pObject == pother; }
    bool operator != (C* pother) const { return pObject != pother; }
    bool operator < (const Ptr& other) const { return pObject < other.pObject; }

    template<class R>
    const Ptr<C>& operator=(const Ptr<R>& src)
    {
        if (src) src->AddRef();
        if (pObject) pObject->Release();
        pObject = src;
        return *this;
    }

    const Ptr<C>& operator=(const Ptr<C>& src)
    {
        if (src) src->AddRef();
        if (pObject) pObject->Release();
        pObject = src;
        return *this;
    }

    const Ptr<C>& operator = (C* psrc)
    {
        if (psrc) psrc->AddRef();
        if (pObject) pObject->Release();
        pObject = psrc;
        return *this;
    }
    const Ptr<C>& operator = (C& src)
    {
        if (pObject) pObject->Release();
        pObject = &src;
        return *this;
    }

    template<class R>
    Ptr<C>& SetPtr(const Ptr<R>& src)
    {
        if (src) src->AddRef();
        if (pObject) pObject->Release();
        pObject = src;
        return *this;
    }

    Ptr<C>& SetPtr(const Ptr<C>& src)
    {
        if (src) src->AddRef();
        if (pObject) pObject->Release();
        pObject = src;
        return *this;
    }

    Ptr<C>& SetPtr(C* psrc)
    {
        if (psrc) psrc->AddRef();
        if (pObject) pObject->Release();
        pObject = psrc;
        return *this;
    }
    Ptr<C>& SetPtr(C& src)
    {
        if (pObject) pObject->Release();
        pObject = &src;
        return *this;
    }

    void NullWithoutRelease()
    {
        pObject = 0;
    }

    void Clear()
    {
        if (pObject) pObject->Release();
        pObject = 0;
    }

    C*& GetRawRef() { return pObject; }
    C* GetPtr() const { return pObject; }
    C& operator*() const { return *pObject; }
    C* operator->()  const { return pObject; }
    operator C* () const { return pObject; }
};

namespace GFx
{
enum PlayState
{
	State_Playing,
	State_Stopped
};
enum FocusMovedType
{
	GFx_FocusMovedByMouse = 1,
	GFx_FocusMovedByKeyboard = 2
};
}
}