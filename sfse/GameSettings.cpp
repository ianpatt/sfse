#include "sfse/GameSettings.h"

decltype(SettingT<INISettingCollection>::pCollection) SettingT<INISettingCollection>::pCollection(0x05916E48);
decltype(SettingT<INIPrefSettingCollection>::pCollection) SettingT<INIPrefSettingCollection>::pCollection(0x05916E68);
decltype(SettingT<RegSettingCollection>::pCollection) SettingT<RegSettingCollection>::pCollection(0x05915A68);
decltype(SettingT<GameSettingCollection>::pCollection) SettingT<GameSettingCollection>::pCollection(0x058F8278);

u32 Setting::GetType(void) const
{
	if (!name || !name[0]) return kType_None;

	switch (name[0])
	{
	case 'b':	return kType_Binary;
	case 'c':	return kType_Char;
	case 'h':	return kType_UChar;
	case 'i':	return kType_Int;
	case 'u':	return kType_UInt;
	case 'f':	return kType_Float;
	case 'S':	return kType_String;	// dynamically allocated string
	case 's':	return kType_String;	// statically allocated string
	case 'r':	return kType_RGB;
	case 'a':	return kType_RGBA;
	}

	return kType_None;
}

bool Setting::GetDouble(double* out) const
{
	switch (GetType())
	{
	case kType_Int:	*out = data.s32; break;
	case kType_Float:	*out = data.f32; break;
	case kType_String:	return false;
	case kType_Binary:	*out = data.u8 ? 1 : 0; break;
	default:			return false;
	case kType_None:	return false;
	}

	return true;
}

bool Setting::SetDouble(double value)
{
	switch (GetType())
	{
	case kType_Int:	data.s32 = static_cast<s32>(value); break;
	case kType_Float:	data.f32 = static_cast<float>(value); break;
	case kType_String:	return false;
	case kType_Binary:	data.u8 = value ? 1 : 0; break;
	default:			return false;
	case kType_None:	return false;
	}

	return true;
}
