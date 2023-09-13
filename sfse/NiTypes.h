#pragma once

class NiPoint3
{
public:
	float x;
	float y;
	float z;
};
static_assert(sizeof(NiPoint3) == 0xC);

class alignas(0x10) NiPoint3A :
	public NiPoint3
{
public:
};
static_assert(sizeof(NiPoint3A) == 0x10);
