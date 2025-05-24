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
    u32 formId; // 00
};
struct TESFormIDRemapEvent
{
    u32 oldID;  // 00
    u32 newID;  // 04
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
        DEFINE_MEMBER_FN_1(RegisterSink, void, 0x0224C920, SinkBase* sink);
        DEFINE_MEMBER_FN_1(UnregisterSink, void, 0x0224CAB0, SinkBase* sink);
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

DECLARE_EVENT_SOURCE(ActivityTrackerActivityStartedEvent, 0x005F7500)
DECLARE_EVENT_SOURCE(ActorEquipManagerEvent::Event, 0x01825E00)
DECLARE_EVENT_SOURCE(ActorEquipManagerEvent::SpellEvent, 0x01825E00)
//DECLARE_EVENT_SOURCE(ActorInventoryEvent, 0x01984830)
DECLARE_EVENT_SOURCE(ActorValueEvents::ActorValueChangedEvent, 0x002AED70)
//DECLARE_EVENT_SOURCE(AddSaveLoadEntryEvent, 0x01453850)
DECLARE_EVENT_SOURCE(AliasChangeEvent, 0x00CE7DE0)
DECLARE_EVENT_SOURCE(AnimationDataCleanupEvent, 0x00306030)
DECLARE_EVENT_SOURCE(AnimationDataSetupEvent, 0x003060D0)
DECLARE_EVENT_SOURCE(AutoLoadDoorRolloverEvent, 0x00A81CA0)
DECLARE_EVENT_SOURCE(BGSAcousticSpaceListener::StackChangedEvent, 0x01725AD0)
DECLARE_EVENT_SOURCE(BGSActorDeathEvent, 0x013A12D0)
DECLARE_EVENT_SOURCE(BGSAppPausedEvent, 0x01E5E110)
DECLARE_EVENT_SOURCE(BGSCellGridLoadEvent, 0x0056DCD0)
DECLARE_EVENT_SOURCE(BGSEventProcessedEvent, 0x00ED7BC0)
//DECLARE_EVENT_SOURCE(BGSKeyword::OnDestroyEvent, 0x00C88300)
DECLARE_EVENT_SOURCE(BGSOnPlayerCompleteResearchEvent, 0x01790DB0)
DECLARE_EVENT_SOURCE(BGSPlanet::PlayerKnowledgeFlagSetEvent, 0x007B2F60)
DECLARE_EVENT_SOURCE(BGSScannerGuideEffectStatusUpdateEvent, 0x01546EC0)
DECLARE_EVENT_SOURCE(BGSSceneActionPlayerDialogue::ActionEndEvent, 0x009B0DF0)
DECLARE_EVENT_SOURCE(BGSSceneActionPlayerDialogue::ActionStartEvent, 0x009B0E90)
//DECLARE_EVENT_SOURCE(BSBethesdaPlatformBlocklistAvailableEvent, 0x02114360)
//DECLARE_EVENT_SOURCE(BSBethesdaPlatformCuratedListAvailableEvent, 0x0145FC20)
//DECLARE_EVENT_SOURCE(BSBethesdaPlatformInitializedEvent, 0x0145FB80)
//DECLARE_EVENT_SOURCE(BSBethesdaPlatformLinkedLoginEvent, 0x02108630)
//DECLARE_EVENT_SOURCE(BSBethesdaPlatformLoginEvent, 0x0145B940)
//DECLARE_EVENT_SOURCE(BSBethesdaPlatformShutdownEvent, 0x02BFA470)
DECLARE_EVENT_SOURCE(BSChargenAPI::BIDataUtils::MenuClosedEvent, 0x015FBF80)
DECLARE_EVENT_SOURCE(BSChargenAPI::BIDataUtils::PresetNPCChangedEvent, 0x015FA0B0)
//DECLARE_EVENT_SOURCE(BSEntitlementFoundEvent, 0x021086D0)
//DECLARE_EVENT_SOURCE(BSMaterial::MaterialsReloadedEvent, 0x02454BA0)
//DECLARE_EVENT_SOURCE(BSRedeemableFoundEvent, 0x01343180)
//DECLARE_EVENT_SOURCE(BSResource::Archive2::ClearRegistryEvent, 0x02760390)
//DECLARE_EVENT_SOURCE(BSResource::Archive2::RegisteredEvent, 0x02760390)
//DECLARE_EVENT_SOURCE(BSResource::Archive2::StreamOpenedEvent, 0x02760390)
//DECLARE_EVENT_SOURCE(BSResource::ArchiveRegisteredEvent, 0x02760390)
//DECLARE_EVENT_SOURCE(BSResource::NameFoundEvent, 0x0275BE40)
//DECLARE_EVENT_SOURCE(BSScript::StatsEvent, 0x027D0600)
//DECLARE_EVENT_SOURCE(BSTValueRequestEvent < FaderMenuDisplayState, 0x01E45A30)
//DECLARE_EVENT_SOURCE(BSTValueRequestEvent < PlayerAutoAimActorEvent, 0x019FCAC0)
//DECLARE_EVENT_SOURCE(BSTValueRequestEvent < PlayerCrosshairModeEvent, 0x0142AC00)
//DECLARE_EVENT_SOURCE(BSTValueRequestEvent < SaveLoadMessageStringEvent, 0x0155D990)
DECLARE_EVENT_SOURCE(BSWorldOriginShiftEvent, 0x00684C10)
DECLARE_EVENT_SOURCE(BarterMenu_BuyItem, 0x01578A40)
DECLARE_EVENT_SOURCE(BarterMenu_CloseMenu, 0x01578D60)
DECLARE_EVENT_SOURCE(BarterMenu_HideModel, 0x01578C20)
DECLARE_EVENT_SOURCE(BarterMenu_LoadModel, 0x01578CC0)
DECLARE_EVENT_SOURCE(BarterMenu_SellItem, 0x015789A0)
DECLARE_EVENT_SOURCE(BarterMenu_SetMouseOverModel, 0x01578900)
DECLARE_EVENT_SOURCE(BarterMenu_ShowFailureMessage, 0x01578B80)
DECLARE_EVENT_SOURCE(BarterMenu_ViewedItem, 0x01578AE0)
DECLARE_EVENT_SOURCE(BinkMovieStoppedPlayingEvent, 0x013A2BB0)
DECLARE_EVENT_SOURCE(BlurEvent, 0x01E1DC80)
DECLARE_EVENT_SOURCE(BoundaryMenu_FastTravel, 0x01334F90)
DECLARE_EVENT_SOURCE(BoundaryMenu_ShowMap, 0x01334EF0)
//DECLARE_EVENT_SOURCE(CameraCutEvent, 0x00F8AF90)
DECLARE_EVENT_SOURCE(CellAttachDetachEvent, 0x0057B4C0)
DECLARE_EVENT_SOURCE(ChallengeCompletedEvent::Event, 0x005F6330)
DECLARE_EVENT_SOURCE(CharGen_BrowChange, 0x015FB300)
DECLARE_EVENT_SOURCE(CharGen_BrowColorChange, 0x015FAFE0)
DECLARE_EVENT_SOURCE(CharGen_CancelTextEntry, 0x015FBA80)
DECLARE_EVENT_SOURCE(CharGen_CloseMenu, 0x015FBEE0)
DECLARE_EVENT_SOURCE(CharGen_CyclePronoun, 0x015FAEA0)
DECLARE_EVENT_SOURCE(CharGen_DirtScarsEtcChange, 0x015FB620)
DECLARE_EVENT_SOURCE(CharGen_EndBodyChange, 0x015FA680)
DECLARE_EVENT_SOURCE(CharGen_EndTextEntry, 0x015FBB20)
DECLARE_EVENT_SOURCE(CharGen_EyeColorChange, 0x015FB3A0)
DECLARE_EVENT_SOURCE(CharGen_FacialHairChange, 0x015FB120)
DECLARE_EVENT_SOURCE(CharGen_FacialHairColorChange, 0x015FB080)
DECLARE_EVENT_SOURCE(CharGen_HairChange, 0x015FB260)
DECLARE_EVENT_SOURCE(CharGen_HairColorChange, 0x015FB1C0)
DECLARE_EVENT_SOURCE(CharGen_HeadpartPlusSelectorChange, 0x015FB760)
DECLARE_EVENT_SOURCE(CharGen_HeadpartPresetChange, 0x015FBDA0)
DECLARE_EVENT_SOURCE(CharGen_JewelryChange, 0x015FA860)
DECLARE_EVENT_SOURCE(CharGen_JewelryColorChange, 0x015FA7C0)
DECLARE_EVENT_SOURCE(CharGen_MakeupChange, 0x015FA2C0)
DECLARE_EVENT_SOURCE(CharGen_MarkingsChange, 0x015FA220)
DECLARE_EVENT_SOURCE(CharGen_PostBlendColorOptionChange, 0x015FA400)
DECLARE_EVENT_SOURCE(CharGen_PostBlendFaceChange, 0x015FA4A0)
DECLARE_EVENT_SOURCE(CharGen_PostBlendIntensityChange, 0x015FA360)
DECLARE_EVENT_SOURCE(CharGen_PresetChange, 0x015FBE40)
DECLARE_EVENT_SOURCE(CharGen_RollOffLocomotion, 0x015FAA40)
DECLARE_EVENT_SOURCE(CharGen_RollOnLocomotion, 0x015FAAE0)
DECLARE_EVENT_SOURCE(CharGen_RotatePaperdoll, 0x015FAB80)
DECLARE_EVENT_SOURCE(CharGen_SetAdditionalSlider, 0x015FA5E0)
DECLARE_EVENT_SOURCE(CharGen_SetBackground, 0x015FB440)
DECLARE_EVENT_SOURCE(CharGen_SetBlockInputUnderPopup, 0x015FA540)
DECLARE_EVENT_SOURCE(CharGen_SetBodyValues, 0x015FB8A0)
DECLARE_EVENT_SOURCE(CharGen_SetCameraPosition, 0x015FB800)
DECLARE_EVENT_SOURCE(CharGen_SetPronoun, 0x015FAE00)
DECLARE_EVENT_SOURCE(CharGen_SetSex, 0x015FBD00)
DECLARE_EVENT_SOURCE(CharGen_SetSlider, 0x015FBC60)
DECLARE_EVENT_SOURCE(CharGen_SetTrait, 0x015FB4E0)
DECLARE_EVENT_SOURCE(CharGen_ShowChooseBackgroundMessage, 0x015FB940)
DECLARE_EVENT_SOURCE(CharGen_ShowPlayerRenameMessage, 0x015FB9E0)
DECLARE_EVENT_SOURCE(CharGen_SkintoneChange, 0x015FB6C0)
DECLARE_EVENT_SOURCE(CharGen_StartBodyChange, 0x015FA720)
DECLARE_EVENT_SOURCE(CharGen_StartTextEntry, 0x015FBBC0)
DECLARE_EVENT_SOURCE(CharGen_SwitchBodyType, 0x015FAC20)
DECLARE_EVENT_SOURCE(CharGen_SwitchLocomotion, 0x015FACC0)
DECLARE_EVENT_SOURCE(CharGen_TeethChange, 0x015FAF40)
DECLARE_EVENT_SOURCE(CharGen_TeethRollOff, 0x015FA900)
DECLARE_EVENT_SOURCE(CharGen_TeethRollOn, 0x015FA9A0)
DECLARE_EVENT_SOURCE(CharGen_ToggleMarking, 0x015FB580)
DECLARE_EVENT_SOURCE(CharGen_TogglePreviewHabSuit, 0x015FAD60)
//DECLARE_EVENT_SOURCE(CharacterBeginLevelUpEvent, 0x01750070)
//DECLARE_EVENT_SOURCE(CharacterFinishLevelUpEvent, 0x0147DCF0)
DECLARE_EVENT_SOURCE(ClearHUDMessagesEvent, 0x014339E0)
DECLARE_EVENT_SOURCE(ClearQuickContainerEvent, 0x00A81D40)
DECLARE_EVENT_SOURCE(ContainerMenuClosed::Event, 0x0139B270)
DECLARE_EVENT_SOURCE(ContainerMenu_CloseMenu, 0x013FB400)
DECLARE_EVENT_SOURCE(ContainerMenu_HideModel, 0x01E3F870)
DECLARE_EVENT_SOURCE(ContainerMenu_Jettison, 0x01E3F730)
DECLARE_EVENT_SOURCE(ContainerMenu_LoadModel, 0x01E3F910)
DECLARE_EVENT_SOURCE(ContainerMenu_OpenRefuelMenu, 0x01E3F7D0)
DECLARE_EVENT_SOURCE(ContainerMenu_SetMouseOverModel, 0x01E3F690)
DECLARE_EVENT_SOURCE(ContainerMenu_TakeAll, 0x01E3F9B0)
DECLARE_EVENT_SOURCE(ContainerMenu_ToggleEquip, 0x01E3FAF0)
//DECLARE_EVENT_SOURCE(ContainerMenu_TransferAllResources, 0x01E3FA50)
DECLARE_EVENT_SOURCE(ContainerMenu_TransferItem, 0x01E3FB90)
DECLARE_EVENT_SOURCE(ContextStackChangedEvent, 0x02279370)
DECLARE_EVENT_SOURCE(ControlsRemappedEvent, 0x014D3AE0)
DECLARE_EVENT_SOURCE(CraftingMenu_CraftItem, 0x013EADA0)
DECLARE_EVENT_SOURCE(CraftingMenu_ExitBench, 0x013EB020)
DECLARE_EVENT_SOURCE(CraftingMenu_Highlight3D, 0x016B6FD0)
DECLARE_EVENT_SOURCE(CraftingMenu_InstallMod, 0x013EAC60)
DECLARE_EVENT_SOURCE(CraftingMenu_RenameItem, 0x013EA8A0)
DECLARE_EVENT_SOURCE(CraftingMenu_RevertHighlight, 0x016B6F30)
DECLARE_EVENT_SOURCE(CraftingMenu_RevertedModdedItem, 0x013EA940)
DECLARE_EVENT_SOURCE(CraftingMenu_SelectedMod, 0x013EA9E0)
DECLARE_EVENT_SOURCE(CraftingMenu_SelectedModSlot, 0x013EAA80)
DECLARE_EVENT_SOURCE(CraftingMenu_SelectedModdableItem, 0x013EAB20)
DECLARE_EVENT_SOURCE(CraftingMenu_SelectedRecipe, 0x013EAD00)
DECLARE_EVENT_SOURCE(CraftingMenu_SessionSummaryEvent, 0x013EAE40)
DECLARE_EVENT_SOURCE(CraftingMenu_SetInspectControls, 0x013EAF80)
DECLARE_EVENT_SOURCE(CraftingMenu_ToggleTracking, 0x013EAEE0)
DECLARE_EVENT_SOURCE(CraftingMenu_ViewingModdableItem, 0x013EABC0)
//DECLARE_EVENT_SOURCE(CreationUninstalledEvent, 0x01350880)
DECLARE_EVENT_SOURCE(DataMenu_CloseMenu, 0x01606AC0)
DECLARE_EVENT_SOURCE(DataMenu_ClosedForSubMenu, 0x01606B60)
DECLARE_EVENT_SOURCE(DataMenu_Missions, 0x01606D40)
//DECLARE_EVENT_SOURCE(DataMenu_OpenPauseMenu, 0x01606520)
DECLARE_EVENT_SOURCE(DataMenu_PlotToLocation, 0x016065C0)
DECLARE_EVENT_SOURCE(DataMenu_Reopened, 0x01606A20)
DECLARE_EVENT_SOURCE(DataMenu_SelectedAttributesMenu, 0x01606700)
DECLARE_EVENT_SOURCE(DataMenu_SelectedInventoryMenu, 0x016067A0)
DECLARE_EVENT_SOURCE(DataMenu_SelectedMapMenu, 0x01606840)
DECLARE_EVENT_SOURCE(DataMenu_SelectedPowersMenu, 0x01606660)
DECLARE_EVENT_SOURCE(DataMenu_SelectedShipMenu, 0x016068E0)
DECLARE_EVENT_SOURCE(DataMenu_SelectedStatusMenu, 0x01606980)
DECLARE_EVENT_SOURCE(DataMenu_SetMenuForQuickEntry, 0x01606CA0)
DECLARE_EVENT_SOURCE(DataMenu_SetPaperDollActive, 0x01606C00)
//DECLARE_EVENT_SOURCE(DataMenu_StartCloseAnim, 0x013FB180)
DECLARE_EVENT_SOURCE(DataSlateButtons_acceptClicked, 0x01583CD0)
DECLARE_EVENT_SOURCE(DataSlateButtons_cancelClicked, 0x01583C30)
DECLARE_EVENT_SOURCE(DataSlateMenu_playSFX, 0x01583D70)
DECLARE_EVENT_SOURCE(DataSlateMenu_toggleAudio, 0x01583E10)
DECLARE_EVENT_SOURCE(DefaultObjectsReadyEvent::Event, 0x00BBCE50)
//DECLARE_EVENT_SOURCE(DeferredDeleter::QueueStatusEvent, 0x0180A6F0)
DECLARE_EVENT_SOURCE(DialogueMenu_CompleteExit, 0x01535590)
DECLARE_EVENT_SOURCE(DialogueMenu_OnDialogueSelect, 0x01E43FF0)
DECLARE_EVENT_SOURCE(DialogueMenu_OnListVisibilityChange, 0x01E43E10)
DECLARE_EVENT_SOURCE(DialogueMenu_OnPersuasionAutoWin, 0x01E44090)
DECLARE_EVENT_SOURCE(DialogueMenu_OnScriptedDialogueSelect, 0x01E43D70)
DECLARE_EVENT_SOURCE(DialogueMenu_RequestExit, 0x01E43EB0)
DECLARE_EVENT_SOURCE(DialogueMenu_RequestSkipDialogue, 0x01E43F50)
DECLARE_EVENT_SOURCE(DisplayFatigueWarningEvent, 0x01558960)
//DECLARE_EVENT_SOURCE(DocAcceptMenu_Accept, 0x01335B90)
//DECLARE_EVENT_SOURCE(DynNavMeshOpRecord::CompleteEvent, 0x006862D0)
//DECLARE_EVENT_SOURCE(DynamicNavMeshBuildCompleteEvent, 0x003B4240)
DECLARE_EVENT_SOURCE(EndLoadGameEvent, 0x00354E50)
//DECLARE_EVENT_SOURCE(ExitVehicleEvent, 0x0132E070)
DECLARE_EVENT_SOURCE(ExperienceMeterDisplayData, 0x01557C80)
DECLARE_EVENT_SOURCE(FaderMenuDisplayState, 0x01E45970)
DECLARE_EVENT_SOURCE(FavoritesMenu_AssignQuickkey, 0x01E4E360)
DECLARE_EVENT_SOURCE(FavoritesMenu_UseQuickkey, 0x01E4E2C0)
//DECLARE_EVENT_SOURCE(GameActiveChangeEvent, 0x01372540)
//DECLARE_EVENT_SOURCE(GameResetEvent, 0x01830280)
DECLARE_EVENT_SOURCE(GameStalledEvent, 0x027771E0)
DECLARE_EVENT_SOURCE(GlobalFunc_CloseAllMenus, 0x0154CB50)
DECLARE_EVENT_SOURCE(GlobalFunc_CloseMenu, 0x0154CBF0)
DECLARE_EVENT_SOURCE(GlobalFunc_PlayMenuSound, 0x0154CDD0)
DECLARE_EVENT_SOURCE(GlobalFunc_StartGameRender, 0x0154CD30)
DECLARE_EVENT_SOURCE(GlobalFunc_UserEvent, 0x0154CC90)
DECLARE_EVENT_SOURCE(HUDActivityIncreaseEvent, 0x002AF780)
DECLARE_EVENT_SOURCE(HUDCrewBuffMessageEvent, 0x013E0CE0)
DECLARE_EVENT_SOURCE(HUDModeEvent, 0x0140F280)
DECLARE_EVENT_SOURCE(HUDNotificationEvent, 0x01565E30)
DECLARE_EVENT_SOURCE(HUDNotification_MissionActiveWidgetUpdate, 0x01565D90)
DECLARE_EVENT_SOURCE(HUDNotification_OpenDataMenu, 0x01565C50)
DECLARE_EVENT_SOURCE(HUDNotification_OpenMissionMenu, 0x01565BB0)
DECLARE_EVENT_SOURCE(HUDNotification_SetMissionActive, 0x01565CF0)
DECLARE_EVENT_SOURCE(HUDRolloverActivationButtonEvent, 0x0140F140)
DECLARE_EVENT_SOURCE(HUDRolloverActivationQCItemPressEvent, 0x0140F0A0)
DECLARE_EVENT_SOURCE(HUDWeaponWorldFOVMultChangedEvent, 0x0084CC10)
DECLARE_EVENT_SOURCE(HangarShipSelection_ChangeSystemDisplay, 0x0139B450)
DECLARE_EVENT_SOURCE(HangarShipSelection_RepairShip, 0x0139B310)
DECLARE_EVENT_SOURCE(HangarShipSelection_UpgradeSystem, 0x0139B3B0)
DECLARE_EVENT_SOURCE(HomeShipSetEvent, 0x012F6410)
DECLARE_EVENT_SOURCE(ImageFixtureEvent_RequestImage, 0x024DE500)
DECLARE_EVENT_SOURCE(ImageFixtureEvent_UnregisterImage, 0x024DE460)
DECLARE_EVENT_SOURCE(InventoryItemEvent::Event, 0x012BDF60)
DECLARE_EVENT_SOURCE(InventoryMenu_Change3DView, 0x013FB360)
DECLARE_EVENT_SOURCE(InventoryMenu_DropItem, 0x0158B550)
DECLARE_EVENT_SOURCE(InventoryMenu_HideModel, 0x0158B690)
DECLARE_EVENT_SOURCE(InventoryMenu_LoadModel, 0x0158B730)
DECLARE_EVENT_SOURCE(InventoryMenu_OnEnterCategory, 0x0158B2D0)
DECLARE_EVENT_SOURCE(InventoryMenu_OpenCargoHold, 0x0158B4B0)
DECLARE_EVENT_SOURCE(InventoryMenu_PaperDollTryOn, 0x013FB2C0)
DECLARE_EVENT_SOURCE(InventoryMenu_ResetPaperDollInv, 0x013FB220)
DECLARE_EVENT_SOURCE(InventoryMenu_SelectItem, 0x0158B5F0)
DECLARE_EVENT_SOURCE(InventoryMenu_SetMouseOverModel, 0x0158B370)
//DECLARE_EVENT_SOURCE(InventoryMenu_StartCloseAnim, 0x0158B230)
DECLARE_EVENT_SOURCE(InventoryMenu_ToggleFavorite, 0x0158B410)
DECLARE_EVENT_SOURCE(InventoryMenu_ToggleHelmet, 0x0147DE30)
DECLARE_EVENT_SOURCE(InventoryMenu_ToggleSuit, 0x0147DD90)
DECLARE_EVENT_SOURCE(Inventory_SetSort, 0x0140F000)
DECLARE_EVENT_SOURCE(LevelIncrease::Event, 0x019C8870)
DECLARE_EVENT_SOURCE(LevelUp_AnimFinished, 0x01557BE0)
DECLARE_EVENT_SOURCE(LevelUp_OnWidgetShown, 0x01557A00)
DECLARE_EVENT_SOURCE(LevelUp_OpenDataMenu, 0x01557AA0)
DECLARE_EVENT_SOURCE(LevelUp_ShowSkills, 0x01557B40)
DECLARE_EVENT_SOURCE(LoadScreenEndEvent, 0x0057E550)
DECLARE_EVENT_SOURCE(LoadScreenStartEvent, 0x0057E5F0)
DECLARE_EVENT_SOURCE(LoadingMenu_RefreshText, 0x01E54480)
DECLARE_EVENT_SOURCE(LocationTextWidget_FinishedQueue, 0x01557960)
DECLARE_EVENT_SOURCE(MainMenu_ActionCanceled, 0x01E5BEA0)
DECLARE_EVENT_SOURCE(MainMenu_ActionConfirmed, 0x01E5BF40)
DECLARE_EVENT_SOURCE(MainMenu_ConfirmLoad, 0x01E5BD60)
DECLARE_EVENT_SOURCE(MainMenu_DeleteSave, 0x01E5BCC0)
//DECLARE_EVENT_SOURCE(MainMenu_LegalScreenComplete, 0x01E5BAE0)
DECLARE_EVENT_SOURCE(MainMenu_SetCharacter, 0x01E5BC20)
DECLARE_EVENT_SOURCE(MainMenu_StartAction, 0x01E5BFE0)
DECLARE_EVENT_SOURCE(MainMenu_StartLoad, 0x01E5BE00)
DECLARE_EVENT_SOURCE(MainMenu_UploadSave, 0x01E5BB80)
DECLARE_EVENT_SOURCE(MessageBoxMenu_OnBackOut, 0x01E642E0)
DECLARE_EVENT_SOURCE(MessageBoxMenu_OnButtonPress, 0x01E64420)
DECLARE_EVENT_SOURCE(MessageBoxMenu_OnScriptedButtonPress, 0x01E64380)
DECLARE_EVENT_SOURCE(MissionBoard_MissionEntryChanged, 0x01590B80)
DECLARE_EVENT_SOURCE(MissionBoard_MissionEntryPressed, 0x01590C20)
DECLARE_EVENT_SOURCE(MissionMenu_ClearState, 0x0157EC60)
DECLARE_EVENT_SOURCE(MissionMenu_PlotToLocation, 0x0157EF80)
DECLARE_EVENT_SOURCE(MissionMenu_RejectQuest, 0x0157EE40)
DECLARE_EVENT_SOURCE(MissionMenu_SaveCategoryIndex, 0x0157ED00)
DECLARE_EVENT_SOURCE(MissionMenu_SaveOpenedId, 0x0157EDA0)
DECLARE_EVENT_SOURCE(MissionMenu_ShowItemLocation, 0x0157F020)
//DECLARE_EVENT_SOURCE(MissionMenu_ToggleQTDisplay, 0x0157EBC0)
DECLARE_EVENT_SOURCE(MissionMenu_ToggleTrackingQuest, 0x0157EEE0)
DECLARE_EVENT_SOURCE(ModelReferenceEffectEvents::ReferenceEffectFinished, 0x0170ADF0)
DECLARE_EVENT_SOURCE(MonocleMenu_Bioscan, 0x0159BAB0)
DECLARE_EVENT_SOURCE(MonocleMenu_FastTravel, 0x0159B5B0)
DECLARE_EVENT_SOURCE(MonocleMenu_Harvest, 0x0159BB50)
DECLARE_EVENT_SOURCE(MonocleMenu_Initialize, 0x0159BD30)
//DECLARE_EVENT_SOURCE(MonocleMenu_OpenDoor, 0x0159B470)
DECLARE_EVENT_SOURCE(MonocleMenu_Outpost, 0x0159BBF0)
DECLARE_EVENT_SOURCE(MonocleMenu_PhotoMode, 0x0159B8D0)
DECLARE_EVENT_SOURCE(MonocleMenu_Shutdown, 0x0159BC90)
DECLARE_EVENT_SOURCE(MonocleMenu_SocialSpell, 0x0159BA10)
DECLARE_EVENT_SOURCE(MonocleMenu_StartContainerView, 0x0159B6F0)
DECLARE_EVENT_SOURCE(MonocleMenu_StopContainerView, 0x0159B650)
DECLARE_EVENT_SOURCE(MonocleMenu_SurfaceMap, 0x0159B970)
DECLARE_EVENT_SOURCE(MonocleMenu_UseListScrollControls, 0x0159B510)
DECLARE_EVENT_SOURCE(MonocleMenu_ZoomIn, 0x0159B830)
DECLARE_EVENT_SOURCE(MonocleMenu_ZoomOut, 0x0159B790)
DECLARE_EVENT_SOURCE(OpenContainerMenuEventData, 0x0140F320)
DECLARE_EVENT_SOURCE(OpenContainerMenuFromListenerEvent, 0x0140F1E0)
DECLARE_EVENT_SOURCE(PauseMenu_ActionCanceled, 0x0160F600)
DECLARE_EVENT_SOURCE(PauseMenu_ConfirmAction, 0x0160F6A0)
DECLARE_EVENT_SOURCE(PauseMenu_ConfirmLoad, 0x0160F4C0)
DECLARE_EVENT_SOURCE(PauseMenu_ConfirmSave, 0x0160F2E0)
DECLARE_EVENT_SOURCE(PauseMenu_DeleteSave, 0x0160F420)
DECLARE_EVENT_SOURCE(PauseMenu_QuitToDesktop, 0x0160F240)
DECLARE_EVENT_SOURCE(PauseMenu_SetCharacter, 0x0160F380)
DECLARE_EVENT_SOURCE(PauseMenu_StartAction, 0x0160F740)
DECLARE_EVENT_SOURCE(PauseMenu_StartLoad, 0x0160F560)
DECLARE_EVENT_SOURCE(PauseMenu_UploadSave, 0x0160F1A0)
DECLARE_EVENT_SOURCE(PerkChanged::Event, 0x00C909E0)
DECLARE_EVENT_SOURCE(PhotoGallery_DeletePhoto, 0x01383920)
DECLARE_EVENT_SOURCE(PhotoMode_InitializeCategory, 0x015A21B0)
//DECLARE_EVENT_SOURCE(PhotoMode_RefineSetting, 0x015A1D50)
DECLARE_EVENT_SOURCE(PhotoMode_ResetToDefaults, 0x015A2110)
DECLARE_EVENT_SOURCE(PhotoMode_SliderChanged, 0x015A2070)
DECLARE_EVENT_SOURCE(PhotoMode_StepperChanged, 0x015A1FD0)
DECLARE_EVENT_SOURCE(PhotoMode_TakeSnapshot, 0x015A1F30)
DECLARE_EVENT_SOURCE(PhotoMode_ToggleHelmet, 0x015A1DF0)
DECLARE_EVENT_SOURCE(PhotoMode_ToggleUI, 0x015A1E90)
DECLARE_EVENT_SOURCE(PickRefStateChangedEvent, 0x005EBF00)
DECLARE_EVENT_SOURCE(PickRefUpdateEvent, 0x00F3A120)
DECLARE_EVENT_SOURCE(PickpocketMenu_OnItemSelect, 0x015A67F0)
DECLARE_EVENT_SOURCE(PlayBink_CloseMenu, 0x01610820)
DECLARE_EVENT_SOURCE(PlayerAutoAimActorEvent, 0x019FC9B0)
DECLARE_EVENT_SOURCE(PlayerCharacterQuestEvent::Event, 0x00CFA580)
DECLARE_EVENT_SOURCE(PlayerControls::PlayerIronSightsEndEvent, 0x012AD6A0)
DECLARE_EVENT_SOURCE(PlayerControls::PlayerIronSightsStartEvent, 0x012AD740)
DECLARE_EVENT_SOURCE(PlayerControls::PlayerJumpPressEvent, 0x012A5900)
DECLARE_EVENT_SOURCE(PlayerControls::PlayerJumpReleaseEvent, 0x012A5860)
DECLARE_EVENT_SOURCE(PlayerControls::PlayerZeroGSprintJustPressedEvent, 0x012A7950)
DECLARE_EVENT_SOURCE(PlayerControls::PlayerZeroGSprintReleasedEvent, 0x012A78B0)
DECLARE_EVENT_SOURCE(PlayerCrosshairModeEvent, 0x0142AAC0)
DECLARE_EVENT_SOURCE(PlayerDetectionLevelChangeEvent, 0x01438050)
//DECLARE_EVENT_SOURCE(PlayerFastTravelFromVehicleEvent, 0x0211EFB0)
DECLARE_EVENT_SOURCE(PlayerInCombatChangeEvent, 0x01A03890)
DECLARE_EVENT_SOURCE(PlayerSetWeaponStateEvent, 0x01569210)
DECLARE_EVENT_SOURCE(PlayerSneakingChangeEvent, 0x012A7450)
DECLARE_EVENT_SOURCE(PlayerUpdateEvent, 0x0147DED0)
DECLARE_EVENT_SOURCE(PowersMenu_ActivateEssence, 0x01388C40)
DECLARE_EVENT_SOURCE(PowersMenu_EquipPower, 0x01388D80)
DECLARE_EVENT_SOURCE(PowersMenu_FavoritePower, 0x01388CE0)
//DECLARE_EVENT_SOURCE(ProjectileBeginUpdateEvent, 0x01AC2CB0)
//DECLARE_EVENT_SOURCE(ProjectileKillEvent, 0x01AC2CB0)
//DECLARE_EVENT_SOURCE(QueuedReferenceFinishedEvent, 0x0055FBE0)
DECLARE_EVENT_SOURCE(ReferenceCellLoadedTemps, 0x00917360)
DECLARE_EVENT_SOURCE(ReferenceQueuedEvent, 0x00567300)
//DECLARE_EVENT_SOURCE(RefreshDataMenuForSkillsChangeEvent, 0x013FB0E0)
DECLARE_EVENT_SOURCE(Refuel_Accept, 0x015C7F50)
DECLARE_EVENT_SOURCE(Refuel_Cancel, 0x015C7EB0)
DECLARE_EVENT_SOURCE(Research::ResearchProgressEvent, 0x01790920)
DECLARE_EVENT_SOURCE(ResearchMenu_AddMaterial, 0x015B1940)
DECLARE_EVENT_SOURCE(ResearchMenu_CategorySelected, 0x015B1B20)
DECLARE_EVENT_SOURCE(ResearchMenu_ExitMenu, 0x015B18A0)
DECLARE_EVENT_SOURCE(ResearchMenu_HideModel, 0x015B1800)
DECLARE_EVENT_SOURCE(ResearchMenu_PreviewProject, 0x015B1A80)
DECLARE_EVENT_SOURCE(ResearchMenu_ProjectViewed, 0x015B19E0)
DECLARE_EVENT_SOURCE(ResearchMenu_SetInspectControls, 0x015B1760)
DECLARE_EVENT_SOURCE(ResearchMenu_ToggleTrackingProject, 0x015B16C0)
DECLARE_EVENT_SOURCE(ResetHistoryDataEvent, 0x00834580)
//DECLARE_EVENT_SOURCE(ResourceServerLogDumped, 0x02774EF0)
DECLARE_EVENT_SOURCE(Reticle_OnLongAnimFinished, 0x016186F0)
DECLARE_EVENT_SOURCE(RuntimeComponentDBFactory::ReferenceAttach, 0x003DFBB0)
DECLARE_EVENT_SOURCE(RuntimeComponentDBFactory::ReferenceCleared3d, 0x006732B0)
DECLARE_EVENT_SOURCE(RuntimeComponentDBFactory::ReferenceDestroy, 0x00673170)
DECLARE_EVENT_SOURCE(RuntimeComponentDBFactory::ReferenceDetach, 0x003DFB10)
DECLARE_EVENT_SOURCE(RuntimeComponentDBFactory::ReferenceInit, 0x00673210)
DECLARE_EVENT_SOURCE(RuntimeComponentDBFactory::ReferenceRecycle, 0x006730D0)
DECLARE_EVENT_SOURCE(RuntimeComponentDBFactory::ReferenceSet3d, 0x00673350)
DECLARE_EVENT_SOURCE(RuntimeComponentDBFactory::Release3DRelatedData, 0x00673E70)
DECLARE_EVENT_SOURCE(SaveLoadEvent, 0x012D7060)
DECLARE_EVENT_SOURCE(SaveLoadMessageStringEvent, 0x0155D8D0)
DECLARE_EVENT_SOURCE(SecurityMenu_BackOutKey, 0x015C09D0)
DECLARE_EVENT_SOURCE(SecurityMenu_CloseMenu, 0x015C0B10)
DECLARE_EVENT_SOURCE(SecurityMenu_ConfirmExit, 0x015C07F0)
DECLARE_EVENT_SOURCE(SecurityMenu_EliminateUnusedKeys, 0x015C0890)
DECLARE_EVENT_SOURCE(SecurityMenu_GetRingHint, 0x015C0930)
DECLARE_EVENT_SOURCE(SecurityMenu_SelectNewKey, 0x015C0750)
DECLARE_EVENT_SOURCE(SecurityMenu_TryUseKey, 0x015C0A70)
DECLARE_EVENT_SOURCE(SettingsPanel_CheckBoxChanged, 0x014D6950)
DECLARE_EVENT_SOURCE(SettingsPanel_ClearBinding, 0x014D66D0)
//DECLARE_EVENT_SOURCE(SettingsPanel_LinkClicked, 0x014D64F0)
DECLARE_EVENT_SOURCE(SettingsPanel_OpenCategory, 0x014D6770)
DECLARE_EVENT_SOURCE(SettingsPanel_OpenSettings, 0x014D6810)
DECLARE_EVENT_SOURCE(SettingsPanel_RemapConfirmed, 0x014D6630)
DECLARE_EVENT_SOURCE(SettingsPanel_RemapMode, 0x014D6C70)
DECLARE_EVENT_SOURCE(SettingsPanel_ResetToDefaults, 0x014D68B0)
DECLARE_EVENT_SOURCE(SettingsPanel_SaveControls, 0x014D6BD0)
DECLARE_EVENT_SOURCE(SettingsPanel_SaveSettings, 0x014D6B30)
DECLARE_EVENT_SOURCE(SettingsPanel_SliderChanged, 0x014D6A90)
DECLARE_EVENT_SOURCE(SettingsPanel_StepperChanged, 0x014D69F0)
DECLARE_EVENT_SOURCE(SettingsPanel_ValidateControls, 0x014D6590)
//DECLARE_EVENT_SOURCE(SettingsSavedEvent, 0x014D6380)
DECLARE_EVENT_SOURCE(ShipBuilder_CloseAllMenus, 0x004E2320)
DECLARE_EVENT_SOURCE(ShipCameraStateToggled, 0x00F8E800)
DECLARE_EVENT_SOURCE(ShipCrewAssignMenu_Assign, 0x015C6670)
DECLARE_EVENT_SOURCE(ShipCrewAssignMenu_Unassign, 0x015C65D0)
DECLARE_EVENT_SOURCE(ShipCrewMenu_Close, 0x0139B1D0)
DECLARE_EVENT_SOURCE(ShipCrewMenu_OpenAssignMenu, 0x014E15D0)
DECLARE_EVENT_SOURCE(ShipCrewMenu_SetSort, 0x014E1670)
DECLARE_EVENT_SOURCE(ShipCrewMenu_ViewedItem, 0x015C6720)
DECLARE_EVENT_SOURCE(ShipEditor_ChangeModuleCategory, 0x004B2620)
DECLARE_EVENT_SOURCE(ShipEditor_OnColorPickerControlChanged, 0x0038F960)
DECLARE_EVENT_SOURCE(ShipEditor_OnColorPickerTabChanged, 0x0038FAA0)
DECLARE_EVENT_SOURCE(ShipEditor_OnColorSliderMouseInput, 0x0038F8C0)
DECLARE_EVENT_SOURCE(ShipEditor_OnExitConfirmCancel, 0x004A0420)
DECLARE_EVENT_SOURCE(ShipEditor_OnExitConfirmExit, 0x004A04C0)
DECLARE_EVENT_SOURCE(ShipEditor_OnExitConfirmSaveAndExit, 0x004A0380)
DECLARE_EVENT_SOURCE(ShipEditor_OnFlightCheckTabChanged, 0x004A6530)
DECLARE_EVENT_SOURCE(ShipEditor_OnHintButtonActivated, 0x004E2280)
DECLARE_EVENT_SOURCE(ShipEditor_OnRecentColorSwatchClicked, 0x0038FA00)
DECLARE_EVENT_SOURCE(ShipEditor_OnRenameEndEditText, 0x004AC340)
DECLARE_EVENT_SOURCE(ShipEditor_OnRenameInputCancelled, 0x004AC3E0)
DECLARE_EVENT_SOURCE(ShipEditor_OnWeaponGroupChanged, 0x004A6490)
DECLARE_EVENT_SOURCE(ShipEditor_PreviewShipPart, 0x004B26C0)
DECLARE_EVENT_SOURCE(ShipEditor_PreviewUpgrade, 0x00389800)
DECLARE_EVENT_SOURCE(ShipEditor_RemoveAll3D, 0x004E21E0)
DECLARE_EVENT_SOURCE(ShipEditor_SelectedShipPart, 0x004B2760)
DECLARE_EVENT_SOURCE(ShipEditor_SelectedUpgrade, 0x00389760)
DECLARE_EVENT_SOURCE(ShipEditor_SystemSelected, 0x00382B80)
DECLARE_EVENT_SOURCE(ShipHudQuickContainer_TransferItem, 0x01618830)
DECLARE_EVENT_SOURCE(ShipHudQuickContainer_TransferMenu, 0x0150F2C0)
DECLARE_EVENT_SOURCE(ShipHud_AbortJump, 0x01618790)
DECLARE_EVENT_SOURCE(ShipHud_Activate, 0x0150F360)
DECLARE_EVENT_SOURCE(ShipHud_BodyViewMarkerDimensions, 0x0150EB40)
DECLARE_EVENT_SOURCE(ShipHud_ChangeComponentSelection, 0x0150F680)
DECLARE_EVENT_SOURCE(ShipHud_CloseMenu, 0x0150F7C0)
DECLARE_EVENT_SOURCE(ShipHud_Deselect, 0x0150F400)
DECLARE_EVENT_SOURCE(ShipHud_DockRequested, 0x016188D0)
DECLARE_EVENT_SOURCE(ShipHud_FarTravel, 0x0150EA00)
DECLARE_EVENT_SOURCE(ShipHud_HailAccepted, 0x0150EFA0)
DECLARE_EVENT_SOURCE(ShipHud_HailCancelled, 0x0150F040)
DECLARE_EVENT_SOURCE(ShipHud_HailShip, 0x01618970)
DECLARE_EVENT_SOURCE(ShipHud_JumpToQuestMarker, 0x0150EE60)
DECLARE_EVENT_SOURCE(ShipHud_Land, 0x0150F220)
DECLARE_EVENT_SOURCE(ShipHud_LandingMarkerMap, 0x0150F0E0)
DECLARE_EVENT_SOURCE(ShipHud_Map, 0x0150F180)
DECLARE_EVENT_SOURCE(ShipHud_OnMonocleToggle, 0x0150EF00)
DECLARE_EVENT_SOURCE(ShipHud_OpenPhotoMode, 0x0150EBE0)
DECLARE_EVENT_SOURCE(ShipHud_Repair, 0x0150EAA0)
DECLARE_EVENT_SOURCE(ShipHud_SetTargetMode, 0x0150EDC0)
DECLARE_EVENT_SOURCE(ShipHud_Target, 0x0150F4A0)
DECLARE_EVENT_SOURCE(ShipHud_TargetShipSystem, 0x0150ED20)
DECLARE_EVENT_SOURCE(ShipHud_UntargetShipSystem, 0x0150EC80)
DECLARE_EVENT_SOURCE(ShipHud_UpdateComponentPower, 0x0150F720)
DECLARE_EVENT_SOURCE(ShipHud_UpdateTargetPanelRect, 0x01618310)
DECLARE_EVENT_SOURCE(ShowCustomWatchAlert, 0x0143DDC0)
DECLARE_EVENT_SOURCE(ShowHUDMessageEvent, 0x01433A80)
DECLARE_EVENT_SOURCE(ShowLongShipBootup, 0x0150F5E0)
DECLARE_EVENT_SOURCE(ShowingQuestMarketTextEvent, 0x01427620)
DECLARE_EVENT_SOURCE(SkillsMenu_Accept, 0x015CED60)
DECLARE_EVENT_SOURCE(SkillsMenu_AddPatch, 0x015CECC0)
DECLARE_EVENT_SOURCE(SkillsMenu_Cancel, 0x015CEE00)
DECLARE_EVENT_SOURCE(SkillsMenu_ChangeCursorVisibility, 0x015CEC20)
DECLARE_EVENT_SOURCE(SkillsMenu_SaveLastCategory, 0x015CEB80)
DECLARE_EVENT_SOURCE(SleepWaitMenu_InterruptRest, 0x01E687D0)
DECLARE_EVENT_SOURCE(SleepWaitMenu_StartRest, 0x01E68870)
DECLARE_EVENT_SOURCE(SnapTemplateUtils::SnapReplaceEvent, 0x009306B0)
DECLARE_EVENT_SOURCE(Spaceship::BoughtEvent, 0x020E67D0)
DECLARE_EVENT_SOURCE(Spaceship::ContrabandScanWarningEvent, 0x020E6FF0)
DECLARE_EVENT_SOURCE(Spaceship::DockEvent, 0x020E6910)
DECLARE_EVENT_SOURCE(Spaceship::DynamicNavmeshCompleted, 0x020E6CD0)
DECLARE_EVENT_SOURCE(Spaceship::FarTravelEvent, 0x020E6EB0)
DECLARE_EVENT_SOURCE(Spaceship::GravJumpEvent, 0x01618650)
DECLARE_EVENT_SOURCE(Spaceship::LandedSetEvent, 0x016185B0)
DECLARE_EVENT_SOURCE(Spaceship::LandingEvent, 0x020E6D70)
DECLARE_EVENT_SOURCE(Spaceship::PlanetScanEvent, 0x020E6F50)
DECLARE_EVENT_SOURCE(Spaceship::PlayerMovementOutputEvent, 0x0150F540)
DECLARE_EVENT_SOURCE(Spaceship::RampDownEvent, 0x020E6550)
DECLARE_EVENT_SOURCE(Spaceship::RefueledEvent, 0x020E6870)
DECLARE_EVENT_SOURCE(Spaceship::RegisteredEvent, 0x020E6690)
DECLARE_EVENT_SOURCE(Spaceship::ShieldEvent, 0x020E64B0)
DECLARE_EVENT_SOURCE(Spaceship::ShipAddedEvent, 0x020E65F0)
DECLARE_EVENT_SOURCE(Spaceship::ShipCollisionEvent, 0x020E6410)
DECLARE_EVENT_SOURCE(Spaceship::ShipCustomizedEvent, 0x020E62D0)
DECLARE_EVENT_SOURCE(Spaceship::SoldEvent, 0x020E6730)
DECLARE_EVENT_SOURCE(Spaceship::SystemDamagedEvent, 0x020E6AF0)
DECLARE_EVENT_SOURCE(Spaceship::SystemPowerAllocationEvent, 0x020E6B90)
DECLARE_EVENT_SOURCE(Spaceship::SystemPowerChangeEvent, 0x020E6C30)
DECLARE_EVENT_SOURCE(Spaceship::SystemRepairedBIEvent, 0x020E69B0)
DECLARE_EVENT_SOURCE(Spaceship::SystemRepairedEvent, 0x020E6A50)
DECLARE_EVENT_SOURCE(Spaceship::TakeDamagEvent, 0x020E6370)
DECLARE_EVENT_SOURCE(Spaceship::TakeOffEvent, 0x020E6E10)
DECLARE_EVENT_SOURCE(SpaceshipBIEvents::ShipPowerAllocationBIEventSent, 0x01736EC0)
DECLARE_EVENT_SOURCE(SpaceshipWeaponBinding::SpaceshipWeaponBindingChangedEvent, 0x012F9BE0)
DECLARE_EVENT_SOURCE(StarMap::PlanetTraitKnownEvent, 0x007B3000)
DECLARE_EVENT_SOURCE(StarMapMenu_ExecuteRoute, 0x01663220)
DECLARE_EVENT_SOURCE(StarMapMenu_Galaxy_FocusSystem, 0x01652A20)
DECLARE_EVENT_SOURCE(StarMapMenu_LandingInputInProgress, 0x016331D0)
DECLARE_EVENT_SOURCE(StarMapMenu_MarkerGroupContainerVisibilityChanged, 0x01632FF0)
DECLARE_EVENT_SOURCE(StarMapMenu_MarkerGroupEntryClicked, 0x01632F50)
DECLARE_EVENT_SOURCE(StarMapMenu_MarkerGroupEntryHoverChanged, 0x01632EB0)
DECLARE_EVENT_SOURCE(StarMapMenu_OnCancel, 0x01662FA0)
DECLARE_EVENT_SOURCE(StarMapMenu_OnClearRoute, 0x016632C0)
DECLARE_EVENT_SOURCE(StarMapMenu_OnExitStarMap, 0x016630E0)
DECLARE_EVENT_SOURCE(StarMapMenu_OnGalaxyViewInitialized, 0x01652980)
DECLARE_EVENT_SOURCE(StarMapMenu_OnHintButtonClicked, 0x01663180)
DECLARE_EVENT_SOURCE(StarMapMenu_OnOutpostEntrySelected, 0x01663040)
DECLARE_EVENT_SOURCE(StarMapMenu_QuickSelectChange, 0x01644D60)
DECLARE_EVENT_SOURCE(StarMapMenu_ReadyToClose, 0x01662F00)
DECLARE_EVENT_SOURCE(StarMapMenu_ScanPlanet, 0x01633270)
DECLARE_EVENT_SOURCE(StarMapMenu_SelectedLandingSite, 0x01633090)
DECLARE_EVENT_SOURCE(StarMapMenu_SelectedLandingSiteFailed, 0x016324F0)
DECLARE_EVENT_SOURCE(StarMapMenu_ShowRealCursor, 0x01633130)
DECLARE_EVENT_SOURCE(StartLoadGameEvent, 0x00354EF0)
DECLARE_EVENT_SOURCE(StartOutpostFromListenerEvent, 0x01405E00)
//DECLARE_EVENT_SOURCE(SurfaceMapMenu_EnablePointCloud, 0x01682090)
DECLARE_EVENT_SOURCE(SurfaceMapMenu_MarkerClicked, 0x01682530)
DECLARE_EVENT_SOURCE(SurfaceMapMenu_TryPlaceCustomMarker, 0x01682490)
DECLARE_EVENT_SOURCE(TESCellCriticalRefsAttachedEvent, 0x005762B0)
DECLARE_EVENT_SOURCE(TESCellFullyLoadedEvent, 0x005762B0)
DECLARE_EVENT_SOURCE(TESCellReference3DAttachEvent, 0x00461250)
//DECLARE_EVENT_SOURCE(TESFilesCompiledEvent, 0x005A6830)
//DECLARE_EVENT_SOURCE(TESObjectREFRDuplicate::Event, 0x00B611F0)
DECLARE_EVENT_SOURCE(TESOpenCloseEvent, 0x01810AE0)
DECLARE_EVENT_SOURCE(TESQuestEvent::Event, 0x00CFA580)
DECLARE_EVENT_SOURCE(TESQuestRewardEvent, 0x00849980)
DECLARE_EVENT_SOURCE(TESSceneEvent, 0x00CA15D0)
DECLARE_EVENT_SOURCE(TESUniqueIDChangeEvent, 0x00B529C0)
DECLARE_EVENT_SOURCE(TakeoffMenu_CloseMenu, 0x016183D0)
DECLARE_EVENT_SOURCE(TakeoffMenu_ExitShip, 0x01618470)
DECLARE_EVENT_SOURCE(TakeoffMenu_Launch, 0x01618510)
DECLARE_EVENT_SOURCE(TargetHitEvent, 0x0142ACA0)
DECLARE_EVENT_SOURCE(TerminalMenu_CancelEvent, 0x0169E090)
DECLARE_EVENT_SOURCE(Terminal_CloseAllViews, 0x0169DE10)
DECLARE_EVENT_SOURCE(Terminal_CloseTopView, 0x0169DEB0)
DECLARE_EVENT_SOURCE(Terminal_CloseView, 0x0169DF50)
DECLARE_EVENT_SOURCE(Terminal_MenuItemClick, 0x0169DFF0)
DECLARE_EVENT_SOURCE(TestMenu_DoAction, 0x016A7960)
DECLARE_EVENT_SOURCE(TestMenu_ExitMenu, 0x016A7820)
DECLARE_EVENT_SOURCE(TestMenu_ShowImages, 0x016A7A00)
DECLARE_EVENT_SOURCE(TestMenu_ShowResources, 0x016A7AA0)
DECLARE_EVENT_SOURCE(TestMenu_TestAll, 0x016A78C0)
DECLARE_EVENT_SOURCE(TextInputMenu_EndEditText, 0x016B4CC0)
DECLARE_EVENT_SOURCE(TextInputMenu_InputCanceled, 0x016B4E00)
DECLARE_EVENT_SOURCE(TextInputMenu_StartEditText, 0x016B4D60)
//DECLARE_EVENT_SOURCE(TitleSequenceMenu_StartMusic, 0x01E6B910)
//DECLARE_EVENT_SOURCE(UGCServicesStatusChangeEvent, 0x01E5BA40)
DECLARE_EVENT_SOURCE(UIMenuChargenMenuDisablePaperdoll, 0x015FA180)
DECLARE_EVENT_SOURCE(UnlockedTerminalElementEvent, 0x015C06B0)
DECLARE_EVENT_SOURCE(UpdateActivateListenerEvent, 0x01403A30)
DECLARE_EVENT_SOURCE(UpdateSceneRectEvent, 0x024D7EA0)
//DECLARE_EVENT_SOURCE(VehicleDriverEnterExitEvent, 0x0211F050)
DECLARE_EVENT_SOURCE(WeaponGroupAssignmentMenu_ChangeWeaponAssignment, 0x0047BAD0)
DECLARE_EVENT_SOURCE(WeaponGroupAssignmentMenu_OnHintButtonActivated, 0x0047BB70)
DECLARE_EVENT_SOURCE(Workshop::CargoLinkAddedEvent, 0x00F3A9E0)
DECLARE_EVENT_SOURCE(Workshop::CargoLinkTargetChangedEvent, 0x00F3A260)
DECLARE_EVENT_SOURCE(Workshop::EnterOutpostBeaconModeEvent, 0x00F3A300)
DECLARE_EVENT_SOURCE(Workshop::ItemGrabbedEvent, 0x00F3A6C0)
DECLARE_EVENT_SOURCE(Workshop::ItemMovedEvent, 0x00F39EA0)
DECLARE_EVENT_SOURCE(Workshop::ItemPlacedEvent, 0x00F3A580)
DECLARE_EVENT_SOURCE(Workshop::ItemProducedEvent, 0x00F3A760)
DECLARE_EVENT_SOURCE(Workshop::ItemRemovedEvent, 0x00F3A620)
DECLARE_EVENT_SOURCE(Workshop::ItemRepairedEvent, 0x00F39E00)
DECLARE_EVENT_SOURCE(Workshop::ItemScrappedEvent, 0x00F3A940)
DECLARE_EVENT_SOURCE(Workshop::OutpostNameChangedEvent, 0x00F3A1C0)
DECLARE_EVENT_SOURCE(Workshop::OutpostPlacedEvent, 0x00F3A3A0)
DECLARE_EVENT_SOURCE(Workshop::PlacementStatusEvent, 0x00F3A080)
DECLARE_EVENT_SOURCE(Workshop::PowerOffEvent, 0x00F3A8A0)
DECLARE_EVENT_SOURCE(Workshop::PowerOnEvent, 0x00F3A800)
DECLARE_EVENT_SOURCE(Workshop::SnapBehaviorCycledEvent, 0x00F3ABC0)
DECLARE_EVENT_SOURCE(Workshop::WorkshopFlyCameraEvent, 0x00F39F40)
DECLARE_EVENT_SOURCE(Workshop::WorkshopItemPlacedEvent, 0x00F3A4E0)
DECLARE_EVENT_SOURCE(Workshop::WorkshopModeEvent, 0x00F39FE0)
//DECLARE_EVENT_SOURCE(Workshop::WorkshopObjectModifiedBIEvent, 0x00F3AC60)
DECLARE_EVENT_SOURCE(Workshop::WorkshopOutputLinkEvent, 0x00F3A440)
DECLARE_EVENT_SOURCE(Workshop::WorkshopStatsChangedEvent, 0x00F3AA80)
DECLARE_EVENT_SOURCE(Workshop::WorkshopUpdateStatsEvent, 0x00F3AB20)
DECLARE_EVENT_SOURCE(WorkshopActionButton_HoldFinished, 0x016DD280)
DECLARE_EVENT_SOURCE(WorkshopActionButton_HoldStopped, 0x016DD1E0)
DECLARE_EVENT_SOURCE(WorkshopBuilderMenu_ChangeBuildItem, 0x016B8B80)
DECLARE_EVENT_SOURCE(WorkshopBuilderMenu_SelectedItem, 0x016B8AE0)
DECLARE_EVENT_SOURCE(WorkshopBuilderMenu_ToggleTracking, 0x016B8A40)
DECLARE_EVENT_SOURCE(WorkshopColorMode_ApplyColors, 0x013DEE80)
DECLARE_EVENT_SOURCE(WorkshopColorMode_SelectedTab, 0x013DEDE0)
DECLARE_EVENT_SOURCE(WorkshopColorMode_SliderChanged, 0x013DED40)
DECLARE_EVENT_SOURCE(WorkshopColorMode_SwatchChanged, 0x013DECA0)
DECLARE_EVENT_SOURCE(WorkshopMenu_AttemptBuild, 0x016BF700)
DECLARE_EVENT_SOURCE(WorkshopMenu_CancelAction, 0x016BF480)
DECLARE_EVENT_SOURCE(WorkshopMenu_ChangeVariant, 0x016BF520)
DECLARE_EVENT_SOURCE(WorkshopMenu_ConnectionEvent, 0x016BF2A0)
DECLARE_EVENT_SOURCE(WorkshopMenu_ExitMenu, 0x016BF3E0)
DECLARE_EVENT_SOURCE(WorkshopMenu_MessageCallback, 0x016BF020)
DECLARE_EVENT_SOURCE(WorkshopMenu_SelectedCategory, 0x016BF5C0)
DECLARE_EVENT_SOURCE(WorkshopMenu_SelectedGridObject, 0x016BF660)
DECLARE_EVENT_SOURCE(WorkshopMenu_ShowExtras, 0x016BF200)
DECLARE_EVENT_SOURCE(WorkshopMenu_SwitchMode, 0x016BF340)
DECLARE_EVENT_SOURCE(WorkshopMenu_ToggleDistance, 0x016BF0C0)
DECLARE_EVENT_SOURCE(WorkshopMenu_ToggleTracking, 0x016BEF80)
DECLARE_EVENT_SOURCE(WorkshopMenu_ToggleView, 0x016BF160)
DECLARE_EVENT_SOURCE(WorkshopQuickMenu_ConfirmAction, 0x016C0910)
DECLARE_EVENT_SOURCE(WorkshopQuickMenu_ExitMenu, 0x016C0870)
DECLARE_EVENT_SOURCE(WorkshopShared_SetActionHandles, 0x016DD320)
DECLARE_EVENT_SOURCE(WorkshopShared_StartAction, 0x016DD3C0)
DECLARE_EVENT_SOURCE(WorkshopTargetMenu_TargetHovered, 0x016C6E20)
DECLARE_EVENT_SOURCE(WorkshopTargetMenu_TargetPicked, 0x016C6EC0)
DECLARE_EVENT_SOURCE_EX(Activation::Event, 0x058ACE30)
DECLARE_EVENT_SOURCE_EX(ActivityEvents::ActivityCompletedEvent, 0x058A9F28)
DECLARE_EVENT_SOURCE_EX(ActorCellChangeEvent, 0x058AD010)
DECLARE_EVENT_SOURCE_EX(ActorDamage::Event, 0x058AF4D0)
DECLARE_EVENT_SOURCE_EX(ActorHeadAttachedEvent, 0x058AD038)
DECLARE_EVENT_SOURCE_EX(ActorItemEquipped::Event, 0x058AF480)
DECLARE_EVENT_SOURCE_EX(ActorKill::Event, 0x058AF4A8)
DECLARE_EVENT_SOURCE_EX(AnimationGraphDependentEvent, 0x058AE2F8)
DECLARE_EVENT_SOURCE_EX(AssaultCrime::Event, 0x058AF548)
DECLARE_EVENT_SOURCE_EX(AttachReference::Event, 0x05851100)
DECLARE_EVENT_SOURCE_EX(BGSAffinityEventEvent, 0x058ACF20)
DECLARE_EVENT_SOURCE_EX(BGSHavokWorldCreatedEvent, 0x058AE000)
DECLARE_EVENT_SOURCE_EX(BGSLocationLoadedEvent, 0x058AD268)
DECLARE_EVENT_SOURCE_EX(BGSOnPlayerCompanionDismiss, 0x058ADDA8)
DECLARE_EVENT_SOURCE_EX(BGSOnPlayerCraftItemEvent, 0x058ADE48)
DECLARE_EVENT_SOURCE_EX(BGSOnPlayerCreateRobotEvent, 0x058ADE70)
DECLARE_EVENT_SOURCE_EX(BGSOnPlayerEnterVertibirdEvent, 0x058ADF10)
DECLARE_EVENT_SOURCE_EX(BGSOnPlayerFallLongDistances, 0x058ADDD0)
DECLARE_EVENT_SOURCE_EX(BGSOnPlayerFireWeaponEvent, 0x058ADEC0)
DECLARE_EVENT_SOURCE_EX(BGSOnPlayerHealTeammateEvent, 0x058ADD30)
DECLARE_EVENT_SOURCE_EX(BGSOnPlayerLoiteringBeginEvent, 0x058ADD58)
DECLARE_EVENT_SOURCE_EX(BGSOnPlayerLoiteringEndEvent, 0x058ADD80)
DECLARE_EVENT_SOURCE_EX(BGSOnPlayerModArmorWeaponEvent, 0x058ADDF8)
DECLARE_EVENT_SOURCE_EX(BGSOnPlayerModRobotEvent, 0x058ADE98)
DECLARE_EVENT_SOURCE_EX(BGSOnPlayerSwimmingEvent, 0x058ADEE8)
DECLARE_EVENT_SOURCE_EX(BGSOnPlayerUseWorkBenchEvent, 0x058ADF38)
DECLARE_EVENT_SOURCE_EX(BGSOnSpeechChallengeAvailable, 0x058ADF60)
DECLARE_EVENT_SOURCE_EX(BGSRadiationDamageEvent, 0x058ADD08)
//DECLARE_EVENT_SOURCE_EX(BNetCallbackHelper::ImageCallbackEvent, 0x0584C7D8)
//DECLARE_EVENT_SOURCE_EX(BNetCallbackHelper::UGCCallbackEvent, 0x0584C7B0)
//DECLARE_EVENT_SOURCE_EX(BSMusicEvent, 0x05859648)
//DECLARE_EVENT_SOURCE_EX(BSSysMonFrameCaptured, 0x0585A770)
DECLARE_EVENT_SOURCE_EX(Bleedout::Event, 0x058AF5F8)
DECLARE_EVENT_SOURCE_EX(BooksRead::Event, 0x058AB160)
DECLARE_EVENT_SOURCE_EX(Bounty::Event, 0x058AF6C8)
DECLARE_EVENT_SOURCE_EX(BuilderMenuSelectEvent, 0x058AE0A0)
//DECLARE_EVENT_SOURCE_EX(CelestialLocationDiscoveredEvent, 0x058AE488)
DECLARE_EVENT_SOURCE_EX(ChestLooted::Event, 0x058AF6F0)
DECLARE_EVENT_SOURCE_EX(ClearShipHudTarget::Event, 0x058AF2E0)
DECLARE_EVENT_SOURCE_EX(ContractedDisease::Event, 0x058AF620)
DECLARE_EVENT_SOURCE_EX(CrewAssignedEvent, 0x058AD218)
DECLARE_EVENT_SOURCE_EX(CrewDismissedEvent, 0x058AD240)
DECLARE_EVENT_SOURCE_EX(CriticalHitEvent::Event, 0x058AF6A0)
DECLARE_EVENT_SOURCE_EX(CustomMarkerUpdate::Event, 0x058AF718)
DECLARE_EVENT_SOURCE_EX(DaysJailed::Event, 0x058AF740)
DECLARE_EVENT_SOURCE_EX(DaysPassed::Event, 0x058AF408)
DECLARE_EVENT_SOURCE_EX(DestroyedEvent, 0x058AD2E0)
DECLARE_EVENT_SOURCE_EX(DisarmedEvent::Event, 0x058AF4F8)
DECLARE_EVENT_SOURCE_EX(EnteredUnity::Event, 0x058AF9C0)
DECLARE_EVENT_SOURCE_EX(FactionRankChange::Event, 0x058AF520)
DECLARE_EVENT_SOURCE_EX(FinePaid::Event, 0x058AF768)
DECLARE_EVENT_SOURCE_EX(FirstThirdPersonSwitch::Event, 0x058AFA60)
//DECLARE_EVENT_SOURCE_EX(GameplayOptionAppliedEvent, 0x058AE438)
//DECLARE_EVENT_SOURCE_EX(GameplayOptionChangedEvent, 0x058AE3E8)
//DECLARE_EVENT_SOURCE_EX(GameplayOptionUpdateFinishedEvent, 0x058AE410)
DECLARE_EVENT_SOURCE_EX(GrandTheftHorse::Event, 0x058AF5C0)
DECLARE_EVENT_SOURCE_EX(HideSubtitleEvent::Event, 0x058AF1F0)
DECLARE_EVENT_SOURCE_EX(HourPassed::Event, 0x058AF430)
DECLARE_EVENT_SOURCE_EX(HoursPassed::Event, 0x058AFE30)
DECLARE_EVENT_SOURCE_EX(InstantReferenceInteractionEvent, 0x058AE050)
DECLARE_EVENT_SOURCE_EX(ItemConsumedEvent, 0x058AE370)
DECLARE_EVENT_SOURCE_EX(ItemCrafted::Event, 0x058AF790)
DECLARE_EVENT_SOURCE_EX(ItemSteal::Event, 0x058AF7B8)
DECLARE_EVENT_SOURCE_EX(ItemSwappedEvent, 0x058AE320)
DECLARE_EVENT_SOURCE_EX(JailEscape::Event, 0x058AF7E0)
DECLARE_EVENT_SOURCE_EX(Jailing::Event, 0x058AF808)
DECLARE_EVENT_SOURCE_EX(LocationExplored::Event, 0x058ACDE0)
DECLARE_EVENT_SOURCE_EX(LocationLinked::Event, 0x058ACE08)
DECLARE_EVENT_SOURCE_EX(LocationMarkerArrayUpdate::Event, 0x058AF858)
DECLARE_EVENT_SOURCE_EX(LocationTextEvent::Event, 0x058AF330)
DECLARE_EVENT_SOURCE_EX(LockPickedEvent, 0x058AE348)
//DECLARE_EVENT_SOURCE_EX(MagicSystem::FlushLogEvent, 0x05839258)
//DECLARE_EVENT_SOURCE_EX(MagicSystem::LogEvent, 0x05839230)
DECLARE_EVENT_SOURCE_EX(MapMarkerDiscoveredEvent, 0x058AE168)
DECLARE_EVENT_SOURCE_EX(MissionMenuStateEvent::Event, 0x058AF2B8)
DECLARE_EVENT_SOURCE_EX(MurderCrime::Event, 0x058AF570)
DECLARE_EVENT_SOURCE_EX(ObjectScannedEvent, 0x058AE118)
DECLARE_EVENT_SOURCE_EX(ObjectiveState::Event, 0x058AE4D8)
DECLARE_EVENT_SOURCE_EX(PiracyCrime::Event, 0x058AF598)
DECLARE_EVENT_SOURCE_EX(PlayerActiveEffectChanged::Event, 0x058AFA88)
DECLARE_EVENT_SOURCE_EX(PlayerAddItemEvent, 0x058ADF88)
DECLARE_EVENT_SOURCE_EX(PlayerAmmoChanged::Event, 0x058AF880)
DECLARE_EVENT_SOURCE_EX(PlayerArrestedEvent, 0x058AE190)
DECLARE_EVENT_SOURCE_EX(PlayerAssaultActorEvent, 0x058AE1B8)
DECLARE_EVENT_SOURCE_EX(PlayerBuyShipEvent, 0x058AE2A8)
DECLARE_EVENT_SOURCE_EX(PlayerCrimeGoldEvent, 0x058AE208)
DECLARE_EVENT_SOURCE_EX(PlayerDifficultySettingChanged::Event, 0x058AF8A8)
DECLARE_EVENT_SOURCE_EX(PlayerFailedPlotRouteEvent, 0x058AD5D8)
DECLARE_EVENT_SOURCE_EX(PlayerFastTravel::Event, 0x058AF998)
DECLARE_EVENT_SOURCE_EX(PlayerInDialogueChanged::Event, 0x058AF8D0)
DECLARE_EVENT_SOURCE_EX(PlayerJailEvent, 0x058AE230)
DECLARE_EVENT_SOURCE_EX(PlayerLifeStateChanged::Event, 0x058AF8F8)
DECLARE_EVENT_SOURCE_EX(PlayerModifiedShipEvent, 0x058AD600)
DECLARE_EVENT_SOURCE_EX(PlayerMurderActorEvent, 0x058AE1E0)
//DECLARE_EVENT_SOURCE_EX(PlayerNameEvent::NameChangedEvent, 0x058AF290)
DECLARE_EVENT_SOURCE_EX(PlayerPayFineEvent, 0x058AE258)
DECLARE_EVENT_SOURCE_EX(PlayerPickpocketSuccess::Event, 0x058AFAB0)
DECLARE_EVENT_SOURCE_EX(PlayerPlanetSurveyCompleteEvent, 0x058AE0C8)
DECLARE_EVENT_SOURCE_EX(PlayerPlanetSurveyProgressEvent, 0x058AE0F0)
DECLARE_EVENT_SOURCE_EX(PlayerSellShipEvent, 0x058AE2D0)
DECLARE_EVENT_SOURCE_EX(PlayerTrespassEvent, 0x058AE280)
DECLARE_EVENT_SOURCE_EX(PoisonedWeapon::Event, 0x058AF920)
DECLARE_EVENT_SOURCE_EX(QuestStatus::Event, 0x058AE978)
DECLARE_EVENT_SOURCE_EX(QuickContainerOpenedEvent, 0x058AE078)
//DECLARE_EVENT_SOURCE_EX(RadioManager::PipboyFrequencyDetectionEvent, 0x0584FB40)
//DECLARE_EVENT_SOURCE_EX(RadioManager::PipboyRadioTuningEvent, 0x0584FB90)
DECLARE_EVENT_SOURCE_EX(RadioManager::PipboyTransmitterDetectionEvent, 0x0584FB68)
DECLARE_EVENT_SOURCE_EX(RefControlChangedEvent, 0x058AE3C0)
DECLARE_EVENT_SOURCE_EX(ReferenceDestroyedEvent, 0x058AE028)
DECLARE_EVENT_SOURCE_EX(RefillAliasEvent::Event, 0x058AE950)
DECLARE_EVENT_SOURCE_EX(ReloadWeaponEvent::Event, 0x058AF648)
DECLARE_EVENT_SOURCE_EX(RolloverIsCrimeEvent::Event, 0x058AF1A0)
//DECLARE_EVENT_SOURCE_EX(ScannableUtils::ScannedEvent, 0x058AF100)
DECLARE_EVENT_SOURCE_EX(ShowSubtitleEvent::Event, 0x058AF1C8)
//DECLARE_EVENT_SOURCE_EX(SpaceshipEditor::TransactionEvent, 0x058A9EB8)
DECLARE_EVENT_SOURCE_EX(SpeechChallengeCompletionEvent, 0x058AE140)
DECLARE_EVENT_SOURCE_EX(SpellsLearned::Event, 0x058AF678)
DECLARE_EVENT_SOURCE_EX(TESActivateEvent, 0x058ACED0)
DECLARE_EVENT_SOURCE_EX(TESActiveEffectApplyFinishEvent, 0x058ACF70)
DECLARE_EVENT_SOURCE_EX(TESActiveEffectRemovedEvent, 0x058ACF98)
DECLARE_EVENT_SOURCE_EX(TESActorActivatedRefEvent, 0x058ACEF8)
DECLARE_EVENT_SOURCE_EX(TESActorLocationChangeEvent, 0x058ACFE8)
DECLARE_EVENT_SOURCE_EX(TESBookReadEvent, 0x058AD060)
DECLARE_EVENT_SOURCE_EX(TESCellGravityChangeEvent, 0x058AD178)
DECLARE_EVENT_SOURCE_EX(TESCellNavmeshGeneratedEvent, 0x058AD128)
DECLARE_EVENT_SOURCE_EX(TESCellReadyToApplyDecalsEvent, 0x058AD150)
DECLARE_EVENT_SOURCE_EX(TESCellReferenceAttachDetachEvent, 0x058AD088)
DECLARE_EVENT_SOURCE_EX(TESCombatEvent, 0x058AD1A0)
DECLARE_EVENT_SOURCE_EX(TESCombatListEvent, 0x058AD1C8)
DECLARE_EVENT_SOURCE_EX(TESCommandModeCompleteCommandEvent, 0x058AD3F8)
DECLARE_EVENT_SOURCE_EX(TESCommandModeEnterEvent, 0x058AD420)
DECLARE_EVENT_SOURCE_EX(TESCommandModeExitEvent, 0x058AD448)
DECLARE_EVENT_SOURCE_EX(TESCommandModeGiveCommandEvent, 0x058AD470)
DECLARE_EVENT_SOURCE_EX(TESConsciousnessEvent, 0x058ADC68)
DECLARE_EVENT_SOURCE_EX(TESContainerChangedEvent, 0x058AD1F0)
DECLARE_EVENT_SOURCE_EX(TESDeathEvent, 0x058AD2B8)
DECLARE_EVENT_SOURCE_EX(TESDeferredKillEvent, 0x058AD290)
DECLARE_EVENT_SOURCE_EX(TESDestructionStageChangedEvent, 0x058AD308)
DECLARE_EVENT_SOURCE_EX(TESEnterBleedoutEvent, 0x058AD330)
DECLARE_EVENT_SOURCE_EX(TESEnterSneakingEvent, 0x058AD380)
DECLARE_EVENT_SOURCE_EX(TESEquipEvent, 0x058AD498)
DECLARE_EVENT_SOURCE_EX(TESEscortWaitStartEvent, 0x058AD3A8)
DECLARE_EVENT_SOURCE_EX(TESEscortWaitStopEvent, 0x058AD3D0)
DECLARE_EVENT_SOURCE_EX(TESExitBleedoutEvent, 0x058AD358)
DECLARE_EVENT_SOURCE_EX(TESExitFurnitureEvent, 0x058ACF48)
DECLARE_EVENT_SOURCE_EX(TESFormDeleteEvent, 0x058AD4E8)
DECLARE_EVENT_SOURCE_EX(TESFormIDRemapEvent, 0x058AD510)
DECLARE_EVENT_SOURCE_EX(TESFurnitureEvent, 0x058AD538)
DECLARE_EVENT_SOURCE_EX(TESGrabReleaseEvent, 0x058AD560)
DECLARE_EVENT_SOURCE_EX(TESHarvestEvent::ItemHarvested, 0x058A9F00)
DECLARE_EVENT_SOURCE_EX(TESHitEvent, 0x058AD588)
DECLARE_EVENT_SOURCE_EX(TESInitScriptEvent, 0x058AD650)
DECLARE_EVENT_SOURCE_EX(TESLimbCrippleEvent, 0x058ADC90)
DECLARE_EVENT_SOURCE_EX(TESLoadGameEvent, 0x058AD6C8)
DECLARE_EVENT_SOURCE_EX(TESLocationExploredEvent, 0x058AD678)
DECLARE_EVENT_SOURCE_EX(TESLockChangedEvent, 0x058AD6A0)
DECLARE_EVENT_SOURCE_EX(TESMagicEffectApplyEvent, 0x058AD6F0)
DECLARE_EVENT_SOURCE_EX(TESMissionAcceptedEvent, 0x058AD830)
DECLARE_EVENT_SOURCE_EX(TESObjectLoadedEvent, 0x058AD718)
DECLARE_EVENT_SOURCE_EX(TESObjectREFRIsReadyForAttachEvent, 0x058AD740)
DECLARE_EVENT_SOURCE_EX(TESObjectREFRTranslationEvent, 0x058ADB00)
DECLARE_EVENT_SOURCE_EX(TESOnPCDialogueTargetEvent, 0x058ADCE0)
DECLARE_EVENT_SOURCE_EX(TESPackageEvent, 0x058AD790)
DECLARE_EVENT_SOURCE_EX(TESPerkEntryRunEvent, 0x058AD7B8)
DECLARE_EVENT_SOURCE_EX(TESPickNewIdleEvent, 0x058ADCB8)
DECLARE_EVENT_SOURCE_EX(TESPickpocketFailedEvent, 0x058AD7E0)
DECLARE_EVENT_SOURCE_EX(TESPlayerActiveEffectEvent, 0x058ACFC0)
DECLARE_EVENT_SOURCE_EX(TESPlayerFollowerWarpEvent, 0x058AD4C0)
DECLARE_EVENT_SOURCE_EX(TESQuestInitEvent, 0x058AD808)
DECLARE_EVENT_SOURCE_EX(TESQuestRejectedEvent, 0x058AD858)
DECLARE_EVENT_SOURCE_EX(TESQuestStageEvent, 0x058AD880)
DECLARE_EVENT_SOURCE_EX(TESQuestStageItemDoneEvent, 0x058AD8A8)
DECLARE_EVENT_SOURCE_EX(TESQuestStartStopEvent, 0x058AD8D0)
DECLARE_EVENT_SOURCE_EX(TESQuestTimerEvent, 0x058AE398)
DECLARE_EVENT_SOURCE_EX(TESResetEvent, 0x058AD920)
DECLARE_EVENT_SOURCE_EX(TESResolveNPCTemplatesEvent, 0x058AD948)
DECLARE_EVENT_SOURCE_EX(TESSceneActionEvent, 0x058AD998)
DECLARE_EVENT_SOURCE_EX(TESScenePhaseEvent, 0x058AD9C0)
DECLARE_EVENT_SOURCE_EX(TESSellEvent, 0x058AD9E8)
DECLARE_EVENT_SOURCE_EX(TESSleepStartEvent, 0x058ADA10)
DECLARE_EVENT_SOURCE_EX(TESSleepStopEvent, 0x058ADA38)
DECLARE_EVENT_SOURCE_EX(TESSpellCastEvent, 0x058ADA60)
DECLARE_EVENT_SOURCE_EX(TESSpellCastFailureEvent, 0x058ADA88)
DECLARE_EVENT_SOURCE_EX(TESSwitchRaceCompleteEvent, 0x058ADC40)
DECLARE_EVENT_SOURCE_EX(TESTopicInfoEvent, 0x058ADAB0)
DECLARE_EVENT_SOURCE_EX(TESTrackedStatsEvent, 0x058ADAD8)
DECLARE_EVENT_SOURCE_EX(TESTrapHitEvent, 0x058ADB28)
DECLARE_EVENT_SOURCE_EX(TESTriggerEnterEvent, 0x058ADB78)
DECLARE_EVENT_SOURCE_EX(TESTriggerEvent, 0x058ADB50)
DECLARE_EVENT_SOURCE_EX(TESTriggerLeaveEvent, 0x058ADBA0)
//DECLARE_EVENT_SOURCE_EX(TESUnconsciousEvent, 0x058AE460)
DECLARE_EVENT_SOURCE_EX(TESWaitStartEvent, 0x058ADBF0)
DECLARE_EVENT_SOURCE_EX(TESWaitStopEvent, 0x058ADC18)
DECLARE_EVENT_SOURCE_EX(TerminalHacked::Event, 0x058AF948)
DECLARE_EVENT_SOURCE_EX(TerminalMenuMenuItemRunEvent, 0x058ACE80)
DECLARE_EVENT_SOURCE_EX(TerminalMenuOnEnterEvent, 0x058ACEA8)
DECLARE_EVENT_SOURCE_EX(TraitDiscoveryTextEvent::Event, 0x058AF358)
DECLARE_EVENT_SOURCE_EX(TravelMarkerStateChange::Event, 0x058AFA10)
DECLARE_EVENT_SOURCE_EX(Trespass::Event, 0x058AFD58)
DECLARE_EVENT_SOURCE_EX(TryUpdateShipHudTarget::Event, 0x058AF308)
DECLARE_EVENT_SOURCE_EX(VATSCommand, 0x058AFDB8)
DECLARE_EVENT_SOURCE_EX(VATSEvents::ModeChange, 0x058AFD90)
//DECLARE_EVENT_SOURCE_EX(VehicleAmmoChanged::Event, 0x058AF9E8)
DECLARE_EVENT_SOURCE_EX(WeaponAttack::Event, 0x058AF970)
DECLARE_EVENT_SOURCE_EX(WeaponFiredEvent, 0x0583FCD8)
//DECLARE_EVENT_SOURCE_EX(WorkbenchTracking::TrackingStatusChanged::Event, 0x058AF3E0)
DECLARE_EVENT_SOURCE_EX(WorkshopNPCTransferEvent, 0x058AD628)
DECLARE_EVENT_SOURCE_EX(XPChange::Event, 0x05851128)
//DECLARE_EVENT_SOURCE_EX(nsBarterMenu::CompletedEvent, 0x058AF380)
