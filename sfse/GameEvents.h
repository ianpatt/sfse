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
        DEFINE_MEMBER_FN_1(RegisterSink, void, 0x005C069C, SinkBase* sink);
        DEFINE_MEMBER_FN_1(UnregisterSink, void, 0x005C04B0, SinkBase* sink);
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

DECLARE_EVENT_SOURCE(SnapTemplateUtils::SnapReplaceEvent, 0x0084178C)
DECLARE_EVENT_SOURCE(ImageFixtureEvent_RequestImage, 0x00842A44)
DECLARE_EVENT_SOURCE(ImageFixtureEvent_UnregisterImage, 0x00845940)
DECLARE_EVENT_SOURCE(Spaceship::TakeOffEvent, 0x008487A0)
DECLARE_EVENT_SOURCE(HUDActivityIncreaseEvent, 0x01255B90)
DECLARE_EVENT_SOURCE(AnimationDataCleanupEvent, 0x01276D0C)
DECLARE_EVENT_SOURCE(AnimationDataSetupEvent, 0x01276D9C)
DECLARE_EVENT_SOURCE(EndLoadGameEvent, 0x012C5A64)
DECLARE_EVENT_SOURCE(StartLoadGameEvent, 0x012C5AF4)
DECLARE_EVENT_SOURCE(ShipEditor_SystemSelected, 0x012DC4CC)
DECLARE_EVENT_SOURCE(ShipEditor_PreviewUpgrade, 0x012E2B90)
DECLARE_EVENT_SOURCE(ShipEditor_SelectedUpgrade, 0x012E2C20)
DECLARE_EVENT_SOURCE(RuntimeComponentDBFactory::ReferenceAttach, 0x0131E570)
DECLARE_EVENT_SOURCE(RuntimeComponentDBFactory::ReferenceDetach, 0x0131E600)
DECLARE_EVENT_SOURCE(WeaponGroupAssignmentMenu_ChangeWeaponAssignment, 0x013A2EB4)
DECLARE_EVENT_SOURCE(WeaponGroupAssignmentMenu_OnHintButtonActivated, 0x013A2F44)
DECLARE_EVENT_SOURCE(ShipEditor_OnExitConfirmCancel, 0x013C3514)
DECLARE_EVENT_SOURCE(ShipEditor_OnExitConfirmExit, 0x013C35A4)
DECLARE_EVENT_SOURCE(ShipEditor_OnExitConfirmSaveAndExit, 0x013C3634)
DECLARE_EVENT_SOURCE(ShipEditor_OnFlightCheckTabChanged, 0x013C80D4)
DECLARE_EVENT_SOURCE(ShipEditor_OnWeaponGroupChanged, 0x013C8164)
DECLARE_EVENT_SOURCE(ShipEditor_OnRenameEndEditText, 0x013CDAA0)
DECLARE_EVENT_SOURCE(ShipEditor_OnRenameInputCancelled, 0x013CDB30)
DECLARE_EVENT_SOURCE(ShipEditor_ChangeModuleCategory, 0x013D221C)
DECLARE_EVENT_SOURCE(ShipEditor_PreviewShipPart, 0x013D22AC)
DECLARE_EVENT_SOURCE(ShipEditor_SelectedShipPart, 0x013D233C)
DECLARE_EVENT_SOURCE(ShipEditor_OnColorPickerControlChanged, 0x013DB1F0)
DECLARE_EVENT_SOURCE(ShipEditor_OnColorPickerTabChanged, 0x013DB280)
DECLARE_EVENT_SOURCE(ShipEditor_OnColorSliderMouseInput, 0x013DB310)
DECLARE_EVENT_SOURCE(ShipEditor_OnRecentColorSwatchClicked, 0x013DB3A0)
DECLARE_EVENT_SOURCE(ShipBuilder_CloseAllMenus, 0x013FC894)
DECLARE_EVENT_SOURCE(ShipEditor_OnHintButtonActivated, 0x013FC924)
DECLARE_EVENT_SOURCE(ShipEditor_RemoveAll3D, 0x013FC9B4)
DECLARE_EVENT_SOURCE(ReferenceQueuedEvent, 0x01464738)
DECLARE_EVENT_SOURCE(LoadScreenEndEvent, 0x0147D730)
DECLARE_EVENT_SOURCE(LoadScreenStartEvent, 0x0147D7C0)
DECLARE_EVENT_SOURCE(CellAttachDetachEvent, 0x0147D850)
DECLARE_EVENT_SOURCE(PickRefStateChangedEvent, 0x014ED138)
DECLARE_EVENT_SOURCE(ActivityTrackerActivityStartedEvent, 0x014F7728)
DECLARE_EVENT_SOURCE(RuntimeComponentDBFactory::ReferenceCleared3d, 0x015828D0)
DECLARE_EVENT_SOURCE(RuntimeComponentDBFactory::ReferenceDestroy, 0x01582960)
DECLARE_EVENT_SOURCE(RuntimeComponentDBFactory::ReferenceInit, 0x015829F0)
DECLARE_EVENT_SOURCE(RuntimeComponentDBFactory::ReferenceRecycle, 0x01582A80)
DECLARE_EVENT_SOURCE(RuntimeComponentDBFactory::ReferenceSet3d, 0x01582B10)
DECLARE_EVENT_SOURCE(RuntimeComponentDBFactory::Release3DRelatedData, 0x01582BA0)
DECLARE_EVENT_SOURCE(BSWorldOriginShiftEvent, 0x0158F090)
DECLARE_EVENT_SOURCE(BGSPlanet::PlayerKnowledgeFlagSetEvent, 0x016B903C)
DECLARE_EVENT_SOURCE(StarMap::PlanetTraitKnownEvent, 0x016B90CC)
DECLARE_EVENT_SOURCE(ResetHistoryDataEvent, 0x0178C214)
DECLARE_EVENT_SOURCE(TESQuestRewardEvent, 0x017A59C4)
DECLARE_EVENT_SOURCE(HUDWeaponWorldFOVMultChangedEvent, 0x017A7C4C)
DECLARE_EVENT_SOURCE(BGSSceneActionPlayerDialogue::ActionEndEvent, 0x018810F0)
DECLARE_EVENT_SOURCE(BGSSceneActionPlayerDialogue::ActionStartEvent, 0x01881180)
DECLARE_EVENT_SOURCE(AutoLoadDoorRolloverEvent, 0x0192F3FC)
DECLARE_EVENT_SOURCE(ClearQuickContainerEvent, 0x0192F48C)
DECLARE_EVENT_SOURCE(ReferenceCellLoadedTemps, 0x019A6FFC)
DECLARE_EVENT_SOURCE(Workshop::CargoLinkAddedEvent, 0x01D23F8C)
DECLARE_EVENT_SOURCE(Workshop::CargoLinkTargetChangedEvent, 0x01D2401C)
DECLARE_EVENT_SOURCE(Workshop::EnterOutpostBeaconModeEvent, 0x01D240AC)
DECLARE_EVENT_SOURCE(Workshop::ItemGrabbedEvent, 0x01D2413C)
DECLARE_EVENT_SOURCE(Workshop::ItemMovedEvent, 0x01D241CC)
DECLARE_EVENT_SOURCE(Workshop::ItemPlacedEvent, 0x01D2425C)
DECLARE_EVENT_SOURCE(Workshop::ItemProducedEvent, 0x01D242EC)
DECLARE_EVENT_SOURCE(Workshop::ItemRemovedEvent, 0x01D2437C)
DECLARE_EVENT_SOURCE(Workshop::ItemRepairedEvent, 0x01D2440C)
DECLARE_EVENT_SOURCE(Workshop::ItemScrappedEvent, 0x01D2449C)
DECLARE_EVENT_SOURCE(Workshop::OutpostNameChangedEvent, 0x01D2452C)
DECLARE_EVENT_SOURCE(Workshop::OutpostPlacedEvent, 0x01D245BC)
DECLARE_EVENT_SOURCE(PickRefUpdateEvent, 0x01D2464C)
DECLARE_EVENT_SOURCE(Workshop::PlacementStatusEvent, 0x01D246DC)
DECLARE_EVENT_SOURCE(Workshop::PowerOffEvent, 0x01D2476C)
DECLARE_EVENT_SOURCE(Workshop::PowerOnEvent, 0x01D247FC)
DECLARE_EVENT_SOURCE(Workshop::SnapBehaviorCycledEvent, 0x01D2488C)
DECLARE_EVENT_SOURCE(Workshop::WorkshopFlyCameraEvent, 0x01D2491C)
DECLARE_EVENT_SOURCE(Workshop::WorkshopItemPlacedEvent, 0x01D249AC)
DECLARE_EVENT_SOURCE(Workshop::WorkshopModeEvent, 0x01D24A3C)
DECLARE_EVENT_SOURCE(Workshop::WorkshopOutputLinkEvent, 0x01D24ACC)
DECLARE_EVENT_SOURCE(Workshop::WorkshopStatsChangedEvent, 0x01D24B5C)
DECLARE_EVENT_SOURCE(Workshop::WorkshopUpdateStatsEvent, 0x01D24BEC)
DECLARE_EVENT_SOURCE(ShipCameraStateToggled, 0x01D784C4)
DECLARE_EVENT_SOURCE(PlayerControls::PlayerJumpPressEvent, 0x01F46D64)
DECLARE_EVENT_SOURCE(PlayerControls::PlayerJumpReleaseEvent, 0x01F46DF4)
DECLARE_EVENT_SOURCE(PlayerSneakingChangeEvent, 0x01F484D8)
DECLARE_EVENT_SOURCE(PlayerControls::PlayerZeroGSprintJustPressedEvent, 0x01F48714)
DECLARE_EVENT_SOURCE(PlayerControls::PlayerZeroGSprintReleasedEvent, 0x01F487A4)
DECLARE_EVENT_SOURCE(PlayerControls::PlayerIronSightsEndEvent, 0x01F4B9AC)
DECLARE_EVENT_SOURCE(PlayerControls::PlayerIronSightsStartEvent, 0x01F4BA3C)
DECLARE_EVENT_SOURCE(SaveLoadEvent, 0x01F7B01C)
DECLARE_EVENT_SOURCE(SpaceshipWeaponBinding::SpaceshipWeaponBindingChangedEvent, 0x01FA4258)
DECLARE_EVENT_SOURCE(BoundaryMenu_FastTravel, 0x01FB8F88)
DECLARE_EVENT_SOURCE(BoundaryMenu_ShowMap, 0x01FB9018)
DECLARE_EVENT_SOURCE(PhotoGallery_DeletePhoto, 0x01FC1DE4)
DECLARE_EVENT_SOURCE(PowersMenu_ActivateEssence, 0x01FC52C0)
DECLARE_EVENT_SOURCE(PowersMenu_EquipPower, 0x01FC5350)
DECLARE_EVENT_SOURCE(PowersMenu_FavoritePower, 0x01FC53E0)
DECLARE_EVENT_SOURCE(ContainerMenuClosed::Event, 0x01FD88CC)
DECLARE_EVENT_SOURCE(HangarShipSelection_ChangeSystemDisplay, 0x01FD895C)
DECLARE_EVENT_SOURCE(HangarShipSelection_RepairShip, 0x01FD89EC)
DECLARE_EVENT_SOURCE(HangarShipSelection_UpgradeSystem, 0x01FD8A7C)
DECLARE_EVENT_SOURCE(ShipCrewMenu_Close, 0x01FD8B0C)
DECLARE_EVENT_SOURCE(BinkMovieStoppedPlayingEvent, 0x01FDDB70)
DECLARE_EVENT_SOURCE(WorkshopColorMode_ApplyColors, 0x020059BC)
DECLARE_EVENT_SOURCE(WorkshopColorMode_SelectedTab, 0x02005A4C)
DECLARE_EVENT_SOURCE(WorkshopColorMode_SliderChanged, 0x02005ADC)
DECLARE_EVENT_SOURCE(WorkshopColorMode_SwatchChanged, 0x02005B6C)
DECLARE_EVENT_SOURCE(HUDCrewBuffMessageEvent, 0x02006D0C)
DECLARE_EVENT_SOURCE(CraftingMenu_SessionSummaryEvent, 0x0200FDA8)
DECLARE_EVENT_SOURCE(CraftingMenu_CraftItem, 0x0200FE38)
DECLARE_EVENT_SOURCE(CraftingMenu_ExitBench, 0x0200FEC8)
DECLARE_EVENT_SOURCE(CraftingMenu_InstallMod, 0x0200FF58)
DECLARE_EVENT_SOURCE(CraftingMenu_RenameItem, 0x0200FFE8)
DECLARE_EVENT_SOURCE(CraftingMenu_RevertedModdedItem, 0x02010078)
DECLARE_EVENT_SOURCE(CraftingMenu_SelectedMod, 0x02010108)
DECLARE_EVENT_SOURCE(CraftingMenu_SelectedModSlot, 0x02010198)
DECLARE_EVENT_SOURCE(CraftingMenu_SelectedModdableItem, 0x02010228)
DECLARE_EVENT_SOURCE(CraftingMenu_SelectedRecipe, 0x020102B8)
DECLARE_EVENT_SOURCE(CraftingMenu_SetInspectControls, 0x02010348)
DECLARE_EVENT_SOURCE(CraftingMenu_ToggleTracking, 0x020103D8)
DECLARE_EVENT_SOURCE(CraftingMenu_ViewingModdableItem, 0x02010468)
DECLARE_EVENT_SOURCE(ContainerMenu_CloseMenu, 0x0201E91C)
DECLARE_EVENT_SOURCE(InventoryMenu_Change3DView, 0x0201EA4C)
DECLARE_EVENT_SOURCE(InventoryMenu_PaperDollTryOn, 0x0201EADC)
DECLARE_EVENT_SOURCE(InventoryMenu_ResetPaperDollInv, 0x0201EB6C)
DECLARE_EVENT_SOURCE(UpdateActivateListenerEvent, 0x02026CE8)
DECLARE_EVENT_SOURCE(StartOutpostFromListenerEvent, 0x020289A8)
DECLARE_EVENT_SOURCE(HUDModeEvent, 0x02038BB4)
DECLARE_EVENT_SOURCE(OpenContainerMenuEventData, 0x02038C44)
DECLARE_EVENT_SOURCE(OpenContainerMenuFromListenerEvent, 0x02038CD4)
DECLARE_EVENT_SOURCE(HUDRolloverActivationButtonEvent, 0x02038D64)
DECLARE_EVENT_SOURCE(HUDRolloverActivationQCItemPressEvent, 0x02038DF4)
DECLARE_EVENT_SOURCE(Inventory_SetSort, 0x02038E84)
DECLARE_EVENT_SOURCE(ShowingQuestMarketTextEvent, 0x02046C48)
DECLARE_EVENT_SOURCE(TargetHitEvent, 0x02049238)
DECLARE_EVENT_SOURCE(BSTValueRequestEvent<PlayerCrosshairModeEvent>, 0x020492C8)
DECLARE_EVENT_SOURCE(ClearHUDMessagesEvent, 0x020506D4)
DECLARE_EVENT_SOURCE(ShowHUDMessageEvent, 0x02050764)
DECLARE_EVENT_SOURCE(PlayerDetectionLevelChangeEvent, 0x020538C4)
DECLARE_EVENT_SOURCE(ShowCustomWatchAlert, 0x020589DC)
DECLARE_EVENT_SOURCE(PlayerUpdateEvent, 0x0208C0AC)
DECLARE_EVENT_SOURCE(InventoryMenu_ToggleHelmet, 0x0208C13C)
DECLARE_EVENT_SOURCE(InventoryMenu_ToggleSuit, 0x0208C1CC)
DECLARE_EVENT_SOURCE(ControlsRemappedEvent, 0x020CBD28)
DECLARE_EVENT_SOURCE(SettingsPanel_CheckBoxChanged, 0x020CBDB8)
DECLARE_EVENT_SOURCE(SettingsPanel_ClearBinding, 0x020CBE48)
DECLARE_EVENT_SOURCE(SettingsPanel_OpenCategory, 0x020CBED8)
DECLARE_EVENT_SOURCE(SettingsPanel_OpenSettings, 0x020CBF68)
DECLARE_EVENT_SOURCE(SettingsPanel_RemapConfirmed, 0x020CBFF8)
DECLARE_EVENT_SOURCE(SettingsPanel_RemapMode, 0x020CC088)
DECLARE_EVENT_SOURCE(SettingsPanel_ResetToDefaults, 0x020CC118)
DECLARE_EVENT_SOURCE(SettingsPanel_SaveControls, 0x020CC1A8)
DECLARE_EVENT_SOURCE(SettingsPanel_SaveSettings, 0x020CC238)
DECLARE_EVENT_SOURCE(SettingsPanel_SliderChanged, 0x020CC2C8)
DECLARE_EVENT_SOURCE(SettingsPanel_StepperChanged, 0x020CC358)
DECLARE_EVENT_SOURCE(SettingsPanel_ValidateControls, 0x020CC3E8)
DECLARE_EVENT_SOURCE(ShipCrewMenu_OpenAssignMenu, 0x020D5D58)
DECLARE_EVENT_SOURCE(ShipCrewMenu_SetSort, 0x020D5DE8)
DECLARE_EVENT_SOURCE(Spaceship::PlayerMovementOutputEvent, 0x020FBF58)
DECLARE_EVENT_SOURCE(ShowLongShipBootup, 0x020FBFE8)
DECLARE_EVENT_SOURCE(ShipHudQuickContainer_TransferMenu, 0x020FC078)
DECLARE_EVENT_SOURCE(ShipHud_Activate, 0x020FC108)
DECLARE_EVENT_SOURCE(ShipHud_BodyViewMarkerDimensions, 0x020FC198)
DECLARE_EVENT_SOURCE(ShipHud_ChangeComponentSelection, 0x020FC228)
DECLARE_EVENT_SOURCE(ShipHud_CloseMenu, 0x020FC2B8)
DECLARE_EVENT_SOURCE(ShipHud_Deselect, 0x020FC348)
DECLARE_EVENT_SOURCE(ShipHud_FarTravel, 0x020FC3D8)
DECLARE_EVENT_SOURCE(ShipHud_HailAccepted, 0x020FC468)
DECLARE_EVENT_SOURCE(ShipHud_HailCancelled, 0x020FC4F8)
DECLARE_EVENT_SOURCE(ShipHud_JumpToQuestMarker, 0x020FC588)
DECLARE_EVENT_SOURCE(ShipHud_Land, 0x020FC618)
DECLARE_EVENT_SOURCE(ShipHud_LandingMarkerMap, 0x020FC6A8)
DECLARE_EVENT_SOURCE(ShipHud_Map, 0x020FC738)
DECLARE_EVENT_SOURCE(ShipHud_OnMonocleToggle, 0x020FC7C8)
DECLARE_EVENT_SOURCE(ShipHud_OpenPhotoMode, 0x020FC858)
DECLARE_EVENT_SOURCE(ShipHud_Repair, 0x020FC8E8)
DECLARE_EVENT_SOURCE(ShipHud_SetTargetMode, 0x020FC978)
DECLARE_EVENT_SOURCE(ShipHud_Target, 0x020FCA08)
DECLARE_EVENT_SOURCE(ShipHud_TargetShipSystem, 0x020FCA98)
DECLARE_EVENT_SOURCE(ShipHud_UntargetShipSystem, 0x020FCB28)
DECLARE_EVENT_SOURCE(ShipHud_UpdateComponentPower, 0x020FCBB8)
DECLARE_EVENT_SOURCE(DialogueMenu_CompleteExit, 0x021283AC)
DECLARE_EVENT_SOURCE(BGSScannerGuideEffectStatusUpdateEvent, 0x02138560)
DECLARE_EVENT_SOURCE(GlobalFunc_CloseAllMenus, 0x0213D528)
DECLARE_EVENT_SOURCE(GlobalFunc_CloseMenu, 0x0213D5B8)
DECLARE_EVENT_SOURCE(GlobalFunc_PlayMenuSound, 0x0213D648)
DECLARE_EVENT_SOURCE(GlobalFunc_StartGameRender, 0x0213D6D8)
DECLARE_EVENT_SOURCE(GlobalFunc_UserEvent, 0x0213D768)
DECLARE_EVENT_SOURCE(ExperienceMeterDisplayData, 0x021470C8)
DECLARE_EVENT_SOURCE(LevelUp_AnimFinished, 0x02147158)
DECLARE_EVENT_SOURCE(LevelUp_OnWidgetShown, 0x021471E8)
DECLARE_EVENT_SOURCE(LevelUp_OpenDataMenu, 0x02147278)
DECLARE_EVENT_SOURCE(LevelUp_ShowSkills, 0x02147308)
DECLARE_EVENT_SOURCE(LocationTextWidget_FinishedQueue, 0x02147398)
DECLARE_EVENT_SOURCE(DisplayFatigueWarningEvent, 0x02147640)
DECLARE_EVENT_SOURCE(BSTValueRequestEvent<SaveLoadMessageStringEvent>, 0x0214B0AC)
DECLARE_EVENT_SOURCE(PlayerCrosshairModeEvent, 0x02048940)
DECLARE_EVENT_SOURCE(HUDNotificationEvent, 0x02154308)
DECLARE_EVENT_SOURCE(HUDNotification_MissionActiveWidgetUpdate, 0x02154398)
DECLARE_EVENT_SOURCE(HUDNotification_OpenDataMenu, 0x02154428)
DECLARE_EVENT_SOURCE(HUDNotification_OpenMissionMenu, 0x021544B8)
DECLARE_EVENT_SOURCE(HUDNotification_SetMissionActive, 0x02154548)
DECLARE_EVENT_SOURCE(PlayerSetWeaponStateEvent, 0x02156128)
DECLARE_EVENT_SOURCE(BarterMenu_BuyItem, 0x021691C8)
DECLARE_EVENT_SOURCE(BarterMenu_CloseMenu, 0x02169258)
DECLARE_EVENT_SOURCE(BarterMenu_HideModel, 0x021692E8)
DECLARE_EVENT_SOURCE(BarterMenu_LoadModel, 0x02169378)
DECLARE_EVENT_SOURCE(BarterMenu_SellItem, 0x02169408)
DECLARE_EVENT_SOURCE(BarterMenu_SetMouseOverModel, 0x02169498)
DECLARE_EVENT_SOURCE(BarterMenu_ShowFailureMessage, 0x02169528)
DECLARE_EVENT_SOURCE(BarterMenu_ViewedItem, 0x021695B8)
DECLARE_EVENT_SOURCE(MissionMenu_ClearState, 0x0216DBC0)
DECLARE_EVENT_SOURCE(MissionMenu_PlotToLocation, 0x0216DC50)
DECLARE_EVENT_SOURCE(MissionMenu_RejectQuest, 0x0216DCE0)
DECLARE_EVENT_SOURCE(MissionMenu_SaveCategoryIndex, 0x0216DD70)
DECLARE_EVENT_SOURCE(MissionMenu_SaveOpenedId, 0x0216DE00)
DECLARE_EVENT_SOURCE(MissionMenu_ShowItemLocation, 0x0216DE90)
DECLARE_EVENT_SOURCE(MissionMenu_ToggleTrackingQuest, 0x0216DFBC)
DECLARE_EVENT_SOURCE(DataSlateButtons_acceptClicked, 0x021736F0)
DECLARE_EVENT_SOURCE(DataSlateButtons_cancelClicked, 0x02173780)
DECLARE_EVENT_SOURCE(DataSlateMenu_playSFX, 0x02173810)
DECLARE_EVENT_SOURCE(DataSlateMenu_toggleAudio, 0x021738A0)
DECLARE_EVENT_SOURCE(InventoryMenu_DropItem, 0x02179FB4)
DECLARE_EVENT_SOURCE(InventoryMenu_HideModel, 0x0217A044)
DECLARE_EVENT_SOURCE(InventoryMenu_LoadModel, 0x0217A0D4)
DECLARE_EVENT_SOURCE(InventoryMenu_OnEnterCategory, 0x0217A164)
DECLARE_EVENT_SOURCE(InventoryMenu_OpenCargoHold, 0x0217A1F4)
DECLARE_EVENT_SOURCE(InventoryMenu_SelectItem, 0x0217A284)
DECLARE_EVENT_SOURCE(InventoryMenu_SetMouseOverModel, 0x0217A314)
DECLARE_EVENT_SOURCE(InventoryMenu_ToggleFavorite, 0x0217A44C)
DECLARE_EVENT_SOURCE(MissionBoard_MissionEntryChanged, 0x02186798)
DECLARE_EVENT_SOURCE(MissionBoard_MissionEntryPressed, 0x02186828)
DECLARE_EVENT_SOURCE(MonocleMenu_Bioscan, 0x0218DB1C)
DECLARE_EVENT_SOURCE(MonocleMenu_FastTravel, 0x0218DBAC)
DECLARE_EVENT_SOURCE(MonocleMenu_Harvest, 0x0218DC3C)
DECLARE_EVENT_SOURCE(MonocleMenu_Initialize, 0x0218DCCC)
DECLARE_EVENT_SOURCE(MonocleMenu_Outpost, 0x0218DD5C)
DECLARE_EVENT_SOURCE(MonocleMenu_PhotoMode, 0x0218DDEC)
DECLARE_EVENT_SOURCE(MonocleMenu_Shutdown, 0x0218DE7C)
DECLARE_EVENT_SOURCE(MonocleMenu_SocialSpell, 0x0218DF0C)
DECLARE_EVENT_SOURCE(MonocleMenu_StartContainerView, 0x0218DF9C)
DECLARE_EVENT_SOURCE(MonocleMenu_StopContainerView, 0x0218E02C)
DECLARE_EVENT_SOURCE(MonocleMenu_SurfaceMap, 0x0218E0BC)
DECLARE_EVENT_SOURCE(MonocleMenu_UseListScrollControls, 0x0218E14C)
DECLARE_EVENT_SOURCE(MonocleMenu_ZoomIn, 0x0218E1DC)
DECLARE_EVENT_SOURCE(MonocleMenu_ZoomOut, 0x0218E26C)
DECLARE_EVENT_SOURCE(PhotoMode_InitializeCategory, 0x02192A0C)
DECLARE_EVENT_SOURCE(PhotoMode_ResetToDefaults, 0x02192A9C)
DECLARE_EVENT_SOURCE(PhotoMode_SliderChanged, 0x02192B2C)
DECLARE_EVENT_SOURCE(PhotoMode_StepperChanged, 0x02192BBC)
DECLARE_EVENT_SOURCE(PhotoMode_TakeSnapshot, 0x02192C4C)
DECLARE_EVENT_SOURCE(PhotoMode_ToggleHelmet, 0x02192CDC)
DECLARE_EVENT_SOURCE(PhotoMode_ToggleUI, 0x02192D6C)
DECLARE_EVENT_SOURCE(PickpocketMenu_OnItemSelect, 0x0219B224)
DECLARE_EVENT_SOURCE(ResearchMenu_AddMaterial, 0x021A0658)
DECLARE_EVENT_SOURCE(ResearchMenu_CategorySelected, 0x021A06E8)
DECLARE_EVENT_SOURCE(ResearchMenu_ExitMenu, 0x021A0778)
DECLARE_EVENT_SOURCE(ResearchMenu_HideModel, 0x021A0808)
DECLARE_EVENT_SOURCE(ResearchMenu_PreviewProject, 0x021A0898)
DECLARE_EVENT_SOURCE(ResearchMenu_ProjectViewed, 0x021A0928)
DECLARE_EVENT_SOURCE(ResearchMenu_SetInspectControls, 0x021A09B8)
DECLARE_EVENT_SOURCE(ResearchMenu_ToggleTrackingProject, 0x021A0A48)
DECLARE_EVENT_SOURCE(UnlockedTerminalElementEvent, 0x021B22BC)
DECLARE_EVENT_SOURCE(SecurityMenu_BackOutKey, 0x021B234C)
DECLARE_EVENT_SOURCE(SecurityMenu_CloseMenu, 0x021B23DC)
DECLARE_EVENT_SOURCE(SecurityMenu_ConfirmExit, 0x021B246C)
DECLARE_EVENT_SOURCE(SecurityMenu_EliminateUnusedKeys, 0x021B24FC)
DECLARE_EVENT_SOURCE(SecurityMenu_GetRingHint, 0x021B258C)
DECLARE_EVENT_SOURCE(SecurityMenu_SelectNewKey, 0x021B261C)
DECLARE_EVENT_SOURCE(SecurityMenu_TryUseKey, 0x021B26AC)
DECLARE_EVENT_SOURCE(ShipCrewAssignMenu_Assign, 0x021B6674)
DECLARE_EVENT_SOURCE(ShipCrewAssignMenu_Unassign, 0x021B6704)
DECLARE_EVENT_SOURCE(ShipCrewMenu_ViewedItem, 0x021B6794)
DECLARE_EVENT_SOURCE(Refuel_Accept, 0x021B8634)
DECLARE_EVENT_SOURCE(Refuel_Cancel, 0x021B86C4)
DECLARE_EVENT_SOURCE(SkillsMenu_Accept, 0x021BF10C)
DECLARE_EVENT_SOURCE(SkillsMenu_AddPatch, 0x021BF19C)
DECLARE_EVENT_SOURCE(SkillsMenu_Cancel, 0x021BF22C)
DECLARE_EVENT_SOURCE(SkillsMenu_ChangeCursorVisibility, 0x021BF2BC)
DECLARE_EVENT_SOURCE(SkillsMenu_SaveLastCategory, 0x021BF34C)
DECLARE_EVENT_SOURCE(BSChargenAPI::BIDataUtils::MenuClosedEvent, 0x021E3E34)
DECLARE_EVENT_SOURCE(BSChargenAPI::BIDataUtils::PresetNPCChangedEvent, 0x021E3EC4)
DECLARE_EVENT_SOURCE(CharGen_BrowChange, 0x021E3F54)
DECLARE_EVENT_SOURCE(CharGen_BrowColorChange, 0x021E3FE4)
DECLARE_EVENT_SOURCE(CharGen_CancelTextEntry, 0x021E4074)
DECLARE_EVENT_SOURCE(CharGen_CloseMenu, 0x021E4104)
DECLARE_EVENT_SOURCE(CharGen_CyclePronoun, 0x021E4194)
DECLARE_EVENT_SOURCE(CharGen_DirtScarsEtcChange, 0x021E4224)
DECLARE_EVENT_SOURCE(CharGen_EndBodyChange, 0x021E42B4)
DECLARE_EVENT_SOURCE(CharGen_EndTextEntry, 0x021E4344)
DECLARE_EVENT_SOURCE(CharGen_EyeColorChange, 0x021E43D4)
DECLARE_EVENT_SOURCE(CharGen_FacialHairChange, 0x021E4464)
DECLARE_EVENT_SOURCE(CharGen_FacialHairColorChange, 0x021E44F4)
DECLARE_EVENT_SOURCE(CharGen_HairChange, 0x021E4584)
DECLARE_EVENT_SOURCE(CharGen_HairColorChange, 0x021E4614)
DECLARE_EVENT_SOURCE(CharGen_HeadpartPlusSelectorChange, 0x021E46A4)
DECLARE_EVENT_SOURCE(CharGen_HeadpartPresetChange, 0x021E4734)
DECLARE_EVENT_SOURCE(CharGen_JewelryChange, 0x021E47C4)
DECLARE_EVENT_SOURCE(CharGen_JewelryColorChange, 0x021E4854)
DECLARE_EVENT_SOURCE(CharGen_MakeupChange, 0x021E48E4)
DECLARE_EVENT_SOURCE(CharGen_MarkingsChange, 0x021E4974)
DECLARE_EVENT_SOURCE(CharGen_PostBlendColorOptionChange, 0x021E4A04)
DECLARE_EVENT_SOURCE(CharGen_PostBlendFaceChange, 0x021E4A94)
DECLARE_EVENT_SOURCE(CharGen_PostBlendIntensityChange, 0x021E4B24)
DECLARE_EVENT_SOURCE(CharGen_PresetChange, 0x021E4BB4)
DECLARE_EVENT_SOURCE(CharGen_RollOffLocomotion, 0x021E4C44)
DECLARE_EVENT_SOURCE(CharGen_RollOnLocomotion, 0x021E4CD4)
DECLARE_EVENT_SOURCE(CharGen_RotatePaperdoll, 0x021E4D64)
DECLARE_EVENT_SOURCE(CharGen_SetAdditionalSlider, 0x021E4DF4)
DECLARE_EVENT_SOURCE(CharGen_SetBackground, 0x021E4E84)
DECLARE_EVENT_SOURCE(CharGen_SetBlockInputUnderPopup, 0x021E4F14)
DECLARE_EVENT_SOURCE(CharGen_SetBodyValues, 0x021E4FA4)
DECLARE_EVENT_SOURCE(CharGen_SetCameraPosition, 0x021E5034)
DECLARE_EVENT_SOURCE(CharGen_SetPronoun, 0x021E50C4)
DECLARE_EVENT_SOURCE(CharGen_SetSex, 0x021E5154)
DECLARE_EVENT_SOURCE(CharGen_SetSlider, 0x021E51E4)
DECLARE_EVENT_SOURCE(CharGen_SetTrait, 0x021E5274)
DECLARE_EVENT_SOURCE(CharGen_ShowChooseBackgroundMessage, 0x021E5304)
DECLARE_EVENT_SOURCE(CharGen_ShowPlayerRenameMessage, 0x021E5394)
DECLARE_EVENT_SOURCE(CharGen_SkintoneChange, 0x021E5424)
DECLARE_EVENT_SOURCE(CharGen_StartBodyChange, 0x021E54B4)
DECLARE_EVENT_SOURCE(CharGen_StartTextEntry, 0x021E5544)
DECLARE_EVENT_SOURCE(CharGen_SwitchBodyType, 0x021E55D4)
DECLARE_EVENT_SOURCE(CharGen_SwitchLocomotion, 0x021E5664)
DECLARE_EVENT_SOURCE(CharGen_TeethChange, 0x021E56F4)
DECLARE_EVENT_SOURCE(CharGen_TeethRollOff, 0x021E5784)
DECLARE_EVENT_SOURCE(CharGen_TeethRollOn, 0x021E5814)
DECLARE_EVENT_SOURCE(CharGen_ToggleMarking, 0x021E58A4)
DECLARE_EVENT_SOURCE(CharGen_TogglePreviewHabSuit, 0x021E5934)
DECLARE_EVENT_SOURCE(UIMenuChargenMenuDisablePaperdoll, 0x021E59C4)
DECLARE_EVENT_SOURCE(DataMenu_CloseMenu, 0x021ECA48)
DECLARE_EVENT_SOURCE(DataMenu_ClosedForSubMenu, 0x021ECAD8)
DECLARE_EVENT_SOURCE(DataMenu_Missions, 0x021ECB68)
DECLARE_EVENT_SOURCE(DataMenu_PlotToLocation, 0x021ECC9C)
DECLARE_EVENT_SOURCE(DataMenu_Reopened, 0x021ECD2C)
DECLARE_EVENT_SOURCE(DataMenu_SelectedAttributesMenu, 0x021ECDBC)
DECLARE_EVENT_SOURCE(DataMenu_SelectedInventoryMenu, 0x021ECE4C)
DECLARE_EVENT_SOURCE(DataMenu_SelectedMapMenu, 0x021ECEDC)
DECLARE_EVENT_SOURCE(DataMenu_SelectedPowersMenu, 0x021ECF6C)
DECLARE_EVENT_SOURCE(DataMenu_SelectedShipMenu, 0x021ECFFC)
DECLARE_EVENT_SOURCE(DataMenu_SelectedStatusMenu, 0x021ED08C)
DECLARE_EVENT_SOURCE(DataMenu_SetMenuForQuickEntry, 0x021ED11C)
DECLARE_EVENT_SOURCE(DataMenu_SetPaperDollActive, 0x021ED1AC)
DECLARE_EVENT_SOURCE(PauseMenu_ActionCanceled, 0x021F7374)
DECLARE_EVENT_SOURCE(PauseMenu_ConfirmAction, 0x021F7404)
DECLARE_EVENT_SOURCE(PauseMenu_ConfirmLoad, 0x021F7494)
DECLARE_EVENT_SOURCE(PauseMenu_ConfirmSave, 0x021F7524)
DECLARE_EVENT_SOURCE(PauseMenu_DeleteSave, 0x021F75B4)
DECLARE_EVENT_SOURCE(PauseMenu_QuitToDesktop, 0x021F7644)
DECLARE_EVENT_SOURCE(PauseMenu_SetCharacter, 0x021F76D4)
DECLARE_EVENT_SOURCE(PauseMenu_StartAction, 0x021F7764)
DECLARE_EVENT_SOURCE(PauseMenu_StartLoad, 0x021F77F4)
DECLARE_EVENT_SOURCE(PauseMenu_UploadSave, 0x021F7884)
DECLARE_EVENT_SOURCE(PlayBink_CloseMenu, 0x021F8830)
DECLARE_EVENT_SOURCE(Spaceship::GravJumpEvent, 0x021FE464)
DECLARE_EVENT_SOURCE(Spaceship::LandedSetEvent, 0x021FE4F4)
DECLARE_EVENT_SOURCE(Reticle_OnLongAnimFinished, 0x021FE584)
DECLARE_EVENT_SOURCE(ShipHudQuickContainer_TransferItem, 0x021FE614)
DECLARE_EVENT_SOURCE(ShipHud_AbortJump, 0x021FE6A4)
DECLARE_EVENT_SOURCE(ShipHud_DockRequested, 0x021FE734)
DECLARE_EVENT_SOURCE(ShipHud_HailShip, 0x021FE7C4)
DECLARE_EVENT_SOURCE(ShipHud_UpdateTargetPanelRect, 0x021FE854)
DECLARE_EVENT_SOURCE(TakeoffMenu_CloseMenu, 0x021FE8E4)
DECLARE_EVENT_SOURCE(TakeoffMenu_ExitShip, 0x021FE974)
DECLARE_EVENT_SOURCE(TakeoffMenu_Launch, 0x021FEA04)
DECLARE_EVENT_SOURCE(StarMapMenu_LandingInputInProgress, 0x0221DC90)
DECLARE_EVENT_SOURCE(StarMapMenu_MarkerGroupContainerVisibilityChanged, 0x0221DD20)
DECLARE_EVENT_SOURCE(StarMapMenu_MarkerGroupEntryClicked, 0x0221DDB0)
DECLARE_EVENT_SOURCE(StarMapMenu_MarkerGroupEntryHoverChanged, 0x0221DE40)
DECLARE_EVENT_SOURCE(StarMapMenu_ScanPlanet, 0x0221DED0)
DECLARE_EVENT_SOURCE(StarMapMenu_SelectedLandingSite, 0x0221DF60)
DECLARE_EVENT_SOURCE(StarMapMenu_SelectedLandingSiteFailed, 0x0221DFF0)
DECLARE_EVENT_SOURCE(StarMapMenu_ShowRealCursor, 0x0221E080)
DECLARE_EVENT_SOURCE(StarMapMenu_QuickSelectChange, 0x02233550)
DECLARE_EVENT_SOURCE(StarMapMenu_Galaxy_FocusSystem, 0x022444A0)
DECLARE_EVENT_SOURCE(StarMapMenu_OnGalaxyViewInitialized, 0x02244530)
DECLARE_EVENT_SOURCE(StarMapMenu_ExecuteRoute, 0x0224F018)
DECLARE_EVENT_SOURCE(StarMapMenu_OnCancel, 0x0224F0A8)
DECLARE_EVENT_SOURCE(StarMapMenu_OnClearRoute, 0x0224F138)
DECLARE_EVENT_SOURCE(StarMapMenu_OnExitStarMap, 0x0224F1C8)
DECLARE_EVENT_SOURCE(StarMapMenu_OnHintButtonClicked, 0x0224F258)
DECLARE_EVENT_SOURCE(StarMapMenu_OnOutpostEntrySelected, 0x0224F2E8)
DECLARE_EVENT_SOURCE(StarMapMenu_ReadyToClose, 0x0224F378)
DECLARE_EVENT_SOURCE(SurfaceMapMenu_MarkerClicked, 0x0226D00C)
DECLARE_EVENT_SOURCE(SurfaceMapMenu_TryPlaceCustomMarker, 0x0226D09C)
DECLARE_EVENT_SOURCE(TerminalMenu_CancelEvent, 0x02287500)
DECLARE_EVENT_SOURCE(Terminal_CloseAllViews, 0x02287590)
DECLARE_EVENT_SOURCE(Terminal_CloseTopView, 0x02287620)
DECLARE_EVENT_SOURCE(Terminal_CloseView, 0x022876B0)
DECLARE_EVENT_SOURCE(Terminal_MenuItemClick, 0x02287740)
DECLARE_EVENT_SOURCE(TestMenu_DoAction, 0x02293630)
DECLARE_EVENT_SOURCE(TestMenu_ExitMenu, 0x022936C0)
DECLARE_EVENT_SOURCE(TestMenu_ShowImages, 0x02293750)
DECLARE_EVENT_SOURCE(TestMenu_ShowResources, 0x022937E0)
DECLARE_EVENT_SOURCE(TestMenu_TestAll, 0x02293870)
DECLARE_EVENT_SOURCE(TextInputMenu_EndEditText, 0x02297814)
DECLARE_EVENT_SOURCE(TextInputMenu_InputCanceled, 0x022978A4)
DECLARE_EVENT_SOURCE(TextInputMenu_StartEditText, 0x02297934)
DECLARE_EVENT_SOURCE(CraftingMenu_Highlight3D, 0x02298C04)
DECLARE_EVENT_SOURCE(CraftingMenu_RevertHighlight, 0x02298C94)
DECLARE_EVENT_SOURCE(WorkshopBuilderMenu_ChangeBuildItem, 0x0229B2F8)
DECLARE_EVENT_SOURCE(WorkshopBuilderMenu_SelectedItem, 0x0229B388)
DECLARE_EVENT_SOURCE(WorkshopBuilderMenu_ToggleTracking, 0x0229B418)
DECLARE_EVENT_SOURCE(WorkshopMenu_AttemptBuild, 0x022A3C64)
DECLARE_EVENT_SOURCE(WorkshopMenu_CancelAction, 0x022A3CF4)
DECLARE_EVENT_SOURCE(WorkshopMenu_ChangeVariant, 0x022A3D84)
DECLARE_EVENT_SOURCE(WorkshopMenu_ConnectionEvent, 0x022A3E14)
DECLARE_EVENT_SOURCE(WorkshopMenu_ExitMenu, 0x022A3EA4)
DECLARE_EVENT_SOURCE(WorkshopMenu_MessageCallback, 0x022A3F34)
DECLARE_EVENT_SOURCE(WorkshopMenu_SelectedCategory, 0x022A3FC4)
DECLARE_EVENT_SOURCE(WorkshopMenu_SelectedGridObject, 0x022A4054)
DECLARE_EVENT_SOURCE(WorkshopMenu_ShowExtras, 0x022A40E4)
DECLARE_EVENT_SOURCE(WorkshopMenu_SwitchMode, 0x022A4174)
DECLARE_EVENT_SOURCE(WorkshopMenu_ToggleDistance, 0x022A4204)
DECLARE_EVENT_SOURCE(WorkshopMenu_ToggleTracking, 0x022A4294)
DECLARE_EVENT_SOURCE(WorkshopMenu_ToggleView, 0x022A4324)
DECLARE_EVENT_SOURCE(WorkshopQuickMenu_ConfirmAction, 0x022A5D74)
DECLARE_EVENT_SOURCE(WorkshopQuickMenu_ExitMenu, 0x022A5E04)
DECLARE_EVENT_SOURCE(WorkshopTargetMenu_TargetHovered, 0x022AC2CC)
DECLARE_EVENT_SOURCE(WorkshopTargetMenu_TargetPicked, 0x022AC35C)
DECLARE_EVENT_SOURCE(WorkshopActionButton_HoldFinished, 0x022C3400)
DECLARE_EVENT_SOURCE(WorkshopActionButton_HoldStopped, 0x022C3490)
DECLARE_EVENT_SOURCE(WorkshopShared_SetActionHandles, 0x022C3520)
DECLARE_EVENT_SOURCE(WorkshopShared_StartAction, 0x022C35B0)
DECLARE_EVENT_SOURCE(ModelReferenceEffectEvents::ReferenceEffectFinished, 0x022E31C4)
DECLARE_EVENT_SOURCE(BGSAcousticSpaceListener::StackChangedEvent, 0x022F7254)
DECLARE_EVENT_SOURCE(SpaceshipBIEvents::ShipPowerAllocationBIEventSent, 0x0230DD40)
DECLARE_EVENT_SOURCE(BGSActorDeathEvent, 0x02319C8C)
DECLARE_EVENT_SOURCE(Research::ResearchProgressEvent, 0x0236A4B8)
DECLARE_EVENT_SOURCE(BSTValueRequestEvent<PlayerAutoAimActorEvent>, 0x025883A8)
DECLARE_EVENT_SOURCE(PlayerInCombatChangeEvent, 0x025A08D0)
DECLARE_EVENT_SOURCE(BlurEvent, 0x0286F458)
DECLARE_EVENT_SOURCE(ContainerMenu_HideModel, 0x028922B8)
DECLARE_EVENT_SOURCE(ContainerMenu_Jettison, 0x02892348)
DECLARE_EVENT_SOURCE(ContainerMenu_LoadModel, 0x028923D8)
DECLARE_EVENT_SOURCE(ContainerMenu_OpenRefuelMenu, 0x02892468)
DECLARE_EVENT_SOURCE(ContainerMenu_SetMouseOverModel, 0x028924F8)
DECLARE_EVENT_SOURCE(ContainerMenu_TakeAll, 0x02892588)
DECLARE_EVENT_SOURCE(ContainerMenu_ToggleEquip, 0x02892618)
DECLARE_EVENT_SOURCE(ContainerMenu_TransferItem, 0x0289274C)
DECLARE_EVENT_SOURCE(DialogueMenu_OnDialogueSelect, 0x028961F0)
DECLARE_EVENT_SOURCE(DialogueMenu_OnListVisibilityChange, 0x02896280)
DECLARE_EVENT_SOURCE(DialogueMenu_OnPersuasionAutoWin, 0x02896310)
DECLARE_EVENT_SOURCE(DialogueMenu_OnScriptedDialogueSelect, 0x028963A0)
DECLARE_EVENT_SOURCE(DialogueMenu_RequestExit, 0x02896430)
DECLARE_EVENT_SOURCE(DialogueMenu_RequestSkipDialogue, 0x028964C0)
DECLARE_EVENT_SOURCE(BSTValueRequestEvent<FaderMenuDisplayState>, 0x02897288)
DECLARE_EVENT_SOURCE(FavoritesMenu_AssignQuickkey, 0x028A32C0)
DECLARE_EVENT_SOURCE(FavoritesMenu_UseQuickkey, 0x028A3350)
DECLARE_EVENT_SOURCE(LoadingMenu_RefreshText, 0x028A71D0)
DECLARE_EVENT_SOURCE(MainMenu_ActionCanceled, 0x028AA8A0)
DECLARE_EVENT_SOURCE(MainMenu_ActionConfirmed, 0x028AA930)
DECLARE_EVENT_SOURCE(MainMenu_ConfirmLoad, 0x028AA9C0)
DECLARE_EVENT_SOURCE(MainMenu_DeleteSave, 0x028AAA50)
DECLARE_EVENT_SOURCE(MainMenu_SetCharacter, 0x028AAB7C)
DECLARE_EVENT_SOURCE(MainMenu_StartAction, 0x028AAC0C)
DECLARE_EVENT_SOURCE(MainMenu_StartLoad, 0x028AAC9C)
DECLARE_EVENT_SOURCE(MainMenu_UploadSave, 0x028AAD2C)
DECLARE_EVENT_SOURCE(BGSAppPausedEvent, 0x028AC55C)
DECLARE_EVENT_SOURCE(MessageBoxMenu_OnBackOut, 0x028B1848)
DECLARE_EVENT_SOURCE(MessageBoxMenu_OnButtonPress, 0x028B18D8)
DECLARE_EVENT_SOURCE(MessageBoxMenu_OnScriptedButtonPress, 0x028B1968)
DECLARE_EVENT_SOURCE(SleepWaitMenu_InterruptRest, 0x028B65F8)
DECLARE_EVENT_SOURCE(SleepWaitMenu_StartRest, 0x028B6688)
DECLARE_EVENT_SOURCE(Spaceship::BoughtEvent, 0x02B7FCAC)
DECLARE_EVENT_SOURCE(Spaceship::ContrabandScanWarningEvent, 0x02B7FD3C)
DECLARE_EVENT_SOURCE(Spaceship::DockEvent, 0x02B7FDCC)
DECLARE_EVENT_SOURCE(Spaceship::DynamicNavmeshCompleted, 0x02B7FE5C)
DECLARE_EVENT_SOURCE(Spaceship::FarTravelEvent, 0x02B7FEEC)
DECLARE_EVENT_SOURCE(Spaceship::LandingEvent, 0x02B7FF7C)
DECLARE_EVENT_SOURCE(Spaceship::PlanetScanEvent, 0x02B8000C)
DECLARE_EVENT_SOURCE(Spaceship::RampDownEvent, 0x02B8009C)
DECLARE_EVENT_SOURCE(Spaceship::RefueledEvent, 0x02B8012C)
DECLARE_EVENT_SOURCE(Spaceship::RegisteredEvent, 0x02B801BC)
DECLARE_EVENT_SOURCE(Spaceship::ShieldEvent, 0x02B8024C)
DECLARE_EVENT_SOURCE(Spaceship::ShipAddedEvent, 0x02B802DC)
DECLARE_EVENT_SOURCE(Spaceship::ShipCollisionEvent, 0x02B8036C)
DECLARE_EVENT_SOURCE(Spaceship::ShipCustomizedEvent, 0x02B803FC)
DECLARE_EVENT_SOURCE(Spaceship::SoldEvent, 0x02B8048C)
DECLARE_EVENT_SOURCE(Spaceship::SystemDamagedEvent, 0x02B8051C)
DECLARE_EVENT_SOURCE(Spaceship::SystemPowerAllocationEvent, 0x02B805AC)
DECLARE_EVENT_SOURCE(Spaceship::SystemPowerChangeEvent, 0x02B8063C)
DECLARE_EVENT_SOURCE(Spaceship::SystemRepairedBIEvent, 0x02B806CC)
DECLARE_EVENT_SOURCE(Spaceship::SystemRepairedEvent, 0x02B8075C)
DECLARE_EVENT_SOURCE(Spaceship::TakeDamagEvent, 0x02B807EC)
DECLARE_EVENT_SOURCE(ContextStackChangedEvent, 0x02CACD38)
DECLARE_EVENT_SOURCE(UpdateSceneRectEvent, 0x02E7DE60)
DECLARE_EVENT_SOURCE(GameStalledEvent, 0x03042E50)

// more

DECLARE_EVENT_SOURCE(TESCellNavmeshGeneratedEvent, 0x005BFBB0)
DECLARE_EVENT_SOURCE(TESHitEvent, 0x005C0440)
DECLARE_EVENT_SOURCE(FirstThirdPersonSwitch::Event, 0x005C0E30)
DECLARE_EVENT_SOURCE(PerkChanged::Event, 0x01306C40)
DECLARE_EVENT_SOURCE(TESHarvestEvent::ItemHarvested, 0x014ED0D0)
DECLARE_EVENT_SOURCE(ActivityEvents::ActivityCompletedEvent, 0x014F53A0)
DECLARE_EVENT_SOURCE(ChallengeCompletedEvent::Event, 0x014F76C0)
DECLARE_EVENT_SOURCE(InventoryItemEvent::Event, 0x0152ECE0)
DECLARE_EVENT_SOURCE(BooksRead::Event, 0x01922CB0)
DECLARE_EVENT_SOURCE(LocationExplored::Event, 0x0195A660)
DECLARE_EVENT_SOURCE(LocationLinked::Event, 0x0195A6D0)
DECLARE_EVENT_SOURCE(Activation::Event, 0x01A158F0)
DECLARE_EVENT_SOURCE(ActorCellChangeEvent, 0x01A272E0)
DECLARE_EVENT_SOURCE(ActorHeadAttachedEvent, 0x01A27350)
DECLARE_EVENT_SOURCE(ActorValueEvents::ActorValueChangedEvent, 0x01A273C0)
DECLARE_EVENT_SOURCE(AliasChangeEvent, 0x01A27430)
DECLARE_EVENT_SOURCE(AnimationGraphDependentEvent, 0x01A274A0)
DECLARE_EVENT_SOURCE(BGSAffinityEventEvent, 0x01A27510)
DECLARE_EVENT_SOURCE(BGSCellGridLoadEvent, 0x01A27580)
DECLARE_EVENT_SOURCE(BGSEventProcessedEvent, 0x01A275F0)
DECLARE_EVENT_SOURCE(BGSHavokWorldCreatedEvent, 0x01A27660)
DECLARE_EVENT_SOURCE(BGSLocationLoadedEvent, 0x01A276D0)
DECLARE_EVENT_SOURCE(BGSOnPlayerCompanionDismiss, 0x01A27740)
DECLARE_EVENT_SOURCE(BGSOnPlayerCompleteResearchEvent, 0x01A277B0)
DECLARE_EVENT_SOURCE(BGSOnPlayerCraftItemEvent, 0x01A27820)
DECLARE_EVENT_SOURCE(BGSOnPlayerCreateRobotEvent, 0x01A27890)
DECLARE_EVENT_SOURCE(BGSOnPlayerEnterVertibirdEvent, 0x01A27900)
DECLARE_EVENT_SOURCE(BGSOnPlayerFallLongDistances, 0x01A27970)
DECLARE_EVENT_SOURCE(BGSOnPlayerFireWeaponEvent, 0x01A279E0)
DECLARE_EVENT_SOURCE(BGSOnPlayerHealTeammateEvent, 0x01A27A50)
DECLARE_EVENT_SOURCE(BGSOnPlayerLoiteringBeginEvent, 0x01A27AC0)
DECLARE_EVENT_SOURCE(BGSOnPlayerLoiteringEndEvent, 0x01A27B30)
DECLARE_EVENT_SOURCE(BGSOnPlayerModArmorWeaponEvent, 0x01A27BA0)
DECLARE_EVENT_SOURCE(BGSOnPlayerModRobotEvent, 0x01A27C10)
DECLARE_EVENT_SOURCE(BGSOnPlayerSwimmingEvent, 0x01A27C80)
DECLARE_EVENT_SOURCE(BGSOnPlayerUseWorkBenchEvent, 0x01A27CF0)
DECLARE_EVENT_SOURCE(BGSOnSpeechChallengeAvailable, 0x01A27D60)
DECLARE_EVENT_SOURCE(BGSRadiationDamageEvent, 0x01A27DD0)
DECLARE_EVENT_SOURCE(BuilderMenuSelectEvent, 0x01A27E40)
DECLARE_EVENT_SOURCE(CrewAssignedEvent, 0x01A27EB0)
DECLARE_EVENT_SOURCE(CrewDismissedEvent, 0x01A27F20)
DECLARE_EVENT_SOURCE(DestroyedEvent, 0x01A27F90)
DECLARE_EVENT_SOURCE(HomeShipSetEvent, 0x01A28000)
DECLARE_EVENT_SOURCE(InstantReferenceInteractionEvent, 0x01A28070)
DECLARE_EVENT_SOURCE(ItemConsumedEvent, 0x01A280E0)
DECLARE_EVENT_SOURCE(ItemSwappedEvent, 0x01A28150)
DECLARE_EVENT_SOURCE(LockPickedEvent, 0x01A281C0)
DECLARE_EVENT_SOURCE(MapMarkerDiscoveredEvent, 0x01A28230)
DECLARE_EVENT_SOURCE(ObjectScannedEvent, 0x01A282A0)
DECLARE_EVENT_SOURCE(PlayerAddItemEvent, 0x01A28310)
DECLARE_EVENT_SOURCE(PlayerArrestedEvent, 0x01A28380)
DECLARE_EVENT_SOURCE(PlayerAssaultActorEvent, 0x01A283F0)
DECLARE_EVENT_SOURCE(PlayerBuyShipEvent, 0x01A28460)
DECLARE_EVENT_SOURCE(PlayerCrimeGoldEvent, 0x01A284D0)
DECLARE_EVENT_SOURCE(PlayerFailedPlotRouteEvent, 0x01A28540)
DECLARE_EVENT_SOURCE(PlayerJailEvent, 0x01A285B0)
DECLARE_EVENT_SOURCE(PlayerModifiedShipEvent, 0x01A28620)
DECLARE_EVENT_SOURCE(PlayerMurderActorEvent, 0x01A28690)
DECLARE_EVENT_SOURCE(PlayerPayFineEvent, 0x01A28700)
DECLARE_EVENT_SOURCE(PlayerPlanetSurveyCompleteEvent, 0x01A28770)
DECLARE_EVENT_SOURCE(PlayerPlanetSurveyProgressEvent, 0x01A287E0)
DECLARE_EVENT_SOURCE(PlayerSellShipEvent, 0x01A28850)
DECLARE_EVENT_SOURCE(PlayerTrespassEvent, 0x01A288C0)
DECLARE_EVENT_SOURCE(QuickContainerOpenedEvent, 0x01A28930)
DECLARE_EVENT_SOURCE(RefControlChangedEvent, 0x01A289A0)
DECLARE_EVENT_SOURCE(ReferenceDestroyedEvent, 0x01A28A10)
DECLARE_EVENT_SOURCE(SpeechChallengeCompletionEvent, 0x01A28A80)
DECLARE_EVENT_SOURCE(TESActivateEvent, 0x01A28AF0)
DECLARE_EVENT_SOURCE(TESActiveEffectApplyFinishEvent, 0x01A28B60)
DECLARE_EVENT_SOURCE(TESActiveEffectRemovedEvent, 0x01A28BD0)
DECLARE_EVENT_SOURCE(TESActorActivatedRefEvent, 0x01A28C40)
DECLARE_EVENT_SOURCE(TESActorLocationChangeEvent, 0x01A28CB0)
DECLARE_EVENT_SOURCE(TESBookReadEvent, 0x01A28D20)
DECLARE_EVENT_SOURCE(TESCellCriticalRefsAttachedEvent, 0x01A28D90)
DECLARE_EVENT_SOURCE(TESCellFullyLoadedEvent, 0x01A28E00)
DECLARE_EVENT_SOURCE(TESCellGravityChangeEvent, 0x01A28E70)
DECLARE_EVENT_SOURCE(TESCellReadyToApplyDecalsEvent, 0x01A28EE0)
DECLARE_EVENT_SOURCE(TESCellReference3DAttachEvent, 0x01A28F50)
DECLARE_EVENT_SOURCE(TESCellReferenceAttachDetachEvent, 0x01A28FC0)
DECLARE_EVENT_SOURCE(TESCombatEvent, 0x01A29030)
DECLARE_EVENT_SOURCE(TESCombatListEvent, 0x01A290A0)
DECLARE_EVENT_SOURCE(TESCommandModeCompleteCommandEvent, 0x01A29110)
DECLARE_EVENT_SOURCE(TESCommandModeEnterEvent, 0x01A29180)
DECLARE_EVENT_SOURCE(TESCommandModeExitEvent, 0x01A291F0)
DECLARE_EVENT_SOURCE(TESCommandModeGiveCommandEvent, 0x01A29260)
DECLARE_EVENT_SOURCE(TESConsciousnessEvent, 0x01A292D0)
DECLARE_EVENT_SOURCE(TESContainerChangedEvent, 0x01A29340)
DECLARE_EVENT_SOURCE(TESDeathEvent, 0x01A293B0)
DECLARE_EVENT_SOURCE(TESDeferredKillEvent, 0x01A29420)
DECLARE_EVENT_SOURCE(TESDestructionStageChangedEvent, 0x01A29490)
DECLARE_EVENT_SOURCE(TESEnterBleedoutEvent, 0x01A29500)
DECLARE_EVENT_SOURCE(TESEnterSneakingEvent, 0x01A29570)
DECLARE_EVENT_SOURCE(TESEquipEvent, 0x01A295E0)
DECLARE_EVENT_SOURCE(TESEscortWaitStartEvent, 0x01A29650)
DECLARE_EVENT_SOURCE(TESEscortWaitStopEvent, 0x01A296C0)
DECLARE_EVENT_SOURCE(TESExitBleedoutEvent, 0x01A29730)
DECLARE_EVENT_SOURCE(TESExitFurnitureEvent, 0x01A297A0)
DECLARE_EVENT_SOURCE(TESFormDeleteEvent, 0x01A29810)
DECLARE_EVENT_SOURCE(TESFormIDRemapEvent, 0x01A29880)
DECLARE_EVENT_SOURCE(TESFurnitureEvent, 0x01A298F0)
DECLARE_EVENT_SOURCE(TESGrabReleaseEvent, 0x01A29960)
DECLARE_EVENT_SOURCE(TESInitScriptEvent, 0x01A299D0)
DECLARE_EVENT_SOURCE(TESLimbCrippleEvent, 0x01A29A40)
DECLARE_EVENT_SOURCE(TESLoadGameEvent, 0x01A29AB0)
DECLARE_EVENT_SOURCE(TESLocationExploredEvent, 0x01A29B20)
DECLARE_EVENT_SOURCE(TESLockChangedEvent, 0x01A29B90)
DECLARE_EVENT_SOURCE(TESMagicEffectApplyEvent, 0x01A29C00)
DECLARE_EVENT_SOURCE(TESMissionAcceptedEvent, 0x01A29C70)
DECLARE_EVENT_SOURCE(TESObjectLoadedEvent, 0x01A29CE0)
DECLARE_EVENT_SOURCE(TESObjectREFRTranslationEvent, 0x01A29D50)
DECLARE_EVENT_SOURCE(TESOnPCDialogueTargetEvent, 0x01A29DC0)
DECLARE_EVENT_SOURCE(TESOpenCloseEvent, 0x01A29E30)
DECLARE_EVENT_SOURCE(TESPackageEvent, 0x01A29EA0)
DECLARE_EVENT_SOURCE(TESPerkEntryRunEvent, 0x01A29F10)
DECLARE_EVENT_SOURCE(TESPickNewIdleEvent, 0x01A29F80)
DECLARE_EVENT_SOURCE(TESPickpocketFailedEvent, 0x01A29FF0)
DECLARE_EVENT_SOURCE(TESPlayerActiveEffectEvent, 0x01A2A060)
DECLARE_EVENT_SOURCE(TESPlayerFollowerWarpEvent, 0x01A2A0D0)
DECLARE_EVENT_SOURCE(TESQuestInitEvent, 0x01A2A140)
DECLARE_EVENT_SOURCE(TESQuestRejectedEvent, 0x01A2A1B0)
DECLARE_EVENT_SOURCE(TESQuestStageEvent, 0x01A2A220)
DECLARE_EVENT_SOURCE(TESQuestStageItemDoneEvent, 0x01A2A290)
DECLARE_EVENT_SOURCE(TESQuestStartStopEvent, 0x01A2A300)
DECLARE_EVENT_SOURCE(TESQuestTimerEvent, 0x01A2A370)
DECLARE_EVENT_SOURCE(TESResetEvent, 0x01A2A3E0)
DECLARE_EVENT_SOURCE(TESResolveNPCTemplatesEvent, 0x01A2A450)
DECLARE_EVENT_SOURCE(TESSceneActionEvent, 0x01A2A4C0)
DECLARE_EVENT_SOURCE(TESSceneEvent, 0x01A2A530)
DECLARE_EVENT_SOURCE(TESScenePhaseEvent, 0x01A2A5A0)
DECLARE_EVENT_SOURCE(TESSellEvent, 0x01A2A610)
DECLARE_EVENT_SOURCE(TESSleepStartEvent, 0x01A2A680)
DECLARE_EVENT_SOURCE(TESSleepStopEvent, 0x01A2A6F0)
DECLARE_EVENT_SOURCE(TESSpellCastEvent, 0x01A2A760)
DECLARE_EVENT_SOURCE(TESSpellCastFailureEvent, 0x01A2A7D0)
DECLARE_EVENT_SOURCE(TESSwitchRaceCompleteEvent, 0x01A2A840)
DECLARE_EVENT_SOURCE(TESTopicInfoEvent, 0x01A2A8B0)
DECLARE_EVENT_SOURCE(TESTrackedStatsEvent, 0x01A2A920)
DECLARE_EVENT_SOURCE(TESTrapHitEvent, 0x01A2A990)
DECLARE_EVENT_SOURCE(TESTriggerEnterEvent, 0x01A2AA00)
DECLARE_EVENT_SOURCE(TESTriggerEvent, 0x01A2AA70)
DECLARE_EVENT_SOURCE(TESTriggerLeaveEvent, 0x01A2AAE0)
DECLARE_EVENT_SOURCE(TESUniqueIDChangeEvent, 0x01A2AB50)
DECLARE_EVENT_SOURCE(TESWaitStartEvent, 0x01A2ABC0)
DECLARE_EVENT_SOURCE(TESWaitStopEvent, 0x01A2AC30)
DECLARE_EVENT_SOURCE(TerminalMenuMenuItemRunEvent, 0x01A2ACA0)
DECLARE_EVENT_SOURCE(TerminalMenuOnEnterEvent, 0x01A2AD10)
DECLARE_EVENT_SOURCE(WorkshopNPCTransferEvent, 0x01A2AD80)
DECLARE_EVENT_SOURCE(TESObjectREFRIsReadyForAttachEvent, 0x01A2ADF0)
DECLARE_EVENT_SOURCE(DefaultObjectsReadyEvent::Event, 0x01A56F40)
DECLARE_EVENT_SOURCE(ObjectiveState::Event, 0x01AFFFB0)
DECLARE_EVENT_SOURCE(QuestStatus::Event, 0x01B60210)
DECLARE_EVENT_SOURCE(RefillAliasEvent::Event, 0x01B60280)
DECLARE_EVENT_SOURCE(TESQuestEvent::Event, 0x01B602F0)
DECLARE_EVENT_SOURCE(RolloverIsCrimeEvent::Event, 0x020491D0)
DECLARE_EVENT_SOURCE(HideSubtitleEvent::Event, 0x02054410)
DECLARE_EVENT_SOURCE(ShowSubtitleEvent::Event, 0x02054480)
DECLARE_EVENT_SOURCE(MissionMenuStateEvent::Event, 0x020A6890)
DECLARE_EVENT_SOURCE(ClearShipHudTarget::Event, 0x020FBE80)
DECLARE_EVENT_SOURCE(TryUpdateShipHudTarget::Event, 0x020FBEF0)
DECLARE_EVENT_SOURCE(LocationTextEvent::Event, 0x02156050)
DECLARE_EVENT_SOURCE(TraitDiscoveryTextEvent::Event, 0x021560C0)
DECLARE_EVENT_SOURCE(DaysPassed::Event, 0x023CE9A0)
DECLARE_EVENT_SOURCE(HourPassed::Event, 0x023CEA10)
DECLARE_EVENT_SOURCE(ActorDamage::Event, 0x024AA090)
DECLARE_EVENT_SOURCE(ActorItemEquipped::Event, 0x024AA100)
DECLARE_EVENT_SOURCE(ActorKill::Event, 0x024AA170)
DECLARE_EVENT_SOURCE(AssaultCrime::Event, 0x024AA1E0)
DECLARE_EVENT_SOURCE(DisarmedEvent::Event, 0x024AA250)
DECLARE_EVENT_SOURCE(FactionRankChange::Event, 0x024AA2C0)
DECLARE_EVENT_SOURCE(GrandTheftHorse::Event, 0x024AA330)
DECLARE_EVENT_SOURCE(MurderCrime::Event, 0x024AA3A0)
DECLARE_EVENT_SOURCE(PiracyCrime::Event, 0x024AA410)
DECLARE_EVENT_SOURCE(Bleedout::Event, 0x024D8680)
DECLARE_EVENT_SOURCE(ContractedDisease::Event, 0x024D86F0)
DECLARE_EVENT_SOURCE(ReloadWeaponEvent::Event, 0x024D8760)
DECLARE_EVENT_SOURCE(SpellsLearned::Event, 0x024E6D80)
DECLARE_EVENT_SOURCE(Bounty::Event, 0x025878C0)
DECLARE_EVENT_SOURCE(ChestLooted::Event, 0x02587930)
DECLARE_EVENT_SOURCE(CriticalHitEvent::Event, 0x025879A0)
DECLARE_EVENT_SOURCE(CustomMarkerUpdate::Event, 0x02587A10)
DECLARE_EVENT_SOURCE(DaysJailed::Event, 0x02587A80)
DECLARE_EVENT_SOURCE(EnteredUnity::Event, 0x02587AF0)
DECLARE_EVENT_SOURCE(FinePaid::Event, 0x02587B60)
DECLARE_EVENT_SOURCE(ItemCrafted::Event, 0x02587BD0)
DECLARE_EVENT_SOURCE(ItemSteal::Event, 0x02587C40)
DECLARE_EVENT_SOURCE(JailEscape::Event, 0x02587CB0)
DECLARE_EVENT_SOURCE(Jailing::Event, 0x02587D20)
DECLARE_EVENT_SOURCE(LevelIncrease::Event, 0x02587D90)
DECLARE_EVENT_SOURCE(LocationMarkerArrayUpdate::Event, 0x02587E00)
DECLARE_EVENT_SOURCE(PlayerActiveEffectChanged::Event, 0x02587E70)
DECLARE_EVENT_SOURCE(PlayerAmmoChanged::Event, 0x02587EE0)
DECLARE_EVENT_SOURCE(PlayerCharacterQuestEvent::Event, 0x02587F50)
DECLARE_EVENT_SOURCE(PlayerDifficultySettingChanged::Event, 0x02587FC0)
DECLARE_EVENT_SOURCE(PlayerFastTravel::Event, 0x02588030)
DECLARE_EVENT_SOURCE(PlayerInDialogueChanged::Event, 0x025880A0)
DECLARE_EVENT_SOURCE(PlayerLifeStateChanged::Event, 0x02588110)
DECLARE_EVENT_SOURCE(PlayerPickpocketSuccess::Event, 0x02588180)
DECLARE_EVENT_SOURCE(PoisonedWeapon::Event, 0x025881F0)
DECLARE_EVENT_SOURCE(TerminalHacked::Event, 0x02588260)
DECLARE_EVENT_SOURCE(TravelMarkerStateChange::Event, 0x025882D0)
DECLARE_EVENT_SOURCE(WeaponAttack::Event, 0x02588340)
DECLARE_EVENT_SOURCE(Trespass::Event, 0x025E5CA0)
DECLARE_EVENT_SOURCE(VATSEvents::ModeChange, 0x0264F350)
DECLARE_EVENT_SOURCE(VATSCommand, 0x0264F3C0)
DECLARE_EVENT_SOURCE(HoursPassed::Event, 0x028B6590)

// other events
DECLARE_EVENT_SOURCE(RadioManager::PipboyTransmitterDetectionEvent, 0x02358700)
DECLARE_EVENT_SOURCE_EX(XPChange::Event, 0x05068EC0)
DECLARE_EVENT_SOURCE_EX(WeaponFiredEvent, 0x0505C058)
DECLARE_EVENT_SOURCE_EX(ActorEquipManagerEvent::Event, 0x059F5E70)
DECLARE_EVENT_SOURCE_EX(ActorEquipManagerEvent::SpellEvent, 0x059F5E98)
DECLARE_EVENT_SOURCE_EX(AttachReference::Event, 0x05068E98)