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
        DEFINE_MEMBER_FN_1(RegisterSink, void, 0x005B123C, SinkBase* sink);
        DEFINE_MEMBER_FN_1(UnregisterSink, void, 0x005B1050, SinkBase* sink);
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

DECLARE_EVENT_SOURCE(SnapTemplateUtils::SnapReplaceEvent, 0x0078D26C)
DECLARE_EVENT_SOURCE(ImageFixtureEvent_RequestImage, 0x0078E524)
DECLARE_EVENT_SOURCE(ImageFixtureEvent_UnregisterImage, 0x00791420)
DECLARE_EVENT_SOURCE(Spaceship::TakeOffEvent, 0x007942C8)
DECLARE_EVENT_SOURCE(HUDActivityIncreaseEvent, 0x011CF610)
DECLARE_EVENT_SOURCE(AnimationDataCleanupEvent, 0x011F1C0C)
DECLARE_EVENT_SOURCE(AnimationDataSetupEvent, 0x011F1C9C)
DECLARE_EVENT_SOURCE(EndLoadGameEvent, 0x012483F4)
DECLARE_EVENT_SOURCE(StartLoadGameEvent, 0x01248484)
DECLARE_EVENT_SOURCE(ShipEditor_SystemSelected, 0x0126EF5C)
DECLARE_EVENT_SOURCE(ShipEditor_PreviewUpgrade, 0x01275610)
DECLARE_EVENT_SOURCE(ShipEditor_SelectedUpgrade, 0x012756A0)
DECLARE_EVENT_SOURCE(RuntimeComponentDBFactory::ReferenceAttach, 0x012C2DE0)
DECLARE_EVENT_SOURCE(RuntimeComponentDBFactory::ReferenceDetach, 0x012C2E70)
DECLARE_EVENT_SOURCE(WeaponGroupAssignmentMenu_ChangeWeaponAssignment, 0x0134BF44)
DECLARE_EVENT_SOURCE(WeaponGroupAssignmentMenu_OnHintButtonActivated, 0x0134BFD4)
DECLARE_EVENT_SOURCE(ShipEditor_OnExitConfirmCancel, 0x0136EC44)
DECLARE_EVENT_SOURCE(ShipEditor_OnExitConfirmExit, 0x0136ECD4)
DECLARE_EVENT_SOURCE(ShipEditor_OnExitConfirmSaveAndExit, 0x0136ED64)
DECLARE_EVENT_SOURCE(ShipEditor_OnFlightCheckTabChanged, 0x013738B4)
DECLARE_EVENT_SOURCE(ShipEditor_OnWeaponGroupChanged, 0x01373944)
DECLARE_EVENT_SOURCE(ShipEditor_OnRenameEndEditText, 0x01379280)
DECLARE_EVENT_SOURCE(ShipEditor_OnRenameInputCancelled, 0x01379310)
DECLARE_EVENT_SOURCE(ShipEditor_ChangeModuleCategory, 0x0137DAF4)
DECLARE_EVENT_SOURCE(ShipEditor_PreviewShipPart, 0x0137DB84)
DECLARE_EVENT_SOURCE(ShipEditor_SelectedShipPart, 0x0137DC14)
DECLARE_EVENT_SOURCE(ShipEditor_OnColorPickerControlChanged, 0x01386AC0)
DECLARE_EVENT_SOURCE(ShipEditor_OnColorPickerTabChanged, 0x01386B50)
DECLARE_EVENT_SOURCE(ShipEditor_OnColorSliderMouseInput, 0x01386BE0)
DECLARE_EVENT_SOURCE(ShipEditor_OnRecentColorSwatchClicked, 0x01386C70)
DECLARE_EVENT_SOURCE(ShipBuilder_CloseAllMenus, 0x013AC668)
DECLARE_EVENT_SOURCE(ShipEditor_OnHintButtonActivated, 0x013AC6F8)
DECLARE_EVENT_SOURCE(ShipEditor_RemoveAll3D, 0x013AC788)
DECLARE_EVENT_SOURCE(ReferenceQueuedEvent, 0x01416638)
DECLARE_EVENT_SOURCE(LoadScreenEndEvent, 0x0143033C)
DECLARE_EVENT_SOURCE(LoadScreenStartEvent, 0x014303CC)
DECLARE_EVENT_SOURCE(CellAttachDetachEvent, 0x0143045C)
DECLARE_EVENT_SOURCE(PickRefStateChangedEvent, 0x014A5D88)
DECLARE_EVENT_SOURCE(ActivityTrackerActivityStartedEvent, 0x014B0338)
DECLARE_EVENT_SOURCE(RuntimeComponentDBFactory::ReferenceCleared3d, 0x0153D010)
DECLARE_EVENT_SOURCE(RuntimeComponentDBFactory::ReferenceDestroy, 0x0153D0A0)
DECLARE_EVENT_SOURCE(RuntimeComponentDBFactory::ReferenceInit, 0x0153D130)
DECLARE_EVENT_SOURCE(RuntimeComponentDBFactory::ReferenceRecycle, 0x0153D1C0)
DECLARE_EVENT_SOURCE(RuntimeComponentDBFactory::ReferenceSet3d, 0x0153D250)
DECLARE_EVENT_SOURCE(RuntimeComponentDBFactory::Release3DRelatedData, 0x0153D2E0)
DECLARE_EVENT_SOURCE(BSWorldOriginShiftEvent, 0x015497BC)
DECLARE_EVENT_SOURCE(BGSPlanet::PlayerKnowledgeFlagSetEvent, 0x016727BC)
DECLARE_EVENT_SOURCE(StarMap::PlanetTraitKnownEvent, 0x0167284C)
DECLARE_EVENT_SOURCE(ResetHistoryDataEvent, 0x01745578)
DECLARE_EVENT_SOURCE(TESQuestRewardEvent, 0x0175F988)
DECLARE_EVENT_SOURCE(HUDWeaponWorldFOVMultChangedEvent, 0x01761BAC)
DECLARE_EVENT_SOURCE(BGSSceneActionPlayerDialogue::ActionEndEvent, 0x01856F1C)
DECLARE_EVENT_SOURCE(BGSSceneActionPlayerDialogue::ActionStartEvent, 0x01856FAC)
DECLARE_EVENT_SOURCE(AutoLoadDoorRolloverEvent, 0x019080AC)
DECLARE_EVENT_SOURCE(ClearQuickContainerEvent, 0x0190813C)
DECLARE_EVENT_SOURCE(ReferenceCellLoadedTemps, 0x01980FDC)
DECLARE_EVENT_SOURCE(Workshop::CargoLinkAddedEvent, 0x01D336CC)
DECLARE_EVENT_SOURCE(Workshop::CargoLinkTargetChangedEvent, 0x01D3375C)
DECLARE_EVENT_SOURCE(Workshop::EnterOutpostBeaconModeEvent, 0x01D337EC)
DECLARE_EVENT_SOURCE(Workshop::ItemGrabbedEvent, 0x01D3387C)
DECLARE_EVENT_SOURCE(Workshop::ItemMovedEvent, 0x01D3390C)
DECLARE_EVENT_SOURCE(Workshop::ItemPlacedEvent, 0x01D3399C)
DECLARE_EVENT_SOURCE(Workshop::ItemProducedEvent, 0x01D33A2C)
DECLARE_EVENT_SOURCE(Workshop::ItemRemovedEvent, 0x01D33ABC)
DECLARE_EVENT_SOURCE(Workshop::ItemRepairedEvent, 0x01D33B4C)
DECLARE_EVENT_SOURCE(Workshop::ItemScrappedEvent, 0x01D33BDC)
DECLARE_EVENT_SOURCE(Workshop::OutpostNameChangedEvent, 0x01D33C6C)
DECLARE_EVENT_SOURCE(Workshop::OutpostPlacedEvent, 0x01D33CFC)
DECLARE_EVENT_SOURCE(PickRefUpdateEvent, 0x01D33D8C)
DECLARE_EVENT_SOURCE(Workshop::PlacementStatusEvent, 0x01D33E1C)
DECLARE_EVENT_SOURCE(Workshop::PowerOffEvent, 0x01D33EAC)
DECLARE_EVENT_SOURCE(Workshop::PowerOnEvent, 0x01D33F3C)
DECLARE_EVENT_SOURCE(Workshop::SnapBehaviorCycledEvent, 0x01D33FCC)
DECLARE_EVENT_SOURCE(Workshop::WorkshopFlyCameraEvent, 0x01D3405C)
DECLARE_EVENT_SOURCE(Workshop::WorkshopItemPlacedEvent, 0x01D340EC)
DECLARE_EVENT_SOURCE(Workshop::WorkshopModeEvent, 0x01D3417C)
DECLARE_EVENT_SOURCE(Workshop::WorkshopOutputLinkEvent, 0x01D3420C)
DECLARE_EVENT_SOURCE(Workshop::WorkshopStatsChangedEvent, 0x01D3429C)
DECLARE_EVENT_SOURCE(Workshop::WorkshopUpdateStatsEvent, 0x01D3432C)
DECLARE_EVENT_SOURCE(ShipCameraStateToggled, 0x01D8EAD4)
DECLARE_EVENT_SOURCE(PlayerControls::PlayerJumpPressEvent, 0x01F5EFC4)
DECLARE_EVENT_SOURCE(PlayerControls::PlayerJumpReleaseEvent, 0x01F5F054)
DECLARE_EVENT_SOURCE(PlayerSneakingChangeEvent, 0x01F6081C)
DECLARE_EVENT_SOURCE(PlayerControls::PlayerZeroGSprintJustPressedEvent, 0x01F60A58)
DECLARE_EVENT_SOURCE(PlayerControls::PlayerZeroGSprintReleasedEvent, 0x01F60AE8)
DECLARE_EVENT_SOURCE(PlayerControls::PlayerIronSightsEndEvent, 0x01F63C6C)
DECLARE_EVENT_SOURCE(PlayerControls::PlayerIronSightsStartEvent, 0x01F63CFC)
DECLARE_EVENT_SOURCE(SaveLoadEvent, 0x01F937CC)
DECLARE_EVENT_SOURCE(SpaceshipWeaponBinding::SpaceshipWeaponBindingChangedEvent, 0x01FC2028)
DECLARE_EVENT_SOURCE(BoundaryMenu_FastTravel, 0x01FE06D8)
DECLARE_EVENT_SOURCE(BoundaryMenu_ShowMap, 0x01FE0768)
DECLARE_EVENT_SOURCE(PhotoGallery_DeletePhoto, 0x01FE9484)
DECLARE_EVENT_SOURCE(PowersMenu_ActivateEssence, 0x01FEC960)
DECLARE_EVENT_SOURCE(PowersMenu_EquipPower, 0x01FEC9F0)
DECLARE_EVENT_SOURCE(PowersMenu_FavoritePower, 0x01FECA80)
DECLARE_EVENT_SOURCE(ContainerMenuClosed::Event, 0x01FFFF5C)
DECLARE_EVENT_SOURCE(HangarShipSelection_ChangeSystemDisplay, 0x01FFFFEC)
DECLARE_EVENT_SOURCE(HangarShipSelection_RepairShip, 0x0200007C)
DECLARE_EVENT_SOURCE(HangarShipSelection_UpgradeSystem, 0x0200010C)
DECLARE_EVENT_SOURCE(ShipCrewMenu_Close, 0x0200019C)
DECLARE_EVENT_SOURCE(BinkMovieStoppedPlayingEvent, 0x02005210)
DECLARE_EVENT_SOURCE(WorkshopColorMode_ApplyColors, 0x0206836C)
DECLARE_EVENT_SOURCE(WorkshopColorMode_SelectedTab, 0x020683FC)
DECLARE_EVENT_SOURCE(WorkshopColorMode_SliderChanged, 0x0206848C)
DECLARE_EVENT_SOURCE(WorkshopColorMode_SwatchChanged, 0x0206851C)
DECLARE_EVENT_SOURCE(HUDCrewBuffMessageEvent, 0x020696BC)
DECLARE_EVENT_SOURCE(CraftingMenu_SessionSummaryEvent, 0x02072798)
DECLARE_EVENT_SOURCE(CraftingMenu_CraftItem, 0x02072828)
DECLARE_EVENT_SOURCE(CraftingMenu_ExitBench, 0x020728B8)
DECLARE_EVENT_SOURCE(CraftingMenu_InstallMod, 0x02072948)
DECLARE_EVENT_SOURCE(CraftingMenu_RenameItem, 0x020729D8)
DECLARE_EVENT_SOURCE(CraftingMenu_RevertedModdedItem, 0x02072A68)
DECLARE_EVENT_SOURCE(CraftingMenu_SelectedMod, 0x02072AF8)
DECLARE_EVENT_SOURCE(CraftingMenu_SelectedModSlot, 0x02072B88)
DECLARE_EVENT_SOURCE(CraftingMenu_SelectedModdableItem, 0x02072C18)
DECLARE_EVENT_SOURCE(CraftingMenu_SelectedRecipe, 0x02072CA8)
DECLARE_EVENT_SOURCE(CraftingMenu_SetInspectControls, 0x02072D38)
DECLARE_EVENT_SOURCE(CraftingMenu_ToggleTracking, 0x02072DC8)
DECLARE_EVENT_SOURCE(CraftingMenu_ViewingModdableItem, 0x02072E58)
DECLARE_EVENT_SOURCE(ContainerMenu_CloseMenu, 0x020811AC)
DECLARE_EVENT_SOURCE(InventoryMenu_Change3DView, 0x020812DC)
DECLARE_EVENT_SOURCE(InventoryMenu_PaperDollTryOn, 0x0208136C)
DECLARE_EVENT_SOURCE(InventoryMenu_ResetPaperDollInv, 0x020813FC)
DECLARE_EVENT_SOURCE(UpdateActivateListenerEvent, 0x02089418)
DECLARE_EVENT_SOURCE(StartOutpostFromListenerEvent, 0x0208B0D8)
DECLARE_EVENT_SOURCE(HUDModeEvent, 0x0209B48C)
DECLARE_EVENT_SOURCE(OpenContainerMenuEventData, 0x0209B51C)
DECLARE_EVENT_SOURCE(OpenContainerMenuFromListenerEvent, 0x0209B5AC)
DECLARE_EVENT_SOURCE(HUDRolloverActivationButtonEvent, 0x0209B63C)
DECLARE_EVENT_SOURCE(HUDRolloverActivationQCItemPressEvent, 0x0209B6CC)
DECLARE_EVENT_SOURCE(Inventory_SetSort, 0x0209B75C)
DECLARE_EVENT_SOURCE(ShowingQuestMarketTextEvent, 0x020A9698)
DECLARE_EVENT_SOURCE(TargetHitEvent, 0x020ABC98)
DECLARE_EVENT_SOURCE(BSTValueRequestEvent<PlayerCrosshairModeEvent>, 0x020ABD28)
DECLARE_EVENT_SOURCE(ClearHUDMessagesEvent, 0x020B3184)
DECLARE_EVENT_SOURCE(ShowHUDMessageEvent, 0x020B3214)
DECLARE_EVENT_SOURCE(PlayerDetectionLevelChangeEvent, 0x020B63B4)
DECLARE_EVENT_SOURCE(ShowCustomWatchAlert, 0x020BB4C4)
DECLARE_EVENT_SOURCE(PlayerUpdateEvent, 0x020F840C)
DECLARE_EVENT_SOURCE(InventoryMenu_ToggleHelmet, 0x020F849C)
DECLARE_EVENT_SOURCE(InventoryMenu_ToggleSuit, 0x020F852C)
DECLARE_EVENT_SOURCE(ControlsRemappedEvent, 0x02140628)
DECLARE_EVENT_SOURCE(SettingsPanel_CheckBoxChanged, 0x021406B8)
DECLARE_EVENT_SOURCE(SettingsPanel_ClearBinding, 0x02140748)
DECLARE_EVENT_SOURCE(SettingsPanel_OpenCategory, 0x0214087C)
DECLARE_EVENT_SOURCE(SettingsPanel_OpenSettings, 0x0214090C)
DECLARE_EVENT_SOURCE(SettingsPanel_RemapConfirmed, 0x0214099C)
DECLARE_EVENT_SOURCE(SettingsPanel_RemapMode, 0x02140A2C)
DECLARE_EVENT_SOURCE(SettingsPanel_ResetToDefaults, 0x02140ABC)
DECLARE_EVENT_SOURCE(SettingsPanel_SaveControls, 0x02140B4C)
DECLARE_EVENT_SOURCE(SettingsPanel_SaveSettings, 0x02140BDC)
DECLARE_EVENT_SOURCE(SettingsPanel_SliderChanged, 0x02140C6C)
DECLARE_EVENT_SOURCE(SettingsPanel_StepperChanged, 0x02140CFC)
DECLARE_EVENT_SOURCE(SettingsPanel_ValidateControls, 0x02140D8C)
DECLARE_EVENT_SOURCE(ShipCrewMenu_OpenAssignMenu, 0x0214B7E8)
DECLARE_EVENT_SOURCE(ShipCrewMenu_SetSort, 0x0214B878)
DECLARE_EVENT_SOURCE(Spaceship::PlayerMovementOutputEvent, 0x02170FE8)
DECLARE_EVENT_SOURCE(ShowLongShipBootup, 0x02171078)
DECLARE_EVENT_SOURCE(ShipHudQuickContainer_TransferMenu, 0x02171108)
DECLARE_EVENT_SOURCE(ShipHud_Activate, 0x02171198)
DECLARE_EVENT_SOURCE(ShipHud_BodyViewMarkerDimensions, 0x02171228)
DECLARE_EVENT_SOURCE(ShipHud_ChangeComponentSelection, 0x021712B8)
DECLARE_EVENT_SOURCE(ShipHud_CloseMenu, 0x02171348)
DECLARE_EVENT_SOURCE(ShipHud_Deselect, 0x021713D8)
DECLARE_EVENT_SOURCE(ShipHud_FarTravel, 0x02171468)
DECLARE_EVENT_SOURCE(ShipHud_HailAccepted, 0x021714F8)
DECLARE_EVENT_SOURCE(ShipHud_HailCancelled, 0x02171588)
DECLARE_EVENT_SOURCE(ShipHud_JumpToQuestMarker, 0x02171618)
DECLARE_EVENT_SOURCE(ShipHud_Land, 0x021716A8)
DECLARE_EVENT_SOURCE(ShipHud_LandingMarkerMap, 0x02171738)
DECLARE_EVENT_SOURCE(ShipHud_Map, 0x021717C8)
DECLARE_EVENT_SOURCE(ShipHud_OnMonocleToggle, 0x02171858)
DECLARE_EVENT_SOURCE(ShipHud_OpenPhotoMode, 0x021718E8)
DECLARE_EVENT_SOURCE(ShipHud_Repair, 0x02171978)
DECLARE_EVENT_SOURCE(ShipHud_SetTargetMode, 0x02171A08)
DECLARE_EVENT_SOURCE(ShipHud_Target, 0x02171A98)
DECLARE_EVENT_SOURCE(ShipHud_TargetShipSystem, 0x02171B28)
DECLARE_EVENT_SOURCE(ShipHud_UntargetShipSystem, 0x02171BB8)
DECLARE_EVENT_SOURCE(ShipHud_UpdateComponentPower, 0x02171C48)
DECLARE_EVENT_SOURCE(DialogueMenu_CompleteExit, 0x0219D7DC)
DECLARE_EVENT_SOURCE(BGSScannerGuideEffectStatusUpdateEvent, 0x021AD7B0)
DECLARE_EVENT_SOURCE(GlobalFunc_CloseAllMenus, 0x021B2768)
DECLARE_EVENT_SOURCE(GlobalFunc_CloseMenu, 0x021B27F8)
DECLARE_EVENT_SOURCE(GlobalFunc_PlayMenuSound, 0x021B2888)
DECLARE_EVENT_SOURCE(GlobalFunc_StartGameRender, 0x021B2918)
DECLARE_EVENT_SOURCE(GlobalFunc_UserEvent, 0x021B29A8)
DECLARE_EVENT_SOURCE(ExperienceMeterDisplayData, 0x021BC2B8)
DECLARE_EVENT_SOURCE(LevelUp_AnimFinished, 0x021BC348)
DECLARE_EVENT_SOURCE(LevelUp_OnWidgetShown, 0x021BC3D8)
DECLARE_EVENT_SOURCE(LevelUp_OpenDataMenu, 0x021BC468)
DECLARE_EVENT_SOURCE(LevelUp_ShowSkills, 0x021BC4F8)
DECLARE_EVENT_SOURCE(LocationTextWidget_FinishedQueue, 0x021BC588)
DECLARE_EVENT_SOURCE(DisplayFatigueWarningEvent, 0x021BC830)
DECLARE_EVENT_SOURCE(BSTValueRequestEvent<SaveLoadMessageStringEvent>, 0x021C02FC)
DECLARE_EVENT_SOURCE(PlayerCrosshairModeEvent, 0x020AB390)
DECLARE_EVENT_SOURCE(HUDNotificationEvent, 0x021C9568)
DECLARE_EVENT_SOURCE(HUDNotification_MissionActiveWidgetUpdate, 0x021C95F8)
DECLARE_EVENT_SOURCE(HUDNotification_OpenDataMenu, 0x021C9688)
DECLARE_EVENT_SOURCE(HUDNotification_OpenMissionMenu, 0x021C9718)
DECLARE_EVENT_SOURCE(HUDNotification_SetMissionActive, 0x021C97A8)
DECLARE_EVENT_SOURCE(PlayerSetWeaponStateEvent, 0x021CB388)
DECLARE_EVENT_SOURCE(BarterMenu_BuyItem, 0x021DEA38)
DECLARE_EVENT_SOURCE(BarterMenu_CloseMenu, 0x021DEAC8)
DECLARE_EVENT_SOURCE(BarterMenu_HideModel, 0x021DEB58)
DECLARE_EVENT_SOURCE(BarterMenu_LoadModel, 0x021DEBE8)
DECLARE_EVENT_SOURCE(BarterMenu_SellItem, 0x021DEC78)
DECLARE_EVENT_SOURCE(BarterMenu_SetMouseOverModel, 0x021DED08)
DECLARE_EVENT_SOURCE(BarterMenu_ShowFailureMessage, 0x021DED98)
DECLARE_EVENT_SOURCE(BarterMenu_ViewedItem, 0x021DEE28)
DECLARE_EVENT_SOURCE(MissionMenu_ClearState, 0x021E3430)
DECLARE_EVENT_SOURCE(MissionMenu_PlotToLocation, 0x021E34C0)
DECLARE_EVENT_SOURCE(MissionMenu_RejectQuest, 0x021E3550)
DECLARE_EVENT_SOURCE(MissionMenu_SaveCategoryIndex, 0x021E35E0)
DECLARE_EVENT_SOURCE(MissionMenu_SaveOpenedId, 0x021E3670)
DECLARE_EVENT_SOURCE(MissionMenu_ShowItemLocation, 0x021E3700)
DECLARE_EVENT_SOURCE(MissionMenu_ToggleTrackingQuest, 0x021E382C)
DECLARE_EVENT_SOURCE(DataSlateButtons_acceptClicked, 0x021E8F68)
DECLARE_EVENT_SOURCE(DataSlateButtons_cancelClicked, 0x021E8FF8)
DECLARE_EVENT_SOURCE(DataSlateMenu_playSFX, 0x021E9088)
DECLARE_EVENT_SOURCE(DataSlateMenu_toggleAudio, 0x021E9118)
DECLARE_EVENT_SOURCE(InventoryMenu_DropItem, 0x021EFDA4)
DECLARE_EVENT_SOURCE(InventoryMenu_HideModel, 0x021EFE34)
DECLARE_EVENT_SOURCE(InventoryMenu_LoadModel, 0x021EFEC4)
DECLARE_EVENT_SOURCE(InventoryMenu_OnEnterCategory, 0x021EFF54)
DECLARE_EVENT_SOURCE(InventoryMenu_OpenCargoHold, 0x021EFFE4)
DECLARE_EVENT_SOURCE(InventoryMenu_SelectItem, 0x021F0074)
DECLARE_EVENT_SOURCE(InventoryMenu_SetMouseOverModel, 0x021F0104)
DECLARE_EVENT_SOURCE(InventoryMenu_ToggleFavorite, 0x021F023C)
DECLARE_EVENT_SOURCE(MissionBoard_MissionEntryChanged, 0x021FC6F8)
DECLARE_EVENT_SOURCE(MissionBoard_MissionEntryPressed, 0x021FC788)
DECLARE_EVENT_SOURCE(MonocleMenu_Bioscan, 0x02204508)
DECLARE_EVENT_SOURCE(MonocleMenu_FastTravel, 0x02204598)
DECLARE_EVENT_SOURCE(MonocleMenu_Harvest, 0x02204628)
DECLARE_EVENT_SOURCE(MonocleMenu_Initialize, 0x022046B8)
DECLARE_EVENT_SOURCE(MonocleMenu_Outpost, 0x022047EC)
DECLARE_EVENT_SOURCE(MonocleMenu_PhotoMode, 0x0220487C)
DECLARE_EVENT_SOURCE(MonocleMenu_Shutdown, 0x0220490C)
DECLARE_EVENT_SOURCE(MonocleMenu_SocialSpell, 0x0220499C)
DECLARE_EVENT_SOURCE(MonocleMenu_StartContainerView, 0x02204A2C)
DECLARE_EVENT_SOURCE(MonocleMenu_StopContainerView, 0x02204ABC)
DECLARE_EVENT_SOURCE(MonocleMenu_SurfaceMap, 0x02204B4C)
DECLARE_EVENT_SOURCE(MonocleMenu_UseListScrollControls, 0x02204BDC)
DECLARE_EVENT_SOURCE(MonocleMenu_ZoomIn, 0x02204C6C)
DECLARE_EVENT_SOURCE(MonocleMenu_ZoomOut, 0x02204CFC)
DECLARE_EVENT_SOURCE(PhotoMode_InitializeCategory, 0x0220A61C)
DECLARE_EVENT_SOURCE(PhotoMode_ResetToDefaults, 0x0220A74C)
DECLARE_EVENT_SOURCE(PhotoMode_SliderChanged, 0x0220A7DC)
DECLARE_EVENT_SOURCE(PhotoMode_StepperChanged, 0x0220A86C)
DECLARE_EVENT_SOURCE(PhotoMode_TakeSnapshot, 0x0220A8FC)
DECLARE_EVENT_SOURCE(PhotoMode_ToggleHelmet, 0x0220A98C)
DECLARE_EVENT_SOURCE(PhotoMode_ToggleUI, 0x0220AA1C)
DECLARE_EVENT_SOURCE(PickpocketMenu_OnItemSelect, 0x02213464)
DECLARE_EVENT_SOURCE(ResearchMenu_AddMaterial, 0x022188D8)
DECLARE_EVENT_SOURCE(ResearchMenu_CategorySelected, 0x02218968)
DECLARE_EVENT_SOURCE(ResearchMenu_ExitMenu, 0x022189F8)
DECLARE_EVENT_SOURCE(ResearchMenu_HideModel, 0x02218A88)
DECLARE_EVENT_SOURCE(ResearchMenu_PreviewProject, 0x02218B18)
DECLARE_EVENT_SOURCE(ResearchMenu_ProjectViewed, 0x02218BA8)
DECLARE_EVENT_SOURCE(ResearchMenu_SetInspectControls, 0x02218C38)
DECLARE_EVENT_SOURCE(ResearchMenu_ToggleTrackingProject, 0x02218CC8)
DECLARE_EVENT_SOURCE(UnlockedTerminalElementEvent, 0x0222ACC8)
DECLARE_EVENT_SOURCE(SecurityMenu_BackOutKey, 0x0222AD58)
DECLARE_EVENT_SOURCE(SecurityMenu_CloseMenu, 0x0222ADE8)
DECLARE_EVENT_SOURCE(SecurityMenu_ConfirmExit, 0x0222AE78)
DECLARE_EVENT_SOURCE(SecurityMenu_EliminateUnusedKeys, 0x0222AF08)
DECLARE_EVENT_SOURCE(SecurityMenu_GetRingHint, 0x0222AF98)
DECLARE_EVENT_SOURCE(SecurityMenu_SelectNewKey, 0x0222B028)
DECLARE_EVENT_SOURCE(SecurityMenu_TryUseKey, 0x0222B0B8)
DECLARE_EVENT_SOURCE(ShipCrewAssignMenu_Assign, 0x0222F074)
DECLARE_EVENT_SOURCE(ShipCrewAssignMenu_Unassign, 0x0222F104)
DECLARE_EVENT_SOURCE(ShipCrewMenu_ViewedItem, 0x0222F194)
DECLARE_EVENT_SOURCE(Refuel_Accept, 0x02231034)
DECLARE_EVENT_SOURCE(Refuel_Cancel, 0x022310C4)
DECLARE_EVENT_SOURCE(SkillsMenu_Accept, 0x02237B58)
DECLARE_EVENT_SOURCE(SkillsMenu_AddPatch, 0x02237BE8)
DECLARE_EVENT_SOURCE(SkillsMenu_Cancel, 0x02237C78)
DECLARE_EVENT_SOURCE(SkillsMenu_ChangeCursorVisibility, 0x02237D08)
DECLARE_EVENT_SOURCE(SkillsMenu_SaveLastCategory, 0x02237D98)
DECLARE_EVENT_SOURCE(BSChargenAPI::BIDataUtils::MenuClosedEvent, 0x0225C68C)
DECLARE_EVENT_SOURCE(BSChargenAPI::BIDataUtils::PresetNPCChangedEvent, 0x0225C71C)
DECLARE_EVENT_SOURCE(CharGen_BrowChange, 0x0225C7AC)
DECLARE_EVENT_SOURCE(CharGen_BrowColorChange, 0x0225C83C)
DECLARE_EVENT_SOURCE(CharGen_CancelTextEntry, 0x0225C8CC)
DECLARE_EVENT_SOURCE(CharGen_CloseMenu, 0x0225C95C)
DECLARE_EVENT_SOURCE(CharGen_CyclePronoun, 0x0225C9EC)
DECLARE_EVENT_SOURCE(CharGen_DirtScarsEtcChange, 0x0225CA7C)
DECLARE_EVENT_SOURCE(CharGen_EndBodyChange, 0x0225CB0C)
DECLARE_EVENT_SOURCE(CharGen_EndTextEntry, 0x0225CB9C)
DECLARE_EVENT_SOURCE(CharGen_EyeColorChange, 0x0225CC2C)
DECLARE_EVENT_SOURCE(CharGen_FacialHairChange, 0x0225CCBC)
DECLARE_EVENT_SOURCE(CharGen_FacialHairColorChange, 0x0225CD4C)
DECLARE_EVENT_SOURCE(CharGen_HairChange, 0x0225CDDC)
DECLARE_EVENT_SOURCE(CharGen_HairColorChange, 0x0225CE6C)
DECLARE_EVENT_SOURCE(CharGen_HeadpartPlusSelectorChange, 0x0225CEFC)
DECLARE_EVENT_SOURCE(CharGen_HeadpartPresetChange, 0x0225CF8C)
DECLARE_EVENT_SOURCE(CharGen_JewelryChange, 0x0225D01C)
DECLARE_EVENT_SOURCE(CharGen_JewelryColorChange, 0x0225D0AC)
DECLARE_EVENT_SOURCE(CharGen_MakeupChange, 0x0225D13C)
DECLARE_EVENT_SOURCE(CharGen_MarkingsChange, 0x0225D1CC)
DECLARE_EVENT_SOURCE(CharGen_PostBlendColorOptionChange, 0x0225D25C)
DECLARE_EVENT_SOURCE(CharGen_PostBlendFaceChange, 0x0225D2EC)
DECLARE_EVENT_SOURCE(CharGen_PostBlendIntensityChange, 0x0225D37C)
DECLARE_EVENT_SOURCE(CharGen_PresetChange, 0x0225D40C)
DECLARE_EVENT_SOURCE(CharGen_RollOffLocomotion, 0x0225D49C)
DECLARE_EVENT_SOURCE(CharGen_RollOnLocomotion, 0x0225D52C)
DECLARE_EVENT_SOURCE(CharGen_RotatePaperdoll, 0x0225D5BC)
DECLARE_EVENT_SOURCE(CharGen_SetAdditionalSlider, 0x0225D64C)
DECLARE_EVENT_SOURCE(CharGen_SetBackground, 0x0225D6DC)
DECLARE_EVENT_SOURCE(CharGen_SetBlockInputUnderPopup, 0x0225D76C)
DECLARE_EVENT_SOURCE(CharGen_SetBodyValues, 0x0225D7FC)
DECLARE_EVENT_SOURCE(CharGen_SetCameraPosition, 0x0225D88C)
DECLARE_EVENT_SOURCE(CharGen_SetPronoun, 0x0225D91C)
DECLARE_EVENT_SOURCE(CharGen_SetSex, 0x0225D9AC)
DECLARE_EVENT_SOURCE(CharGen_SetSlider, 0x0225DA3C)
DECLARE_EVENT_SOURCE(CharGen_SetTrait, 0x0225DACC)
DECLARE_EVENT_SOURCE(CharGen_ShowChooseBackgroundMessage, 0x0225DB5C)
DECLARE_EVENT_SOURCE(CharGen_ShowPlayerRenameMessage, 0x0225DBEC)
DECLARE_EVENT_SOURCE(CharGen_SkintoneChange, 0x0225DC7C)
DECLARE_EVENT_SOURCE(CharGen_StartBodyChange, 0x0225DD0C)
DECLARE_EVENT_SOURCE(CharGen_StartTextEntry, 0x0225DD9C)
DECLARE_EVENT_SOURCE(CharGen_SwitchBodyType, 0x0225DE2C)
DECLARE_EVENT_SOURCE(CharGen_SwitchLocomotion, 0x0225DEBC)
DECLARE_EVENT_SOURCE(CharGen_TeethChange, 0x0225DF4C)
DECLARE_EVENT_SOURCE(CharGen_TeethRollOff, 0x0225DFDC)
DECLARE_EVENT_SOURCE(CharGen_TeethRollOn, 0x0225E06C)
DECLARE_EVENT_SOURCE(CharGen_ToggleMarking, 0x0225E0FC)
DECLARE_EVENT_SOURCE(CharGen_TogglePreviewHabSuit, 0x0225E18C)
DECLARE_EVENT_SOURCE(UIMenuChargenMenuDisablePaperdoll, 0x0225E21C)
DECLARE_EVENT_SOURCE(DataMenu_CloseMenu, 0x02265318)
DECLARE_EVENT_SOURCE(DataMenu_ClosedForSubMenu, 0x022653A8)
DECLARE_EVENT_SOURCE(DataMenu_Missions, 0x02265438)
DECLARE_EVENT_SOURCE(DataMenu_PlotToLocation, 0x0226556C)
DECLARE_EVENT_SOURCE(DataMenu_Reopened, 0x022655FC)
DECLARE_EVENT_SOURCE(DataMenu_SelectedAttributesMenu, 0x0226568C)
DECLARE_EVENT_SOURCE(DataMenu_SelectedInventoryMenu, 0x0226571C)
DECLARE_EVENT_SOURCE(DataMenu_SelectedMapMenu, 0x022657AC)
DECLARE_EVENT_SOURCE(DataMenu_SelectedPowersMenu, 0x0226583C)
DECLARE_EVENT_SOURCE(DataMenu_SelectedShipMenu, 0x022658CC)
DECLARE_EVENT_SOURCE(DataMenu_SelectedStatusMenu, 0x0226595C)
DECLARE_EVENT_SOURCE(DataMenu_SetMenuForQuickEntry, 0x022659EC)
DECLARE_EVENT_SOURCE(DataMenu_SetPaperDollActive, 0x02265A7C)
DECLARE_EVENT_SOURCE(PauseMenu_ActionCanceled, 0x0226FCC4)
DECLARE_EVENT_SOURCE(PauseMenu_ConfirmAction, 0x0226FD54)
DECLARE_EVENT_SOURCE(PauseMenu_ConfirmLoad, 0x0226FDE4)
DECLARE_EVENT_SOURCE(PauseMenu_ConfirmSave, 0x0226FE74)
DECLARE_EVENT_SOURCE(PauseMenu_DeleteSave, 0x0226FF04)
DECLARE_EVENT_SOURCE(PauseMenu_QuitToDesktop, 0x0226FF94)
DECLARE_EVENT_SOURCE(PauseMenu_SetCharacter, 0x02270024)
DECLARE_EVENT_SOURCE(PauseMenu_StartAction, 0x022700B4)
DECLARE_EVENT_SOURCE(PauseMenu_StartLoad, 0x02270144)
DECLARE_EVENT_SOURCE(PauseMenu_UploadSave, 0x022701D4)
DECLARE_EVENT_SOURCE(PlayBink_CloseMenu, 0x022711B0)
DECLARE_EVENT_SOURCE(Spaceship::GravJumpEvent, 0x02276E04)
DECLARE_EVENT_SOURCE(Spaceship::LandedSetEvent, 0x02276E94)
DECLARE_EVENT_SOURCE(Reticle_OnLongAnimFinished, 0x02276F24)
DECLARE_EVENT_SOURCE(ShipHudQuickContainer_TransferItem, 0x02276FB4)
DECLARE_EVENT_SOURCE(ShipHud_AbortJump, 0x02277044)
DECLARE_EVENT_SOURCE(ShipHud_DockRequested, 0x022770D4)
DECLARE_EVENT_SOURCE(ShipHud_HailShip, 0x02277164)
DECLARE_EVENT_SOURCE(ShipHud_UpdateTargetPanelRect, 0x022771F4)
DECLARE_EVENT_SOURCE(TakeoffMenu_CloseMenu, 0x02277284)
DECLARE_EVENT_SOURCE(TakeoffMenu_ExitShip, 0x02277314)
DECLARE_EVENT_SOURCE(TakeoffMenu_Launch, 0x022773A4)
DECLARE_EVENT_SOURCE(StarMapMenu_LandingInputInProgress, 0x022971C0)
DECLARE_EVENT_SOURCE(StarMapMenu_MarkerGroupContainerVisibilityChanged, 0x02297250)
DECLARE_EVENT_SOURCE(StarMapMenu_MarkerGroupEntryClicked, 0x022972E0)
DECLARE_EVENT_SOURCE(StarMapMenu_MarkerGroupEntryHoverChanged, 0x02297370)
DECLARE_EVENT_SOURCE(StarMapMenu_ScanPlanet, 0x02297400)
DECLARE_EVENT_SOURCE(StarMapMenu_SelectedLandingSite, 0x02297490)
DECLARE_EVENT_SOURCE(StarMapMenu_SelectedLandingSiteFailed, 0x02297520)
DECLARE_EVENT_SOURCE(StarMapMenu_ShowRealCursor, 0x022975B0)
DECLARE_EVENT_SOURCE(StarMapMenu_QuickSelectChange, 0x022ACA84)
DECLARE_EVENT_SOURCE(StarMapMenu_Galaxy_FocusSystem, 0x022BE5A0)
DECLARE_EVENT_SOURCE(StarMapMenu_OnGalaxyViewInitialized, 0x022BE630)
DECLARE_EVENT_SOURCE(StarMapMenu_ExecuteRoute, 0x022C8E58)
DECLARE_EVENT_SOURCE(StarMapMenu_OnCancel, 0x022C8EE8)
DECLARE_EVENT_SOURCE(StarMapMenu_OnClearRoute, 0x022C8F78)
DECLARE_EVENT_SOURCE(StarMapMenu_OnExitStarMap, 0x022C9008)
DECLARE_EVENT_SOURCE(StarMapMenu_OnHintButtonClicked, 0x022C9098)
DECLARE_EVENT_SOURCE(StarMapMenu_OnOutpostEntrySelected, 0x022C9128)
DECLARE_EVENT_SOURCE(StarMapMenu_ReadyToClose, 0x022C91B8)
DECLARE_EVENT_SOURCE(SurfaceMapMenu_MarkerClicked, 0x022E8868)
DECLARE_EVENT_SOURCE(SurfaceMapMenu_TryPlaceCustomMarker, 0x022E88F8)
DECLARE_EVENT_SOURCE(TerminalMenu_CancelEvent, 0x02303520)
DECLARE_EVENT_SOURCE(Terminal_CloseAllViews, 0x023035B0)
DECLARE_EVENT_SOURCE(Terminal_CloseTopView, 0x02303640)
DECLARE_EVENT_SOURCE(Terminal_CloseView, 0x023036D0)
DECLARE_EVENT_SOURCE(Terminal_MenuItemClick, 0x02303760)
DECLARE_EVENT_SOURCE(TestMenu_DoAction, 0x0230F518)
DECLARE_EVENT_SOURCE(TestMenu_ExitMenu, 0x0230F5A8)
DECLARE_EVENT_SOURCE(TestMenu_ShowImages, 0x0230F638)
DECLARE_EVENT_SOURCE(TestMenu_ShowResources, 0x0230F6C8)
DECLARE_EVENT_SOURCE(TestMenu_TestAll, 0x0230F758)
DECLARE_EVENT_SOURCE(TextInputMenu_EndEditText, 0x023136C4)
DECLARE_EVENT_SOURCE(TextInputMenu_InputCanceled, 0x02313754)
DECLARE_EVENT_SOURCE(TextInputMenu_StartEditText, 0x023137E4)
DECLARE_EVENT_SOURCE(CraftingMenu_Highlight3D, 0x02314AB4)
DECLARE_EVENT_SOURCE(CraftingMenu_RevertHighlight, 0x02314B44)
DECLARE_EVENT_SOURCE(WorkshopBuilderMenu_ChangeBuildItem, 0x023171A8)
DECLARE_EVENT_SOURCE(WorkshopBuilderMenu_SelectedItem, 0x02317238)
DECLARE_EVENT_SOURCE(WorkshopBuilderMenu_ToggleTracking, 0x023172C8)
DECLARE_EVENT_SOURCE(WorkshopMenu_AttemptBuild, 0x0231FB34)
DECLARE_EVENT_SOURCE(WorkshopMenu_CancelAction, 0x0231FBC4)
DECLARE_EVENT_SOURCE(WorkshopMenu_ChangeVariant, 0x0231FC54)
DECLARE_EVENT_SOURCE(WorkshopMenu_ConnectionEvent, 0x0231FCE4)
DECLARE_EVENT_SOURCE(WorkshopMenu_ExitMenu, 0x0231FD74)
DECLARE_EVENT_SOURCE(WorkshopMenu_MessageCallback, 0x0231FE04)
DECLARE_EVENT_SOURCE(WorkshopMenu_SelectedCategory, 0x0231FE94)
DECLARE_EVENT_SOURCE(WorkshopMenu_SelectedGridObject, 0x0231FF24)
DECLARE_EVENT_SOURCE(WorkshopMenu_ShowExtras, 0x0231FFB4)
DECLARE_EVENT_SOURCE(WorkshopMenu_SwitchMode, 0x02320044)
DECLARE_EVENT_SOURCE(WorkshopMenu_ToggleDistance, 0x023200D4)
DECLARE_EVENT_SOURCE(WorkshopMenu_ToggleTracking, 0x02320164)
DECLARE_EVENT_SOURCE(WorkshopMenu_ToggleView, 0x023201F4)
DECLARE_EVENT_SOURCE(WorkshopQuickMenu_ConfirmAction, 0x02321C44)
DECLARE_EVENT_SOURCE(WorkshopQuickMenu_ExitMenu, 0x02321CD4)
DECLARE_EVENT_SOURCE(WorkshopTargetMenu_TargetHovered, 0x02328210)
DECLARE_EVENT_SOURCE(WorkshopTargetMenu_TargetPicked, 0x023282A0)
DECLARE_EVENT_SOURCE(WorkshopActionButton_HoldFinished, 0x0233F354)
DECLARE_EVENT_SOURCE(WorkshopActionButton_HoldStopped, 0x0233F3E4)
DECLARE_EVENT_SOURCE(WorkshopShared_SetActionHandles, 0x0233F474)
DECLARE_EVENT_SOURCE(WorkshopShared_StartAction, 0x0233F504)
DECLARE_EVENT_SOURCE(ModelReferenceEffectEvents::ReferenceEffectFinished, 0x0235F56C)
DECLARE_EVENT_SOURCE(BGSAcousticSpaceListener::StackChangedEvent, 0x023738A4)
DECLARE_EVENT_SOURCE(SpaceshipBIEvents::ShipPowerAllocationBIEventSent, 0x0238B7C0)
DECLARE_EVENT_SOURCE(BGSActorDeathEvent, 0x0239A09C)
DECLARE_EVENT_SOURCE(Research::ResearchProgressEvent, 0x023EAFBC)
DECLARE_EVENT_SOURCE(BSTValueRequestEvent<PlayerAutoAimActorEvent>, 0x026159A8)
DECLARE_EVENT_SOURCE(PlayerInCombatChangeEvent, 0x0262E510)
DECLARE_EVENT_SOURCE(BlurEvent, 0x028FF960)
DECLARE_EVENT_SOURCE(ContainerMenu_HideModel, 0x02921A20)
DECLARE_EVENT_SOURCE(ContainerMenu_Jettison, 0x02921AB0)
DECLARE_EVENT_SOURCE(ContainerMenu_LoadModel, 0x02921B40)
DECLARE_EVENT_SOURCE(ContainerMenu_OpenRefuelMenu, 0x02921BD0)
DECLARE_EVENT_SOURCE(ContainerMenu_SetMouseOverModel, 0x02921C60)
DECLARE_EVENT_SOURCE(ContainerMenu_TakeAll, 0x02921CF0)
DECLARE_EVENT_SOURCE(ContainerMenu_ToggleEquip, 0x02921D80)
DECLARE_EVENT_SOURCE(ContainerMenu_TransferItem, 0x02921EAC)
DECLARE_EVENT_SOURCE(DialogueMenu_OnDialogueSelect, 0x029259B0)
DECLARE_EVENT_SOURCE(DialogueMenu_OnListVisibilityChange, 0x02925A40)
DECLARE_EVENT_SOURCE(DialogueMenu_OnPersuasionAutoWin, 0x02925AD0)
DECLARE_EVENT_SOURCE(DialogueMenu_OnScriptedDialogueSelect, 0x02925B60)
DECLARE_EVENT_SOURCE(DialogueMenu_RequestExit, 0x02925BF0)
DECLARE_EVENT_SOURCE(DialogueMenu_RequestSkipDialogue, 0x02925C80)
DECLARE_EVENT_SOURCE(BSTValueRequestEvent<FaderMenuDisplayState>, 0x02926B40)
DECLARE_EVENT_SOURCE(FavoritesMenu_AssignQuickkey, 0x02933410)
DECLARE_EVENT_SOURCE(FavoritesMenu_UseQuickkey, 0x029334A0)
DECLARE_EVENT_SOURCE(LoadingMenu_RefreshText, 0x029373A0)
DECLARE_EVENT_SOURCE(MainMenu_ActionCanceled, 0x0293AAB0)
DECLARE_EVENT_SOURCE(MainMenu_ActionConfirmed, 0x0293AB40)
DECLARE_EVENT_SOURCE(MainMenu_ConfirmLoad, 0x0293ABD0)
DECLARE_EVENT_SOURCE(MainMenu_DeleteSave, 0x0293AC60)
DECLARE_EVENT_SOURCE(MainMenu_SetCharacter, 0x0293AD8C)
DECLARE_EVENT_SOURCE(MainMenu_StartAction, 0x0293AE1C)
DECLARE_EVENT_SOURCE(MainMenu_StartLoad, 0x0293AEAC)
DECLARE_EVENT_SOURCE(MainMenu_UploadSave, 0x0293AF3C)
DECLARE_EVENT_SOURCE(BGSAppPausedEvent, 0x0293C7EC)
DECLARE_EVENT_SOURCE(MessageBoxMenu_OnBackOut, 0x02941B00)
DECLARE_EVENT_SOURCE(MessageBoxMenu_OnButtonPress, 0x02941B90)
DECLARE_EVENT_SOURCE(MessageBoxMenu_OnScriptedButtonPress, 0x02941C20)
DECLARE_EVENT_SOURCE(SleepWaitMenu_InterruptRest, 0x02946878)
DECLARE_EVENT_SOURCE(SleepWaitMenu_StartRest, 0x02946908)
DECLARE_EVENT_SOURCE(Spaceship::BoughtEvent, 0x02C1B790)
DECLARE_EVENT_SOURCE(Spaceship::ContrabandScanWarningEvent, 0x02C1B820)
DECLARE_EVENT_SOURCE(Spaceship::DockEvent, 0x02C1B8B0)
DECLARE_EVENT_SOURCE(Spaceship::DynamicNavmeshCompleted, 0x02C1B940)
DECLARE_EVENT_SOURCE(Spaceship::FarTravelEvent, 0x02C1B9D0)
DECLARE_EVENT_SOURCE(Spaceship::LandingEvent, 0x02C1BA60)
DECLARE_EVENT_SOURCE(Spaceship::PlanetScanEvent, 0x02C1BAF0)
DECLARE_EVENT_SOURCE(Spaceship::RampDownEvent, 0x02C1BB80)
DECLARE_EVENT_SOURCE(Spaceship::RefueledEvent, 0x02C1BC10)
DECLARE_EVENT_SOURCE(Spaceship::RegisteredEvent, 0x02C1BCA0)
DECLARE_EVENT_SOURCE(Spaceship::ShieldEvent, 0x02C1BD30)
DECLARE_EVENT_SOURCE(Spaceship::ShipAddedEvent, 0x02C1BDC0)
DECLARE_EVENT_SOURCE(Spaceship::ShipCollisionEvent, 0x02C1BE50)
DECLARE_EVENT_SOURCE(Spaceship::ShipCustomizedEvent, 0x02C1BEE0)
DECLARE_EVENT_SOURCE(Spaceship::SoldEvent, 0x02C1BF70)
DECLARE_EVENT_SOURCE(Spaceship::SystemDamagedEvent, 0x02C1C000)
DECLARE_EVENT_SOURCE(Spaceship::SystemPowerAllocationEvent, 0x02C1C090)
DECLARE_EVENT_SOURCE(Spaceship::SystemPowerChangeEvent, 0x02C1C120)
DECLARE_EVENT_SOURCE(Spaceship::SystemRepairedBIEvent, 0x02C1C1B0)
DECLARE_EVENT_SOURCE(Spaceship::SystemRepairedEvent, 0x02C1C240)
DECLARE_EVENT_SOURCE(Spaceship::TakeDamagEvent, 0x02C1C2D0)
DECLARE_EVENT_SOURCE(ContextStackChangedEvent, 0x02D4C71C)
DECLARE_EVENT_SOURCE(UpdateSceneRectEvent, 0x02F3C90C)
DECLARE_EVENT_SOURCE(GameStalledEvent, 0x03108D58)

// more

DECLARE_EVENT_SOURCE(TESCellNavmeshGeneratedEvent, 0x005B0750)
DECLARE_EVENT_SOURCE(TESHitEvent, 0x005B0FE0)
DECLARE_EVENT_SOURCE(FirstThirdPersonSwitch::Event, 0x005B19D0)
DECLARE_EVENT_SOURCE(PerkChanged::Event, 0x012A0410)
DECLARE_EVENT_SOURCE(TESHarvestEvent::ItemHarvested, 0x014A5D20)
DECLARE_EVENT_SOURCE(ActivityEvents::ActivityCompletedEvent, 0x014ADFB0)
DECLARE_EVENT_SOURCE(ChallengeCompletedEvent::Event, 0x014B02D0)
DECLARE_EVENT_SOURCE(InventoryItemEvent::Event, 0x014E88A0)
DECLARE_EVENT_SOURCE(BooksRead::Event, 0x018FB220)
DECLARE_EVENT_SOURCE(LocationExplored::Event, 0x01933F10)
DECLARE_EVENT_SOURCE(LocationLinked::Event, 0x01933F80)
DECLARE_EVENT_SOURCE(Activation::Event, 0x019F63D0)
DECLARE_EVENT_SOURCE(ActorCellChangeEvent, 0x01A08370)
DECLARE_EVENT_SOURCE(ActorHeadAttachedEvent, 0x01A083E0)
DECLARE_EVENT_SOURCE(ActorValueEvents::ActorValueChangedEvent, 0x01A08450)
DECLARE_EVENT_SOURCE(AliasChangeEvent, 0x01A084C0)
DECLARE_EVENT_SOURCE(AnimationGraphDependentEvent, 0x01A08530)
DECLARE_EVENT_SOURCE(BGSAffinityEventEvent, 0x01A085A0)
DECLARE_EVENT_SOURCE(BGSCellGridLoadEvent, 0x01A08610)
DECLARE_EVENT_SOURCE(BGSEventProcessedEvent, 0x01A08680)
DECLARE_EVENT_SOURCE(BGSHavokWorldCreatedEvent, 0x01A086F0)
DECLARE_EVENT_SOURCE(BGSLocationLoadedEvent, 0x01A08760)
DECLARE_EVENT_SOURCE(BGSOnPlayerCompanionDismiss, 0x01A087D0)
DECLARE_EVENT_SOURCE(BGSOnPlayerCompleteResearchEvent, 0x01A08840)
DECLARE_EVENT_SOURCE(BGSOnPlayerCraftItemEvent, 0x01A088B0)
DECLARE_EVENT_SOURCE(BGSOnPlayerCreateRobotEvent, 0x01A08920)
DECLARE_EVENT_SOURCE(BGSOnPlayerEnterVertibirdEvent, 0x01A08990)
DECLARE_EVENT_SOURCE(BGSOnPlayerFallLongDistances, 0x01A08A00)
DECLARE_EVENT_SOURCE(BGSOnPlayerFireWeaponEvent, 0x01A08A70)
DECLARE_EVENT_SOURCE(BGSOnPlayerHealTeammateEvent, 0x01A08AE0)
DECLARE_EVENT_SOURCE(BGSOnPlayerLoiteringBeginEvent, 0x01A08B50)
DECLARE_EVENT_SOURCE(BGSOnPlayerLoiteringEndEvent, 0x01A08BC0)
DECLARE_EVENT_SOURCE(BGSOnPlayerModArmorWeaponEvent, 0x01A08C30)
DECLARE_EVENT_SOURCE(BGSOnPlayerModRobotEvent, 0x01A08CA0)
DECLARE_EVENT_SOURCE(BGSOnPlayerSwimmingEvent, 0x01A08D10)
DECLARE_EVENT_SOURCE(BGSOnPlayerUseWorkBenchEvent, 0x01A08D80)
DECLARE_EVENT_SOURCE(BGSOnSpeechChallengeAvailable, 0x01A08DF0)
DECLARE_EVENT_SOURCE(BGSRadiationDamageEvent, 0x01A08E60)
DECLARE_EVENT_SOURCE(BuilderMenuSelectEvent, 0x01A08ED0)
DECLARE_EVENT_SOURCE(CrewAssignedEvent, 0x01A08F40)
DECLARE_EVENT_SOURCE(CrewDismissedEvent, 0x01A08FB0)
DECLARE_EVENT_SOURCE(DestroyedEvent, 0x01A09020)
DECLARE_EVENT_SOURCE(HomeShipSetEvent, 0x01A091E0)
DECLARE_EVENT_SOURCE(InstantReferenceInteractionEvent, 0x01A09250)
DECLARE_EVENT_SOURCE(ItemConsumedEvent, 0x01A092C0)
DECLARE_EVENT_SOURCE(ItemSwappedEvent, 0x01A09330)
DECLARE_EVENT_SOURCE(LockPickedEvent, 0x01A093A0)
DECLARE_EVENT_SOURCE(MapMarkerDiscoveredEvent, 0x01A09410)
DECLARE_EVENT_SOURCE(ObjectScannedEvent, 0x01A09480)
DECLARE_EVENT_SOURCE(PlayerAddItemEvent, 0x01A094F0)
DECLARE_EVENT_SOURCE(PlayerArrestedEvent, 0x01A09560)
DECLARE_EVENT_SOURCE(PlayerAssaultActorEvent, 0x01A095D0)
DECLARE_EVENT_SOURCE(PlayerBuyShipEvent, 0x01A09640)
DECLARE_EVENT_SOURCE(PlayerCrimeGoldEvent, 0x01A096B0)
DECLARE_EVENT_SOURCE(PlayerFailedPlotRouteEvent, 0x01A09720)
DECLARE_EVENT_SOURCE(PlayerJailEvent, 0x01A09790)
DECLARE_EVENT_SOURCE(PlayerModifiedShipEvent, 0x01A09800)
DECLARE_EVENT_SOURCE(PlayerMurderActorEvent, 0x01A09870)
DECLARE_EVENT_SOURCE(PlayerPayFineEvent, 0x01A098E0)
DECLARE_EVENT_SOURCE(PlayerPlanetSurveyCompleteEvent, 0x01A09950)
DECLARE_EVENT_SOURCE(PlayerPlanetSurveyProgressEvent, 0x01A099C0)
DECLARE_EVENT_SOURCE(PlayerSellShipEvent, 0x01A09A30)
DECLARE_EVENT_SOURCE(PlayerTrespassEvent, 0x01A09AA0)
DECLARE_EVENT_SOURCE(QuickContainerOpenedEvent, 0x01A09B10)
DECLARE_EVENT_SOURCE(RefControlChangedEvent, 0x01A09B80)
DECLARE_EVENT_SOURCE(ReferenceDestroyedEvent, 0x01A09BF0)
DECLARE_EVENT_SOURCE(SpeechChallengeCompletionEvent, 0x01A09C60)
DECLARE_EVENT_SOURCE(TESActivateEvent, 0x01A09CD0)
DECLARE_EVENT_SOURCE(TESActiveEffectApplyFinishEvent, 0x01A09D40)
DECLARE_EVENT_SOURCE(TESActiveEffectRemovedEvent, 0x01A09DB0)
DECLARE_EVENT_SOURCE(TESActorActivatedRefEvent, 0x01A09E20)
DECLARE_EVENT_SOURCE(TESActorLocationChangeEvent, 0x01A09E90)
DECLARE_EVENT_SOURCE(TESBookReadEvent, 0x01A09F00)
DECLARE_EVENT_SOURCE(TESCellCriticalRefsAttachedEvent, 0x01A09F70)
DECLARE_EVENT_SOURCE(TESCellFullyLoadedEvent, 0x01A09FE0)
DECLARE_EVENT_SOURCE(TESCellGravityChangeEvent, 0x01A0A050)
DECLARE_EVENT_SOURCE(TESCellReadyToApplyDecalsEvent, 0x01A0A0C0)
DECLARE_EVENT_SOURCE(TESCellReference3DAttachEvent, 0x01A0A130)
DECLARE_EVENT_SOURCE(TESCellReferenceAttachDetachEvent, 0x01A0A1A0)
DECLARE_EVENT_SOURCE(TESCombatEvent, 0x01A0A210)
DECLARE_EVENT_SOURCE(TESCombatListEvent, 0x01A0A280)
DECLARE_EVENT_SOURCE(TESCommandModeCompleteCommandEvent, 0x01A0A2F0)
DECLARE_EVENT_SOURCE(TESCommandModeEnterEvent, 0x01A0A360)
DECLARE_EVENT_SOURCE(TESCommandModeExitEvent, 0x01A0A3D0)
DECLARE_EVENT_SOURCE(TESCommandModeGiveCommandEvent, 0x01A0A440)
DECLARE_EVENT_SOURCE(TESConsciousnessEvent, 0x01A0A4B0)
DECLARE_EVENT_SOURCE(TESContainerChangedEvent, 0x01A0A520)
DECLARE_EVENT_SOURCE(TESDeathEvent, 0x01A0A590)
DECLARE_EVENT_SOURCE(TESDeferredKillEvent, 0x01A0A600)
DECLARE_EVENT_SOURCE(TESDestructionStageChangedEvent, 0x01A0A670)
DECLARE_EVENT_SOURCE(TESEnterBleedoutEvent, 0x01A0A6E0)
DECLARE_EVENT_SOURCE(TESEnterSneakingEvent, 0x01A0A750)
DECLARE_EVENT_SOURCE(TESEquipEvent, 0x01A0A7C0)
DECLARE_EVENT_SOURCE(TESEscortWaitStartEvent, 0x01A0A830)
DECLARE_EVENT_SOURCE(TESEscortWaitStopEvent, 0x01A0A8A0)
DECLARE_EVENT_SOURCE(TESExitBleedoutEvent, 0x01A0A910)
DECLARE_EVENT_SOURCE(TESExitFurnitureEvent, 0x01A0A980)
DECLARE_EVENT_SOURCE(TESFormDeleteEvent, 0x01A0A9F0)
DECLARE_EVENT_SOURCE(TESFormIDRemapEvent, 0x01A0AA60)
DECLARE_EVENT_SOURCE(TESFurnitureEvent, 0x01A0AAD0)
DECLARE_EVENT_SOURCE(TESGrabReleaseEvent, 0x01A0AB40)
DECLARE_EVENT_SOURCE(TESInitScriptEvent, 0x01A0ABB0)
DECLARE_EVENT_SOURCE(TESLimbCrippleEvent, 0x01A0AC20)
DECLARE_EVENT_SOURCE(TESLoadGameEvent, 0x01A0AC90)
DECLARE_EVENT_SOURCE(TESLocationExploredEvent, 0x01A0AD00)
DECLARE_EVENT_SOURCE(TESLockChangedEvent, 0x01A0AD70)
DECLARE_EVENT_SOURCE(TESMagicEffectApplyEvent, 0x01A0ADE0)
DECLARE_EVENT_SOURCE(TESMissionAcceptedEvent, 0x01A0AE50)
DECLARE_EVENT_SOURCE(TESObjectLoadedEvent, 0x01A0AEC0)
DECLARE_EVENT_SOURCE(TESObjectREFRTranslationEvent, 0x01A0AF30)
DECLARE_EVENT_SOURCE(TESOnPCDialogueTargetEvent, 0x01A0AFA0)
DECLARE_EVENT_SOURCE(TESOpenCloseEvent, 0x01A0B010)
DECLARE_EVENT_SOURCE(TESPackageEvent, 0x01A0B080)
DECLARE_EVENT_SOURCE(TESPerkEntryRunEvent, 0x01A0B0F0)
DECLARE_EVENT_SOURCE(TESPickNewIdleEvent, 0x01A0B160)
DECLARE_EVENT_SOURCE(TESPickpocketFailedEvent, 0x01A0B1D0)
DECLARE_EVENT_SOURCE(TESPlayerActiveEffectEvent, 0x01A0B240)
DECLARE_EVENT_SOURCE(TESPlayerFollowerWarpEvent, 0x01A0B2B0)
DECLARE_EVENT_SOURCE(TESQuestInitEvent, 0x01A0B320)
DECLARE_EVENT_SOURCE(TESQuestRejectedEvent, 0x01A0B390)
DECLARE_EVENT_SOURCE(TESQuestStageEvent, 0x01A0B400)
DECLARE_EVENT_SOURCE(TESQuestStageItemDoneEvent, 0x01A0B470)
DECLARE_EVENT_SOURCE(TESQuestStartStopEvent, 0x01A0B4E0)
DECLARE_EVENT_SOURCE(TESQuestTimerEvent, 0x01A0B550)
DECLARE_EVENT_SOURCE(TESResetEvent, 0x01A0B5C0)
DECLARE_EVENT_SOURCE(TESResolveNPCTemplatesEvent, 0x01A0B630)
DECLARE_EVENT_SOURCE(TESSceneActionEvent, 0x01A0B6A0)
DECLARE_EVENT_SOURCE(TESSceneEvent, 0x01A0B710)
DECLARE_EVENT_SOURCE(TESScenePhaseEvent, 0x01A0B780)
DECLARE_EVENT_SOURCE(TESSellEvent, 0x01A0B7F0)
DECLARE_EVENT_SOURCE(TESSleepStartEvent, 0x01A0B860)
DECLARE_EVENT_SOURCE(TESSleepStopEvent, 0x01A0B8D0)
DECLARE_EVENT_SOURCE(TESSpellCastEvent, 0x01A0B940)
DECLARE_EVENT_SOURCE(TESSpellCastFailureEvent, 0x01A0B9B0)
DECLARE_EVENT_SOURCE(TESSwitchRaceCompleteEvent, 0x01A0BA20)
DECLARE_EVENT_SOURCE(TESTopicInfoEvent, 0x01A0BA90)
DECLARE_EVENT_SOURCE(TESTrackedStatsEvent, 0x01A0BB00)
DECLARE_EVENT_SOURCE(TESTrapHitEvent, 0x01A0BB70)
DECLARE_EVENT_SOURCE(TESTriggerEnterEvent, 0x01A0BBE0)
DECLARE_EVENT_SOURCE(TESTriggerEvent, 0x01A0BC50)
DECLARE_EVENT_SOURCE(TESTriggerLeaveEvent, 0x01A0BCC0)
DECLARE_EVENT_SOURCE(TESUniqueIDChangeEvent, 0x01A0BD30)
DECLARE_EVENT_SOURCE(TESWaitStartEvent, 0x01A0BDA0)
DECLARE_EVENT_SOURCE(TESWaitStopEvent, 0x01A0BE10)
DECLARE_EVENT_SOURCE(TerminalMenuMenuItemRunEvent, 0x01A0BE80)
DECLARE_EVENT_SOURCE(TerminalMenuOnEnterEvent, 0x01A0BEF0)
DECLARE_EVENT_SOURCE(WorkshopNPCTransferEvent, 0x01A0BF60)
DECLARE_EVENT_SOURCE(TESObjectREFRIsReadyForAttachEvent, 0x01A0BFD0)
DECLARE_EVENT_SOURCE(DefaultObjectsReadyEvent::Event, 0x01A378C0)
DECLARE_EVENT_SOURCE(ObjectiveState::Event, 0x01AE1870)
DECLARE_EVENT_SOURCE(QuestStatus::Event, 0x01B430C0)
DECLARE_EVENT_SOURCE(RefillAliasEvent::Event, 0x01B43130)
DECLARE_EVENT_SOURCE(TESQuestEvent::Event, 0x01B431A0)
DECLARE_EVENT_SOURCE(RolloverIsCrimeEvent::Event, 0x020ABC30)
DECLARE_EVENT_SOURCE(HideSubtitleEvent::Event, 0x020B6F00)
DECLARE_EVENT_SOURCE(ShowSubtitleEvent::Event, 0x020B6F70)
DECLARE_EVENT_SOURCE(MissionMenuStateEvent::Event, 0x021132A0)
DECLARE_EVENT_SOURCE(ClearShipHudTarget::Event, 0x02170F10)
DECLARE_EVENT_SOURCE(TryUpdateShipHudTarget::Event, 0x02170F80)
DECLARE_EVENT_SOURCE(LocationTextEvent::Event, 0x021CB2B0)
DECLARE_EVENT_SOURCE(TraitDiscoveryTextEvent::Event, 0x021CB320)
DECLARE_EVENT_SOURCE(DaysPassed::Event, 0x02455430)
DECLARE_EVENT_SOURCE(HourPassed::Event, 0x024554A0)
DECLARE_EVENT_SOURCE(ActorDamage::Event, 0x02536300)
DECLARE_EVENT_SOURCE(ActorItemEquipped::Event, 0x02536370)
DECLARE_EVENT_SOURCE(ActorKill::Event, 0x025363E0)
DECLARE_EVENT_SOURCE(AssaultCrime::Event, 0x02536450)
DECLARE_EVENT_SOURCE(DisarmedEvent::Event, 0x025364C0)
DECLARE_EVENT_SOURCE(FactionRankChange::Event, 0x02536530)
DECLARE_EVENT_SOURCE(GrandTheftHorse::Event, 0x025365A0)
DECLARE_EVENT_SOURCE(MurderCrime::Event, 0x02536610)
DECLARE_EVENT_SOURCE(PiracyCrime::Event, 0x02536680)
DECLARE_EVENT_SOURCE(Bleedout::Event, 0x025648E0)
DECLARE_EVENT_SOURCE(ContractedDisease::Event, 0x02564950)
DECLARE_EVENT_SOURCE(ReloadWeaponEvent::Event, 0x025649C0)
DECLARE_EVENT_SOURCE(SpellsLearned::Event, 0x02573520)
DECLARE_EVENT_SOURCE(Bounty::Event, 0x02614EC0)
DECLARE_EVENT_SOURCE(ChestLooted::Event, 0x02614F30)
DECLARE_EVENT_SOURCE(CriticalHitEvent::Event, 0x02614FA0)
DECLARE_EVENT_SOURCE(CustomMarkerUpdate::Event, 0x02615010)
DECLARE_EVENT_SOURCE(DaysJailed::Event, 0x02615080)
DECLARE_EVENT_SOURCE(EnteredUnity::Event, 0x026150F0)
DECLARE_EVENT_SOURCE(FinePaid::Event, 0x02615160)
DECLARE_EVENT_SOURCE(ItemCrafted::Event, 0x026151D0)
DECLARE_EVENT_SOURCE(ItemSteal::Event, 0x02615240)
DECLARE_EVENT_SOURCE(JailEscape::Event, 0x026152B0)
DECLARE_EVENT_SOURCE(Jailing::Event, 0x02615320)
DECLARE_EVENT_SOURCE(LevelIncrease::Event, 0x02615390)
DECLARE_EVENT_SOURCE(LocationMarkerArrayUpdate::Event, 0x02615400)
DECLARE_EVENT_SOURCE(PlayerActiveEffectChanged::Event, 0x02615470)
DECLARE_EVENT_SOURCE(PlayerAmmoChanged::Event, 0x026154E0)
DECLARE_EVENT_SOURCE(PlayerCharacterQuestEvent::Event, 0x02615550)
DECLARE_EVENT_SOURCE(PlayerDifficultySettingChanged::Event, 0x026155C0)
DECLARE_EVENT_SOURCE(PlayerFastTravel::Event, 0x02615630)
DECLARE_EVENT_SOURCE(PlayerInDialogueChanged::Event, 0x026156A0)
DECLARE_EVENT_SOURCE(PlayerLifeStateChanged::Event, 0x02615710)
DECLARE_EVENT_SOURCE(PlayerPickpocketSuccess::Event, 0x02615780)
DECLARE_EVENT_SOURCE(PoisonedWeapon::Event, 0x026157F0)
DECLARE_EVENT_SOURCE(TerminalHacked::Event, 0x02615860)
DECLARE_EVENT_SOURCE(TravelMarkerStateChange::Event, 0x026158D0)
DECLARE_EVENT_SOURCE(WeaponAttack::Event, 0x02615940)
DECLARE_EVENT_SOURCE(Trespass::Event, 0x026743E0)
DECLARE_EVENT_SOURCE(VATSEvents::ModeChange, 0x026DE230)
DECLARE_EVENT_SOURCE(VATSCommand, 0x026DE2A0)
DECLARE_EVENT_SOURCE(HoursPassed::Event, 0x02946810)

// other events
DECLARE_EVENT_SOURCE(RadioManager::PipboyTransmitterDetectionEvent, 0x023D9160)
DECLARE_EVENT_SOURCE_EX(XPChange::Event, 0x05DAC340)
DECLARE_EVENT_SOURCE_EX(WeaponFiredEvent, 0x05D9EED8)
DECLARE_EVENT_SOURCE_EX(ActorEquipManagerEvent::Event, 0x0674A9B0)
DECLARE_EVENT_SOURCE_EX(ActorEquipManagerEvent::SpellEvent, 0x0674A9D8)
DECLARE_EVENT_SOURCE_EX(AttachReference::Event, 0x05DAC318)
