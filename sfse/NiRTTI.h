#pragma once

class NiObject;

class NiRTTI
{
public:
	const char* name;
	NiRTTI* parent;
};

NiObject* DoNiRTTICast(NiObject* src, const NiRTTI* typeInfo);
