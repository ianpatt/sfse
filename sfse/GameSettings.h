#pragma once

#include "sfse_common/Types.h"
#include "sfse_common/Relocation.h"
#include "sfse_common/Utilities.h"
#include "sfse/GameTypes.h"

class Setting
{
public:
	virtual ~Setting();

	enum
	{
		kType_Binary,        // b
		kType_Char,        // c
		kType_UChar,        // h
		kType_Int,        // i
		kType_UInt,        // u
		kType_Float,        // f
		kType_String,        // s/S
		kType_RGB,        // r
		kType_RGBA,        // a
		kType_None
	};

	union Data
	{
		u32	u32;
		s32	s32;
		float	f32;
		u8	u8;		// used for bool
		char* s;
	};

	Data	data;			// 08
	Data	defaultData;	// 10
	char*	name;			// 18

	u32	GetType(void) const;
	bool GetDouble(double* out) const;
	bool SetDouble(double value);
	bool SetString(const char* value);
};

template<typename T>
class SettingCollection
{
public:
	virtual ~SettingCollection();

	virtual void Add(T* apSetting) = 0;			// 01
	virtual void Remove(T* apSetting) = 0;		// 02
	virtual void Unk_03() = 0;					// 03
	virtual void WriteSetting(T& arSetting) = 0; // 04
	virtual void ReadSetting(T& arSetting) = 0;	// 05
	virtual bool Open();						// 06
	virtual bool Close();						// 07
	virtual bool ReadSettingsFromProfile();		// 08
	virtual void Unk_09();						// 09
	virtual bool WriteSettings();				// 0A
	virtual bool ReadSettings();				// 0B

	char				pSettingFile[260];	// 008
	u32					pad10C;				// 10C
	void*				pHandle;			// 110
};

template<typename T>
class SettingCollectionList : public SettingCollection<T>
{
public:
	virtual ~SettingCollectionList();

	BSSimpleList<T*>	SettingsA;			// 118
	u64					unk128;				// 128
	u64					unk130;				// 130
};

template<typename T>
class SettingCollectionMap : public SettingCollection<T>
{
public:
	virtual ~SettingCollectionMap();

	u64	unk118; // BSTBTree ? Doesnt match F4 exactly
	u64	unk120;
	u64	unk128;
	u64	unk130;
	u64	unk138;
	u64	unk140;
	u64	unk148;
	u64	unk150;
};

class INISettingCollection : public SettingCollectionList<Setting>
{
public:
	virtual ~INISettingCollection();

	Setting* GetSetting(const char* name);
};

class INIPrefSettingCollection : public INISettingCollection
{
public:
	virtual ~INIPrefSettingCollection();
};

class RegSettingCollection : public SettingCollectionList<Setting>
{
public:
	virtual ~RegSettingCollection();
};

class GameSettingCollection : public SettingCollectionMap<Setting>
{
public:
	virtual ~GameSettingCollection();

	DEFINE_MEMBER_FN_1(GetSetting, Setting*, 0x015E6544, const char*);
};
static_assert(sizeof(GameSettingCollection) == 0x158);

template<typename T>
class SettingT
{
public:
	static RelocPtr<T*> pCollection;
};
