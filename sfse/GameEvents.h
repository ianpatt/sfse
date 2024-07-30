#pragma once

#include "sfse/GameTypes.h"
#include "sfse_common/Utilities.h"

class Actor;
struct BGSHotloadCompletedEvent {};

// BSTGlobalEvent

struct SnapTemplateUtils
{
    struct SnapReplaceEvent {};
};
struct ImageFixtureEvent_RequestImage {};
struct ImageFixtureEvent_UnregisterImage {};
struct Spaceship
{
    struct TakeOffEvent {};
    struct PlayerMovementOutputEvent {};
    struct GravJumpEvent {};
    struct LandedSetEvent {};
    struct BoughtEvent {};
    struct ContrabandScanWarningEvent {};
    struct DockEvent {};
    struct DynamicNavmeshCompleted {};
    struct FarTravelEvent {};
    struct LandingEvent {};
    struct PlanetScanEvent {};
    struct RampDownEvent {};
    struct RefueledEvent {};
    struct RegisteredEvent {};
    struct ShieldEvent {};
    struct ShipAddedEvent {};
    struct ShipCollisionEvent {};
    struct ShipCustomizedEvent {};
    struct SoldEvent {};
    struct SystemDamagedEvent {};
    struct SystemPowerAllocationEvent {};
    struct SystemPowerChangeEvent {};
    struct SystemRepairedBIEvent {};
    struct SystemRepairedEvent {};
    struct TakeDamagEvent {};
};
struct HUDActivityIncreaseEvent {};
struct AnimationDataCleanupEvent {};
struct AnimationDataSetupEvent {};
struct EndLoadGameEvent {};
struct StartLoadGameEvent {};
struct ShipEditor_SystemSelected {};
struct ShipEditor_PreviewUpgrade {};
struct ShipEditor_SelectedUpgrade {};
struct RuntimeComponentDBFactory
{
    struct ReferenceAttach {};
    struct ReferenceDetach {};
    struct ReferenceCleared3d {};
    struct ReferenceDestroy {};
    struct ReferenceInit {};
    struct ReferenceRecycle {};
    struct ReferenceSet3d {};
    struct Release3DRelatedData {};
};
struct WeaponGroupAssignmentMenu_ChangeWeaponAssignment {};
struct WeaponGroupAssignmentMenu_OnHintButtonActivated {};
struct ShipEditor_OnExitConfirmCancel {};
struct ShipEditor_OnExitConfirmExit {};
struct ShipEditor_OnExitConfirmSaveAndExit {};
struct ShipEditor_OnFlightCheckTabChanged {};
struct ShipEditor_OnWeaponGroupChanged {};
struct ShipEditor_OnRenameEndEditText {};
struct ShipEditor_OnRenameInputCancelled {};
struct ShipEditor_ChangeModuleCategory {};
struct ShipEditor_PreviewShipPart {};
struct ShipEditor_SelectedShipPart {};
struct ShipEditor_OnColorPickerControlChanged {};
struct ShipEditor_OnColorPickerTabChanged {};
struct ShipEditor_OnColorSliderMouseInput {};
struct ShipEditor_OnRecentColorSwatchClicked {};
struct ShipBuilder_CloseAllMenus {};
struct ShipEditor_OnHintButtonActivated {};
struct ShipEditor_RemoveAll3D {};
struct ReferenceQueuedEvent {};
struct LoadScreenEndEvent {};
struct LoadScreenStartEvent {};
struct CellAttachDetachEvent {};
struct PickRefStateChangedEvent {};
struct ActivityTrackerActivityStartedEvent {};
struct BSWorldOriginShiftEvent {};
struct BGSPlanet
{
    struct PlayerKnowledgeFlagSetEvent {};
};
struct StarMap
{
    struct PlanetTraitKnownEvent {};
};
struct ResetHistoryDataEvent {};
struct TESQuestRewardEvent {};
struct HUDWeaponWorldFOVMultChangedEvent {};
struct BGSSceneActionPlayerDialogue
{
    struct ActionEndEvent {};
    struct ActionStartEvent {};
};

struct AutoLoadDoorRolloverEvent {};
struct ClearQuickContainerEvent {};
struct ReferenceCellLoadedTemps {};
struct Workshop
{
    struct CargoLinkAddedEvent {};
    struct CargoLinkTargetChangedEvent {};
    struct EnterOutpostBeaconModeEvent {};
    struct ItemGrabbedEvent {};
    struct ItemMovedEvent {};
    struct ItemPlacedEvent {};
    struct ItemProducedEvent {};
    struct ItemRemovedEvent {};
    struct ItemRepairedEvent {};
    struct ItemScrappedEvent {};
    struct OutpostNameChangedEvent {};
    struct OutpostPlacedEvent {};
    struct PlacementStatusEvent {};
    struct PowerOffEvent {};
    struct PowerOnEvent {};
    struct SnapBehaviorCycledEvent {};
    struct WorkshopFlyCameraEvent {};
    struct WorkshopItemPlacedEvent {};
    struct WorkshopModeEvent {};
    struct WorkshopOutputLinkEvent {};
    struct WorkshopStatsChangedEvent {};
    struct WorkshopUpdateStatsEvent {};
};

struct PickRefUpdateEvent {};

struct ShipCameraStateToggled {};
struct PlayerControls
{
    struct PlayerJumpPressEvent {};
    struct PlayerJumpReleaseEvent {};
    struct PlayerZeroGSprintJustPressedEvent {};
    struct PlayerZeroGSprintReleasedEvent {};
    struct PlayerIronSightsEndEvent {};
    struct PlayerIronSightsStartEvent {};
};
struct PlayerSneakingChangeEvent {};
struct SaveLoadEvent {};
struct SpaceshipWeaponBinding
{
    struct SpaceshipWeaponBindingChangedEvent {};
};
struct BoundaryMenu_FastTravel {};
struct BoundaryMenu_ShowMap {};
struct PhotoGallery_DeletePhoto {};
struct PowersMenu_ActivateEssence {};
struct PowersMenu_EquipPower {};
struct PowersMenu_FavoritePower {};
struct ContainerMenuClosed
{
    struct Event {};
};
struct HangarShipSelection_ChangeSystemDisplay {};
struct HangarShipSelection_RepairShip {};
struct HangarShipSelection_UpgradeSystem {};
struct ShipCrewMenu_Close {};
struct BinkMovieStoppedPlayingEvent {};
struct WorkshopColorMode_ApplyColors {};
struct WorkshopColorMode_SelectedTab {};
struct WorkshopColorMode_SliderChanged {};
struct WorkshopColorMode_SwatchChanged {};
struct HUDCrewBuffMessageEvent {};
struct CraftingMenu_SessionSummaryEvent {};
struct CraftingMenu_CraftItem {};
struct CraftingMenu_ExitBench {};
struct CraftingMenu_InstallMod {};
struct CraftingMenu_RenameItem {};
struct CraftingMenu_RevertedModdedItem {};
struct CraftingMenu_SelectedMod {};
struct CraftingMenu_SelectedModSlot {};
struct CraftingMenu_SelectedModdableItem {};
struct CraftingMenu_SelectedRecipe {};
struct CraftingMenu_SetInspectControls {};
struct CraftingMenu_ToggleTracking {};
struct CraftingMenu_ViewingModdableItem {};
struct ContainerMenu_CloseMenu {};
struct InventoryMenu_Change3DView {};
struct InventoryMenu_PaperDollTryOn {};
struct InventoryMenu_ResetPaperDollInv {};
struct UpdateActivateListenerEvent {};
struct StartOutpostFromListenerEvent {};
struct HUDModeEvent {};
struct OpenContainerMenuEventData {};
struct OpenContainerMenuFromListenerEvent {};
struct HUDRolloverActivationButtonEvent {};
struct HUDRolloverActivationQCItemPressEvent {};
struct Inventory_SetSort {};
struct ShowingQuestMarketTextEvent {};
struct TargetHitEvent {};
struct PlayerCrosshairModeEvent {};
struct ClearHUDMessagesEvent {};
struct ShowHUDMessageEvent {};
struct PlayerDetectionLevelChangeEvent {};
struct ShowCustomWatchAlert {};
struct PlayerUpdateEvent {};
struct InventoryMenu_ToggleHelmet {};
struct InventoryMenu_ToggleSuit {};
struct ControlsRemappedEvent {};
struct SettingsPanel_CheckBoxChanged {};
struct SettingsPanel_ClearBinding {};
struct SettingsPanel_OpenCategory {};
struct SettingsPanel_OpenSettings {};
struct SettingsPanel_RemapConfirmed {};
struct SettingsPanel_RemapMode {};
struct SettingsPanel_ResetToDefaults {};
struct SettingsPanel_SaveControls {};
struct SettingsPanel_SaveSettings {};
struct SettingsPanel_SliderChanged {};
struct SettingsPanel_StepperChanged {};
struct SettingsPanel_ValidateControls {};
struct ShipCrewMenu_OpenAssignMenu {};
struct ShipCrewMenu_SetSort {};
struct ShowLongShipBootup {};
struct ShipHudQuickContainer_TransferMenu {};
struct ShipHud_Activate {};
struct ShipHud_BodyViewMarkerDimensions {};
struct ShipHud_ChangeComponentSelection {};
struct ShipHud_CloseMenu {};
struct ShipHud_Deselect {};
struct ShipHud_FarTravel {};
struct ShipHud_HailAccepted {};
struct ShipHud_HailCancelled {};
struct ShipHud_JumpToQuestMarker {};
struct ShipHud_Land {};
struct ShipHud_LandingMarkerMap {};
struct ShipHud_Map {};
struct ShipHud_OnMonocleToggle {};
struct ShipHud_OpenPhotoMode {};
struct ShipHud_Repair {};
struct ShipHud_SetTargetMode {};
struct ShipHud_Target {};
struct ShipHud_TargetShipSystem {};
struct ShipHud_UntargetShipSystem {};
struct ShipHud_UpdateComponentPower {};
struct DialogueMenu_CompleteExit {};
struct BGSScannerGuideEffectStatusUpdateEvent {};
struct GlobalFunc_CloseAllMenus {};
struct GlobalFunc_CloseMenu {};
struct GlobalFunc_PlayMenuSound {};
struct GlobalFunc_StartGameRender {};
struct GlobalFunc_UserEvent {};
struct ExperienceMeterDisplayData {};
struct LevelUp_AnimFinished {};
struct LevelUp_OnWidgetShown {};
struct LevelUp_OpenDataMenu {};
struct LevelUp_ShowSkills {};
struct LocationTextWidget_FinishedQueue {};
struct DisplayFatigueWarningEvent {};
struct SaveLoadMessageStringEvent {};
struct HUDNotificationEvent {};
struct HUDNotification_MissionActiveWidgetUpdate {};
struct HUDNotification_OpenDataMenu {};
struct HUDNotification_OpenMissionMenu {};
struct HUDNotification_SetMissionActive {};
struct PlayerSetWeaponStateEvent {};
struct BarterMenu_BuyItem {};
struct BarterMenu_CloseMenu {};
struct BarterMenu_HideModel {};
struct BarterMenu_LoadModel {};
struct BarterMenu_SellItem {};
struct BarterMenu_SetMouseOverModel {};
struct BarterMenu_ShowFailureMessage {};
struct BarterMenu_ViewedItem {};
struct MissionMenu_ClearState {};
struct MissionMenu_PlotToLocation {};
struct MissionMenu_RejectQuest {};
struct MissionMenu_SaveCategoryIndex {};
struct MissionMenu_SaveOpenedId {};
struct MissionMenu_ShowItemLocation {};
struct MissionMenu_ToggleTrackingQuest {};
struct DataSlateButtons_acceptClicked {};
struct DataSlateButtons_cancelClicked {};
struct DataSlateMenu_playSFX {};
struct DataSlateMenu_toggleAudio {};
struct InventoryMenu_DropItem {};
struct InventoryMenu_HideModel {};
struct InventoryMenu_LoadModel {};
struct InventoryMenu_OnEnterCategory {};
struct InventoryMenu_OpenCargoHold {};
struct InventoryMenu_SelectItem {};
struct InventoryMenu_SetMouseOverModel {};
struct InventoryMenu_ToggleFavorite {};
struct MissionBoard_MissionEntryChanged {};
struct MissionBoard_MissionEntryPressed {};
struct MonocleMenu_Bioscan {};
struct MonocleMenu_FastTravel {};
struct MonocleMenu_Harvest {};
struct MonocleMenu_Initialize {};
struct MonocleMenu_Outpost {};
struct MonocleMenu_PhotoMode {};
struct MonocleMenu_Shutdown {};
struct MonocleMenu_SocialSpell {};
struct MonocleMenu_StartContainerView {};
struct MonocleMenu_StopContainerView {};
struct MonocleMenu_SurfaceMap {};
struct MonocleMenu_UseListScrollControls {};
struct MonocleMenu_ZoomIn {};
struct MonocleMenu_ZoomOut {};
struct PhotoMode_InitializeCategory {};
struct PhotoMode_ResetToDefaults {};
struct PhotoMode_SliderChanged {};
struct PhotoMode_StepperChanged {};
struct PhotoMode_TakeSnapshot {};
struct PhotoMode_ToggleHelmet {};
struct PhotoMode_ToggleUI {};
struct PickpocketMenu_OnItemSelect {};
struct ResearchMenu_AddMaterial {};
struct ResearchMenu_CategorySelected {};
struct ResearchMenu_ExitMenu {};
struct ResearchMenu_HideModel {};
struct ResearchMenu_PreviewProject {};
struct ResearchMenu_ProjectViewed {};
struct ResearchMenu_SetInspectControls {};
struct ResearchMenu_ToggleTrackingProject {};
struct UnlockedTerminalElementEvent {};
struct SecurityMenu_BackOutKey {};
struct SecurityMenu_CloseMenu {};
struct SecurityMenu_ConfirmExit {};
struct SecurityMenu_EliminateUnusedKeys {};
struct SecurityMenu_GetRingHint {};
struct SecurityMenu_SelectNewKey {};
struct SecurityMenu_TryUseKey {};
struct ShipCrewAssignMenu_Assign {};
struct ShipCrewAssignMenu_Unassign {};
struct ShipCrewMenu_ViewedItem {};
struct Refuel_Accept {};
struct Refuel_Cancel {};
struct SkillsMenu_Accept {};
struct SkillsMenu_AddPatch {};
struct SkillsMenu_Cancel {};
struct SkillsMenu_ChangeCursorVisibility {};
struct SkillsMenu_SaveLastCategory {};
struct BSChargenAPI
{
    struct BIDataUtils
    {
        struct MenuClosedEvent {};
        struct PresetNPCChangedEvent {};
    };
};
struct CharGen_BrowChange {};
struct CharGen_BrowColorChange {};
struct CharGen_CancelTextEntry {};
struct CharGen_CloseMenu {};
struct CharGen_CyclePronoun {};
struct CharGen_DirtScarsEtcChange {};
struct CharGen_EndBodyChange {};
struct CharGen_EndTextEntry {};
struct CharGen_EyeColorChange {};
struct CharGen_FacialHairChange {};
struct CharGen_FacialHairColorChange {};
struct CharGen_HairChange {};
struct CharGen_HairColorChange {};
struct CharGen_HeadpartPlusSelectorChange {};
struct CharGen_HeadpartPresetChange {};
struct CharGen_JewelryChange {};
struct CharGen_JewelryColorChange {};
struct CharGen_MakeupChange {};
struct CharGen_MarkingsChange {};
struct CharGen_PostBlendColorOptionChange {};
struct CharGen_PostBlendFaceChange {};
struct CharGen_PostBlendIntensityChange {};
struct CharGen_PresetChange {};
struct CharGen_RollOffLocomotion {};
struct CharGen_RollOnLocomotion {};
struct CharGen_RotatePaperdoll {};
struct CharGen_SetAdditionalSlider {};
struct CharGen_SetBackground {};
struct CharGen_SetBlockInputUnderPopup {};
struct CharGen_SetBodyValues {};
struct CharGen_SetCameraPosition {};
struct CharGen_SetPronoun {};
struct CharGen_SetSex {};
struct CharGen_SetSlider {};
struct CharGen_SetTrait {};
struct CharGen_ShowChooseBackgroundMessage {};
struct CharGen_ShowPlayerRenameMessage {};
struct CharGen_SkintoneChange {};
struct CharGen_StartBodyChange {};
struct CharGen_StartTextEntry {};
struct CharGen_SwitchBodyType {};
struct CharGen_SwitchLocomotion {};
struct CharGen_TeethChange {};
struct CharGen_TeethRollOff {};
struct CharGen_TeethRollOn {};
struct CharGen_ToggleMarking {};
struct CharGen_TogglePreviewHabSuit {};
struct UIMenuChargenMenuDisablePaperdoll {};
struct DataMenu_CloseMenu {};
struct DataMenu_ClosedForSubMenu {};
struct DataMenu_Missions {};
struct DataMenu_PlotToLocation {};
struct DataMenu_Reopened {};
struct DataMenu_SelectedAttributesMenu {};
struct DataMenu_SelectedInventoryMenu {};
struct DataMenu_SelectedMapMenu {};
struct DataMenu_SelectedPowersMenu {};
struct DataMenu_SelectedShipMenu {};
struct DataMenu_SelectedStatusMenu {};
struct DataMenu_SetMenuForQuickEntry {};
struct DataMenu_SetPaperDollActive {};
struct PauseMenu_ActionCanceled {};
struct PauseMenu_ConfirmAction {};
struct PauseMenu_ConfirmLoad {};
struct PauseMenu_ConfirmSave {};
struct PauseMenu_DeleteSave {};
struct PauseMenu_QuitToDesktop {};
struct PauseMenu_SetCharacter {};
struct PauseMenu_StartAction {};
struct PauseMenu_StartLoad {};
struct PauseMenu_UploadSave {};
struct PlayBink_CloseMenu {};
struct Reticle_OnLongAnimFinished {};
struct ShipHudQuickContainer_TransferItem {};
struct ShipHud_AbortJump {};
struct ShipHud_DockRequested {};
struct ShipHud_HailShip {};
struct ShipHud_UpdateTargetPanelRect {};
struct TakeoffMenu_CloseMenu {};
struct TakeoffMenu_ExitShip {};
struct TakeoffMenu_Launch {};
struct StarMapMenu_LandingInputInProgress {};
struct StarMapMenu_MarkerGroupContainerVisibilityChanged {};
struct StarMapMenu_MarkerGroupEntryClicked {};
struct StarMapMenu_MarkerGroupEntryHoverChanged {};
struct StarMapMenu_ScanPlanet {};
struct StarMapMenu_SelectedLandingSite {};
struct StarMapMenu_SelectedLandingSiteFailed {};
struct StarMapMenu_ShowRealCursor {};
struct StarMapMenu_QuickSelectChange {};
struct StarMapMenu_Galaxy_FocusSystem {};
struct StarMapMenu_OnGalaxyViewInitialized {};
struct StarMapMenu_ExecuteRoute {};
struct StarMapMenu_OnCancel {};
struct StarMapMenu_OnClearRoute {};
struct StarMapMenu_OnExitStarMap {};
struct StarMapMenu_OnHintButtonClicked {};
struct StarMapMenu_OnOutpostEntrySelected {};
struct StarMapMenu_ReadyToClose {};
struct SurfaceMapMenu_MarkerClicked {};
struct SurfaceMapMenu_TryPlaceCustomMarker {};
struct TerminalMenu_CancelEvent {};
struct Terminal_CloseAllViews {};
struct Terminal_CloseTopView {};
struct Terminal_CloseView {};
struct Terminal_MenuItemClick {};
struct TestMenu_DoAction {};
struct TestMenu_ExitMenu {};
struct TestMenu_ShowImages {};
struct TestMenu_ShowResources {};
struct TestMenu_TestAll {};
struct TextInputMenu_EndEditText {};
struct TextInputMenu_InputCanceled {};
struct TextInputMenu_StartEditText {};
struct CraftingMenu_Highlight3D {};
struct CraftingMenu_RevertHighlight {};
struct WorkshopBuilderMenu_ChangeBuildItem {};
struct WorkshopBuilderMenu_SelectedItem {};
struct WorkshopBuilderMenu_ToggleTracking {};
struct WorkshopMenu_AttemptBuild {};
struct WorkshopMenu_CancelAction {};
struct WorkshopMenu_ChangeVariant {};
struct WorkshopMenu_ConnectionEvent {};
struct WorkshopMenu_ExitMenu {};
struct WorkshopMenu_MessageCallback {};
struct WorkshopMenu_SelectedCategory {};
struct WorkshopMenu_SelectedGridObject {};
struct WorkshopMenu_ShowExtras {};
struct WorkshopMenu_SwitchMode {};
struct WorkshopMenu_ToggleDistance {};
struct WorkshopMenu_ToggleTracking {};
struct WorkshopMenu_ToggleView {};
struct WorkshopQuickMenu_ConfirmAction {};
struct WorkshopQuickMenu_ExitMenu {};
struct WorkshopTargetMenu_TargetHovered {};
struct WorkshopTargetMenu_TargetPicked {};
struct WorkshopActionButton_HoldFinished {};
struct WorkshopActionButton_HoldStopped {};
struct WorkshopShared_SetActionHandles {};
struct WorkshopShared_StartAction {};
struct ModelReferenceEffectEvents
{
    struct ReferenceEffectFinished {};
};
struct BGSAcousticSpaceListener
{
    struct StackChangedEvent {};
};
struct SpaceshipBIEvents
{
    struct ShipPowerAllocationBIEventSent {};
};
struct BGSActorDeathEvent {};
struct Research
{
    struct ResearchProgressEvent {};
};
struct PlayerAutoAimActorEvent {};
struct PlayerInCombatChangeEvent {};
struct BlurEvent {};
struct ContainerMenu_HideModel {};
struct ContainerMenu_Jettison {};
struct ContainerMenu_LoadModel {};
struct ContainerMenu_OpenRefuelMenu {};
struct ContainerMenu_SetMouseOverModel {};
struct ContainerMenu_TakeAll {};
struct ContainerMenu_ToggleEquip {};
struct ContainerMenu_TransferItem {};
struct DialogueMenu_OnDialogueSelect {};
struct DialogueMenu_OnListVisibilityChange {};
struct DialogueMenu_OnPersuasionAutoWin {};
struct DialogueMenu_OnScriptedDialogueSelect {};
struct DialogueMenu_RequestExit {};
struct DialogueMenu_RequestSkipDialogue {};
struct FaderMenuDisplayState {};
struct FavoritesMenu_AssignQuickkey {};
struct FavoritesMenu_UseQuickkey {};
struct LoadingMenu_RefreshText {};
struct MainMenu_ActionCanceled {};
struct MainMenu_ActionConfirmed {};
struct MainMenu_ConfirmLoad {};
struct MainMenu_DeleteSave {};
struct MainMenu_SetCharacter {};
struct MainMenu_StartAction {};
struct MainMenu_StartLoad {};
struct MainMenu_UploadSave {};
struct BGSAppPausedEvent {};
struct MessageBoxMenu_OnBackOut {};
struct MessageBoxMenu_OnButtonPress {};
struct MessageBoxMenu_OnScriptedButtonPress {};
struct SleepWaitMenu_InterruptRest {};
struct SleepWaitMenu_StartRest {};

struct ContextStackChangedEvent {};
struct UpdateSceneRectEvent {};
struct GameStalledEvent {};

// more

struct TESCellNavmeshGeneratedEvent {};
struct TESHitEvent {};
struct FirstThirdPersonSwitch
{
    struct Event {};
};
struct PerkChanged
{
    struct Event {};
};
struct TESHarvestEvent
{
    struct ItemHarvested {};
};
struct ActivityEvents
{
    struct ActivityCompletedEvent {};
};
struct ChallengeCompletedEvent
{
    struct Event {};
};
struct InventoryItemEvent
{
    struct Event {};
};
struct BooksRead
{
    struct Event {};
};
struct LocationExplored
{
    struct Event {};
};
struct LocationLinked
{
    struct Event {};
};
struct Activation
{
    struct Event {};
};
struct ActorCellChangeEvent {};
struct ActorHeadAttachedEvent {};
struct ActorValueEvents
{
    struct ActorValueChangedEvent {};
};
struct AliasChangeEvent {};
struct AnimationGraphDependentEvent {};
struct BGSAffinityEventEvent {};
struct BGSCellGridLoadEvent {};
struct BGSEventProcessedEvent {};
struct BGSHavokWorldCreatedEvent {};
struct BGSLocationLoadedEvent {};
struct BGSOnPlayerCompanionDismiss {};
struct BGSOnPlayerCompleteResearchEvent {};
struct BGSOnPlayerCraftItemEvent {};
struct BGSOnPlayerCreateRobotEvent {};
struct BGSOnPlayerEnterVertibirdEvent {};
struct BGSOnPlayerFallLongDistances {};
struct BGSOnPlayerFireWeaponEvent {};
struct BGSOnPlayerHealTeammateEvent {};
struct BGSOnPlayerLoiteringBeginEvent {};
struct BGSOnPlayerLoiteringEndEvent {};
struct BGSOnPlayerModArmorWeaponEvent {};
struct BGSOnPlayerModRobotEvent {};
struct BGSOnPlayerSwimmingEvent {};
struct BGSOnPlayerUseWorkBenchEvent {};
struct BGSOnSpeechChallengeAvailable {};
struct BGSRadiationDamageEvent {};
struct BuilderMenuSelectEvent {};
struct CrewAssignedEvent {};
struct CrewDismissedEvent {};
struct DestroyedEvent {};
struct HomeShipSetEvent {};
struct InstantReferenceInteractionEvent {};
struct ItemConsumedEvent {};
struct ItemSwappedEvent {};
struct LockPickedEvent {};
struct MapMarkerDiscoveredEvent {};
struct ObjectScannedEvent {};
struct PlayerAddItemEvent {};
struct PlayerArrestedEvent {};
struct PlayerAssaultActorEvent {};
struct PlayerBuyShipEvent {};
struct PlayerCrimeGoldEvent {};
struct PlayerFailedPlotRouteEvent {};
struct PlayerJailEvent {};
struct PlayerModifiedShipEvent {};
struct PlayerMurderActorEvent {};
struct PlayerPayFineEvent {};
struct PlayerPlanetSurveyCompleteEvent {};
struct PlayerPlanetSurveyProgressEvent {};
struct PlayerSellShipEvent {};
struct PlayerTrespassEvent {};
struct QuickContainerOpenedEvent {};
struct RefControlChangedEvent {};
struct ReferenceDestroyedEvent {};
struct SpeechChallengeCompletionEvent {};
struct TESActivateEvent {};
struct TESActiveEffectApplyFinishEvent {};
struct TESActiveEffectRemovedEvent {};
struct TESActorActivatedRefEvent {};
struct TESActorLocationChangeEvent {};
struct TESBookReadEvent {};
struct TESCellCriticalRefsAttachedEvent {};
struct TESCellFullyLoadedEvent {};
struct TESCellGravityChangeEvent {};
struct TESCellReadyToApplyDecalsEvent {};
struct TESCellReference3DAttachEvent {};
struct TESCellReferenceAttachDetachEvent {};
struct TESCombatEvent {};
struct TESCombatListEvent {};
struct TESCommandModeCompleteCommandEvent {};
struct TESCommandModeEnterEvent {};
struct TESCommandModeExitEvent {};
struct TESCommandModeGiveCommandEvent {};
struct TESConsciousnessEvent {};
struct TESContainerChangedEvent
{
    u32          sourceContainerFormID;              // 00
    u32          targetContainerFormID;                // 04
    u32          itemFormID;                            // 08
    u32          count;                                // 0C
    //...
};
struct TESDeathEvent {};
struct TESDeferredKillEvent {};
struct TESDestructionStageChangedEvent {};
struct TESEnterBleedoutEvent {};
struct TESEnterSneakingEvent {};
struct TESEquipEvent {};
struct TESEscortWaitStartEvent {};
struct TESEscortWaitStopEvent {};
struct TESExitBleedoutEvent {};
struct TESExitFurnitureEvent {};
struct TESFormDeleteEvent
{
    u32 formId; //00
};
struct TESFormIDRemapEvent
{
    u32 oldID;  //00
    u32 newID;  //04
};
struct TESFurnitureEvent {};
struct TESGrabReleaseEvent {};
struct TESInitScriptEvent {};
struct TESLimbCrippleEvent {};
struct TESLoadGameEvent {};
struct TESLocationExploredEvent {};
struct TESLockChangedEvent {};
struct TESMagicEffectApplyEvent {};
struct TESMissionAcceptedEvent {};
struct TESObjectLoadedEvent {};
struct TESObjectREFRTranslationEvent {};
struct TESOnPCDialogueTargetEvent {};
struct TESOpenCloseEvent {};
struct TESPackageEvent {};
struct TESPerkEntryRunEvent {};
struct TESPickNewIdleEvent {};
struct TESPickpocketFailedEvent {};
struct TESPlayerActiveEffectEvent {};
struct TESPlayerFollowerWarpEvent {};
struct TESQuestInitEvent {};
struct TESQuestRejectedEvent {};
struct TESQuestStageEvent {};
struct TESQuestStageItemDoneEvent {};
struct TESQuestStartStopEvent {};
struct TESQuestTimerEvent {};
struct TESResetEvent {};
struct TESResolveNPCTemplatesEvent {};
struct TESSceneActionEvent {};
struct TESSceneEvent {};
struct TESScenePhaseEvent {};
struct TESSellEvent {};
struct TESSleepStartEvent {};
struct TESSleepStopEvent {};
struct TESSpellCastEvent {};
struct TESSpellCastFailureEvent {};
struct TESSwitchRaceCompleteEvent {};
struct TESTopicInfoEvent {};
struct TESTrackedStatsEvent {};
struct TESTrapHitEvent {};
struct TESTriggerEnterEvent {};
struct TESTriggerEvent {};
struct TESTriggerLeaveEvent {};
struct TESUniqueIDChangeEvent {};
struct TESWaitStartEvent {};
struct TESWaitStopEvent {};
struct TerminalMenuMenuItemRunEvent {};
struct TerminalMenuOnEnterEvent {};
struct WorkshopNPCTransferEvent {};
struct TESObjectREFRIsReadyForAttachEvent {};
struct DefaultObjectsReadyEvent
{
    struct Event {};
};
struct ObjectiveState
{
    struct Event {};
};
struct QuestStatus
{
    struct Event {};
};
struct RefillAliasEvent
{
    struct Event {};
};
struct TESQuestEvent
{
    struct Event {};
};
struct RolloverIsCrimeEvent
{
    struct Event {};
};
struct HideSubtitleEvent
{
    struct Event {};
};
struct ShowSubtitleEvent
{
    struct Event {};
};
struct MissionMenuStateEvent
{
    struct Event {};
};
struct ClearShipHudTarget
{
    struct Event {};
};
struct TryUpdateShipHudTarget
{
    struct Event {};
};
struct LocationTextEvent
{
    struct Event {};
};
struct TraitDiscoveryTextEvent
{
    struct Event {};
};
struct DaysPassed
{
    struct Event {};
};
struct HourPassed
{
    struct Event {};
};
struct ActorDamage
{
    struct Event {};
};
struct ActorItemEquipped
{
    struct Event {};
};
struct ActorKill
{
    struct Event {};
};
struct AssaultCrime
{
    struct Event {};
};
struct DisarmedEvent
{
    struct Event {};
};
struct FactionRankChange
{
    struct Event {};
};
struct GrandTheftHorse
{
    struct Event {};
};
struct MurderCrime
{
    struct Event {};
};
struct PiracyCrime
{
    struct Event {};
};
struct Bleedout
{
    struct Event {};
};
struct ContractedDisease
{
    struct Event {};
};
struct ReloadWeaponEvent
{
    struct Event {};
};
struct SpellsLearned
{
    struct Event {};
};
struct Bounty
{
    struct Event {};
};
struct ChestLooted
{
    struct Event {};
};
struct CriticalHitEvent
{
    struct Event {};
};
struct CustomMarkerUpdate
{
    struct Event {};
};
struct DaysJailed
{
    struct Event {};
};
struct EnteredUnity
{
    struct Event {};
};
struct FinePaid
{
    struct Event {};
};
struct ItemCrafted
{
    struct Event {};
};
struct ItemSteal
{
    struct Event {};
};
struct JailEscape
{
    struct Event {};
};
struct Jailing
{
    struct Event {};
};
struct LevelIncrease
{
    struct Event {};
};
struct LocationMarkerArrayUpdate
{
    struct Event {};
};
struct PlayerActiveEffectChanged
{
    struct Event {};
};
struct PlayerAmmoChanged
{
    struct Event {};
};
struct PlayerCharacterQuestEvent
{
    struct Event {};
};
struct PlayerDifficultySettingChanged
{
    struct Event {};
};
struct PlayerFastTravel
{
    struct Event {};
};
struct PlayerInDialogueChanged
{
    struct Event {};
};
struct PlayerLifeStateChanged
{
    struct Event {};
};
struct PlayerPickpocketSuccess
{
    struct Event {};
};
struct PoisonedWeapon
{
    struct Event {};
};
struct TerminalHacked
{
    struct Event {};
};
struct TravelMarkerStateChange
{
    struct Event {};
};
struct WeaponAttack
{
    struct Event {};
};
struct Trespass
{
    struct Event {};
};
struct VATSEvents
{
    struct ModeChange {};
};
struct VATSCommand {};
struct HoursPassed
{
    struct Event {};
};

// UI events

struct MenuOpenCloseEvent
{
    BSFixedString	MenuName;
    bool			bOpening;
};
struct MenuModeChangeEvent {};
struct MenuPauseChangeEvent {};
struct MenuPauseCounterChangeEvent {};
struct TutorialEvent {};
struct BSCursorTypeChange {};
struct BSCursorRotationChange {};
struct BIUIMenuVisiblePausedBeginEvent {};
struct BIUIMenuVisiblePausedEndEvent {};

// other events

struct RadioManager
{
    struct PipboyTransmitterDetectionEvent {};
};
struct XPChange
{
    struct Event
    {
        Actor* actor;
        void* unk08;
        float totalXP;
        float recievedXP;
        //...
    };
};
struct WeaponFiredEvent
{
    void* unk00;
    void* unk08;
    Actor* actor;
    //...
};
struct ActorEquipManagerEvent
{
    struct Event {};
    struct SpellEvent {};
};
struct AttachReference
{
    struct Event {};
};
//

namespace BSTEventDetail
{
    class SinkBase
    {
    public:
        virtual ~SinkBase() {};
    };

    class SourceBase
    {
    public:
        virtual ~SourceBase() {};
        DEFINE_MEMBER_FN_1(RegisterSink, void, 0x005BB8EC, SinkBase* sink);
        DEFINE_MEMBER_FN_1(UnregisterSink, void, 0x005BB700, SinkBase* sink);
    };
}

enum class BSEventNotifyControl
{
    kContinue,
    kStop
};
using EventResult = BSEventNotifyControl;

template <typename T>
class BSTEventSource;

template <typename T>
class BSTEventSink : public BSTEventDetail::SinkBase
{
public:
    virtual ~BSTEventSink() { };
    virtual	EventResult	ProcessEvent(const T& arEvent, BSTEventSource<T>* eventSource) { return EventResult::kContinue; }; // pure
};

template<typename T>
class BSTEventSource : public BSTEventDetail::SourceBase
{
public:
    virtual ~BSTEventSource();

    BSTArray<BSTEventSink<T>> pSinksA;
    u32 unk18;
    u32 unk1C;
    u32 unk20;
    u32 unk24;
};

class BSTGlobalEvent
{
public:
    virtual ~BSTGlobalEvent();

    template <typename T>
    class EventSource : public BSTEventSource<T>
    {
    public:
        virtual ~EventSource();
        virtual EventResult ProcessEvent(const T& arEvent, BSTEventSource<T>* eventSource);
    };
};

template <class T>
class BSTValueEventSink :
    public BSTEventSink<T>  // 00
{
};

template <class T>
class BSTValueRequestEvent
{
};

template<typename EventT>
BSTEventSource<EventT>* GetEventSource() { };

#define DECLARE_EVENT_SOURCE(Event, address) \
template<> inline BSTEventSource<Event> * GetEventSource() \
{ \
    typedef BSTEventSource<Event> * (*_GetEventSource)(); \
    RelocAddr<_GetEventSource> GetEventSource(address); \
    return GetEventSource(); \
}

#define DECLARE_EVENT_SOURCE_EX(Event, address) \
template<> inline BSTEventSource<Event> * GetEventSource() \
{ \
RelocPtr<BSTEventSource<Event>> es(address); \
return es.getPtr(); \
}

// BSTGlobalEvent

DECLARE_EVENT_SOURCE(SnapTemplateUtils::SnapReplaceEvent, 0x00797234)
DECLARE_EVENT_SOURCE(ImageFixtureEvent_RequestImage, 0x007984EC)
DECLARE_EVENT_SOURCE(ImageFixtureEvent_UnregisterImage, 0x0079B3E8)
DECLARE_EVENT_SOURCE(Spaceship::TakeOffEvent, 0x0079E298)
DECLARE_EVENT_SOURCE(HUDActivityIncreaseEvent, 0x01206FA0)
DECLARE_EVENT_SOURCE(AnimationDataCleanupEvent, 0x012295FC)
DECLARE_EVENT_SOURCE(AnimationDataSetupEvent, 0x0122968C)
DECLARE_EVENT_SOURCE(EndLoadGameEvent, 0x0127FE24)
DECLARE_EVENT_SOURCE(StartLoadGameEvent, 0x0127FEB4)
DECLARE_EVENT_SOURCE(ShipEditor_SystemSelected, 0x012A696C)
DECLARE_EVENT_SOURCE(ShipEditor_PreviewUpgrade, 0x012AD040)
DECLARE_EVENT_SOURCE(ShipEditor_SelectedUpgrade, 0x012AD0D0)
DECLARE_EVENT_SOURCE(RuntimeComponentDBFactory::ReferenceAttach, 0x012FAD00)
DECLARE_EVENT_SOURCE(RuntimeComponentDBFactory::ReferenceDetach, 0x012FAD90)
DECLARE_EVENT_SOURCE(WeaponGroupAssignmentMenu_ChangeWeaponAssignment, 0x01385C44)
DECLARE_EVENT_SOURCE(WeaponGroupAssignmentMenu_OnHintButtonActivated, 0x01385CD4)
DECLARE_EVENT_SOURCE(ShipEditor_OnExitConfirmCancel, 0x013A87E4)
DECLARE_EVENT_SOURCE(ShipEditor_OnExitConfirmExit, 0x013A8874)
DECLARE_EVENT_SOURCE(ShipEditor_OnExitConfirmSaveAndExit, 0x013A8904)
DECLARE_EVENT_SOURCE(ShipEditor_OnFlightCheckTabChanged, 0x013AD454)
DECLARE_EVENT_SOURCE(ShipEditor_OnWeaponGroupChanged, 0x013AD4E4)
DECLARE_EVENT_SOURCE(ShipEditor_OnRenameEndEditText, 0x013B2E20)
DECLARE_EVENT_SOURCE(ShipEditor_OnRenameInputCancelled, 0x013B2EB0)
DECLARE_EVENT_SOURCE(ShipEditor_ChangeModuleCategory, 0x013B7694)
DECLARE_EVENT_SOURCE(ShipEditor_PreviewShipPart, 0x013B7724)
DECLARE_EVENT_SOURCE(ShipEditor_SelectedShipPart, 0x013B77B4)
DECLARE_EVENT_SOURCE(ShipEditor_OnColorPickerControlChanged, 0x013C0660)
DECLARE_EVENT_SOURCE(ShipEditor_OnColorPickerTabChanged, 0x013C06F0)
DECLARE_EVENT_SOURCE(ShipEditor_OnColorSliderMouseInput, 0x013C0780)
DECLARE_EVENT_SOURCE(ShipEditor_OnRecentColorSwatchClicked, 0x013C0810)
DECLARE_EVENT_SOURCE(ShipBuilder_CloseAllMenus, 0x013E7078)
DECLARE_EVENT_SOURCE(ShipEditor_OnHintButtonActivated, 0x013E7108)
DECLARE_EVENT_SOURCE(ShipEditor_RemoveAll3D, 0x013E7198)
DECLARE_EVENT_SOURCE(ReferenceQueuedEvent, 0x01452588)
DECLARE_EVENT_SOURCE(LoadScreenEndEvent, 0x0146C29C)
DECLARE_EVENT_SOURCE(LoadScreenStartEvent, 0x0146C32C)
DECLARE_EVENT_SOURCE(CellAttachDetachEvent, 0x0146C3BC)
DECLARE_EVENT_SOURCE(PickRefStateChangedEvent, 0x014E4048)
DECLARE_EVENT_SOURCE(ActivityTrackerActivityStartedEvent, 0x014EE608)
DECLARE_EVENT_SOURCE(RuntimeComponentDBFactory::ReferenceCleared3d, 0x0157B500)
DECLARE_EVENT_SOURCE(RuntimeComponentDBFactory::ReferenceDestroy, 0x0157B590)
DECLARE_EVENT_SOURCE(RuntimeComponentDBFactory::ReferenceInit, 0x0157B620)
DECLARE_EVENT_SOURCE(RuntimeComponentDBFactory::ReferenceRecycle, 0x0157B6B0)
DECLARE_EVENT_SOURCE(RuntimeComponentDBFactory::ReferenceSet3d, 0x0157B740)
DECLARE_EVENT_SOURCE(RuntimeComponentDBFactory::Release3DRelatedData, 0x0157B7D0)
DECLARE_EVENT_SOURCE(BSWorldOriginShiftEvent, 0x01587CAC)
DECLARE_EVENT_SOURCE(BGSPlanet::PlayerKnowledgeFlagSetEvent, 0x016B106C)
DECLARE_EVENT_SOURCE(StarMap::PlanetTraitKnownEvent, 0x016B10FC)
DECLARE_EVENT_SOURCE(ResetHistoryDataEvent, 0x01784DB8)
DECLARE_EVENT_SOURCE(TESQuestRewardEvent, 0x0179F058)
DECLARE_EVENT_SOURCE(HUDWeaponWorldFOVMultChangedEvent, 0x017A127C)
DECLARE_EVENT_SOURCE(BGSSceneActionPlayerDialogue::ActionEndEvent, 0x0189750C)
DECLARE_EVENT_SOURCE(BGSSceneActionPlayerDialogue::ActionStartEvent, 0x0189759C)
DECLARE_EVENT_SOURCE(AutoLoadDoorRolloverEvent, 0x01947EFC)
DECLARE_EVENT_SOURCE(ClearQuickContainerEvent, 0x01947F8C)
DECLARE_EVENT_SOURCE(ReferenceCellLoadedTemps, 0x019C104C)
DECLARE_EVENT_SOURCE(Workshop::CargoLinkAddedEvent, 0x01D76EBC)
DECLARE_EVENT_SOURCE(Workshop::CargoLinkTargetChangedEvent, 0x01D76F4C)
DECLARE_EVENT_SOURCE(Workshop::EnterOutpostBeaconModeEvent, 0x01D76FDC)
DECLARE_EVENT_SOURCE(Workshop::ItemGrabbedEvent, 0x01D7706C)
DECLARE_EVENT_SOURCE(Workshop::ItemMovedEvent, 0x01D770FC)
DECLARE_EVENT_SOURCE(Workshop::ItemPlacedEvent, 0x01D7718C)
DECLARE_EVENT_SOURCE(Workshop::ItemProducedEvent, 0x01D7721C)
DECLARE_EVENT_SOURCE(Workshop::ItemRemovedEvent, 0x01D772AC)
DECLARE_EVENT_SOURCE(Workshop::ItemRepairedEvent, 0x01D7733C)
DECLARE_EVENT_SOURCE(Workshop::ItemScrappedEvent, 0x01D773CC)
DECLARE_EVENT_SOURCE(Workshop::OutpostNameChangedEvent, 0x01D7745C)
DECLARE_EVENT_SOURCE(Workshop::OutpostPlacedEvent, 0x01D774EC)
DECLARE_EVENT_SOURCE(PickRefUpdateEvent, 0x01D7757C)
DECLARE_EVENT_SOURCE(Workshop::PlacementStatusEvent, 0x01D7760C)
DECLARE_EVENT_SOURCE(Workshop::PowerOffEvent, 0x01D7769C)
DECLARE_EVENT_SOURCE(Workshop::PowerOnEvent, 0x01D7772C)
DECLARE_EVENT_SOURCE(Workshop::SnapBehaviorCycledEvent, 0x01D777BC)
DECLARE_EVENT_SOURCE(Workshop::WorkshopFlyCameraEvent, 0x01D7784C)
DECLARE_EVENT_SOURCE(Workshop::WorkshopItemPlacedEvent, 0x01D778DC)
DECLARE_EVENT_SOURCE(Workshop::WorkshopModeEvent, 0x01D7796C)
DECLARE_EVENT_SOURCE(Workshop::WorkshopOutputLinkEvent, 0x01D779FC)
DECLARE_EVENT_SOURCE(Workshop::WorkshopStatsChangedEvent, 0x01D77A8C)
DECLARE_EVENT_SOURCE(Workshop::WorkshopUpdateStatsEvent, 0x01D77B1C)
DECLARE_EVENT_SOURCE(ShipCameraStateToggled, 0x01DD2374)
DECLARE_EVENT_SOURCE(PlayerControls::PlayerJumpPressEvent, 0x01FA2574)
DECLARE_EVENT_SOURCE(PlayerControls::PlayerJumpReleaseEvent, 0x01FA2604)
DECLARE_EVENT_SOURCE(PlayerSneakingChangeEvent, 0x01FA3DCC)
DECLARE_EVENT_SOURCE(PlayerControls::PlayerZeroGSprintJustPressedEvent, 0x01FA4008)
DECLARE_EVENT_SOURCE(PlayerControls::PlayerZeroGSprintReleasedEvent, 0x01FA4098)
DECLARE_EVENT_SOURCE(PlayerControls::PlayerIronSightsEndEvent, 0x01FA721C)
DECLARE_EVENT_SOURCE(PlayerControls::PlayerIronSightsStartEvent, 0x01FA72AC)
DECLARE_EVENT_SOURCE(SaveLoadEvent, 0x01FD6D4C)
DECLARE_EVENT_SOURCE(SpaceshipWeaponBinding::SpaceshipWeaponBindingChangedEvent, 0x020093F8)
DECLARE_EVENT_SOURCE(BoundaryMenu_FastTravel, 0x02032068)
DECLARE_EVENT_SOURCE(BoundaryMenu_ShowMap, 0x020320F8)
DECLARE_EVENT_SOURCE(PhotoGallery_DeletePhoto, 0x02092DA4)
DECLARE_EVENT_SOURCE(PowersMenu_ActivateEssence, 0x02096280)
DECLARE_EVENT_SOURCE(PowersMenu_EquipPower, 0x02096310)
DECLARE_EVENT_SOURCE(PowersMenu_FavoritePower, 0x020963A0)
DECLARE_EVENT_SOURCE(ContainerMenuClosed::Event, 0x020A9998)
DECLARE_EVENT_SOURCE(HangarShipSelection_ChangeSystemDisplay, 0x020A9A28)
DECLARE_EVENT_SOURCE(HangarShipSelection_RepairShip, 0x020A9AB8)
DECLARE_EVENT_SOURCE(HangarShipSelection_UpgradeSystem, 0x020A9B48)
DECLARE_EVENT_SOURCE(ShipCrewMenu_Close, 0x020A9BD8)
DECLARE_EVENT_SOURCE(BinkMovieStoppedPlayingEvent, 0x020AEC10)
DECLARE_EVENT_SOURCE(WorkshopColorMode_ApplyColors, 0x0210E01C)
DECLARE_EVENT_SOURCE(WorkshopColorMode_SelectedTab, 0x0210E0AC)
DECLARE_EVENT_SOURCE(WorkshopColorMode_SliderChanged, 0x0210E13C)
DECLARE_EVENT_SOURCE(WorkshopColorMode_SwatchChanged, 0x0210E1CC)
DECLARE_EVENT_SOURCE(HUDCrewBuffMessageEvent, 0x0210F36C)
DECLARE_EVENT_SOURCE(CraftingMenu_SessionSummaryEvent, 0x02118448)
DECLARE_EVENT_SOURCE(CraftingMenu_CraftItem, 0x021184D8)
DECLARE_EVENT_SOURCE(CraftingMenu_ExitBench, 0x02118568)
DECLARE_EVENT_SOURCE(CraftingMenu_InstallMod, 0x021185F8)
DECLARE_EVENT_SOURCE(CraftingMenu_RenameItem, 0x02118688)
DECLARE_EVENT_SOURCE(CraftingMenu_RevertedModdedItem, 0x02118718)
DECLARE_EVENT_SOURCE(CraftingMenu_SelectedMod, 0x021187A8)
DECLARE_EVENT_SOURCE(CraftingMenu_SelectedModSlot, 0x02118838)
DECLARE_EVENT_SOURCE(CraftingMenu_SelectedModdableItem, 0x021188C8)
DECLARE_EVENT_SOURCE(CraftingMenu_SelectedRecipe, 0x02118958)
DECLARE_EVENT_SOURCE(CraftingMenu_SetInspectControls, 0x021189E8)
DECLARE_EVENT_SOURCE(CraftingMenu_ToggleTracking, 0x02118A78)
DECLARE_EVENT_SOURCE(CraftingMenu_ViewingModdableItem, 0x02118B08)
DECLARE_EVENT_SOURCE(ContainerMenu_CloseMenu, 0x02126CCC)
DECLARE_EVENT_SOURCE(InventoryMenu_Change3DView, 0x02126DFC)
DECLARE_EVENT_SOURCE(InventoryMenu_PaperDollTryOn, 0x02126E8C)
DECLARE_EVENT_SOURCE(InventoryMenu_ResetPaperDollInv, 0x02126F1C)
DECLARE_EVENT_SOURCE(UpdateActivateListenerEvent, 0x0212EF38)
DECLARE_EVENT_SOURCE(StartOutpostFromListenerEvent, 0x02130BF8)
DECLARE_EVENT_SOURCE(HUDModeEvent, 0x02140E9C)
DECLARE_EVENT_SOURCE(OpenContainerMenuEventData, 0x02140F2C)
DECLARE_EVENT_SOURCE(OpenContainerMenuFromListenerEvent, 0x02140FBC)
DECLARE_EVENT_SOURCE(HUDRolloverActivationButtonEvent, 0x0214104C)
DECLARE_EVENT_SOURCE(HUDRolloverActivationQCItemPressEvent, 0x021410DC)
DECLARE_EVENT_SOURCE(Inventory_SetSort, 0x0214116C)
DECLARE_EVENT_SOURCE(ShowingQuestMarketTextEvent, 0x0214E648)
DECLARE_EVENT_SOURCE(TargetHitEvent, 0x02150C48)
DECLARE_EVENT_SOURCE(BSTValueRequestEvent<PlayerCrosshairModeEvent>, 0x02150CD8)
DECLARE_EVENT_SOURCE(ClearHUDMessagesEvent, 0x02158134)
DECLARE_EVENT_SOURCE(ShowHUDMessageEvent, 0x021581C4)
DECLARE_EVENT_SOURCE(PlayerDetectionLevelChangeEvent, 0x0215B364)
DECLARE_EVENT_SOURCE(ShowCustomWatchAlert, 0x02160474)
DECLARE_EVENT_SOURCE(PlayerUpdateEvent, 0x0219D7BC)
DECLARE_EVENT_SOURCE(InventoryMenu_ToggleHelmet, 0x0219D84C)
DECLARE_EVENT_SOURCE(InventoryMenu_ToggleSuit, 0x0219D8DC)
DECLARE_EVENT_SOURCE(ControlsRemappedEvent, 0x021E5988)
DECLARE_EVENT_SOURCE(SettingsPanel_CheckBoxChanged, 0x021E5A18)
DECLARE_EVENT_SOURCE(SettingsPanel_ClearBinding, 0x021E5AA8)
DECLARE_EVENT_SOURCE(SettingsPanel_OpenCategory, 0x021E5BDC)
DECLARE_EVENT_SOURCE(SettingsPanel_OpenSettings, 0x021E5C6C)
DECLARE_EVENT_SOURCE(SettingsPanel_RemapConfirmed, 0x021E5CFC)
DECLARE_EVENT_SOURCE(SettingsPanel_RemapMode, 0x021E5D8C)
DECLARE_EVENT_SOURCE(SettingsPanel_ResetToDefaults, 0x021E5E1C)
DECLARE_EVENT_SOURCE(SettingsPanel_SaveControls, 0x021E5EAC)
DECLARE_EVENT_SOURCE(SettingsPanel_SaveSettings, 0x021E5F3C)
DECLARE_EVENT_SOURCE(SettingsPanel_SliderChanged, 0x021E5FCC)
DECLARE_EVENT_SOURCE(SettingsPanel_StepperChanged, 0x021E605C)
DECLARE_EVENT_SOURCE(SettingsPanel_ValidateControls, 0x021E60EC)
DECLARE_EVENT_SOURCE(ShipCrewMenu_OpenAssignMenu, 0x021F0B48)
DECLARE_EVENT_SOURCE(ShipCrewMenu_SetSort, 0x021F0BD8)
DECLARE_EVENT_SOURCE(Spaceship::PlayerMovementOutputEvent, 0x022163E8)
DECLARE_EVENT_SOURCE(ShowLongShipBootup, 0x02216478)
DECLARE_EVENT_SOURCE(ShipHudQuickContainer_TransferMenu, 0x02216508)
DECLARE_EVENT_SOURCE(ShipHud_Activate, 0x02216598)
DECLARE_EVENT_SOURCE(ShipHud_BodyViewMarkerDimensions, 0x02216628)
DECLARE_EVENT_SOURCE(ShipHud_ChangeComponentSelection, 0x022166B8)
DECLARE_EVENT_SOURCE(ShipHud_CloseMenu, 0x02216748)
DECLARE_EVENT_SOURCE(ShipHud_Deselect, 0x022167D8)
DECLARE_EVENT_SOURCE(ShipHud_FarTravel, 0x02216868)
DECLARE_EVENT_SOURCE(ShipHud_HailAccepted, 0x022168F8)
DECLARE_EVENT_SOURCE(ShipHud_HailCancelled, 0x02216988)
DECLARE_EVENT_SOURCE(ShipHud_JumpToQuestMarker, 0x02216A18)
DECLARE_EVENT_SOURCE(ShipHud_Land, 0x02216AA8)
DECLARE_EVENT_SOURCE(ShipHud_LandingMarkerMap, 0x02216B38)
DECLARE_EVENT_SOURCE(ShipHud_Map, 0x02216BC8)
DECLARE_EVENT_SOURCE(ShipHud_OnMonocleToggle, 0x02216C58)
DECLARE_EVENT_SOURCE(ShipHud_OpenPhotoMode, 0x02216CE8)
DECLARE_EVENT_SOURCE(ShipHud_Repair, 0x02216D78)
DECLARE_EVENT_SOURCE(ShipHud_SetTargetMode, 0x02216E08)
DECLARE_EVENT_SOURCE(ShipHud_Target, 0x02216E98)
DECLARE_EVENT_SOURCE(ShipHud_TargetShipSystem, 0x02216F28)
DECLARE_EVENT_SOURCE(ShipHud_UntargetShipSystem, 0x02216FB8)
DECLARE_EVENT_SOURCE(ShipHud_UpdateComponentPower, 0x02217048)
DECLARE_EVENT_SOURCE(DialogueMenu_CompleteExit, 0x02242BDC)
DECLARE_EVENT_SOURCE(BGSScannerGuideEffectStatusUpdateEvent, 0x02253690)
DECLARE_EVENT_SOURCE(GlobalFunc_CloseAllMenus, 0x022586B8)
DECLARE_EVENT_SOURCE(GlobalFunc_CloseMenu, 0x02258748)
DECLARE_EVENT_SOURCE(GlobalFunc_PlayMenuSound, 0x022587D8)
DECLARE_EVENT_SOURCE(GlobalFunc_StartGameRender, 0x02258868)
DECLARE_EVENT_SOURCE(GlobalFunc_UserEvent, 0x022588F8)
DECLARE_EVENT_SOURCE(ExperienceMeterDisplayData, 0x02262208)
DECLARE_EVENT_SOURCE(LevelUp_AnimFinished, 0x02262298)
DECLARE_EVENT_SOURCE(LevelUp_OnWidgetShown, 0x02262328)
DECLARE_EVENT_SOURCE(LevelUp_OpenDataMenu, 0x022623B8)
DECLARE_EVENT_SOURCE(LevelUp_ShowSkills, 0x02262448)
DECLARE_EVENT_SOURCE(LocationTextWidget_FinishedQueue, 0x022624D8)
DECLARE_EVENT_SOURCE(DisplayFatigueWarningEvent, 0x02262780)
DECLARE_EVENT_SOURCE(BSTValueRequestEvent<SaveLoadMessageStringEvent>, 0x0226624C)
DECLARE_EVENT_SOURCE(PlayerCrosshairModeEvent, 0x02150340)
DECLARE_EVENT_SOURCE(HUDNotificationEvent, 0x0226F4B8)
DECLARE_EVENT_SOURCE(HUDNotification_MissionActiveWidgetUpdate, 0x0226F548)
DECLARE_EVENT_SOURCE(HUDNotification_OpenDataMenu, 0x0226F5D8)
DECLARE_EVENT_SOURCE(HUDNotification_OpenMissionMenu, 0x0226F668)
DECLARE_EVENT_SOURCE(HUDNotification_SetMissionActive, 0x0226F6F8)
DECLARE_EVENT_SOURCE(PlayerSetWeaponStateEvent, 0x022712D8)
DECLARE_EVENT_SOURCE(BarterMenu_BuyItem, 0x02284898)
DECLARE_EVENT_SOURCE(BarterMenu_CloseMenu, 0x02284928)
DECLARE_EVENT_SOURCE(BarterMenu_HideModel, 0x022849B8)
DECLARE_EVENT_SOURCE(BarterMenu_LoadModel, 0x02284A48)
DECLARE_EVENT_SOURCE(BarterMenu_SellItem, 0x02284AD8)
DECLARE_EVENT_SOURCE(BarterMenu_SetMouseOverModel, 0x02284B68)
DECLARE_EVENT_SOURCE(BarterMenu_ShowFailureMessage, 0x02284BF8)
DECLARE_EVENT_SOURCE(BarterMenu_ViewedItem, 0x02284C88)
DECLARE_EVENT_SOURCE(MissionMenu_ClearState, 0x02289290)
DECLARE_EVENT_SOURCE(MissionMenu_PlotToLocation, 0x02289320)
DECLARE_EVENT_SOURCE(MissionMenu_RejectQuest, 0x022893B0)
DECLARE_EVENT_SOURCE(MissionMenu_SaveCategoryIndex, 0x02289440)
DECLARE_EVENT_SOURCE(MissionMenu_SaveOpenedId, 0x022894D0)
DECLARE_EVENT_SOURCE(MissionMenu_ShowItemLocation, 0x02289560)
DECLARE_EVENT_SOURCE(MissionMenu_ToggleTrackingQuest, 0x0228968C)
DECLARE_EVENT_SOURCE(DataSlateButtons_acceptClicked, 0x0228EDC8)
DECLARE_EVENT_SOURCE(DataSlateButtons_cancelClicked, 0x0228EE58)
DECLARE_EVENT_SOURCE(DataSlateMenu_playSFX, 0x0228EEE8)
DECLARE_EVENT_SOURCE(DataSlateMenu_toggleAudio, 0x0228EF78)
DECLARE_EVENT_SOURCE(InventoryMenu_DropItem, 0x02295C04)
DECLARE_EVENT_SOURCE(InventoryMenu_HideModel, 0x02295C94)
DECLARE_EVENT_SOURCE(InventoryMenu_LoadModel, 0x02295D24)
DECLARE_EVENT_SOURCE(InventoryMenu_OnEnterCategory, 0x02295DB4)
DECLARE_EVENT_SOURCE(InventoryMenu_OpenCargoHold, 0x02295E44)
DECLARE_EVENT_SOURCE(InventoryMenu_SelectItem, 0x02295ED4)
DECLARE_EVENT_SOURCE(InventoryMenu_SetMouseOverModel, 0x02295F64)
DECLARE_EVENT_SOURCE(InventoryMenu_ToggleFavorite, 0x0229609C)
DECLARE_EVENT_SOURCE(MissionBoard_MissionEntryChanged, 0x022A2558)
DECLARE_EVENT_SOURCE(MissionBoard_MissionEntryPressed, 0x022A25E8)
DECLARE_EVENT_SOURCE(MonocleMenu_Bioscan, 0x022AA2E8)
DECLARE_EVENT_SOURCE(MonocleMenu_FastTravel, 0x022AA378)
DECLARE_EVENT_SOURCE(MonocleMenu_Harvest, 0x022AA408)
DECLARE_EVENT_SOURCE(MonocleMenu_Initialize, 0x022AA498)
DECLARE_EVENT_SOURCE(MonocleMenu_Outpost, 0x022AA5CC)
DECLARE_EVENT_SOURCE(MonocleMenu_PhotoMode, 0x022AA65C)
DECLARE_EVENT_SOURCE(MonocleMenu_Shutdown, 0x022AA6EC)
DECLARE_EVENT_SOURCE(MonocleMenu_SocialSpell, 0x022AA77C)
DECLARE_EVENT_SOURCE(MonocleMenu_StartContainerView, 0x022AA80C)
DECLARE_EVENT_SOURCE(MonocleMenu_StopContainerView, 0x022AA89C)
DECLARE_EVENT_SOURCE(MonocleMenu_SurfaceMap, 0x022AA92C)
DECLARE_EVENT_SOURCE(MonocleMenu_UseListScrollControls, 0x022AA9BC)
DECLARE_EVENT_SOURCE(MonocleMenu_ZoomIn, 0x022AAA4C)
DECLARE_EVENT_SOURCE(MonocleMenu_ZoomOut, 0x022AAADC)
DECLARE_EVENT_SOURCE(PhotoMode_InitializeCategory, 0x022B037C)
DECLARE_EVENT_SOURCE(PhotoMode_ResetToDefaults, 0x022B04AC)
DECLARE_EVENT_SOURCE(PhotoMode_SliderChanged, 0x022B053C)
DECLARE_EVENT_SOURCE(PhotoMode_StepperChanged, 0x022B05CC)
DECLARE_EVENT_SOURCE(PhotoMode_TakeSnapshot, 0x022B065C)
DECLARE_EVENT_SOURCE(PhotoMode_ToggleHelmet, 0x022B06EC)
DECLARE_EVENT_SOURCE(PhotoMode_ToggleUI, 0x022B077C)
DECLARE_EVENT_SOURCE(PickpocketMenu_OnItemSelect, 0x022B91B4)
DECLARE_EVENT_SOURCE(ResearchMenu_AddMaterial, 0x022BE628)
DECLARE_EVENT_SOURCE(ResearchMenu_CategorySelected, 0x022BE6B8)
DECLARE_EVENT_SOURCE(ResearchMenu_ExitMenu, 0x022BE748)
DECLARE_EVENT_SOURCE(ResearchMenu_HideModel, 0x022BE7D8)
DECLARE_EVENT_SOURCE(ResearchMenu_PreviewProject, 0x022BE868)
DECLARE_EVENT_SOURCE(ResearchMenu_ProjectViewed, 0x022BE8F8)
DECLARE_EVENT_SOURCE(ResearchMenu_SetInspectControls, 0x022BE988)
DECLARE_EVENT_SOURCE(ResearchMenu_ToggleTrackingProject, 0x022BEA18)
DECLARE_EVENT_SOURCE(UnlockedTerminalElementEvent, 0x022D0A18)
DECLARE_EVENT_SOURCE(SecurityMenu_BackOutKey, 0x022D0AA8)
DECLARE_EVENT_SOURCE(SecurityMenu_CloseMenu, 0x022D0B38)
DECLARE_EVENT_SOURCE(SecurityMenu_ConfirmExit, 0x022D0BC8)
DECLARE_EVENT_SOURCE(SecurityMenu_EliminateUnusedKeys, 0x022D0C58)
DECLARE_EVENT_SOURCE(SecurityMenu_GetRingHint, 0x022D0CE8)
DECLARE_EVENT_SOURCE(SecurityMenu_SelectNewKey, 0x022D0D78)
DECLARE_EVENT_SOURCE(SecurityMenu_TryUseKey, 0x022D0E08)
DECLARE_EVENT_SOURCE(ShipCrewAssignMenu_Assign, 0x022D4DC4)
DECLARE_EVENT_SOURCE(ShipCrewAssignMenu_Unassign, 0x022D4E54)
DECLARE_EVENT_SOURCE(ShipCrewMenu_ViewedItem, 0x022D4EE4)
DECLARE_EVENT_SOURCE(Refuel_Accept, 0x022D6D84)
DECLARE_EVENT_SOURCE(Refuel_Cancel, 0x022D6E14)
DECLARE_EVENT_SOURCE(SkillsMenu_Accept, 0x022DD8A8)
DECLARE_EVENT_SOURCE(SkillsMenu_AddPatch, 0x022DD938)
DECLARE_EVENT_SOURCE(SkillsMenu_Cancel, 0x022DD9C8)
DECLARE_EVENT_SOURCE(SkillsMenu_ChangeCursorVisibility, 0x022DDA58)
DECLARE_EVENT_SOURCE(SkillsMenu_SaveLastCategory, 0x022DDAE8)
DECLARE_EVENT_SOURCE(BSChargenAPI::BIDataUtils::MenuClosedEvent, 0x023023CC)
DECLARE_EVENT_SOURCE(BSChargenAPI::BIDataUtils::PresetNPCChangedEvent, 0x0230245C)
DECLARE_EVENT_SOURCE(CharGen_BrowChange, 0x023024EC)
DECLARE_EVENT_SOURCE(CharGen_BrowColorChange, 0x0230257C)
DECLARE_EVENT_SOURCE(CharGen_CancelTextEntry, 0x0230260C)
DECLARE_EVENT_SOURCE(CharGen_CloseMenu, 0x0230269C)
DECLARE_EVENT_SOURCE(CharGen_CyclePronoun, 0x0230272C)
DECLARE_EVENT_SOURCE(CharGen_DirtScarsEtcChange, 0x023027BC)
DECLARE_EVENT_SOURCE(CharGen_EndBodyChange, 0x0230284C)
DECLARE_EVENT_SOURCE(CharGen_EndTextEntry, 0x023028DC)
DECLARE_EVENT_SOURCE(CharGen_EyeColorChange, 0x0230296C)
DECLARE_EVENT_SOURCE(CharGen_FacialHairChange, 0x023029FC)
DECLARE_EVENT_SOURCE(CharGen_FacialHairColorChange, 0x02302A8C)
DECLARE_EVENT_SOURCE(CharGen_HairChange, 0x02302B1C)
DECLARE_EVENT_SOURCE(CharGen_HairColorChange, 0x02302BAC)
DECLARE_EVENT_SOURCE(CharGen_HeadpartPlusSelectorChange, 0x02302C3C)
DECLARE_EVENT_SOURCE(CharGen_HeadpartPresetChange, 0x02302CCC)
DECLARE_EVENT_SOURCE(CharGen_JewelryChange, 0x02302D5C)
DECLARE_EVENT_SOURCE(CharGen_JewelryColorChange, 0x02302DEC)
DECLARE_EVENT_SOURCE(CharGen_MakeupChange, 0x02302E7C)
DECLARE_EVENT_SOURCE(CharGen_MarkingsChange, 0x02302F0C)
DECLARE_EVENT_SOURCE(CharGen_PostBlendColorOptionChange, 0x02302F9C)
DECLARE_EVENT_SOURCE(CharGen_PostBlendFaceChange, 0x0230302C)
DECLARE_EVENT_SOURCE(CharGen_PostBlendIntensityChange, 0x023030BC)
DECLARE_EVENT_SOURCE(CharGen_PresetChange, 0x0230314C)
DECLARE_EVENT_SOURCE(CharGen_RollOffLocomotion, 0x023031DC)
DECLARE_EVENT_SOURCE(CharGen_RollOnLocomotion, 0x0230326C)
DECLARE_EVENT_SOURCE(CharGen_RotatePaperdoll, 0x023032FC)
DECLARE_EVENT_SOURCE(CharGen_SetAdditionalSlider, 0x0230338C)
DECLARE_EVENT_SOURCE(CharGen_SetBackground, 0x0230341C)
DECLARE_EVENT_SOURCE(CharGen_SetBlockInputUnderPopup, 0x023034AC)
DECLARE_EVENT_SOURCE(CharGen_SetBodyValues, 0x0230353C)
DECLARE_EVENT_SOURCE(CharGen_SetCameraPosition, 0x023035CC)
DECLARE_EVENT_SOURCE(CharGen_SetPronoun, 0x0230365C)
DECLARE_EVENT_SOURCE(CharGen_SetSex, 0x023036EC)
DECLARE_EVENT_SOURCE(CharGen_SetSlider, 0x0230377C)
DECLARE_EVENT_SOURCE(CharGen_SetTrait, 0x0230380C)
DECLARE_EVENT_SOURCE(CharGen_ShowChooseBackgroundMessage, 0x0230389C)
DECLARE_EVENT_SOURCE(CharGen_ShowPlayerRenameMessage, 0x0230392C)
DECLARE_EVENT_SOURCE(CharGen_SkintoneChange, 0x023039BC)
DECLARE_EVENT_SOURCE(CharGen_StartBodyChange, 0x02303A4C)
DECLARE_EVENT_SOURCE(CharGen_StartTextEntry, 0x02303ADC)
DECLARE_EVENT_SOURCE(CharGen_SwitchBodyType, 0x02303B6C)
DECLARE_EVENT_SOURCE(CharGen_SwitchLocomotion, 0x02303BFC)
DECLARE_EVENT_SOURCE(CharGen_TeethChange, 0x02303C8C)
DECLARE_EVENT_SOURCE(CharGen_TeethRollOff, 0x02303D1C)
DECLARE_EVENT_SOURCE(CharGen_TeethRollOn, 0x02303DAC)
DECLARE_EVENT_SOURCE(CharGen_ToggleMarking, 0x02303E3C)
DECLARE_EVENT_SOURCE(CharGen_TogglePreviewHabSuit, 0x02303ECC)
DECLARE_EVENT_SOURCE(UIMenuChargenMenuDisablePaperdoll, 0x02303F5C)
DECLARE_EVENT_SOURCE(DataMenu_CloseMenu, 0x0230B058)
DECLARE_EVENT_SOURCE(DataMenu_ClosedForSubMenu, 0x0230B0E8)
DECLARE_EVENT_SOURCE(DataMenu_Missions, 0x0230B178)
DECLARE_EVENT_SOURCE(DataMenu_PlotToLocation, 0x0230B2AC)
DECLARE_EVENT_SOURCE(DataMenu_Reopened, 0x0230B33C)
DECLARE_EVENT_SOURCE(DataMenu_SelectedAttributesMenu, 0x0230B3CC)
DECLARE_EVENT_SOURCE(DataMenu_SelectedInventoryMenu, 0x0230B45C)
DECLARE_EVENT_SOURCE(DataMenu_SelectedMapMenu, 0x0230B4EC)
DECLARE_EVENT_SOURCE(DataMenu_SelectedPowersMenu, 0x0230B57C)
DECLARE_EVENT_SOURCE(DataMenu_SelectedShipMenu, 0x0230B60C)
DECLARE_EVENT_SOURCE(DataMenu_SelectedStatusMenu, 0x0230B69C)
DECLARE_EVENT_SOURCE(DataMenu_SetMenuForQuickEntry, 0x0230B72C)
DECLARE_EVENT_SOURCE(DataMenu_SetPaperDollActive, 0x0230B7BC)
DECLARE_EVENT_SOURCE(PauseMenu_ActionCanceled, 0x02316794)
DECLARE_EVENT_SOURCE(PauseMenu_ConfirmAction, 0x02316824)
DECLARE_EVENT_SOURCE(PauseMenu_ConfirmLoad, 0x023168B4)
DECLARE_EVENT_SOURCE(PauseMenu_ConfirmSave, 0x02316944)
DECLARE_EVENT_SOURCE(PauseMenu_DeleteSave, 0x023169D4)
DECLARE_EVENT_SOURCE(PauseMenu_QuitToDesktop, 0x02316A64)
DECLARE_EVENT_SOURCE(PauseMenu_SetCharacter, 0x02316AF4)
DECLARE_EVENT_SOURCE(PauseMenu_StartAction, 0x02316B84)
DECLARE_EVENT_SOURCE(PauseMenu_StartLoad, 0x02316C14)
DECLARE_EVENT_SOURCE(PauseMenu_UploadSave, 0x02316CA4)
DECLARE_EVENT_SOURCE(PlayBink_CloseMenu, 0x02317F20)
DECLARE_EVENT_SOURCE(Spaceship::GravJumpEvent, 0x0231DB74)
DECLARE_EVENT_SOURCE(Spaceship::LandedSetEvent, 0x0231DC04)
DECLARE_EVENT_SOURCE(Reticle_OnLongAnimFinished, 0x0231DC94)
DECLARE_EVENT_SOURCE(ShipHudQuickContainer_TransferItem, 0x0231DD24)
DECLARE_EVENT_SOURCE(ShipHud_AbortJump, 0x0231DDB4)
DECLARE_EVENT_SOURCE(ShipHud_DockRequested, 0x0231DE44)
DECLARE_EVENT_SOURCE(ShipHud_HailShip, 0x0231DED4)
DECLARE_EVENT_SOURCE(ShipHud_UpdateTargetPanelRect, 0x0231DF64)
DECLARE_EVENT_SOURCE(TakeoffMenu_CloseMenu, 0x0231DFF4)
DECLARE_EVENT_SOURCE(TakeoffMenu_ExitShip, 0x0231E084)
DECLARE_EVENT_SOURCE(TakeoffMenu_Launch, 0x0231E114)
DECLARE_EVENT_SOURCE(StarMapMenu_LandingInputInProgress, 0x0233DED0)
DECLARE_EVENT_SOURCE(StarMapMenu_MarkerGroupContainerVisibilityChanged, 0x0233DF60)
DECLARE_EVENT_SOURCE(StarMapMenu_MarkerGroupEntryClicked, 0x0233DFF0)
DECLARE_EVENT_SOURCE(StarMapMenu_MarkerGroupEntryHoverChanged, 0x0233E080)
DECLARE_EVENT_SOURCE(StarMapMenu_ScanPlanet, 0x0233E110)
DECLARE_EVENT_SOURCE(StarMapMenu_SelectedLandingSite, 0x0233E1A0)
DECLARE_EVENT_SOURCE(StarMapMenu_SelectedLandingSiteFailed, 0x0233E230)
DECLARE_EVENT_SOURCE(StarMapMenu_ShowRealCursor, 0x0233E2C0)
DECLARE_EVENT_SOURCE(StarMapMenu_QuickSelectChange, 0x023535C0)
DECLARE_EVENT_SOURCE(StarMapMenu_Galaxy_FocusSystem, 0x02364CA0)
DECLARE_EVENT_SOURCE(StarMapMenu_OnGalaxyViewInitialized, 0x02364D30)
DECLARE_EVENT_SOURCE(StarMapMenu_ExecuteRoute, 0x0236F568)
DECLARE_EVENT_SOURCE(StarMapMenu_OnCancel, 0x0236F5F8)
DECLARE_EVENT_SOURCE(StarMapMenu_OnClearRoute, 0x0236F688)
DECLARE_EVENT_SOURCE(StarMapMenu_OnExitStarMap, 0x0236F718)
DECLARE_EVENT_SOURCE(StarMapMenu_OnHintButtonClicked, 0x0236F7A8)
DECLARE_EVENT_SOURCE(StarMapMenu_OnOutpostEntrySelected, 0x0236F838)
DECLARE_EVENT_SOURCE(StarMapMenu_ReadyToClose, 0x0236F8C8)
DECLARE_EVENT_SOURCE(SurfaceMapMenu_MarkerClicked, 0x0238F13C)
DECLARE_EVENT_SOURCE(SurfaceMapMenu_TryPlaceCustomMarker, 0x0238F1CC)
DECLARE_EVENT_SOURCE(TerminalMenu_CancelEvent, 0x023AA330)
DECLARE_EVENT_SOURCE(Terminal_CloseAllViews, 0x023AA3C0)
DECLARE_EVENT_SOURCE(Terminal_CloseTopView, 0x023AA450)
DECLARE_EVENT_SOURCE(Terminal_CloseView, 0x023AA4E0)
DECLARE_EVENT_SOURCE(Terminal_MenuItemClick, 0x023AA570)
DECLARE_EVENT_SOURCE(TestMenu_DoAction, 0x023B62E8)
DECLARE_EVENT_SOURCE(TestMenu_ExitMenu, 0x023B6378)
DECLARE_EVENT_SOURCE(TestMenu_ShowImages, 0x023B6408)
DECLARE_EVENT_SOURCE(TestMenu_ShowResources, 0x023B6498)
DECLARE_EVENT_SOURCE(TestMenu_TestAll, 0x023B6528)
DECLARE_EVENT_SOURCE(TextInputMenu_EndEditText, 0x023BA464)
DECLARE_EVENT_SOURCE(TextInputMenu_InputCanceled, 0x023BA4F4)
DECLARE_EVENT_SOURCE(TextInputMenu_StartEditText, 0x023BA584)
DECLARE_EVENT_SOURCE(CraftingMenu_Highlight3D, 0x023BB854)
DECLARE_EVENT_SOURCE(CraftingMenu_RevertHighlight, 0x023BB8E4)
DECLARE_EVENT_SOURCE(WorkshopBuilderMenu_ChangeBuildItem, 0x023BDF48)
DECLARE_EVENT_SOURCE(WorkshopBuilderMenu_SelectedItem, 0x023BDFD8)
DECLARE_EVENT_SOURCE(WorkshopBuilderMenu_ToggleTracking, 0x023BE068)
DECLARE_EVENT_SOURCE(WorkshopMenu_AttemptBuild, 0x023C68D4)
DECLARE_EVENT_SOURCE(WorkshopMenu_CancelAction, 0x023C6964)
DECLARE_EVENT_SOURCE(WorkshopMenu_ChangeVariant, 0x023C69F4)
DECLARE_EVENT_SOURCE(WorkshopMenu_ConnectionEvent, 0x023C6A84)
DECLARE_EVENT_SOURCE(WorkshopMenu_ExitMenu, 0x023C6B14)
DECLARE_EVENT_SOURCE(WorkshopMenu_MessageCallback, 0x023C6BA4)
DECLARE_EVENT_SOURCE(WorkshopMenu_SelectedCategory, 0x023C6C34)
DECLARE_EVENT_SOURCE(WorkshopMenu_SelectedGridObject, 0x023C6CC4)
DECLARE_EVENT_SOURCE(WorkshopMenu_ShowExtras, 0x023C6D54)
DECLARE_EVENT_SOURCE(WorkshopMenu_SwitchMode, 0x023C6DE4)
DECLARE_EVENT_SOURCE(WorkshopMenu_ToggleDistance, 0x023C6E74)
DECLARE_EVENT_SOURCE(WorkshopMenu_ToggleTracking, 0x023C6F04)
DECLARE_EVENT_SOURCE(WorkshopMenu_ToggleView, 0x023C6F94)
DECLARE_EVENT_SOURCE(WorkshopQuickMenu_ConfirmAction, 0x023C89E4)
DECLARE_EVENT_SOURCE(WorkshopQuickMenu_ExitMenu, 0x023C8A74)
DECLARE_EVENT_SOURCE(WorkshopTargetMenu_TargetHovered, 0x023CEFB0)
DECLARE_EVENT_SOURCE(WorkshopTargetMenu_TargetPicked, 0x023CF040)
DECLARE_EVENT_SOURCE(WorkshopActionButton_HoldFinished, 0x023E60D4)
DECLARE_EVENT_SOURCE(WorkshopActionButton_HoldStopped, 0x023E6164)
DECLARE_EVENT_SOURCE(WorkshopShared_SetActionHandles, 0x023E61F4)
DECLARE_EVENT_SOURCE(WorkshopShared_StartAction, 0x023E6284)
DECLARE_EVENT_SOURCE(ModelReferenceEffectEvents::ReferenceEffectFinished, 0x024062EC)
DECLARE_EVENT_SOURCE(BGSAcousticSpaceListener::StackChangedEvent, 0x0241A624)
DECLARE_EVENT_SOURCE(SpaceshipBIEvents::ShipPowerAllocationBIEventSent, 0x024323C4)
DECLARE_EVENT_SOURCE(BGSActorDeathEvent, 0x0244113C)
DECLARE_EVENT_SOURCE(Research::ResearchProgressEvent, 0x024921CC)
DECLARE_EVENT_SOURCE(BSTValueRequestEvent<PlayerAutoAimActorEvent>, 0x026CB8E8)
DECLARE_EVENT_SOURCE(PlayerInCombatChangeEvent, 0x026E4490)
DECLARE_EVENT_SOURCE(BlurEvent, 0x029B5BA0)
DECLARE_EVENT_SOURCE(ContainerMenu_HideModel, 0x029D7C70)
DECLARE_EVENT_SOURCE(ContainerMenu_Jettison, 0x029D7D00)
DECLARE_EVENT_SOURCE(ContainerMenu_LoadModel, 0x029D7D90)
DECLARE_EVENT_SOURCE(ContainerMenu_OpenRefuelMenu, 0x029D7E20)
DECLARE_EVENT_SOURCE(ContainerMenu_SetMouseOverModel, 0x029D7EB0)
DECLARE_EVENT_SOURCE(ContainerMenu_TakeAll, 0x029D7F40)
DECLARE_EVENT_SOURCE(ContainerMenu_ToggleEquip, 0x029D7FD0)
DECLARE_EVENT_SOURCE(ContainerMenu_TransferItem, 0x029D80FC)
DECLARE_EVENT_SOURCE(DialogueMenu_OnDialogueSelect, 0x029DBBC0)
DECLARE_EVENT_SOURCE(DialogueMenu_OnListVisibilityChange, 0x029DBC50)
DECLARE_EVENT_SOURCE(DialogueMenu_OnPersuasionAutoWin, 0x029DBCE0)
DECLARE_EVENT_SOURCE(DialogueMenu_OnScriptedDialogueSelect, 0x029DBD70)
DECLARE_EVENT_SOURCE(DialogueMenu_RequestExit, 0x029DBE00)
DECLARE_EVENT_SOURCE(DialogueMenu_RequestSkipDialogue, 0x029DBE90)
DECLARE_EVENT_SOURCE(BSTValueRequestEvent<FaderMenuDisplayState>, 0x029DCD50)
DECLARE_EVENT_SOURCE(FavoritesMenu_AssignQuickkey, 0x029E9620)
DECLARE_EVENT_SOURCE(FavoritesMenu_UseQuickkey, 0x029E96B0)
DECLARE_EVENT_SOURCE(LoadingMenu_RefreshText, 0x029ED59C)
DECLARE_EVENT_SOURCE(MainMenu_ActionCanceled, 0x029F186C)
DECLARE_EVENT_SOURCE(MainMenu_ActionConfirmed, 0x029F18FC)
DECLARE_EVENT_SOURCE(MainMenu_ConfirmLoad, 0x029F198C)
DECLARE_EVENT_SOURCE(MainMenu_DeleteSave, 0x029F1A1C)
DECLARE_EVENT_SOURCE(MainMenu_SetCharacter, 0x029F1B4C)
DECLARE_EVENT_SOURCE(MainMenu_StartAction, 0x029F1BDC)
DECLARE_EVENT_SOURCE(MainMenu_StartLoad, 0x029F1C6C)
DECLARE_EVENT_SOURCE(MainMenu_UploadSave, 0x029F1CFC)
DECLARE_EVENT_SOURCE(BGSAppPausedEvent, 0x029F36E4)
DECLARE_EVENT_SOURCE(MessageBoxMenu_OnBackOut, 0x029F8800)
DECLARE_EVENT_SOURCE(MessageBoxMenu_OnButtonPress, 0x029F8890)
DECLARE_EVENT_SOURCE(MessageBoxMenu_OnScriptedButtonPress, 0x029F8920)
DECLARE_EVENT_SOURCE(SleepWaitMenu_InterruptRest, 0x029FD578)
DECLARE_EVENT_SOURCE(SleepWaitMenu_StartRest, 0x029FD608)
DECLARE_EVENT_SOURCE(Spaceship::BoughtEvent, 0x02CD8D90)
DECLARE_EVENT_SOURCE(Spaceship::ContrabandScanWarningEvent, 0x02CD8E20)
DECLARE_EVENT_SOURCE(Spaceship::DockEvent, 0x02CD8EB0)
DECLARE_EVENT_SOURCE(Spaceship::DynamicNavmeshCompleted, 0x02CD8F40)
DECLARE_EVENT_SOURCE(Spaceship::FarTravelEvent, 0x02CD8FD0)
DECLARE_EVENT_SOURCE(Spaceship::LandingEvent, 0x02CD9060)
DECLARE_EVENT_SOURCE(Spaceship::PlanetScanEvent, 0x02CD90F0)
DECLARE_EVENT_SOURCE(Spaceship::RampDownEvent, 0x02CD9180)
DECLARE_EVENT_SOURCE(Spaceship::RefueledEvent, 0x02CD9210)
DECLARE_EVENT_SOURCE(Spaceship::RegisteredEvent, 0x02CD92A0)
DECLARE_EVENT_SOURCE(Spaceship::ShieldEvent, 0x02CD9330)
DECLARE_EVENT_SOURCE(Spaceship::ShipAddedEvent, 0x02CD93C0)
DECLARE_EVENT_SOURCE(Spaceship::ShipCollisionEvent, 0x02CD9450)
DECLARE_EVENT_SOURCE(Spaceship::ShipCustomizedEvent, 0x02CD94E0)
DECLARE_EVENT_SOURCE(Spaceship::SoldEvent, 0x02CD9570)
DECLARE_EVENT_SOURCE(Spaceship::SystemDamagedEvent, 0x02CD9600)
DECLARE_EVENT_SOURCE(Spaceship::SystemPowerAllocationEvent, 0x02CD9690)
DECLARE_EVENT_SOURCE(Spaceship::SystemPowerChangeEvent, 0x02CD9720)
DECLARE_EVENT_SOURCE(Spaceship::SystemRepairedBIEvent, 0x02CD97B0)
DECLARE_EVENT_SOURCE(Spaceship::SystemRepairedEvent, 0x02CD9840)
DECLARE_EVENT_SOURCE(Spaceship::TakeDamagEvent, 0x02CD98D0)
DECLARE_EVENT_SOURCE(ContextStackChangedEvent, 0x02E43994)
DECLARE_EVENT_SOURCE(UpdateSceneRectEvent, 0x0303383C)
DECLARE_EVENT_SOURCE(GameStalledEvent, 0x031FFA28)

// more

DECLARE_EVENT_SOURCE(TESCellNavmeshGeneratedEvent, 0x005BAE00)
DECLARE_EVENT_SOURCE(TESHitEvent, 0x005BB690)
DECLARE_EVENT_SOURCE(FirstThirdPersonSwitch::Event, 0x005BC080)
DECLARE_EVENT_SOURCE(PerkChanged::Event, 0x012D7F10)
DECLARE_EVENT_SOURCE(TESHarvestEvent::ItemHarvested, 0x014E3FE0)
DECLARE_EVENT_SOURCE(ActivityEvents::ActivityCompletedEvent, 0x014EC280)
DECLARE_EVENT_SOURCE(ChallengeCompletedEvent::Event, 0x014EE5A0)
DECLARE_EVENT_SOURCE(InventoryItemEvent::Event, 0x01526BF0)
DECLARE_EVENT_SOURCE(BooksRead::Event, 0x0193B070)
DECLARE_EVENT_SOURCE(LocationExplored::Event, 0x01973D70)
DECLARE_EVENT_SOURCE(LocationLinked::Event, 0x01973DE0)
DECLARE_EVENT_SOURCE(Activation::Event, 0x01A36510)
DECLARE_EVENT_SOURCE(ActorCellChangeEvent, 0x01A486D0)
DECLARE_EVENT_SOURCE(ActorHeadAttachedEvent, 0x01A48740)
DECLARE_EVENT_SOURCE(ActorValueEvents::ActorValueChangedEvent, 0x01A487B0)
DECLARE_EVENT_SOURCE(AliasChangeEvent, 0x01A48820)
DECLARE_EVENT_SOURCE(AnimationGraphDependentEvent, 0x01A48890)
DECLARE_EVENT_SOURCE(BGSAffinityEventEvent, 0x01A48900)
DECLARE_EVENT_SOURCE(BGSCellGridLoadEvent, 0x01A48970)
DECLARE_EVENT_SOURCE(BGSEventProcessedEvent, 0x01A489E0)
DECLARE_EVENT_SOURCE(BGSHavokWorldCreatedEvent, 0x01A48A50)
DECLARE_EVENT_SOURCE(BGSLocationLoadedEvent, 0x01A48AC0)
DECLARE_EVENT_SOURCE(BGSOnPlayerCompanionDismiss, 0x01A48B30)
DECLARE_EVENT_SOURCE(BGSOnPlayerCompleteResearchEvent, 0x01A48BA0)
DECLARE_EVENT_SOURCE(BGSOnPlayerCraftItemEvent, 0x01A48C10)
DECLARE_EVENT_SOURCE(BGSOnPlayerCreateRobotEvent, 0x01A48C80)
DECLARE_EVENT_SOURCE(BGSOnPlayerEnterVertibirdEvent, 0x01A48CF0)
DECLARE_EVENT_SOURCE(BGSOnPlayerFallLongDistances, 0x01A48D60)
DECLARE_EVENT_SOURCE(BGSOnPlayerFireWeaponEvent, 0x01A48DD0)
DECLARE_EVENT_SOURCE(BGSOnPlayerHealTeammateEvent, 0x01A48E40)
DECLARE_EVENT_SOURCE(BGSOnPlayerLoiteringBeginEvent, 0x01A48EB0)
DECLARE_EVENT_SOURCE(BGSOnPlayerLoiteringEndEvent, 0x01A48F20)
DECLARE_EVENT_SOURCE(BGSOnPlayerModArmorWeaponEvent, 0x01A48F90)
DECLARE_EVENT_SOURCE(BGSOnPlayerModRobotEvent, 0x01A49000)
DECLARE_EVENT_SOURCE(BGSOnPlayerSwimmingEvent, 0x01A49070)
DECLARE_EVENT_SOURCE(BGSOnPlayerUseWorkBenchEvent, 0x01A490E0)
DECLARE_EVENT_SOURCE(BGSOnSpeechChallengeAvailable, 0x01A49150)
DECLARE_EVENT_SOURCE(BGSRadiationDamageEvent, 0x01A491C0)
DECLARE_EVENT_SOURCE(BuilderMenuSelectEvent, 0x01A49230)
DECLARE_EVENT_SOURCE(CrewAssignedEvent, 0x01A492A0)
DECLARE_EVENT_SOURCE(CrewDismissedEvent, 0x01A49310)
DECLARE_EVENT_SOURCE(DestroyedEvent, 0x01A49380)
DECLARE_EVENT_SOURCE(HomeShipSetEvent, 0x01A49540)
DECLARE_EVENT_SOURCE(InstantReferenceInteractionEvent, 0x01A495B0)
DECLARE_EVENT_SOURCE(ItemConsumedEvent, 0x01A49620)
DECLARE_EVENT_SOURCE(ItemSwappedEvent, 0x01A49690)
DECLARE_EVENT_SOURCE(LockPickedEvent, 0x01A49700)
DECLARE_EVENT_SOURCE(MapMarkerDiscoveredEvent, 0x01A49770)
DECLARE_EVENT_SOURCE(ObjectScannedEvent, 0x01A497E0)
DECLARE_EVENT_SOURCE(PlayerAddItemEvent, 0x01A49850)
DECLARE_EVENT_SOURCE(PlayerArrestedEvent, 0x01A498C0)
DECLARE_EVENT_SOURCE(PlayerAssaultActorEvent, 0x01A49930)
DECLARE_EVENT_SOURCE(PlayerBuyShipEvent, 0x01A499A0)
DECLARE_EVENT_SOURCE(PlayerCrimeGoldEvent, 0x01A49A10)
DECLARE_EVENT_SOURCE(PlayerFailedPlotRouteEvent, 0x01A49A80)
DECLARE_EVENT_SOURCE(PlayerJailEvent, 0x01A49AF0)
DECLARE_EVENT_SOURCE(PlayerModifiedShipEvent, 0x01A49B60)
DECLARE_EVENT_SOURCE(PlayerMurderActorEvent, 0x01A49BD0)
DECLARE_EVENT_SOURCE(PlayerPayFineEvent, 0x01A49C40)
DECLARE_EVENT_SOURCE(PlayerPlanetSurveyCompleteEvent, 0x01A49CB0)
DECLARE_EVENT_SOURCE(PlayerPlanetSurveyProgressEvent, 0x01A49D20)
DECLARE_EVENT_SOURCE(PlayerSellShipEvent, 0x01A49D90)
DECLARE_EVENT_SOURCE(PlayerTrespassEvent, 0x01A49E00)
DECLARE_EVENT_SOURCE(QuickContainerOpenedEvent, 0x01A49E70)
DECLARE_EVENT_SOURCE(RefControlChangedEvent, 0x01A49EE0)
DECLARE_EVENT_SOURCE(ReferenceDestroyedEvent, 0x01A49F50)
DECLARE_EVENT_SOURCE(SpeechChallengeCompletionEvent, 0x01A49FC0)
DECLARE_EVENT_SOURCE(TESActivateEvent, 0x01A4A030)
DECLARE_EVENT_SOURCE(TESActiveEffectApplyFinishEvent, 0x01A4A0A0)
DECLARE_EVENT_SOURCE(TESActiveEffectRemovedEvent, 0x01A4A110)
DECLARE_EVENT_SOURCE(TESActorActivatedRefEvent, 0x01A4A180)
DECLARE_EVENT_SOURCE(TESActorLocationChangeEvent, 0x01A4A1F0)
DECLARE_EVENT_SOURCE(TESBookReadEvent, 0x01A4A260)
DECLARE_EVENT_SOURCE(TESCellCriticalRefsAttachedEvent, 0x01A4A2D0)
DECLARE_EVENT_SOURCE(TESCellFullyLoadedEvent, 0x01A4A340)
DECLARE_EVENT_SOURCE(TESCellGravityChangeEvent, 0x01A4A3B0)
DECLARE_EVENT_SOURCE(TESCellReadyToApplyDecalsEvent, 0x01A4A420)
DECLARE_EVENT_SOURCE(TESCellReference3DAttachEvent, 0x01A4A490)
DECLARE_EVENT_SOURCE(TESCellReferenceAttachDetachEvent, 0x01A4A500)
DECLARE_EVENT_SOURCE(TESCombatEvent, 0x01A4A570)
DECLARE_EVENT_SOURCE(TESCombatListEvent, 0x01A4A5E0)
DECLARE_EVENT_SOURCE(TESCommandModeCompleteCommandEvent, 0x01A4A650)
DECLARE_EVENT_SOURCE(TESCommandModeEnterEvent, 0x01A4A6C0)
DECLARE_EVENT_SOURCE(TESCommandModeExitEvent, 0x01A4A730)
DECLARE_EVENT_SOURCE(TESCommandModeGiveCommandEvent, 0x01A4A7A0)
DECLARE_EVENT_SOURCE(TESConsciousnessEvent, 0x01A4A810)
DECLARE_EVENT_SOURCE(TESContainerChangedEvent, 0x01A4A880)
DECLARE_EVENT_SOURCE(TESDeathEvent, 0x01A4A8F0)
DECLARE_EVENT_SOURCE(TESDeferredKillEvent, 0x01A4A960)
DECLARE_EVENT_SOURCE(TESDestructionStageChangedEvent, 0x01A4A9D0)
DECLARE_EVENT_SOURCE(TESEnterBleedoutEvent, 0x01A4AA40)
DECLARE_EVENT_SOURCE(TESEnterSneakingEvent, 0x01A4AAB0)
DECLARE_EVENT_SOURCE(TESEquipEvent, 0x01A4AB20)
DECLARE_EVENT_SOURCE(TESEscortWaitStartEvent, 0x01A4AB90)
DECLARE_EVENT_SOURCE(TESEscortWaitStopEvent, 0x01A4AC00)
DECLARE_EVENT_SOURCE(TESExitBleedoutEvent, 0x01A4AC70)
DECLARE_EVENT_SOURCE(TESExitFurnitureEvent, 0x01A4ACE0)
DECLARE_EVENT_SOURCE(TESFormDeleteEvent, 0x01A4AD50)
DECLARE_EVENT_SOURCE(TESFormIDRemapEvent, 0x01A4ADC0)
DECLARE_EVENT_SOURCE(TESFurnitureEvent, 0x01A4AE30)
DECLARE_EVENT_SOURCE(TESGrabReleaseEvent, 0x01A4AEA0)
DECLARE_EVENT_SOURCE(TESInitScriptEvent, 0x01A4AF10)
DECLARE_EVENT_SOURCE(TESLimbCrippleEvent, 0x01A4AF80)
DECLARE_EVENT_SOURCE(TESLoadGameEvent, 0x01A4AFF0)
DECLARE_EVENT_SOURCE(TESLocationExploredEvent, 0x01A4B060)
DECLARE_EVENT_SOURCE(TESLockChangedEvent, 0x01A4B0D0)
DECLARE_EVENT_SOURCE(TESMagicEffectApplyEvent, 0x01A4B140)
DECLARE_EVENT_SOURCE(TESMissionAcceptedEvent, 0x01A4B1B0)
DECLARE_EVENT_SOURCE(TESObjectLoadedEvent, 0x01A4B220)
DECLARE_EVENT_SOURCE(TESObjectREFRTranslationEvent, 0x01A4B290)
DECLARE_EVENT_SOURCE(TESOnPCDialogueTargetEvent, 0x01A4B300)
DECLARE_EVENT_SOURCE(TESOpenCloseEvent, 0x01A4B370)
DECLARE_EVENT_SOURCE(TESPackageEvent, 0x01A4B3E0)
DECLARE_EVENT_SOURCE(TESPerkEntryRunEvent, 0x01A4B450)
DECLARE_EVENT_SOURCE(TESPickNewIdleEvent, 0x01A4B4C0)
DECLARE_EVENT_SOURCE(TESPickpocketFailedEvent, 0x01A4B530)
DECLARE_EVENT_SOURCE(TESPlayerActiveEffectEvent, 0x01A4B5A0)
DECLARE_EVENT_SOURCE(TESPlayerFollowerWarpEvent, 0x01A4B610)
DECLARE_EVENT_SOURCE(TESQuestInitEvent, 0x01A4B680)
DECLARE_EVENT_SOURCE(TESQuestRejectedEvent, 0x01A4B6F0)
DECLARE_EVENT_SOURCE(TESQuestStageEvent, 0x01A4B760)
DECLARE_EVENT_SOURCE(TESQuestStageItemDoneEvent, 0x01A4B7D0)
DECLARE_EVENT_SOURCE(TESQuestStartStopEvent, 0x01A4B840)
DECLARE_EVENT_SOURCE(TESQuestTimerEvent, 0x01A4B8B0)
DECLARE_EVENT_SOURCE(TESResetEvent, 0x01A4B920)
DECLARE_EVENT_SOURCE(TESResolveNPCTemplatesEvent, 0x01A4B990)
DECLARE_EVENT_SOURCE(TESSceneActionEvent, 0x01A4BA00)
DECLARE_EVENT_SOURCE(TESSceneEvent, 0x01A4BA70)
DECLARE_EVENT_SOURCE(TESScenePhaseEvent, 0x01A4BAE0)
DECLARE_EVENT_SOURCE(TESSellEvent, 0x01A4BB50)
DECLARE_EVENT_SOURCE(TESSleepStartEvent, 0x01A4BBC0)
DECLARE_EVENT_SOURCE(TESSleepStopEvent, 0x01A4BC30)
DECLARE_EVENT_SOURCE(TESSpellCastEvent, 0x01A4BCA0)
DECLARE_EVENT_SOURCE(TESSpellCastFailureEvent, 0x01A4BD10)
DECLARE_EVENT_SOURCE(TESSwitchRaceCompleteEvent, 0x01A4BD80)
DECLARE_EVENT_SOURCE(TESTopicInfoEvent, 0x01A4BDF0)
DECLARE_EVENT_SOURCE(TESTrackedStatsEvent, 0x01A4BE60)
DECLARE_EVENT_SOURCE(TESTrapHitEvent, 0x01A4BED0)
DECLARE_EVENT_SOURCE(TESTriggerEnterEvent, 0x01A4BF40)
DECLARE_EVENT_SOURCE(TESTriggerEvent, 0x01A4BFB0)
DECLARE_EVENT_SOURCE(TESTriggerLeaveEvent, 0x01A4C020)
DECLARE_EVENT_SOURCE(TESUniqueIDChangeEvent, 0x01A4C100)
DECLARE_EVENT_SOURCE(TESWaitStartEvent, 0x01A4C170)
DECLARE_EVENT_SOURCE(TESWaitStopEvent, 0x01A4C1E0)
DECLARE_EVENT_SOURCE(TerminalMenuMenuItemRunEvent, 0x01A4C250)
DECLARE_EVENT_SOURCE(TerminalMenuOnEnterEvent, 0x01A4C2C0)
DECLARE_EVENT_SOURCE(WorkshopNPCTransferEvent, 0x01A4C330)
DECLARE_EVENT_SOURCE(TESObjectREFRIsReadyForAttachEvent, 0x01A4C3A0)
DECLARE_EVENT_SOURCE(DefaultObjectsReadyEvent::Event, 0x01A77C70)
DECLARE_EVENT_SOURCE(ObjectiveState::Event, 0x01B247A0)
DECLARE_EVENT_SOURCE(QuestStatus::Event, 0x01B86290)
DECLARE_EVENT_SOURCE(RefillAliasEvent::Event, 0x01B86300)
DECLARE_EVENT_SOURCE(TESQuestEvent::Event, 0x01B86370)
DECLARE_EVENT_SOURCE(RolloverIsCrimeEvent::Event, 0x02150BE0)
DECLARE_EVENT_SOURCE(HideSubtitleEvent::Event, 0x0215BEB0)
DECLARE_EVENT_SOURCE(ShowSubtitleEvent::Event, 0x0215BF20)
DECLARE_EVENT_SOURCE(MissionMenuStateEvent::Event, 0x021B8600)
DECLARE_EVENT_SOURCE(ClearShipHudTarget::Event, 0x02216310)
DECLARE_EVENT_SOURCE(TryUpdateShipHudTarget::Event, 0x02216380)
DECLARE_EVENT_SOURCE(LocationTextEvent::Event, 0x02271200)
DECLARE_EVENT_SOURCE(TraitDiscoveryTextEvent::Event, 0x02271270)
DECLARE_EVENT_SOURCE(DaysPassed::Event, 0x0250A6B0)
DECLARE_EVENT_SOURCE(HourPassed::Event, 0x0250A720)
DECLARE_EVENT_SOURCE(ActorDamage::Event, 0x025EBE40)
DECLARE_EVENT_SOURCE(ActorItemEquipped::Event, 0x025EBEB0)
DECLARE_EVENT_SOURCE(ActorKill::Event, 0x025EBF20)
DECLARE_EVENT_SOURCE(AssaultCrime::Event, 0x025EBF90)
DECLARE_EVENT_SOURCE(DisarmedEvent::Event, 0x025EC000)
DECLARE_EVENT_SOURCE(FactionRankChange::Event, 0x025EC070)
DECLARE_EVENT_SOURCE(GrandTheftHorse::Event, 0x025EC0E0)
DECLARE_EVENT_SOURCE(MurderCrime::Event, 0x025EC150)
DECLARE_EVENT_SOURCE(PiracyCrime::Event, 0x025EC1C0)
DECLARE_EVENT_SOURCE(Bleedout::Event, 0x0261A740)
DECLARE_EVENT_SOURCE(ContractedDisease::Event, 0x0261A7B0)
DECLARE_EVENT_SOURCE(ReloadWeaponEvent::Event, 0x0261A820)
DECLARE_EVENT_SOURCE(SpellsLearned::Event, 0x02629390)
DECLARE_EVENT_SOURCE(Bounty::Event, 0x026CAE00)
DECLARE_EVENT_SOURCE(ChestLooted::Event, 0x026CAE70)
DECLARE_EVENT_SOURCE(CriticalHitEvent::Event, 0x026CAEE0)
DECLARE_EVENT_SOURCE(CustomMarkerUpdate::Event, 0x026CAF50)
DECLARE_EVENT_SOURCE(DaysJailed::Event, 0x026CAFC0)
DECLARE_EVENT_SOURCE(EnteredUnity::Event, 0x026CB030)
DECLARE_EVENT_SOURCE(FinePaid::Event, 0x026CB0A0)
DECLARE_EVENT_SOURCE(ItemCrafted::Event, 0x026CB110)
DECLARE_EVENT_SOURCE(ItemSteal::Event, 0x026CB180)
DECLARE_EVENT_SOURCE(JailEscape::Event, 0x026CB1F0)
DECLARE_EVENT_SOURCE(Jailing::Event, 0x026CB260)
DECLARE_EVENT_SOURCE(LevelIncrease::Event, 0x026CB2D0)
DECLARE_EVENT_SOURCE(LocationMarkerArrayUpdate::Event, 0x026CB340)
DECLARE_EVENT_SOURCE(PlayerActiveEffectChanged::Event, 0x026CB3B0)
DECLARE_EVENT_SOURCE(PlayerAmmoChanged::Event, 0x026CB420)
DECLARE_EVENT_SOURCE(PlayerCharacterQuestEvent::Event, 0x026CB490)
DECLARE_EVENT_SOURCE(PlayerDifficultySettingChanged::Event, 0x026CB500)
DECLARE_EVENT_SOURCE(PlayerFastTravel::Event, 0x026CB570)
DECLARE_EVENT_SOURCE(PlayerInDialogueChanged::Event, 0x026CB5E0)
DECLARE_EVENT_SOURCE(PlayerLifeStateChanged::Event, 0x026CB650)
DECLARE_EVENT_SOURCE(PlayerPickpocketSuccess::Event, 0x026CB6C0)
DECLARE_EVENT_SOURCE(PoisonedWeapon::Event, 0x026CB730)
DECLARE_EVENT_SOURCE(TerminalHacked::Event, 0x026CB7A0)
DECLARE_EVENT_SOURCE(TravelMarkerStateChange::Event, 0x026CB810)
DECLARE_EVENT_SOURCE(WeaponAttack::Event, 0x026CB880)
DECLARE_EVENT_SOURCE(Trespass::Event, 0x0272A3B0)
DECLARE_EVENT_SOURCE(VATSEvents::ModeChange, 0x02794450)
DECLARE_EVENT_SOURCE(VATSCommand, 0x027944C0)
DECLARE_EVENT_SOURCE(HoursPassed::Event, 0x029FD510)

// other events
DECLARE_EVENT_SOURCE(RadioManager::PipboyTransmitterDetectionEvent, 0x02480370)
DECLARE_EVENT_SOURCE_EX(XPChange::Event, 0x05F9EB00)
DECLARE_EVENT_SOURCE_EX(WeaponFiredEvent, 0x05F912A8)
DECLARE_EVENT_SOURCE_EX(ActorEquipManagerEvent::Event, 0x06969830)
DECLARE_EVENT_SOURCE_EX(ActorEquipManagerEvent::SpellEvent, 0x06969858)
DECLARE_EVENT_SOURCE_EX(AttachReference::Event, 0x05F9EAD8)
