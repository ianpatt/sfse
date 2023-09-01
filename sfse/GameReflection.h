#pragma once

#include "sfse_common/Types.h"

namespace BSReflection
{

class IType;

// 10
struct TypedData
{
	IType	* type;	// 00
	void	* data;	// 08
};

// 08
class IType
{
	virtual TypedData * GetZeroed(TypedData * dst, void * buf) = 0;
	virtual TypedData * Copy(TypedData * dst, void * buf, TypedData * src) = 0;
	virtual TypedData * Copy2(TypedData * dst, void * buf, TypedData * src) = 0;	// presumably these are not the same thing
	virtual void Unk03() = 0;
	virtual const char * GetName() = 0;

//	void	** _vtbl;	// 00
};

// 20
class BasicType : public IType
{
	u32			size;		// 08
	u16			size2;		// 0C - repeat of size field?
	unk8		unk0E;		// 0E - 00
	unk8		unk0F;		// 0F - FF
	const char	* name;		// 10
	u8			id;			// 18
	u8			isSigned;	// 19
	unk16		unk1A;		// 1A
	unk32		unk1C;		// 1C
};

//				size	size2	0E	0F	id	isSigned
//	int8_t		1		1		00	FF	00	1
//	int16_t		2		2		00	FF	02	1
//	int32_t		4		4		00	FF	04	1
//	int64_t		8		8		00	FF	06	1
//	uint8_t		1		1		00	FF	01	0
//	uint16_t	2		2		00	FF	03	0
//	uint32_t	4		4		00	FF	05	0
//	uint64_t	8		8		00	FF	07	0
//	bool		1		1		00	FF	08	0
//	float		4		4		00	FF	09	1
//	double		8		8		00	FF	0A	1

}
