#pragma once

#include "sfse_common/Types.h"
#include "sfse_common/Utilities.h"

namespace BSResource
{
enum ErrorCode
{
    EC_NONE = 0,
    EC_NOT_EXIST,
    EC_INVALID_PATH,
    EC_FILE_ERROR,
    EC_INVALID_TYPE,
    EC_MEMORY_ERROR,
    EC_BUSY,
    EC_INVALID_PARAM,
    EC_UNSUPPORTED,
};

class Info
{
public:
    struct FILETIME
    {
        u32 dwLowDateTime;
        u32 dwHighDateTime;
    };
    FILETIME ModifyTime;
    FILETIME CreateTime;
    u64 uiFileSize;
};

class StreamBase
{
public:
    virtual ~StreamBase();

    virtual BSResource::ErrorCode DoOpen() = 0;
    virtual void DoClose() = 0;
    virtual u64 DoGetKey() = 0;
    virtual BSResource::ErrorCode DoGetInfo(Info*) = 0;

    u32 uiTotalSize;
    u32 uiFlags;
};

};

class NiBinaryStream
{
public:
    NiBinaryStream() : m_uiAbsoluteCurrentPos(0) { }
    virtual ~NiBinaryStream() { }
    virtual operator bool() = 0;
    virtual void Seek(s64 iNumBytes) = 0;
    virtual u64 GetPosition() const = 0;

    struct BufferInfo
    {
        void* pvBuffer;
        u64 uiTotalSize;
        u64 uiBufferAllocSize;
        u64 uiBufferReadSize;
        u64 uiBufferPos;
        u64 uiStreamPos;
    };

    virtual void GetBufferInfo(BufferInfo& info)
    {
        info.pvBuffer = nullptr;
        info.uiTotalSize = 0;
        info.uiBufferAllocSize = 0;
        info.uiBufferReadSize = 0;
        info.uiBufferPos = 0;
        info.uiStreamPos = 0;
    }

    virtual u64 DoRead(void* apBuffer, u64 auiBytes) = 0;
    virtual u64 DoWrite(const void* apBuffer, u64 auiBytes) = 0;

    u64 m_uiAbsoluteCurrentPos; // 08
};

class BSResourceNiBinaryStream : public NiBinaryStream
{
public:
    BSResourceNiBinaryStream() = delete;
    BSResourceNiBinaryStream(const char* apName) { Construct(apName); }
    virtual ~BSResourceNiBinaryStream() { Destroy(); }
    virtual operator bool() override { return spStream != nullptr; }
    virtual void Seek(s64 iNumBytes) override { Seek_Impl(iNumBytes); }
    virtual u64 GetPosition() const override { return uiStreamPos; }
    virtual void GetBufferInfo(BufferInfo& info) override { GetBufferInfo_Impl(info); }
    virtual u64 DoRead(void* apBuffer, u64 auiBytes) override { return DoRead_Impl(apBuffer, auiBytes); };
    virtual u64 DoWrite(const void* apBuffer, u64 auiBytes) override { return DoWrite_Impl(apBuffer, auiBytes); };

    u32 GetSize() const { return spStream ? spStream->uiTotalSize : 0; }

    template<typename T>
    void GetLine(T* apDest, u32 auiBufferSize, int aiDelim)
    {
        T* iter = apDest;
        if (auiBufferSize == 0)
            return 0;

        for (u32 i = 0; i < auiBufferSize - 1; i++)
        {
            T	data;
            u64 bytesRead = DoRead(&data, sizeof(T)) != sizeof(T);
            m_uiAbsoluteCurrentPos += bytesRead;
            if (!bytesRead)
                break;
            if (data == aiDelim)
                break;
            *iter++ = data;
        }

        // null terminate
        *iter = 0;
        return iter - apDest;
    }

    BSResource::StreamBase*/*BSTSmartPointer<BSResource::Stream, BSTSmartPointerIntrusiveRefCount>*/ spStream;    // 10
    void/*BSResourceNiBinaryStream::BufferType*/* pBuffer;                                      // 18
    u64                   uiStreamPos;                                                          // 20
    BSResource::ErrorCode eLastError;                                                           // 28

    DEFINE_MEMBER_FN_1(Construct, void, 0x037D9648, const char* apName);
    DEFINE_MEMBER_FN_0(Destroy, void, 0x037D96EC);
    DEFINE_MEMBER_FN_1(Seek_Impl, void, 0x037D9EF4, s64 iNumBytes);
    DEFINE_MEMBER_FN_1(GetBufferInfo_Impl, void, 0x037D994C, BufferInfo& info);
    DEFINE_MEMBER_FN_2(DoRead_Impl, u64, 0x037D97D4, void* apBuffer, u64 auiBytes);
    DEFINE_MEMBER_FN_2(DoWrite_Impl, u64, 0x037D9838, const void* apBuffer, u64 auiBytes);
};
static_assert(sizeof(BSResourceNiBinaryStream) == 0x30);
