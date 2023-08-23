#pragma once

#include <intrin.h>

typedef unsigned __int8		u8;
typedef unsigned __int16	u16;
typedef unsigned __int32	u32;
typedef unsigned __int64	u64;
typedef signed __int8		s8;
typedef signed __int16		s16;
typedef signed __int32		s32;
typedef signed __int64		s64;
typedef float				f32;
typedef double				f64;
typedef u64					uint;

typedef u8	unk8;
typedef u16	unk16;
typedef u32	unk32;
typedef u64	unk64;

inline u16 swap16(u16 a)
{
	return _byteswap_ushort(a);
}

inline u32 swap32(u32 a)
{
	return _byteswap_ulong(a);
}

inline u64 swap64(u64 a)
{
	return _byteswap_uint64(a);
}
