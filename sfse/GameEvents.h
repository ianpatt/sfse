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
        DEFINE_MEMBER_FN_1(RegisterSink, void, 0x005C122C, SinkBase* sink);
        DEFINE_MEMBER_FN_1(UnregisterSink, void, 0x005C1040, SinkBase* sink);
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

DECLARE_EVENT_SOURCE(SnapTemplateUtils::SnapReplaceEvent, 0x0084239C)
DECLARE_EVENT_SOURCE(ImageFixtureEvent_RequestImage, 0x00843654)
DECLARE_EVENT_SOURCE(ImageFixtureEvent_UnregisterImage, 0x00846550)
DECLARE_EVENT_SOURCE(Spaceship::TakeOffEvent, 0x008493F8)
DECLARE_EVENT_SOURCE(HUDActivityIncreaseEvent, 0x012565B0)
DECLARE_EVENT_SOURCE(AnimationDataCleanupEvent, 0x0127779C)
DECLARE_EVENT_SOURCE(AnimationDataSetupEvent, 0x0127782C)
DECLARE_EVENT_SOURCE(EndLoadGameEvent, 0x012C6514)
DECLARE_EVENT_SOURCE(StartLoadGameEvent, 0x012C65A4)
DECLARE_EVENT_SOURCE(ShipEditor_SystemSelected, 0x012DD02C)
DECLARE_EVENT_SOURCE(ShipEditor_PreviewUpgrade, 0x012E36F0)
DECLARE_EVENT_SOURCE(ShipEditor_SelectedUpgrade, 0x012E3780)
DECLARE_EVENT_SOURCE(RuntimeComponentDBFactory::ReferenceAttach, 0x0131EE10)
DECLARE_EVENT_SOURCE(RuntimeComponentDBFactory::ReferenceDetach, 0x0131EEA0)
DECLARE_EVENT_SOURCE(WeaponGroupAssignmentMenu_ChangeWeaponAssignment, 0x013A3DB4)
DECLARE_EVENT_SOURCE(WeaponGroupAssignmentMenu_OnHintButtonActivated, 0x013A3E44)
DECLARE_EVENT_SOURCE(ShipEditor_OnExitConfirmCancel, 0x013C4404)
DECLARE_EVENT_SOURCE(ShipEditor_OnExitConfirmExit, 0x013C4494)
DECLARE_EVENT_SOURCE(ShipEditor_OnExitConfirmSaveAndExit, 0x013C4524)
DECLARE_EVENT_SOURCE(ShipEditor_OnFlightCheckTabChanged, 0x013C8FC4)
DECLARE_EVENT_SOURCE(ShipEditor_OnWeaponGroupChanged, 0x013C9054)
DECLARE_EVENT_SOURCE(ShipEditor_OnRenameEndEditText, 0x013CE990)
DECLARE_EVENT_SOURCE(ShipEditor_OnRenameInputCancelled, 0x013CEA20)
DECLARE_EVENT_SOURCE(ShipEditor_ChangeModuleCategory, 0x013D310C)
DECLARE_EVENT_SOURCE(ShipEditor_PreviewShipPart, 0x013D319C)
DECLARE_EVENT_SOURCE(ShipEditor_SelectedShipPart, 0x013D322C)
DECLARE_EVENT_SOURCE(ShipEditor_OnColorPickerControlChanged, 0x013DC0E0)
DECLARE_EVENT_SOURCE(ShipEditor_OnColorPickerTabChanged, 0x013DC170)
DECLARE_EVENT_SOURCE(ShipEditor_OnColorSliderMouseInput, 0x013DC200)
DECLARE_EVENT_SOURCE(ShipEditor_OnRecentColorSwatchClicked, 0x013DC290)
DECLARE_EVENT_SOURCE(ShipBuilder_CloseAllMenus, 0x013FD754)
DECLARE_EVENT_SOURCE(ShipEditor_OnHintButtonActivated, 0x013FD7E4)
DECLARE_EVENT_SOURCE(ShipEditor_RemoveAll3D, 0x013FD874)
DECLARE_EVENT_SOURCE(ReferenceQueuedEvent, 0x01465578)
DECLARE_EVENT_SOURCE(LoadScreenEndEvent, 0x0147E3A0)
DECLARE_EVENT_SOURCE(LoadScreenStartEvent, 0x0147E430)
DECLARE_EVENT_SOURCE(CellAttachDetachEvent, 0x0147E4C0)
DECLARE_EVENT_SOURCE(PickRefStateChangedEvent, 0x014EECE8)
DECLARE_EVENT_SOURCE(ActivityTrackerActivityStartedEvent, 0x014F9308)
DECLARE_EVENT_SOURCE(RuntimeComponentDBFactory::ReferenceCleared3d, 0x01584440)
DECLARE_EVENT_SOURCE(RuntimeComponentDBFactory::ReferenceDestroy, 0x015844D0)
DECLARE_EVENT_SOURCE(RuntimeComponentDBFactory::ReferenceInit, 0x01584560)
DECLARE_EVENT_SOURCE(RuntimeComponentDBFactory::ReferenceRecycle, 0x015845F0)
DECLARE_EVENT_SOURCE(RuntimeComponentDBFactory::ReferenceSet3d, 0x01584680)
DECLARE_EVENT_SOURCE(RuntimeComponentDBFactory::Release3DRelatedData, 0x01584710)
DECLARE_EVENT_SOURCE(BSWorldOriginShiftEvent, 0x01590BFC)
DECLARE_EVENT_SOURCE(BGSPlanet::PlayerKnowledgeFlagSetEvent, 0x016B9F6C)
DECLARE_EVENT_SOURCE(StarMap::PlanetTraitKnownEvent, 0x016B9FFC)
DECLARE_EVENT_SOURCE(ResetHistoryDataEvent, 0x017901F8)
DECLARE_EVENT_SOURCE(TESQuestRewardEvent, 0x017AA45C)
DECLARE_EVENT_SOURCE(HUDWeaponWorldFOVMultChangedEvent, 0x017AC6DC)
DECLARE_EVENT_SOURCE(BGSSceneActionPlayerDialogue::ActionEndEvent, 0x01885D30)
DECLARE_EVENT_SOURCE(BGSSceneActionPlayerDialogue::ActionStartEvent, 0x01885DC0)
DECLARE_EVENT_SOURCE(AutoLoadDoorRolloverEvent, 0x0193549C)
DECLARE_EVENT_SOURCE(ClearQuickContainerEvent, 0x0193552C)
DECLARE_EVENT_SOURCE(ReferenceCellLoadedTemps, 0x019AC70C)
DECLARE_EVENT_SOURCE(Workshop::CargoLinkAddedEvent, 0x01D2950C)
DECLARE_EVENT_SOURCE(Workshop::CargoLinkTargetChangedEvent, 0x01D2959C)
DECLARE_EVENT_SOURCE(Workshop::EnterOutpostBeaconModeEvent, 0x01D2962C)
DECLARE_EVENT_SOURCE(Workshop::ItemGrabbedEvent, 0x01D296BC)
DECLARE_EVENT_SOURCE(Workshop::ItemMovedEvent, 0x01D2974C)
DECLARE_EVENT_SOURCE(Workshop::ItemPlacedEvent, 0x01D297DC)
DECLARE_EVENT_SOURCE(Workshop::ItemProducedEvent, 0x01D2986C)
DECLARE_EVENT_SOURCE(Workshop::ItemRemovedEvent, 0x01D298FC)
DECLARE_EVENT_SOURCE(Workshop::ItemRepairedEvent, 0x01D2998C)
DECLARE_EVENT_SOURCE(Workshop::ItemScrappedEvent, 0x01D29A1C)
DECLARE_EVENT_SOURCE(Workshop::OutpostNameChangedEvent, 0x01D29AAC)
DECLARE_EVENT_SOURCE(Workshop::OutpostPlacedEvent, 0x01D29B3C)
DECLARE_EVENT_SOURCE(PickRefUpdateEvent, 0x01D29BCC)
DECLARE_EVENT_SOURCE(Workshop::PlacementStatusEvent, 0x01D29C5C)
DECLARE_EVENT_SOURCE(Workshop::PowerOffEvent, 0x01D29CEC)
DECLARE_EVENT_SOURCE(Workshop::PowerOnEvent, 0x01D29D7C)
DECLARE_EVENT_SOURCE(Workshop::SnapBehaviorCycledEvent, 0x01D29E0C)
DECLARE_EVENT_SOURCE(Workshop::WorkshopFlyCameraEvent, 0x01D29E9C)
DECLARE_EVENT_SOURCE(Workshop::WorkshopItemPlacedEvent, 0x01D29F2C)
DECLARE_EVENT_SOURCE(Workshop::WorkshopModeEvent, 0x01D29FBC)
DECLARE_EVENT_SOURCE(Workshop::WorkshopOutputLinkEvent, 0x01D2A04C)
DECLARE_EVENT_SOURCE(Workshop::WorkshopStatsChangedEvent, 0x01D2A0DC)
DECLARE_EVENT_SOURCE(Workshop::WorkshopUpdateStatsEvent, 0x01D2A16C)
DECLARE_EVENT_SOURCE(ShipCameraStateToggled, 0x01D7DA34)
DECLARE_EVENT_SOURCE(PlayerControls::PlayerJumpPressEvent, 0x01F4C224)
DECLARE_EVENT_SOURCE(PlayerControls::PlayerJumpReleaseEvent, 0x01F4C2B4)
DECLARE_EVENT_SOURCE(PlayerSneakingChangeEvent, 0x01F4DA2C)
DECLARE_EVENT_SOURCE(PlayerControls::PlayerZeroGSprintJustPressedEvent, 0x01F4DC68)
DECLARE_EVENT_SOURCE(PlayerControls::PlayerZeroGSprintReleasedEvent, 0x01F4DCF8)
DECLARE_EVENT_SOURCE(PlayerControls::PlayerIronSightsEndEvent, 0x01F50E7C)
DECLARE_EVENT_SOURCE(PlayerControls::PlayerIronSightsStartEvent, 0x01F50F0C)
DECLARE_EVENT_SOURCE(SaveLoadEvent, 0x01F8023C)
DECLARE_EVENT_SOURCE(SpaceshipWeaponBinding::SpaceshipWeaponBindingChangedEvent, 0x01FA9A48)
DECLARE_EVENT_SOURCE(BoundaryMenu_FastTravel, 0x01FBE778)
DECLARE_EVENT_SOURCE(BoundaryMenu_ShowMap, 0x01FBE808)
DECLARE_EVENT_SOURCE(PhotoGallery_DeletePhoto, 0x01FC75D4)
DECLARE_EVENT_SOURCE(PowersMenu_ActivateEssence, 0x01FCAAB0)
DECLARE_EVENT_SOURCE(PowersMenu_EquipPower, 0x01FCAB40)
DECLARE_EVENT_SOURCE(PowersMenu_FavoritePower, 0x01FCABD0)
DECLARE_EVENT_SOURCE(ContainerMenuClosed::Event, 0x01FDE0BC)
DECLARE_EVENT_SOURCE(HangarShipSelection_ChangeSystemDisplay, 0x01FDE14C)
DECLARE_EVENT_SOURCE(HangarShipSelection_RepairShip, 0x01FDE1DC)
DECLARE_EVENT_SOURCE(HangarShipSelection_UpgradeSystem, 0x01FDE26C)
DECLARE_EVENT_SOURCE(ShipCrewMenu_Close, 0x01FDE2FC)
DECLARE_EVENT_SOURCE(BinkMovieStoppedPlayingEvent, 0x01FE3360)
DECLARE_EVENT_SOURCE(WorkshopColorMode_ApplyColors, 0x0200B1BC)
DECLARE_EVENT_SOURCE(WorkshopColorMode_SelectedTab, 0x0200B24C)
DECLARE_EVENT_SOURCE(WorkshopColorMode_SliderChanged, 0x0200B2DC)
DECLARE_EVENT_SOURCE(WorkshopColorMode_SwatchChanged, 0x0200B36C)
DECLARE_EVENT_SOURCE(HUDCrewBuffMessageEvent, 0x0200C50C)
DECLARE_EVENT_SOURCE(CraftingMenu_SessionSummaryEvent, 0x020155A8)
DECLARE_EVENT_SOURCE(CraftingMenu_CraftItem, 0x02015638)
DECLARE_EVENT_SOURCE(CraftingMenu_ExitBench, 0x020156C8)
DECLARE_EVENT_SOURCE(CraftingMenu_InstallMod, 0x02015758)
DECLARE_EVENT_SOURCE(CraftingMenu_RenameItem, 0x020157E8)
DECLARE_EVENT_SOURCE(CraftingMenu_RevertedModdedItem, 0x02015878)
DECLARE_EVENT_SOURCE(CraftingMenu_SelectedMod, 0x02015908)
DECLARE_EVENT_SOURCE(CraftingMenu_SelectedModSlot, 0x02015998)
DECLARE_EVENT_SOURCE(CraftingMenu_SelectedModdableItem, 0x02015A28)
DECLARE_EVENT_SOURCE(CraftingMenu_SelectedRecipe, 0x02015AB8)
DECLARE_EVENT_SOURCE(CraftingMenu_SetInspectControls, 0x02015B48)
DECLARE_EVENT_SOURCE(CraftingMenu_ToggleTracking, 0x02015BD8)
DECLARE_EVENT_SOURCE(CraftingMenu_ViewingModdableItem, 0x02015C68)
DECLARE_EVENT_SOURCE(ContainerMenu_CloseMenu, 0x0202411C)
DECLARE_EVENT_SOURCE(InventoryMenu_Change3DView, 0x0202424C)
DECLARE_EVENT_SOURCE(InventoryMenu_PaperDollTryOn, 0x020242DC)
DECLARE_EVENT_SOURCE(InventoryMenu_ResetPaperDollInv, 0x0202436C)
DECLARE_EVENT_SOURCE(UpdateActivateListenerEvent, 0x0202C4E8)
DECLARE_EVENT_SOURCE(StartOutpostFromListenerEvent, 0x0202E1A8)
DECLARE_EVENT_SOURCE(HUDModeEvent, 0x0203E3A4)
DECLARE_EVENT_SOURCE(OpenContainerMenuEventData, 0x0203E434)
DECLARE_EVENT_SOURCE(OpenContainerMenuFromListenerEvent, 0x0203E4C4)
DECLARE_EVENT_SOURCE(HUDRolloverActivationButtonEvent, 0x0203E554)
DECLARE_EVENT_SOURCE(HUDRolloverActivationQCItemPressEvent, 0x0203E5E4)
DECLARE_EVENT_SOURCE(Inventory_SetSort, 0x0203E674)
DECLARE_EVENT_SOURCE(ShowingQuestMarketTextEvent, 0x0204C528)
DECLARE_EVENT_SOURCE(TargetHitEvent, 0x0204EB18)
DECLARE_EVENT_SOURCE(BSTValueRequestEvent<PlayerCrosshairModeEvent>, 0x0204EBA8)
DECLARE_EVENT_SOURCE(ClearHUDMessagesEvent, 0x02055F94)
DECLARE_EVENT_SOURCE(ShowHUDMessageEvent, 0x02056024)
DECLARE_EVENT_SOURCE(PlayerDetectionLevelChangeEvent, 0x02059184)
DECLARE_EVENT_SOURCE(ShowCustomWatchAlert, 0x0205E28C)
DECLARE_EVENT_SOURCE(PlayerUpdateEvent, 0x0209196C)
DECLARE_EVENT_SOURCE(InventoryMenu_ToggleHelmet, 0x020919FC)
DECLARE_EVENT_SOURCE(InventoryMenu_ToggleSuit, 0x02091A8C)
DECLARE_EVENT_SOURCE(ControlsRemappedEvent, 0x020D5168)
DECLARE_EVENT_SOURCE(SettingsPanel_CheckBoxChanged, 0x020D51F8)
DECLARE_EVENT_SOURCE(SettingsPanel_ClearBinding, 0x020D5288)
DECLARE_EVENT_SOURCE(SettingsPanel_OpenCategory, 0x020D53BC)
DECLARE_EVENT_SOURCE(SettingsPanel_OpenSettings, 0x020D544C)
DECLARE_EVENT_SOURCE(SettingsPanel_RemapConfirmed, 0x020D54DC)
DECLARE_EVENT_SOURCE(SettingsPanel_RemapMode, 0x020D556C)
DECLARE_EVENT_SOURCE(SettingsPanel_ResetToDefaults, 0x020D55FC)
DECLARE_EVENT_SOURCE(SettingsPanel_SaveControls, 0x020D568C)
DECLARE_EVENT_SOURCE(SettingsPanel_SaveSettings, 0x020D571C)
DECLARE_EVENT_SOURCE(SettingsPanel_SliderChanged, 0x020D57AC)
DECLARE_EVENT_SOURCE(SettingsPanel_StepperChanged, 0x020D583C)
DECLARE_EVENT_SOURCE(SettingsPanel_ValidateControls, 0x020D58CC)
DECLARE_EVENT_SOURCE(ShipCrewMenu_OpenAssignMenu, 0x020DF4C8)
DECLARE_EVENT_SOURCE(ShipCrewMenu_SetSort, 0x020DF558)
DECLARE_EVENT_SOURCE(Spaceship::PlayerMovementOutputEvent, 0x021056C8)
DECLARE_EVENT_SOURCE(ShowLongShipBootup, 0x02105758)
DECLARE_EVENT_SOURCE(ShipHudQuickContainer_TransferMenu, 0x021057E8)
DECLARE_EVENT_SOURCE(ShipHud_Activate, 0x02105878)
DECLARE_EVENT_SOURCE(ShipHud_BodyViewMarkerDimensions, 0x02105908)
DECLARE_EVENT_SOURCE(ShipHud_ChangeComponentSelection, 0x02105998)
DECLARE_EVENT_SOURCE(ShipHud_CloseMenu, 0x02105A28)
DECLARE_EVENT_SOURCE(ShipHud_Deselect, 0x02105AB8)
DECLARE_EVENT_SOURCE(ShipHud_FarTravel, 0x02105B48)
DECLARE_EVENT_SOURCE(ShipHud_HailAccepted, 0x02105BD8)
DECLARE_EVENT_SOURCE(ShipHud_HailCancelled, 0x02105C68)
DECLARE_EVENT_SOURCE(ShipHud_JumpToQuestMarker, 0x02105CF8)
DECLARE_EVENT_SOURCE(ShipHud_Land, 0x02105D88)
DECLARE_EVENT_SOURCE(ShipHud_LandingMarkerMap, 0x02105E18)
DECLARE_EVENT_SOURCE(ShipHud_Map, 0x02105EA8)
DECLARE_EVENT_SOURCE(ShipHud_OnMonocleToggle, 0x02105F38)
DECLARE_EVENT_SOURCE(ShipHud_OpenPhotoMode, 0x02105FC8)
DECLARE_EVENT_SOURCE(ShipHud_Repair, 0x02106058)
DECLARE_EVENT_SOURCE(ShipHud_SetTargetMode, 0x021060E8)
DECLARE_EVENT_SOURCE(ShipHud_Target, 0x02106178)
DECLARE_EVENT_SOURCE(ShipHud_TargetShipSystem, 0x02106208)
DECLARE_EVENT_SOURCE(ShipHud_UntargetShipSystem, 0x02106298)
DECLARE_EVENT_SOURCE(ShipHud_UpdateComponentPower, 0x02106328)
DECLARE_EVENT_SOURCE(DialogueMenu_CompleteExit, 0x02131B3C)
DECLARE_EVENT_SOURCE(BGSScannerGuideEffectStatusUpdateEvent, 0x02141CD0)
DECLARE_EVENT_SOURCE(GlobalFunc_CloseAllMenus, 0x02146C98)
DECLARE_EVENT_SOURCE(GlobalFunc_CloseMenu, 0x02146D28)
DECLARE_EVENT_SOURCE(GlobalFunc_PlayMenuSound, 0x02146DB8)
DECLARE_EVENT_SOURCE(GlobalFunc_StartGameRender, 0x02146E48)
DECLARE_EVENT_SOURCE(GlobalFunc_UserEvent, 0x02146ED8)
DECLARE_EVENT_SOURCE(ExperienceMeterDisplayData, 0x02150838)
DECLARE_EVENT_SOURCE(LevelUp_AnimFinished, 0x021508C8)
DECLARE_EVENT_SOURCE(LevelUp_OnWidgetShown, 0x02150958)
DECLARE_EVENT_SOURCE(LevelUp_OpenDataMenu, 0x021509E8)
DECLARE_EVENT_SOURCE(LevelUp_ShowSkills, 0x02150A78)
DECLARE_EVENT_SOURCE(LocationTextWidget_FinishedQueue, 0x02150B08)
DECLARE_EVENT_SOURCE(DisplayFatigueWarningEvent, 0x02150DB0)
DECLARE_EVENT_SOURCE(BSTValueRequestEvent<SaveLoadMessageStringEvent>, 0x0215481C)
DECLARE_EVENT_SOURCE(PlayerCrosshairModeEvent, 0x0204E220)
DECLARE_EVENT_SOURCE(HUDNotificationEvent, 0x0215DA78)
DECLARE_EVENT_SOURCE(HUDNotification_MissionActiveWidgetUpdate, 0x0215DB08)
DECLARE_EVENT_SOURCE(HUDNotification_OpenDataMenu, 0x0215DB98)
DECLARE_EVENT_SOURCE(HUDNotification_OpenMissionMenu, 0x0215DC28)
DECLARE_EVENT_SOURCE(HUDNotification_SetMissionActive, 0x0215DCB8)
DECLARE_EVENT_SOURCE(PlayerSetWeaponStateEvent, 0x0215F898)
DECLARE_EVENT_SOURCE(BarterMenu_BuyItem, 0x02172918)
DECLARE_EVENT_SOURCE(BarterMenu_CloseMenu, 0x021729A8)
DECLARE_EVENT_SOURCE(BarterMenu_HideModel, 0x02172A38)
DECLARE_EVENT_SOURCE(BarterMenu_LoadModel, 0x02172AC8)
DECLARE_EVENT_SOURCE(BarterMenu_SellItem, 0x02172B58)
DECLARE_EVENT_SOURCE(BarterMenu_SetMouseOverModel, 0x02172BE8)
DECLARE_EVENT_SOURCE(BarterMenu_ShowFailureMessage, 0x02172C78)
DECLARE_EVENT_SOURCE(BarterMenu_ViewedItem, 0x02172D08)
DECLARE_EVENT_SOURCE(MissionMenu_ClearState, 0x02177310)
DECLARE_EVENT_SOURCE(MissionMenu_PlotToLocation, 0x021773A0)
DECLARE_EVENT_SOURCE(MissionMenu_RejectQuest, 0x02177430)
DECLARE_EVENT_SOURCE(MissionMenu_SaveCategoryIndex, 0x021774C0)
DECLARE_EVENT_SOURCE(MissionMenu_SaveOpenedId, 0x02177550)
DECLARE_EVENT_SOURCE(MissionMenu_ShowItemLocation, 0x021775E0)
DECLARE_EVENT_SOURCE(MissionMenu_ToggleTrackingQuest, 0x0217770C)
DECLARE_EVENT_SOURCE(DataSlateButtons_acceptClicked, 0x0217CE30)
DECLARE_EVENT_SOURCE(DataSlateButtons_cancelClicked, 0x0217CEC0)
DECLARE_EVENT_SOURCE(DataSlateMenu_playSFX, 0x0217CF50)
DECLARE_EVENT_SOURCE(DataSlateMenu_toggleAudio, 0x0217CFE0)
DECLARE_EVENT_SOURCE(InventoryMenu_DropItem, 0x021836F4)
DECLARE_EVENT_SOURCE(InventoryMenu_HideModel, 0x02183784)
DECLARE_EVENT_SOURCE(InventoryMenu_LoadModel, 0x02183814)
DECLARE_EVENT_SOURCE(InventoryMenu_OnEnterCategory, 0x021838A4)
DECLARE_EVENT_SOURCE(InventoryMenu_OpenCargoHold, 0x02183934)
DECLARE_EVENT_SOURCE(InventoryMenu_SelectItem, 0x021839C4)
DECLARE_EVENT_SOURCE(InventoryMenu_SetMouseOverModel, 0x02183A54)
DECLARE_EVENT_SOURCE(InventoryMenu_ToggleFavorite, 0x02183B8C)
DECLARE_EVENT_SOURCE(MissionBoard_MissionEntryChanged, 0x0218FED8)
DECLARE_EVENT_SOURCE(MissionBoard_MissionEntryPressed, 0x0218FF68)
DECLARE_EVENT_SOURCE(MonocleMenu_Bioscan, 0x0219725C)
DECLARE_EVENT_SOURCE(MonocleMenu_FastTravel, 0x021972EC)
DECLARE_EVENT_SOURCE(MonocleMenu_Harvest, 0x0219737C)
DECLARE_EVENT_SOURCE(MonocleMenu_Initialize, 0x0219740C)
DECLARE_EVENT_SOURCE(MonocleMenu_Outpost, 0x0219749C)
DECLARE_EVENT_SOURCE(MonocleMenu_PhotoMode, 0x0219752C)
DECLARE_EVENT_SOURCE(MonocleMenu_Shutdown, 0x021975BC)
DECLARE_EVENT_SOURCE(MonocleMenu_SocialSpell, 0x0219764C)
DECLARE_EVENT_SOURCE(MonocleMenu_StartContainerView, 0x021976DC)
DECLARE_EVENT_SOURCE(MonocleMenu_StopContainerView, 0x0219776C)
DECLARE_EVENT_SOURCE(MonocleMenu_SurfaceMap, 0x021977FC)
DECLARE_EVENT_SOURCE(MonocleMenu_UseListScrollControls, 0x0219788C)
DECLARE_EVENT_SOURCE(MonocleMenu_ZoomIn, 0x0219791C)
DECLARE_EVENT_SOURCE(MonocleMenu_ZoomOut, 0x021979AC)
DECLARE_EVENT_SOURCE(PhotoMode_InitializeCategory, 0x0219C2DC)
DECLARE_EVENT_SOURCE(PhotoMode_ResetToDefaults, 0x0219C36C)
DECLARE_EVENT_SOURCE(PhotoMode_SliderChanged, 0x0219C3FC)
DECLARE_EVENT_SOURCE(PhotoMode_StepperChanged, 0x0219C48C)
DECLARE_EVENT_SOURCE(PhotoMode_TakeSnapshot, 0x0219C51C)
DECLARE_EVENT_SOURCE(PhotoMode_ToggleHelmet, 0x0219C5AC)
DECLARE_EVENT_SOURCE(PhotoMode_ToggleUI, 0x0219C63C)
DECLARE_EVENT_SOURCE(PickpocketMenu_OnItemSelect, 0x021A4AF4)
DECLARE_EVENT_SOURCE(ResearchMenu_AddMaterial, 0x021A9F28)
DECLARE_EVENT_SOURCE(ResearchMenu_CategorySelected, 0x021A9FB8)
DECLARE_EVENT_SOURCE(ResearchMenu_ExitMenu, 0x021AA048)
DECLARE_EVENT_SOURCE(ResearchMenu_HideModel, 0x021AA0D8)
DECLARE_EVENT_SOURCE(ResearchMenu_PreviewProject, 0x021AA168)
DECLARE_EVENT_SOURCE(ResearchMenu_ProjectViewed, 0x021AA1F8)
DECLARE_EVENT_SOURCE(ResearchMenu_SetInspectControls, 0x021AA288)
DECLARE_EVENT_SOURCE(ResearchMenu_ToggleTrackingProject, 0x021AA318)
DECLARE_EVENT_SOURCE(UnlockedTerminalElementEvent, 0x021BBB8C)
DECLARE_EVENT_SOURCE(SecurityMenu_BackOutKey, 0x021BBC1C)
DECLARE_EVENT_SOURCE(SecurityMenu_CloseMenu, 0x021BBCAC)
DECLARE_EVENT_SOURCE(SecurityMenu_ConfirmExit, 0x021BBD3C)
DECLARE_EVENT_SOURCE(SecurityMenu_EliminateUnusedKeys, 0x021BBDCC)
DECLARE_EVENT_SOURCE(SecurityMenu_GetRingHint, 0x021BBE5C)
DECLARE_EVENT_SOURCE(SecurityMenu_SelectNewKey, 0x021BBEEC)
DECLARE_EVENT_SOURCE(SecurityMenu_TryUseKey, 0x021BBF7C)
DECLARE_EVENT_SOURCE(ShipCrewAssignMenu_Assign, 0x021BFF44)
DECLARE_EVENT_SOURCE(ShipCrewAssignMenu_Unassign, 0x021BFFD4)
DECLARE_EVENT_SOURCE(ShipCrewMenu_ViewedItem, 0x021C0064)
DECLARE_EVENT_SOURCE(Refuel_Accept, 0x021C1F04)
DECLARE_EVENT_SOURCE(Refuel_Cancel, 0x021C1F94)
DECLARE_EVENT_SOURCE(SkillsMenu_Accept, 0x021C89DC)
DECLARE_EVENT_SOURCE(SkillsMenu_AddPatch, 0x021C8A6C)
DECLARE_EVENT_SOURCE(SkillsMenu_Cancel, 0x021C8AFC)
DECLARE_EVENT_SOURCE(SkillsMenu_ChangeCursorVisibility, 0x021C8B8C)
DECLARE_EVENT_SOURCE(SkillsMenu_SaveLastCategory, 0x021C8C1C)
DECLARE_EVENT_SOURCE(BSChargenAPI::BIDataUtils::MenuClosedEvent, 0x021ED6F4)
DECLARE_EVENT_SOURCE(BSChargenAPI::BIDataUtils::PresetNPCChangedEvent, 0x021ED784)
DECLARE_EVENT_SOURCE(CharGen_BrowChange, 0x021ED814)
DECLARE_EVENT_SOURCE(CharGen_BrowColorChange, 0x021ED8A4)
DECLARE_EVENT_SOURCE(CharGen_CancelTextEntry, 0x021ED934)
DECLARE_EVENT_SOURCE(CharGen_CloseMenu, 0x021ED9C4)
DECLARE_EVENT_SOURCE(CharGen_CyclePronoun, 0x021EDA54)
DECLARE_EVENT_SOURCE(CharGen_DirtScarsEtcChange, 0x021EDAE4)
DECLARE_EVENT_SOURCE(CharGen_EndBodyChange, 0x021EDB74)
DECLARE_EVENT_SOURCE(CharGen_EndTextEntry, 0x021EDC04)
DECLARE_EVENT_SOURCE(CharGen_EyeColorChange, 0x021EDC94)
DECLARE_EVENT_SOURCE(CharGen_FacialHairChange, 0x021EDD24)
DECLARE_EVENT_SOURCE(CharGen_FacialHairColorChange, 0x021EDDB4)
DECLARE_EVENT_SOURCE(CharGen_HairChange, 0x021EDE44)
DECLARE_EVENT_SOURCE(CharGen_HairColorChange, 0x021EDED4)
DECLARE_EVENT_SOURCE(CharGen_HeadpartPlusSelectorChange, 0x021EDF64)
DECLARE_EVENT_SOURCE(CharGen_HeadpartPresetChange, 0x021EDFF4)
DECLARE_EVENT_SOURCE(CharGen_JewelryChange, 0x021EE084)
DECLARE_EVENT_SOURCE(CharGen_JewelryColorChange, 0x021EE114)
DECLARE_EVENT_SOURCE(CharGen_MakeupChange, 0x021EE1A4)
DECLARE_EVENT_SOURCE(CharGen_MarkingsChange, 0x021EE234)
DECLARE_EVENT_SOURCE(CharGen_PostBlendColorOptionChange, 0x021EE2C4)
DECLARE_EVENT_SOURCE(CharGen_PostBlendFaceChange, 0x021EE354)
DECLARE_EVENT_SOURCE(CharGen_PostBlendIntensityChange, 0x021EE3E4)
DECLARE_EVENT_SOURCE(CharGen_PresetChange, 0x021EE474)
DECLARE_EVENT_SOURCE(CharGen_RollOffLocomotion, 0x021EE504)
DECLARE_EVENT_SOURCE(CharGen_RollOnLocomotion, 0x021EE594)
DECLARE_EVENT_SOURCE(CharGen_RotatePaperdoll, 0x021EE624)
DECLARE_EVENT_SOURCE(CharGen_SetAdditionalSlider, 0x021EE6B4)
DECLARE_EVENT_SOURCE(CharGen_SetBackground, 0x021EE744)
DECLARE_EVENT_SOURCE(CharGen_SetBlockInputUnderPopup, 0x021EE7D4)
DECLARE_EVENT_SOURCE(CharGen_SetBodyValues, 0x021EE864)
DECLARE_EVENT_SOURCE(CharGen_SetCameraPosition, 0x021EE8F4)
DECLARE_EVENT_SOURCE(CharGen_SetPronoun, 0x021EE984)
DECLARE_EVENT_SOURCE(CharGen_SetSex, 0x021EEA14)
DECLARE_EVENT_SOURCE(CharGen_SetSlider, 0x021EEAA4)
DECLARE_EVENT_SOURCE(CharGen_SetTrait, 0x021EEB34)
DECLARE_EVENT_SOURCE(CharGen_ShowChooseBackgroundMessage, 0x021EEBC4)
DECLARE_EVENT_SOURCE(CharGen_ShowPlayerRenameMessage, 0x021EEC54)
DECLARE_EVENT_SOURCE(CharGen_SkintoneChange, 0x021EECE4)
DECLARE_EVENT_SOURCE(CharGen_StartBodyChange, 0x021EED74)
DECLARE_EVENT_SOURCE(CharGen_StartTextEntry, 0x021EEE04)
DECLARE_EVENT_SOURCE(CharGen_SwitchBodyType, 0x021EEE94)
DECLARE_EVENT_SOURCE(CharGen_SwitchLocomotion, 0x021EEF24)
DECLARE_EVENT_SOURCE(CharGen_TeethChange, 0x021EEFB4)
DECLARE_EVENT_SOURCE(CharGen_TeethRollOff, 0x021EF044)
DECLARE_EVENT_SOURCE(CharGen_TeethRollOn, 0x021EF0D4)
DECLARE_EVENT_SOURCE(CharGen_ToggleMarking, 0x021EF164)
DECLARE_EVENT_SOURCE(CharGen_TogglePreviewHabSuit, 0x021EF1F4)
DECLARE_EVENT_SOURCE(UIMenuChargenMenuDisablePaperdoll, 0x021EF284)
DECLARE_EVENT_SOURCE(DataMenu_CloseMenu, 0x021F6308)
DECLARE_EVENT_SOURCE(DataMenu_ClosedForSubMenu, 0x021F6398)
DECLARE_EVENT_SOURCE(DataMenu_Missions, 0x021F6428)
DECLARE_EVENT_SOURCE(DataMenu_PlotToLocation, 0x021F655C)
DECLARE_EVENT_SOURCE(DataMenu_Reopened, 0x021F65EC)
DECLARE_EVENT_SOURCE(DataMenu_SelectedAttributesMenu, 0x021F667C)
DECLARE_EVENT_SOURCE(DataMenu_SelectedInventoryMenu, 0x021F670C)
DECLARE_EVENT_SOURCE(DataMenu_SelectedMapMenu, 0x021F679C)
DECLARE_EVENT_SOURCE(DataMenu_SelectedPowersMenu, 0x021F682C)
DECLARE_EVENT_SOURCE(DataMenu_SelectedShipMenu, 0x021F68BC)
DECLARE_EVENT_SOURCE(DataMenu_SelectedStatusMenu, 0x021F694C)
DECLARE_EVENT_SOURCE(DataMenu_SetMenuForQuickEntry, 0x021F69DC)
DECLARE_EVENT_SOURCE(DataMenu_SetPaperDollActive, 0x021F6A6C)
DECLARE_EVENT_SOURCE(PauseMenu_ActionCanceled, 0x02200C34)
DECLARE_EVENT_SOURCE(PauseMenu_ConfirmAction, 0x02200CC4)
DECLARE_EVENT_SOURCE(PauseMenu_ConfirmLoad, 0x02200D54)
DECLARE_EVENT_SOURCE(PauseMenu_ConfirmSave, 0x02200DE4)
DECLARE_EVENT_SOURCE(PauseMenu_DeleteSave, 0x02200E74)
DECLARE_EVENT_SOURCE(PauseMenu_QuitToDesktop, 0x02200F04)
DECLARE_EVENT_SOURCE(PauseMenu_SetCharacter, 0x02200F94)
DECLARE_EVENT_SOURCE(PauseMenu_StartAction, 0x02201024)
DECLARE_EVENT_SOURCE(PauseMenu_StartLoad, 0x022010B4)
DECLARE_EVENT_SOURCE(PauseMenu_UploadSave, 0x02201144)
DECLARE_EVENT_SOURCE(PlayBink_CloseMenu, 0x022020F0)
DECLARE_EVENT_SOURCE(Spaceship::GravJumpEvent, 0x02207D24)
DECLARE_EVENT_SOURCE(Spaceship::LandedSetEvent, 0x02207DB4)
DECLARE_EVENT_SOURCE(Reticle_OnLongAnimFinished, 0x02207E44)
DECLARE_EVENT_SOURCE(ShipHudQuickContainer_TransferItem, 0x02207ED4)
DECLARE_EVENT_SOURCE(ShipHud_AbortJump, 0x02207F64)
DECLARE_EVENT_SOURCE(ShipHud_DockRequested, 0x02207FF4)
DECLARE_EVENT_SOURCE(ShipHud_HailShip, 0x02208084)
DECLARE_EVENT_SOURCE(ShipHud_UpdateTargetPanelRect, 0x02208114)
DECLARE_EVENT_SOURCE(TakeoffMenu_CloseMenu, 0x022081A4)
DECLARE_EVENT_SOURCE(TakeoffMenu_ExitShip, 0x02208234)
DECLARE_EVENT_SOURCE(TakeoffMenu_Launch, 0x022082C4)
DECLARE_EVENT_SOURCE(StarMapMenu_LandingInputInProgress, 0x02227560)
DECLARE_EVENT_SOURCE(StarMapMenu_MarkerGroupContainerVisibilityChanged, 0x022275F0)
DECLARE_EVENT_SOURCE(StarMapMenu_MarkerGroupEntryClicked, 0x02227680)
DECLARE_EVENT_SOURCE(StarMapMenu_MarkerGroupEntryHoverChanged, 0x02227710)
DECLARE_EVENT_SOURCE(StarMapMenu_ScanPlanet, 0x022277A0)
DECLARE_EVENT_SOURCE(StarMapMenu_SelectedLandingSite, 0x02227830)
DECLARE_EVENT_SOURCE(StarMapMenu_SelectedLandingSiteFailed, 0x022278C0)
DECLARE_EVENT_SOURCE(StarMapMenu_ShowRealCursor, 0x02227950)
DECLARE_EVENT_SOURCE(StarMapMenu_QuickSelectChange, 0x0223CE20)
DECLARE_EVENT_SOURCE(StarMapMenu_Galaxy_FocusSystem, 0x0224DD70)
DECLARE_EVENT_SOURCE(StarMapMenu_OnGalaxyViewInitialized, 0x0224DE00)
DECLARE_EVENT_SOURCE(StarMapMenu_ExecuteRoute, 0x022588E8)
DECLARE_EVENT_SOURCE(StarMapMenu_OnCancel, 0x02258978)
DECLARE_EVENT_SOURCE(StarMapMenu_OnClearRoute, 0x02258A08)
DECLARE_EVENT_SOURCE(StarMapMenu_OnExitStarMap, 0x02258A98)
DECLARE_EVENT_SOURCE(StarMapMenu_OnHintButtonClicked, 0x02258B28)
DECLARE_EVENT_SOURCE(StarMapMenu_OnOutpostEntrySelected, 0x02258BB8)
DECLARE_EVENT_SOURCE(StarMapMenu_ReadyToClose, 0x02258C48)
DECLARE_EVENT_SOURCE(SurfaceMapMenu_MarkerClicked, 0x022768DC)
DECLARE_EVENT_SOURCE(SurfaceMapMenu_TryPlaceCustomMarker, 0x0227696C)
DECLARE_EVENT_SOURCE(TerminalMenu_CancelEvent, 0x02290E30)
DECLARE_EVENT_SOURCE(Terminal_CloseAllViews, 0x02290EC0)
DECLARE_EVENT_SOURCE(Terminal_CloseTopView, 0x02290F50)
DECLARE_EVENT_SOURCE(Terminal_CloseView, 0x02290FE0)
DECLARE_EVENT_SOURCE(Terminal_MenuItemClick, 0x02291070)
DECLARE_EVENT_SOURCE(TestMenu_DoAction, 0x0229CEE0)
DECLARE_EVENT_SOURCE(TestMenu_ExitMenu, 0x0229CF70)
DECLARE_EVENT_SOURCE(TestMenu_ShowImages, 0x0229D000)
DECLARE_EVENT_SOURCE(TestMenu_ShowResources, 0x0229D090)
DECLARE_EVENT_SOURCE(TestMenu_TestAll, 0x0229D120)
DECLARE_EVENT_SOURCE(TextInputMenu_EndEditText, 0x022A10C4)
DECLARE_EVENT_SOURCE(TextInputMenu_InputCanceled, 0x022A1154)
DECLARE_EVENT_SOURCE(TextInputMenu_StartEditText, 0x022A11E4)
DECLARE_EVENT_SOURCE(CraftingMenu_Highlight3D, 0x022A24B4)
DECLARE_EVENT_SOURCE(CraftingMenu_RevertHighlight, 0x022A2544)
DECLARE_EVENT_SOURCE(WorkshopBuilderMenu_ChangeBuildItem, 0x022A4BA8)
DECLARE_EVENT_SOURCE(WorkshopBuilderMenu_SelectedItem, 0x022A4C38)
DECLARE_EVENT_SOURCE(WorkshopBuilderMenu_ToggleTracking, 0x022A4CC8)
DECLARE_EVENT_SOURCE(WorkshopMenu_AttemptBuild, 0x022AD514)
DECLARE_EVENT_SOURCE(WorkshopMenu_CancelAction, 0x022AD5A4)
DECLARE_EVENT_SOURCE(WorkshopMenu_ChangeVariant, 0x022AD634)
DECLARE_EVENT_SOURCE(WorkshopMenu_ConnectionEvent, 0x022AD6C4)
DECLARE_EVENT_SOURCE(WorkshopMenu_ExitMenu, 0x022AD754)
DECLARE_EVENT_SOURCE(WorkshopMenu_MessageCallback, 0x022AD7E4)
DECLARE_EVENT_SOURCE(WorkshopMenu_SelectedCategory, 0x022AD874)
DECLARE_EVENT_SOURCE(WorkshopMenu_SelectedGridObject, 0x022AD904)
DECLARE_EVENT_SOURCE(WorkshopMenu_ShowExtras, 0x022AD994)
DECLARE_EVENT_SOURCE(WorkshopMenu_SwitchMode, 0x022ADA24)
DECLARE_EVENT_SOURCE(WorkshopMenu_ToggleDistance, 0x022ADAB4)
DECLARE_EVENT_SOURCE(WorkshopMenu_ToggleTracking, 0x022ADB44)
DECLARE_EVENT_SOURCE(WorkshopMenu_ToggleView, 0x022ADBD4)
DECLARE_EVENT_SOURCE(WorkshopQuickMenu_ConfirmAction, 0x022AF624)
DECLARE_EVENT_SOURCE(WorkshopQuickMenu_ExitMenu, 0x022AF6B4)
DECLARE_EVENT_SOURCE(WorkshopTargetMenu_TargetHovered, 0x022B5B7C)
DECLARE_EVENT_SOURCE(WorkshopTargetMenu_TargetPicked, 0x022B5C0C)
DECLARE_EVENT_SOURCE(WorkshopActionButton_HoldFinished, 0x022CCCB0)
DECLARE_EVENT_SOURCE(WorkshopActionButton_HoldStopped, 0x022CCD40)
DECLARE_EVENT_SOURCE(WorkshopShared_SetActionHandles, 0x022CCDD0)
DECLARE_EVENT_SOURCE(WorkshopShared_StartAction, 0x022CCE60)
DECLARE_EVENT_SOURCE(ModelReferenceEffectEvents::ReferenceEffectFinished, 0x022ECA74)
DECLARE_EVENT_SOURCE(BGSAcousticSpaceListener::StackChangedEvent, 0x023009A4)
DECLARE_EVENT_SOURCE(SpaceshipBIEvents::ShipPowerAllocationBIEventSent, 0x02317470)
DECLARE_EVENT_SOURCE(BGSActorDeathEvent, 0x02323C5C)
DECLARE_EVENT_SOURCE(Research::ResearchProgressEvent, 0x023744D8)
DECLARE_EVENT_SOURCE(BSTValueRequestEvent<PlayerAutoAimActorEvent>, 0x025945E8)
DECLARE_EVENT_SOURCE(PlayerInCombatChangeEvent, 0x025ACB30)
DECLARE_EVENT_SOURCE(BlurEvent, 0x0287B4B8)
DECLARE_EVENT_SOURCE(ContainerMenu_HideModel, 0x0289E4A8)
DECLARE_EVENT_SOURCE(ContainerMenu_Jettison, 0x0289E538)
DECLARE_EVENT_SOURCE(ContainerMenu_LoadModel, 0x0289E5C8)
DECLARE_EVENT_SOURCE(ContainerMenu_OpenRefuelMenu, 0x0289E658)
DECLARE_EVENT_SOURCE(ContainerMenu_SetMouseOverModel, 0x0289E6E8)
DECLARE_EVENT_SOURCE(ContainerMenu_TakeAll, 0x0289E778)
DECLARE_EVENT_SOURCE(ContainerMenu_ToggleEquip, 0x0289E808)
DECLARE_EVENT_SOURCE(ContainerMenu_TransferItem, 0x0289E93C)
DECLARE_EVENT_SOURCE(DialogueMenu_OnDialogueSelect, 0x028A23E0)
DECLARE_EVENT_SOURCE(DialogueMenu_OnListVisibilityChange, 0x028A2470)
DECLARE_EVENT_SOURCE(DialogueMenu_OnPersuasionAutoWin, 0x028A2500)
DECLARE_EVENT_SOURCE(DialogueMenu_OnScriptedDialogueSelect, 0x028A2590)
DECLARE_EVENT_SOURCE(DialogueMenu_RequestExit, 0x028A2620)
DECLARE_EVENT_SOURCE(DialogueMenu_RequestSkipDialogue, 0x028A26B0)
DECLARE_EVENT_SOURCE(BSTValueRequestEvent<FaderMenuDisplayState>, 0x028A3478)
DECLARE_EVENT_SOURCE(FavoritesMenu_AssignQuickkey, 0x028AF4B0)
DECLARE_EVENT_SOURCE(FavoritesMenu_UseQuickkey, 0x028AF540)
DECLARE_EVENT_SOURCE(LoadingMenu_RefreshText, 0x028B33C0)
DECLARE_EVENT_SOURCE(MainMenu_ActionCanceled, 0x028B6A90)
DECLARE_EVENT_SOURCE(MainMenu_ActionConfirmed, 0x028B6B20)
DECLARE_EVENT_SOURCE(MainMenu_ConfirmLoad, 0x028B6BB0)
DECLARE_EVENT_SOURCE(MainMenu_DeleteSave, 0x028B6C40)
DECLARE_EVENT_SOURCE(MainMenu_SetCharacter, 0x028B6D6C)
DECLARE_EVENT_SOURCE(MainMenu_StartAction, 0x028B6DFC)
DECLARE_EVENT_SOURCE(MainMenu_StartLoad, 0x028B6E8C)
DECLARE_EVENT_SOURCE(MainMenu_UploadSave, 0x028B6F1C)
DECLARE_EVENT_SOURCE(BGSAppPausedEvent, 0x028B874C)
DECLARE_EVENT_SOURCE(MessageBoxMenu_OnBackOut, 0x028BDA38)
DECLARE_EVENT_SOURCE(MessageBoxMenu_OnButtonPress, 0x028BDAC8)
DECLARE_EVENT_SOURCE(MessageBoxMenu_OnScriptedButtonPress, 0x028BDB58)
DECLARE_EVENT_SOURCE(SleepWaitMenu_InterruptRest, 0x028C27E8)
DECLARE_EVENT_SOURCE(SleepWaitMenu_StartRest, 0x028C2878)
DECLARE_EVENT_SOURCE(Spaceship::BoughtEvent, 0x02B8CC1C)
DECLARE_EVENT_SOURCE(Spaceship::ContrabandScanWarningEvent, 0x02B8CCAC)
DECLARE_EVENT_SOURCE(Spaceship::DockEvent, 0x02B8CD3C)
DECLARE_EVENT_SOURCE(Spaceship::DynamicNavmeshCompleted, 0x02B8CDCC)
DECLARE_EVENT_SOURCE(Spaceship::FarTravelEvent, 0x02B8CE5C)
DECLARE_EVENT_SOURCE(Spaceship::LandingEvent, 0x02B8CEEC)
DECLARE_EVENT_SOURCE(Spaceship::PlanetScanEvent, 0x02B8CF7C)
DECLARE_EVENT_SOURCE(Spaceship::RampDownEvent, 0x02B8D00C)
DECLARE_EVENT_SOURCE(Spaceship::RefueledEvent, 0x02B8D09C)
DECLARE_EVENT_SOURCE(Spaceship::RegisteredEvent, 0x02B8D12C)
DECLARE_EVENT_SOURCE(Spaceship::ShieldEvent, 0x02B8D1BC)
DECLARE_EVENT_SOURCE(Spaceship::ShipAddedEvent, 0x02B8D24C)
DECLARE_EVENT_SOURCE(Spaceship::ShipCollisionEvent, 0x02B8D2DC)
DECLARE_EVENT_SOURCE(Spaceship::ShipCustomizedEvent, 0x02B8D36C)
DECLARE_EVENT_SOURCE(Spaceship::SoldEvent, 0x02B8D3FC)
DECLARE_EVENT_SOURCE(Spaceship::SystemDamagedEvent, 0x02B8D48C)
DECLARE_EVENT_SOURCE(Spaceship::SystemPowerAllocationEvent, 0x02B8D51C)
DECLARE_EVENT_SOURCE(Spaceship::SystemPowerChangeEvent, 0x02B8D5AC)
DECLARE_EVENT_SOURCE(Spaceship::SystemRepairedBIEvent, 0x02B8D63C)
DECLARE_EVENT_SOURCE(Spaceship::SystemRepairedEvent, 0x02B8D6CC)
DECLARE_EVENT_SOURCE(Spaceship::TakeDamagEvent, 0x02B8D75C)
DECLARE_EVENT_SOURCE(ContextStackChangedEvent, 0x02CB9D78)
DECLARE_EVENT_SOURCE(UpdateSceneRectEvent, 0x02E8F920)
DECLARE_EVENT_SOURCE(GameStalledEvent, 0x03054410)

// more

DECLARE_EVENT_SOURCE(TESCellNavmeshGeneratedEvent, 0x005C0740)
DECLARE_EVENT_SOURCE(TESHitEvent, 0x005C0FD0)
DECLARE_EVENT_SOURCE(FirstThirdPersonSwitch::Event, 0x005C19C0)
DECLARE_EVENT_SOURCE(PerkChanged::Event, 0x01307640)
DECLARE_EVENT_SOURCE(TESHarvestEvent::ItemHarvested, 0x014EEC80)
DECLARE_EVENT_SOURCE(ActivityEvents::ActivityCompletedEvent, 0x014F6F80)
DECLARE_EVENT_SOURCE(ChallengeCompletedEvent::Event, 0x014F92A0)
DECLARE_EVENT_SOURCE(InventoryItemEvent::Event, 0x01530880)
DECLARE_EVENT_SOURCE(BooksRead::Event, 0x01928D60)
DECLARE_EVENT_SOURCE(LocationExplored::Event, 0x01960700)
DECLARE_EVENT_SOURCE(LocationLinked::Event, 0x01960770)
DECLARE_EVENT_SOURCE(Activation::Event, 0x01A1BD60)
DECLARE_EVENT_SOURCE(ActorCellChangeEvent, 0x01A2D750)
DECLARE_EVENT_SOURCE(ActorHeadAttachedEvent, 0x01A2D7C0)
DECLARE_EVENT_SOURCE(ActorValueEvents::ActorValueChangedEvent, 0x01A2D830)
DECLARE_EVENT_SOURCE(AliasChangeEvent, 0x01A2D8A0)
DECLARE_EVENT_SOURCE(AnimationGraphDependentEvent, 0x01A2D910)
DECLARE_EVENT_SOURCE(BGSAffinityEventEvent, 0x01A2D980)
DECLARE_EVENT_SOURCE(BGSCellGridLoadEvent, 0x01A2D9F0)
DECLARE_EVENT_SOURCE(BGSEventProcessedEvent, 0x01A2DA60)
DECLARE_EVENT_SOURCE(BGSHavokWorldCreatedEvent, 0x01A2DAD0)
DECLARE_EVENT_SOURCE(BGSLocationLoadedEvent, 0x01A2DB40)
DECLARE_EVENT_SOURCE(BGSOnPlayerCompanionDismiss, 0x01A2DBB0)
DECLARE_EVENT_SOURCE(BGSOnPlayerCompleteResearchEvent, 0x01A2DC20)
DECLARE_EVENT_SOURCE(BGSOnPlayerCraftItemEvent, 0x01A2DC90)
DECLARE_EVENT_SOURCE(BGSOnPlayerCreateRobotEvent, 0x01A2DD00)
DECLARE_EVENT_SOURCE(BGSOnPlayerEnterVertibirdEvent, 0x01A2DD70)
DECLARE_EVENT_SOURCE(BGSOnPlayerFallLongDistances, 0x01A2DDE0)
DECLARE_EVENT_SOURCE(BGSOnPlayerFireWeaponEvent, 0x01A2DE50)
DECLARE_EVENT_SOURCE(BGSOnPlayerHealTeammateEvent, 0x01A2DEC0)
DECLARE_EVENT_SOURCE(BGSOnPlayerLoiteringBeginEvent, 0x01A2DF30)
DECLARE_EVENT_SOURCE(BGSOnPlayerLoiteringEndEvent, 0x01A2DFA0)
DECLARE_EVENT_SOURCE(BGSOnPlayerModArmorWeaponEvent, 0x01A2E010)
DECLARE_EVENT_SOURCE(BGSOnPlayerModRobotEvent, 0x01A2E080)
DECLARE_EVENT_SOURCE(BGSOnPlayerSwimmingEvent, 0x01A2E0F0)
DECLARE_EVENT_SOURCE(BGSOnPlayerUseWorkBenchEvent, 0x01A2E160)
DECLARE_EVENT_SOURCE(BGSOnSpeechChallengeAvailable, 0x01A2E1D0)
DECLARE_EVENT_SOURCE(BGSRadiationDamageEvent, 0x01A2E240)
DECLARE_EVENT_SOURCE(BuilderMenuSelectEvent, 0x01A2E2B0)
DECLARE_EVENT_SOURCE(CrewAssignedEvent, 0x01A2E320)
DECLARE_EVENT_SOURCE(CrewDismissedEvent, 0x01A2E390)
DECLARE_EVENT_SOURCE(DestroyedEvent, 0x01A2E400)
DECLARE_EVENT_SOURCE(HomeShipSetEvent, 0x01A2E470)
DECLARE_EVENT_SOURCE(InstantReferenceInteractionEvent, 0x01A2E4E0)
DECLARE_EVENT_SOURCE(ItemConsumedEvent, 0x01A2E550)
DECLARE_EVENT_SOURCE(ItemSwappedEvent, 0x01A2E5C0)
DECLARE_EVENT_SOURCE(LockPickedEvent, 0x01A2E630)
DECLARE_EVENT_SOURCE(MapMarkerDiscoveredEvent, 0x01A2E6A0)
DECLARE_EVENT_SOURCE(ObjectScannedEvent, 0x01A2E710)
DECLARE_EVENT_SOURCE(PlayerAddItemEvent, 0x01A2E780)
DECLARE_EVENT_SOURCE(PlayerArrestedEvent, 0x01A2E7F0)
DECLARE_EVENT_SOURCE(PlayerAssaultActorEvent, 0x01A2E860)
DECLARE_EVENT_SOURCE(PlayerBuyShipEvent, 0x01A2E8D0)
DECLARE_EVENT_SOURCE(PlayerCrimeGoldEvent, 0x01A2E940)
DECLARE_EVENT_SOURCE(PlayerFailedPlotRouteEvent, 0x01A2E9B0)
DECLARE_EVENT_SOURCE(PlayerJailEvent, 0x01A2EA20)
DECLARE_EVENT_SOURCE(PlayerModifiedShipEvent, 0x01A2EA90)
DECLARE_EVENT_SOURCE(PlayerMurderActorEvent, 0x01A2EB00)
DECLARE_EVENT_SOURCE(PlayerPayFineEvent, 0x01A2EB70)
DECLARE_EVENT_SOURCE(PlayerPlanetSurveyCompleteEvent, 0x01A2EBE0)
DECLARE_EVENT_SOURCE(PlayerPlanetSurveyProgressEvent, 0x01A2EC50)
DECLARE_EVENT_SOURCE(PlayerSellShipEvent, 0x01A2ECC0)
DECLARE_EVENT_SOURCE(PlayerTrespassEvent, 0x01A2ED30)
DECLARE_EVENT_SOURCE(QuickContainerOpenedEvent, 0x01A2EDA0)
DECLARE_EVENT_SOURCE(RefControlChangedEvent, 0x01A2EE10)
DECLARE_EVENT_SOURCE(ReferenceDestroyedEvent, 0x01A2EE80)
DECLARE_EVENT_SOURCE(SpeechChallengeCompletionEvent, 0x01A2EEF0)
DECLARE_EVENT_SOURCE(TESActivateEvent, 0x01A2EF60)
DECLARE_EVENT_SOURCE(TESActiveEffectApplyFinishEvent, 0x01A2EFD0)
DECLARE_EVENT_SOURCE(TESActiveEffectRemovedEvent, 0x01A2F040)
DECLARE_EVENT_SOURCE(TESActorActivatedRefEvent, 0x01A2F0B0)
DECLARE_EVENT_SOURCE(TESActorLocationChangeEvent, 0x01A2F120)
DECLARE_EVENT_SOURCE(TESBookReadEvent, 0x01A2F190)
DECLARE_EVENT_SOURCE(TESCellCriticalRefsAttachedEvent, 0x01A2F200)
DECLARE_EVENT_SOURCE(TESCellFullyLoadedEvent, 0x01A2F270)
DECLARE_EVENT_SOURCE(TESCellGravityChangeEvent, 0x01A2F2E0)
DECLARE_EVENT_SOURCE(TESCellReadyToApplyDecalsEvent, 0x01A2F350)
DECLARE_EVENT_SOURCE(TESCellReference3DAttachEvent, 0x01A2F3C0)
DECLARE_EVENT_SOURCE(TESCellReferenceAttachDetachEvent, 0x01A2F430)
DECLARE_EVENT_SOURCE(TESCombatEvent, 0x01A2F4A0)
DECLARE_EVENT_SOURCE(TESCombatListEvent, 0x01A2F510)
DECLARE_EVENT_SOURCE(TESCommandModeCompleteCommandEvent, 0x01A2F580)
DECLARE_EVENT_SOURCE(TESCommandModeEnterEvent, 0x01A2F5F0)
DECLARE_EVENT_SOURCE(TESCommandModeExitEvent, 0x01A2F660)
DECLARE_EVENT_SOURCE(TESCommandModeGiveCommandEvent, 0x01A2F6D0)
DECLARE_EVENT_SOURCE(TESConsciousnessEvent, 0x01A2F740)
DECLARE_EVENT_SOURCE(TESContainerChangedEvent, 0x01A2F7B0)
DECLARE_EVENT_SOURCE(TESDeathEvent, 0x01A2F820)
DECLARE_EVENT_SOURCE(TESDeferredKillEvent, 0x01A2F890)
DECLARE_EVENT_SOURCE(TESDestructionStageChangedEvent, 0x01A2F900)
DECLARE_EVENT_SOURCE(TESEnterBleedoutEvent, 0x01A2F970)
DECLARE_EVENT_SOURCE(TESEnterSneakingEvent, 0x01A2F9E0)
DECLARE_EVENT_SOURCE(TESEquipEvent, 0x01A2FA50)
DECLARE_EVENT_SOURCE(TESEscortWaitStartEvent, 0x01A2FAC0)
DECLARE_EVENT_SOURCE(TESEscortWaitStopEvent, 0x01A2FB30)
DECLARE_EVENT_SOURCE(TESExitBleedoutEvent, 0x01A2FBA0)
DECLARE_EVENT_SOURCE(TESExitFurnitureEvent, 0x01A2FC10)
DECLARE_EVENT_SOURCE(TESFormDeleteEvent, 0x01A2FC80)
DECLARE_EVENT_SOURCE(TESFormIDRemapEvent, 0x01A2FCF0)
DECLARE_EVENT_SOURCE(TESFurnitureEvent, 0x01A2FD60)
DECLARE_EVENT_SOURCE(TESGrabReleaseEvent, 0x01A2FDD0)
DECLARE_EVENT_SOURCE(TESInitScriptEvent, 0x01A2FE40)
DECLARE_EVENT_SOURCE(TESLimbCrippleEvent, 0x01A2FEB0)
DECLARE_EVENT_SOURCE(TESLoadGameEvent, 0x01A2FF20)
DECLARE_EVENT_SOURCE(TESLocationExploredEvent, 0x01A2FF90)
DECLARE_EVENT_SOURCE(TESLockChangedEvent, 0x01A30000)
DECLARE_EVENT_SOURCE(TESMagicEffectApplyEvent, 0x01A30070)
DECLARE_EVENT_SOURCE(TESMissionAcceptedEvent, 0x01A300E0)
DECLARE_EVENT_SOURCE(TESObjectLoadedEvent, 0x01A30150)
DECLARE_EVENT_SOURCE(TESObjectREFRTranslationEvent, 0x01A301C0)
DECLARE_EVENT_SOURCE(TESOnPCDialogueTargetEvent, 0x01A30230)
DECLARE_EVENT_SOURCE(TESOpenCloseEvent, 0x01A302A0)
DECLARE_EVENT_SOURCE(TESPackageEvent, 0x01A30310)
DECLARE_EVENT_SOURCE(TESPerkEntryRunEvent, 0x01A30380)
DECLARE_EVENT_SOURCE(TESPickNewIdleEvent, 0x01A303F0)
DECLARE_EVENT_SOURCE(TESPickpocketFailedEvent, 0x01A30460)
DECLARE_EVENT_SOURCE(TESPlayerActiveEffectEvent, 0x01A304D0)
DECLARE_EVENT_SOURCE(TESPlayerFollowerWarpEvent, 0x01A30540)
DECLARE_EVENT_SOURCE(TESQuestInitEvent, 0x01A305B0)
DECLARE_EVENT_SOURCE(TESQuestRejectedEvent, 0x01A30620)
DECLARE_EVENT_SOURCE(TESQuestStageEvent, 0x01A30690)
DECLARE_EVENT_SOURCE(TESQuestStageItemDoneEvent, 0x01A30700)
DECLARE_EVENT_SOURCE(TESQuestStartStopEvent, 0x01A30770)
DECLARE_EVENT_SOURCE(TESQuestTimerEvent, 0x01A307E0)
DECLARE_EVENT_SOURCE(TESResetEvent, 0x01A30850)
DECLARE_EVENT_SOURCE(TESResolveNPCTemplatesEvent, 0x01A308C0)
DECLARE_EVENT_SOURCE(TESSceneActionEvent, 0x01A30930)
DECLARE_EVENT_SOURCE(TESSceneEvent, 0x01A309A0)
DECLARE_EVENT_SOURCE(TESScenePhaseEvent, 0x01A30A10)
DECLARE_EVENT_SOURCE(TESSellEvent, 0x01A30A80)
DECLARE_EVENT_SOURCE(TESSleepStartEvent, 0x01A30AF0)
DECLARE_EVENT_SOURCE(TESSleepStopEvent, 0x01A30B60)
DECLARE_EVENT_SOURCE(TESSpellCastEvent, 0x01A30BD0)
DECLARE_EVENT_SOURCE(TESSpellCastFailureEvent, 0x01A30C40)
DECLARE_EVENT_SOURCE(TESSwitchRaceCompleteEvent, 0x01A30CB0)
DECLARE_EVENT_SOURCE(TESTopicInfoEvent, 0x01A30D20)
DECLARE_EVENT_SOURCE(TESTrackedStatsEvent, 0x01A30D90)
DECLARE_EVENT_SOURCE(TESTrapHitEvent, 0x01A30E00)
DECLARE_EVENT_SOURCE(TESTriggerEnterEvent, 0x01A30E70)
DECLARE_EVENT_SOURCE(TESTriggerEvent, 0x01A30EE0)
DECLARE_EVENT_SOURCE(TESTriggerLeaveEvent, 0x01A30F50)
DECLARE_EVENT_SOURCE(TESUniqueIDChangeEvent, 0x01A30FC0)
DECLARE_EVENT_SOURCE(TESWaitStartEvent, 0x01A31030)
DECLARE_EVENT_SOURCE(TESWaitStopEvent, 0x01A310A0)
DECLARE_EVENT_SOURCE(TerminalMenuMenuItemRunEvent, 0x01A31110)
DECLARE_EVENT_SOURCE(TerminalMenuOnEnterEvent, 0x01A31180)
DECLARE_EVENT_SOURCE(WorkshopNPCTransferEvent, 0x01A311F0)
DECLARE_EVENT_SOURCE(TESObjectREFRIsReadyForAttachEvent, 0x01A31260)
DECLARE_EVENT_SOURCE(DefaultObjectsReadyEvent::Event, 0x01A5C790)
DECLARE_EVENT_SOURCE(ObjectiveState::Event, 0x01B05D30)
DECLARE_EVENT_SOURCE(QuestStatus::Event, 0x01B65F40)
DECLARE_EVENT_SOURCE(RefillAliasEvent::Event, 0x01B65FB0)
DECLARE_EVENT_SOURCE(TESQuestEvent::Event, 0x01B66020)
DECLARE_EVENT_SOURCE(RolloverIsCrimeEvent::Event, 0x0204EAB0)
DECLARE_EVENT_SOURCE(HideSubtitleEvent::Event, 0x02059CD0)
DECLARE_EVENT_SOURCE(ShowSubtitleEvent::Event, 0x02059D40)
DECLARE_EVENT_SOURCE(MissionMenuStateEvent::Event, 0x020AC150)
DECLARE_EVENT_SOURCE(ClearShipHudTarget::Event, 0x021055F0)
DECLARE_EVENT_SOURCE(TryUpdateShipHudTarget::Event, 0x02105660)
DECLARE_EVENT_SOURCE(LocationTextEvent::Event, 0x0215F7C0)
DECLARE_EVENT_SOURCE(TraitDiscoveryTextEvent::Event, 0x0215F830)
DECLARE_EVENT_SOURCE(DaysPassed::Event, 0x023D8D20)
DECLARE_EVENT_SOURCE(HourPassed::Event, 0x023D8D90)
DECLARE_EVENT_SOURCE(ActorDamage::Event, 0x024B6120)
DECLARE_EVENT_SOURCE(ActorItemEquipped::Event, 0x024B6190)
DECLARE_EVENT_SOURCE(ActorKill::Event, 0x024B6200)
DECLARE_EVENT_SOURCE(AssaultCrime::Event, 0x024B6270)
DECLARE_EVENT_SOURCE(DisarmedEvent::Event, 0x024B62E0)
DECLARE_EVENT_SOURCE(FactionRankChange::Event, 0x024B6350)
DECLARE_EVENT_SOURCE(GrandTheftHorse::Event, 0x024B63C0)
DECLARE_EVENT_SOURCE(MurderCrime::Event, 0x024B6430)
DECLARE_EVENT_SOURCE(PiracyCrime::Event, 0x024B64A0)
DECLARE_EVENT_SOURCE(Bleedout::Event, 0x024E4700)
DECLARE_EVENT_SOURCE(ContractedDisease::Event, 0x024E4770)
DECLARE_EVENT_SOURCE(ReloadWeaponEvent::Event, 0x024E47E0)
DECLARE_EVENT_SOURCE(SpellsLearned::Event, 0x024F2E10)
DECLARE_EVENT_SOURCE(Bounty::Event, 0x02593B00)
DECLARE_EVENT_SOURCE(ChestLooted::Event, 0x02593B70)
DECLARE_EVENT_SOURCE(CriticalHitEvent::Event, 0x02593BE0)
DECLARE_EVENT_SOURCE(CustomMarkerUpdate::Event, 0x02593C50)
DECLARE_EVENT_SOURCE(DaysJailed::Event, 0x02593CC0)
DECLARE_EVENT_SOURCE(EnteredUnity::Event, 0x02593D30)
DECLARE_EVENT_SOURCE(FinePaid::Event, 0x02593DA0)
DECLARE_EVENT_SOURCE(ItemCrafted::Event, 0x02593E10)
DECLARE_EVENT_SOURCE(ItemSteal::Event, 0x02593E80)
DECLARE_EVENT_SOURCE(JailEscape::Event, 0x02593EF0)
DECLARE_EVENT_SOURCE(Jailing::Event, 0x02593F60)
DECLARE_EVENT_SOURCE(LevelIncrease::Event, 0x02593FD0)
DECLARE_EVENT_SOURCE(LocationMarkerArrayUpdate::Event, 0x02594040)
DECLARE_EVENT_SOURCE(PlayerActiveEffectChanged::Event, 0x025940B0)
DECLARE_EVENT_SOURCE(PlayerAmmoChanged::Event, 0x02594120)
DECLARE_EVENT_SOURCE(PlayerCharacterQuestEvent::Event, 0x02594190)
DECLARE_EVENT_SOURCE(PlayerDifficultySettingChanged::Event, 0x02594200)
DECLARE_EVENT_SOURCE(PlayerFastTravel::Event, 0x02594270)
DECLARE_EVENT_SOURCE(PlayerInDialogueChanged::Event, 0x025942E0)
DECLARE_EVENT_SOURCE(PlayerLifeStateChanged::Event, 0x02594350)
DECLARE_EVENT_SOURCE(PlayerPickpocketSuccess::Event, 0x025943C0)
DECLARE_EVENT_SOURCE(PoisonedWeapon::Event, 0x02594430)
DECLARE_EVENT_SOURCE(TerminalHacked::Event, 0x025944A0)
DECLARE_EVENT_SOURCE(TravelMarkerStateChange::Event, 0x02594510)
DECLARE_EVENT_SOURCE(WeaponAttack::Event, 0x02594580)
DECLARE_EVENT_SOURCE(Trespass::Event, 0x025F1F10)
DECLARE_EVENT_SOURCE(VATSEvents::ModeChange, 0x0265B410)
DECLARE_EVENT_SOURCE(VATSCommand, 0x0265B480)
DECLARE_EVENT_SOURCE(HoursPassed::Event, 0x028C2780)

// other events
DECLARE_EVENT_SOURCE(RadioManager::PipboyTransmitterDetectionEvent, 0x02362720)
DECLARE_EVENT_SOURCE_EX(XPChange::Event, 0x050D4BC0)
DECLARE_EVENT_SOURCE_EX(WeaponFiredEvent, 0x050C7D98)
DECLARE_EVENT_SOURCE_EX(ActorEquipManagerEvent::Event, 0x05A62CB0)
DECLARE_EVENT_SOURCE_EX(ActorEquipManagerEvent::SpellEvent, 0x05A62CD8)
DECLARE_EVENT_SOURCE_EX(AttachReference::Event, 0x050D4B98)