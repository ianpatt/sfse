#include "sfse/GameSettings.h"

decltype(SettingT<INISettingCollection>::pCollection) SettingT<INISettingCollection>::pCollection(0x05913B98);
decltype(SettingT<INIPrefSettingCollection>::pCollection) SettingT<INIPrefSettingCollection>::pCollection(0x05913BB8);
decltype(SettingT<RegSettingCollection>::pCollection) SettingT<RegSettingCollection>::pCollection(0x059127A8);

u32 Setting::GetType(void) const
{
	if (!name || !name[0]) return kType_Unknown;

	switch (name[0])
	{
	case 'b':	return kType_Bool;
	case 'c':	return kType_Unknown;
	case 'h':	return kType_Unknown;
	case 'i':	return kType_Integer;
	case 'u':	return kType_Unknown;
	case 'f':	return kType_Float;
	case 'S':	return kType_String;	// dynamically allocated string
	case 's':	return kType_String;	// statically allocated string
	case 'r':	return kType_ID6;
	case 'a':	return kType_ID;
	}

	return kType_Unknown;
}

bool Setting::GetDouble(double* out) const
{
	switch (GetType())
	{
	case kType_Integer:	*out = data.s32; break;
	case kType_Float:	*out = data.f32; break;
	case kType_String:	return false;
	case kType_Bool:	*out = data.u8 ? 1 : 0; break;
	case kType_ID6:		*out = data.u32 >> 8; break;
	case kType_ID:		*out = data.u32; break;
	default:			return false;
	case kType_Unknown:	return false;
	}

	return true;
}

bool Setting::SetDouble(double value)
{
	switch (GetType())
	{
	case kType_Integer:	data.s32 = static_cast<s32>(value); break;
	case kType_Float:	data.f32 = static_cast<float>(value); break;
	case kType_String:	return false;
	case kType_Bool:	data.u8 = value ? 1 : 0; break;
	case kType_ID6:		data.u32 = ((u32)value) << 8; break;
	case kType_ID:		data.u32 = static_cast<u32>(value); break;
	default:			return false;
	case kType_Unknown:	return false;
	}

	return true;
}
