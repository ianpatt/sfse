#include "sfse/GameSettings.h"

RelocPtr <INISettingCollection *> SettingT<INISettingCollection>::pCollection(0x06A4FEE0);
RelocPtr <INIPrefSettingCollection *> SettingT<INIPrefSettingCollection>::pCollection(0x06A4FF00);
RelocPtr <RegSettingCollection *> SettingT<RegSettingCollection>::pCollection(0x06A4EAF8);
RelocPtr <GameSettingCollection *> SettingT<GameSettingCollection>::pCollection(0x06A31890);

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

Setting* INISettingCollection::GetSetting(const char* name)
{
	auto node = &SettingsA.node;
	do
	{
		auto item = node->m_item;
		if (item)
		{
			if (_stricmp(name, item->name) == 0)
			{
				return item;
			}
		}
		node = node->m_pkNext;
	} while (node);
	return nullptr;
}