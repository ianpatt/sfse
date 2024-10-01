#include "Hooks_Data.h"
#include "sfse/GameData.h"
#include "sfse/PluginManager.h"
#include "sfse_common/BranchTrampoline.h"
#include "sfse_common/Relocation.h"
#include "xbyak/xbyak.h"

#if _DEBUG
#include "sfse/GameSettings.h"
#endif

RelocAddr <uintptr_t> GameDataLoad_Target(0x025D30E0 + 0x1521); // last call
typedef void (*_Hooks_GameData_Original)(u32 lock);
RelocAddr <_Hooks_GameData_Original> Hooks_GameData_Original(0x0129D600);

void Hook_GameData_Loaded(u32 lock)
{
	Hooks_GameData_Original(lock);

	auto dataHandler = TESDataHandler::GetSingleton();

#if 0
	auto settings = &(*SettingT<INISettingCollection>::pCollection)->SettingsA.node;
	do
	{
		if (settings->m_item)
		{
			if (stricmp(settings->m_item->name, "sTestFile1:General") == 0)
			{
				break;
			}
		}
		settings = settings->m_pkNext;
	} while (settings != nullptr);
	for (auto item : dataHandler->pFormArray[static_cast<u32>(FormType::kRACE)].pFormsA)
	{
		auto race = static_cast<TESRace*>(item);
		if (race->editorID == "HumanRace")
		{
			auto& chargenData = race->chargenData[0];
			for (u32 i = 0; i < 30; ++i)
			{
				auto slider = new BGSCharacterMorph::FacialBoneSculptSlider();
				slider->BoneExtentMap.insert_or_assign({
					"faceBone_C_MouthPivot", new BGSCharacterMorph::FacialBoneSlider::SliderExtents(
						{ { 0,0,0 }, { 0,0,0 }, { -0.1, -0.1, -0.1 } },
						{ { 0,0,0 }, { 0,0,0 }, { 1.0, 1.0, 1.0 } }
					)
				});
				slider->BoneExtentMap.insert_or_assign({
					"faceBone_C_TopTeeth", new BGSCharacterMorph::FacialBoneSlider::SliderExtents(
						{ { 0,0,0 }, { 0,0,0 }, { -0.1, -0.1, -0.1 } },
						{ { 0,0,0 }, { 0,0,0 }, { 1.0, 1.0, 1.0 } }
					)
				});
				slider->BoneExtentMap.insert_or_assign({
					"faceBone_C_BottomTeeth", new BGSCharacterMorph::FacialBoneSlider::SliderExtents(
						{ { 0,0,0 }, { 0,0,0 }, { -0.1, -0.1, -0.1 } },
						{ { 0,0,0 }, { 0,0,0 }, { 1.0, 1.0, 1.0 } }
					)
				});
				slider->ID = i + 666;
				char buff[256];
				sprintf_s(buff, "mouth - scale - %d", i);
				slider->unk40 = buff;
				slider->unk48 = buff;
				slider->zeroToOne = false;

				auto mouthKey = chargenData->faceMorphMap.find(22);
				if (mouthKey != chargenData->faceMorphMap.end())
				{
					mouthKey->Value->PostBlendSliderA.push_back(i + 666);
				}

				chargenData->facialSliderMap.insert_or_assign({ (i + 666), slider });
				chargenData->sliderCount++;
			}
			break;
		}
	}
#endif

	PluginManager::dispatchMessage(0, SFSEMessagingInterface::kMessage_PostDataLoad, dataHandler, sizeof(u64), nullptr);
	PluginManager::dispatchMessage(0, SFSEMessagingInterface::kMessage_PostPostDataLoad, dataHandler, sizeof(u64), nullptr);
}

void Hooks_Data_Apply()
{
	g_branchTrampoline.write5Call(GameDataLoad_Target.getUIntPtr(), uintptr_t(Hook_GameData_Loaded));
}
