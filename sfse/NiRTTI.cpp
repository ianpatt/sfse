#include "sfse/NiRTTI.h"
#include "sfse/NiObject.h"

NiObject* DoNiRTTICast(NiObject* src, const NiRTTI* typeInfo)
{
	if (src)
		for (NiRTTI* iter = src->GetRTTI(); iter; iter = iter->parent)
			if (iter == typeInfo)
				return src;

	return nullptr;
}
