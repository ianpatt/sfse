#include "sfse/GameTypes.h"
#include "sfse/GameReflection.h"
#include "sfse_common/Types.h"
#include "sfse_common/Utilities.h"
#include "sfse_common/Errors.h"

// this is all inside the BSScript namespace

class VMClassInfo;
class VMClassRegistry;
class VMState;
class VMValue;

// 10
class IFunction
{
public:
	IFunction() { }
	virtual ~IFunction() { }

	struct Unk13
	{
		u64	unk00;
		u32	unk08;
	};

//	void	** _vtbl;	// 00

	BSIntrusiveRefCounted	refCount;	// 08

	virtual BSFixedString *	GetName(void) = 0;
	virtual BSFixedString *	GetClassName(void) = 0;
	virtual BSFixedString *	GetStr20(void) = 0;
	virtual u64 *			GetReturnType(u64 * dst) = 0;
	virtual u64				GetNumParams(void) = 0;
	virtual u64 *			GetParam(u32 idx, BSFixedString * nameOut, u64 * typeOut) = 0;
	virtual u64				GetNumParams2(void) = 0;
	virtual bool			IsNative(void) = 0;
	virtual bool			IsStatic(void) = 0;
	virtual bool			Unk_0A(void) = 0;
	virtual u32				Unk_0B(void) = 0;
	virtual u32				GetUnk44(void) = 0;
	virtual BSFixedString *	GetStr48(void) = 0;
	virtual void			Unk_0E(u32 unk) = 0;
	virtual u32				Invoke(u64 unk0, u64 unk1, VMClassRegistry * registry, VMState * unk3) = 0;
	virtual BSFixedString *	Unk_10(void) = 0;	// file/line number?
	virtual bool			Unk_11(u32 unk0, u32 * unk1) = 0;
	virtual u64 *			Unk_12(u64 * out) = 0;		// new, might be type reflection
	virtual Unk13			Unk_13(Unk13 * out) = 0;	// new, might be type reflection
	virtual bool			GetParamInfo(u32 idx, void * out) = 0;	// param list stuff
	virtual void *			Unk_15(u64 arg0, u64 arg1) = 0;	// param list stuff, loop
	virtual u8				GetUnk41(void) = 0;
	virtual void			SetUnk41(u8 arg) = 0;
};

// this is inside the NF_util namespace
// 50
class NativeFunctionBase : public IFunction
{
public:
	NativeFunctionBase() { }
	virtual ~NativeFunctionBase() { }

	// 0C (10 aligned)
	struct ParameterInfo
	{
		// 08
		struct Entry
		{
			BSFixedString	name;		// 00

			union
			{
				u64			type;		// 08 - shared with VMValue::type
				VMClassInfo * typePtr;	// 08
			};
		};

		Entry * data;	// 00 length = numParams + unk0A
		u16	numParams;	// 08
		u16	unk0A;		// 0A

		MEMBER_FN_PREFIX(ParameterInfo);
		DEFINE_MEMBER_FN(GetParam, u64 *, 0x0308D8AC, u32 idx, BSFixedString * nameOut, u64 * typeOut);
	};

	virtual BSFixedString * GetName(void) override { return &m_fnName; }
	virtual BSFixedString * GetClassName(void) override { return &m_className; }
	virtual BSFixedString * GetStr20(void) override { return &unk20; }
	virtual u64 *			GetReturnType(u64 * dst) override { *dst = m_retnType; return dst; }
	virtual u64				GetNumParams(void) override { return m_params.unk0A; }
	virtual u64 *			GetParam(u32 idx, BSFixedString * nameOut, u64 * typeOut)
	{
		return CALL_MEMBER_FN(&m_params, GetParam)(idx, nameOut, typeOut);
	}
	virtual u64				GetNumParams2(void) override { return m_params.unk0A; }
	virtual bool			IsNative(void) override { return true; }
	virtual bool			IsStatic(void) override { return m_isStatic; }
	virtual bool			Unk_0A(void) override { return false; }
	virtual u32				Unk_0B(void) override { return 0; }
	virtual u32				GetUnk44(void) override { return unk44; }
	virtual BSFixedString *	GetStr48(void) override { return &unk48; }
	virtual void			Unk_0E(u32 unk) override { }	// always nop?
	virtual u32				Invoke(u64 unk0, u64 unk1, VMClassRegistry * registry, VMState * unk3) override
	{
		return CALL_MEMBER_FN(this, Impl_Invoke)(unk0, unk1, registry, unk3);
	}
	virtual BSFixedString *	Unk_10(void) override { return CALL_MEMBER_FN(this, Impl_Fn10)(); }	// static BSFixedString result("<native>"); return result;
	virtual bool			Unk_11(u32 unk0, u32 * unk1) override { *unk1 = 0; return false; }
	virtual u64 *			Unk_12(u64 * out) override
	{
		*out = 0;
		// out[4] = 0; // as u8?

		return out;
	}
	virtual Unk13			Unk_13(Unk13 * out) override
	{
		out->unk00 = 0;
		out->unk08 = 0;
		// out[8] = 0; // as u8?
	}
	virtual bool			GetParamInfo(u32 idx, void * out) override
	{
		return CALL_MEMBER_FN(this, Impl_GetParamInfo)(idx, out);
	}
	virtual void *			Unk_15(u64 arg0, u64 arg1)
	{
		return CALL_MEMBER_FN(this, Impl_Fn15)(arg0, arg1);
	}
	virtual u8				GetUnk41(void) override { return unk41; }
	virtual void			SetUnk41(u8 arg) override { unk41 = arg; }
	virtual bool			HasCallback() = 0;
	virtual bool			Run(VMValue * baseValue, VMClassRegistry * registry, u32 arg2, VMValue * resultValue, VMState * state) = 0;

	MEMBER_FN_PREFIX(NativeFunctionBase);
	DEFINE_MEMBER_FN(Impl_Invoke, u32, 0x0308D584, u64 unk0, u64 unk1, VMClassRegistry * registry, VMState * unk3);
	// ??_7?$NativeFunction1@VActiveEffect@@XPEAVTESForm@@@BSScript@@6B@ entry 0x10
	DEFINE_MEMBER_FN(Impl_Fn10, BSFixedString *, 0x0308D914);
	DEFINE_MEMBER_FN(Impl_GetParamInfo, bool, 0x0308D9B0, u32 idx, void * out);
	DEFINE_MEMBER_FN(Impl_Fn15, void *, 0x0308D91C, u64 arg0, u64 arg1);

protected:
	BSFixedString	m_fnName;		// 10
	BSFixedString	m_className;	// 18
	BSFixedString	unk20;			// 20
	u64				m_retnType;		// 28
	ParameterInfo	m_params;		// 30
	bool			m_isStatic;		// 40
	u8				unk41;			// 41
	u8				m_isLatent;		// 42
	u8				pad43;			// 43
	u32				unk44;			// 44
	BSFixedString	unk48;			// 48
};

STATIC_ASSERT(sizeof(NativeFunctionBase) == 0x50);

// 58
// this should be fully functional for deriving
class NativeFunction : public NativeFunctionBase
{
public:
	NativeFunction() = delete;
	NativeFunction(const char * fnName, const char * className, u8 isStatic, u32 numParams)
	{
		CALL_MEMBER_FN(this, Impl_ctor)(fnName, className, isStatic, numParams);
	}

	virtual ~NativeFunction()	{ CALL_MEMBER_FN(this, Impl_dtor)(); }

	virtual bool	HasCallback(void) override { return m_callback != 0; }

	MEMBER_FN_PREFIX(NativeFunction);
	DEFINE_MEMBER_FN(Impl_ctor, NativeFunction *, 0x0308D408, const char * fnName, const char * className, u8 unk0, u32 numParams);
	DEFINE_MEMBER_FN(Impl_dtor, void, 0x0308D4C4);	// same as NativeFunctionBase dtor

protected:
	void * m_callback;	// 50
};

STATIC_ASSERT(sizeof(NativeFunction) == 0x58);
