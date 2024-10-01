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
        DEFINE_MEMBER_FN_1(RegisterSink, void, 0x005CB54C, SinkBase* sink);
        DEFINE_MEMBER_FN_1(UnregisterSink, void, 0x005CB360, SinkBase* sink);
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

DECLARE_EVENT_SOURCE(SnapTemplateUtils::SnapReplaceEvent, 0x007A6FE4)
DECLARE_EVENT_SOURCE(ImageFixtureEvent_RequestImage, 0x007A829C)
DECLARE_EVENT_SOURCE(ImageFixtureEvent_UnregisterImage, 0x007AB198)
DECLARE_EVENT_SOURCE(Spaceship::TakeOffEvent, 0x007AE048)
DECLARE_EVENT_SOURCE(HUDActivityIncreaseEvent, 0x01217990)
DECLARE_EVENT_SOURCE(AnimationDataCleanupEvent, 0x0126D76C)
DECLARE_EVENT_SOURCE(AnimationDataSetupEvent, 0x0126D7FC)
DECLARE_EVENT_SOURCE(EndLoadGameEvent, 0x012C6414)
DECLARE_EVENT_SOURCE(StartLoadGameEvent, 0x012C64A4)
DECLARE_EVENT_SOURCE(ShipEditor_SystemSelected, 0x012FC90C)
DECLARE_EVENT_SOURCE(ShipEditor_PreviewUpgrade, 0x01303004)
DECLARE_EVENT_SOURCE(ShipEditor_SelectedUpgrade, 0x01303094)
DECLARE_EVENT_SOURCE(RuntimeComponentDBFactory::ReferenceAttach, 0x0135CA50)
DECLARE_EVENT_SOURCE(RuntimeComponentDBFactory::ReferenceDetach, 0x0135CAE0)
DECLARE_EVENT_SOURCE(WeaponGroupAssignmentMenu_ChangeWeaponAssignment, 0x013E96B4)
DECLARE_EVENT_SOURCE(WeaponGroupAssignmentMenu_OnHintButtonActivated, 0x013E9744)
DECLARE_EVENT_SOURCE(ShipEditor_OnExitConfirmCancel, 0x0140C624)
DECLARE_EVENT_SOURCE(ShipEditor_OnExitConfirmExit, 0x0140C6B4)
DECLARE_EVENT_SOURCE(ShipEditor_OnExitConfirmSaveAndExit, 0x0140C744)
DECLARE_EVENT_SOURCE(ShipEditor_OnFlightCheckTabChanged, 0x01411294)
DECLARE_EVENT_SOURCE(ShipEditor_OnWeaponGroupChanged, 0x01411324)
DECLARE_EVENT_SOURCE(ShipEditor_OnRenameEndEditText, 0x01416C50)
DECLARE_EVENT_SOURCE(ShipEditor_OnRenameInputCancelled, 0x01416CE0)
DECLARE_EVENT_SOURCE(ShipEditor_ChangeModuleCategory, 0x0141B4D4)
DECLARE_EVENT_SOURCE(ShipEditor_PreviewShipPart, 0x0141B564)
DECLARE_EVENT_SOURCE(ShipEditor_SelectedShipPart, 0x0141B5F4)
DECLARE_EVENT_SOURCE(ShipEditor_OnColorPickerControlChanged, 0x01309E7C)
DECLARE_EVENT_SOURCE(ShipEditor_OnColorPickerTabChanged, 0x01309F0C)
DECLARE_EVENT_SOURCE(ShipEditor_OnColorSliderMouseInput, 0x01309F9C)
DECLARE_EVENT_SOURCE(ShipEditor_OnRecentColorSwatchClicked, 0x0130A02C)
DECLARE_EVENT_SOURCE(ShipBuilder_CloseAllMenus, 0x0144930C)
DECLARE_EVENT_SOURCE(ShipEditor_OnHintButtonActivated, 0x0144939C)
DECLARE_EVENT_SOURCE(ShipEditor_RemoveAll3D, 0x0144942C)
DECLARE_EVENT_SOURCE(ReferenceQueuedEvent, 0x014B4CC8)
DECLARE_EVENT_SOURCE(LoadScreenEndEvent, 0x014CEB1C)
DECLARE_EVENT_SOURCE(LoadScreenStartEvent, 0x014CEBAC)
DECLARE_EVENT_SOURCE(CellAttachDetachEvent, 0x014CEC3C)
DECLARE_EVENT_SOURCE(PickRefStateChangedEvent, 0x0154B688)
DECLARE_EVENT_SOURCE(ActivityTrackerActivityStartedEvent, 0x01555C28)
DECLARE_EVENT_SOURCE(RuntimeComponentDBFactory::ReferenceCleared3d, 0x015E2C30)
DECLARE_EVENT_SOURCE(RuntimeComponentDBFactory::ReferenceDestroy, 0x015E2CC0)
DECLARE_EVENT_SOURCE(RuntimeComponentDBFactory::ReferenceInit, 0x015E2D50)
DECLARE_EVENT_SOURCE(RuntimeComponentDBFactory::ReferenceRecycle, 0x015E2DE0)
DECLARE_EVENT_SOURCE(RuntimeComponentDBFactory::ReferenceSet3d, 0x015E2E70)
DECLARE_EVENT_SOURCE(RuntimeComponentDBFactory::Release3DRelatedData, 0x015E2F00)
DECLARE_EVENT_SOURCE(BSWorldOriginShiftEvent, 0x015EF3AC)
DECLARE_EVENT_SOURCE(BGSPlanet::PlayerKnowledgeFlagSetEvent, 0x017164DC)
DECLARE_EVENT_SOURCE(StarMap::PlanetTraitKnownEvent, 0x0171656C)
DECLARE_EVENT_SOURCE(ResetHistoryDataEvent, 0x017EB008)
DECLARE_EVENT_SOURCE(TESQuestRewardEvent, 0x0180524C)
DECLARE_EVENT_SOURCE(HUDWeaponWorldFOVMultChangedEvent, 0x018074CC)
DECLARE_EVENT_SOURCE(BGSSceneActionPlayerDialogue::ActionEndEvent, 0x018FD7DC)
DECLARE_EVENT_SOURCE(BGSSceneActionPlayerDialogue::ActionStartEvent, 0x018FD86C)
DECLARE_EVENT_SOURCE(AutoLoadDoorRolloverEvent, 0x019AE15C)
DECLARE_EVENT_SOURCE(ClearQuickContainerEvent, 0x019AE1EC)
DECLARE_EVENT_SOURCE(ReferenceCellLoadedTemps, 0x01A27F0C)
DECLARE_EVENT_SOURCE(Workshop::CargoLinkAddedEvent, 0x01DB79AC)
DECLARE_EVENT_SOURCE(Workshop::CargoLinkTargetChangedEvent, 0x01DB7A3C)
DECLARE_EVENT_SOURCE(Workshop::EnterOutpostBeaconModeEvent, 0x01DB7ACC)
DECLARE_EVENT_SOURCE(Workshop::ItemGrabbedEvent, 0x01DB7B5C)
DECLARE_EVENT_SOURCE(Workshop::ItemMovedEvent, 0x01DB7BEC)
DECLARE_EVENT_SOURCE(Workshop::ItemPlacedEvent, 0x01DB7C7C)
DECLARE_EVENT_SOURCE(Workshop::ItemProducedEvent, 0x01DB7D0C)
DECLARE_EVENT_SOURCE(Workshop::ItemRemovedEvent, 0x01DB7D9C)
DECLARE_EVENT_SOURCE(Workshop::ItemRepairedEvent, 0x01DB7E2C)
DECLARE_EVENT_SOURCE(Workshop::ItemScrappedEvent, 0x01DB7EBC)
DECLARE_EVENT_SOURCE(Workshop::OutpostNameChangedEvent, 0x01DB7F4C)
DECLARE_EVENT_SOURCE(Workshop::OutpostPlacedEvent, 0x01DB7FDC)
DECLARE_EVENT_SOURCE(PickRefUpdateEvent, 0x01DB806C)
DECLARE_EVENT_SOURCE(Workshop::PlacementStatusEvent, 0x01DB80FC)
DECLARE_EVENT_SOURCE(Workshop::PowerOffEvent, 0x01DB818C)
DECLARE_EVENT_SOURCE(Workshop::PowerOnEvent, 0x01DB821C)
DECLARE_EVENT_SOURCE(Workshop::SnapBehaviorCycledEvent, 0x01DB82AC)
DECLARE_EVENT_SOURCE(Workshop::WorkshopFlyCameraEvent, 0x01DB833C)
DECLARE_EVENT_SOURCE(Workshop::WorkshopItemPlacedEvent, 0x01DB83CC)
DECLARE_EVENT_SOURCE(Workshop::WorkshopModeEvent, 0x01DB845C)
DECLARE_EVENT_SOURCE(Workshop::WorkshopOutputLinkEvent, 0x01DB858C)
DECLARE_EVENT_SOURCE(Workshop::WorkshopStatsChangedEvent, 0x01DB861C)
DECLARE_EVENT_SOURCE(Workshop::WorkshopUpdateStatsEvent, 0x01DB86AC)
DECLARE_EVENT_SOURCE(ShipCameraStateToggled, 0x01E142B4)
DECLARE_EVENT_SOURCE(PlayerControls::PlayerJumpPressEvent, 0x0200DB64)
DECLARE_EVENT_SOURCE(PlayerControls::PlayerJumpReleaseEvent, 0x0200DBF4)
DECLARE_EVENT_SOURCE(PlayerSneakingChangeEvent, 0x0200F3DC)
DECLARE_EVENT_SOURCE(PlayerControls::PlayerZeroGSprintJustPressedEvent, 0x0200F618)
DECLARE_EVENT_SOURCE(PlayerControls::PlayerZeroGSprintReleasedEvent, 0x0200F6A8)
DECLARE_EVENT_SOURCE(PlayerControls::PlayerIronSightsEndEvent, 0x02014750)
DECLARE_EVENT_SOURCE(PlayerControls::PlayerIronSightsStartEvent, 0x020147E0)
DECLARE_EVENT_SOURCE(SaveLoadEvent, 0x0204475C)
DECLARE_EVENT_SOURCE(SpaceshipWeaponBinding::SpaceshipWeaponBindingChangedEvent, 0x02076E78)
DECLARE_EVENT_SOURCE(BoundaryMenu_FastTravel, 0x020CB678)
DECLARE_EVENT_SOURCE(BoundaryMenu_ShowMap, 0x020CB708)
DECLARE_EVENT_SOURCE(PhotoGallery_DeletePhoto, 0x0212BFF4)
DECLARE_EVENT_SOURCE(PowersMenu_ActivateEssence, 0x0212F4D0)
DECLARE_EVENT_SOURCE(PowersMenu_EquipPower, 0x0212F560)
DECLARE_EVENT_SOURCE(PowersMenu_FavoritePower, 0x0212F5F0)
DECLARE_EVENT_SOURCE(ContainerMenuClosed::Event, 0x021420FC)
DECLARE_EVENT_SOURCE(HangarShipSelection_ChangeSystemDisplay, 0x0214218C)
DECLARE_EVENT_SOURCE(HangarShipSelection_RepairShip, 0x0214221C)
DECLARE_EVENT_SOURCE(HangarShipSelection_UpgradeSystem, 0x021422AC)
DECLARE_EVENT_SOURCE(ShipCrewMenu_Close, 0x0214233C)
DECLARE_EVENT_SOURCE(BinkMovieStoppedPlayingEvent, 0x0214F1E0)
DECLARE_EVENT_SOURCE(WorkshopColorMode_ApplyColors, 0x021AE93C)
DECLARE_EVENT_SOURCE(WorkshopColorMode_SelectedTab, 0x021AE9CC)
DECLARE_EVENT_SOURCE(WorkshopColorMode_SliderChanged, 0x021AEA5C)
DECLARE_EVENT_SOURCE(WorkshopColorMode_SwatchChanged, 0x021AEAEC)
DECLARE_EVENT_SOURCE(HUDCrewBuffMessageEvent, 0x021AFCCC)
DECLARE_EVENT_SOURCE(CraftingMenu_SessionSummaryEvent, 0x021B8DA8)
DECLARE_EVENT_SOURCE(CraftingMenu_CraftItem, 0x021B8E38)
DECLARE_EVENT_SOURCE(CraftingMenu_ExitBench, 0x021B8EC8)
DECLARE_EVENT_SOURCE(CraftingMenu_InstallMod, 0x021B8F58)
DECLARE_EVENT_SOURCE(CraftingMenu_RenameItem, 0x021B8FE8)
DECLARE_EVENT_SOURCE(CraftingMenu_RevertedModdedItem, 0x021B9078)
DECLARE_EVENT_SOURCE(CraftingMenu_SelectedMod, 0x021B9108)
DECLARE_EVENT_SOURCE(CraftingMenu_SelectedModSlot, 0x021B9198)
DECLARE_EVENT_SOURCE(CraftingMenu_SelectedModdableItem, 0x021B9228)
DECLARE_EVENT_SOURCE(CraftingMenu_SelectedRecipe, 0x021B92B8)
DECLARE_EVENT_SOURCE(CraftingMenu_SetInspectControls, 0x021B9348)
DECLARE_EVENT_SOURCE(CraftingMenu_ToggleTracking, 0x021B93D8)
DECLARE_EVENT_SOURCE(CraftingMenu_ViewingModdableItem, 0x021B9468)
DECLARE_EVENT_SOURCE(ContainerMenu_CloseMenu, 0x021C762C)
DECLARE_EVENT_SOURCE(InventoryMenu_Change3DView, 0x021C775C)
DECLARE_EVENT_SOURCE(InventoryMenu_PaperDollTryOn, 0x021C77EC)
DECLARE_EVENT_SOURCE(InventoryMenu_ResetPaperDollInv, 0x021C787C)
DECLARE_EVENT_SOURCE(UpdateActivateListenerEvent, 0x021CF8C8)
DECLARE_EVENT_SOURCE(StartOutpostFromListenerEvent, 0x021D1538)
DECLARE_EVENT_SOURCE(HUDModeEvent, 0x021E17EC)
DECLARE_EVENT_SOURCE(OpenContainerMenuEventData, 0x021E187C)
DECLARE_EVENT_SOURCE(OpenContainerMenuFromListenerEvent, 0x021E190C)
DECLARE_EVENT_SOURCE(HUDRolloverActivationButtonEvent, 0x021E199C)
DECLARE_EVENT_SOURCE(HUDRolloverActivationQCItemPressEvent, 0x021E1A2C)
DECLARE_EVENT_SOURCE(Inventory_SetSort, 0x021E1ABC)
DECLARE_EVENT_SOURCE(ShowingQuestMarketTextEvent, 0x021EEE14)
DECLARE_EVENT_SOURCE(TargetHitEvent, 0x021F1638)
DECLARE_EVENT_SOURCE(BSTValueRequestEvent<PlayerCrosshairModeEvent>, 0x021F16C8)
DECLARE_EVENT_SOURCE(ClearHUDMessagesEvent, 0x021F8CA4)
DECLARE_EVENT_SOURCE(ShowHUDMessageEvent, 0x021F8D34)
DECLARE_EVENT_SOURCE(PlayerDetectionLevelChangeEvent, 0x021FBED4)
DECLARE_EVENT_SOURCE(ShowCustomWatchAlert, 0x02200F94)
DECLARE_EVENT_SOURCE(PlayerUpdateEvent, 0x0223E1BC)
DECLARE_EVENT_SOURCE(InventoryMenu_ToggleHelmet, 0x0223E24C)
DECLARE_EVENT_SOURCE(InventoryMenu_ToggleSuit, 0x0223E2DC)
DECLARE_EVENT_SOURCE(ControlsRemappedEvent, 0x02286C98)
DECLARE_EVENT_SOURCE(SettingsPanel_CheckBoxChanged, 0x02286D28)
DECLARE_EVENT_SOURCE(SettingsPanel_ClearBinding, 0x02286DB8)
DECLARE_EVENT_SOURCE(SettingsPanel_OpenCategory, 0x02286EEC)
DECLARE_EVENT_SOURCE(SettingsPanel_OpenSettings, 0x02286F7C)
DECLARE_EVENT_SOURCE(SettingsPanel_RemapConfirmed, 0x0228700C)
DECLARE_EVENT_SOURCE(SettingsPanel_RemapMode, 0x0228709C)
DECLARE_EVENT_SOURCE(SettingsPanel_ResetToDefaults, 0x0228712C)
DECLARE_EVENT_SOURCE(SettingsPanel_SaveControls, 0x022871BC)
DECLARE_EVENT_SOURCE(SettingsPanel_SaveSettings, 0x0228724C)
DECLARE_EVENT_SOURCE(SettingsPanel_SliderChanged, 0x022872DC)
DECLARE_EVENT_SOURCE(SettingsPanel_StepperChanged, 0x0228736C)
DECLARE_EVENT_SOURCE(SettingsPanel_ValidateControls, 0x022873FC)
DECLARE_EVENT_SOURCE(ShipCrewMenu_OpenAssignMenu, 0x02291EC4)
DECLARE_EVENT_SOURCE(ShipCrewMenu_SetSort, 0x02291F54)
DECLARE_EVENT_SOURCE(Spaceship::PlayerMovementOutputEvent, 0x022B7768)
DECLARE_EVENT_SOURCE(ShowLongShipBootup, 0x022B77F8)
DECLARE_EVENT_SOURCE(ShipHudQuickContainer_TransferMenu, 0x022B7888)
DECLARE_EVENT_SOURCE(ShipHud_Activate, 0x022B7918)
DECLARE_EVENT_SOURCE(ShipHud_BodyViewMarkerDimensions, 0x022B79A8)
DECLARE_EVENT_SOURCE(ShipHud_ChangeComponentSelection, 0x022B7A38)
DECLARE_EVENT_SOURCE(ShipHud_CloseMenu, 0x022B7AC8)
DECLARE_EVENT_SOURCE(ShipHud_Deselect, 0x022B7B58)
DECLARE_EVENT_SOURCE(ShipHud_FarTravel, 0x022B7BE8)
DECLARE_EVENT_SOURCE(ShipHud_HailAccepted, 0x022B7C78)
DECLARE_EVENT_SOURCE(ShipHud_HailCancelled, 0x022B7D08)
DECLARE_EVENT_SOURCE(ShipHud_JumpToQuestMarker, 0x022B7D98)
DECLARE_EVENT_SOURCE(ShipHud_Land, 0x022B7E28)
DECLARE_EVENT_SOURCE(ShipHud_LandingMarkerMap, 0x022B7EB8)
DECLARE_EVENT_SOURCE(ShipHud_Map, 0x022B7F48)
DECLARE_EVENT_SOURCE(ShipHud_OnMonocleToggle, 0x022B7FD8)
DECLARE_EVENT_SOURCE(ShipHud_OpenPhotoMode, 0x022B8068)
DECLARE_EVENT_SOURCE(ShipHud_Repair, 0x022B80F8)
DECLARE_EVENT_SOURCE(ShipHud_SetTargetMode, 0x022B8188)
DECLARE_EVENT_SOURCE(ShipHud_Target, 0x022B8218)
DECLARE_EVENT_SOURCE(ShipHud_TargetShipSystem, 0x022B82A8)
DECLARE_EVENT_SOURCE(ShipHud_UntargetShipSystem, 0x022B8338)
DECLARE_EVENT_SOURCE(ShipHud_UpdateComponentPower, 0x022B83C8)
DECLARE_EVENT_SOURCE(DialogueMenu_CompleteExit, 0x022E3E5C)
DECLARE_EVENT_SOURCE(BGSScannerGuideEffectStatusUpdateEvent, 0x022F4FE0)
DECLARE_EVENT_SOURCE(GlobalFunc_CloseAllMenus, 0x022FA138)
DECLARE_EVENT_SOURCE(GlobalFunc_CloseMenu, 0x022FA1C8)
DECLARE_EVENT_SOURCE(GlobalFunc_PlayMenuSound, 0x022FA258)
DECLARE_EVENT_SOURCE(GlobalFunc_StartGameRender, 0x022FA2E8)
DECLARE_EVENT_SOURCE(GlobalFunc_UserEvent, 0x022FA378)
DECLARE_EVENT_SOURCE(ExperienceMeterDisplayData, 0x023052A8)
DECLARE_EVENT_SOURCE(LevelUp_AnimFinished, 0x02305338)
DECLARE_EVENT_SOURCE(LevelUp_OnWidgetShown, 0x023053C8)
DECLARE_EVENT_SOURCE(LevelUp_OpenDataMenu, 0x02305458)
DECLARE_EVENT_SOURCE(LevelUp_ShowSkills, 0x023054E8)
DECLARE_EVENT_SOURCE(LocationTextWidget_FinishedQueue, 0x02305578)
DECLARE_EVENT_SOURCE(DisplayFatigueWarningEvent, 0x02305820)
DECLARE_EVENT_SOURCE(BSTValueRequestEvent<SaveLoadMessageStringEvent>, 0x023092FC)
DECLARE_EVENT_SOURCE(PlayerCrosshairModeEvent, 0x021F0C70)
DECLARE_EVENT_SOURCE(HUDNotificationEvent, 0x02312568)
DECLARE_EVENT_SOURCE(HUDNotification_MissionActiveWidgetUpdate, 0x023125F8)
DECLARE_EVENT_SOURCE(HUDNotification_OpenDataMenu, 0x02312688)
DECLARE_EVENT_SOURCE(HUDNotification_OpenMissionMenu, 0x02312718)
DECLARE_EVENT_SOURCE(HUDNotification_SetMissionActive, 0x023127A8)
DECLARE_EVENT_SOURCE(PlayerSetWeaponStateEvent, 0x02314378)
DECLARE_EVENT_SOURCE(BarterMenu_BuyItem, 0x023279A8)
DECLARE_EVENT_SOURCE(BarterMenu_CloseMenu, 0x02327A38)
DECLARE_EVENT_SOURCE(BarterMenu_HideModel, 0x02327AC8)
DECLARE_EVENT_SOURCE(BarterMenu_LoadModel, 0x02327B58)
DECLARE_EVENT_SOURCE(BarterMenu_SellItem, 0x02327BE8)
DECLARE_EVENT_SOURCE(BarterMenu_SetMouseOverModel, 0x02327C78)
DECLARE_EVENT_SOURCE(BarterMenu_ShowFailureMessage, 0x02327D08)
DECLARE_EVENT_SOURCE(BarterMenu_ViewedItem, 0x02327D98)
DECLARE_EVENT_SOURCE(MissionMenu_ClearState, 0x0232C3A0)
DECLARE_EVENT_SOURCE(MissionMenu_PlotToLocation, 0x0232C430)
DECLARE_EVENT_SOURCE(MissionMenu_RejectQuest, 0x0232C4C0)
DECLARE_EVENT_SOURCE(MissionMenu_SaveCategoryIndex, 0x0232C550)
DECLARE_EVENT_SOURCE(MissionMenu_SaveOpenedId, 0x0232C5E0)
DECLARE_EVENT_SOURCE(MissionMenu_ShowItemLocation, 0x0232C670)
DECLARE_EVENT_SOURCE(MissionMenu_ToggleTrackingQuest, 0x0232C79C)
DECLARE_EVENT_SOURCE(DataSlateButtons_acceptClicked, 0x02331ED8)
DECLARE_EVENT_SOURCE(DataSlateButtons_cancelClicked, 0x02331F68)
DECLARE_EVENT_SOURCE(DataSlateMenu_playSFX, 0x02331FF8)
DECLARE_EVENT_SOURCE(DataSlateMenu_toggleAudio, 0x02332088)
DECLARE_EVENT_SOURCE(InventoryMenu_DropItem, 0x02338D14)
DECLARE_EVENT_SOURCE(InventoryMenu_HideModel, 0x02338DA4)
DECLARE_EVENT_SOURCE(InventoryMenu_LoadModel, 0x02338E34)
DECLARE_EVENT_SOURCE(InventoryMenu_OnEnterCategory, 0x02338EC4)
DECLARE_EVENT_SOURCE(InventoryMenu_OpenCargoHold, 0x02338F54)
DECLARE_EVENT_SOURCE(InventoryMenu_SelectItem, 0x02338FE4)
DECLARE_EVENT_SOURCE(InventoryMenu_SetMouseOverModel, 0x02339074)
DECLARE_EVENT_SOURCE(InventoryMenu_ToggleFavorite, 0x023391AC)
DECLARE_EVENT_SOURCE(MissionBoard_MissionEntryChanged, 0x02345668)
DECLARE_EVENT_SOURCE(MissionBoard_MissionEntryPressed, 0x023456F8)
DECLARE_EVENT_SOURCE(MonocleMenu_Bioscan, 0x0234D518)
DECLARE_EVENT_SOURCE(MonocleMenu_FastTravel, 0x0234D5A8)
DECLARE_EVENT_SOURCE(MonocleMenu_Harvest, 0x0234D638)
DECLARE_EVENT_SOURCE(MonocleMenu_Initialize, 0x0234D6C8)
DECLARE_EVENT_SOURCE(MonocleMenu_Outpost, 0x0234D7FC)
DECLARE_EVENT_SOURCE(MonocleMenu_PhotoMode, 0x0234D88C)
DECLARE_EVENT_SOURCE(MonocleMenu_Shutdown, 0x0234D91C)
DECLARE_EVENT_SOURCE(MonocleMenu_SocialSpell, 0x0234D9AC)
DECLARE_EVENT_SOURCE(MonocleMenu_StartContainerView, 0x0234DA3C)
DECLARE_EVENT_SOURCE(MonocleMenu_StopContainerView, 0x0234DACC)
DECLARE_EVENT_SOURCE(MonocleMenu_SurfaceMap, 0x0234DB5C)
DECLARE_EVENT_SOURCE(MonocleMenu_UseListScrollControls, 0x0234DBEC)
DECLARE_EVENT_SOURCE(MonocleMenu_ZoomIn, 0x0234DC7C)
DECLARE_EVENT_SOURCE(MonocleMenu_ZoomOut, 0x0234DD0C)
DECLARE_EVENT_SOURCE(PhotoMode_InitializeCategory, 0x023535B8)
DECLARE_EVENT_SOURCE(PhotoMode_ResetToDefaults, 0x023536EC)
DECLARE_EVENT_SOURCE(PhotoMode_SliderChanged, 0x0235377C)
DECLARE_EVENT_SOURCE(PhotoMode_StepperChanged, 0x0235380C)
DECLARE_EVENT_SOURCE(PhotoMode_TakeSnapshot, 0x0235389C)
DECLARE_EVENT_SOURCE(PhotoMode_ToggleHelmet, 0x0235392C)
DECLARE_EVENT_SOURCE(PhotoMode_ToggleUI, 0x023539BC)
DECLARE_EVENT_SOURCE(PickpocketMenu_OnItemSelect, 0x0235C494)
DECLARE_EVENT_SOURCE(ResearchMenu_AddMaterial, 0x02361908)
DECLARE_EVENT_SOURCE(ResearchMenu_CategorySelected, 0x02361998)
DECLARE_EVENT_SOURCE(ResearchMenu_ExitMenu, 0x02361A28)
DECLARE_EVENT_SOURCE(ResearchMenu_HideModel, 0x02361AB8)
DECLARE_EVENT_SOURCE(ResearchMenu_PreviewProject, 0x02361B48)
DECLARE_EVENT_SOURCE(ResearchMenu_ProjectViewed, 0x02361BD8)
DECLARE_EVENT_SOURCE(ResearchMenu_SetInspectControls, 0x02361C68)
DECLARE_EVENT_SOURCE(ResearchMenu_ToggleTrackingProject, 0x02361CF8)
DECLARE_EVENT_SOURCE(UnlockedTerminalElementEvent, 0x02373D28)
DECLARE_EVENT_SOURCE(SecurityMenu_BackOutKey, 0x02373DB8)
DECLARE_EVENT_SOURCE(SecurityMenu_CloseMenu, 0x02373E48)
DECLARE_EVENT_SOURCE(SecurityMenu_ConfirmExit, 0x02373ED8)
DECLARE_EVENT_SOURCE(SecurityMenu_EliminateUnusedKeys, 0x02373F68)
DECLARE_EVENT_SOURCE(SecurityMenu_GetRingHint, 0x02373FF8)
DECLARE_EVENT_SOURCE(SecurityMenu_SelectNewKey, 0x02374088)
DECLARE_EVENT_SOURCE(SecurityMenu_TryUseKey, 0x02374118)
DECLARE_EVENT_SOURCE(ShipCrewAssignMenu_Assign, 0x023780D4)
DECLARE_EVENT_SOURCE(ShipCrewAssignMenu_Unassign, 0x02378164)
DECLARE_EVENT_SOURCE(ShipCrewMenu_ViewedItem, 0x023781F4)
DECLARE_EVENT_SOURCE(Refuel_Accept, 0x0237A094)
DECLARE_EVENT_SOURCE(Refuel_Cancel, 0x0237A124)
DECLARE_EVENT_SOURCE(SkillsMenu_Accept, 0x02380BB8)
DECLARE_EVENT_SOURCE(SkillsMenu_AddPatch, 0x02380C48)
DECLARE_EVENT_SOURCE(SkillsMenu_Cancel, 0x02380CD8)
DECLARE_EVENT_SOURCE(SkillsMenu_ChangeCursorVisibility, 0x02380D68)
DECLARE_EVENT_SOURCE(SkillsMenu_SaveLastCategory, 0x02380DF8)
DECLARE_EVENT_SOURCE(BSChargenAPI::BIDataUtils::MenuClosedEvent, 0x023A56EC)
DECLARE_EVENT_SOURCE(BSChargenAPI::BIDataUtils::PresetNPCChangedEvent, 0x023A577C)
DECLARE_EVENT_SOURCE(CharGen_BrowChange, 0x023A580C)
DECLARE_EVENT_SOURCE(CharGen_BrowColorChange, 0x023A589C)
DECLARE_EVENT_SOURCE(CharGen_CancelTextEntry, 0x023A592C)
DECLARE_EVENT_SOURCE(CharGen_CloseMenu, 0x023A59BC)
DECLARE_EVENT_SOURCE(CharGen_CyclePronoun, 0x023A5A4C)
DECLARE_EVENT_SOURCE(CharGen_DirtScarsEtcChange, 0x023A5ADC)
DECLARE_EVENT_SOURCE(CharGen_EndBodyChange, 0x023A5B6C)
DECLARE_EVENT_SOURCE(CharGen_EndTextEntry, 0x023A5BFC)
DECLARE_EVENT_SOURCE(CharGen_EyeColorChange, 0x023A5C8C)
DECLARE_EVENT_SOURCE(CharGen_FacialHairChange, 0x023A5D1C)
DECLARE_EVENT_SOURCE(CharGen_FacialHairColorChange, 0x023A5DAC)
DECLARE_EVENT_SOURCE(CharGen_HairChange, 0x023A5E3C)
DECLARE_EVENT_SOURCE(CharGen_HairColorChange, 0x023A5ECC)
DECLARE_EVENT_SOURCE(CharGen_HeadpartPlusSelectorChange, 0x023A5F5C)
DECLARE_EVENT_SOURCE(CharGen_HeadpartPresetChange, 0x023A5FEC)
DECLARE_EVENT_SOURCE(CharGen_JewelryChange, 0x023A607C)
DECLARE_EVENT_SOURCE(CharGen_JewelryColorChange, 0x023A610C)
DECLARE_EVENT_SOURCE(CharGen_MakeupChange, 0x023A619C)
DECLARE_EVENT_SOURCE(CharGen_MarkingsChange, 0x023A622C)
DECLARE_EVENT_SOURCE(CharGen_PostBlendColorOptionChange, 0x023A62BC)
DECLARE_EVENT_SOURCE(CharGen_PostBlendFaceChange, 0x023A634C)
DECLARE_EVENT_SOURCE(CharGen_PostBlendIntensityChange, 0x023A63DC)
DECLARE_EVENT_SOURCE(CharGen_PresetChange, 0x023A646C)
DECLARE_EVENT_SOURCE(CharGen_RollOffLocomotion, 0x023A64FC)
DECLARE_EVENT_SOURCE(CharGen_RollOnLocomotion, 0x023A658C)
DECLARE_EVENT_SOURCE(CharGen_RotatePaperdoll, 0x023A661C)
DECLARE_EVENT_SOURCE(CharGen_SetAdditionalSlider, 0x023A66AC)
DECLARE_EVENT_SOURCE(CharGen_SetBackground, 0x023A673C)
DECLARE_EVENT_SOURCE(CharGen_SetBlockInputUnderPopup, 0x023A67CC)
DECLARE_EVENT_SOURCE(CharGen_SetBodyValues, 0x023A685C)
DECLARE_EVENT_SOURCE(CharGen_SetCameraPosition, 0x023A68EC)
DECLARE_EVENT_SOURCE(CharGen_SetPronoun, 0x023A697C)
DECLARE_EVENT_SOURCE(CharGen_SetSex, 0x023A6A0C)
DECLARE_EVENT_SOURCE(CharGen_SetSlider, 0x023A6A9C)
DECLARE_EVENT_SOURCE(CharGen_SetTrait, 0x023A6B2C)
DECLARE_EVENT_SOURCE(CharGen_ShowChooseBackgroundMessage, 0x023A6BBC)
DECLARE_EVENT_SOURCE(CharGen_ShowPlayerRenameMessage, 0x023A6C4C)
DECLARE_EVENT_SOURCE(CharGen_SkintoneChange, 0x023A6CDC)
DECLARE_EVENT_SOURCE(CharGen_StartBodyChange, 0x023A6D6C)
DECLARE_EVENT_SOURCE(CharGen_StartTextEntry, 0x023A6DFC)
DECLARE_EVENT_SOURCE(CharGen_SwitchBodyType, 0x023A6E8C)
DECLARE_EVENT_SOURCE(CharGen_SwitchLocomotion, 0x023A6F1C)
DECLARE_EVENT_SOURCE(CharGen_TeethChange, 0x023A6FAC)
DECLARE_EVENT_SOURCE(CharGen_TeethRollOff, 0x023A703C)
DECLARE_EVENT_SOURCE(CharGen_TeethRollOn, 0x023A70CC)
DECLARE_EVENT_SOURCE(CharGen_ToggleMarking, 0x023A715C)
DECLARE_EVENT_SOURCE(CharGen_TogglePreviewHabSuit, 0x023A71EC)
DECLARE_EVENT_SOURCE(UIMenuChargenMenuDisablePaperdoll, 0x023A727C)
DECLARE_EVENT_SOURCE(DataMenu_CloseMenu, 0x023AE378)
DECLARE_EVENT_SOURCE(DataMenu_ClosedForSubMenu, 0x023AE408)
DECLARE_EVENT_SOURCE(DataMenu_Missions, 0x023AE498)
DECLARE_EVENT_SOURCE(DataMenu_PlotToLocation, 0x023AE5CC)
DECLARE_EVENT_SOURCE(DataMenu_Reopened, 0x023AE65C)
DECLARE_EVENT_SOURCE(DataMenu_SelectedAttributesMenu, 0x023AE6EC)
DECLARE_EVENT_SOURCE(DataMenu_SelectedInventoryMenu, 0x023AE77C)
DECLARE_EVENT_SOURCE(DataMenu_SelectedMapMenu, 0x023AE80C)
DECLARE_EVENT_SOURCE(DataMenu_SelectedPowersMenu, 0x023AE89C)
DECLARE_EVENT_SOURCE(DataMenu_SelectedShipMenu, 0x023AE92C)
DECLARE_EVENT_SOURCE(DataMenu_SelectedStatusMenu, 0x023AE9BC)
DECLARE_EVENT_SOURCE(DataMenu_SetMenuForQuickEntry, 0x023AEA4C)
DECLARE_EVENT_SOURCE(DataMenu_SetPaperDollActive, 0x023AEADC)
DECLARE_EVENT_SOURCE(PauseMenu_ActionCanceled, 0x023B9AB4)
DECLARE_EVENT_SOURCE(PauseMenu_ConfirmAction, 0x023B9B44)
DECLARE_EVENT_SOURCE(PauseMenu_ConfirmLoad, 0x023B9BD4)
DECLARE_EVENT_SOURCE(PauseMenu_ConfirmSave, 0x023B9C64)
DECLARE_EVENT_SOURCE(PauseMenu_DeleteSave, 0x023B9CF4)
DECLARE_EVENT_SOURCE(PauseMenu_QuitToDesktop, 0x023B9D84)
DECLARE_EVENT_SOURCE(PauseMenu_SetCharacter, 0x023B9E14)
DECLARE_EVENT_SOURCE(PauseMenu_StartAction, 0x023B9EA4)
DECLARE_EVENT_SOURCE(PauseMenu_StartLoad, 0x023B9F34)
DECLARE_EVENT_SOURCE(PauseMenu_UploadSave, 0x023B9FC4)
DECLARE_EVENT_SOURCE(PlayBink_CloseMenu, 0x023BB240)
DECLARE_EVENT_SOURCE(Spaceship::GravJumpEvent, 0x023C0E94)
DECLARE_EVENT_SOURCE(Spaceship::LandedSetEvent, 0x023C0F24)
DECLARE_EVENT_SOURCE(Reticle_OnLongAnimFinished, 0x023C0FB4)
DECLARE_EVENT_SOURCE(ShipHudQuickContainer_TransferItem, 0x023C1044)
DECLARE_EVENT_SOURCE(ShipHud_AbortJump, 0x023C10D4)
DECLARE_EVENT_SOURCE(ShipHud_DockRequested, 0x023C1164)
DECLARE_EVENT_SOURCE(ShipHud_HailShip, 0x023C11F4)
DECLARE_EVENT_SOURCE(ShipHud_UpdateTargetPanelRect, 0x023C1284)
DECLARE_EVENT_SOURCE(TakeoffMenu_CloseMenu, 0x023C1314)
DECLARE_EVENT_SOURCE(TakeoffMenu_ExitShip, 0x023C13A4)
DECLARE_EVENT_SOURCE(TakeoffMenu_Launch, 0x023C1434)
DECLARE_EVENT_SOURCE(StarMapMenu_LandingInputInProgress, 0x023E11F0)
DECLARE_EVENT_SOURCE(StarMapMenu_MarkerGroupContainerVisibilityChanged, 0x023E1280)
DECLARE_EVENT_SOURCE(StarMapMenu_MarkerGroupEntryClicked, 0x023E1310)
DECLARE_EVENT_SOURCE(StarMapMenu_MarkerGroupEntryHoverChanged, 0x023E13A0)
DECLARE_EVENT_SOURCE(StarMapMenu_ScanPlanet, 0x023E1430)
DECLARE_EVENT_SOURCE(StarMapMenu_SelectedLandingSite, 0x023E14C0)
DECLARE_EVENT_SOURCE(StarMapMenu_SelectedLandingSiteFailed, 0x023E1550)
DECLARE_EVENT_SOURCE(StarMapMenu_ShowRealCursor, 0x023E15E0)
DECLARE_EVENT_SOURCE(StarMapMenu_QuickSelectChange, 0x023F68B0)
DECLARE_EVENT_SOURCE(StarMapMenu_Galaxy_FocusSystem, 0x02407F50)
DECLARE_EVENT_SOURCE(StarMapMenu_OnGalaxyViewInitialized, 0x02407FE0)
DECLARE_EVENT_SOURCE(StarMapMenu_ExecuteRoute, 0x02412D84)
DECLARE_EVENT_SOURCE(StarMapMenu_OnCancel, 0x02412E14)
DECLARE_EVENT_SOURCE(StarMapMenu_OnClearRoute, 0x02412EA4)
DECLARE_EVENT_SOURCE(StarMapMenu_OnExitStarMap, 0x02412F34)
DECLARE_EVENT_SOURCE(StarMapMenu_OnHintButtonClicked, 0x02412FC4)
DECLARE_EVENT_SOURCE(StarMapMenu_OnOutpostEntrySelected, 0x02413054)
DECLARE_EVENT_SOURCE(StarMapMenu_ReadyToClose, 0x024130E4)
DECLARE_EVENT_SOURCE(SurfaceMapMenu_MarkerClicked, 0x02432BFC)
DECLARE_EVENT_SOURCE(SurfaceMapMenu_TryPlaceCustomMarker, 0x02432C8C)
DECLARE_EVENT_SOURCE(TerminalMenu_CancelEvent, 0x0244DDF0)
DECLARE_EVENT_SOURCE(Terminal_CloseAllViews, 0x0244DE80)
DECLARE_EVENT_SOURCE(Terminal_CloseTopView, 0x0244DF10)
DECLARE_EVENT_SOURCE(Terminal_CloseView, 0x0244DFA0)
DECLARE_EVENT_SOURCE(Terminal_MenuItemClick, 0x0244E030)
DECLARE_EVENT_SOURCE(TestMenu_DoAction, 0x02459DB8)
DECLARE_EVENT_SOURCE(TestMenu_ExitMenu, 0x02459E48)
DECLARE_EVENT_SOURCE(TestMenu_ShowImages, 0x02459ED8)
DECLARE_EVENT_SOURCE(TestMenu_ShowResources, 0x02459F68)
DECLARE_EVENT_SOURCE(TestMenu_TestAll, 0x02459FF8)
DECLARE_EVENT_SOURCE(TextInputMenu_EndEditText, 0x0245DF34)
DECLARE_EVENT_SOURCE(TextInputMenu_InputCanceled, 0x0245DFC4)
DECLARE_EVENT_SOURCE(TextInputMenu_StartEditText, 0x0245E054)
DECLARE_EVENT_SOURCE(CraftingMenu_Highlight3D, 0x0245F324)
DECLARE_EVENT_SOURCE(CraftingMenu_RevertHighlight, 0x0245F3B4)
DECLARE_EVENT_SOURCE(WorkshopBuilderMenu_ChangeBuildItem, 0x02461A18)
DECLARE_EVENT_SOURCE(WorkshopBuilderMenu_SelectedItem, 0x02461AA8)
DECLARE_EVENT_SOURCE(WorkshopBuilderMenu_ToggleTracking, 0x02461B38)
DECLARE_EVENT_SOURCE(WorkshopMenu_AttemptBuild, 0x0246A3A4)
DECLARE_EVENT_SOURCE(WorkshopMenu_CancelAction, 0x0246A434)
DECLARE_EVENT_SOURCE(WorkshopMenu_ChangeVariant, 0x0246A4C4)
DECLARE_EVENT_SOURCE(WorkshopMenu_ConnectionEvent, 0x0246A554)
DECLARE_EVENT_SOURCE(WorkshopMenu_ExitMenu, 0x0246A5E4)
DECLARE_EVENT_SOURCE(WorkshopMenu_MessageCallback, 0x0246A674)
DECLARE_EVENT_SOURCE(WorkshopMenu_SelectedCategory, 0x0246A704)
DECLARE_EVENT_SOURCE(WorkshopMenu_SelectedGridObject, 0x0246A794)
DECLARE_EVENT_SOURCE(WorkshopMenu_ShowExtras, 0x0246A824)
DECLARE_EVENT_SOURCE(WorkshopMenu_SwitchMode, 0x0246A8B4)
DECLARE_EVENT_SOURCE(WorkshopMenu_ToggleDistance, 0x0246A944)
DECLARE_EVENT_SOURCE(WorkshopMenu_ToggleTracking, 0x0246A9D4)
DECLARE_EVENT_SOURCE(WorkshopMenu_ToggleView, 0x0246AA64)
DECLARE_EVENT_SOURCE(WorkshopQuickMenu_ConfirmAction, 0x0246C4B4)
DECLARE_EVENT_SOURCE(WorkshopQuickMenu_ExitMenu, 0x0246C544)
DECLARE_EVENT_SOURCE(WorkshopTargetMenu_TargetHovered, 0x02472A80)
DECLARE_EVENT_SOURCE(WorkshopTargetMenu_TargetPicked, 0x02472B10)
DECLARE_EVENT_SOURCE(WorkshopActionButton_HoldFinished, 0x02489C64)
DECLARE_EVENT_SOURCE(WorkshopActionButton_HoldStopped, 0x02489CF4)
DECLARE_EVENT_SOURCE(WorkshopShared_SetActionHandles, 0x02489D84)
DECLARE_EVENT_SOURCE(WorkshopShared_StartAction, 0x02489E14)
DECLARE_EVENT_SOURCE(ModelReferenceEffectEvents::ReferenceEffectFinished, 0x024A9F90)
DECLARE_EVENT_SOURCE(BGSAcousticSpaceListener::StackChangedEvent, 0x024BE2F4)
DECLARE_EVENT_SOURCE(SpaceshipBIEvents::ShipPowerAllocationBIEventSent, 0x024D60D4)
DECLARE_EVENT_SOURCE(BGSActorDeathEvent, 0x0214C33C)
DECLARE_EVENT_SOURCE(Research::ResearchProgressEvent, 0x0253732C)
DECLARE_EVENT_SOURCE(BSTValueRequestEvent<PlayerAutoAimActorEvent>, 0x02779EF8)
DECLARE_EVENT_SOURCE(PlayerInCombatChangeEvent, 0x02792BC0)
DECLARE_EVENT_SOURCE(BlurEvent, 0x02ACF780)
DECLARE_EVENT_SOURCE(ContainerMenu_HideModel, 0x02AF2070)
DECLARE_EVENT_SOURCE(ContainerMenu_Jettison, 0x02AF2100)
DECLARE_EVENT_SOURCE(ContainerMenu_LoadModel, 0x02AF2190)
DECLARE_EVENT_SOURCE(ContainerMenu_OpenRefuelMenu, 0x02AF2220)
DECLARE_EVENT_SOURCE(ContainerMenu_SetMouseOverModel, 0x02AF22B0)
DECLARE_EVENT_SOURCE(ContainerMenu_TakeAll, 0x02AF2340)
DECLARE_EVENT_SOURCE(ContainerMenu_ToggleEquip, 0x02AF23D0)
DECLARE_EVENT_SOURCE(ContainerMenu_TransferItem, 0x02AF24FC)
DECLARE_EVENT_SOURCE(DialogueMenu_OnDialogueSelect, 0x02AF5FC0)
DECLARE_EVENT_SOURCE(DialogueMenu_OnListVisibilityChange, 0x02AF6050)
DECLARE_EVENT_SOURCE(DialogueMenu_OnPersuasionAutoWin, 0x02AF60E0)
DECLARE_EVENT_SOURCE(DialogueMenu_OnScriptedDialogueSelect, 0x02AF6170)
DECLARE_EVENT_SOURCE(DialogueMenu_RequestExit, 0x02AF6200)
DECLARE_EVENT_SOURCE(DialogueMenu_RequestSkipDialogue, 0x02AF6290)
DECLARE_EVENT_SOURCE(BSTValueRequestEvent<FaderMenuDisplayState>, 0x02AF7150)
DECLARE_EVENT_SOURCE(FavoritesMenu_AssignQuickkey, 0x02B03A30)
DECLARE_EVENT_SOURCE(FavoritesMenu_UseQuickkey, 0x02B03AC0)
DECLARE_EVENT_SOURCE(LoadingMenu_RefreshText, 0x02B07A0C)
DECLARE_EVENT_SOURCE(MainMenu_ActionCanceled, 0x02B0BCEC)
DECLARE_EVENT_SOURCE(MainMenu_ActionConfirmed, 0x02B0BD7C)
DECLARE_EVENT_SOURCE(MainMenu_ConfirmLoad, 0x02B0BE0C)
DECLARE_EVENT_SOURCE(MainMenu_DeleteSave, 0x02B0BE9C)
DECLARE_EVENT_SOURCE(MainMenu_SetCharacter, 0x02B0BFCC)
DECLARE_EVENT_SOURCE(MainMenu_StartAction, 0x02B0C05C)
DECLARE_EVENT_SOURCE(MainMenu_StartLoad, 0x02B0C0EC)
DECLARE_EVENT_SOURCE(MainMenu_UploadSave, 0x02B0C17C)
DECLARE_EVENT_SOURCE(BGSAppPausedEvent, 0x02B0DB44)
DECLARE_EVENT_SOURCE(MessageBoxMenu_OnBackOut, 0x02B12C60)
DECLARE_EVENT_SOURCE(MessageBoxMenu_OnButtonPress, 0x02B12CF0)
DECLARE_EVENT_SOURCE(MessageBoxMenu_OnScriptedButtonPress, 0x02B12D80)
DECLARE_EVENT_SOURCE(SleepWaitMenu_InterruptRest, 0x02B179E8)
DECLARE_EVENT_SOURCE(SleepWaitMenu_StartRest, 0x02B17A78)
DECLARE_EVENT_SOURCE(Spaceship::BoughtEvent, 0x02DF6F70)
DECLARE_EVENT_SOURCE(Spaceship::ContrabandScanWarningEvent, 0x02DF7000)
DECLARE_EVENT_SOURCE(Spaceship::DockEvent, 0x02DF7090)
DECLARE_EVENT_SOURCE(Spaceship::DynamicNavmeshCompleted, 0x02E340D0)
DECLARE_EVENT_SOURCE(Spaceship::FarTravelEvent, 0x02DF71B0)
DECLARE_EVENT_SOURCE(Spaceship::LandingEvent, 0x02DF7240)
DECLARE_EVENT_SOURCE(Spaceship::PlanetScanEvent, 0x02DF72D0)
DECLARE_EVENT_SOURCE(Spaceship::RampDownEvent, 0x02DF7360)
DECLARE_EVENT_SOURCE(Spaceship::RefueledEvent, 0x02DF73F0)
DECLARE_EVENT_SOURCE(Spaceship::RegisteredEvent, 0x02DF7480)
DECLARE_EVENT_SOURCE(Spaceship::ShieldEvent, 0x02DF7510)
DECLARE_EVENT_SOURCE(Spaceship::ShipAddedEvent, 0x02DF75A0)
DECLARE_EVENT_SOURCE(Spaceship::ShipCollisionEvent, 0x02DF7630)
DECLARE_EVENT_SOURCE(Spaceship::ShipCustomizedEvent, 0x02DF76C0)
DECLARE_EVENT_SOURCE(Spaceship::SoldEvent, 0x02DF7750)
DECLARE_EVENT_SOURCE(Spaceship::SystemDamagedEvent, 0x02DF77E0)
DECLARE_EVENT_SOURCE(Spaceship::SystemPowerAllocationEvent, 0x02DF7870)
DECLARE_EVENT_SOURCE(Spaceship::SystemPowerChangeEvent, 0x02DF7900)
DECLARE_EVENT_SOURCE(Spaceship::SystemRepairedBIEvent, 0x02DF7990)
DECLARE_EVENT_SOURCE(Spaceship::SystemRepairedEvent, 0x02DF7A20)
DECLARE_EVENT_SOURCE(Spaceship::TakeDamagEvent, 0x02DF7AB0)
DECLARE_EVENT_SOURCE(ContextStackChangedEvent, 0x02F71ED4)
DECLARE_EVENT_SOURCE(UpdateSceneRectEvent, 0x031757E0)
DECLARE_EVENT_SOURCE(GameStalledEvent, 0x03342118)

// more

DECLARE_EVENT_SOURCE(TESCellNavmeshGeneratedEvent, 0x005CAA60)
DECLARE_EVENT_SOURCE(TESHitEvent, 0x005CB2F0)
DECLARE_EVENT_SOURCE(FirstThirdPersonSwitch::Event, 0x005CBCE0)
DECLARE_EVENT_SOURCE(PerkChanged::Event, 0x013387C0)
DECLARE_EVENT_SOURCE(TESHarvestEvent::ItemHarvested, 0x0154B620)
DECLARE_EVENT_SOURCE(ActivityEvents::ActivityCompletedEvent, 0x015538A0)
DECLARE_EVENT_SOURCE(ChallengeCompletedEvent::Event, 0x01555BC0)
DECLARE_EVENT_SOURCE(InventoryItemEvent::Event, 0x0158E590)
DECLARE_EVENT_SOURCE(BooksRead::Event, 0x019A1370)
DECLARE_EVENT_SOURCE(LocationExplored::Event, 0x019DAB20)
DECLARE_EVENT_SOURCE(LocationLinked::Event, 0x019DAB90)
DECLARE_EVENT_SOURCE(Activation::Event, 0x01A9DA80)
DECLARE_EVENT_SOURCE(ActorCellChangeEvent, 0x01AAFC90)
DECLARE_EVENT_SOURCE(ActorHeadAttachedEvent, 0x01AAFD00)
DECLARE_EVENT_SOURCE(ActorValueEvents::ActorValueChangedEvent, 0x01AAFD70)
DECLARE_EVENT_SOURCE(AliasChangeEvent, 0x01AAFDE0)
DECLARE_EVENT_SOURCE(AnimationGraphDependentEvent, 0x01AAFE50)
DECLARE_EVENT_SOURCE(BGSAffinityEventEvent, 0x01AAFEC0)
DECLARE_EVENT_SOURCE(BGSCellGridLoadEvent, 0x01AAFF30)
DECLARE_EVENT_SOURCE(BGSEventProcessedEvent, 0x01AAFFA0)
DECLARE_EVENT_SOURCE(BGSHavokWorldCreatedEvent, 0x01AB0010)
DECLARE_EVENT_SOURCE(BGSLocationLoadedEvent, 0x01AB0080)
DECLARE_EVENT_SOURCE(BGSOnPlayerCompanionDismiss, 0x01AB00F0)
DECLARE_EVENT_SOURCE(BGSOnPlayerCompleteResearchEvent, 0x01AB0160)
DECLARE_EVENT_SOURCE(BGSOnPlayerCraftItemEvent, 0x01AB01D0)
DECLARE_EVENT_SOURCE(BGSOnPlayerCreateRobotEvent, 0x01AB0240)
DECLARE_EVENT_SOURCE(BGSOnPlayerEnterVertibirdEvent, 0x01AB02B0)
DECLARE_EVENT_SOURCE(BGSOnPlayerFallLongDistances, 0x01AB0320)
DECLARE_EVENT_SOURCE(BGSOnPlayerFireWeaponEvent, 0x01AB0390)
DECLARE_EVENT_SOURCE(BGSOnPlayerHealTeammateEvent, 0x01AB0400)
DECLARE_EVENT_SOURCE(BGSOnPlayerLoiteringBeginEvent, 0x01AB0470)
DECLARE_EVENT_SOURCE(BGSOnPlayerLoiteringEndEvent, 0x01AB04E0)
DECLARE_EVENT_SOURCE(BGSOnPlayerModArmorWeaponEvent, 0x01AB0550)
DECLARE_EVENT_SOURCE(BGSOnPlayerModRobotEvent, 0x01AB05C0)
DECLARE_EVENT_SOURCE(BGSOnPlayerSwimmingEvent, 0x01AB0630)
DECLARE_EVENT_SOURCE(BGSOnPlayerUseWorkBenchEvent, 0x01AB06A0)
DECLARE_EVENT_SOURCE(BGSOnSpeechChallengeAvailable, 0x01AB0710)
DECLARE_EVENT_SOURCE(BGSRadiationDamageEvent, 0x01AB0780)
DECLARE_EVENT_SOURCE(BuilderMenuSelectEvent, 0x01AB07F0)
DECLARE_EVENT_SOURCE(CrewAssignedEvent, 0x01AB08D0)
DECLARE_EVENT_SOURCE(CrewDismissedEvent, 0x01AB0940)
DECLARE_EVENT_SOURCE(DestroyedEvent, 0x01AB09B0)
DECLARE_EVENT_SOURCE(HomeShipSetEvent, 0x01AB0B70)
DECLARE_EVENT_SOURCE(InstantReferenceInteractionEvent, 0x01AB0BE0)
DECLARE_EVENT_SOURCE(ItemConsumedEvent, 0x01AB0C50)
DECLARE_EVENT_SOURCE(ItemSwappedEvent, 0x01AB0CC0)
DECLARE_EVENT_SOURCE(LockPickedEvent, 0x01AB0D30)
DECLARE_EVENT_SOURCE(MapMarkerDiscoveredEvent, 0x01AB0860)
DECLARE_EVENT_SOURCE(ObjectScannedEvent, 0x01AB0E10)
DECLARE_EVENT_SOURCE(PlayerAddItemEvent, 0x01AB0E80)
DECLARE_EVENT_SOURCE(PlayerArrestedEvent, 0x01AB0EF0)
DECLARE_EVENT_SOURCE(PlayerAssaultActorEvent, 0x01AB0F60)
DECLARE_EVENT_SOURCE(PlayerBuyShipEvent, 0x01AB0FD0)
DECLARE_EVENT_SOURCE(PlayerCrimeGoldEvent, 0x01AB1040)
DECLARE_EVENT_SOURCE(PlayerFailedPlotRouteEvent, 0x01AB10B0)
DECLARE_EVENT_SOURCE(PlayerJailEvent, 0x01AB1120)
DECLARE_EVENT_SOURCE(PlayerModifiedShipEvent, 0x01AB1190)
DECLARE_EVENT_SOURCE(PlayerMurderActorEvent, 0x01AB1200)
DECLARE_EVENT_SOURCE(PlayerPayFineEvent, 0x01AB1270)
DECLARE_EVENT_SOURCE(PlayerPlanetSurveyCompleteEvent, 0x01AB12E0)
DECLARE_EVENT_SOURCE(PlayerPlanetSurveyProgressEvent, 0x01AB1350)
DECLARE_EVENT_SOURCE(PlayerSellShipEvent, 0x01AB13C0)
DECLARE_EVENT_SOURCE(PlayerTrespassEvent, 0x01AB1430)
DECLARE_EVENT_SOURCE(QuickContainerOpenedEvent, 0x01AB14A0)
DECLARE_EVENT_SOURCE(RefControlChangedEvent, 0x01AB1510)
DECLARE_EVENT_SOURCE(ReferenceDestroyedEvent, 0x01AB1580)
DECLARE_EVENT_SOURCE(SpeechChallengeCompletionEvent, 0x01AB15F0)
DECLARE_EVENT_SOURCE(TESActivateEvent, 0x01AB1660)
DECLARE_EVENT_SOURCE(TESActiveEffectApplyFinishEvent, 0x01AB16D0)
DECLARE_EVENT_SOURCE(TESActiveEffectRemovedEvent, 0x01AB1740)
DECLARE_EVENT_SOURCE(TESActorActivatedRefEvent, 0x01AB17B0)
DECLARE_EVENT_SOURCE(TESActorLocationChangeEvent, 0x01AB1820)
DECLARE_EVENT_SOURCE(TESBookReadEvent, 0x01AB1890)
DECLARE_EVENT_SOURCE(TESCellCriticalRefsAttachedEvent, 0x01AB1900)
DECLARE_EVENT_SOURCE(TESCellFullyLoadedEvent, 0x01AB1970)
DECLARE_EVENT_SOURCE(TESCellGravityChangeEvent, 0x01AB19E0)
DECLARE_EVENT_SOURCE(TESCellReadyToApplyDecalsEvent, 0x01AB1A50)
DECLARE_EVENT_SOURCE(TESCellReference3DAttachEvent, 0x01AB1AC0)
DECLARE_EVENT_SOURCE(TESCellReferenceAttachDetachEvent, 0x01AB1B30)
DECLARE_EVENT_SOURCE(TESCombatEvent, 0x01AB1BA0)
DECLARE_EVENT_SOURCE(TESCombatListEvent, 0x01AB1C10)
DECLARE_EVENT_SOURCE(TESCommandModeCompleteCommandEvent, 0x01AB1C80)
DECLARE_EVENT_SOURCE(TESCommandModeEnterEvent, 0x01AB1CF0)
DECLARE_EVENT_SOURCE(TESCommandModeExitEvent, 0x01AB1D60)
DECLARE_EVENT_SOURCE(TESCommandModeGiveCommandEvent, 0x01AB1DD0)
DECLARE_EVENT_SOURCE(TESConsciousnessEvent, 0x01AB1E40)
DECLARE_EVENT_SOURCE(TESContainerChangedEvent, 0x01AB1EB0)
DECLARE_EVENT_SOURCE(TESDeathEvent, 0x01AB1F20)
DECLARE_EVENT_SOURCE(TESDeferredKillEvent, 0x01AB1F90)
DECLARE_EVENT_SOURCE(TESDestructionStageChangedEvent, 0x01AB2000)
DECLARE_EVENT_SOURCE(TESEnterBleedoutEvent, 0x01AB2070)
DECLARE_EVENT_SOURCE(TESEnterSneakingEvent, 0x01AB20E0)
DECLARE_EVENT_SOURCE(TESEquipEvent, 0x01AB2150)
DECLARE_EVENT_SOURCE(TESEscortWaitStartEvent, 0x01AB21C0)
DECLARE_EVENT_SOURCE(TESEscortWaitStopEvent, 0x01AB2230)
DECLARE_EVENT_SOURCE(TESExitBleedoutEvent, 0x01AB22A0)
DECLARE_EVENT_SOURCE(TESExitFurnitureEvent, 0x01AB2310)
DECLARE_EVENT_SOURCE(TESFormDeleteEvent, 0x01AB2380)
DECLARE_EVENT_SOURCE(TESFormIDRemapEvent, 0x01AB23F0)
DECLARE_EVENT_SOURCE(TESFurnitureEvent, 0x01AB2460)
DECLARE_EVENT_SOURCE(TESGrabReleaseEvent, 0x01AB24D0)
DECLARE_EVENT_SOURCE(TESInitScriptEvent, 0x01AB2540)
DECLARE_EVENT_SOURCE(TESLimbCrippleEvent, 0x01AB25B0)
DECLARE_EVENT_SOURCE(TESLoadGameEvent, 0x01AB2620)
DECLARE_EVENT_SOURCE(TESLocationExploredEvent, 0x01AB2690)
DECLARE_EVENT_SOURCE(TESLockChangedEvent, 0x01AB2700)
DECLARE_EVENT_SOURCE(TESMagicEffectApplyEvent, 0x01AB2770)
DECLARE_EVENT_SOURCE(TESMissionAcceptedEvent, 0x01AB27E0)
DECLARE_EVENT_SOURCE(TESObjectLoadedEvent, 0x01AB2850)
DECLARE_EVENT_SOURCE(TESObjectREFRTranslationEvent, 0x01AB28C0)
DECLARE_EVENT_SOURCE(TESOnPCDialogueTargetEvent, 0x01AB2930)
DECLARE_EVENT_SOURCE(TESOpenCloseEvent, 0x01AB29A0)
DECLARE_EVENT_SOURCE(TESPackageEvent, 0x01AB2A10)
DECLARE_EVENT_SOURCE(TESPerkEntryRunEvent, 0x01AB2A80)
DECLARE_EVENT_SOURCE(TESPickNewIdleEvent, 0x01AB2AF0)
DECLARE_EVENT_SOURCE(TESPickpocketFailedEvent, 0x01AB2B60)
DECLARE_EVENT_SOURCE(TESPlayerActiveEffectEvent, 0x01AB2BD0)
DECLARE_EVENT_SOURCE(TESPlayerFollowerWarpEvent, 0x01AB2C40)
DECLARE_EVENT_SOURCE(TESQuestInitEvent, 0x01AB2CB0)
DECLARE_EVENT_SOURCE(TESQuestRejectedEvent, 0x01AB2D20)
DECLARE_EVENT_SOURCE(TESQuestStageEvent, 0x01AB2D90)
DECLARE_EVENT_SOURCE(TESQuestStageItemDoneEvent, 0x01AB2E00)
DECLARE_EVENT_SOURCE(TESQuestStartStopEvent, 0x01AB2E70)
DECLARE_EVENT_SOURCE(TESQuestTimerEvent, 0x01AB2EE0)
DECLARE_EVENT_SOURCE(TESResetEvent, 0x01AB2F50)
DECLARE_EVENT_SOURCE(TESResolveNPCTemplatesEvent, 0x01AB2FC0)
DECLARE_EVENT_SOURCE(TESSceneActionEvent, 0x01AB3030)
DECLARE_EVENT_SOURCE(TESSceneEvent, 0x01AB30A0)
DECLARE_EVENT_SOURCE(TESScenePhaseEvent, 0x01AB3110)
DECLARE_EVENT_SOURCE(TESSellEvent, 0x01AB3180)
DECLARE_EVENT_SOURCE(TESSleepStartEvent, 0x01AB31F0)
DECLARE_EVENT_SOURCE(TESSleepStopEvent, 0x01AB3260)
DECLARE_EVENT_SOURCE(TESSpellCastEvent, 0x01AB32D0)
DECLARE_EVENT_SOURCE(TESSpellCastFailureEvent, 0x01AB3340)
DECLARE_EVENT_SOURCE(TESSwitchRaceCompleteEvent, 0x01AB33B0)
DECLARE_EVENT_SOURCE(TESTopicInfoEvent, 0x01AB3420)
DECLARE_EVENT_SOURCE(TESTrackedStatsEvent, 0x01AB3490)
DECLARE_EVENT_SOURCE(TESTrapHitEvent, 0x01AB3500)
DECLARE_EVENT_SOURCE(TESTriggerEnterEvent, 0x01AB3570)
DECLARE_EVENT_SOURCE(TESTriggerEvent, 0x01AB35E0)
DECLARE_EVENT_SOURCE(TESTriggerLeaveEvent, 0x01AB3650)
DECLARE_EVENT_SOURCE(TESUniqueIDChangeEvent, 0x01AB3730)
DECLARE_EVENT_SOURCE(TESWaitStartEvent, 0x01AB37A0)
DECLARE_EVENT_SOURCE(TESWaitStopEvent, 0x01AB3810)
DECLARE_EVENT_SOURCE(TerminalMenuMenuItemRunEvent, 0x01AB3880)
DECLARE_EVENT_SOURCE(TerminalMenuOnEnterEvent, 0x01AB38F0)
DECLARE_EVENT_SOURCE(WorkshopNPCTransferEvent, 0x01AB3960)
DECLARE_EVENT_SOURCE(TESObjectREFRIsReadyForAttachEvent, 0x01AB39D0)
DECLARE_EVENT_SOURCE(DefaultObjectsReadyEvent::Event, 0x01ADFB20)
DECLARE_EVENT_SOURCE(ObjectiveState::Event, 0x01B8CF00)
DECLARE_EVENT_SOURCE(QuestStatus::Event, 0x01BEEB20)
DECLARE_EVENT_SOURCE(RefillAliasEvent::Event, 0x01BEEB90)
DECLARE_EVENT_SOURCE(TESQuestEvent::Event, 0x01BEEC00)
DECLARE_EVENT_SOURCE(RolloverIsCrimeEvent::Event, 0x021F15D0)
DECLARE_EVENT_SOURCE(HideSubtitleEvent::Event, 0x021FC9D0)
DECLARE_EVENT_SOURCE(ShowSubtitleEvent::Event, 0x021FCA40)
DECLARE_EVENT_SOURCE(MissionMenuStateEvent::Event, 0x02259020)
DECLARE_EVENT_SOURCE(ClearShipHudTarget::Event, 0x022B7690)
DECLARE_EVENT_SOURCE(TryUpdateShipHudTarget::Event, 0x022B7700)
DECLARE_EVENT_SOURCE(LocationTextEvent::Event, 0x023142A0)
DECLARE_EVENT_SOURCE(TraitDiscoveryTextEvent::Event, 0x02314310)
DECLARE_EVENT_SOURCE(DaysPassed::Event, 0x025B0110)
DECLARE_EVENT_SOURCE(HourPassed::Event, 0x025B0180)
DECLARE_EVENT_SOURCE(ActorDamage::Event, 0x026946E0)
DECLARE_EVENT_SOURCE(ActorItemEquipped::Event, 0x02694750)
DECLARE_EVENT_SOURCE(ActorKill::Event, 0x026947C0)
DECLARE_EVENT_SOURCE(AssaultCrime::Event, 0x02694830)
DECLARE_EVENT_SOURCE(DisarmedEvent::Event, 0x026948A0)
DECLARE_EVENT_SOURCE(FactionRankChange::Event, 0x02694910)
DECLARE_EVENT_SOURCE(GrandTheftHorse::Event, 0x02694980)
DECLARE_EVENT_SOURCE(MurderCrime::Event, 0x026949F0)
DECLARE_EVENT_SOURCE(PiracyCrime::Event, 0x02694A60)
DECLARE_EVENT_SOURCE(Bleedout::Event, 0x026C5930)
DECLARE_EVENT_SOURCE(ContractedDisease::Event, 0x026C59A0)
DECLARE_EVENT_SOURCE(ReloadWeaponEvent::Event, 0x026C5A10)
DECLARE_EVENT_SOURCE(SpellsLearned::Event, 0x026D4CE0)
DECLARE_EVENT_SOURCE(Bounty::Event, 0x027793A0)
DECLARE_EVENT_SOURCE(ChestLooted::Event, 0x02779410)
DECLARE_EVENT_SOURCE(CriticalHitEvent::Event, 0x02779480)
DECLARE_EVENT_SOURCE(CustomMarkerUpdate::Event, 0x027794F0)
DECLARE_EVENT_SOURCE(DaysJailed::Event, 0x02779560)
DECLARE_EVENT_SOURCE(EnteredUnity::Event, 0x027795D0)
DECLARE_EVENT_SOURCE(FinePaid::Event, 0x02779640)
DECLARE_EVENT_SOURCE(ItemCrafted::Event, 0x027796B0)
DECLARE_EVENT_SOURCE(ItemSteal::Event, 0x02779720)
DECLARE_EVENT_SOURCE(JailEscape::Event, 0x02779790)
DECLARE_EVENT_SOURCE(Jailing::Event, 0x02779800)
DECLARE_EVENT_SOURCE(LevelIncrease::Event, 0x02779870)
DECLARE_EVENT_SOURCE(LocationMarkerArrayUpdate::Event, 0x027798E0)
DECLARE_EVENT_SOURCE(PlayerActiveEffectChanged::Event, 0x02779950)
DECLARE_EVENT_SOURCE(PlayerAmmoChanged::Event, 0x027799C0)
DECLARE_EVENT_SOURCE(PlayerCharacterQuestEvent::Event, 0x02779A30)
DECLARE_EVENT_SOURCE(PlayerDifficultySettingChanged::Event, 0x02779AA0)
DECLARE_EVENT_SOURCE(PlayerFastTravel::Event, 0x02779B10)
DECLARE_EVENT_SOURCE(PlayerInDialogueChanged::Event, 0x02779B80)
DECLARE_EVENT_SOURCE(PlayerLifeStateChanged::Event, 0x02779BF0)
DECLARE_EVENT_SOURCE(PlayerPickpocketSuccess::Event, 0x02779C60)
DECLARE_EVENT_SOURCE(PoisonedWeapon::Event, 0x02779CD0)
DECLARE_EVENT_SOURCE(TerminalHacked::Event, 0x02779D40)
DECLARE_EVENT_SOURCE(TravelMarkerStateChange::Event, 0x02779DB0)
DECLARE_EVENT_SOURCE(WeaponAttack::Event, 0x02779E90)
DECLARE_EVENT_SOURCE(Trespass::Event, 0x027D9C10)
DECLARE_EVENT_SOURCE(VATSEvents::ModeChange, 0x02845CA0)
DECLARE_EVENT_SOURCE(VATSCommand, 0x02845D10)
DECLARE_EVENT_SOURCE(HoursPassed::Event, 0x02B17980)

// other events
DECLARE_EVENT_SOURCE(RadioManager::PipboyTransmitterDetectionEvent, 0x025254D0)
DECLARE_EVENT_SOURCE_EX(XPChange::Event, 0x06145300)
DECLARE_EVENT_SOURCE_EX(WeaponFiredEvent, 0x061379E8)
DECLARE_EVENT_SOURCE_EX(ActorEquipManagerEvent::Event, 0x06B231B0)
DECLARE_EVENT_SOURCE_EX(ActorEquipManagerEvent::SpellEvent, 0x06B231D8)
DECLARE_EVENT_SOURCE_EX(AttachReference::Event, 0x061452D8)
