#pragma once

#include "sfse_common/Types.h"
#include "sfse/GameLock.h"
#include "sfse/GameTypes.h"
#include "sfse/NiTypes.h"

class NiRTTI;
class NiCamera;
class NiNode;
class NiCollisionObject;
class BSGeometry;
class BSDynamicGeometry;
class NiExtraData;

class NiRefObject
{
public:
	NiRefObject() : m_uiRefCount(0), pad0C(-1) { };
	virtual ~NiRefObject() { };

	virtual void	DeleteThis(void) { delete this; };	// calls virtual dtor

	void IncRef()
	{
		_InterlockedIncrement(&m_uiRefCount);
	}

	bool Release()
	{
		return _InterlockedDecrement(&m_uiRefCount) == 0;
	}

	void DecRef()
	{
		if (Release())
			DeleteThis();
	}

	volatile long	m_uiRefCount;	// 08
	s32				pad0C;			// 0C
};

class NiObject : public NiRefObject
{
public:
	virtual NiRTTI* GetRTTI() const;
	virtual const NiNode* IsNode() const;
	virtual NiNode* IsNode();
	virtual NiNode* IsSwitchNode();
	virtual NiNode* IsFadeNode();
	virtual NiNode* IsMultiBoundNode();
	virtual const BSGeometry* IsGeometry() const;
	virtual BSGeometry* IsGeometry();
	virtual void Unk_0A();
	virtual void Unk_0B();
	virtual void Unk_0C();
	virtual void Unk_0D();
	virtual void Unk_0E();
	virtual void Unk_0F();
	virtual void Unk_10();
	virtual void Unk_11();
	virtual void Unk_12();
	virtual void Unk_13();
	virtual const BSDynamicGeometry* IsDynamicGeometry() const;
	virtual BSDynamicGeometry* IsDynamicGeometry();
	virtual void Unk_16();
	virtual void Unk_17();
	virtual void Unk_18();
	virtual void Unk_19();
	virtual void Unk_1A();
	virtual void Unk_1B();
	virtual void Unk_1C();
	virtual void Unk_1D();
	virtual void Unk_1E();
	virtual void Unk_1F();
	virtual void Unk_20();
	virtual void Unk_21();
	virtual void Unk_22();
	virtual void Unk_23();
	virtual void Unk_24();
	virtual void Unk_25();
	virtual void Unk_26();
	virtual void Unk_27();
	virtual void Unk_28();
	virtual void Unk_29();
	virtual void Unk_2A();
	virtual void Unk_2B();
	virtual void Unk_2C();
	virtual void Unk_2D();
	virtual void Unk_2E();
	virtual void Unk_2F();
	virtual void Unk_30();
	virtual void Unk_31();
	virtual void Unk_32();
	virtual void Unk_33();
	virtual void Unk_34();
	virtual void Unk_35();
};

class NiObjectNET : public NiObject
{
public:
	BSFixedString						m_kName;	// 10
	u64									unk18;		// 18
	u64									unk20;		// 20
	BSReadWriteLock						extraLock;	// 28
	BSTArray<NiPointer<NiExtraData>>*	pExtra;		// 30

	DEFINE_MEMBER_FN_1(AddExtraData, bool, 0x037E68CC, NiExtraData* pkExtra);
};
static_assert(sizeof(NiObjectNET) == 0x38);

struct NiUpdateData
{
	enum UPDATE_FLAGS : u32
	{
		UF_UPDATE_CONTROLLERS = 0x1,
		UF_UPDATE_PARALLEL = 0x2,
		UF_FADENODE_CULLED = 0x4,
		UF_SKIP_MULTIBOUNDS = 0x8,
		UF_MOVE_COLLISION_USING_VEL = 0x100,
		UF_NO_UPWARD_PASS = 0x200,
		UF_NO_USING_CHECKS = 0x400,
		UF_TRANSFORMS_ONLY = 0x800,
		UF_FOUND_PARTICLES = 0x10000,
		UF_FOUND_MORPHS = 0x20000,
		UF_SCENEGRAPH_CHANGE = 0x40000,
		UF_BOUND_CHANGE = 0x80000,
		UF_FOUND_TRANSF_CONTROL_UD = 0x100000,
		UF_FOUND_EFFECT_LIGHTING = 0x200000,
		UF_SETONUPDATE_MASK = 0xFFFF0000,
	};

	u64	unk00 = 0;	// 00
	u64	unk08 = 0;	// 08
	u64	unk10 = 0;	// 10
	u64	unk18 = 0;	// 18
	u64	unk20 = 0;	// 20
	u64	unk28 = 0;	// 28
	u64	unk30 = 0;	// 30
	u32	Flags = 0;	// 38
	u32	unk3C = 0;	// 3C
	u32	unk40 = 0;	// 40
	u32	unk44 = 0;	// 44
};
static_assert(sizeof(NiUpdateData) == 0x48);

struct NiBound
{
	NiPoint3 m_kCenter;
	union
	{
		float	m_fRadius;
		s32		m_iRadiusAsInt;
	};
};

class NiAVObject : public NiObjectNET
{
public:
	virtual void Unk_36();
	virtual void UpdateControllers();
	virtual void PerformOp();
	virtual void Unk_39();
	virtual void Unk_3A();
	virtual void Unk_3B();
	virtual void SetAppCulled(bool bAppCulled);
	virtual NiAVObject* GetObjectByName(const BSFixedString& name);
	virtual void SetSelectiveUpdateFlags(bool& bSelectedUpdate, bool bSelectiveUpdateTransforms, bool& bRigid);
	virtual void Unk_3F();
	virtual void Unk_40();
	virtual void Unk_41();
	virtual void Unk_42();
	virtual void Unk_43();
	virtual void Unk_44();
	virtual void Unk_45();
	virtual void Unk_46();
	virtual void Unk_47();
	virtual void Unk_48();
	virtual void Unk_49();
	virtual void Unk_4A();
	virtual void Unk_4B();
	virtual void Unk_4C();
	virtual void Unk_4D();
	virtual void Unk_4E();
	virtual void UpdateWorldData(NiUpdateData& apData);
	virtual void UpdateTransformAndBounds(NiUpdateData& apData);
	virtual void UpdateTransforms(NiUpdateData& apData);
	virtual void Unk_52();
	virtual void Unk_53();

	NiNode* m_pkParent;				// 38
	NiTransform m_kLocal;			// 40
	NiTransform m_kWorld;			// 80
	NiTransform m_kPreviousWorld;	// C0
	NiBound m_kWorldBound;			// 100
	NiPointer<NiCollisionObject>	m_spCollisionObject;	// 110
	u64	m_uFlags;					// 118
	u64	unk120;						// 120
	u32	unk128;						// 128
	u32	unk12C;						// 12C

	DEFINE_MEMBER_FN_1(Update, void, 0x037DE0E4, NiUpdateData& apData);
};
static_assert(sizeof(NiAVObject) == 0x130);
static_assert(offsetof(NiAVObject, m_pkParent) == 0x38);
static_assert(offsetof(NiAVObject, m_kLocal) == 0x40);
static_assert(offsetof(NiAVObject, m_kWorld) == 0x80);
static_assert(offsetof(NiAVObject, m_kPreviousWorld) == 0xC0);

class NiNode : public NiAVObject
{
public:
	virtual void AttachChild(NiAVObject* pkChild, bool bFirstAvail);
	virtual void InsertChildAt(u32 i, NiAVObject* pkChild);
	virtual void DetachChild(NiAVObject* pkChild, NiPointer<NiAVObject>& aspAVObject);
	virtual void DetachChild(NiAVObject* pkChild);
	virtual void Unk_58();
	virtual void DetachChildAt(u32 i, NiPointer<NiAVObject>& aspAVObject);
	virtual void DetachChildAt(u32 i);
	virtual void SetAt(u32 i, NiAVObject* pkChild, NiPointer<NiAVObject>& aspAVObject);
	virtual void SetAt(u32 i, NiAVObject* pkChild);
	virtual void UpdateUpwardPass(NiUpdateData& apData);
	virtual void Unk_5E();

	NiTArray<NiPointer<NiAVObject>> m_kChildren;	// 130
};
static_assert(sizeof(NiNode) == 0x150);
