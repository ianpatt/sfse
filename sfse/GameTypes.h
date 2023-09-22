#pragma once

#include "sfse_common/Types.h"
#include "sfse_common/Relocation.h"

#include <intrin.h>

template<typename T>
class BSSimpleList
{
public:
    struct Node
    {
        T m_item;
        Node* m_pkNext;
    };
    Node node;
};

template<typename T>
class BSTArray
{
public:
    u32 size;       // 00
    u32 capacity;   // 04
    T* pData;       // 08
};

namespace BSStringPool
{
    class Entry
    {
    public:
        Entry() = delete;
        Entry(const Entry& other) = delete;
        Entry& operator=(const Entry& other) = delete;
        Entry(Entry&& other) = delete;

        enum
        {
            kFlags_External = 0x2
        };
        BSStringPool::Entry* pLeft;             // 00
        u64                  uiLengthOrPtr;     // 08
        volatile long        refCount;          // 10
        u8                   uFlags;            // 14
        u8                   pad[3];            // 15
        char                 pData[0];          // 18

        const char* GetStringC()
        {
            Entry* iter = this;
            while (iter->uFlags & kFlags_External)
                iter = reinterpret_cast<BSStringPool::Entry*>(uiLengthOrPtr);
            return static_cast<const char*>(iter->pData);
        }

        using GetEntryT = void (*)(Entry*& entry, const char* apString, bool abCaseSensitive);
        static RelocAddr<GetEntryT>	GetEntry;

        using ReleaseT = void (*)(Entry*& entry);
        static RelocAddr<ReleaseT>	Release;
    };
}

class BSFixedString
{
public:
    BSFixedString(const char* apString)
    {
        pData = nullptr;
        BSStringPool::Entry::GetEntry(pData, apString, false);
    }
    ~BSFixedString()
    {
        if (pData)
            BSStringPool::Entry::Release(pData);
    }
    BSFixedString(const BSFixedString& other)
    {
        if (other.pData)
        {
            _InterlockedExchangeAdd(&other.pData->refCount, 1);
            pData = other.pData;
        }
    }
    BSFixedString& operator=(const BSFixedString& other)
    {
        if (pData != other.pData)
        {
            if (other.pData)
            {
                _InterlockedExchangeAdd(&other.pData->refCount, 1);
            }
            BSStringPool::Entry* prevData = pData;
            pData = other.pData;
            BSStringPool::Entry::Release(prevData);
        }
        return *this;
    }
    BSFixedString(BSFixedString&& other)
    {
        pData = other.pData;
        other.pData = nullptr;
    }
    bool operator==(const char* lhs) const
    {
        BSFixedString tmp(lhs);
        return pData == tmp.pData;
    }
    bool operator==(const BSFixedString& lhs) const { return pData == lhs.pData; }
    bool operator<(const BSFixedString& lhs) const { return pData < lhs.pData; }
    const char* c_str() const { return pData ? pData->GetStringC() : nullptr; }
    operator const char* () const { return pData ? pData->GetStringC() : nullptr; }

    BSStringPool::Entry* pData;
};

// 08
struct BSIntrusiveRefCounted
{
public:
	volatile long	m_refCount;	// 00
	u32				unk04;		// 04
};
