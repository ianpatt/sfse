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
        DEFINE_MEMBER_FN_1(RegisterSink, void, 0x0059985C, SinkBase* sink);
        DEFINE_MEMBER_FN_1(UnregisterSink, void, 0x00599670, SinkBase* sink);
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

DECLARE_EVENT_SOURCE(SnapTemplateUtils::SnapReplaceEvent, 0x007772BC)
DECLARE_EVENT_SOURCE(ImageFixtureEvent_RequestImage, 0x00778574)
DECLARE_EVENT_SOURCE(ImageFixtureEvent_UnregisterImage, 0x0077B470)
DECLARE_EVENT_SOURCE(Spaceship::TakeOffEvent, 0x0077E318)
DECLARE_EVENT_SOURCE(HUDActivityIncreaseEvent, 0x011BEBA0)
DECLARE_EVENT_SOURCE(AnimationDataCleanupEvent, 0x011DFEEC)
DECLARE_EVENT_SOURCE(AnimationDataSetupEvent, 0x011DFF7C)
DECLARE_EVENT_SOURCE(EndLoadGameEvent, 0x01235364)
DECLARE_EVENT_SOURCE(StartLoadGameEvent, 0x012353F4)
DECLARE_EVENT_SOURCE(ShipEditor_SystemSelected, 0x0124F32C)
DECLARE_EVENT_SOURCE(ShipEditor_PreviewUpgrade, 0x012559F0)
DECLARE_EVENT_SOURCE(ShipEditor_SelectedUpgrade, 0x01255A80)
DECLARE_EVENT_SOURCE(RuntimeComponentDBFactory::ReferenceAttach, 0x01298090)
DECLARE_EVENT_SOURCE(RuntimeComponentDBFactory::ReferenceDetach, 0x01298120)
DECLARE_EVENT_SOURCE(WeaponGroupAssignmentMenu_ChangeWeaponAssignment, 0x01321514)
DECLARE_EVENT_SOURCE(WeaponGroupAssignmentMenu_OnHintButtonActivated, 0x013215A4)
DECLARE_EVENT_SOURCE(ShipEditor_OnExitConfirmCancel, 0x01341CA4)
DECLARE_EVENT_SOURCE(ShipEditor_OnExitConfirmExit, 0x01341D34)
DECLARE_EVENT_SOURCE(ShipEditor_OnExitConfirmSaveAndExit, 0x01341DC4)
DECLARE_EVENT_SOURCE(ShipEditor_OnFlightCheckTabChanged, 0x01346914)
DECLARE_EVENT_SOURCE(ShipEditor_OnWeaponGroupChanged, 0x013469A4)
DECLARE_EVENT_SOURCE(ShipEditor_OnRenameEndEditText, 0x0134C2E0)
DECLARE_EVENT_SOURCE(ShipEditor_OnRenameInputCancelled, 0x0134C370)
DECLARE_EVENT_SOURCE(ShipEditor_ChangeModuleCategory, 0x01350A5C)
DECLARE_EVENT_SOURCE(ShipEditor_PreviewShipPart, 0x01350AEC)
DECLARE_EVENT_SOURCE(ShipEditor_SelectedShipPart, 0x01350B7C)
DECLARE_EVENT_SOURCE(ShipEditor_OnColorPickerControlChanged, 0x01359A80)
DECLARE_EVENT_SOURCE(ShipEditor_OnColorPickerTabChanged, 0x01359B10)
DECLARE_EVENT_SOURCE(ShipEditor_OnColorSliderMouseInput, 0x01359BA0)
DECLARE_EVENT_SOURCE(ShipEditor_OnRecentColorSwatchClicked, 0x01359C30)
DECLARE_EVENT_SOURCE(ShipBuilder_CloseAllMenus, 0x0137C658)
DECLARE_EVENT_SOURCE(ShipEditor_OnHintButtonActivated, 0x0137C6E8)
DECLARE_EVENT_SOURCE(ShipEditor_RemoveAll3D, 0x0137C778)
DECLARE_EVENT_SOURCE(ReferenceQueuedEvent, 0x013E5798)
DECLARE_EVENT_SOURCE(LoadScreenEndEvent, 0x013FF32C)
DECLARE_EVENT_SOURCE(LoadScreenStartEvent, 0x013FF3BC)
DECLARE_EVENT_SOURCE(CellAttachDetachEvent, 0x013FF44C)
DECLARE_EVENT_SOURCE(PickRefStateChangedEvent, 0x014715E8)
DECLARE_EVENT_SOURCE(ActivityTrackerActivityStartedEvent, 0x0147BB78)
DECLARE_EVENT_SOURCE(RuntimeComponentDBFactory::ReferenceCleared3d, 0x01508D90)
DECLARE_EVENT_SOURCE(RuntimeComponentDBFactory::ReferenceDestroy, 0x01508E20)
DECLARE_EVENT_SOURCE(RuntimeComponentDBFactory::ReferenceInit, 0x01508EB0)
DECLARE_EVENT_SOURCE(RuntimeComponentDBFactory::ReferenceRecycle, 0x01508F40)
DECLARE_EVENT_SOURCE(RuntimeComponentDBFactory::ReferenceSet3d, 0x01508FD0)
DECLARE_EVENT_SOURCE(RuntimeComponentDBFactory::Release3DRelatedData, 0x01509060)
DECLARE_EVENT_SOURCE(BSWorldOriginShiftEvent, 0x0151552C)
DECLARE_EVENT_SOURCE(BGSPlanet::PlayerKnowledgeFlagSetEvent, 0x0163EEBC)
DECLARE_EVENT_SOURCE(StarMap::PlanetTraitKnownEvent, 0x0163EF4C)
DECLARE_EVENT_SOURCE(ResetHistoryDataEvent, 0x01713508)
DECLARE_EVENT_SOURCE(TESQuestRewardEvent, 0x0172D908)
DECLARE_EVENT_SOURCE(HUDWeaponWorldFOVMultChangedEvent, 0x0172FA9C)
DECLARE_EVENT_SOURCE(BGSSceneActionPlayerDialogue::ActionEndEvent, 0x01821FB0)
DECLARE_EVENT_SOURCE(BGSSceneActionPlayerDialogue::ActionStartEvent, 0x01822040)
DECLARE_EVENT_SOURCE(AutoLoadDoorRolloverEvent, 0x018D2D5C)
DECLARE_EVENT_SOURCE(ClearQuickContainerEvent, 0x018D2DEC)
DECLARE_EVENT_SOURCE(ReferenceCellLoadedTemps, 0x0194BD0C)
DECLARE_EVENT_SOURCE(Workshop::CargoLinkAddedEvent, 0x01CDA57C)
DECLARE_EVENT_SOURCE(Workshop::CargoLinkTargetChangedEvent, 0x01CDA60C)
DECLARE_EVENT_SOURCE(Workshop::EnterOutpostBeaconModeEvent, 0x01CDA69C)
DECLARE_EVENT_SOURCE(Workshop::ItemGrabbedEvent, 0x01CDA72C)
DECLARE_EVENT_SOURCE(Workshop::ItemMovedEvent, 0x01CDA7BC)
DECLARE_EVENT_SOURCE(Workshop::ItemPlacedEvent, 0x01CDA84C)
DECLARE_EVENT_SOURCE(Workshop::ItemProducedEvent, 0x01CDA8DC)
DECLARE_EVENT_SOURCE(Workshop::ItemRemovedEvent, 0x01CDA96C)
DECLARE_EVENT_SOURCE(Workshop::ItemRepairedEvent, 0x01CDA9FC)
DECLARE_EVENT_SOURCE(Workshop::ItemScrappedEvent, 0x01CDAA8C)
DECLARE_EVENT_SOURCE(Workshop::OutpostNameChangedEvent, 0x01CDAB1C)
DECLARE_EVENT_SOURCE(Workshop::OutpostPlacedEvent, 0x01CDABAC)
DECLARE_EVENT_SOURCE(PickRefUpdateEvent, 0x01CDAC3C)
DECLARE_EVENT_SOURCE(Workshop::PlacementStatusEvent, 0x01CDACCC)
DECLARE_EVENT_SOURCE(Workshop::PowerOffEvent, 0x01CDAD5C)
DECLARE_EVENT_SOURCE(Workshop::PowerOnEvent, 0x01CDADEC)
DECLARE_EVENT_SOURCE(Workshop::SnapBehaviorCycledEvent, 0x01CDAE7C)
DECLARE_EVENT_SOURCE(Workshop::WorkshopFlyCameraEvent, 0x01CDAF0C)
DECLARE_EVENT_SOURCE(Workshop::WorkshopItemPlacedEvent, 0x01CDAF9C)
DECLARE_EVENT_SOURCE(Workshop::WorkshopModeEvent, 0x01CDB02C)
DECLARE_EVENT_SOURCE(Workshop::WorkshopOutputLinkEvent, 0x01CDB0BC)
DECLARE_EVENT_SOURCE(Workshop::WorkshopStatsChangedEvent, 0x01CDB14C)
DECLARE_EVENT_SOURCE(Workshop::WorkshopUpdateStatsEvent, 0x01CDB1DC)
DECLARE_EVENT_SOURCE(ShipCameraStateToggled, 0x01D2FAD4)
DECLARE_EVENT_SOURCE(PlayerControls::PlayerJumpPressEvent, 0x01F00754)
DECLARE_EVENT_SOURCE(PlayerControls::PlayerJumpReleaseEvent, 0x01F007E4)
DECLARE_EVENT_SOURCE(PlayerSneakingChangeEvent, 0x01F01F9C)
DECLARE_EVENT_SOURCE(PlayerControls::PlayerZeroGSprintJustPressedEvent, 0x01F021D8)
DECLARE_EVENT_SOURCE(PlayerControls::PlayerZeroGSprintReleasedEvent, 0x01F02268)
DECLARE_EVENT_SOURCE(PlayerControls::PlayerIronSightsEndEvent, 0x01F053EC)
DECLARE_EVENT_SOURCE(PlayerControls::PlayerIronSightsStartEvent, 0x01F0547C)
DECLARE_EVENT_SOURCE(SaveLoadEvent, 0x01F3475C)
DECLARE_EVENT_SOURCE(SpaceshipWeaponBinding::SpaceshipWeaponBindingChangedEvent, 0x01F62A88)
DECLARE_EVENT_SOURCE(BoundaryMenu_FastTravel, 0x01F79E88)
DECLARE_EVENT_SOURCE(BoundaryMenu_ShowMap, 0x01F79F18)
DECLARE_EVENT_SOURCE(PhotoGallery_DeletePhoto, 0x01F82C34)
DECLARE_EVENT_SOURCE(PowersMenu_ActivateEssence, 0x01F86110)
DECLARE_EVENT_SOURCE(PowersMenu_EquipPower, 0x01F861A0)
DECLARE_EVENT_SOURCE(PowersMenu_FavoritePower, 0x01F86230)
DECLARE_EVENT_SOURCE(ContainerMenuClosed::Event, 0x01F9978C)
DECLARE_EVENT_SOURCE(HangarShipSelection_ChangeSystemDisplay, 0x01F9981C)
DECLARE_EVENT_SOURCE(HangarShipSelection_RepairShip, 0x01F998AC)
DECLARE_EVENT_SOURCE(HangarShipSelection_UpgradeSystem, 0x01F9993C)
DECLARE_EVENT_SOURCE(ShipCrewMenu_Close, 0x01F999CC)
DECLARE_EVENT_SOURCE(BinkMovieStoppedPlayingEvent, 0x01F9EA30)
DECLARE_EVENT_SOURCE(WorkshopColorMode_ApplyColors, 0x01FCA5BC)
DECLARE_EVENT_SOURCE(WorkshopColorMode_SelectedTab, 0x01FCA64C)
DECLARE_EVENT_SOURCE(WorkshopColorMode_SliderChanged, 0x01FCA6DC)
DECLARE_EVENT_SOURCE(WorkshopColorMode_SwatchChanged, 0x01FCA76C)
DECLARE_EVENT_SOURCE(HUDCrewBuffMessageEvent, 0x01FCB90C)
DECLARE_EVENT_SOURCE(CraftingMenu_SessionSummaryEvent, 0x01FD49E8)
DECLARE_EVENT_SOURCE(CraftingMenu_CraftItem, 0x01FD4A78)
DECLARE_EVENT_SOURCE(CraftingMenu_ExitBench, 0x01FD4B08)
DECLARE_EVENT_SOURCE(CraftingMenu_InstallMod, 0x01FD4B98)
DECLARE_EVENT_SOURCE(CraftingMenu_RenameItem, 0x01FD4C28)
DECLARE_EVENT_SOURCE(CraftingMenu_RevertedModdedItem, 0x01FD4CB8)
DECLARE_EVENT_SOURCE(CraftingMenu_SelectedMod, 0x01FD4D48)
DECLARE_EVENT_SOURCE(CraftingMenu_SelectedModSlot, 0x01FD4DD8)
DECLARE_EVENT_SOURCE(CraftingMenu_SelectedModdableItem, 0x01FD4E68)
DECLARE_EVENT_SOURCE(CraftingMenu_SelectedRecipe, 0x01FD4EF8)
DECLARE_EVENT_SOURCE(CraftingMenu_SetInspectControls, 0x01FD4F88)
DECLARE_EVENT_SOURCE(CraftingMenu_ToggleTracking, 0x01FD5018)
DECLARE_EVENT_SOURCE(CraftingMenu_ViewingModdableItem, 0x01FD50A8)
DECLARE_EVENT_SOURCE(ContainerMenu_CloseMenu, 0x01FE33CC)
DECLARE_EVENT_SOURCE(InventoryMenu_Change3DView, 0x01FE34FC)
DECLARE_EVENT_SOURCE(InventoryMenu_PaperDollTryOn, 0x01FE358C)
DECLARE_EVENT_SOURCE(InventoryMenu_ResetPaperDollInv, 0x01FE361C)
DECLARE_EVENT_SOURCE(UpdateActivateListenerEvent, 0x01FEB638)
DECLARE_EVENT_SOURCE(StartOutpostFromListenerEvent, 0x01FED2F8)
DECLARE_EVENT_SOURCE(HUDModeEvent, 0x01FFD624)
DECLARE_EVENT_SOURCE(OpenContainerMenuEventData, 0x01FFD6B4)
DECLARE_EVENT_SOURCE(OpenContainerMenuFromListenerEvent, 0x01FFD744)
DECLARE_EVENT_SOURCE(HUDRolloverActivationButtonEvent, 0x01FFD7D4)
DECLARE_EVENT_SOURCE(HUDRolloverActivationQCItemPressEvent, 0x01FFD864)
DECLARE_EVENT_SOURCE(Inventory_SetSort, 0x01FFD8F4)
DECLARE_EVENT_SOURCE(ShowingQuestMarketTextEvent, 0x0200B788)
DECLARE_EVENT_SOURCE(TargetHitEvent, 0x0200DD88)
DECLARE_EVENT_SOURCE(BSTValueRequestEvent<PlayerCrosshairModeEvent>, 0x0200DE18)
DECLARE_EVENT_SOURCE(ClearHUDMessagesEvent, 0x02015274)
DECLARE_EVENT_SOURCE(ShowHUDMessageEvent, 0x02015304)
DECLARE_EVENT_SOURCE(PlayerDetectionLevelChangeEvent, 0x020184A4)
DECLARE_EVENT_SOURCE(ShowCustomWatchAlert, 0x0201D5C0)
DECLARE_EVENT_SOURCE(PlayerUpdateEvent, 0x0205A30C)
DECLARE_EVENT_SOURCE(InventoryMenu_ToggleHelmet, 0x0205A39C)
DECLARE_EVENT_SOURCE(InventoryMenu_ToggleSuit, 0x0205A42C)
DECLARE_EVENT_SOURCE(ControlsRemappedEvent, 0x0209FA58)
DECLARE_EVENT_SOURCE(SettingsPanel_CheckBoxChanged, 0x0209FAE8)
DECLARE_EVENT_SOURCE(SettingsPanel_ClearBinding, 0x0209FB78)
DECLARE_EVENT_SOURCE(SettingsPanel_OpenCategory, 0x0209FCAC)
DECLARE_EVENT_SOURCE(SettingsPanel_OpenSettings, 0x0209FD3C)
DECLARE_EVENT_SOURCE(SettingsPanel_RemapConfirmed, 0x0209FDCC)
DECLARE_EVENT_SOURCE(SettingsPanel_RemapMode, 0x0209FE5C)
DECLARE_EVENT_SOURCE(SettingsPanel_ResetToDefaults, 0x0209FEEC)
DECLARE_EVENT_SOURCE(SettingsPanel_SaveControls, 0x0209FF7C)
DECLARE_EVENT_SOURCE(SettingsPanel_SaveSettings, 0x020A000C)
DECLARE_EVENT_SOURCE(SettingsPanel_SliderChanged, 0x020A009C)
DECLARE_EVENT_SOURCE(SettingsPanel_StepperChanged, 0x020A012C)
DECLARE_EVENT_SOURCE(SettingsPanel_ValidateControls, 0x020A01BC)
DECLARE_EVENT_SOURCE(ShipCrewMenu_OpenAssignMenu, 0x020AA2A8)
DECLARE_EVENT_SOURCE(ShipCrewMenu_SetSort, 0x020AA338)
DECLARE_EVENT_SOURCE(Spaceship::PlayerMovementOutputEvent, 0x020CFAA8)
DECLARE_EVENT_SOURCE(ShowLongShipBootup, 0x020CFB38)
DECLARE_EVENT_SOURCE(ShipHudQuickContainer_TransferMenu, 0x020CFBC8)
DECLARE_EVENT_SOURCE(ShipHud_Activate, 0x020CFC58)
DECLARE_EVENT_SOURCE(ShipHud_BodyViewMarkerDimensions, 0x020CFCE8)
DECLARE_EVENT_SOURCE(ShipHud_ChangeComponentSelection, 0x020CFD78)
DECLARE_EVENT_SOURCE(ShipHud_CloseMenu, 0x020CFE08)
DECLARE_EVENT_SOURCE(ShipHud_Deselect, 0x020CFE98)
DECLARE_EVENT_SOURCE(ShipHud_FarTravel, 0x020CFF28)
DECLARE_EVENT_SOURCE(ShipHud_HailAccepted, 0x020CFFB8)
DECLARE_EVENT_SOURCE(ShipHud_HailCancelled, 0x020D0048)
DECLARE_EVENT_SOURCE(ShipHud_JumpToQuestMarker, 0x020D00D8)
DECLARE_EVENT_SOURCE(ShipHud_Land, 0x020D0168)
DECLARE_EVENT_SOURCE(ShipHud_LandingMarkerMap, 0x020D01F8)
DECLARE_EVENT_SOURCE(ShipHud_Map, 0x020D0288)
DECLARE_EVENT_SOURCE(ShipHud_OnMonocleToggle, 0x020D0318)
DECLARE_EVENT_SOURCE(ShipHud_OpenPhotoMode, 0x020D03A8)
DECLARE_EVENT_SOURCE(ShipHud_Repair, 0x020D0438)
DECLARE_EVENT_SOURCE(ShipHud_SetTargetMode, 0x020D04C8)
DECLARE_EVENT_SOURCE(ShipHud_Target, 0x020D0558)
DECLARE_EVENT_SOURCE(ShipHud_TargetShipSystem, 0x020D05E8)
DECLARE_EVENT_SOURCE(ShipHud_UntargetShipSystem, 0x020D0678)
DECLARE_EVENT_SOURCE(ShipHud_UpdateComponentPower, 0x020D0708)
DECLARE_EVENT_SOURCE(DialogueMenu_CompleteExit, 0x020FC1CC)
DECLARE_EVENT_SOURCE(BGSScannerGuideEffectStatusUpdateEvent, 0x0210BFA0)
DECLARE_EVENT_SOURCE(GlobalFunc_CloseAllMenus, 0x02110F08)
DECLARE_EVENT_SOURCE(GlobalFunc_CloseMenu, 0x02110F98)
DECLARE_EVENT_SOURCE(GlobalFunc_PlayMenuSound, 0x02111028)
DECLARE_EVENT_SOURCE(GlobalFunc_StartGameRender, 0x021110B8)
DECLARE_EVENT_SOURCE(GlobalFunc_UserEvent, 0x02111148)
DECLARE_EVENT_SOURCE(ExperienceMeterDisplayData, 0x0211AB08)
DECLARE_EVENT_SOURCE(LevelUp_AnimFinished, 0x0211AB98)
DECLARE_EVENT_SOURCE(LevelUp_OnWidgetShown, 0x0211AC28)
DECLARE_EVENT_SOURCE(LevelUp_OpenDataMenu, 0x0211ACB8)
DECLARE_EVENT_SOURCE(LevelUp_ShowSkills, 0x0211AD48)
DECLARE_EVENT_SOURCE(LocationTextWidget_FinishedQueue, 0x0211ADD8)
DECLARE_EVENT_SOURCE(DisplayFatigueWarningEvent, 0x0211B080)
DECLARE_EVENT_SOURCE(BSTValueRequestEvent<SaveLoadMessageStringEvent>, 0x0211EB4C)
DECLARE_EVENT_SOURCE(PlayerCrosshairModeEvent, 0x0200D480)
DECLARE_EVENT_SOURCE(HUDNotificationEvent, 0x02127DB8)
DECLARE_EVENT_SOURCE(HUDNotification_MissionActiveWidgetUpdate, 0x02127E48)
DECLARE_EVENT_SOURCE(HUDNotification_OpenDataMenu, 0x02127ED8)
DECLARE_EVENT_SOURCE(HUDNotification_OpenMissionMenu, 0x02127F68)
DECLARE_EVENT_SOURCE(HUDNotification_SetMissionActive, 0x02127FF8)
DECLARE_EVENT_SOURCE(PlayerSetWeaponStateEvent, 0x02129BD8)
DECLARE_EVENT_SOURCE(BarterMenu_BuyItem, 0x0213D298)
DECLARE_EVENT_SOURCE(BarterMenu_CloseMenu, 0x0213D328)
DECLARE_EVENT_SOURCE(BarterMenu_HideModel, 0x0213D3B8)
DECLARE_EVENT_SOURCE(BarterMenu_LoadModel, 0x0213D448)
DECLARE_EVENT_SOURCE(BarterMenu_SellItem, 0x0213D4D8)
DECLARE_EVENT_SOURCE(BarterMenu_SetMouseOverModel, 0x0213D568)
DECLARE_EVENT_SOURCE(BarterMenu_ShowFailureMessage, 0x0213D5F8)
DECLARE_EVENT_SOURCE(BarterMenu_ViewedItem, 0x0213D688)
DECLARE_EVENT_SOURCE(MissionMenu_ClearState, 0x02141C90)
DECLARE_EVENT_SOURCE(MissionMenu_PlotToLocation, 0x02141D20)
DECLARE_EVENT_SOURCE(MissionMenu_RejectQuest, 0x02141DB0)
DECLARE_EVENT_SOURCE(MissionMenu_SaveCategoryIndex, 0x02141E40)
DECLARE_EVENT_SOURCE(MissionMenu_SaveOpenedId, 0x02141ED0)
DECLARE_EVENT_SOURCE(MissionMenu_ShowItemLocation, 0x02141F60)
DECLARE_EVENT_SOURCE(MissionMenu_ToggleTrackingQuest, 0x0214208C)
DECLARE_EVENT_SOURCE(DataSlateButtons_acceptClicked, 0x021477C8)
DECLARE_EVENT_SOURCE(DataSlateButtons_cancelClicked, 0x02147858)
DECLARE_EVENT_SOURCE(DataSlateMenu_playSFX, 0x021478E8)
DECLARE_EVENT_SOURCE(DataSlateMenu_toggleAudio, 0x02147978)
DECLARE_EVENT_SOURCE(InventoryMenu_DropItem, 0x0214E124)
DECLARE_EVENT_SOURCE(InventoryMenu_HideModel, 0x0214E1B4)
DECLARE_EVENT_SOURCE(InventoryMenu_LoadModel, 0x0214E244)
DECLARE_EVENT_SOURCE(InventoryMenu_OnEnterCategory, 0x0214E2D4)
DECLARE_EVENT_SOURCE(InventoryMenu_OpenCargoHold, 0x0214E364)
DECLARE_EVENT_SOURCE(InventoryMenu_SelectItem, 0x0214E3F4)
DECLARE_EVENT_SOURCE(InventoryMenu_SetMouseOverModel, 0x0214E484)
DECLARE_EVENT_SOURCE(InventoryMenu_ToggleFavorite, 0x0214E5BC)
DECLARE_EVENT_SOURCE(MissionBoard_MissionEntryChanged, 0x0215AA78)
DECLARE_EVENT_SOURCE(MissionBoard_MissionEntryPressed, 0x0215AB08)
DECLARE_EVENT_SOURCE(MonocleMenu_Bioscan, 0x02162874)
DECLARE_EVENT_SOURCE(MonocleMenu_FastTravel, 0x02162904)
DECLARE_EVENT_SOURCE(MonocleMenu_Harvest, 0x02162994)
DECLARE_EVENT_SOURCE(MonocleMenu_Initialize, 0x02162A24)
DECLARE_EVENT_SOURCE(MonocleMenu_Outpost, 0x02162B5C)
DECLARE_EVENT_SOURCE(MonocleMenu_PhotoMode, 0x02162BEC)
DECLARE_EVENT_SOURCE(MonocleMenu_Shutdown, 0x02162C7C)
DECLARE_EVENT_SOURCE(MonocleMenu_SocialSpell, 0x02162D0C)
DECLARE_EVENT_SOURCE(MonocleMenu_StartContainerView, 0x02162D9C)
DECLARE_EVENT_SOURCE(MonocleMenu_StopContainerView, 0x02162E2C)
DECLARE_EVENT_SOURCE(MonocleMenu_SurfaceMap, 0x02162EBC)
DECLARE_EVENT_SOURCE(MonocleMenu_UseListScrollControls, 0x02162F4C)
DECLARE_EVENT_SOURCE(MonocleMenu_ZoomIn, 0x02162FDC)
DECLARE_EVENT_SOURCE(MonocleMenu_ZoomOut, 0x0216306C)
DECLARE_EVENT_SOURCE(PhotoMode_InitializeCategory, 0x0216898C)
DECLARE_EVENT_SOURCE(PhotoMode_ResetToDefaults, 0x02168ABC)
DECLARE_EVENT_SOURCE(PhotoMode_SliderChanged, 0x02168B4C)
DECLARE_EVENT_SOURCE(PhotoMode_StepperChanged, 0x02168BDC)
DECLARE_EVENT_SOURCE(PhotoMode_TakeSnapshot, 0x02168C6C)
DECLARE_EVENT_SOURCE(PhotoMode_ToggleHelmet, 0x02168CFC)
DECLARE_EVENT_SOURCE(PhotoMode_ToggleUI, 0x02168D8C)
DECLARE_EVENT_SOURCE(PickpocketMenu_OnItemSelect, 0x02171564)
DECLARE_EVENT_SOURCE(ResearchMenu_AddMaterial, 0x021769D8)
DECLARE_EVENT_SOURCE(ResearchMenu_CategorySelected, 0x02176A68)
DECLARE_EVENT_SOURCE(ResearchMenu_ExitMenu, 0x02176AF8)
DECLARE_EVENT_SOURCE(ResearchMenu_HideModel, 0x02176B88)
DECLARE_EVENT_SOURCE(ResearchMenu_PreviewProject, 0x02176C18)
DECLARE_EVENT_SOURCE(ResearchMenu_ProjectViewed, 0x02176CA8)
DECLARE_EVENT_SOURCE(ResearchMenu_SetInspectControls, 0x02176D38)
DECLARE_EVENT_SOURCE(ResearchMenu_ToggleTrackingProject, 0x02176DC8)
DECLARE_EVENT_SOURCE(UnlockedTerminalElementEvent, 0x02188BA8)
DECLARE_EVENT_SOURCE(SecurityMenu_BackOutKey, 0x02188C38)
DECLARE_EVENT_SOURCE(SecurityMenu_CloseMenu, 0x02188CC8)
DECLARE_EVENT_SOURCE(SecurityMenu_ConfirmExit, 0x02188D58)
DECLARE_EVENT_SOURCE(SecurityMenu_EliminateUnusedKeys, 0x02188DE8)
DECLARE_EVENT_SOURCE(SecurityMenu_GetRingHint, 0x02188E78)
DECLARE_EVENT_SOURCE(SecurityMenu_SelectNewKey, 0x02188F08)
DECLARE_EVENT_SOURCE(SecurityMenu_TryUseKey, 0x02188F98)
DECLARE_EVENT_SOURCE(ShipCrewAssignMenu_Assign, 0x0218CF54)
DECLARE_EVENT_SOURCE(ShipCrewAssignMenu_Unassign, 0x0218CFE4)
DECLARE_EVENT_SOURCE(ShipCrewMenu_ViewedItem, 0x0218D074)
DECLARE_EVENT_SOURCE(Refuel_Accept, 0x0218EF14)
DECLARE_EVENT_SOURCE(Refuel_Cancel, 0x0218EFA4)
DECLARE_EVENT_SOURCE(SkillsMenu_Accept, 0x02195A2C)
DECLARE_EVENT_SOURCE(SkillsMenu_AddPatch, 0x02195ABC)
DECLARE_EVENT_SOURCE(SkillsMenu_Cancel, 0x02195B4C)
DECLARE_EVENT_SOURCE(SkillsMenu_ChangeCursorVisibility, 0x02195BDC)
DECLARE_EVENT_SOURCE(SkillsMenu_SaveLastCategory, 0x02195C6C)
DECLARE_EVENT_SOURCE(BSChargenAPI::BIDataUtils::MenuClosedEvent, 0x021BA428)
DECLARE_EVENT_SOURCE(BSChargenAPI::BIDataUtils::PresetNPCChangedEvent, 0x021BA4B8)
DECLARE_EVENT_SOURCE(CharGen_BrowChange, 0x021BA548)
DECLARE_EVENT_SOURCE(CharGen_BrowColorChange, 0x021BA5D8)
DECLARE_EVENT_SOURCE(CharGen_CancelTextEntry, 0x021BA668)
DECLARE_EVENT_SOURCE(CharGen_CloseMenu, 0x021BA6F8)
DECLARE_EVENT_SOURCE(CharGen_CyclePronoun, 0x021BA788)
DECLARE_EVENT_SOURCE(CharGen_DirtScarsEtcChange, 0x021BA818)
DECLARE_EVENT_SOURCE(CharGen_EndBodyChange, 0x021BA8A8)
DECLARE_EVENT_SOURCE(CharGen_EndTextEntry, 0x021BA938)
DECLARE_EVENT_SOURCE(CharGen_EyeColorChange, 0x021BA9C8)
DECLARE_EVENT_SOURCE(CharGen_FacialHairChange, 0x021BAA58)
DECLARE_EVENT_SOURCE(CharGen_FacialHairColorChange, 0x021BAAE8)
DECLARE_EVENT_SOURCE(CharGen_HairChange, 0x021BAB78)
DECLARE_EVENT_SOURCE(CharGen_HairColorChange, 0x021BAC08)
DECLARE_EVENT_SOURCE(CharGen_HeadpartPlusSelectorChange, 0x021BAC98)
DECLARE_EVENT_SOURCE(CharGen_HeadpartPresetChange, 0x021BAD28)
DECLARE_EVENT_SOURCE(CharGen_JewelryChange, 0x021BADB8)
DECLARE_EVENT_SOURCE(CharGen_JewelryColorChange, 0x021BAE48)
DECLARE_EVENT_SOURCE(CharGen_MakeupChange, 0x021BAED8)
DECLARE_EVENT_SOURCE(CharGen_MarkingsChange, 0x021BAF68)
DECLARE_EVENT_SOURCE(CharGen_PostBlendColorOptionChange, 0x021BAFF8)
DECLARE_EVENT_SOURCE(CharGen_PostBlendFaceChange, 0x021BB088)
DECLARE_EVENT_SOURCE(CharGen_PostBlendIntensityChange, 0x021BB118)
DECLARE_EVENT_SOURCE(CharGen_PresetChange, 0x021BB1A8)
DECLARE_EVENT_SOURCE(CharGen_RollOffLocomotion, 0x021BB238)
DECLARE_EVENT_SOURCE(CharGen_RollOnLocomotion, 0x021BB2C8)
DECLARE_EVENT_SOURCE(CharGen_RotatePaperdoll, 0x021BB358)
DECLARE_EVENT_SOURCE(CharGen_SetAdditionalSlider, 0x021BB3E8)
DECLARE_EVENT_SOURCE(CharGen_SetBackground, 0x021BB478)
DECLARE_EVENT_SOURCE(CharGen_SetBlockInputUnderPopup, 0x021BB508)
DECLARE_EVENT_SOURCE(CharGen_SetBodyValues, 0x021BB598)
DECLARE_EVENT_SOURCE(CharGen_SetCameraPosition, 0x021BB628)
DECLARE_EVENT_SOURCE(CharGen_SetPronoun, 0x021BB6B8)
DECLARE_EVENT_SOURCE(CharGen_SetSex, 0x021BB748)
DECLARE_EVENT_SOURCE(CharGen_SetSlider, 0x021BB7D8)
DECLARE_EVENT_SOURCE(CharGen_SetTrait, 0x021BB868)
DECLARE_EVENT_SOURCE(CharGen_ShowChooseBackgroundMessage, 0x021BB8F8)
DECLARE_EVENT_SOURCE(CharGen_ShowPlayerRenameMessage, 0x021BB988)
DECLARE_EVENT_SOURCE(CharGen_SkintoneChange, 0x021BBA18)
DECLARE_EVENT_SOURCE(CharGen_StartBodyChange, 0x021BBAA8)
DECLARE_EVENT_SOURCE(CharGen_StartTextEntry, 0x021BBB38)
DECLARE_EVENT_SOURCE(CharGen_SwitchBodyType, 0x021BBBC8)
DECLARE_EVENT_SOURCE(CharGen_SwitchLocomotion, 0x021BBC58)
DECLARE_EVENT_SOURCE(CharGen_TeethChange, 0x021BBCE8)
DECLARE_EVENT_SOURCE(CharGen_TeethRollOff, 0x021BBD78)
DECLARE_EVENT_SOURCE(CharGen_TeethRollOn, 0x021BBE08)
DECLARE_EVENT_SOURCE(CharGen_ToggleMarking, 0x021BBE98)
DECLARE_EVENT_SOURCE(CharGen_TogglePreviewHabSuit, 0x021BBF28)
DECLARE_EVENT_SOURCE(UIMenuChargenMenuDisablePaperdoll, 0x021BBFB8)
DECLARE_EVENT_SOURCE(DataMenu_CloseMenu, 0x021C3098)
DECLARE_EVENT_SOURCE(DataMenu_ClosedForSubMenu, 0x021C3128)
DECLARE_EVENT_SOURCE(DataMenu_Missions, 0x021C31B8)
DECLARE_EVENT_SOURCE(DataMenu_PlotToLocation, 0x021C32EC)
DECLARE_EVENT_SOURCE(DataMenu_Reopened, 0x021C337C)
DECLARE_EVENT_SOURCE(DataMenu_SelectedAttributesMenu, 0x021C340C)
DECLARE_EVENT_SOURCE(DataMenu_SelectedInventoryMenu, 0x021C349C)
DECLARE_EVENT_SOURCE(DataMenu_SelectedMapMenu, 0x021C352C)
DECLARE_EVENT_SOURCE(DataMenu_SelectedPowersMenu, 0x021C35BC)
DECLARE_EVENT_SOURCE(DataMenu_SelectedShipMenu, 0x021C364C)
DECLARE_EVENT_SOURCE(DataMenu_SelectedStatusMenu, 0x021C36DC)
DECLARE_EVENT_SOURCE(DataMenu_SetMenuForQuickEntry, 0x021C376C)
DECLARE_EVENT_SOURCE(DataMenu_SetPaperDollActive, 0x021C37FC)
DECLARE_EVENT_SOURCE(PauseMenu_ActionCanceled, 0x021CDA44)
DECLARE_EVENT_SOURCE(PauseMenu_ConfirmAction, 0x021CDAD4)
DECLARE_EVENT_SOURCE(PauseMenu_ConfirmLoad, 0x021CDB64)
DECLARE_EVENT_SOURCE(PauseMenu_ConfirmSave, 0x021CDBF4)
DECLARE_EVENT_SOURCE(PauseMenu_DeleteSave, 0x021CDC84)
DECLARE_EVENT_SOURCE(PauseMenu_QuitToDesktop, 0x021CDD14)
DECLARE_EVENT_SOURCE(PauseMenu_SetCharacter, 0x021CDDA4)
DECLARE_EVENT_SOURCE(PauseMenu_StartAction, 0x021CDE34)
DECLARE_EVENT_SOURCE(PauseMenu_StartLoad, 0x021CDEC4)
DECLARE_EVENT_SOURCE(PauseMenu_UploadSave, 0x021CDF54)
DECLARE_EVENT_SOURCE(PlayBink_CloseMenu, 0x021CEEF0)
DECLARE_EVENT_SOURCE(Spaceship::GravJumpEvent, 0x021D4B24)
DECLARE_EVENT_SOURCE(Spaceship::LandedSetEvent, 0x021D4BB4)
DECLARE_EVENT_SOURCE(Reticle_OnLongAnimFinished, 0x021D4C44)
DECLARE_EVENT_SOURCE(ShipHudQuickContainer_TransferItem, 0x021D4CD4)
DECLARE_EVENT_SOURCE(ShipHud_AbortJump, 0x021D4D64)
DECLARE_EVENT_SOURCE(ShipHud_DockRequested, 0x021D4DF4)
DECLARE_EVENT_SOURCE(ShipHud_HailShip, 0x021D4E84)
DECLARE_EVENT_SOURCE(ShipHud_UpdateTargetPanelRect, 0x021D4F14)
DECLARE_EVENT_SOURCE(TakeoffMenu_CloseMenu, 0x021D4FA4)
DECLARE_EVENT_SOURCE(TakeoffMenu_ExitShip, 0x021D5034)
DECLARE_EVENT_SOURCE(TakeoffMenu_Launch, 0x021D50C4)
DECLARE_EVENT_SOURCE(StarMapMenu_LandingInputInProgress, 0x021F4940)
DECLARE_EVENT_SOURCE(StarMapMenu_MarkerGroupContainerVisibilityChanged, 0x021F49D0)
DECLARE_EVENT_SOURCE(StarMapMenu_MarkerGroupEntryClicked, 0x021F4A60)
DECLARE_EVENT_SOURCE(StarMapMenu_MarkerGroupEntryHoverChanged, 0x021F4AF0)
DECLARE_EVENT_SOURCE(StarMapMenu_ScanPlanet, 0x021F4B80)
DECLARE_EVENT_SOURCE(StarMapMenu_SelectedLandingSite, 0x021F4C10)
DECLARE_EVENT_SOURCE(StarMapMenu_SelectedLandingSiteFailed, 0x021F4CA0)
DECLARE_EVENT_SOURCE(StarMapMenu_ShowRealCursor, 0x021F4D30)
DECLARE_EVENT_SOURCE(StarMapMenu_QuickSelectChange, 0x0220A20C)
DECLARE_EVENT_SOURCE(StarMapMenu_Galaxy_FocusSystem, 0x0221BE40)
DECLARE_EVENT_SOURCE(StarMapMenu_OnGalaxyViewInitialized, 0x0221BED0)
DECLARE_EVENT_SOURCE(StarMapMenu_ExecuteRoute, 0x022269D8)
DECLARE_EVENT_SOURCE(StarMapMenu_OnCancel, 0x02226A68)
DECLARE_EVENT_SOURCE(StarMapMenu_OnClearRoute, 0x02226AF8)
DECLARE_EVENT_SOURCE(StarMapMenu_OnExitStarMap, 0x02226B88)
DECLARE_EVENT_SOURCE(StarMapMenu_OnHintButtonClicked, 0x02226C18)
DECLARE_EVENT_SOURCE(StarMapMenu_OnOutpostEntrySelected, 0x02226CA8)
DECLARE_EVENT_SOURCE(StarMapMenu_ReadyToClose, 0x02226D38)
DECLARE_EVENT_SOURCE(SurfaceMapMenu_MarkerClicked, 0x0224481C)
DECLARE_EVENT_SOURCE(SurfaceMapMenu_TryPlaceCustomMarker, 0x022448AC)
DECLARE_EVENT_SOURCE(TerminalMenu_CancelEvent, 0x0225ED00)
DECLARE_EVENT_SOURCE(Terminal_CloseAllViews, 0x0225ED90)
DECLARE_EVENT_SOURCE(Terminal_CloseTopView, 0x0225EE20)
DECLARE_EVENT_SOURCE(Terminal_CloseView, 0x0225EEB0)
DECLARE_EVENT_SOURCE(Terminal_MenuItemClick, 0x0225EF40)
DECLARE_EVENT_SOURCE(TestMenu_DoAction, 0x0226AD98)
DECLARE_EVENT_SOURCE(TestMenu_ExitMenu, 0x0226AE28)
DECLARE_EVENT_SOURCE(TestMenu_ShowImages, 0x0226AEB8)
DECLARE_EVENT_SOURCE(TestMenu_ShowResources, 0x0226AF48)
DECLARE_EVENT_SOURCE(TestMenu_TestAll, 0x0226AFD8)
DECLARE_EVENT_SOURCE(TextInputMenu_EndEditText, 0x0226EF74)
DECLARE_EVENT_SOURCE(TextInputMenu_InputCanceled, 0x0226F004)
DECLARE_EVENT_SOURCE(TextInputMenu_StartEditText, 0x0226F094)
DECLARE_EVENT_SOURCE(CraftingMenu_Highlight3D, 0x02270364)
DECLARE_EVENT_SOURCE(CraftingMenu_RevertHighlight, 0x022703F4)
DECLARE_EVENT_SOURCE(WorkshopBuilderMenu_ChangeBuildItem, 0x02272A58)
DECLARE_EVENT_SOURCE(WorkshopBuilderMenu_SelectedItem, 0x02272AE8)
DECLARE_EVENT_SOURCE(WorkshopBuilderMenu_ToggleTracking, 0x02272B78)
DECLARE_EVENT_SOURCE(WorkshopMenu_AttemptBuild, 0x0227B3D4)
DECLARE_EVENT_SOURCE(WorkshopMenu_CancelAction, 0x0227B464)
DECLARE_EVENT_SOURCE(WorkshopMenu_ChangeVariant, 0x0227B4F4)
DECLARE_EVENT_SOURCE(WorkshopMenu_ConnectionEvent, 0x0227B584)
DECLARE_EVENT_SOURCE(WorkshopMenu_ExitMenu, 0x0227B614)
DECLARE_EVENT_SOURCE(WorkshopMenu_MessageCallback, 0x0227B6A4)
DECLARE_EVENT_SOURCE(WorkshopMenu_SelectedCategory, 0x0227B734)
DECLARE_EVENT_SOURCE(WorkshopMenu_SelectedGridObject, 0x0227B7C4)
DECLARE_EVENT_SOURCE(WorkshopMenu_ShowExtras, 0x0227B854)
DECLARE_EVENT_SOURCE(WorkshopMenu_SwitchMode, 0x0227B8E4)
DECLARE_EVENT_SOURCE(WorkshopMenu_ToggleDistance, 0x0227B974)
DECLARE_EVENT_SOURCE(WorkshopMenu_ToggleTracking, 0x0227BA04)
DECLARE_EVENT_SOURCE(WorkshopMenu_ToggleView, 0x0227BA94)
DECLARE_EVENT_SOURCE(WorkshopQuickMenu_ConfirmAction, 0x0227D4E4)
DECLARE_EVENT_SOURCE(WorkshopQuickMenu_ExitMenu, 0x0227D574)
DECLARE_EVENT_SOURCE(WorkshopTargetMenu_TargetHovered, 0x02283AAC)
DECLARE_EVENT_SOURCE(WorkshopTargetMenu_TargetPicked, 0x02283B3C)
DECLARE_EVENT_SOURCE(WorkshopActionButton_HoldFinished, 0x0229AC34)
DECLARE_EVENT_SOURCE(WorkshopActionButton_HoldStopped, 0x0229ACC4)
DECLARE_EVENT_SOURCE(WorkshopShared_SetActionHandles, 0x0229AD54)
DECLARE_EVENT_SOURCE(WorkshopShared_StartAction, 0x0229ADE4)
DECLARE_EVENT_SOURCE(ModelReferenceEffectEvents::ReferenceEffectFinished, 0x022BADCC)
DECLARE_EVENT_SOURCE(BGSAcousticSpaceListener::StackChangedEvent, 0x022CF104)
DECLARE_EVENT_SOURCE(SpaceshipBIEvents::ShipPowerAllocationBIEventSent, 0x022E6F70)
DECLARE_EVENT_SOURCE(BGSActorDeathEvent, 0x022F386C)
DECLARE_EVENT_SOURCE(Research::ResearchProgressEvent, 0x023449CC)
DECLARE_EVENT_SOURCE(BSTValueRequestEvent<PlayerAutoAimActorEvent>, 0x0256DCE8)
DECLARE_EVENT_SOURCE(PlayerInCombatChangeEvent, 0x02586490)
DECLARE_EVENT_SOURCE(BlurEvent, 0x028570E0)
DECLARE_EVENT_SOURCE(ContainerMenu_HideModel, 0x02879350)
DECLARE_EVENT_SOURCE(ContainerMenu_Jettison, 0x028793E0)
DECLARE_EVENT_SOURCE(ContainerMenu_LoadModel, 0x02879470)
DECLARE_EVENT_SOURCE(ContainerMenu_OpenRefuelMenu, 0x02879500)
DECLARE_EVENT_SOURCE(ContainerMenu_SetMouseOverModel, 0x02879590)
DECLARE_EVENT_SOURCE(ContainerMenu_TakeAll, 0x02879620)
DECLARE_EVENT_SOURCE(ContainerMenu_ToggleEquip, 0x028796B0)
DECLARE_EVENT_SOURCE(ContainerMenu_TransferItem, 0x028797DC)
DECLARE_EVENT_SOURCE(DialogueMenu_OnDialogueSelect, 0x0287D2E0)
DECLARE_EVENT_SOURCE(DialogueMenu_OnListVisibilityChange, 0x0287D370)
DECLARE_EVENT_SOURCE(DialogueMenu_OnPersuasionAutoWin, 0x0287D400)
DECLARE_EVENT_SOURCE(DialogueMenu_OnScriptedDialogueSelect, 0x0287D490)
DECLARE_EVENT_SOURCE(DialogueMenu_RequestExit, 0x0287D520)
DECLARE_EVENT_SOURCE(DialogueMenu_RequestSkipDialogue, 0x0287D5B0)
DECLARE_EVENT_SOURCE(BSTValueRequestEvent<FaderMenuDisplayState>, 0x0287E470)
DECLARE_EVENT_SOURCE(FavoritesMenu_AssignQuickkey, 0x0288AD50)
DECLARE_EVENT_SOURCE(FavoritesMenu_UseQuickkey, 0x0288ADE0)
DECLARE_EVENT_SOURCE(LoadingMenu_RefreshText, 0x0288EC50)
DECLARE_EVENT_SOURCE(MainMenu_ActionCanceled, 0x02892360)
DECLARE_EVENT_SOURCE(MainMenu_ActionConfirmed, 0x028923F0)
DECLARE_EVENT_SOURCE(MainMenu_ConfirmLoad, 0x02892480)
DECLARE_EVENT_SOURCE(MainMenu_DeleteSave, 0x02892510)
DECLARE_EVENT_SOURCE(MainMenu_SetCharacter, 0x0289263C)
DECLARE_EVENT_SOURCE(MainMenu_StartAction, 0x028926CC)
DECLARE_EVENT_SOURCE(MainMenu_StartLoad, 0x0289275C)
DECLARE_EVENT_SOURCE(MainMenu_UploadSave, 0x028927EC)
DECLARE_EVENT_SOURCE(BGSAppPausedEvent, 0x0289408C)
DECLARE_EVENT_SOURCE(MessageBoxMenu_OnBackOut, 0x02899348)
DECLARE_EVENT_SOURCE(MessageBoxMenu_OnButtonPress, 0x028993D8)
DECLARE_EVENT_SOURCE(MessageBoxMenu_OnScriptedButtonPress, 0x02899468)
DECLARE_EVENT_SOURCE(SleepWaitMenu_InterruptRest, 0x0289E118)
DECLARE_EVENT_SOURCE(SleepWaitMenu_StartRest, 0x0289E1A8)
DECLARE_EVENT_SOURCE(Spaceship::BoughtEvent, 0x02B6F138)
DECLARE_EVENT_SOURCE(Spaceship::ContrabandScanWarningEvent, 0x02B6F1C8)
DECLARE_EVENT_SOURCE(Spaceship::DockEvent, 0x02B6F258)
DECLARE_EVENT_SOURCE(Spaceship::DynamicNavmeshCompleted, 0x02B6F2E8)
DECLARE_EVENT_SOURCE(Spaceship::FarTravelEvent, 0x02B6F378)
DECLARE_EVENT_SOURCE(Spaceship::LandingEvent, 0x02B6F408)
DECLARE_EVENT_SOURCE(Spaceship::PlanetScanEvent, 0x02B6F498)
DECLARE_EVENT_SOURCE(Spaceship::RampDownEvent, 0x02B6F528)
DECLARE_EVENT_SOURCE(Spaceship::RefueledEvent, 0x02B6F5B8)
DECLARE_EVENT_SOURCE(Spaceship::RegisteredEvent, 0x02B6F648)
DECLARE_EVENT_SOURCE(Spaceship::ShieldEvent, 0x02B6F6D8)
DECLARE_EVENT_SOURCE(Spaceship::ShipAddedEvent, 0x02B6F768)
DECLARE_EVENT_SOURCE(Spaceship::ShipCollisionEvent, 0x02B6F7F8)
DECLARE_EVENT_SOURCE(Spaceship::ShipCustomizedEvent, 0x02B6F888)
DECLARE_EVENT_SOURCE(Spaceship::SoldEvent, 0x02B6F918)
DECLARE_EVENT_SOURCE(Spaceship::SystemDamagedEvent, 0x02B6F9A8)
DECLARE_EVENT_SOURCE(Spaceship::SystemPowerAllocationEvent, 0x02B6FA38)
DECLARE_EVENT_SOURCE(Spaceship::SystemPowerChangeEvent, 0x02B6FAC8)
DECLARE_EVENT_SOURCE(Spaceship::SystemRepairedBIEvent, 0x02B6FB58)
DECLARE_EVENT_SOURCE(Spaceship::SystemRepairedEvent, 0x02B6FBE8)
DECLARE_EVENT_SOURCE(Spaceship::TakeDamagEvent, 0x02B6FC78)
DECLARE_EVENT_SOURCE(ContextStackChangedEvent, 0x02C9EBBC)
DECLARE_EVENT_SOURCE(UpdateSceneRectEvent, 0x02E8DED0)
DECLARE_EVENT_SOURCE(GameStalledEvent, 0x03055488)

// more

DECLARE_EVENT_SOURCE(TESCellNavmeshGeneratedEvent, 0x00598D70)
DECLARE_EVENT_SOURCE(TESHitEvent, 0x00599600)
DECLARE_EVENT_SOURCE(FirstThirdPersonSwitch::Event, 0x00599FF0)
DECLARE_EVENT_SOURCE(PerkChanged::Event, 0x0127AB50)
DECLARE_EVENT_SOURCE(TESHarvestEvent::ItemHarvested, 0x01471580)
DECLARE_EVENT_SOURCE(ActivityEvents::ActivityCompletedEvent, 0x014797F0)
DECLARE_EVENT_SOURCE(ChallengeCompletedEvent::Event, 0x0147BB10)
DECLARE_EVENT_SOURCE(InventoryItemEvent::Event, 0x014B45B0)
DECLARE_EVENT_SOURCE(BooksRead::Event, 0x018C6130)
DECLARE_EVENT_SOURCE(LocationExplored::Event, 0x018FEBC0)
DECLARE_EVENT_SOURCE(LocationLinked::Event, 0x018FEC30)
DECLARE_EVENT_SOURCE(Activation::Event, 0x019BFFC0)
DECLARE_EVENT_SOURCE(ActorCellChangeEvent, 0x019D1E90)
DECLARE_EVENT_SOURCE(ActorHeadAttachedEvent, 0x019D1F00)
DECLARE_EVENT_SOURCE(ActorValueEvents::ActorValueChangedEvent, 0x019D1F70)
DECLARE_EVENT_SOURCE(AliasChangeEvent, 0x019D1FE0)
DECLARE_EVENT_SOURCE(AnimationGraphDependentEvent, 0x019D2050)
DECLARE_EVENT_SOURCE(BGSAffinityEventEvent, 0x019D20C0)
DECLARE_EVENT_SOURCE(BGSCellGridLoadEvent, 0x019D2130)
DECLARE_EVENT_SOURCE(BGSEventProcessedEvent, 0x019D21A0)
DECLARE_EVENT_SOURCE(BGSHavokWorldCreatedEvent, 0x019D2210)
DECLARE_EVENT_SOURCE(BGSLocationLoadedEvent, 0x019D2280)
DECLARE_EVENT_SOURCE(BGSOnPlayerCompanionDismiss, 0x019D22F0)
DECLARE_EVENT_SOURCE(BGSOnPlayerCompleteResearchEvent, 0x019D2360)
DECLARE_EVENT_SOURCE(BGSOnPlayerCraftItemEvent, 0x019D23D0)
DECLARE_EVENT_SOURCE(BGSOnPlayerCreateRobotEvent, 0x019D2440)
DECLARE_EVENT_SOURCE(BGSOnPlayerEnterVertibirdEvent, 0x019D24B0)
DECLARE_EVENT_SOURCE(BGSOnPlayerFallLongDistances, 0x019D2520)
DECLARE_EVENT_SOURCE(BGSOnPlayerFireWeaponEvent, 0x019D2590)
DECLARE_EVENT_SOURCE(BGSOnPlayerHealTeammateEvent, 0x019D2600)
DECLARE_EVENT_SOURCE(BGSOnPlayerLoiteringBeginEvent, 0x019D2670)
DECLARE_EVENT_SOURCE(BGSOnPlayerLoiteringEndEvent, 0x019D26E0)
DECLARE_EVENT_SOURCE(BGSOnPlayerModArmorWeaponEvent, 0x019D2750)
DECLARE_EVENT_SOURCE(BGSOnPlayerModRobotEvent, 0x019D27C0)
DECLARE_EVENT_SOURCE(BGSOnPlayerSwimmingEvent, 0x019D2830)
DECLARE_EVENT_SOURCE(BGSOnPlayerUseWorkBenchEvent, 0x019D28A0)
DECLARE_EVENT_SOURCE(BGSOnSpeechChallengeAvailable, 0x019D2910)
DECLARE_EVENT_SOURCE(BGSRadiationDamageEvent, 0x019D2980)
DECLARE_EVENT_SOURCE(BuilderMenuSelectEvent, 0x019D29F0)
DECLARE_EVENT_SOURCE(CrewAssignedEvent, 0x019D2A60)
DECLARE_EVENT_SOURCE(CrewDismissedEvent, 0x019D2AD0)
DECLARE_EVENT_SOURCE(DestroyedEvent, 0x019D2B40)
DECLARE_EVENT_SOURCE(HomeShipSetEvent, 0x019D2BB0)
DECLARE_EVENT_SOURCE(InstantReferenceInteractionEvent, 0x019D2C20)
DECLARE_EVENT_SOURCE(ItemConsumedEvent, 0x019D2C90)
DECLARE_EVENT_SOURCE(ItemSwappedEvent, 0x019D2D00)
DECLARE_EVENT_SOURCE(LockPickedEvent, 0x019D2D70)
DECLARE_EVENT_SOURCE(MapMarkerDiscoveredEvent, 0x019D2DE0)
DECLARE_EVENT_SOURCE(ObjectScannedEvent, 0x019D2E50)
DECLARE_EVENT_SOURCE(PlayerAddItemEvent, 0x019D2EC0)
DECLARE_EVENT_SOURCE(PlayerArrestedEvent, 0x019D2F30)
DECLARE_EVENT_SOURCE(PlayerAssaultActorEvent, 0x019D2FA0)
DECLARE_EVENT_SOURCE(PlayerBuyShipEvent, 0x019D3010)
DECLARE_EVENT_SOURCE(PlayerCrimeGoldEvent, 0x019D3080)
DECLARE_EVENT_SOURCE(PlayerFailedPlotRouteEvent, 0x019D30F0)
DECLARE_EVENT_SOURCE(PlayerJailEvent, 0x019D3160)
DECLARE_EVENT_SOURCE(PlayerModifiedShipEvent, 0x019D31D0)
DECLARE_EVENT_SOURCE(PlayerMurderActorEvent, 0x019D3240)
DECLARE_EVENT_SOURCE(PlayerPayFineEvent, 0x019D32B0)
DECLARE_EVENT_SOURCE(PlayerPlanetSurveyCompleteEvent, 0x019D3320)
DECLARE_EVENT_SOURCE(PlayerPlanetSurveyProgressEvent, 0x019D3390)
DECLARE_EVENT_SOURCE(PlayerSellShipEvent, 0x019D3400)
DECLARE_EVENT_SOURCE(PlayerTrespassEvent, 0x019D3470)
DECLARE_EVENT_SOURCE(QuickContainerOpenedEvent, 0x019D34E0)
DECLARE_EVENT_SOURCE(RefControlChangedEvent, 0x019D3550)
DECLARE_EVENT_SOURCE(ReferenceDestroyedEvent, 0x019D35C0)
DECLARE_EVENT_SOURCE(SpeechChallengeCompletionEvent, 0x019D3630)
DECLARE_EVENT_SOURCE(TESActivateEvent, 0x019D36A0)
DECLARE_EVENT_SOURCE(TESActiveEffectApplyFinishEvent, 0x019D3710)
DECLARE_EVENT_SOURCE(TESActiveEffectRemovedEvent, 0x019D3780)
DECLARE_EVENT_SOURCE(TESActorActivatedRefEvent, 0x019D37F0)
DECLARE_EVENT_SOURCE(TESActorLocationChangeEvent, 0x019D3860)
DECLARE_EVENT_SOURCE(TESBookReadEvent, 0x019D38D0)
DECLARE_EVENT_SOURCE(TESCellCriticalRefsAttachedEvent, 0x019D3940)
DECLARE_EVENT_SOURCE(TESCellFullyLoadedEvent, 0x019D39B0)
DECLARE_EVENT_SOURCE(TESCellGravityChangeEvent, 0x019D3A20)
DECLARE_EVENT_SOURCE(TESCellReadyToApplyDecalsEvent, 0x019D3A90)
DECLARE_EVENT_SOURCE(TESCellReference3DAttachEvent, 0x019D3B00)
DECLARE_EVENT_SOURCE(TESCellReferenceAttachDetachEvent, 0x019D3B70)
DECLARE_EVENT_SOURCE(TESCombatEvent, 0x019D3BE0)
DECLARE_EVENT_SOURCE(TESCombatListEvent, 0x019D3C50)
DECLARE_EVENT_SOURCE(TESCommandModeCompleteCommandEvent, 0x019D3CC0)
DECLARE_EVENT_SOURCE(TESCommandModeEnterEvent, 0x019D3D30)
DECLARE_EVENT_SOURCE(TESCommandModeExitEvent, 0x019D3DA0)
DECLARE_EVENT_SOURCE(TESCommandModeGiveCommandEvent, 0x019D3E10)
DECLARE_EVENT_SOURCE(TESConsciousnessEvent, 0x019D3E80)
DECLARE_EVENT_SOURCE(TESContainerChangedEvent, 0x019D3EF0)
DECLARE_EVENT_SOURCE(TESDeathEvent, 0x019D3F60)
DECLARE_EVENT_SOURCE(TESDeferredKillEvent, 0x019D3FD0)
DECLARE_EVENT_SOURCE(TESDestructionStageChangedEvent, 0x019D4040)
DECLARE_EVENT_SOURCE(TESEnterBleedoutEvent, 0x019D40B0)
DECLARE_EVENT_SOURCE(TESEnterSneakingEvent, 0x019D4120)
DECLARE_EVENT_SOURCE(TESEquipEvent, 0x019D4190)
DECLARE_EVENT_SOURCE(TESEscortWaitStartEvent, 0x019D4200)
DECLARE_EVENT_SOURCE(TESEscortWaitStopEvent, 0x019D4270)
DECLARE_EVENT_SOURCE(TESExitBleedoutEvent, 0x019D42E0)
DECLARE_EVENT_SOURCE(TESExitFurnitureEvent, 0x019D4350)
DECLARE_EVENT_SOURCE(TESFormDeleteEvent, 0x019D43C0)
DECLARE_EVENT_SOURCE(TESFormIDRemapEvent, 0x019D4430)
DECLARE_EVENT_SOURCE(TESFurnitureEvent, 0x019D44A0)
DECLARE_EVENT_SOURCE(TESGrabReleaseEvent, 0x019D4510)
DECLARE_EVENT_SOURCE(TESInitScriptEvent, 0x019D4580)
DECLARE_EVENT_SOURCE(TESLimbCrippleEvent, 0x019D45F0)
DECLARE_EVENT_SOURCE(TESLoadGameEvent, 0x019D4660)
DECLARE_EVENT_SOURCE(TESLocationExploredEvent, 0x019D46D0)
DECLARE_EVENT_SOURCE(TESLockChangedEvent, 0x019D4740)
DECLARE_EVENT_SOURCE(TESMagicEffectApplyEvent, 0x019D47B0)
DECLARE_EVENT_SOURCE(TESMissionAcceptedEvent, 0x019D4820)
DECLARE_EVENT_SOURCE(TESObjectLoadedEvent, 0x019D4890)
DECLARE_EVENT_SOURCE(TESObjectREFRTranslationEvent, 0x019D4900)
DECLARE_EVENT_SOURCE(TESOnPCDialogueTargetEvent, 0x019D4970)
DECLARE_EVENT_SOURCE(TESOpenCloseEvent, 0x019D49E0)
DECLARE_EVENT_SOURCE(TESPackageEvent, 0x019D4A50)
DECLARE_EVENT_SOURCE(TESPerkEntryRunEvent, 0x019D4AC0)
DECLARE_EVENT_SOURCE(TESPickNewIdleEvent, 0x019D4B30)
DECLARE_EVENT_SOURCE(TESPickpocketFailedEvent, 0x019D4BA0)
DECLARE_EVENT_SOURCE(TESPlayerActiveEffectEvent, 0x019D4C10)
DECLARE_EVENT_SOURCE(TESPlayerFollowerWarpEvent, 0x019D4C80)
DECLARE_EVENT_SOURCE(TESQuestInitEvent, 0x019D4CF0)
DECLARE_EVENT_SOURCE(TESQuestRejectedEvent, 0x019D4D60)
DECLARE_EVENT_SOURCE(TESQuestStageEvent, 0x019D4DD0)
DECLARE_EVENT_SOURCE(TESQuestStageItemDoneEvent, 0x019D4E40)
DECLARE_EVENT_SOURCE(TESQuestStartStopEvent, 0x019D4EB0)
DECLARE_EVENT_SOURCE(TESQuestTimerEvent, 0x019D4F20)
DECLARE_EVENT_SOURCE(TESResetEvent, 0x019D4F90)
DECLARE_EVENT_SOURCE(TESResolveNPCTemplatesEvent, 0x019D5000)
DECLARE_EVENT_SOURCE(TESSceneActionEvent, 0x019D5070)
DECLARE_EVENT_SOURCE(TESSceneEvent, 0x019D50E0)
DECLARE_EVENT_SOURCE(TESScenePhaseEvent, 0x019D5150)
DECLARE_EVENT_SOURCE(TESSellEvent, 0x019D51C0)
DECLARE_EVENT_SOURCE(TESSleepStartEvent, 0x019D5230)
DECLARE_EVENT_SOURCE(TESSleepStopEvent, 0x019D52A0)
DECLARE_EVENT_SOURCE(TESSpellCastEvent, 0x019D5310)
DECLARE_EVENT_SOURCE(TESSpellCastFailureEvent, 0x019D5380)
DECLARE_EVENT_SOURCE(TESSwitchRaceCompleteEvent, 0x019D53F0)
DECLARE_EVENT_SOURCE(TESTopicInfoEvent, 0x019D5460)
DECLARE_EVENT_SOURCE(TESTrackedStatsEvent, 0x019D54D0)
DECLARE_EVENT_SOURCE(TESTrapHitEvent, 0x019D5540)
DECLARE_EVENT_SOURCE(TESTriggerEnterEvent, 0x019D55B0)
DECLARE_EVENT_SOURCE(TESTriggerEvent, 0x019D5620)
DECLARE_EVENT_SOURCE(TESTriggerLeaveEvent, 0x019D5690)
DECLARE_EVENT_SOURCE(TESUniqueIDChangeEvent, 0x019D5700)
DECLARE_EVENT_SOURCE(TESWaitStartEvent, 0x019D5770)
DECLARE_EVENT_SOURCE(TESWaitStopEvent, 0x019D57E0)
DECLARE_EVENT_SOURCE(TerminalMenuMenuItemRunEvent, 0x019D5850)
DECLARE_EVENT_SOURCE(TerminalMenuOnEnterEvent, 0x019D58C0)
DECLARE_EVENT_SOURCE(WorkshopNPCTransferEvent, 0x019D5930)
DECLARE_EVENT_SOURCE(TESObjectREFRIsReadyForAttachEvent, 0x019D59A0)
DECLARE_EVENT_SOURCE(DefaultObjectsReadyEvent::Event, 0x01A010B0)
DECLARE_EVENT_SOURCE(ObjectiveState::Event, 0x01AAAEF0)
DECLARE_EVENT_SOURCE(QuestStatus::Event, 0x01B0C390)
DECLARE_EVENT_SOURCE(RefillAliasEvent::Event, 0x01B0C400)
DECLARE_EVENT_SOURCE(TESQuestEvent::Event, 0x01B0C470)
DECLARE_EVENT_SOURCE(RolloverIsCrimeEvent::Event, 0x0200DD20)
DECLARE_EVENT_SOURCE(HideSubtitleEvent::Event, 0x02018FF0)
DECLARE_EVENT_SOURCE(ShowSubtitleEvent::Event, 0x02019060)
DECLARE_EVENT_SOURCE(MissionMenuStateEvent::Event, 0x02075640)
DECLARE_EVENT_SOURCE(ClearShipHudTarget::Event, 0x020CF9D0)
DECLARE_EVENT_SOURCE(TryUpdateShipHudTarget::Event, 0x020CFA40)
DECLARE_EVENT_SOURCE(LocationTextEvent::Event, 0x02129B00)
DECLARE_EVENT_SOURCE(TraitDiscoveryTextEvent::Event, 0x02129B70)
DECLARE_EVENT_SOURCE(DaysPassed::Event, 0x023AEC60)
DECLARE_EVENT_SOURCE(HourPassed::Event, 0x023AECD0)
DECLARE_EVENT_SOURCE(ActorDamage::Event, 0x0248EC60)
DECLARE_EVENT_SOURCE(ActorItemEquipped::Event, 0x0248ECD0)
DECLARE_EVENT_SOURCE(ActorKill::Event, 0x0248ED40)
DECLARE_EVENT_SOURCE(AssaultCrime::Event, 0x0248EDB0)
DECLARE_EVENT_SOURCE(DisarmedEvent::Event, 0x0248EE20)
DECLARE_EVENT_SOURCE(FactionRankChange::Event, 0x0248EE90)
DECLARE_EVENT_SOURCE(GrandTheftHorse::Event, 0x0248EF00)
DECLARE_EVENT_SOURCE(MurderCrime::Event, 0x0248EF70)
DECLARE_EVENT_SOURCE(PiracyCrime::Event, 0x0248EFE0)
DECLARE_EVENT_SOURCE(Bleedout::Event, 0x024BD270)
DECLARE_EVENT_SOURCE(ContractedDisease::Event, 0x024BD2E0)
DECLARE_EVENT_SOURCE(ReloadWeaponEvent::Event, 0x024BD350)
DECLARE_EVENT_SOURCE(SpellsLearned::Event, 0x024CBE70)
DECLARE_EVENT_SOURCE(Bounty::Event, 0x0256D200)
DECLARE_EVENT_SOURCE(ChestLooted::Event, 0x0256D270)
DECLARE_EVENT_SOURCE(CriticalHitEvent::Event, 0x0256D2E0)
DECLARE_EVENT_SOURCE(CustomMarkerUpdate::Event, 0x0256D350)
DECLARE_EVENT_SOURCE(DaysJailed::Event, 0x0256D3C0)
DECLARE_EVENT_SOURCE(EnteredUnity::Event, 0x0256D430)
DECLARE_EVENT_SOURCE(FinePaid::Event, 0x0256D4A0)
DECLARE_EVENT_SOURCE(ItemCrafted::Event, 0x0256D510)
DECLARE_EVENT_SOURCE(ItemSteal::Event, 0x0256D580)
DECLARE_EVENT_SOURCE(JailEscape::Event, 0x0256D5F0)
DECLARE_EVENT_SOURCE(Jailing::Event, 0x0256D660)
DECLARE_EVENT_SOURCE(LevelIncrease::Event, 0x0256D6D0)
DECLARE_EVENT_SOURCE(LocationMarkerArrayUpdate::Event, 0x0256D740)
DECLARE_EVENT_SOURCE(PlayerActiveEffectChanged::Event, 0x0256D7B0)
DECLARE_EVENT_SOURCE(PlayerAmmoChanged::Event, 0x0256D820)
DECLARE_EVENT_SOURCE(PlayerCharacterQuestEvent::Event, 0x0256D890)
DECLARE_EVENT_SOURCE(PlayerDifficultySettingChanged::Event, 0x0256D900)
DECLARE_EVENT_SOURCE(PlayerFastTravel::Event, 0x0256D970)
DECLARE_EVENT_SOURCE(PlayerInDialogueChanged::Event, 0x0256D9E0)
DECLARE_EVENT_SOURCE(PlayerLifeStateChanged::Event, 0x0256DA50)
DECLARE_EVENT_SOURCE(PlayerPickpocketSuccess::Event, 0x0256DAC0)
DECLARE_EVENT_SOURCE(PoisonedWeapon::Event, 0x0256DB30)
DECLARE_EVENT_SOURCE(TerminalHacked::Event, 0x0256DBA0)
DECLARE_EVENT_SOURCE(TravelMarkerStateChange::Event, 0x0256DC10)
DECLARE_EVENT_SOURCE(WeaponAttack::Event, 0x0256DC80)
DECLARE_EVENT_SOURCE(Trespass::Event, 0x025CC1A0)
DECLARE_EVENT_SOURCE(VATSEvents::ModeChange, 0x02635E40)
DECLARE_EVENT_SOURCE(VATSCommand, 0x02635EB0)
DECLARE_EVENT_SOURCE(HoursPassed::Event, 0x0289E0B0)

// other events
DECLARE_EVENT_SOURCE(RadioManager::PipboyTransmitterDetectionEvent, 0x02332BB0)
DECLARE_EVENT_SOURCE_EX(XPChange::Event, 0x05C8CD80)
DECLARE_EVENT_SOURCE_EX(WeaponFiredEvent, 0x05C7FEB8)
DECLARE_EVENT_SOURCE_EX(ActorEquipManagerEvent::Event, 0x066213B0)
DECLARE_EVENT_SOURCE_EX(ActorEquipManagerEvent::SpellEvent, 0x066213D8)
DECLARE_EVENT_SOURCE_EX(AttachReference::Event, 0x05C8CD58)
