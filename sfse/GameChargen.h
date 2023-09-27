#pragma once

#include "sfse/GameUI.h"
#include "sfse/GameSingleton.h"
#include "sfse_common/Relocation.h"
#include "sfse_common/Utilities.h"

namespace TESNPCData
{
class ChargenDataModel : public IDataModel, public BSTSingletonSDM<ChargenDataModel>
{
public:
    virtual ~ChargenDataModel();

	static ChargenDataModel* GetSingleton()
	{
		RelocPtr<ChargenDataModel*> singleton(0x058FB0B8);
		return *singleton;
	}

	// Contains main UI data model wrappers, decode these later
	// This function will pull data from the TESNPC into this wrapper
	DEFINE_MEMBER_FN_2(Update, void, 0x01890848, TESNPC*, void* unk2); // Unk2 looks like somekind of restore point, is usually CharGenMenu+0x2D0
};
}
