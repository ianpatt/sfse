#pragma once

#include "sfse/GameUI.h"
#include "sfse/GameSingleton.h"
#include "sfse_common/Relocation.h"
#include "sfse_common/Utilities.h"
#include "sfse/NiTypes.h"

class MenuActor;

namespace TESNPCData
{
class ChargenDataModel : public IDataModel, public BSTSingletonSDM<ChargenDataModel>
{
public:
    virtual ~ChargenDataModel();

	static ChargenDataModel* GetSingleton()
	{
		RelocPtr<ChargenDataModel*> singleton(0x06A33A00);
		return *singleton;
	}

	// Contains main UI data model wrappers, decode these later
	// This function will pull data from the TESNPC into this wrapper
	DEFINE_MEMBER_FN_1(Update, void, 0x0190D110, MenuActor*); // unk2 removed in 1.9.51
};

extern RelocPtr<MenuActor*> g_actorCheckpoint;
}

namespace BGSCharacterMorph
{
class FacialBoneSlider
{
public:
	FacialBoneSlider() : ID(0), unk54(-1), unk58(0), unk40(""), unk48("") { }
	virtual ~FacialBoneSlider() { };

	virtual const BSFixedString& GetName() { return BSFixedString::Empty(); };
	virtual void Unk_02() { };
	virtual bool IsZeroToOne() { return true; };
	virtual void Unk_04(bool a_arg1) { };
	virtual const char* Unk_05() { return BSFixedStringCS::Empty().c_str(); };
	virtual void Unk_06(const char* a_arg1) { };

	DEFINE_STATIC_HEAP(Heap_Allocate, Heap_Free)

	struct SliderExtents
	{
		struct Extents
		{
			NiPoint3 Position;
			NiPoint3 Rotation;
			NiPoint3 Scale;
		};

		Extents Minima;
		Extents Maxima;

		DEFINE_STATIC_HEAP(Heap_Allocate, Heap_Free)
	};

	BSTHashMap<BSFixedStringCS, SliderExtents*>	BoneExtentMap;	// 08
	BSFixedString								unk40;			// 40
	BSFixedStringCS								unk48;			// 48
	u32											ID;				// 50
	s32											unk54;			// 54
	s64											unk58;			// 58
};
static_assert(sizeof(FacialBoneSlider::SliderExtents) == 0x48);
static_assert(sizeof(FacialBoneSlider) == 0x60);

class FacialBoneSculptSlider : public FacialBoneSlider
{
public:
	FacialBoneSculptSlider() : unk60(""), unk68(""), zeroToOne(false) { }
	virtual ~FacialBoneSculptSlider() { };

	virtual const BSFixedString& GetName() override { return unk60; };
	virtual void Unk_02() override  { };
	virtual bool IsZeroToOne() override { return zeroToOne; };
	virtual void Unk_04(bool a_arg1) override  { zeroToOne = a_arg1; };
	virtual const char* Unk_05() override  { return unk68.c_str(); }; // ret 0x68 cstring
	virtual void Unk_06(const char* a_arg1) override { unk68 = a_arg1; }; // set 0x68 cstring

	BSFixedString	unk60;		// 60
	BSFixedStringCS	unk68;		// 68
	bool			zeroToOne;	// 70
};
static_assert(sizeof(FacialBoneSculptSlider) == 0x78);

}