#include "sfse/GameExtraData.h"

BSExtraData * BaseExtraList::GetByType(BSExtraData::Type type) const
{
	BSExtraData * result = nullptr;

	if(HasType(type))
	{
		for(BSExtraData * iter = _head; iter; iter = iter->next)
		{
			if(iter->type == type)
			{
				return iter;
			}
		}
	}
}

bool BaseExtraList::HasType(BSExtraData::Type type) const
{
	u32 flagIdx = type >> 3;
	u8 flagBit = 1 << (type & 7);

	return _flags && (_flags[flagIdx] & flagBit);
}
