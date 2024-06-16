#pragma once

#include "sfse_common/Types.h"
#include "sfse_common/Relocation.h"
#include "sfse/GameMemory.h"

#include <intrin.h>
#include <functional>
#include <memory>
#if _HAS_CXX20
#include <span>
#endif
#include <algorithm>

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

// Does not actually do refcounting atm, just a wrapper
template<typename element_type>
class BSTSmartPointer
{
public:
    constexpr element_type* get() const noexcept { return _ptr; }
    explicit constexpr operator bool() const noexcept { return _ptr != nullptr; }
    constexpr element_type& operator*() const noexcept
    {
        return *_ptr;
    }
    constexpr element_type* operator->() const noexcept
    {
        return _ptr;
    }

private:
    element_type* _ptr;
};


class BSTArrayBase
{
public:
    using size_type = u32;

    BSTArrayBase() : uiSize(0), uiAllocSize(0) { }

    struct IAllocatorFunctor
    {
        virtual bool Allocate(u32 auiMinNewSize, u32 auiElemSize) = 0;
        virtual bool Reallocate(u32 auiMinNewSizeInItems, u32 auiFrontCopyCount, u32 auiShiftCount, u32 auiBackCopyCount, u32 auiElemSize) = 0;
        virtual void Deallocate() = 0;
        virtual ~IAllocatorFunctor() { };
    };

    size_type uiSize;         // 00
    size_type uiAllocSize;    // 04

    [[nodiscard]] size_type size() const noexcept { return uiSize; }
    [[nodiscard]] size_type capacity() const noexcept { return uiAllocSize; }
    void set_capacity(size_type a_capacity, size_type) noexcept { uiAllocSize = a_capacity; }
};

template<typename T>
class BSTArrayAllocatorFunctor : public BSTArrayBase::IAllocatorFunctor
{
public:
    T* pAllocator; // 00
};

class BSTArrayHeapAllocator
{
public:
    [[nodiscard]] void* allocate(u32 a_bytes) { return GetMemoryManager()->Allocate(a_bytes, 0, false); }
    void deallocate(void* a_ptr) { GetMemoryManager()->Free(a_ptr, false); }
};

class BSScrapArrayAllocator
{
public:
    void* pScrapHeap;   // 00
};

template<typename T, class Allocator = BSTArrayHeapAllocator>
class BSTArray : public BSTArrayBase, public Allocator
{
public:
    using value_type = T;
    using allocator_type = Allocator;
    using size_type = std::uint32_t;
    using difference_type = std::ptrdiff_t;
    using reference = value_type&;
    using const_reference = const value_type&;
    using pointer = value_type*;
    using const_pointer = const value_type*;
    using iterator = pointer;
    using const_iterator = const_pointer;
    using reverse_iterator = std::reverse_iterator<iterator>;
    using const_reverse_iterator = std::reverse_iterator<const_iterator>;

    BSTArray() : pData(nullptr) { }

    [[nodiscard]] iterator begin() noexcept { return pData; }
    [[nodiscard]] iterator end() noexcept { return begin() + uiSize; }
    [[nodiscard]] reference front() noexcept { return *begin(); }
    [[nodiscard]] reference back() noexcept { return *std::prev(end()); }
    [[nodiscard]] const_iterator cbegin() const noexcept { return pData; }
    [[nodiscard]] const_iterator cend() const noexcept { return cbegin() + uiSize; }
    [[nodiscard]] size_type max_size() const noexcept { return (std::numeric_limits<size_type>::max)(); }
    [[nodiscard]] size_type capacity() const noexcept { return uiAllocSize; }

    void clear() { erase(begin(), end()); }
    value_type& at(u32 i) const noexcept { return pData[i]; }
    void push_back(value_type&& x) { emplace_back(std::move(x)); }
    reference operator[](size_type n) { return pData[n]; }
    const_reference operator[](size_type n) const { return pData[n]; }

#if !_HAS_CXX20
    template<typename _Tp, typename... _Args>
    constexpr auto
        construct_at(_Tp* __location, _Args&&... __args)
        noexcept(noexcept(::new((void*)0) _Tp(std::declval<_Args>()...)))
        -> decltype(::new((void*)0) _Tp(std::declval<_Args>()...))
    {
        return ::new((void*)__location) _Tp(std::forward<_Args>(__args)...);
    }
#endif

    bool empty() const { return size() == 0; }

    template <class ForwardIt>
    iterator insert(const_iterator a_pos, ForwardIt a_first, ForwardIt a_last)  //
    {
        const auto distance = static_cast<size_type>(std::distance(a_first, a_last));
        if (distance == 0) {
            return decay_iterator(a_pos);
        }

        const auto pos = static_cast<size_type>(std::distance(cbegin(), a_pos));
        resize(size() + distance);
        const auto iter = begin() + pos;
        std::move_backward(iter, iter + distance, end());
        std::copy(a_first, a_last, iter);
        return iter;
    }

    template <class... Args>
    iterator emplace(const_iterator a_pos, Args&&... a_args)
    {
        const auto pos = static_cast<size_type>(std::distance(cbegin(), a_pos));
        if (pos < size()) {
            emplace_back(std::move(back()));
            std::move_backward(begin() + pos, end() - 2, end() - 1);
        }
        else {
            reserve_auto(size() + 1);
            uiSize += 1;
        }
#if _HAS_CXX20
        std::construct_at(data() + pos, std::forward<Args>(a_args)...);
#else
        construct_at(data() + pos, std::forward<Args>(a_args)...);
#endif
        return begin() + pos;
    }

    iterator erase(const_iterator a_first, const_iterator a_last)
    {
        const auto first = decay_iterator(a_first);
        const auto last = decay_iterator(a_last);
        const auto distance = static_cast<size_type>(std::distance(first, last));
        if (distance == 0) {
            return last;
        }

        std::move(last, end(), first);
        std::destroy(end() - distance, end());
        uiSize -= distance;
        return end();
    }

    iterator erase(const_iterator a_pos)
    {
        return erase(a_pos, std::next(a_pos));
    }

    template <class... Args>
    reference emplace_back(Args&&... a_args)
    {
        return *emplace(end(), std::forward<Args>(a_args)...);
    }

    void pop_back() { erase(std::prev(end())); }

    void resize(size_type a_count) { resize_impl(a_count, nullptr); }
    void resize(size_type a_count, const value_type& a_value) { resize_impl(a_count, std::addressof(a_value)); }

    void swap(BSTArray& a_rhs)
    {
        auto tmp = std::move(*this);
        *this = std::move(a_rhs);
        a_rhs = std::move(tmp);
    }

    DEFINE_STATIC_HEAP(Heap_Allocate, Heap_Free)

private:
    [[nodiscard]] iterator decay_iterator(const_iterator a_iter) noexcept
    {
        return const_cast<pointer>(std::addressof(*a_iter));
    }

    void reserve_auto(size_type a_capacity)
    {
        if (a_capacity > capacity()) {
            const auto grow = (std::max)(a_capacity, capacity() * 2);
            reserve_exact(grow);
        }
    }

    void reserve_exact(size_type a_capacity)
    {
        if (a_capacity == capacity()) {
            return;
        }

        const auto ndata = static_cast<pointer>(allocator_type().allocate(a_capacity * sizeof(value_type)));
        const auto odata = data();
        if (ndata != odata) {
            std::uninitialized_move_n(odata, size(), ndata);
            std::destroy_n(odata, size());
            allocator_type().deallocate(odata);
            set_data(ndata);
            set_capacity(a_capacity, a_capacity * sizeof(value_type));
        }
    }

    void resize_impl(size_type a_count, const value_type* a_value)
    {
        if (a_count < size()) {
            erase(begin() + a_count, end());
        }
        else if (a_count > size()) {
            reserve_auto(a_count);
#if _HAS_CXX20
            std::span<value_type> range{ data() + uiSize, a_count - uiSize };
            if (a_value) {
                std::for_each(
                    range.begin(),
                    range.end(),
                    [=](auto& a_elem) {
                    std::construct_at(std::addressof(a_elem), *a_value);
                });
            }
            else {
                std::uninitialized_default_construct(
                    range.begin(),
                    range.end());
            }
#else
            if (a_value) {
                for (size_type i = uiSize; i < a_count - uiSize; ++i)
                {
                    construct_at(std::addressof(data() + i), *a_value);
                }
            }
            else {
                std::uninitialized_default_construct_n(data() + uiSize, a_count - uiSize);
            }
#endif
            uiSize = a_count;
        }
    }

    [[nodiscard]] T* data() noexcept { return pData; }
    [[nodiscard]] const T* data() const noexcept { return pData; }
    void set_data(T* a_data) noexcept { pData = a_data; }

    T* pData;       // 08 or 10
};
static_assert(sizeof(BSTArray<void*>) == 0x10);

template<typename T>
class BSScrapArray : public BSTArray<T, BSScrapArrayAllocator>
{
public:

};
static_assert(sizeof(BSScrapArray<void*>) == 0x18);

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

        template<typename C>
        const C* GetStringC()
        {
            Entry* iter = this;
            while (iter->uFlags & kFlags_External)
                iter = reinterpret_cast<BSStringPool::Entry*>(uiLengthOrPtr);
            return reinterpret_cast<const C*>(&iter->pData[0]);
        }
        size_t GetLength()
        {
            Entry * iter = this;
            while (iter->uFlags & kFlags_External)
                iter = reinterpret_cast<BSStringPool::Entry*>(uiLengthOrPtr);
            return iter->uiLengthOrPtr;
        }

        using GetEntryT = void (*)(Entry*& entry, const char* apString, bool abCaseSensitive);
        static RelocAddr<GetEntryT>	GetEntry;

        using GetEntryWT = void (*)(Entry*& entry, const wchar_t* apString, bool abCaseSensitive);
        static RelocAddr<GetEntryWT>	GetEntryW;

        using ReleaseT = void (*)(Entry*& entry);
        static RelocAddr<ReleaseT>	Release;
    };
}

class BSFixedString
{
public:
    BSFixedString(const char* apString, bool abCaseSensitive = false)
    {
        pData = nullptr;
        if(apString)
            BSStringPool::Entry::GetEntry(pData, apString, abCaseSensitive);
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
        }
        pData = other.pData;
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
    BSFixedString(BSFixedString&& other) noexcept
    {
        pData = other.pData;
        other.pData = nullptr;
    }
    bool operator==(const char* lhs) const
    {
        BSFixedString tmp(lhs);
        return pData == tmp.pData;
    }
    size_t size() const { return pData ? pData->GetLength() : 0; }
    bool operator==(const BSFixedString& lhs) const { return pData == lhs.pData; }
    bool operator<(const BSFixedString& lhs) const { return pData < lhs.pData; }
    const char* c_str() const { return pData ? pData->GetStringC<char>() : nullptr; }
    operator const char* () const { return pData ? pData->GetStringC<char>() : nullptr; }

    static BSFixedString& Empty()
    {
        static BSFixedString empty("");
        return empty;
    }

    BSStringPool::Entry* pData;
};

class BSFixedStringW
{
public:
    BSFixedStringW(const wchar_t* apString, bool abCaseSensitive = false)
    {
        pData = nullptr;
        if(apString)
            BSStringPool::Entry::GetEntryW(pData, apString, abCaseSensitive);
    }
    ~BSFixedStringW()
    {
        if (pData)
            BSStringPool::Entry::Release(pData);
    }
    BSFixedStringW(const BSFixedStringW& other)
    {
        if (other.pData)
        {
            _InterlockedExchangeAdd(&other.pData->refCount, 1);
        }
        pData = other.pData;
    }
    BSFixedStringW& operator=(const BSFixedStringW& other)
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
    BSFixedStringW(BSFixedStringW&& other) noexcept
    {
        pData = other.pData;
        other.pData = nullptr;
    }
    bool operator==(const wchar_t* lhs) const
    {
        BSFixedStringW tmp(lhs);
        return pData == tmp.pData;
    }
    size_t size() const { return pData ? pData->GetLength() : 0; }
    bool operator==(const BSFixedString& lhs) const { return pData == lhs.pData; }
    bool operator<(const BSFixedString& lhs) const { return pData < lhs.pData; }
    const wchar_t* c_str() const { return pData ? pData->GetStringC<wchar_t>() : nullptr; }
    operator const wchar_t* () const { return pData ? pData->GetStringC<wchar_t>() : nullptr; }

    BSStringPool::Entry* pData;
};

class BSFixedStringWCS : public BSFixedStringW
{
public:
    BSFixedStringWCS(const wchar_t* apString) : BSFixedStringW(apString, true) { }

    static BSFixedStringWCS& Empty()
    {
        static BSFixedStringWCS empty(L"");
        return empty;
    }
};

class BSFixedStringCS : public BSFixedString
{
public:
    BSFixedStringCS(const char* apString) : BSFixedString(apString, true) { }

    static BSFixedStringCS& Empty()
    {
        static BSFixedStringCS empty("");
        return empty;
    }
};

class BGSLocalizedStringDL
{
public:
    u32 uiID;
};

// 08
struct BSIntrusiveRefCounted
{
public:
	volatile long	m_refCount;	// 00
	u32				unk04;		// 04
};

struct BSCRC32
{
    static RelocPtr<u32> uiCRCTable;

    static u32 GenerateCRC(u32 initial, const void* buf, size_t len)
    {
        u32 c = initial;
        const u8* u = static_cast<const u8*>(buf);
        for (size_t i = 0; i < len; ++i)
        {
            c = uiCRCTable[(c ^ u[i]) & 0xFF] ^ (c >> 8);
        }
        return c;
    }
};

namespace BSHash
{
    class FNV1a
    {
    public:
        size_t operator()(const u32& key)
        {
            return std::_Fnv1a_append_bytes(0xCBF29CE484222325, reinterpret_cast<const unsigned char*>(&key), 4);
        }
    };

    template<typename T>
    class String
    {
        size_t operator()(const T& key)
        {
            return BSCRC32::GenerateCRC(0, key.c_str(), key.size());
        }
    };

    class XOR
    {
    public:
        size_t operator()(const BSFixedString& key)
        {
            return (reinterpret_cast<u64>(key.c_str()) >> 32) ^ (reinterpret_cast<u64>(key.c_str()) & 0xFFFFFFFF);
        }
        size_t operator()(const BSFixedStringW& key)
        {
            return (reinterpret_cast<u64>(key.c_str()) >> 32) ^ (reinterpret_cast<u64>(key.c_str()) & 0xFFFFFFFF);
        }
    };
}


template<typename T>
class BSTScatterTableDefaultHashPolicy
{
public:
    size_t operator()(const T& key) = delete;
};

template<> class BSTScatterTableDefaultHashPolicy<BSFixedString>
{
public:
    size_t operator()(const BSFixedString& key)
    {
        return BSHash::XOR()(key);
    }
};

template<> class BSTScatterTableDefaultHashPolicy<BSFixedStringCS>
{
public:
    size_t operator()(const BSFixedStringCS& key)
    {
        return BSHash::XOR()(key);
    }
};

template<> class BSTScatterTableDefaultHashPolicy<BSFixedStringW>
{
public:
    size_t operator()(const BSFixedStringW& key)
    {
        return BSHash::XOR()(key);
    }
};

template<> class BSTScatterTableDefaultHashPolicy<BSFixedStringWCS>
{
public:
    size_t operator()(const BSFixedStringW& key)
    {
        return BSHash::XOR()(key);
    }
};

template<> class BSTScatterTableDefaultHashPolicy<u32>
{
public:
    size_t operator()(const u32& key)
    {
        return BSCRC32::GenerateCRC(0, &key, 4);
    }
};

template <class T1, class T2>
struct BSTScatterTableDefaultKVStorage
{
public:
    BSTScatterTableDefaultKVStorage() :
        Key(),
        Value()
    {}

    BSTScatterTableDefaultKVStorage(const T1& a_first, const T2& a_second) :
        Key(a_first),
        Value(a_second)
    {}

    BSTScatterTableDefaultKVStorage(const BSTScatterTableDefaultKVStorage& a_rhs) :
        Key(a_rhs.Key),
        Value(a_rhs.Value)
    {}

    BSTScatterTableDefaultKVStorage(BSTScatterTableDefaultKVStorage&& a_rhs) :
        Key(std::move(a_rhs.Key)),
        Value(std::move(a_rhs.Value))
    {
    }

    BSTScatterTableDefaultKVStorage& operator=(const BSTScatterTableDefaultKVStorage& a_rhs)
    {
        Key = a_rhs.Key;
        Value = a_rhs.Value;
    }

    BSTScatterTableDefaultKVStorage& operator=(BSTScatterTableDefaultKVStorage&& a_rhs)
    {
        Key = std::move(a_rhs.Key);
        Value = std::move(a_rhs.Value);
    }

    // Convenience to convert from std::make_pair
    BSTScatterTableDefaultKVStorage(const std::pair<T1, T2>& pair) : 
        Key(pair.first), 
        Value(pair.second)
    {}


    T1 Key;	// 00
    T2 Value;	// ??
};

template <class Key, class T, template<class, class> class Storage = BSTScatterTableDefaultKVStorage>
struct BSTScatterTableTraits
{
public:
    using key_type = Key;
    using mapped_type = T;
    using value_type = Storage<Key, T>;


    const key_type& operator()(const value_type& a_value) const
    {
        return a_value.Key;
    }
};

template <class Key, class T, template<class,class> class Storage = BSTScatterTableDefaultKVStorage>
struct BSTScatterTableEntry
{
    Storage<Key, T> Value;
    s32 iNextIndex;
    s32 iIndex;

    BSTScatterTableEntry(BSTScatterTableEntry&& a_rhs) :
        Value(std::move(a_rhs.Value)),
        iNextIndex(std::move(a_rhs.iNextIndex)),
        iIndex(std::move(a_rhs.iIndex))
    {
        a_rhs.iIndex = -1;
        a_rhs.iNextIndex = -1;
    }
};

template <class T, u32 N = 8>
struct BSTScatterTableHeapAllocator
{
public:
    using entry_type = T;
    using size_type = u32;

    BSTScatterTableHeapAllocator() {}

    entry_type* allocate(std::size_t a_num)
    {
        auto size = a_num * sizeof(entry_type);
        auto mem = (entry_type*)GetMemoryManager()->Allocate(size, 8, 1);
        memset(mem, 0, size);
        for (u64 i = 0; i < a_num; ++i)
        {
            mem[i].iNextIndex = -1;
            mem[i].iIndex = -1;
        }
        return mem;
    }

    void deallocate(entry_type* a_ptr)
    {
        GetMemoryManager()->Free(a_ptr, true);
    }

    size_type min_size() const
    {
        return static_cast<size_type>(1) << 3;
    }

    size_type max_size() const
    {
        return static_cast<size_type>(1) << 31;
    }
};

// Maybe related to the allocator type?
struct BSTScatterTableParent1
{
    void* unk00 = nullptr;
    u64 unk08 = 0;
    u64 unk10 = 0;
};

// Maybe related to the allocator type?
struct BSTScatterTableParent2
{
    void* unk00 = nullptr;
    u64 unk08 = 0;
};

template <
    class Traits,
    u32 N, 
    template <class, u32> class Allocator, 
    class Hash, 
    class KeyEqual,
    class Parent
>
class BSTScatterTableBase : public Parent
{
public:
    using traits_type = Traits;
    using key_type = typename traits_type::key_type;
    using mapped_type = typename traits_type::mapped_type;
    using value_type = typename traits_type::value_type;
    using hasher = Hash;
    using key_equal = KeyEqual;
    using size_type = u32;

    using entry_type = BSTScatterTableEntry<key_type, mapped_type>;
    using allocator_type = Allocator<entry_type, N>;

    BSTScatterTableBase() : Parent(),
        pTable(nullptr),
        uiSize(0),
        uiFree(0),
        uiLastFree(0)
    {
    }
    ~BSTScatterTableBase()
    {
        if (pTable)
        {
            deallocate(pTable);
            pTable = nullptr;
        }
    }

    DEFINE_STATIC_HEAP(Heap_Allocate, Heap_Free)

    template <class U>
    struct iterator_base
    {
    public:
        typedef std::ptrdiff_t difference_type;
        typedef U value_type;
        typedef U* pointer;
        typedef U& reference;
        typedef std::forward_iterator_tag iterator_category;

        iterator_base() :
            _entry(nullptr),
            _end(nullptr)
        {}

        iterator_base(const iterator_base& a_rhs) :
            _entry(a_rhs._entry),
            _end(a_rhs._end)
        {}

        iterator_base(iterator_base&& a_rhs) noexcept :
            _entry(std::move(a_rhs._entry)),
            _end(a_rhs._end)
        {
            a_rhs._entry = a_rhs._end;
        }

        iterator_base(entry_type* a_entry, entry_type* a_end) :
            _entry(a_entry),
            _end(a_end)
        {
            while (_entry != _end && _entry->iNextIndex == -1) {
                ++_entry;
            }
        }

        ~iterator_base(){}

        iterator_base& operator=(const iterator_base& a_rhs)
        {
            _entry = a_rhs._entry;
        }

        iterator_base& operator=(iterator_base&& a_rhs)
        {
            _entry = std::move(a_rhs._entry);
            a_rhs._entry = a_rhs._end;
        }

        void swap(iterator_base& a_rhs)
        {
            std::swap(_entry, a_rhs._entry);
        }

        reference operator*() const
        {
            return _entry->Value;
        }

        pointer operator->() const
        {
            return std::addressof(_entry->Value);
        }

        bool operator==(const iterator_base& a_rhs) const
        {
            return _entry == a_rhs._entry;
        }

        bool operator!=(const iterator_base& a_rhs) const
        {
            return !operator==(a_rhs);
        }

        iterator_base& operator++()
        {
            do {
                ++_entry;
            } while (_entry != _end && _entry->iNextIndex == -1);
            return *this;
        }

        iterator_base operator++(int)
        {
            iterator_base tmp{ *this };
            operator++();
            return tmp;
        }

    private:
        entry_type* _entry;
        entry_type* _end;
    };


    using iterator = iterator_base<value_type>;
    using const_iterator = iterator_base<const value_type>;

    hasher hash_function() const
    {
        return hasher();
    }

    key_equal key_eq() const
    {
        return key_equal();
    }

    bool comp_key(const key_type& a_lhs, const key_type& a_rhs) const
    {
        return key_eq()(a_lhs, a_rhs);
    }

    iterator begin()
    {
        return get_entries() ? make_iterator(get_entries()) : iterator();
    }


    const_iterator begin() const
    {
        return get_entries() ? make_iterator(get_entries()) : const_iterator();
    }


    const_iterator cbegin() const
    {
        return begin();
    }

    iterator end()
    {
        return get_entries() ? make_iterator(get_entries() + uiSize) : iterator();
    }


    const_iterator end() const
    {
        return get_entries() ? make_iterator(get_entries() + uiSize) : const_iterator();
    }


    const_iterator cend() const
    {
        return end();
    }


    bool empty() const
    {
        return !get_entries() || uiFree == 0;
    }


    size_type size() const
    {
        return uiSize - uiFree;
    }

    size_type max_size() const
    {
        return allocator_type().max_size();
    }

    std::pair<iterator, bool> insert(const value_type& a_value)
    {
        return insert_impl(false, a_value);
    }

    std::pair<iterator, bool> insert(value_type&& a_value)
    {
        return insert_impl(false, std::move(a_value));
    }

    std::pair<iterator, bool> insert_or_assign(const value_type& a_value)
    {
        return insert_impl(true, a_value);
    }

    std::pair<iterator, bool> insert_or_assign(value_type&& a_value)
    {
        return insert_impl(true, std::move(a_value));
    }

    std::pair<iterator, bool> insert_or_assign(const key_type& a_key, const mapped_type& a_value)
    {
        return insert_impl(true, value_type(a_key, a_value));
    }

    size_type erase(const key_type& a_key)
    {
        if (!get_entries()) {  // no entries
            return 0;
        }

        auto entry = get_pos(calc_idx(a_key));
        if (entry->iNextIndex == -1) {	 // key not in table
            return 0;
        }

        entry_type* tail = nullptr;
        while (!comp_key(get_key(entry->Value), a_key)) {  // find key in table
            tail = entry;
            entry = get_pos(entry->iNextIndex);
            if (entry == get_pos(uiSize)) {
                return 0;
            }
        }

        entry->Value.~value_type();

        if (entry->iNextIndex == uiSize) {	 // if no chain
            if (tail) {
                tail->iNextIndex = static_cast<u32>(uiSize);
            }
            entry->iNextIndex = -1;
            entry->iIndex = -1;
        }
        else {  // else move next entry into current and clear the old entry
            new (entry) entry_type(std::move(*get_pos(entry->iNextIndex)));
        }

        ++uiFree;
        return 1;
    }

    iterator find(const key_type& a_key)
    {
        auto entry = find_impl(a_key);
        return entry ? make_iterator(entry) : end();
    }


    const_iterator find(const key_type& a_key) const
    {
        auto entry = find_impl(a_key);
        return entry ? make_iterator(entry) : end();
    }

    void reserve(size_type a_count)
    {
        if (a_count <= uiSize) {
            return;
        }

        u32 leftShifts = 0;
        while ((a_count & static_cast<u32>(1 << 31)) == 0) {
            a_count <<= 1;
            ++leftShifts;
        }
        auto bitPos = 31 - leftShifts;
        auto newCount = static_cast<u32>(1 << bitPos);
        grow(newCount);
    }

    void clear()
    {
        auto entries = get_entries();
        clear_entries(0, uiSize);
        uiFree = uiSize;
    }

private:
     bool grow()
     {
         if (uiSize == (u32)1 << 31) {
             return false;
         }

         u32 newCapacity = static_cast<u32>(uiSize ? uiSize << 1 : min_size());
         return grow(newCapacity);
     }

     void clear_entries(u64 start, u64 end)
     {
         for (u64 i = start; i < end; ++i)
         {
             auto entry = get_pos(i);
             if (entry->iNextIndex != -1)
             {
                 entry->Value.~value_type();
                 entry->iNextIndex = -1;
                 entry->iIndex = -1;
             }
         }
     }

     bool grow(u32 a_newCapacity)
     {
         auto oldEntries = get_entries();
         auto begIter = begin();
         auto endIter = end();

         auto newEntries = allocate(a_newCapacity);
         if (!newEntries) {
             return false;
         }
         else if (newEntries == oldEntries) {
             uiSize = a_newCapacity;
             return true;
         }
         else {
             uiSize = a_newCapacity;
             uiLastFree = a_newCapacity;
             uiFree = a_newCapacity;
             set_entries(newEntries);

             while (begIter != endIter) {
                 insert(std::move(*begIter));
                 ++begIter;
             }

             deallocate(oldEntries);
             return true;
         }
     }

     size_t calc_hash(const key_type& a_key) const
     {
         return hash_function()(a_key);
     }

     u64 calc_idx(const key_type& a_key) const
     {
         return calc_hash(a_key) & (uiSize - 1);	// capacity is always a factor of 2, so this is a faster modulo
     }

     entry_type* find_impl(const key_type& a_key) const
     {
         if (!get_entries()) {
             return nullptr;
         }

         auto probe = get_pos(calc_idx(a_key));  // try ideal pos
         if (probe->iNextIndex == -1) {
             return nullptr;	 // nothing there
         }

         do {
             if (comp_key(get_key(probe->Value), a_key)) {
                 return probe;
             }
             else {
                 probe = get_pos(probe->iNextIndex);
             }
         } while (probe != get_pos(uiSize));  // follow chain

         return nullptr;
     }

     template <class Arg>
     std::pair<iterator, bool> insert_impl(bool a_overwrite, Arg&& a_value)
     {
         if (!get_entries() || !uiFree) {
             if (!grow()) {
                 return std::make_pair(end(), false);  // maybe throw?
             }
         }

         auto idealEntry = calc_pos(get_key(a_value));

         // Slot is empty, fill it
         if (idealEntry->iNextIndex == -1) {
             new (std::addressof(idealEntry->Value)) value_type(std::forward<Arg>(a_value));
             idealEntry->iNextIndex = static_cast<s32>(uiSize);
             idealEntry->iIndex = static_cast<s32>(std::distance(get_pos(0), idealEntry));
             --uiFree;
             return std::make_pair(make_iterator(idealEntry), true);
         }

         for (auto iter = idealEntry; iter != get_pos(uiSize); iter = get_pos(iter->iNextIndex)) {
             if (comp_key(get_key(iter->Value), get_key(a_value))) {
                 if (a_overwrite) {
                     iter->Value.~value_type();
                     new (std::addressof(iter->Value)) value_type(std::forward<Arg>(a_value));
                 }
                 return std::make_pair(make_iterator(iter), false);
             }
         }

         auto freeEntry = get_free_entry();

         auto takenIdealEntry = calc_pos(get_key(idealEntry->Value));
         if (takenIdealEntry == idealEntry) {  // if entry occupying our slot would've hashed here anyway
             freeEntry->iIndex = idealEntry->iIndex;
             freeEntry->iNextIndex = idealEntry->iNextIndex;
             idealEntry->iNextIndex = static_cast<s32>(std::distance(get_pos(0), freeEntry));
             new (std::addressof(freeEntry->Value)) value_type(std::forward<Arg>(a_value));
             --uiFree;
             return std::make_pair(make_iterator(freeEntry), true);
         }

         while (takenIdealEntry->iNextIndex != static_cast<s32>(std::distance(get_pos(0), idealEntry))) {  // find entry that links here
             takenIdealEntry = get_pos(takenIdealEntry->iNextIndex);
         }

         // move taken slot out, so we can move in
         new (std::addressof(freeEntry->Value)) value_type(std::move(idealEntry->Value));
         freeEntry->iNextIndex = idealEntry->iNextIndex;
         freeEntry->iIndex = idealEntry->iIndex;
         takenIdealEntry->iNextIndex = static_cast<s32>(std::distance(get_pos(0), freeEntry));
         new (std::addressof(idealEntry->Value)) value_type(std::forward<Arg>(a_value));
         idealEntry->iNextIndex = static_cast<s32>(uiSize);
         --uiFree;
         return std::make_pair(make_iterator(idealEntry), true);
     }

     entry_type* get_pos(u64 index) const
     {
         return const_cast<entry_type*>(get_entries() + index);
     }

     entry_type* calc_pos(const key_type& a_key) const
     {
         return get_pos(calc_idx(a_key));
     }

     entry_type* get_free_entry()
     {
         entry_type* entry = nullptr;
         do {
             uiLastFree = (uiSize - 1) & (uiLastFree - 1);
             entry = get_pos(uiLastFree);
         } while (entry->iNextIndex != -1);

         return entry;
     }

     const key_type& get_key(const value_type& a_value) const
     {
         traits_type traits;
         return traits(a_value);
     }

     iterator make_iterator(entry_type* a_entry)
     {
         return iterator(a_entry, pTable + uiSize);
     }

     const_iterator make_iterator(entry_type* a_entry) const
     {
         return const_iterator(a_entry, pTable + uiSize);
     }

     entry_type* allocate(std::size_t a_num)
     {
         return allocator_type().allocate(a_num);
     }
     void deallocate(entry_type* a_ptr)
     {
         allocator_type().deallocate(a_ptr);
     }
     entry_type* get_entries() const
     {
         return pTable;
     }
     void set_entries(entry_type* a_entries)
     {
         pTable = a_entries;
     }
     size_type min_size() const
     {
         return allocator_type().min_size();
     }

    entry_type* pTable;
    u64 uiSize;
    u64 uiFree;
    u64 uiLastFree;
};

template <class Key, class T, class Hash = BSTScatterTableDefaultHashPolicy<Key>, class KeyEqual = std::equal_to<Key>>
class BSTHashMap : public BSTScatterTableBase<BSTScatterTableTraits<Key, T>, 8, BSTScatterTableHeapAllocator, Hash, KeyEqual, BSTScatterTableParent1>
{
public:
};
static_assert(sizeof(BSTHashMap<void*, void*>) == 0x38);

template <class Key, class T, class Hash = BSTScatterTableDefaultHashPolicy<Key>, class KeyEqual = std::equal_to<Key>>
class BSTHashMap2 : public BSTScatterTableBase<BSTScatterTableTraits<Key, T>, 8, BSTScatterTableHeapAllocator, Hash, KeyEqual, BSTScatterTableParent2>
{
public:
};
static_assert(sizeof(BSTHashMap2<void*, void*>) == 0x30);