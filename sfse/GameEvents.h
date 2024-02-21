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
struct TESFormDeleteEvent {};
struct TESFormIDRemapEvent {};
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
        DEFINE_MEMBER_FN_1(RegisterSink, void, 0x005BCF6C, SinkBase* sink);
        DEFINE_MEMBER_FN_1(UnregisterSink, void, 0x005BCD80, SinkBase* sink);
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

DECLARE_EVENT_SOURCE(SnapTemplateUtils::SnapReplaceEvent, 0x0083E3DC)
DECLARE_EVENT_SOURCE(ImageFixtureEvent_RequestImage, 0x0083F694)
DECLARE_EVENT_SOURCE(ImageFixtureEvent_UnregisterImage, 0x00842590)
DECLARE_EVENT_SOURCE(Spaceship::TakeOffEvent, 0x00845438)
DECLARE_EVENT_SOURCE(HUDActivityIncreaseEvent, 0x012862F0)
DECLARE_EVENT_SOURCE(AnimationDataCleanupEvent, 0x012A755C)
DECLARE_EVENT_SOURCE(AnimationDataSetupEvent, 0x012A75EC)
DECLARE_EVENT_SOURCE(EndLoadGameEvent, 0x012F5E44)
DECLARE_EVENT_SOURCE(StartLoadGameEvent, 0x012F5ED4)
DECLARE_EVENT_SOURCE(ShipEditor_SystemSelected, 0x0130C95C)
DECLARE_EVENT_SOURCE(ShipEditor_PreviewUpgrade, 0x01313020)
DECLARE_EVENT_SOURCE(ShipEditor_SelectedUpgrade, 0x013130B0)
DECLARE_EVENT_SOURCE(RuntimeComponentDBFactory::ReferenceAttach, 0x01351010)
DECLARE_EVENT_SOURCE(RuntimeComponentDBFactory::ReferenceDetach, 0x013510A0)
DECLARE_EVENT_SOURCE(WeaponGroupAssignmentMenu_ChangeWeaponAssignment, 0x013D68E4)
DECLARE_EVENT_SOURCE(WeaponGroupAssignmentMenu_OnHintButtonActivated, 0x013D6974)
DECLARE_EVENT_SOURCE(ShipEditor_OnExitConfirmCancel, 0x013F7084)
DECLARE_EVENT_SOURCE(ShipEditor_OnExitConfirmExit, 0x013F7114)
DECLARE_EVENT_SOURCE(ShipEditor_OnExitConfirmSaveAndExit, 0x013F71A4)
DECLARE_EVENT_SOURCE(ShipEditor_OnFlightCheckTabChanged, 0x013FBC44)
DECLARE_EVENT_SOURCE(ShipEditor_OnWeaponGroupChanged, 0x013FBCD4)
DECLARE_EVENT_SOURCE(ShipEditor_OnRenameEndEditText, 0x01401610)
DECLARE_EVENT_SOURCE(ShipEditor_OnRenameInputCancelled, 0x014016A0)
DECLARE_EVENT_SOURCE(ShipEditor_ChangeModuleCategory, 0x01405D8C)
DECLARE_EVENT_SOURCE(ShipEditor_PreviewShipPart, 0x01405E1C)
DECLARE_EVENT_SOURCE(ShipEditor_SelectedShipPart, 0x01405EAC)
DECLARE_EVENT_SOURCE(ShipEditor_OnColorPickerControlChanged, 0x0140EDB0)
DECLARE_EVENT_SOURCE(ShipEditor_OnColorPickerTabChanged, 0x0140EE40)
DECLARE_EVENT_SOURCE(ShipEditor_OnColorSliderMouseInput, 0x0140EED0)
DECLARE_EVENT_SOURCE(ShipEditor_OnRecentColorSwatchClicked, 0x0140EF60)
DECLARE_EVENT_SOURCE(ShipBuilder_CloseAllMenus, 0x014319C4)
DECLARE_EVENT_SOURCE(ShipEditor_OnHintButtonActivated, 0x01431A54)
DECLARE_EVENT_SOURCE(ShipEditor_RemoveAll3D, 0x01431AE4)
DECLARE_EVENT_SOURCE(ReferenceQueuedEvent, 0x014998B8)
DECLARE_EVENT_SOURCE(LoadScreenEndEvent, 0x014B26B0)
DECLARE_EVENT_SOURCE(LoadScreenStartEvent, 0x014B2740)
DECLARE_EVENT_SOURCE(CellAttachDetachEvent, 0x014B27D0)
DECLARE_EVENT_SOURCE(PickRefStateChangedEvent, 0x01524628)
DECLARE_EVENT_SOURCE(ActivityTrackerActivityStartedEvent, 0x0152ED88)
DECLARE_EVENT_SOURCE(RuntimeComponentDBFactory::ReferenceCleared3d, 0x015BA350)
DECLARE_EVENT_SOURCE(RuntimeComponentDBFactory::ReferenceDestroy, 0x015BA3E0)
DECLARE_EVENT_SOURCE(RuntimeComponentDBFactory::ReferenceInit, 0x015BA470)
DECLARE_EVENT_SOURCE(RuntimeComponentDBFactory::ReferenceRecycle, 0x015BA500)
DECLARE_EVENT_SOURCE(RuntimeComponentDBFactory::ReferenceSet3d, 0x015BA590)
DECLARE_EVENT_SOURCE(RuntimeComponentDBFactory::Release3DRelatedData, 0x015BA620)
DECLARE_EVENT_SOURCE(BSWorldOriginShiftEvent, 0x015C6AEC)
DECLARE_EVENT_SOURCE(BGSPlanet::PlayerKnowledgeFlagSetEvent, 0x016F035C)
DECLARE_EVENT_SOURCE(StarMap::PlanetTraitKnownEvent, 0x016F03EC)
DECLARE_EVENT_SOURCE(ResetHistoryDataEvent, 0x017C4E98)
DECLARE_EVENT_SOURCE(TESQuestRewardEvent, 0x017DF1E8)
DECLARE_EVENT_SOURCE(HUDWeaponWorldFOVMultChangedEvent, 0x017E13FC)
DECLARE_EVENT_SOURCE(BGSSceneActionPlayerDialogue::ActionEndEvent, 0x018BC010)
DECLARE_EVENT_SOURCE(BGSSceneActionPlayerDialogue::ActionStartEvent, 0x018BC0A0)
DECLARE_EVENT_SOURCE(AutoLoadDoorRolloverEvent, 0x0196C05C)
DECLARE_EVENT_SOURCE(ClearQuickContainerEvent, 0x0196C0EC)
DECLARE_EVENT_SOURCE(ReferenceCellLoadedTemps, 0x019E3EFC)
DECLARE_EVENT_SOURCE(Workshop::CargoLinkAddedEvent, 0x01D632AC)
DECLARE_EVENT_SOURCE(Workshop::CargoLinkTargetChangedEvent, 0x01D6333C)
DECLARE_EVENT_SOURCE(Workshop::EnterOutpostBeaconModeEvent, 0x01D633CC)
DECLARE_EVENT_SOURCE(Workshop::ItemGrabbedEvent, 0x01D6345C)
DECLARE_EVENT_SOURCE(Workshop::ItemMovedEvent, 0x01D634EC)
DECLARE_EVENT_SOURCE(Workshop::ItemPlacedEvent, 0x01D6357C)
DECLARE_EVENT_SOURCE(Workshop::ItemProducedEvent, 0x01D6360C)
DECLARE_EVENT_SOURCE(Workshop::ItemRemovedEvent, 0x01D6369C)
DECLARE_EVENT_SOURCE(Workshop::ItemRepairedEvent, 0x01D6372C)
DECLARE_EVENT_SOURCE(Workshop::ItemScrappedEvent, 0x01D637BC)
DECLARE_EVENT_SOURCE(Workshop::OutpostNameChangedEvent, 0x01D6384C)
DECLARE_EVENT_SOURCE(Workshop::OutpostPlacedEvent, 0x01D638DC)
DECLARE_EVENT_SOURCE(PickRefUpdateEvent, 0x01D6396C)
DECLARE_EVENT_SOURCE(Workshop::PlacementStatusEvent, 0x01D639FC)
DECLARE_EVENT_SOURCE(Workshop::PowerOffEvent, 0x01D63A8C)
DECLARE_EVENT_SOURCE(Workshop::PowerOnEvent, 0x01D63B1C)
DECLARE_EVENT_SOURCE(Workshop::SnapBehaviorCycledEvent, 0x01D63BAC)
DECLARE_EVENT_SOURCE(Workshop::WorkshopFlyCameraEvent, 0x01D63C3C)
DECLARE_EVENT_SOURCE(Workshop::WorkshopItemPlacedEvent, 0x01D63CCC)
DECLARE_EVENT_SOURCE(Workshop::WorkshopModeEvent, 0x01D63D5C)
DECLARE_EVENT_SOURCE(Workshop::WorkshopOutputLinkEvent, 0x01D63DEC)
DECLARE_EVENT_SOURCE(Workshop::WorkshopStatsChangedEvent, 0x01D63E7C)
DECLARE_EVENT_SOURCE(Workshop::WorkshopUpdateStatsEvent, 0x01D63F0C)
DECLARE_EVENT_SOURCE(ShipCameraStateToggled, 0x01DB77B4)
DECLARE_EVENT_SOURCE(PlayerControls::PlayerJumpPressEvent, 0x01F85D84)
DECLARE_EVENT_SOURCE(PlayerControls::PlayerJumpReleaseEvent, 0x01F85E14)
DECLARE_EVENT_SOURCE(PlayerSneakingChangeEvent, 0x01F8758C)
DECLARE_EVENT_SOURCE(PlayerControls::PlayerZeroGSprintJustPressedEvent, 0x01F877C8)
DECLARE_EVENT_SOURCE(PlayerControls::PlayerZeroGSprintReleasedEvent, 0x01F87858)
DECLARE_EVENT_SOURCE(PlayerControls::PlayerIronSightsEndEvent, 0x01F8A9DC)
DECLARE_EVENT_SOURCE(PlayerControls::PlayerIronSightsStartEvent, 0x01F8AA6C)
DECLARE_EVENT_SOURCE(SaveLoadEvent, 0x01FB9DBC)
DECLARE_EVENT_SOURCE(SpaceshipWeaponBinding::SpaceshipWeaponBindingChangedEvent, 0x01FE3E98)
DECLARE_EVENT_SOURCE(BoundaryMenu_FastTravel, 0x01FFCE48)
DECLARE_EVENT_SOURCE(BoundaryMenu_ShowMap, 0x01FFCED8)
DECLARE_EVENT_SOURCE(PhotoGallery_DeletePhoto, 0x02005BF4)
DECLARE_EVENT_SOURCE(PowersMenu_ActivateEssence, 0x020090D0)
DECLARE_EVENT_SOURCE(PowersMenu_EquipPower, 0x02009160)
DECLARE_EVENT_SOURCE(PowersMenu_FavoritePower, 0x020091F0)
DECLARE_EVENT_SOURCE(ContainerMenuClosed::Event, 0x0201C6DC)
DECLARE_EVENT_SOURCE(HangarShipSelection_ChangeSystemDisplay, 0x0201C76C)
DECLARE_EVENT_SOURCE(HangarShipSelection_RepairShip, 0x0201C7FC)
DECLARE_EVENT_SOURCE(HangarShipSelection_UpgradeSystem, 0x0201C88C)
DECLARE_EVENT_SOURCE(ShipCrewMenu_Close, 0x0201C91C)
DECLARE_EVENT_SOURCE(BinkMovieStoppedPlayingEvent, 0x02021980)
DECLARE_EVENT_SOURCE(WorkshopColorMode_ApplyColors, 0x02049F4C)
DECLARE_EVENT_SOURCE(WorkshopColorMode_SelectedTab, 0x02049FDC)
DECLARE_EVENT_SOURCE(WorkshopColorMode_SliderChanged, 0x0204A06C)
DECLARE_EVENT_SOURCE(WorkshopColorMode_SwatchChanged, 0x0204A0FC)
DECLARE_EVENT_SOURCE(HUDCrewBuffMessageEvent, 0x0204B29C)
DECLARE_EVENT_SOURCE(CraftingMenu_SessionSummaryEvent, 0x02054338)
DECLARE_EVENT_SOURCE(CraftingMenu_CraftItem, 0x020543C8)
DECLARE_EVENT_SOURCE(CraftingMenu_ExitBench, 0x02054458)
DECLARE_EVENT_SOURCE(CraftingMenu_InstallMod, 0x020544E8)
DECLARE_EVENT_SOURCE(CraftingMenu_RenameItem, 0x02054578)
DECLARE_EVENT_SOURCE(CraftingMenu_RevertedModdedItem, 0x02054608)
DECLARE_EVENT_SOURCE(CraftingMenu_SelectedMod, 0x02054698)
DECLARE_EVENT_SOURCE(CraftingMenu_SelectedModSlot, 0x02054728)
DECLARE_EVENT_SOURCE(CraftingMenu_SelectedModdableItem, 0x020547B8)
DECLARE_EVENT_SOURCE(CraftingMenu_SelectedRecipe, 0x02054848)
DECLARE_EVENT_SOURCE(CraftingMenu_SetInspectControls, 0x020548D8)
DECLARE_EVENT_SOURCE(CraftingMenu_ToggleTracking, 0x02054968)
DECLARE_EVENT_SOURCE(CraftingMenu_ViewingModdableItem, 0x020549F8)
DECLARE_EVENT_SOURCE(ContainerMenu_CloseMenu, 0x02062EAC)
DECLARE_EVENT_SOURCE(InventoryMenu_Change3DView, 0x02062FDC)
DECLARE_EVENT_SOURCE(InventoryMenu_PaperDollTryOn, 0x0206306C)
DECLARE_EVENT_SOURCE(InventoryMenu_ResetPaperDollInv, 0x020630FC)
DECLARE_EVENT_SOURCE(UpdateActivateListenerEvent, 0x0206B278)
DECLARE_EVENT_SOURCE(StartOutpostFromListenerEvent, 0x0206CF38)
DECLARE_EVENT_SOURCE(HUDModeEvent, 0x0207D134)
DECLARE_EVENT_SOURCE(OpenContainerMenuEventData, 0x0207D1C4)
DECLARE_EVENT_SOURCE(OpenContainerMenuFromListenerEvent, 0x0207D254)
DECLARE_EVENT_SOURCE(HUDRolloverActivationButtonEvent, 0x0207D2E4)
DECLARE_EVENT_SOURCE(HUDRolloverActivationQCItemPressEvent, 0x0207D374)
DECLARE_EVENT_SOURCE(Inventory_SetSort, 0x0207D404)
DECLARE_EVENT_SOURCE(ShowingQuestMarketTextEvent, 0x0208B278)
DECLARE_EVENT_SOURCE(TargetHitEvent, 0x0208D868)
DECLARE_EVENT_SOURCE(BSTValueRequestEvent<PlayerCrosshairModeEvent>, 0x0208D8F8)
DECLARE_EVENT_SOURCE(ClearHUDMessagesEvent, 0x02094CE4)
DECLARE_EVENT_SOURCE(ShowHUDMessageEvent, 0x02094D74)
DECLARE_EVENT_SOURCE(PlayerDetectionLevelChangeEvent, 0x02097ED4)
DECLARE_EVENT_SOURCE(ShowCustomWatchAlert, 0x0209CFDC)
DECLARE_EVENT_SOURCE(PlayerUpdateEvent, 0x020D005C)
DECLARE_EVENT_SOURCE(InventoryMenu_ToggleHelmet, 0x020D00EC)
DECLARE_EVENT_SOURCE(InventoryMenu_ToggleSuit, 0x020D017C)
DECLARE_EVENT_SOURCE(ControlsRemappedEvent, 0x02114528)
DECLARE_EVENT_SOURCE(SettingsPanel_CheckBoxChanged, 0x021145B8)
DECLARE_EVENT_SOURCE(SettingsPanel_ClearBinding, 0x02114648)
DECLARE_EVENT_SOURCE(SettingsPanel_OpenCategory, 0x0211477C)
DECLARE_EVENT_SOURCE(SettingsPanel_OpenSettings, 0x0211480C)
DECLARE_EVENT_SOURCE(SettingsPanel_RemapConfirmed, 0x0211489C)
DECLARE_EVENT_SOURCE(SettingsPanel_RemapMode, 0x0211492C)
DECLARE_EVENT_SOURCE(SettingsPanel_ResetToDefaults, 0x021149BC)
DECLARE_EVENT_SOURCE(SettingsPanel_SaveControls, 0x02114A4C)
DECLARE_EVENT_SOURCE(SettingsPanel_SaveSettings, 0x02114ADC)
DECLARE_EVENT_SOURCE(SettingsPanel_SliderChanged, 0x02114B6C)
DECLARE_EVENT_SOURCE(SettingsPanel_StepperChanged, 0x02114BFC)
DECLARE_EVENT_SOURCE(SettingsPanel_ValidateControls, 0x02114C8C)
DECLARE_EVENT_SOURCE(ShipCrewMenu_OpenAssignMenu, 0x0211EDB8)
DECLARE_EVENT_SOURCE(ShipCrewMenu_SetSort, 0x0211EE48)
DECLARE_EVENT_SOURCE(Spaceship::PlayerMovementOutputEvent, 0x02144FB8)
DECLARE_EVENT_SOURCE(ShowLongShipBootup, 0x02145048)
DECLARE_EVENT_SOURCE(ShipHudQuickContainer_TransferMenu, 0x021450D8)
DECLARE_EVENT_SOURCE(ShipHud_Activate, 0x02145168)
DECLARE_EVENT_SOURCE(ShipHud_BodyViewMarkerDimensions, 0x021451F8)
DECLARE_EVENT_SOURCE(ShipHud_ChangeComponentSelection, 0x02145288)
DECLARE_EVENT_SOURCE(ShipHud_CloseMenu, 0x02145318)
DECLARE_EVENT_SOURCE(ShipHud_Deselect, 0x021453A8)
DECLARE_EVENT_SOURCE(ShipHud_FarTravel, 0x02145438)
DECLARE_EVENT_SOURCE(ShipHud_HailAccepted, 0x021454C8)
DECLARE_EVENT_SOURCE(ShipHud_HailCancelled, 0x02145558)
DECLARE_EVENT_SOURCE(ShipHud_JumpToQuestMarker, 0x021455E8)
DECLARE_EVENT_SOURCE(ShipHud_Land, 0x02145678)
DECLARE_EVENT_SOURCE(ShipHud_LandingMarkerMap, 0x02145708)
DECLARE_EVENT_SOURCE(ShipHud_Map, 0x02145798)
DECLARE_EVENT_SOURCE(ShipHud_OnMonocleToggle, 0x02145828)
DECLARE_EVENT_SOURCE(ShipHud_OpenPhotoMode, 0x021458B8)
DECLARE_EVENT_SOURCE(ShipHud_Repair, 0x02145948)
DECLARE_EVENT_SOURCE(ShipHud_SetTargetMode, 0x021459D8)
DECLARE_EVENT_SOURCE(ShipHud_Target, 0x02145A68)
DECLARE_EVENT_SOURCE(ShipHud_TargetShipSystem, 0x02145AF8)
DECLARE_EVENT_SOURCE(ShipHud_UntargetShipSystem, 0x02145B88)
DECLARE_EVENT_SOURCE(ShipHud_UpdateComponentPower, 0x02145C18)
DECLARE_EVENT_SOURCE(DialogueMenu_CompleteExit, 0x0217145C)
DECLARE_EVENT_SOURCE(BGSScannerGuideEffectStatusUpdateEvent, 0x021815D0)
DECLARE_EVENT_SOURCE(GlobalFunc_CloseAllMenus, 0x02186598)
DECLARE_EVENT_SOURCE(GlobalFunc_CloseMenu, 0x02186628)
DECLARE_EVENT_SOURCE(GlobalFunc_PlayMenuSound, 0x021866B8)
DECLARE_EVENT_SOURCE(GlobalFunc_StartGameRender, 0x02186748)
DECLARE_EVENT_SOURCE(GlobalFunc_UserEvent, 0x021867D8)
DECLARE_EVENT_SOURCE(ExperienceMeterDisplayData, 0x02190138)
DECLARE_EVENT_SOURCE(LevelUp_AnimFinished, 0x021901C8)
DECLARE_EVENT_SOURCE(LevelUp_OnWidgetShown, 0x02190258)
DECLARE_EVENT_SOURCE(LevelUp_OpenDataMenu, 0x021902E8)
DECLARE_EVENT_SOURCE(LevelUp_ShowSkills, 0x02190378)
DECLARE_EVENT_SOURCE(LocationTextWidget_FinishedQueue, 0x02190408)
DECLARE_EVENT_SOURCE(DisplayFatigueWarningEvent, 0x021906B0)
DECLARE_EVENT_SOURCE(BSTValueRequestEvent<SaveLoadMessageStringEvent>, 0x0219411C)
DECLARE_EVENT_SOURCE(PlayerCrosshairModeEvent, 0x0208CF70)
DECLARE_EVENT_SOURCE(HUDNotificationEvent, 0x0219D378)
DECLARE_EVENT_SOURCE(HUDNotification_MissionActiveWidgetUpdate, 0x0219D408)
DECLARE_EVENT_SOURCE(HUDNotification_OpenDataMenu, 0x0219D498)
DECLARE_EVENT_SOURCE(HUDNotification_OpenMissionMenu, 0x0219D528)
DECLARE_EVENT_SOURCE(HUDNotification_SetMissionActive, 0x0219D5B8)
DECLARE_EVENT_SOURCE(PlayerSetWeaponStateEvent, 0x0219F198)
DECLARE_EVENT_SOURCE(BarterMenu_BuyItem, 0x021B2218)
DECLARE_EVENT_SOURCE(BarterMenu_CloseMenu, 0x021B22A8)
DECLARE_EVENT_SOURCE(BarterMenu_HideModel, 0x021B2338)
DECLARE_EVENT_SOURCE(BarterMenu_LoadModel, 0x021B23C8)
DECLARE_EVENT_SOURCE(BarterMenu_SellItem, 0x021B2458)
DECLARE_EVENT_SOURCE(BarterMenu_SetMouseOverModel, 0x021B24E8)
DECLARE_EVENT_SOURCE(BarterMenu_ShowFailureMessage, 0x021B2578)
DECLARE_EVENT_SOURCE(BarterMenu_ViewedItem, 0x021B2608)
DECLARE_EVENT_SOURCE(MissionMenu_ClearState, 0x021B6C10)
DECLARE_EVENT_SOURCE(MissionMenu_PlotToLocation, 0x021B6CA0)
DECLARE_EVENT_SOURCE(MissionMenu_RejectQuest, 0x021B6D30)
DECLARE_EVENT_SOURCE(MissionMenu_SaveCategoryIndex, 0x021B6DC0)
DECLARE_EVENT_SOURCE(MissionMenu_SaveOpenedId, 0x021B6E50)
DECLARE_EVENT_SOURCE(MissionMenu_ShowItemLocation, 0x021B6EE0)
DECLARE_EVENT_SOURCE(MissionMenu_ToggleTrackingQuest, 0x021B700C)
DECLARE_EVENT_SOURCE(DataSlateButtons_acceptClicked, 0x021BC730)
DECLARE_EVENT_SOURCE(DataSlateButtons_cancelClicked, 0x021BC7C0)
DECLARE_EVENT_SOURCE(DataSlateMenu_playSFX, 0x021BC850)
DECLARE_EVENT_SOURCE(DataSlateMenu_toggleAudio, 0x021BC8E0)
DECLARE_EVENT_SOURCE(InventoryMenu_DropItem, 0x021C2FF4)
DECLARE_EVENT_SOURCE(InventoryMenu_HideModel, 0x021C3084)
DECLARE_EVENT_SOURCE(InventoryMenu_LoadModel, 0x021C3114)
DECLARE_EVENT_SOURCE(InventoryMenu_OnEnterCategory, 0x021C31A4)
DECLARE_EVENT_SOURCE(InventoryMenu_OpenCargoHold, 0x021C3234)
DECLARE_EVENT_SOURCE(InventoryMenu_SelectItem, 0x021C32C4)
DECLARE_EVENT_SOURCE(InventoryMenu_SetMouseOverModel, 0x021C3354)
DECLARE_EVENT_SOURCE(InventoryMenu_ToggleFavorite, 0x021C348C)
DECLARE_EVENT_SOURCE(MissionBoard_MissionEntryChanged, 0x021CF948)
DECLARE_EVENT_SOURCE(MissionBoard_MissionEntryPressed, 0x021CF9D8)
DECLARE_EVENT_SOURCE(MonocleMenu_Bioscan, 0x021D6CCC)
DECLARE_EVENT_SOURCE(MonocleMenu_FastTravel, 0x021D6D5C)
DECLARE_EVENT_SOURCE(MonocleMenu_Harvest, 0x021D6DEC)
DECLARE_EVENT_SOURCE(MonocleMenu_Initialize, 0x021D6E7C)
DECLARE_EVENT_SOURCE(MonocleMenu_Outpost, 0x021D6F0C)
DECLARE_EVENT_SOURCE(MonocleMenu_PhotoMode, 0x021D6F9C)
DECLARE_EVENT_SOURCE(MonocleMenu_Shutdown, 0x021D702C)
DECLARE_EVENT_SOURCE(MonocleMenu_SocialSpell, 0x021D70BC)
DECLARE_EVENT_SOURCE(MonocleMenu_StartContainerView, 0x021D714C)
DECLARE_EVENT_SOURCE(MonocleMenu_StopContainerView, 0x021D71DC)
DECLARE_EVENT_SOURCE(MonocleMenu_SurfaceMap, 0x021D726C)
DECLARE_EVENT_SOURCE(MonocleMenu_UseListScrollControls, 0x021D72FC)
DECLARE_EVENT_SOURCE(MonocleMenu_ZoomIn, 0x021D738C)
DECLARE_EVENT_SOURCE(MonocleMenu_ZoomOut, 0x021D741C)
DECLARE_EVENT_SOURCE(PhotoMode_InitializeCategory, 0x021DBDD0)
DECLARE_EVENT_SOURCE(PhotoMode_ResetToDefaults, 0x021DBE60)
DECLARE_EVENT_SOURCE(PhotoMode_SliderChanged, 0x021DBEF0)
DECLARE_EVENT_SOURCE(PhotoMode_StepperChanged, 0x021DBF80)
DECLARE_EVENT_SOURCE(PhotoMode_TakeSnapshot, 0x021DC010)
DECLARE_EVENT_SOURCE(PhotoMode_ToggleHelmet, 0x021DC0A0)
DECLARE_EVENT_SOURCE(PhotoMode_ToggleUI, 0x021DC130)
DECLARE_EVENT_SOURCE(PickpocketMenu_OnItemSelect, 0x021E45E4)
DECLARE_EVENT_SOURCE(ResearchMenu_AddMaterial, 0x021E9A18)
DECLARE_EVENT_SOURCE(ResearchMenu_CategorySelected, 0x021E9AA8)
DECLARE_EVENT_SOURCE(ResearchMenu_ExitMenu, 0x021E9B38)
DECLARE_EVENT_SOURCE(ResearchMenu_HideModel, 0x021E9BC8)
DECLARE_EVENT_SOURCE(ResearchMenu_PreviewProject, 0x021E9C58)
DECLARE_EVENT_SOURCE(ResearchMenu_ProjectViewed, 0x021E9CE8)
DECLARE_EVENT_SOURCE(ResearchMenu_SetInspectControls, 0x021E9D78)
DECLARE_EVENT_SOURCE(ResearchMenu_ToggleTrackingProject, 0x021E9E08)
DECLARE_EVENT_SOURCE(UnlockedTerminalElementEvent, 0x021FB8C4)
DECLARE_EVENT_SOURCE(SecurityMenu_BackOutKey, 0x021FB954)
DECLARE_EVENT_SOURCE(SecurityMenu_CloseMenu, 0x021FB9E4)
DECLARE_EVENT_SOURCE(SecurityMenu_ConfirmExit, 0x021FBA74)
DECLARE_EVENT_SOURCE(SecurityMenu_EliminateUnusedKeys, 0x021FBB04)
DECLARE_EVENT_SOURCE(SecurityMenu_GetRingHint, 0x021FBB94)
DECLARE_EVENT_SOURCE(SecurityMenu_SelectNewKey, 0x021FBC24)
DECLARE_EVENT_SOURCE(SecurityMenu_TryUseKey, 0x021FBCB4)
DECLARE_EVENT_SOURCE(ShipCrewAssignMenu_Assign, 0x021FFC84)
DECLARE_EVENT_SOURCE(ShipCrewAssignMenu_Unassign, 0x021FFD14)
DECLARE_EVENT_SOURCE(ShipCrewMenu_ViewedItem, 0x021FFDA4)
DECLARE_EVENT_SOURCE(Refuel_Accept, 0x02201C44)
DECLARE_EVENT_SOURCE(Refuel_Cancel, 0x02201CD4)
DECLARE_EVENT_SOURCE(SkillsMenu_Accept, 0x0220871C)
DECLARE_EVENT_SOURCE(SkillsMenu_AddPatch, 0x022087AC)
DECLARE_EVENT_SOURCE(SkillsMenu_Cancel, 0x0220883C)
DECLARE_EVENT_SOURCE(SkillsMenu_ChangeCursorVisibility, 0x022088CC)
DECLARE_EVENT_SOURCE(SkillsMenu_SaveLastCategory, 0x0220895C)
DECLARE_EVENT_SOURCE(BSChargenAPI::BIDataUtils::MenuClosedEvent, 0x0222D2D4)
DECLARE_EVENT_SOURCE(BSChargenAPI::BIDataUtils::PresetNPCChangedEvent, 0x0222D364)
DECLARE_EVENT_SOURCE(CharGen_BrowChange, 0x0222D3F4)
DECLARE_EVENT_SOURCE(CharGen_BrowColorChange, 0x0222D484)
DECLARE_EVENT_SOURCE(CharGen_CancelTextEntry, 0x0222D514)
DECLARE_EVENT_SOURCE(CharGen_CloseMenu, 0x0222D5A4)
DECLARE_EVENT_SOURCE(CharGen_CyclePronoun, 0x0222D634)
DECLARE_EVENT_SOURCE(CharGen_DirtScarsEtcChange, 0x0222D6C4)
DECLARE_EVENT_SOURCE(CharGen_EndBodyChange, 0x0222D754)
DECLARE_EVENT_SOURCE(CharGen_EndTextEntry, 0x0222D7E4)
DECLARE_EVENT_SOURCE(CharGen_EyeColorChange, 0x0222D874)
DECLARE_EVENT_SOURCE(CharGen_FacialHairChange, 0x0222D904)
DECLARE_EVENT_SOURCE(CharGen_FacialHairColorChange, 0x0222D994)
DECLARE_EVENT_SOURCE(CharGen_HairChange, 0x0222DA24)
DECLARE_EVENT_SOURCE(CharGen_HairColorChange, 0x0222DAB4)
DECLARE_EVENT_SOURCE(CharGen_HeadpartPlusSelectorChange, 0x0222DB44)
DECLARE_EVENT_SOURCE(CharGen_HeadpartPresetChange, 0x0222DBD4)
DECLARE_EVENT_SOURCE(CharGen_JewelryChange, 0x0222DC64)
DECLARE_EVENT_SOURCE(CharGen_JewelryColorChange, 0x0222DCF4)
DECLARE_EVENT_SOURCE(CharGen_MakeupChange, 0x0222DD84)
DECLARE_EVENT_SOURCE(CharGen_MarkingsChange, 0x0222DE14)
DECLARE_EVENT_SOURCE(CharGen_PostBlendColorOptionChange, 0x0222DEA4)
DECLARE_EVENT_SOURCE(CharGen_PostBlendFaceChange, 0x0222DF34)
DECLARE_EVENT_SOURCE(CharGen_PostBlendIntensityChange, 0x0222DFC4)
DECLARE_EVENT_SOURCE(CharGen_PresetChange, 0x0222E054)
DECLARE_EVENT_SOURCE(CharGen_RollOffLocomotion, 0x0222E0E4)
DECLARE_EVENT_SOURCE(CharGen_RollOnLocomotion, 0x0222E174)
DECLARE_EVENT_SOURCE(CharGen_RotatePaperdoll, 0x0222E204)
DECLARE_EVENT_SOURCE(CharGen_SetAdditionalSlider, 0x0222E294)
DECLARE_EVENT_SOURCE(CharGen_SetBackground, 0x0222E324)
DECLARE_EVENT_SOURCE(CharGen_SetBlockInputUnderPopup, 0x0222E3B4)
DECLARE_EVENT_SOURCE(CharGen_SetBodyValues, 0x0222E444)
DECLARE_EVENT_SOURCE(CharGen_SetCameraPosition, 0x0222E4D4)
DECLARE_EVENT_SOURCE(CharGen_SetPronoun, 0x0222E564)
DECLARE_EVENT_SOURCE(CharGen_SetSex, 0x0222E5F4)
DECLARE_EVENT_SOURCE(CharGen_SetSlider, 0x0222E684)
DECLARE_EVENT_SOURCE(CharGen_SetTrait, 0x0222E714)
DECLARE_EVENT_SOURCE(CharGen_ShowChooseBackgroundMessage, 0x0222E7A4)
DECLARE_EVENT_SOURCE(CharGen_ShowPlayerRenameMessage, 0x0222E834)
DECLARE_EVENT_SOURCE(CharGen_SkintoneChange, 0x0222E8C4)
DECLARE_EVENT_SOURCE(CharGen_StartBodyChange, 0x0222E954)
DECLARE_EVENT_SOURCE(CharGen_StartTextEntry, 0x0222E9E4)
DECLARE_EVENT_SOURCE(CharGen_SwitchBodyType, 0x0222EA74)
DECLARE_EVENT_SOURCE(CharGen_SwitchLocomotion, 0x0222EB04)
DECLARE_EVENT_SOURCE(CharGen_TeethChange, 0x0222EB94)
DECLARE_EVENT_SOURCE(CharGen_TeethRollOff, 0x0222EC24)
DECLARE_EVENT_SOURCE(CharGen_TeethRollOn, 0x0222ECB4)
DECLARE_EVENT_SOURCE(CharGen_ToggleMarking, 0x0222ED44)
DECLARE_EVENT_SOURCE(CharGen_TogglePreviewHabSuit, 0x0222EDD4)
DECLARE_EVENT_SOURCE(UIMenuChargenMenuDisablePaperdoll, 0x0222EE64)
DECLARE_EVENT_SOURCE(DataMenu_CloseMenu, 0x02235ED8)
DECLARE_EVENT_SOURCE(DataMenu_ClosedForSubMenu, 0x02235F68)
DECLARE_EVENT_SOURCE(DataMenu_Missions, 0x02235FF8)
DECLARE_EVENT_SOURCE(DataMenu_PlotToLocation, 0x0223612C)
DECLARE_EVENT_SOURCE(DataMenu_Reopened, 0x022361BC)
DECLARE_EVENT_SOURCE(DataMenu_SelectedAttributesMenu, 0x0223624C)
DECLARE_EVENT_SOURCE(DataMenu_SelectedInventoryMenu, 0x022362DC)
DECLARE_EVENT_SOURCE(DataMenu_SelectedMapMenu, 0x0223636C)
DECLARE_EVENT_SOURCE(DataMenu_SelectedPowersMenu, 0x022363FC)
DECLARE_EVENT_SOURCE(DataMenu_SelectedShipMenu, 0x0223648C)
DECLARE_EVENT_SOURCE(DataMenu_SelectedStatusMenu, 0x0223651C)
DECLARE_EVENT_SOURCE(DataMenu_SetMenuForQuickEntry, 0x022365AC)
DECLARE_EVENT_SOURCE(DataMenu_SetPaperDollActive, 0x0223663C)
DECLARE_EVENT_SOURCE(PauseMenu_ActionCanceled, 0x02240884)
DECLARE_EVENT_SOURCE(PauseMenu_ConfirmAction, 0x02240914)
DECLARE_EVENT_SOURCE(PauseMenu_ConfirmLoad, 0x022409A4)
DECLARE_EVENT_SOURCE(PauseMenu_ConfirmSave, 0x02240A34)
DECLARE_EVENT_SOURCE(PauseMenu_DeleteSave, 0x02240AC4)
DECLARE_EVENT_SOURCE(PauseMenu_QuitToDesktop, 0x02240B54)
DECLARE_EVENT_SOURCE(PauseMenu_SetCharacter, 0x02240BE4)
DECLARE_EVENT_SOURCE(PauseMenu_StartAction, 0x02240C74)
DECLARE_EVENT_SOURCE(PauseMenu_StartLoad, 0x02240D04)
DECLARE_EVENT_SOURCE(PauseMenu_UploadSave, 0x02240D94)
DECLARE_EVENT_SOURCE(PlayBink_CloseMenu, 0x02241D30)
DECLARE_EVENT_SOURCE(Spaceship::GravJumpEvent, 0x02247964)
DECLARE_EVENT_SOURCE(Spaceship::LandedSetEvent, 0x022479F4)
DECLARE_EVENT_SOURCE(Reticle_OnLongAnimFinished, 0x02247A84)
DECLARE_EVENT_SOURCE(ShipHudQuickContainer_TransferItem, 0x02247B14)
DECLARE_EVENT_SOURCE(ShipHud_AbortJump, 0x02247BA4)
DECLARE_EVENT_SOURCE(ShipHud_DockRequested, 0x02247C34)
DECLARE_EVENT_SOURCE(ShipHud_HailShip, 0x02247CC4)
DECLARE_EVENT_SOURCE(ShipHud_UpdateTargetPanelRect, 0x02247D54)
DECLARE_EVENT_SOURCE(TakeoffMenu_CloseMenu, 0x02247DE4)
DECLARE_EVENT_SOURCE(TakeoffMenu_ExitShip, 0x02247E74)
DECLARE_EVENT_SOURCE(TakeoffMenu_Launch, 0x02247F04)
DECLARE_EVENT_SOURCE(StarMapMenu_LandingInputInProgress, 0x02267440)
DECLARE_EVENT_SOURCE(StarMapMenu_MarkerGroupContainerVisibilityChanged, 0x022674D0)
DECLARE_EVENT_SOURCE(StarMapMenu_MarkerGroupEntryClicked, 0x02267560)
DECLARE_EVENT_SOURCE(StarMapMenu_MarkerGroupEntryHoverChanged, 0x022675F0)
DECLARE_EVENT_SOURCE(StarMapMenu_ScanPlanet, 0x02267680)
DECLARE_EVENT_SOURCE(StarMapMenu_SelectedLandingSite, 0x02267710)
DECLARE_EVENT_SOURCE(StarMapMenu_SelectedLandingSiteFailed, 0x022677A0)
DECLARE_EVENT_SOURCE(StarMapMenu_ShowRealCursor, 0x02267830)
DECLARE_EVENT_SOURCE(StarMapMenu_QuickSelectChange, 0x0227CD00)
DECLARE_EVENT_SOURCE(StarMapMenu_Galaxy_FocusSystem, 0x0228DC50)
DECLARE_EVENT_SOURCE(StarMapMenu_OnGalaxyViewInitialized, 0x0228DCE0)
DECLARE_EVENT_SOURCE(StarMapMenu_ExecuteRoute, 0x022987D8)
DECLARE_EVENT_SOURCE(StarMapMenu_OnCancel, 0x02298868)
DECLARE_EVENT_SOURCE(StarMapMenu_OnClearRoute, 0x022988F8)
DECLARE_EVENT_SOURCE(StarMapMenu_OnExitStarMap, 0x02298988)
DECLARE_EVENT_SOURCE(StarMapMenu_OnHintButtonClicked, 0x02298A18)
DECLARE_EVENT_SOURCE(StarMapMenu_OnOutpostEntrySelected, 0x02298AA8)
DECLARE_EVENT_SOURCE(StarMapMenu_ReadyToClose, 0x02298B38)
DECLARE_EVENT_SOURCE(SurfaceMapMenu_MarkerClicked, 0x022B67BC)
DECLARE_EVENT_SOURCE(SurfaceMapMenu_TryPlaceCustomMarker, 0x022B684C)
DECLARE_EVENT_SOURCE(TerminalMenu_CancelEvent, 0x022D0D10)
DECLARE_EVENT_SOURCE(Terminal_CloseAllViews, 0x022D0DA0)
DECLARE_EVENT_SOURCE(Terminal_CloseTopView, 0x022D0E30)
DECLARE_EVENT_SOURCE(Terminal_CloseView, 0x022D0EC0)
DECLARE_EVENT_SOURCE(Terminal_MenuItemClick, 0x022D0F50)
DECLARE_EVENT_SOURCE(TestMenu_DoAction, 0x022DCDC0)
DECLARE_EVENT_SOURCE(TestMenu_ExitMenu, 0x022DCE50)
DECLARE_EVENT_SOURCE(TestMenu_ShowImages, 0x022DCEE0)
DECLARE_EVENT_SOURCE(TestMenu_ShowResources, 0x022DCF70)
DECLARE_EVENT_SOURCE(TestMenu_TestAll, 0x022DD000)
DECLARE_EVENT_SOURCE(TextInputMenu_EndEditText, 0x022E0FA4)
DECLARE_EVENT_SOURCE(TextInputMenu_InputCanceled, 0x022E1034)
DECLARE_EVENT_SOURCE(TextInputMenu_StartEditText, 0x022E10C4)
DECLARE_EVENT_SOURCE(CraftingMenu_Highlight3D, 0x022E2394)
DECLARE_EVENT_SOURCE(CraftingMenu_RevertHighlight, 0x022E2424)
DECLARE_EVENT_SOURCE(WorkshopBuilderMenu_ChangeBuildItem, 0x022E4A88)
DECLARE_EVENT_SOURCE(WorkshopBuilderMenu_SelectedItem, 0x022E4B18)
DECLARE_EVENT_SOURCE(WorkshopBuilderMenu_ToggleTracking, 0x022E4BA8)
DECLARE_EVENT_SOURCE(WorkshopMenu_AttemptBuild, 0x022ED3F4)
DECLARE_EVENT_SOURCE(WorkshopMenu_CancelAction, 0x022ED484)
DECLARE_EVENT_SOURCE(WorkshopMenu_ChangeVariant, 0x022ED514)
DECLARE_EVENT_SOURCE(WorkshopMenu_ConnectionEvent, 0x022ED5A4)
DECLARE_EVENT_SOURCE(WorkshopMenu_ExitMenu, 0x022ED634)
DECLARE_EVENT_SOURCE(WorkshopMenu_MessageCallback, 0x022ED6C4)
DECLARE_EVENT_SOURCE(WorkshopMenu_SelectedCategory, 0x022ED754)
DECLARE_EVENT_SOURCE(WorkshopMenu_SelectedGridObject, 0x022ED7E4)
DECLARE_EVENT_SOURCE(WorkshopMenu_ShowExtras, 0x022ED874)
DECLARE_EVENT_SOURCE(WorkshopMenu_SwitchMode, 0x022ED904)
DECLARE_EVENT_SOURCE(WorkshopMenu_ToggleDistance, 0x022ED994)
DECLARE_EVENT_SOURCE(WorkshopMenu_ToggleTracking, 0x022EDA24)
DECLARE_EVENT_SOURCE(WorkshopMenu_ToggleView, 0x022EDAB4)
DECLARE_EVENT_SOURCE(WorkshopQuickMenu_ConfirmAction, 0x022EF504)
DECLARE_EVENT_SOURCE(WorkshopQuickMenu_ExitMenu, 0x022EF594)
DECLARE_EVENT_SOURCE(WorkshopTargetMenu_TargetHovered, 0x022F5A5C)
DECLARE_EVENT_SOURCE(WorkshopTargetMenu_TargetPicked, 0x022F5AEC)
DECLARE_EVENT_SOURCE(WorkshopActionButton_HoldFinished, 0x0230CB90)
DECLARE_EVENT_SOURCE(WorkshopActionButton_HoldStopped, 0x0230CC20)
DECLARE_EVENT_SOURCE(WorkshopShared_SetActionHandles, 0x0230CCB0)
DECLARE_EVENT_SOURCE(WorkshopShared_StartAction, 0x0230CD40)
DECLARE_EVENT_SOURCE(ModelReferenceEffectEvents::ReferenceEffectFinished, 0x0232C99C)
DECLARE_EVENT_SOURCE(BGSAcousticSpaceListener::StackChangedEvent, 0x02340B64)
DECLARE_EVENT_SOURCE(SpaceshipBIEvents::ShipPowerAllocationBIEventSent, 0x02357680)
DECLARE_EVENT_SOURCE(BGSActorDeathEvent, 0x02363F2C)
DECLARE_EVENT_SOURCE(Research::ResearchProgressEvent, 0x023B47C8)
DECLARE_EVENT_SOURCE(BSTValueRequestEvent<PlayerAutoAimActorEvent>, 0x025D97A8)
DECLARE_EVENT_SOURCE(PlayerInCombatChangeEvent, 0x025F1CE0)
DECLARE_EVENT_SOURCE(BlurEvent, 0x028C0DF8)
DECLARE_EVENT_SOURCE(ContainerMenu_HideModel, 0x028E3E78)
DECLARE_EVENT_SOURCE(ContainerMenu_Jettison, 0x028E3F08)
DECLARE_EVENT_SOURCE(ContainerMenu_LoadModel, 0x028E3F98)
DECLARE_EVENT_SOURCE(ContainerMenu_OpenRefuelMenu, 0x028E4028)
DECLARE_EVENT_SOURCE(ContainerMenu_SetMouseOverModel, 0x028E40B8)
DECLARE_EVENT_SOURCE(ContainerMenu_TakeAll, 0x028E4148)
DECLARE_EVENT_SOURCE(ContainerMenu_ToggleEquip, 0x028E41D8)
DECLARE_EVENT_SOURCE(ContainerMenu_TransferItem, 0x028E430C)
DECLARE_EVENT_SOURCE(DialogueMenu_OnDialogueSelect, 0x028E7DB0)
DECLARE_EVENT_SOURCE(DialogueMenu_OnListVisibilityChange, 0x028E7E40)
DECLARE_EVENT_SOURCE(DialogueMenu_OnPersuasionAutoWin, 0x028E7ED0)
DECLARE_EVENT_SOURCE(DialogueMenu_OnScriptedDialogueSelect, 0x028E7F60)
DECLARE_EVENT_SOURCE(DialogueMenu_RequestExit, 0x028E7FF0)
DECLARE_EVENT_SOURCE(DialogueMenu_RequestSkipDialogue, 0x028E8080)
DECLARE_EVENT_SOURCE(BSTValueRequestEvent<FaderMenuDisplayState>, 0x028E8E48)
DECLARE_EVENT_SOURCE(FavoritesMenu_AssignQuickkey, 0x028F4E80)
DECLARE_EVENT_SOURCE(FavoritesMenu_UseQuickkey, 0x028F4F10)
DECLARE_EVENT_SOURCE(LoadingMenu_RefreshText, 0x028F8D80)
DECLARE_EVENT_SOURCE(MainMenu_ActionCanceled, 0x028FC490)
DECLARE_EVENT_SOURCE(MainMenu_ActionConfirmed, 0x028FC520)
DECLARE_EVENT_SOURCE(MainMenu_ConfirmLoad, 0x028FC5B0)
DECLARE_EVENT_SOURCE(MainMenu_DeleteSave, 0x028FC640)
DECLARE_EVENT_SOURCE(MainMenu_SetCharacter, 0x028FC76C)
DECLARE_EVENT_SOURCE(MainMenu_StartAction, 0x028FC7FC)
DECLARE_EVENT_SOURCE(MainMenu_StartLoad, 0x028FC88C)
DECLARE_EVENT_SOURCE(MainMenu_UploadSave, 0x028FC91C)
DECLARE_EVENT_SOURCE(BGSAppPausedEvent, 0x028FE1AC)
DECLARE_EVENT_SOURCE(MessageBoxMenu_OnBackOut, 0x02903498)
DECLARE_EVENT_SOURCE(MessageBoxMenu_OnButtonPress, 0x02903528)
DECLARE_EVENT_SOURCE(MessageBoxMenu_OnScriptedButtonPress, 0x029035B8)
DECLARE_EVENT_SOURCE(SleepWaitMenu_InterruptRest, 0x02908248)
DECLARE_EVENT_SOURCE(SleepWaitMenu_StartRest, 0x029082D8)
DECLARE_EVENT_SOURCE(Spaceship::BoughtEvent, 0x02BD6DC4)
DECLARE_EVENT_SOURCE(Spaceship::ContrabandScanWarningEvent, 0x02BD6E54)
DECLARE_EVENT_SOURCE(Spaceship::DockEvent, 0x02BD6EE4)
DECLARE_EVENT_SOURCE(Spaceship::DynamicNavmeshCompleted, 0x02BD6F74)
DECLARE_EVENT_SOURCE(Spaceship::FarTravelEvent, 0x02BD7004)
DECLARE_EVENT_SOURCE(Spaceship::LandingEvent, 0x02BD7094)
DECLARE_EVENT_SOURCE(Spaceship::PlanetScanEvent, 0x02BD7124)
DECLARE_EVENT_SOURCE(Spaceship::RampDownEvent, 0x02BD71B4)
DECLARE_EVENT_SOURCE(Spaceship::RefueledEvent, 0x02BD7244)
DECLARE_EVENT_SOURCE(Spaceship::RegisteredEvent, 0x02BD72D4)
DECLARE_EVENT_SOURCE(Spaceship::ShieldEvent, 0x02BD7364)
DECLARE_EVENT_SOURCE(Spaceship::ShipAddedEvent, 0x02BD73F4)
DECLARE_EVENT_SOURCE(Spaceship::ShipCollisionEvent, 0x02BD7484)
DECLARE_EVENT_SOURCE(Spaceship::ShipCustomizedEvent, 0x02BD7514)
DECLARE_EVENT_SOURCE(Spaceship::SoldEvent, 0x02BD75A4)
DECLARE_EVENT_SOURCE(Spaceship::SystemDamagedEvent, 0x02BD7634)
DECLARE_EVENT_SOURCE(Spaceship::SystemPowerAllocationEvent, 0x02BD76C4)
DECLARE_EVENT_SOURCE(Spaceship::SystemPowerChangeEvent, 0x02BD7754)
DECLARE_EVENT_SOURCE(Spaceship::SystemRepairedBIEvent, 0x02BD77E4)
DECLARE_EVENT_SOURCE(Spaceship::SystemRepairedEvent, 0x02BD7874)
DECLARE_EVENT_SOURCE(Spaceship::TakeDamagEvent, 0x02BD7904)
DECLARE_EVENT_SOURCE(ContextStackChangedEvent, 0x02D04818)
DECLARE_EVENT_SOURCE(UpdateSceneRectEvent, 0x02EE18C0)
DECLARE_EVENT_SOURCE(GameStalledEvent, 0x030A68C0)

// more

DECLARE_EVENT_SOURCE(TESCellNavmeshGeneratedEvent, 0x005BC480)
DECLARE_EVENT_SOURCE(TESHitEvent, 0x005BCD10)
DECLARE_EVENT_SOURCE(FirstThirdPersonSwitch::Event, 0x005BD700)
DECLARE_EVENT_SOURCE(PerkChanged::Event, 0x01336FD0)
DECLARE_EVENT_SOURCE(TESHarvestEvent::ItemHarvested, 0x015245C0)
DECLARE_EVENT_SOURCE(ActivityEvents::ActivityCompletedEvent, 0x0152CA00)
DECLARE_EVENT_SOURCE(ChallengeCompletedEvent::Event, 0x0152ED20)
DECLARE_EVENT_SOURCE(InventoryItemEvent::Event, 0x01566960)
DECLARE_EVENT_SOURCE(BooksRead::Event, 0x0195F920)
DECLARE_EVENT_SOURCE(LocationExplored::Event, 0x01997D00)
DECLARE_EVENT_SOURCE(LocationLinked::Event, 0x01997D70)
DECLARE_EVENT_SOURCE(Activation::Event, 0x01A53F70)
DECLARE_EVENT_SOURCE(ActorCellChangeEvent, 0x01A65970)
DECLARE_EVENT_SOURCE(ActorHeadAttachedEvent, 0x01A659E0)
DECLARE_EVENT_SOURCE(ActorValueEvents::ActorValueChangedEvent, 0x01A65A50)
DECLARE_EVENT_SOURCE(AliasChangeEvent, 0x01A65AC0)
DECLARE_EVENT_SOURCE(AnimationGraphDependentEvent, 0x01A65B30)
DECLARE_EVENT_SOURCE(BGSAffinityEventEvent, 0x01A65BA0)
DECLARE_EVENT_SOURCE(BGSCellGridLoadEvent, 0x01A65C10)
DECLARE_EVENT_SOURCE(BGSEventProcessedEvent, 0x01A65C80)
DECLARE_EVENT_SOURCE(BGSHavokWorldCreatedEvent, 0x01A65CF0)
DECLARE_EVENT_SOURCE(BGSLocationLoadedEvent, 0x01A65D60)
DECLARE_EVENT_SOURCE(BGSOnPlayerCompanionDismiss, 0x01A65DD0)
DECLARE_EVENT_SOURCE(BGSOnPlayerCompleteResearchEvent, 0x01A65E40)
DECLARE_EVENT_SOURCE(BGSOnPlayerCraftItemEvent, 0x01A65EB0)
DECLARE_EVENT_SOURCE(BGSOnPlayerCreateRobotEvent, 0x01A65F20)
DECLARE_EVENT_SOURCE(BGSOnPlayerEnterVertibirdEvent, 0x01A65F90)
DECLARE_EVENT_SOURCE(BGSOnPlayerFallLongDistances, 0x01A66000)
DECLARE_EVENT_SOURCE(BGSOnPlayerFireWeaponEvent, 0x01A66070)
DECLARE_EVENT_SOURCE(BGSOnPlayerHealTeammateEvent, 0x01A660E0)
DECLARE_EVENT_SOURCE(BGSOnPlayerLoiteringBeginEvent, 0x01A66150)
DECLARE_EVENT_SOURCE(BGSOnPlayerLoiteringEndEvent, 0x01A661C0)
DECLARE_EVENT_SOURCE(BGSOnPlayerModArmorWeaponEvent, 0x01A66230)
DECLARE_EVENT_SOURCE(BGSOnPlayerModRobotEvent, 0x01A662A0)
DECLARE_EVENT_SOURCE(BGSOnPlayerSwimmingEvent, 0x01A66310)
DECLARE_EVENT_SOURCE(BGSOnPlayerUseWorkBenchEvent, 0x01A66380)
DECLARE_EVENT_SOURCE(BGSOnSpeechChallengeAvailable, 0x01A663F0)
DECLARE_EVENT_SOURCE(BGSRadiationDamageEvent, 0x01A66460)
DECLARE_EVENT_SOURCE(BuilderMenuSelectEvent, 0x01A664D0)
DECLARE_EVENT_SOURCE(CrewAssignedEvent, 0x01A66540)
DECLARE_EVENT_SOURCE(CrewDismissedEvent, 0x01A665B0)
DECLARE_EVENT_SOURCE(DestroyedEvent, 0x01A66620)
DECLARE_EVENT_SOURCE(HomeShipSetEvent, 0x01A66690)
DECLARE_EVENT_SOURCE(InstantReferenceInteractionEvent, 0x01A66700)
DECLARE_EVENT_SOURCE(ItemConsumedEvent, 0x01A66770)
DECLARE_EVENT_SOURCE(ItemSwappedEvent, 0x01A667E0)
DECLARE_EVENT_SOURCE(LockPickedEvent, 0x01A66850)
DECLARE_EVENT_SOURCE(MapMarkerDiscoveredEvent, 0x01A668C0)
DECLARE_EVENT_SOURCE(ObjectScannedEvent, 0x01A66930)
DECLARE_EVENT_SOURCE(PlayerAddItemEvent, 0x01A669A0)
DECLARE_EVENT_SOURCE(PlayerArrestedEvent, 0x01A66A10)
DECLARE_EVENT_SOURCE(PlayerAssaultActorEvent, 0x01A66A80)
DECLARE_EVENT_SOURCE(PlayerBuyShipEvent, 0x01A66AF0)
DECLARE_EVENT_SOURCE(PlayerCrimeGoldEvent, 0x01A66B60)
DECLARE_EVENT_SOURCE(PlayerFailedPlotRouteEvent, 0x01A66BD0)
DECLARE_EVENT_SOURCE(PlayerJailEvent, 0x01A66C40)
DECLARE_EVENT_SOURCE(PlayerModifiedShipEvent, 0x01A66CB0)
DECLARE_EVENT_SOURCE(PlayerMurderActorEvent, 0x01A66D20)
DECLARE_EVENT_SOURCE(PlayerPayFineEvent, 0x01A66D90)
DECLARE_EVENT_SOURCE(PlayerPlanetSurveyCompleteEvent, 0x01A66E00)
DECLARE_EVENT_SOURCE(PlayerPlanetSurveyProgressEvent, 0x01A66E70)
DECLARE_EVENT_SOURCE(PlayerSellShipEvent, 0x01A66EE0)
DECLARE_EVENT_SOURCE(PlayerTrespassEvent, 0x01A66F50)
DECLARE_EVENT_SOURCE(QuickContainerOpenedEvent, 0x01A66FC0)
DECLARE_EVENT_SOURCE(RefControlChangedEvent, 0x01A67030)
DECLARE_EVENT_SOURCE(ReferenceDestroyedEvent, 0x01A670A0)
DECLARE_EVENT_SOURCE(SpeechChallengeCompletionEvent, 0x01A67110)
DECLARE_EVENT_SOURCE(TESActivateEvent, 0x01A67180)
DECLARE_EVENT_SOURCE(TESActiveEffectApplyFinishEvent, 0x01A671F0)
DECLARE_EVENT_SOURCE(TESActiveEffectRemovedEvent, 0x01A67260)
DECLARE_EVENT_SOURCE(TESActorActivatedRefEvent, 0x01A672D0)
DECLARE_EVENT_SOURCE(TESActorLocationChangeEvent, 0x01A67340)
DECLARE_EVENT_SOURCE(TESBookReadEvent, 0x01A673B0)
DECLARE_EVENT_SOURCE(TESCellCriticalRefsAttachedEvent, 0x01A67420)
DECLARE_EVENT_SOURCE(TESCellFullyLoadedEvent, 0x01A67490)
DECLARE_EVENT_SOURCE(TESCellGravityChangeEvent, 0x01A67500)
DECLARE_EVENT_SOURCE(TESCellReadyToApplyDecalsEvent, 0x01A67570)
DECLARE_EVENT_SOURCE(TESCellReference3DAttachEvent, 0x01A675E0)
DECLARE_EVENT_SOURCE(TESCellReferenceAttachDetachEvent, 0x01A67650)
DECLARE_EVENT_SOURCE(TESCombatEvent, 0x01A676C0)
DECLARE_EVENT_SOURCE(TESCombatListEvent, 0x01A67730)
DECLARE_EVENT_SOURCE(TESCommandModeCompleteCommandEvent, 0x01A677A0)
DECLARE_EVENT_SOURCE(TESCommandModeEnterEvent, 0x01A67810)
DECLARE_EVENT_SOURCE(TESCommandModeExitEvent, 0x01A67880)
DECLARE_EVENT_SOURCE(TESCommandModeGiveCommandEvent, 0x01A678F0)
DECLARE_EVENT_SOURCE(TESConsciousnessEvent, 0x01A67960)
DECLARE_EVENT_SOURCE(TESContainerChangedEvent, 0x01A679D0)
DECLARE_EVENT_SOURCE(TESDeathEvent, 0x01A67A40)
DECLARE_EVENT_SOURCE(TESDeferredKillEvent, 0x01A67AB0)
DECLARE_EVENT_SOURCE(TESDestructionStageChangedEvent, 0x01A67B20)
DECLARE_EVENT_SOURCE(TESEnterBleedoutEvent, 0x01A67B90)
DECLARE_EVENT_SOURCE(TESEnterSneakingEvent, 0x01A67C00)
DECLARE_EVENT_SOURCE(TESEquipEvent, 0x01A67C70)
DECLARE_EVENT_SOURCE(TESEscortWaitStartEvent, 0x01A67CE0)
DECLARE_EVENT_SOURCE(TESEscortWaitStopEvent, 0x01A67D50)
DECLARE_EVENT_SOURCE(TESExitBleedoutEvent, 0x01A67DC0)
DECLARE_EVENT_SOURCE(TESExitFurnitureEvent, 0x01A67E30)
DECLARE_EVENT_SOURCE(TESFormDeleteEvent, 0x01A67EA0)
DECLARE_EVENT_SOURCE(TESFormIDRemapEvent, 0x01A67F10)
DECLARE_EVENT_SOURCE(TESFurnitureEvent, 0x01A67F80)
DECLARE_EVENT_SOURCE(TESGrabReleaseEvent, 0x01A67FF0)
DECLARE_EVENT_SOURCE(TESInitScriptEvent, 0x01A68060)
DECLARE_EVENT_SOURCE(TESLimbCrippleEvent, 0x01A680D0)
DECLARE_EVENT_SOURCE(TESLoadGameEvent, 0x01A68140)
DECLARE_EVENT_SOURCE(TESLocationExploredEvent, 0x01A681B0)
DECLARE_EVENT_SOURCE(TESLockChangedEvent, 0x01A68220)
DECLARE_EVENT_SOURCE(TESMagicEffectApplyEvent, 0x01A68290)
DECLARE_EVENT_SOURCE(TESMissionAcceptedEvent, 0x01A68300)
DECLARE_EVENT_SOURCE(TESObjectLoadedEvent, 0x01A68370)
DECLARE_EVENT_SOURCE(TESObjectREFRTranslationEvent, 0x01A683E0)
DECLARE_EVENT_SOURCE(TESOnPCDialogueTargetEvent, 0x01A68450)
DECLARE_EVENT_SOURCE(TESOpenCloseEvent, 0x01A684C0)
DECLARE_EVENT_SOURCE(TESPackageEvent, 0x01A68530)
DECLARE_EVENT_SOURCE(TESPerkEntryRunEvent, 0x01A685A0)
DECLARE_EVENT_SOURCE(TESPickNewIdleEvent, 0x01A68610)
DECLARE_EVENT_SOURCE(TESPickpocketFailedEvent, 0x01A68680)
DECLARE_EVENT_SOURCE(TESPlayerActiveEffectEvent, 0x01A686F0)
DECLARE_EVENT_SOURCE(TESPlayerFollowerWarpEvent, 0x01A68760)
DECLARE_EVENT_SOURCE(TESQuestInitEvent, 0x01A687D0)
DECLARE_EVENT_SOURCE(TESQuestRejectedEvent, 0x01A68840)
DECLARE_EVENT_SOURCE(TESQuestStageEvent, 0x01A688B0)
DECLARE_EVENT_SOURCE(TESQuestStageItemDoneEvent, 0x01A68920)
DECLARE_EVENT_SOURCE(TESQuestStartStopEvent, 0x01A68990)
DECLARE_EVENT_SOURCE(TESQuestTimerEvent, 0x01A68A00)
DECLARE_EVENT_SOURCE(TESResetEvent, 0x01A68A70)
DECLARE_EVENT_SOURCE(TESResolveNPCTemplatesEvent, 0x01A68AE0)
DECLARE_EVENT_SOURCE(TESSceneActionEvent, 0x01A68B50)
DECLARE_EVENT_SOURCE(TESSceneEvent, 0x01A68BC0)
DECLARE_EVENT_SOURCE(TESScenePhaseEvent, 0x01A68C30)
DECLARE_EVENT_SOURCE(TESSellEvent, 0x01A68CA0)
DECLARE_EVENT_SOURCE(TESSleepStartEvent, 0x01A68D10)
DECLARE_EVENT_SOURCE(TESSleepStopEvent, 0x01A68D80)
DECLARE_EVENT_SOURCE(TESSpellCastEvent, 0x01A68DF0)
DECLARE_EVENT_SOURCE(TESSpellCastFailureEvent, 0x01A68E60)
DECLARE_EVENT_SOURCE(TESSwitchRaceCompleteEvent, 0x01A68ED0)
DECLARE_EVENT_SOURCE(TESTopicInfoEvent, 0x01A68F40)
DECLARE_EVENT_SOURCE(TESTrackedStatsEvent, 0x01A68FB0)
DECLARE_EVENT_SOURCE(TESTrapHitEvent, 0x01A69020)
DECLARE_EVENT_SOURCE(TESTriggerEnterEvent, 0x01A69090)
DECLARE_EVENT_SOURCE(TESTriggerEvent, 0x01A69100)
DECLARE_EVENT_SOURCE(TESTriggerLeaveEvent, 0x01A69170)
DECLARE_EVENT_SOURCE(TESUniqueIDChangeEvent, 0x01A691E0)
DECLARE_EVENT_SOURCE(TESWaitStartEvent, 0x01A69250)
DECLARE_EVENT_SOURCE(TESWaitStopEvent, 0x01A692C0)
DECLARE_EVENT_SOURCE(TerminalMenuMenuItemRunEvent, 0x01A69330)
DECLARE_EVENT_SOURCE(TerminalMenuOnEnterEvent, 0x01A693A0)
DECLARE_EVENT_SOURCE(WorkshopNPCTransferEvent, 0x01A69410)
DECLARE_EVENT_SOURCE(TESObjectREFRIsReadyForAttachEvent, 0x01A69480)
DECLARE_EVENT_SOURCE(DefaultObjectsReadyEvent::Event, 0x01A94AC0)
DECLARE_EVENT_SOURCE(ObjectiveState::Event, 0x01B3E700)
DECLARE_EVENT_SOURCE(QuestStatus::Event, 0x01B9E920)
DECLARE_EVENT_SOURCE(RefillAliasEvent::Event, 0x01B9E990)
DECLARE_EVENT_SOURCE(TESQuestEvent::Event, 0x01B9EA00)
DECLARE_EVENT_SOURCE(RolloverIsCrimeEvent::Event, 0x0208D800)
DECLARE_EVENT_SOURCE(HideSubtitleEvent::Event, 0x02098A20)
DECLARE_EVENT_SOURCE(ShowSubtitleEvent::Event, 0x02098A90)
DECLARE_EVENT_SOURCE(MissionMenuStateEvent::Event, 0x020EA8A0)
DECLARE_EVENT_SOURCE(ClearShipHudTarget::Event, 0x02144EE0)
DECLARE_EVENT_SOURCE(TryUpdateShipHudTarget::Event, 0x02144F50)
DECLARE_EVENT_SOURCE(LocationTextEvent::Event, 0x0219F0C0)
DECLARE_EVENT_SOURCE(TraitDiscoveryTextEvent::Event, 0x0219F130)
DECLARE_EVENT_SOURCE(DaysPassed::Event, 0x0241AC90)
DECLARE_EVENT_SOURCE(HourPassed::Event, 0x0241AD00)
DECLARE_EVENT_SOURCE(ActorDamage::Event, 0x024FADF0)
DECLARE_EVENT_SOURCE(ActorItemEquipped::Event, 0x024FAE60)
DECLARE_EVENT_SOURCE(ActorKill::Event, 0x024FAED0)
DECLARE_EVENT_SOURCE(AssaultCrime::Event, 0x024FAF40)
DECLARE_EVENT_SOURCE(DisarmedEvent::Event, 0x024FAFB0)
DECLARE_EVENT_SOURCE(FactionRankChange::Event, 0x024FB020)
DECLARE_EVENT_SOURCE(GrandTheftHorse::Event, 0x024FB090)
DECLARE_EVENT_SOURCE(MurderCrime::Event, 0x024FB100)
DECLARE_EVENT_SOURCE(PiracyCrime::Event, 0x024FB170)
DECLARE_EVENT_SOURCE(Bleedout::Event, 0x025297C0)
DECLARE_EVENT_SOURCE(ContractedDisease::Event, 0x02529830)
DECLARE_EVENT_SOURCE(ReloadWeaponEvent::Event, 0x025298A0)
DECLARE_EVENT_SOURCE(SpellsLearned::Event, 0x02537E80)
DECLARE_EVENT_SOURCE(Bounty::Event, 0x025D8CC0)
DECLARE_EVENT_SOURCE(ChestLooted::Event, 0x025D8D30)
DECLARE_EVENT_SOURCE(CriticalHitEvent::Event, 0x025D8DA0)
DECLARE_EVENT_SOURCE(CustomMarkerUpdate::Event, 0x025D8E10)
DECLARE_EVENT_SOURCE(DaysJailed::Event, 0x025D8E80)
DECLARE_EVENT_SOURCE(EnteredUnity::Event, 0x025D8EF0)
DECLARE_EVENT_SOURCE(FinePaid::Event, 0x025D8F60)
DECLARE_EVENT_SOURCE(ItemCrafted::Event, 0x025D8FD0)
DECLARE_EVENT_SOURCE(ItemSteal::Event, 0x025D9040)
DECLARE_EVENT_SOURCE(JailEscape::Event, 0x025D90B0)
DECLARE_EVENT_SOURCE(Jailing::Event, 0x025D9120)
DECLARE_EVENT_SOURCE(LevelIncrease::Event, 0x025D9190)
DECLARE_EVENT_SOURCE(LocationMarkerArrayUpdate::Event, 0x025D9200)
DECLARE_EVENT_SOURCE(PlayerActiveEffectChanged::Event, 0x025D9270)
DECLARE_EVENT_SOURCE(PlayerAmmoChanged::Event, 0x025D92E0)
DECLARE_EVENT_SOURCE(PlayerCharacterQuestEvent::Event, 0x025D9350)
DECLARE_EVENT_SOURCE(PlayerDifficultySettingChanged::Event, 0x025D93C0)
DECLARE_EVENT_SOURCE(PlayerFastTravel::Event, 0x025D9430)
DECLARE_EVENT_SOURCE(PlayerInDialogueChanged::Event, 0x025D94A0)
DECLARE_EVENT_SOURCE(PlayerLifeStateChanged::Event, 0x025D9510)
DECLARE_EVENT_SOURCE(PlayerPickpocketSuccess::Event, 0x025D9580)
DECLARE_EVENT_SOURCE(PoisonedWeapon::Event, 0x025D95F0)
DECLARE_EVENT_SOURCE(TerminalHacked::Event, 0x025D9660)
DECLARE_EVENT_SOURCE(TravelMarkerStateChange::Event, 0x025D96D0)
DECLARE_EVENT_SOURCE(WeaponAttack::Event, 0x025D9740)
DECLARE_EVENT_SOURCE(Trespass::Event, 0x026371C0)
DECLARE_EVENT_SOURCE(VATSEvents::ModeChange, 0x026A08A0)
DECLARE_EVENT_SOURCE(VATSCommand, 0x026A0910)
DECLARE_EVENT_SOURCE(HoursPassed::Event, 0x029081E0)

// other events
DECLARE_EVENT_SOURCE(RadioManager::PipboyTransmitterDetectionEvent, 0x023A2A00)
DECLARE_EVENT_SOURCE_EX(XPChange::Event, 0x05CDD400)
DECLARE_EVENT_SOURCE_EX(WeaponFiredEvent, 0x05CD05E8)
DECLARE_EVENT_SOURCE_EX(ActorEquipManagerEvent::Event, 0x0666FAB0)
DECLARE_EVENT_SOURCE_EX(ActorEquipManagerEvent::SpellEvent, 0x0666FAD8)
DECLARE_EVENT_SOURCE_EX(AttachReference::Event, 0x05CDD3D8)
