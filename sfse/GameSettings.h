#pragma once

#include "sfse_common/Types.h"
#include "sfse_common/Relocation.h"
#include "sfse/GameTypes.h"

class Setting
{
public:
	virtual ~Setting();

	enum
	{
		kType_Unknown = 0,
		kType_Integer,
		kType_Float,
		kType_String,
		kType_Bool,
		kType_ID6,	// need to find an example of this
		kType_ID,
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
	BSSimpleList<T>		SettingsA;			// 118
	u64					unk128;				// 128
	u64					unk130;				// 130
};

template<typename T>
class SettingCollectionList : public SettingCollection<T>
{
public:
	virtual ~SettingCollectionList();
};

class INISettingCollection : public SettingCollectionList<Setting>
{
public:
	virtual ~INISettingCollection();
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

template<typename T>
class SettingT
{
public:
	static RelocPtr<T*> pCollection;
};
