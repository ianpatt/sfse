#pragma once

#include "sfse/NiObject.h"
#include "sfse/GameTypes.h"

class NiExtraData : public NiObject
{
public:
	BSFixedString	m_kName;	// 10
};

class BSTransformExtra : public NiExtraData
{
public:
	u64			unk18;			// 18 - Probably just padding, doesnt get initialized
	NiTransform m_transform;	// 20
};
static_assert(offsetof(BSTransformExtra, m_transform) == 0x20);
static_assert(sizeof(BSTransformExtra) == 0x60);
