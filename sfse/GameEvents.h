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
DECLARE_EVENT_SOURCE(RuntimeComponentDBFactory::ReferenceAttach, 0x012FAD10)
DECLARE_EVENT_SOURCE(RuntimeComponentDBFactory::ReferenceDetach, 0x012FADA0)
DECLARE_EVENT_SOURCE(WeaponGroupAssignmentMenu_ChangeWeaponAssignment, 0x01385C54)
DECLARE_EVENT_SOURCE(WeaponGroupAssignmentMenu_OnHintButtonActivated, 0x01385CE4)
DECLARE_EVENT_SOURCE(ShipEditor_OnExitConfirmCancel, 0x013A87F4)
DECLARE_EVENT_SOURCE(ShipEditor_OnExitConfirmExit, 0x013A8884)
DECLARE_EVENT_SOURCE(ShipEditor_OnExitConfirmSaveAndExit, 0x013A8914)
DECLARE_EVENT_SOURCE(ShipEditor_OnFlightCheckTabChanged, 0x013AD464)
DECLARE_EVENT_SOURCE(ShipEditor_OnWeaponGroupChanged, 0x013AD4F4)
DECLARE_EVENT_SOURCE(ShipEditor_OnRenameEndEditText, 0x013B2E30)
DECLARE_EVENT_SOURCE(ShipEditor_OnRenameInputCancelled, 0x013B2EC0)
DECLARE_EVENT_SOURCE(ShipEditor_ChangeModuleCategory, 0x013B76A4)
DECLARE_EVENT_SOURCE(ShipEditor_PreviewShipPart, 0x013B7734)
DECLARE_EVENT_SOURCE(ShipEditor_SelectedShipPart, 0x013B77C4)
DECLARE_EVENT_SOURCE(ShipEditor_OnColorPickerControlChanged, 0x013C0670)
DECLARE_EVENT_SOURCE(ShipEditor_OnColorPickerTabChanged, 0x013C0700)
DECLARE_EVENT_SOURCE(ShipEditor_OnColorSliderMouseInput, 0x013C0790)
DECLARE_EVENT_SOURCE(ShipEditor_OnRecentColorSwatchClicked, 0x013C0820)
DECLARE_EVENT_SOURCE(ShipBuilder_CloseAllMenus, 0x013E7088)
DECLARE_EVENT_SOURCE(ShipEditor_OnHintButtonActivated, 0x013E7118)
DECLARE_EVENT_SOURCE(ShipEditor_RemoveAll3D, 0x013E71A8)
DECLARE_EVENT_SOURCE(ReferenceQueuedEvent, 0x01452598)
DECLARE_EVENT_SOURCE(LoadScreenEndEvent, 0x0146C2AC)
DECLARE_EVENT_SOURCE(LoadScreenStartEvent, 0x0146C33C)
DECLARE_EVENT_SOURCE(CellAttachDetachEvent, 0x0146C3CC)
DECLARE_EVENT_SOURCE(PickRefStateChangedEvent, 0x014E3FE8)
DECLARE_EVENT_SOURCE(ActivityTrackerActivityStartedEvent, 0x014EE5A8)
DECLARE_EVENT_SOURCE(RuntimeComponentDBFactory::ReferenceCleared3d, 0x0157B490)
DECLARE_EVENT_SOURCE(RuntimeComponentDBFactory::ReferenceDestroy, 0x0157B520)
DECLARE_EVENT_SOURCE(RuntimeComponentDBFactory::ReferenceInit, 0x0157B5B0)
DECLARE_EVENT_SOURCE(RuntimeComponentDBFactory::ReferenceRecycle, 0x0157B640)
DECLARE_EVENT_SOURCE(RuntimeComponentDBFactory::ReferenceSet3d, 0x0157B6D0)
DECLARE_EVENT_SOURCE(RuntimeComponentDBFactory::Release3DRelatedData, 0x0157B760)
DECLARE_EVENT_SOURCE(BSWorldOriginShiftEvent, 0x01587C3C)
DECLARE_EVENT_SOURCE(BGSPlanet::PlayerKnowledgeFlagSetEvent, 0x016B111C)
DECLARE_EVENT_SOURCE(StarMap::PlanetTraitKnownEvent, 0x016B11AC)
DECLARE_EVENT_SOURCE(ResetHistoryDataEvent, 0x01784E68)
DECLARE_EVENT_SOURCE(TESQuestRewardEvent, 0x0179F108)
DECLARE_EVENT_SOURCE(HUDWeaponWorldFOVMultChangedEvent, 0x017A132C)
DECLARE_EVENT_SOURCE(BGSSceneActionPlayerDialogue::ActionEndEvent, 0x018975AC)
DECLARE_EVENT_SOURCE(BGSSceneActionPlayerDialogue::ActionStartEvent, 0x0189763C)
DECLARE_EVENT_SOURCE(AutoLoadDoorRolloverEvent, 0x01947F9C)
DECLARE_EVENT_SOURCE(ClearQuickContainerEvent, 0x0194802C)
DECLARE_EVENT_SOURCE(ReferenceCellLoadedTemps, 0x019C10DC)
DECLARE_EVENT_SOURCE(Workshop::CargoLinkAddedEvent, 0x01D76E5C)
DECLARE_EVENT_SOURCE(Workshop::CargoLinkTargetChangedEvent, 0x01D76EEC)
DECLARE_EVENT_SOURCE(Workshop::EnterOutpostBeaconModeEvent, 0x01D76F7C)
DECLARE_EVENT_SOURCE(Workshop::ItemGrabbedEvent, 0x01D7700C)
DECLARE_EVENT_SOURCE(Workshop::ItemMovedEvent, 0x01D7709C)
DECLARE_EVENT_SOURCE(Workshop::ItemPlacedEvent, 0x01D7712C)
DECLARE_EVENT_SOURCE(Workshop::ItemProducedEvent, 0x01D771BC)
DECLARE_EVENT_SOURCE(Workshop::ItemRemovedEvent, 0x01D7724C)
DECLARE_EVENT_SOURCE(Workshop::ItemRepairedEvent, 0x01D772DC)
DECLARE_EVENT_SOURCE(Workshop::ItemScrappedEvent, 0x01D7736C)
DECLARE_EVENT_SOURCE(Workshop::OutpostNameChangedEvent, 0x01D773FC)
DECLARE_EVENT_SOURCE(Workshop::OutpostPlacedEvent, 0x01D7748C)
DECLARE_EVENT_SOURCE(PickRefUpdateEvent, 0x01D7751C)
DECLARE_EVENT_SOURCE(Workshop::PlacementStatusEvent, 0x01D775AC)
DECLARE_EVENT_SOURCE(Workshop::PowerOffEvent, 0x01D7763C)
DECLARE_EVENT_SOURCE(Workshop::PowerOnEvent, 0x01D776CC)
DECLARE_EVENT_SOURCE(Workshop::SnapBehaviorCycledEvent, 0x01D7775C)
DECLARE_EVENT_SOURCE(Workshop::WorkshopFlyCameraEvent, 0x01D777EC)
DECLARE_EVENT_SOURCE(Workshop::WorkshopItemPlacedEvent, 0x01D7787C)
DECLARE_EVENT_SOURCE(Workshop::WorkshopModeEvent, 0x01D7790C)
DECLARE_EVENT_SOURCE(Workshop::WorkshopOutputLinkEvent, 0x01D7799C)
DECLARE_EVENT_SOURCE(Workshop::WorkshopStatsChangedEvent, 0x01D77A2C)
DECLARE_EVENT_SOURCE(Workshop::WorkshopUpdateStatsEvent, 0x01D77ABC)
DECLARE_EVENT_SOURCE(ShipCameraStateToggled, 0x01DD2314)
DECLARE_EVENT_SOURCE(PlayerControls::PlayerJumpPressEvent, 0x01FA2514)
DECLARE_EVENT_SOURCE(PlayerControls::PlayerJumpReleaseEvent, 0x01FA25A4)
DECLARE_EVENT_SOURCE(PlayerSneakingChangeEvent, 0x01FA3D6C)
DECLARE_EVENT_SOURCE(PlayerControls::PlayerZeroGSprintJustPressedEvent, 0x01FA3FA8)
DECLARE_EVENT_SOURCE(PlayerControls::PlayerZeroGSprintReleasedEvent, 0x01FA4038)
DECLARE_EVENT_SOURCE(PlayerControls::PlayerIronSightsEndEvent, 0x01FA71BC)
DECLARE_EVENT_SOURCE(PlayerControls::PlayerIronSightsStartEvent, 0x01FA724C)
DECLARE_EVENT_SOURCE(SaveLoadEvent, 0x01FD6CEC)
DECLARE_EVENT_SOURCE(SpaceshipWeaponBinding::SpaceshipWeaponBindingChangedEvent, 0x02009398)
DECLARE_EVENT_SOURCE(BoundaryMenu_FastTravel, 0x02032008)
DECLARE_EVENT_SOURCE(BoundaryMenu_ShowMap, 0x02032098)
DECLARE_EVENT_SOURCE(PhotoGallery_DeletePhoto, 0x02092C94)
DECLARE_EVENT_SOURCE(PowersMenu_ActivateEssence, 0x02096170)
DECLARE_EVENT_SOURCE(PowersMenu_EquipPower, 0x02096200)
DECLARE_EVENT_SOURCE(PowersMenu_FavoritePower, 0x02096290)
DECLARE_EVENT_SOURCE(ContainerMenuClosed::Event, 0x020A9888)
DECLARE_EVENT_SOURCE(HangarShipSelection_ChangeSystemDisplay, 0x020A9918)
DECLARE_EVENT_SOURCE(HangarShipSelection_RepairShip, 0x020A99A8)
DECLARE_EVENT_SOURCE(HangarShipSelection_UpgradeSystem, 0x020A9A38)
DECLARE_EVENT_SOURCE(ShipCrewMenu_Close, 0x020A9AC8)
DECLARE_EVENT_SOURCE(BinkMovieStoppedPlayingEvent, 0x020AEB00)
DECLARE_EVENT_SOURCE(WorkshopColorMode_ApplyColors, 0x0210DF0C)
DECLARE_EVENT_SOURCE(WorkshopColorMode_SelectedTab, 0x0210DF9C)
DECLARE_EVENT_SOURCE(WorkshopColorMode_SliderChanged, 0x0210E02C)
DECLARE_EVENT_SOURCE(WorkshopColorMode_SwatchChanged, 0x0210E0BC)
DECLARE_EVENT_SOURCE(HUDCrewBuffMessageEvent, 0x0210F25C)
DECLARE_EVENT_SOURCE(CraftingMenu_SessionSummaryEvent, 0x02118338)
DECLARE_EVENT_SOURCE(CraftingMenu_CraftItem, 0x021183C8)
DECLARE_EVENT_SOURCE(CraftingMenu_ExitBench, 0x02118458)
DECLARE_EVENT_SOURCE(CraftingMenu_InstallMod, 0x021184E8)
DECLARE_EVENT_SOURCE(CraftingMenu_RenameItem, 0x02118578)
DECLARE_EVENT_SOURCE(CraftingMenu_RevertedModdedItem, 0x02118608)
DECLARE_EVENT_SOURCE(CraftingMenu_SelectedMod, 0x02118698)
DECLARE_EVENT_SOURCE(CraftingMenu_SelectedModSlot, 0x02118728)
DECLARE_EVENT_SOURCE(CraftingMenu_SelectedModdableItem, 0x021187B8)
DECLARE_EVENT_SOURCE(CraftingMenu_SelectedRecipe, 0x02118848)
DECLARE_EVENT_SOURCE(CraftingMenu_SetInspectControls, 0x021188D8)
DECLARE_EVENT_SOURCE(CraftingMenu_ToggleTracking, 0x02118968)
DECLARE_EVENT_SOURCE(CraftingMenu_ViewingModdableItem, 0x021189F8)
DECLARE_EVENT_SOURCE(ContainerMenu_CloseMenu, 0x02126BBC)
DECLARE_EVENT_SOURCE(InventoryMenu_Change3DView, 0x02126CEC)
DECLARE_EVENT_SOURCE(InventoryMenu_PaperDollTryOn, 0x02126D7C)
DECLARE_EVENT_SOURCE(InventoryMenu_ResetPaperDollInv, 0x02126E0C)
DECLARE_EVENT_SOURCE(UpdateActivateListenerEvent, 0x0212EE28)
DECLARE_EVENT_SOURCE(StartOutpostFromListenerEvent, 0x02130AE8)
DECLARE_EVENT_SOURCE(HUDModeEvent, 0x02140D8C)
DECLARE_EVENT_SOURCE(OpenContainerMenuEventData, 0x02140E1C)
DECLARE_EVENT_SOURCE(OpenContainerMenuFromListenerEvent, 0x02140EAC)
DECLARE_EVENT_SOURCE(HUDRolloverActivationButtonEvent, 0x02140F3C)
DECLARE_EVENT_SOURCE(HUDRolloverActivationQCItemPressEvent, 0x02140FCC)
DECLARE_EVENT_SOURCE(Inventory_SetSort, 0x0214105C)
DECLARE_EVENT_SOURCE(ShowingQuestMarketTextEvent, 0x0214E538)
DECLARE_EVENT_SOURCE(TargetHitEvent, 0x02150B38)
DECLARE_EVENT_SOURCE(BSTValueRequestEvent<PlayerCrosshairModeEvent>, 0x02150BC8)
DECLARE_EVENT_SOURCE(ClearHUDMessagesEvent, 0x02158024)
DECLARE_EVENT_SOURCE(ShowHUDMessageEvent, 0x021580B4)
DECLARE_EVENT_SOURCE(PlayerDetectionLevelChangeEvent, 0x0215B254)
DECLARE_EVENT_SOURCE(ShowCustomWatchAlert, 0x02160364)
DECLARE_EVENT_SOURCE(PlayerUpdateEvent, 0x0219D6AC)
DECLARE_EVENT_SOURCE(InventoryMenu_ToggleHelmet, 0x0219D73C)
DECLARE_EVENT_SOURCE(InventoryMenu_ToggleSuit, 0x0219D7CC)
DECLARE_EVENT_SOURCE(ControlsRemappedEvent, 0x021E5878)
DECLARE_EVENT_SOURCE(SettingsPanel_CheckBoxChanged, 0x021E5908)
DECLARE_EVENT_SOURCE(SettingsPanel_ClearBinding, 0x021E5998)
DECLARE_EVENT_SOURCE(SettingsPanel_OpenCategory, 0x021E5ACC)
DECLARE_EVENT_SOURCE(SettingsPanel_OpenSettings, 0x021E5B5C)
DECLARE_EVENT_SOURCE(SettingsPanel_RemapConfirmed, 0x021E5BEC)
DECLARE_EVENT_SOURCE(SettingsPanel_RemapMode, 0x021E5C7C)
DECLARE_EVENT_SOURCE(SettingsPanel_ResetToDefaults, 0x021E5D0C)
DECLARE_EVENT_SOURCE(SettingsPanel_SaveControls, 0x021E5D9C)
DECLARE_EVENT_SOURCE(SettingsPanel_SaveSettings, 0x021E5E2C)
DECLARE_EVENT_SOURCE(SettingsPanel_SliderChanged, 0x021E5EBC)
DECLARE_EVENT_SOURCE(SettingsPanel_StepperChanged, 0x021E5F4C)
DECLARE_EVENT_SOURCE(SettingsPanel_ValidateControls, 0x021E5FDC)
DECLARE_EVENT_SOURCE(ShipCrewMenu_OpenAssignMenu, 0x021F0A38)
DECLARE_EVENT_SOURCE(ShipCrewMenu_SetSort, 0x021F0AC8)
DECLARE_EVENT_SOURCE(Spaceship::PlayerMovementOutputEvent, 0x022162D8)
DECLARE_EVENT_SOURCE(ShowLongShipBootup, 0x02216368)
DECLARE_EVENT_SOURCE(ShipHudQuickContainer_TransferMenu, 0x022163F8)
DECLARE_EVENT_SOURCE(ShipHud_Activate, 0x02216488)
DECLARE_EVENT_SOURCE(ShipHud_BodyViewMarkerDimensions, 0x02216518)
DECLARE_EVENT_SOURCE(ShipHud_ChangeComponentSelection, 0x022165A8)
DECLARE_EVENT_SOURCE(ShipHud_CloseMenu, 0x02216638)
DECLARE_EVENT_SOURCE(ShipHud_Deselect, 0x022166C8)
DECLARE_EVENT_SOURCE(ShipHud_FarTravel, 0x02216758)
DECLARE_EVENT_SOURCE(ShipHud_HailAccepted, 0x022167E8)
DECLARE_EVENT_SOURCE(ShipHud_HailCancelled, 0x02216878)
DECLARE_EVENT_SOURCE(ShipHud_JumpToQuestMarker, 0x02216908)
DECLARE_EVENT_SOURCE(ShipHud_Land, 0x02216998)
DECLARE_EVENT_SOURCE(ShipHud_LandingMarkerMap, 0x02216A28)
DECLARE_EVENT_SOURCE(ShipHud_Map, 0x02216AB8)
DECLARE_EVENT_SOURCE(ShipHud_OnMonocleToggle, 0x02216B48)
DECLARE_EVENT_SOURCE(ShipHud_OpenPhotoMode, 0x02216BD8)
DECLARE_EVENT_SOURCE(ShipHud_Repair, 0x02216C68)
DECLARE_EVENT_SOURCE(ShipHud_SetTargetMode, 0x02216CF8)
DECLARE_EVENT_SOURCE(ShipHud_Target, 0x02216D88)
DECLARE_EVENT_SOURCE(ShipHud_TargetShipSystem, 0x02216E18)
DECLARE_EVENT_SOURCE(ShipHud_UntargetShipSystem, 0x02216EA8)
DECLARE_EVENT_SOURCE(ShipHud_UpdateComponentPower, 0x02216F38)
DECLARE_EVENT_SOURCE(DialogueMenu_CompleteExit, 0x02242ACC)
DECLARE_EVENT_SOURCE(BGSScannerGuideEffectStatusUpdateEvent, 0x02253580)
DECLARE_EVENT_SOURCE(GlobalFunc_CloseAllMenus, 0x022585A8)
DECLARE_EVENT_SOURCE(GlobalFunc_CloseMenu, 0x02258638)
DECLARE_EVENT_SOURCE(GlobalFunc_PlayMenuSound, 0x022586C8)
DECLARE_EVENT_SOURCE(GlobalFunc_StartGameRender, 0x02258758)
DECLARE_EVENT_SOURCE(GlobalFunc_UserEvent, 0x022587E8)
DECLARE_EVENT_SOURCE(ExperienceMeterDisplayData, 0x022620F8)
DECLARE_EVENT_SOURCE(LevelUp_AnimFinished, 0x02262188)
DECLARE_EVENT_SOURCE(LevelUp_OnWidgetShown, 0x02262218)
DECLARE_EVENT_SOURCE(LevelUp_OpenDataMenu, 0x022622A8)
DECLARE_EVENT_SOURCE(LevelUp_ShowSkills, 0x02262338)
DECLARE_EVENT_SOURCE(LocationTextWidget_FinishedQueue, 0x022623C8)
DECLARE_EVENT_SOURCE(DisplayFatigueWarningEvent, 0x02262670)
DECLARE_EVENT_SOURCE(BSTValueRequestEvent<SaveLoadMessageStringEvent>, 0x0226613C)
DECLARE_EVENT_SOURCE(PlayerCrosshairModeEvent, 0x02150230)
DECLARE_EVENT_SOURCE(HUDNotificationEvent, 0x0226F3A8)
DECLARE_EVENT_SOURCE(HUDNotification_MissionActiveWidgetUpdate, 0x0226F438)
DECLARE_EVENT_SOURCE(HUDNotification_OpenDataMenu, 0x0226F4C8)
DECLARE_EVENT_SOURCE(HUDNotification_OpenMissionMenu, 0x0226F558)
DECLARE_EVENT_SOURCE(HUDNotification_SetMissionActive, 0x0226F5E8)
DECLARE_EVENT_SOURCE(PlayerSetWeaponStateEvent, 0x022711C8)
DECLARE_EVENT_SOURCE(BarterMenu_BuyItem, 0x02284788)
DECLARE_EVENT_SOURCE(BarterMenu_CloseMenu, 0x02284818)
DECLARE_EVENT_SOURCE(BarterMenu_HideModel, 0x022848A8)
DECLARE_EVENT_SOURCE(BarterMenu_LoadModel, 0x02284938)
DECLARE_EVENT_SOURCE(BarterMenu_SellItem, 0x022849C8)
DECLARE_EVENT_SOURCE(BarterMenu_SetMouseOverModel, 0x02284A58)
DECLARE_EVENT_SOURCE(BarterMenu_ShowFailureMessage, 0x02284AE8)
DECLARE_EVENT_SOURCE(BarterMenu_ViewedItem, 0x02284B78)
DECLARE_EVENT_SOURCE(MissionMenu_ClearState, 0x02289180)
DECLARE_EVENT_SOURCE(MissionMenu_PlotToLocation, 0x02289210)
DECLARE_EVENT_SOURCE(MissionMenu_RejectQuest, 0x022892A0)
DECLARE_EVENT_SOURCE(MissionMenu_SaveCategoryIndex, 0x02289330)
DECLARE_EVENT_SOURCE(MissionMenu_SaveOpenedId, 0x022893C0)
DECLARE_EVENT_SOURCE(MissionMenu_ShowItemLocation, 0x02289450)
DECLARE_EVENT_SOURCE(MissionMenu_ToggleTrackingQuest, 0x0228957C)
DECLARE_EVENT_SOURCE(DataSlateButtons_acceptClicked, 0x0228ECB8)
DECLARE_EVENT_SOURCE(DataSlateButtons_cancelClicked, 0x0228ED48)
DECLARE_EVENT_SOURCE(DataSlateMenu_playSFX, 0x0228EDD8)
DECLARE_EVENT_SOURCE(DataSlateMenu_toggleAudio, 0x0228EE68)
DECLARE_EVENT_SOURCE(InventoryMenu_DropItem, 0x02295AF4)
DECLARE_EVENT_SOURCE(InventoryMenu_HideModel, 0x02295B84)
DECLARE_EVENT_SOURCE(InventoryMenu_LoadModel, 0x02295C14)
DECLARE_EVENT_SOURCE(InventoryMenu_OnEnterCategory, 0x02295CA4)
DECLARE_EVENT_SOURCE(InventoryMenu_OpenCargoHold, 0x02295D34)
DECLARE_EVENT_SOURCE(InventoryMenu_SelectItem, 0x02295DC4)
DECLARE_EVENT_SOURCE(InventoryMenu_SetMouseOverModel, 0x02295E54)
DECLARE_EVENT_SOURCE(InventoryMenu_ToggleFavorite, 0x02295F8C)
DECLARE_EVENT_SOURCE(MissionBoard_MissionEntryChanged, 0x022A2448)
DECLARE_EVENT_SOURCE(MissionBoard_MissionEntryPressed, 0x022A24D8)
DECLARE_EVENT_SOURCE(MonocleMenu_Bioscan, 0x022AA1D8)
DECLARE_EVENT_SOURCE(MonocleMenu_FastTravel, 0x022AA268)
DECLARE_EVENT_SOURCE(MonocleMenu_Harvest, 0x022AA2F8)
DECLARE_EVENT_SOURCE(MonocleMenu_Initialize, 0x022AA388)
DECLARE_EVENT_SOURCE(MonocleMenu_Outpost, 0x022AA4BC)
DECLARE_EVENT_SOURCE(MonocleMenu_PhotoMode, 0x022AA54C)
DECLARE_EVENT_SOURCE(MonocleMenu_Shutdown, 0x022AA5DC)
DECLARE_EVENT_SOURCE(MonocleMenu_SocialSpell, 0x022AA66C)
DECLARE_EVENT_SOURCE(MonocleMenu_StartContainerView, 0x022AA6FC)
DECLARE_EVENT_SOURCE(MonocleMenu_StopContainerView, 0x022AA78C)
DECLARE_EVENT_SOURCE(MonocleMenu_SurfaceMap, 0x022AA81C)
DECLARE_EVENT_SOURCE(MonocleMenu_UseListScrollControls, 0x022AA8AC)
DECLARE_EVENT_SOURCE(MonocleMenu_ZoomIn, 0x022AA93C)
DECLARE_EVENT_SOURCE(MonocleMenu_ZoomOut, 0x022AA9CC)
DECLARE_EVENT_SOURCE(PhotoMode_InitializeCategory, 0x022B026C)
DECLARE_EVENT_SOURCE(PhotoMode_ResetToDefaults, 0x022B039C)
DECLARE_EVENT_SOURCE(PhotoMode_SliderChanged, 0x022B042C)
DECLARE_EVENT_SOURCE(PhotoMode_StepperChanged, 0x022B04BC)
DECLARE_EVENT_SOURCE(PhotoMode_TakeSnapshot, 0x022B054C)
DECLARE_EVENT_SOURCE(PhotoMode_ToggleHelmet, 0x022B05DC)
DECLARE_EVENT_SOURCE(PhotoMode_ToggleUI, 0x022B066C)
DECLARE_EVENT_SOURCE(PickpocketMenu_OnItemSelect, 0x022B90A4)
DECLARE_EVENT_SOURCE(ResearchMenu_AddMaterial, 0x022BE518)
DECLARE_EVENT_SOURCE(ResearchMenu_CategorySelected, 0x022BE5A8)
DECLARE_EVENT_SOURCE(ResearchMenu_ExitMenu, 0x022BE638)
DECLARE_EVENT_SOURCE(ResearchMenu_HideModel, 0x022BE6C8)
DECLARE_EVENT_SOURCE(ResearchMenu_PreviewProject, 0x022BE758)
DECLARE_EVENT_SOURCE(ResearchMenu_ProjectViewed, 0x022BE7E8)
DECLARE_EVENT_SOURCE(ResearchMenu_SetInspectControls, 0x022BE878)
DECLARE_EVENT_SOURCE(ResearchMenu_ToggleTrackingProject, 0x022BE908)
DECLARE_EVENT_SOURCE(UnlockedTerminalElementEvent, 0x022D0908)
DECLARE_EVENT_SOURCE(SecurityMenu_BackOutKey, 0x022D0998)
DECLARE_EVENT_SOURCE(SecurityMenu_CloseMenu, 0x022D0A28)
DECLARE_EVENT_SOURCE(SecurityMenu_ConfirmExit, 0x022D0AB8)
DECLARE_EVENT_SOURCE(SecurityMenu_EliminateUnusedKeys, 0x022D0B48)
DECLARE_EVENT_SOURCE(SecurityMenu_GetRingHint, 0x022D0BD8)
DECLARE_EVENT_SOURCE(SecurityMenu_SelectNewKey, 0x022D0C68)
DECLARE_EVENT_SOURCE(SecurityMenu_TryUseKey, 0x022D0CF8)
DECLARE_EVENT_SOURCE(ShipCrewAssignMenu_Assign, 0x022D4CB4)
DECLARE_EVENT_SOURCE(ShipCrewAssignMenu_Unassign, 0x022D4D44)
DECLARE_EVENT_SOURCE(ShipCrewMenu_ViewedItem, 0x022D4DD4)
DECLARE_EVENT_SOURCE(Refuel_Accept, 0x022D6C74)
DECLARE_EVENT_SOURCE(Refuel_Cancel, 0x022D6D04)
DECLARE_EVENT_SOURCE(SkillsMenu_Accept, 0x022DD798)
DECLARE_EVENT_SOURCE(SkillsMenu_AddPatch, 0x022DD828)
DECLARE_EVENT_SOURCE(SkillsMenu_Cancel, 0x022DD8B8)
DECLARE_EVENT_SOURCE(SkillsMenu_ChangeCursorVisibility, 0x022DD948)
DECLARE_EVENT_SOURCE(SkillsMenu_SaveLastCategory, 0x022DD9D8)
DECLARE_EVENT_SOURCE(BSChargenAPI::BIDataUtils::MenuClosedEvent, 0x023022BC)
DECLARE_EVENT_SOURCE(BSChargenAPI::BIDataUtils::PresetNPCChangedEvent, 0x0230234C)
DECLARE_EVENT_SOURCE(CharGen_BrowChange, 0x023023DC)
DECLARE_EVENT_SOURCE(CharGen_BrowColorChange, 0x0230246C)
DECLARE_EVENT_SOURCE(CharGen_CancelTextEntry, 0x023024FC)
DECLARE_EVENT_SOURCE(CharGen_CloseMenu, 0x0230258C)
DECLARE_EVENT_SOURCE(CharGen_CyclePronoun, 0x0230261C)
DECLARE_EVENT_SOURCE(CharGen_DirtScarsEtcChange, 0x023026AC)
DECLARE_EVENT_SOURCE(CharGen_EndBodyChange, 0x0230273C)
DECLARE_EVENT_SOURCE(CharGen_EndTextEntry, 0x023027CC)
DECLARE_EVENT_SOURCE(CharGen_EyeColorChange, 0x0230285C)
DECLARE_EVENT_SOURCE(CharGen_FacialHairChange, 0x023028EC)
DECLARE_EVENT_SOURCE(CharGen_FacialHairColorChange, 0x0230297C)
DECLARE_EVENT_SOURCE(CharGen_HairChange, 0x02302A0C)
DECLARE_EVENT_SOURCE(CharGen_HairColorChange, 0x02302A9C)
DECLARE_EVENT_SOURCE(CharGen_HeadpartPlusSelectorChange, 0x02302B2C)
DECLARE_EVENT_SOURCE(CharGen_HeadpartPresetChange, 0x02302BBC)
DECLARE_EVENT_SOURCE(CharGen_JewelryChange, 0x02302C4C)
DECLARE_EVENT_SOURCE(CharGen_JewelryColorChange, 0x02302CDC)
DECLARE_EVENT_SOURCE(CharGen_MakeupChange, 0x02302D6C)
DECLARE_EVENT_SOURCE(CharGen_MarkingsChange, 0x02302DFC)
DECLARE_EVENT_SOURCE(CharGen_PostBlendColorOptionChange, 0x02302E8C)
DECLARE_EVENT_SOURCE(CharGen_PostBlendFaceChange, 0x02302F1C)
DECLARE_EVENT_SOURCE(CharGen_PostBlendIntensityChange, 0x02302FAC)
DECLARE_EVENT_SOURCE(CharGen_PresetChange, 0x0230303C)
DECLARE_EVENT_SOURCE(CharGen_RollOffLocomotion, 0x023030CC)
DECLARE_EVENT_SOURCE(CharGen_RollOnLocomotion, 0x0230315C)
DECLARE_EVENT_SOURCE(CharGen_RotatePaperdoll, 0x023031EC)
DECLARE_EVENT_SOURCE(CharGen_SetAdditionalSlider, 0x0230327C)
DECLARE_EVENT_SOURCE(CharGen_SetBackground, 0x0230330C)
DECLARE_EVENT_SOURCE(CharGen_SetBlockInputUnderPopup, 0x0230339C)
DECLARE_EVENT_SOURCE(CharGen_SetBodyValues, 0x0230342C)
DECLARE_EVENT_SOURCE(CharGen_SetCameraPosition, 0x023034BC)
DECLARE_EVENT_SOURCE(CharGen_SetPronoun, 0x0230354C)
DECLARE_EVENT_SOURCE(CharGen_SetSex, 0x023035DC)
DECLARE_EVENT_SOURCE(CharGen_SetSlider, 0x0230366C)
DECLARE_EVENT_SOURCE(CharGen_SetTrait, 0x023036FC)
DECLARE_EVENT_SOURCE(CharGen_ShowChooseBackgroundMessage, 0x0230378C)
DECLARE_EVENT_SOURCE(CharGen_ShowPlayerRenameMessage, 0x0230381C)
DECLARE_EVENT_SOURCE(CharGen_SkintoneChange, 0x023038AC)
DECLARE_EVENT_SOURCE(CharGen_StartBodyChange, 0x0230393C)
DECLARE_EVENT_SOURCE(CharGen_StartTextEntry, 0x023039CC)
DECLARE_EVENT_SOURCE(CharGen_SwitchBodyType, 0x02303A5C)
DECLARE_EVENT_SOURCE(CharGen_SwitchLocomotion, 0x02303AEC)
DECLARE_EVENT_SOURCE(CharGen_TeethChange, 0x02303B7C)
DECLARE_EVENT_SOURCE(CharGen_TeethRollOff, 0x02303C0C)
DECLARE_EVENT_SOURCE(CharGen_TeethRollOn, 0x02303C9C)
DECLARE_EVENT_SOURCE(CharGen_ToggleMarking, 0x02303D2C)
DECLARE_EVENT_SOURCE(CharGen_TogglePreviewHabSuit, 0x02303DBC)
DECLARE_EVENT_SOURCE(UIMenuChargenMenuDisablePaperdoll, 0x02303E4C)
DECLARE_EVENT_SOURCE(DataMenu_CloseMenu, 0x0230AF48)
DECLARE_EVENT_SOURCE(DataMenu_ClosedForSubMenu, 0x0230AFD8)
DECLARE_EVENT_SOURCE(DataMenu_Missions, 0x0230B068)
DECLARE_EVENT_SOURCE(DataMenu_PlotToLocation, 0x0230B19C)
DECLARE_EVENT_SOURCE(DataMenu_Reopened, 0x0230B22C)
DECLARE_EVENT_SOURCE(DataMenu_SelectedAttributesMenu, 0x0230B2BC)
DECLARE_EVENT_SOURCE(DataMenu_SelectedInventoryMenu, 0x0230B34C)
DECLARE_EVENT_SOURCE(DataMenu_SelectedMapMenu, 0x0230B3DC)
DECLARE_EVENT_SOURCE(DataMenu_SelectedPowersMenu, 0x0230B46C)
DECLARE_EVENT_SOURCE(DataMenu_SelectedShipMenu, 0x0230B4FC)
DECLARE_EVENT_SOURCE(DataMenu_SelectedStatusMenu, 0x0230B58C)
DECLARE_EVENT_SOURCE(DataMenu_SetMenuForQuickEntry, 0x0230B61C)
DECLARE_EVENT_SOURCE(DataMenu_SetPaperDollActive, 0x0230B6AC)
DECLARE_EVENT_SOURCE(PauseMenu_ActionCanceled, 0x02316684)
DECLARE_EVENT_SOURCE(PauseMenu_ConfirmAction, 0x02316714)
DECLARE_EVENT_SOURCE(PauseMenu_ConfirmLoad, 0x023167A4)
DECLARE_EVENT_SOURCE(PauseMenu_ConfirmSave, 0x02316834)
DECLARE_EVENT_SOURCE(PauseMenu_DeleteSave, 0x023168C4)
DECLARE_EVENT_SOURCE(PauseMenu_QuitToDesktop, 0x02316954)
DECLARE_EVENT_SOURCE(PauseMenu_SetCharacter, 0x023169E4)
DECLARE_EVENT_SOURCE(PauseMenu_StartAction, 0x02316A74)
DECLARE_EVENT_SOURCE(PauseMenu_StartLoad, 0x02316B04)
DECLARE_EVENT_SOURCE(PauseMenu_UploadSave, 0x02316B94)
DECLARE_EVENT_SOURCE(PlayBink_CloseMenu, 0x02317E10)
DECLARE_EVENT_SOURCE(Spaceship::GravJumpEvent, 0x0231DA64)
DECLARE_EVENT_SOURCE(Spaceship::LandedSetEvent, 0x0231DAF4)
DECLARE_EVENT_SOURCE(Reticle_OnLongAnimFinished, 0x0231DB84)
DECLARE_EVENT_SOURCE(ShipHudQuickContainer_TransferItem, 0x0231DC14)
DECLARE_EVENT_SOURCE(ShipHud_AbortJump, 0x0231DCA4)
DECLARE_EVENT_SOURCE(ShipHud_DockRequested, 0x0231DD34)
DECLARE_EVENT_SOURCE(ShipHud_HailShip, 0x0231DDC4)
DECLARE_EVENT_SOURCE(ShipHud_UpdateTargetPanelRect, 0x0231DE54)
DECLARE_EVENT_SOURCE(TakeoffMenu_CloseMenu, 0x0231DEE4)
DECLARE_EVENT_SOURCE(TakeoffMenu_ExitShip, 0x0231DF74)
DECLARE_EVENT_SOURCE(TakeoffMenu_Launch, 0x0231E004)
DECLARE_EVENT_SOURCE(StarMapMenu_LandingInputInProgress, 0x0233DDC0)
DECLARE_EVENT_SOURCE(StarMapMenu_MarkerGroupContainerVisibilityChanged, 0x0233DE50)
DECLARE_EVENT_SOURCE(StarMapMenu_MarkerGroupEntryClicked, 0x0233DEE0)
DECLARE_EVENT_SOURCE(StarMapMenu_MarkerGroupEntryHoverChanged, 0x0233DF70)
DECLARE_EVENT_SOURCE(StarMapMenu_ScanPlanet, 0x0233E000)
DECLARE_EVENT_SOURCE(StarMapMenu_SelectedLandingSite, 0x0233E090)
DECLARE_EVENT_SOURCE(StarMapMenu_SelectedLandingSiteFailed, 0x0233E120)
DECLARE_EVENT_SOURCE(StarMapMenu_ShowRealCursor, 0x0233E1B0)
DECLARE_EVENT_SOURCE(StarMapMenu_QuickSelectChange, 0x023534B0)
DECLARE_EVENT_SOURCE(StarMapMenu_Galaxy_FocusSystem, 0x02364B90)
DECLARE_EVENT_SOURCE(StarMapMenu_OnGalaxyViewInitialized, 0x02364C20)
DECLARE_EVENT_SOURCE(StarMapMenu_ExecuteRoute, 0x0236F458)
DECLARE_EVENT_SOURCE(StarMapMenu_OnCancel, 0x0236F4E8)
DECLARE_EVENT_SOURCE(StarMapMenu_OnClearRoute, 0x0236F578)
DECLARE_EVENT_SOURCE(StarMapMenu_OnExitStarMap, 0x0236F608)
DECLARE_EVENT_SOURCE(StarMapMenu_OnHintButtonClicked, 0x0236F698)
DECLARE_EVENT_SOURCE(StarMapMenu_OnOutpostEntrySelected, 0x0236F728)
DECLARE_EVENT_SOURCE(StarMapMenu_ReadyToClose, 0x0236F7B8)
DECLARE_EVENT_SOURCE(SurfaceMapMenu_MarkerClicked, 0x0238F02C)
DECLARE_EVENT_SOURCE(SurfaceMapMenu_TryPlaceCustomMarker, 0x0238F0BC)
DECLARE_EVENT_SOURCE(TerminalMenu_CancelEvent, 0x023AA220)
DECLARE_EVENT_SOURCE(Terminal_CloseAllViews, 0x023AA2B0)
DECLARE_EVENT_SOURCE(Terminal_CloseTopView, 0x023AA340)
DECLARE_EVENT_SOURCE(Terminal_CloseView, 0x023AA3D0)
DECLARE_EVENT_SOURCE(Terminal_MenuItemClick, 0x023AA460)
DECLARE_EVENT_SOURCE(TestMenu_DoAction, 0x023B61D8)
DECLARE_EVENT_SOURCE(TestMenu_ExitMenu, 0x023B6268)
DECLARE_EVENT_SOURCE(TestMenu_ShowImages, 0x023B62F8)
DECLARE_EVENT_SOURCE(TestMenu_ShowResources, 0x023B6388)
DECLARE_EVENT_SOURCE(TestMenu_TestAll, 0x023B6418)
DECLARE_EVENT_SOURCE(TextInputMenu_EndEditText, 0x023BA354)
DECLARE_EVENT_SOURCE(TextInputMenu_InputCanceled, 0x023BA3E4)
DECLARE_EVENT_SOURCE(TextInputMenu_StartEditText, 0x023BA474)
DECLARE_EVENT_SOURCE(CraftingMenu_Highlight3D, 0x023BB744)
DECLARE_EVENT_SOURCE(CraftingMenu_RevertHighlight, 0x023BB7D4)
DECLARE_EVENT_SOURCE(WorkshopBuilderMenu_ChangeBuildItem, 0x023BDE38)
DECLARE_EVENT_SOURCE(WorkshopBuilderMenu_SelectedItem, 0x023BDEC8)
DECLARE_EVENT_SOURCE(WorkshopBuilderMenu_ToggleTracking, 0x023BDF58)
DECLARE_EVENT_SOURCE(WorkshopMenu_AttemptBuild, 0x023C67C4)
DECLARE_EVENT_SOURCE(WorkshopMenu_CancelAction, 0x023C6854)
DECLARE_EVENT_SOURCE(WorkshopMenu_ChangeVariant, 0x023C68E4)
DECLARE_EVENT_SOURCE(WorkshopMenu_ConnectionEvent, 0x023C6974)
DECLARE_EVENT_SOURCE(WorkshopMenu_ExitMenu, 0x023C6A04)
DECLARE_EVENT_SOURCE(WorkshopMenu_MessageCallback, 0x023C6A94)
DECLARE_EVENT_SOURCE(WorkshopMenu_SelectedCategory, 0x023C6B24)
DECLARE_EVENT_SOURCE(WorkshopMenu_SelectedGridObject, 0x023C6BB4)
DECLARE_EVENT_SOURCE(WorkshopMenu_ShowExtras, 0x023C6C44)
DECLARE_EVENT_SOURCE(WorkshopMenu_SwitchMode, 0x023C6CD4)
DECLARE_EVENT_SOURCE(WorkshopMenu_ToggleDistance, 0x023C6D64)
DECLARE_EVENT_SOURCE(WorkshopMenu_ToggleTracking, 0x023C6DF4)
DECLARE_EVENT_SOURCE(WorkshopMenu_ToggleView, 0x023C6E84)
DECLARE_EVENT_SOURCE(WorkshopQuickMenu_ConfirmAction, 0x023C88D4)
DECLARE_EVENT_SOURCE(WorkshopQuickMenu_ExitMenu, 0x023C8964)
DECLARE_EVENT_SOURCE(WorkshopTargetMenu_TargetHovered, 0x023CEEA0)
DECLARE_EVENT_SOURCE(WorkshopTargetMenu_TargetPicked, 0x023CEF30)
DECLARE_EVENT_SOURCE(WorkshopActionButton_HoldFinished, 0x023E5FC4)
DECLARE_EVENT_SOURCE(WorkshopActionButton_HoldStopped, 0x023E6054)
DECLARE_EVENT_SOURCE(WorkshopShared_SetActionHandles, 0x023E60E4)
DECLARE_EVENT_SOURCE(WorkshopShared_StartAction, 0x023E6174)
DECLARE_EVENT_SOURCE(ModelReferenceEffectEvents::ReferenceEffectFinished, 0x024061DC)
DECLARE_EVENT_SOURCE(BGSAcousticSpaceListener::StackChangedEvent, 0x0241A514)
DECLARE_EVENT_SOURCE(SpaceshipBIEvents::ShipPowerAllocationBIEventSent, 0x024322B4)
DECLARE_EVENT_SOURCE(BGSActorDeathEvent, 0x0244102C)
DECLARE_EVENT_SOURCE(Research::ResearchProgressEvent, 0x024920BC)
DECLARE_EVENT_SOURCE(BSTValueRequestEvent<PlayerAutoAimActorEvent>, 0x026CB628)
DECLARE_EVENT_SOURCE(PlayerInCombatChangeEvent, 0x026E41D0)
DECLARE_EVENT_SOURCE(BlurEvent, 0x029B5690)
DECLARE_EVENT_SOURCE(ContainerMenu_HideModel, 0x029D7760)
DECLARE_EVENT_SOURCE(ContainerMenu_Jettison, 0x029D77F0)
DECLARE_EVENT_SOURCE(ContainerMenu_LoadModel, 0x029D7880)
DECLARE_EVENT_SOURCE(ContainerMenu_OpenRefuelMenu, 0x029D7910)
DECLARE_EVENT_SOURCE(ContainerMenu_SetMouseOverModel, 0x029D79A0)
DECLARE_EVENT_SOURCE(ContainerMenu_TakeAll, 0x029D7A30)
DECLARE_EVENT_SOURCE(ContainerMenu_ToggleEquip, 0x029D7AC0)
DECLARE_EVENT_SOURCE(ContainerMenu_TransferItem, 0x029D7BEC)
DECLARE_EVENT_SOURCE(DialogueMenu_OnDialogueSelect, 0x029DB6B0)
DECLARE_EVENT_SOURCE(DialogueMenu_OnListVisibilityChange, 0x029DB740)
DECLARE_EVENT_SOURCE(DialogueMenu_OnPersuasionAutoWin, 0x029DB7D0)
DECLARE_EVENT_SOURCE(DialogueMenu_OnScriptedDialogueSelect, 0x029DB860)
DECLARE_EVENT_SOURCE(DialogueMenu_RequestExit, 0x029DB8F0)
DECLARE_EVENT_SOURCE(DialogueMenu_RequestSkipDialogue, 0x029DB980)
DECLARE_EVENT_SOURCE(BSTValueRequestEvent<FaderMenuDisplayState>, 0x029DC840)
DECLARE_EVENT_SOURCE(FavoritesMenu_AssignQuickkey, 0x029E9110)
DECLARE_EVENT_SOURCE(FavoritesMenu_UseQuickkey, 0x029E91A0)
DECLARE_EVENT_SOURCE(LoadingMenu_RefreshText, 0x029ED08C)
DECLARE_EVENT_SOURCE(MainMenu_ActionCanceled, 0x029F135C)
DECLARE_EVENT_SOURCE(MainMenu_ActionConfirmed, 0x029F13EC)
DECLARE_EVENT_SOURCE(MainMenu_ConfirmLoad, 0x029F147C)
DECLARE_EVENT_SOURCE(MainMenu_DeleteSave, 0x029F150C)
DECLARE_EVENT_SOURCE(MainMenu_SetCharacter, 0x029F163C)
DECLARE_EVENT_SOURCE(MainMenu_StartAction, 0x029F16CC)
DECLARE_EVENT_SOURCE(MainMenu_StartLoad, 0x029F175C)
DECLARE_EVENT_SOURCE(MainMenu_UploadSave, 0x029F17EC)
DECLARE_EVENT_SOURCE(BGSAppPausedEvent, 0x029F31D4)
DECLARE_EVENT_SOURCE(MessageBoxMenu_OnBackOut, 0x029F82F0)
DECLARE_EVENT_SOURCE(MessageBoxMenu_OnButtonPress, 0x029F8380)
DECLARE_EVENT_SOURCE(MessageBoxMenu_OnScriptedButtonPress, 0x029F8410)
DECLARE_EVENT_SOURCE(SleepWaitMenu_InterruptRest, 0x029FD068)
DECLARE_EVENT_SOURCE(SleepWaitMenu_StartRest, 0x029FD0F8)
DECLARE_EVENT_SOURCE(Spaceship::BoughtEvent, 0x02CD8880)
DECLARE_EVENT_SOURCE(Spaceship::ContrabandScanWarningEvent, 0x02CD8910)
DECLARE_EVENT_SOURCE(Spaceship::DockEvent, 0x02CD89A0)
DECLARE_EVENT_SOURCE(Spaceship::DynamicNavmeshCompleted, 0x02CD8A30)
DECLARE_EVENT_SOURCE(Spaceship::FarTravelEvent, 0x02CD8AC0)
DECLARE_EVENT_SOURCE(Spaceship::LandingEvent, 0x02CD8B50)
DECLARE_EVENT_SOURCE(Spaceship::PlanetScanEvent, 0x02CD8BE0)
DECLARE_EVENT_SOURCE(Spaceship::RampDownEvent, 0x02CD8C70)
DECLARE_EVENT_SOURCE(Spaceship::RefueledEvent, 0x02CD8D00)
DECLARE_EVENT_SOURCE(Spaceship::RegisteredEvent, 0x02CD8D90)
DECLARE_EVENT_SOURCE(Spaceship::ShieldEvent, 0x02CD8E20)
DECLARE_EVENT_SOURCE(Spaceship::ShipAddedEvent, 0x02CD8EB0)
DECLARE_EVENT_SOURCE(Spaceship::ShipCollisionEvent, 0x02CD8F40)
DECLARE_EVENT_SOURCE(Spaceship::ShipCustomizedEvent, 0x02CD8FD0)
DECLARE_EVENT_SOURCE(Spaceship::SoldEvent, 0x02CD9060)
DECLARE_EVENT_SOURCE(Spaceship::SystemDamagedEvent, 0x02CD90F0)
DECLARE_EVENT_SOURCE(Spaceship::SystemPowerAllocationEvent, 0x02CD9180)
DECLARE_EVENT_SOURCE(Spaceship::SystemPowerChangeEvent, 0x02CD9210)
DECLARE_EVENT_SOURCE(Spaceship::SystemRepairedBIEvent, 0x02CD92A0)
DECLARE_EVENT_SOURCE(Spaceship::SystemRepairedEvent, 0x02CD9330)
DECLARE_EVENT_SOURCE(Spaceship::TakeDamagEvent, 0x02CD93C0)
DECLARE_EVENT_SOURCE(ContextStackChangedEvent, 0x02E429B4)
DECLARE_EVENT_SOURCE(UpdateSceneRectEvent, 0x0303283C)
DECLARE_EVENT_SOURCE(GameStalledEvent, 0x031FEC18)

// more

DECLARE_EVENT_SOURCE(TESCellNavmeshGeneratedEvent, 0x005BAE00)
DECLARE_EVENT_SOURCE(TESHitEvent, 0x005BB690)
DECLARE_EVENT_SOURCE(FirstThirdPersonSwitch::Event, 0x005BC080)
DECLARE_EVENT_SOURCE(PerkChanged::Event, 0x012D7F10)
DECLARE_EVENT_SOURCE(TESHarvestEvent::ItemHarvested, 0x014E3F80)
DECLARE_EVENT_SOURCE(ActivityEvents::ActivityCompletedEvent, 0x014EC220)
DECLARE_EVENT_SOURCE(ChallengeCompletedEvent::Event, 0x014EE540)
DECLARE_EVENT_SOURCE(InventoryItemEvent::Event, 0x01526B80)
DECLARE_EVENT_SOURCE(BooksRead::Event, 0x0193B110)
DECLARE_EVENT_SOURCE(LocationExplored::Event, 0x01973E10)
DECLARE_EVENT_SOURCE(LocationLinked::Event, 0x01973E80)
DECLARE_EVENT_SOURCE(Activation::Event, 0x01A365A0)
DECLARE_EVENT_SOURCE(ActorCellChangeEvent, 0x01A48760)
DECLARE_EVENT_SOURCE(ActorHeadAttachedEvent, 0x01A487D0)
DECLARE_EVENT_SOURCE(ActorValueEvents::ActorValueChangedEvent, 0x01A48840)
DECLARE_EVENT_SOURCE(AliasChangeEvent, 0x01A488B0)
DECLARE_EVENT_SOURCE(AnimationGraphDependentEvent, 0x01A48920)
DECLARE_EVENT_SOURCE(BGSAffinityEventEvent, 0x01A48990)
DECLARE_EVENT_SOURCE(BGSCellGridLoadEvent, 0x01A48A00)
DECLARE_EVENT_SOURCE(BGSEventProcessedEvent, 0x01A48A70)
DECLARE_EVENT_SOURCE(BGSHavokWorldCreatedEvent, 0x01A48AE0)
DECLARE_EVENT_SOURCE(BGSLocationLoadedEvent, 0x01A48B50)
DECLARE_EVENT_SOURCE(BGSOnPlayerCompanionDismiss, 0x01A48BC0)
DECLARE_EVENT_SOURCE(BGSOnPlayerCompleteResearchEvent, 0x01A48C30)
DECLARE_EVENT_SOURCE(BGSOnPlayerCraftItemEvent, 0x01A48CA0)
DECLARE_EVENT_SOURCE(BGSOnPlayerCreateRobotEvent, 0x01A48D10)
DECLARE_EVENT_SOURCE(BGSOnPlayerEnterVertibirdEvent, 0x01A48D80)
DECLARE_EVENT_SOURCE(BGSOnPlayerFallLongDistances, 0x01A48DF0)
DECLARE_EVENT_SOURCE(BGSOnPlayerFireWeaponEvent, 0x01A48E60)
DECLARE_EVENT_SOURCE(BGSOnPlayerHealTeammateEvent, 0x01A48ED0)
DECLARE_EVENT_SOURCE(BGSOnPlayerLoiteringBeginEvent, 0x01A48F40)
DECLARE_EVENT_SOURCE(BGSOnPlayerLoiteringEndEvent, 0x01A48FB0)
DECLARE_EVENT_SOURCE(BGSOnPlayerModArmorWeaponEvent, 0x01A49020)
DECLARE_EVENT_SOURCE(BGSOnPlayerModRobotEvent, 0x01A49090)
DECLARE_EVENT_SOURCE(BGSOnPlayerSwimmingEvent, 0x01A49100)
DECLARE_EVENT_SOURCE(BGSOnPlayerUseWorkBenchEvent, 0x01A49170)
DECLARE_EVENT_SOURCE(BGSOnSpeechChallengeAvailable, 0x01A491E0)
DECLARE_EVENT_SOURCE(BGSRadiationDamageEvent, 0x01A49250)
DECLARE_EVENT_SOURCE(BuilderMenuSelectEvent, 0x01A492C0)
DECLARE_EVENT_SOURCE(CrewAssignedEvent, 0x01A49330)
DECLARE_EVENT_SOURCE(CrewDismissedEvent, 0x01A493A0)
DECLARE_EVENT_SOURCE(DestroyedEvent, 0x01A49410)
DECLARE_EVENT_SOURCE(HomeShipSetEvent, 0x01A495D0)
DECLARE_EVENT_SOURCE(InstantReferenceInteractionEvent, 0x01A49640)
DECLARE_EVENT_SOURCE(ItemConsumedEvent, 0x01A496B0)
DECLARE_EVENT_SOURCE(ItemSwappedEvent, 0x01A49720)
DECLARE_EVENT_SOURCE(LockPickedEvent, 0x01A49790)
DECLARE_EVENT_SOURCE(MapMarkerDiscoveredEvent, 0x01A49800)
DECLARE_EVENT_SOURCE(ObjectScannedEvent, 0x01A49870)
DECLARE_EVENT_SOURCE(PlayerAddItemEvent, 0x01A498E0)
DECLARE_EVENT_SOURCE(PlayerArrestedEvent, 0x01A49950)
DECLARE_EVENT_SOURCE(PlayerAssaultActorEvent, 0x01A499C0)
DECLARE_EVENT_SOURCE(PlayerBuyShipEvent, 0x01A49A30)
DECLARE_EVENT_SOURCE(PlayerCrimeGoldEvent, 0x01A49AA0)
DECLARE_EVENT_SOURCE(PlayerFailedPlotRouteEvent, 0x01A49B10)
DECLARE_EVENT_SOURCE(PlayerJailEvent, 0x01A49B80)
DECLARE_EVENT_SOURCE(PlayerModifiedShipEvent, 0x01A49BF0)
DECLARE_EVENT_SOURCE(PlayerMurderActorEvent, 0x01A49C60)
DECLARE_EVENT_SOURCE(PlayerPayFineEvent, 0x01A49CD0)
DECLARE_EVENT_SOURCE(PlayerPlanetSurveyCompleteEvent, 0x01A49D40)
DECLARE_EVENT_SOURCE(PlayerPlanetSurveyProgressEvent, 0x01A49DB0)
DECLARE_EVENT_SOURCE(PlayerSellShipEvent, 0x01A49E20)
DECLARE_EVENT_SOURCE(PlayerTrespassEvent, 0x01A49E90)
DECLARE_EVENT_SOURCE(QuickContainerOpenedEvent, 0x01A49F00)
DECLARE_EVENT_SOURCE(RefControlChangedEvent, 0x01A49F70)
DECLARE_EVENT_SOURCE(ReferenceDestroyedEvent, 0x01A49FE0)
DECLARE_EVENT_SOURCE(SpeechChallengeCompletionEvent, 0x01A4A050)
DECLARE_EVENT_SOURCE(TESActivateEvent, 0x01A4A0C0)
DECLARE_EVENT_SOURCE(TESActiveEffectApplyFinishEvent, 0x01A4A130)
DECLARE_EVENT_SOURCE(TESActiveEffectRemovedEvent, 0x01A4A1A0)
DECLARE_EVENT_SOURCE(TESActorActivatedRefEvent, 0x01A4A210)
DECLARE_EVENT_SOURCE(TESActorLocationChangeEvent, 0x01A4A280)
DECLARE_EVENT_SOURCE(TESBookReadEvent, 0x01A4A2F0)
DECLARE_EVENT_SOURCE(TESCellCriticalRefsAttachedEvent, 0x01A4A360)
DECLARE_EVENT_SOURCE(TESCellFullyLoadedEvent, 0x01A4A3D0)
DECLARE_EVENT_SOURCE(TESCellGravityChangeEvent, 0x01A4A440)
DECLARE_EVENT_SOURCE(TESCellReadyToApplyDecalsEvent, 0x01A4A4B0)
DECLARE_EVENT_SOURCE(TESCellReference3DAttachEvent, 0x01A4A520)
DECLARE_EVENT_SOURCE(TESCellReferenceAttachDetachEvent, 0x01A4A590)
DECLARE_EVENT_SOURCE(TESCombatEvent, 0x01A4A600)
DECLARE_EVENT_SOURCE(TESCombatListEvent, 0x01A4A670)
DECLARE_EVENT_SOURCE(TESCommandModeCompleteCommandEvent, 0x01A4A6E0)
DECLARE_EVENT_SOURCE(TESCommandModeEnterEvent, 0x01A4A750)
DECLARE_EVENT_SOURCE(TESCommandModeExitEvent, 0x01A4A7C0)
DECLARE_EVENT_SOURCE(TESCommandModeGiveCommandEvent, 0x01A4A830)
DECLARE_EVENT_SOURCE(TESConsciousnessEvent, 0x01A4A8A0)
DECLARE_EVENT_SOURCE(TESContainerChangedEvent, 0x01A4A910)
DECLARE_EVENT_SOURCE(TESDeathEvent, 0x01A4A980)
DECLARE_EVENT_SOURCE(TESDeferredKillEvent, 0x01A4A9F0)
DECLARE_EVENT_SOURCE(TESDestructionStageChangedEvent, 0x01A4AA60)
DECLARE_EVENT_SOURCE(TESEnterBleedoutEvent, 0x01A4AAD0)
DECLARE_EVENT_SOURCE(TESEnterSneakingEvent, 0x01A4AB40)
DECLARE_EVENT_SOURCE(TESEquipEvent, 0x01A4ABB0)
DECLARE_EVENT_SOURCE(TESEscortWaitStartEvent, 0x01A4AC20)
DECLARE_EVENT_SOURCE(TESEscortWaitStopEvent, 0x01A4AC90)
DECLARE_EVENT_SOURCE(TESExitBleedoutEvent, 0x01A4AD00)
DECLARE_EVENT_SOURCE(TESExitFurnitureEvent, 0x01A4AD70)
DECLARE_EVENT_SOURCE(TESFormDeleteEvent, 0x01A4ADE0)
DECLARE_EVENT_SOURCE(TESFormIDRemapEvent, 0x01A4AE50)
DECLARE_EVENT_SOURCE(TESFurnitureEvent, 0x01A4AEC0)
DECLARE_EVENT_SOURCE(TESGrabReleaseEvent, 0x01A4AF30)
DECLARE_EVENT_SOURCE(TESInitScriptEvent, 0x01A4AFA0)
DECLARE_EVENT_SOURCE(TESLimbCrippleEvent, 0x01A4B010)
DECLARE_EVENT_SOURCE(TESLoadGameEvent, 0x01A4B080)
DECLARE_EVENT_SOURCE(TESLocationExploredEvent, 0x01A4B0F0)
DECLARE_EVENT_SOURCE(TESLockChangedEvent, 0x01A4B160)
DECLARE_EVENT_SOURCE(TESMagicEffectApplyEvent, 0x01A4B1D0)
DECLARE_EVENT_SOURCE(TESMissionAcceptedEvent, 0x01A4B240)
DECLARE_EVENT_SOURCE(TESObjectLoadedEvent, 0x01A4B2B0)
DECLARE_EVENT_SOURCE(TESObjectREFRTranslationEvent, 0x01A4B320)
DECLARE_EVENT_SOURCE(TESOnPCDialogueTargetEvent, 0x01A4B390)
DECLARE_EVENT_SOURCE(TESOpenCloseEvent, 0x01A4B400)
DECLARE_EVENT_SOURCE(TESPackageEvent, 0x01A4B470)
DECLARE_EVENT_SOURCE(TESPerkEntryRunEvent, 0x01A4B4E0)
DECLARE_EVENT_SOURCE(TESPickNewIdleEvent, 0x01A4B550)
DECLARE_EVENT_SOURCE(TESPickpocketFailedEvent, 0x01A4B5C0)
DECLARE_EVENT_SOURCE(TESPlayerActiveEffectEvent, 0x01A4B630)
DECLARE_EVENT_SOURCE(TESPlayerFollowerWarpEvent, 0x01A4B6A0)
DECLARE_EVENT_SOURCE(TESQuestInitEvent, 0x01A4B710)
DECLARE_EVENT_SOURCE(TESQuestRejectedEvent, 0x01A4B780)
DECLARE_EVENT_SOURCE(TESQuestStageEvent, 0x01A4B7F0)
DECLARE_EVENT_SOURCE(TESQuestStageItemDoneEvent, 0x01A4B860)
DECLARE_EVENT_SOURCE(TESQuestStartStopEvent, 0x01A4B8D0)
DECLARE_EVENT_SOURCE(TESQuestTimerEvent, 0x01A4B940)
DECLARE_EVENT_SOURCE(TESResetEvent, 0x01A4B9B0)
DECLARE_EVENT_SOURCE(TESResolveNPCTemplatesEvent, 0x01A4BA20)
DECLARE_EVENT_SOURCE(TESSceneActionEvent, 0x01A4BA90)
DECLARE_EVENT_SOURCE(TESSceneEvent, 0x01A4BB00)
DECLARE_EVENT_SOURCE(TESScenePhaseEvent, 0x01A4BB70)
DECLARE_EVENT_SOURCE(TESSellEvent, 0x01A4BBE0)
DECLARE_EVENT_SOURCE(TESSleepStartEvent, 0x01A4BC50)
DECLARE_EVENT_SOURCE(TESSleepStopEvent, 0x01A4BCC0)
DECLARE_EVENT_SOURCE(TESSpellCastEvent, 0x01A4BD30)
DECLARE_EVENT_SOURCE(TESSpellCastFailureEvent, 0x01A4BDA0)
DECLARE_EVENT_SOURCE(TESSwitchRaceCompleteEvent, 0x01A4BE10)
DECLARE_EVENT_SOURCE(TESTopicInfoEvent, 0x01A4BE80)
DECLARE_EVENT_SOURCE(TESTrackedStatsEvent, 0x01A4BEF0)
DECLARE_EVENT_SOURCE(TESTrapHitEvent, 0x01A4BF60)
DECLARE_EVENT_SOURCE(TESTriggerEnterEvent, 0x01A4BFD0)
DECLARE_EVENT_SOURCE(TESTriggerEvent, 0x01A4C040)
DECLARE_EVENT_SOURCE(TESTriggerLeaveEvent, 0x01A4C0B0)
DECLARE_EVENT_SOURCE(TESUniqueIDChangeEvent, 0x01A4C190)
DECLARE_EVENT_SOURCE(TESWaitStartEvent, 0x01A4C200)
DECLARE_EVENT_SOURCE(TESWaitStopEvent, 0x01A4C270)
DECLARE_EVENT_SOURCE(TerminalMenuMenuItemRunEvent, 0x01A4C2E0)
DECLARE_EVENT_SOURCE(TerminalMenuOnEnterEvent, 0x01A4C350)
DECLARE_EVENT_SOURCE(WorkshopNPCTransferEvent, 0x01A4C3C0)
DECLARE_EVENT_SOURCE(TESObjectREFRIsReadyForAttachEvent, 0x01A4C430)
DECLARE_EVENT_SOURCE(DefaultObjectsReadyEvent::Event, 0x01A77CC0)
DECLARE_EVENT_SOURCE(ObjectiveState::Event, 0x01B247F0)
DECLARE_EVENT_SOURCE(QuestStatus::Event, 0x01B862E0)
DECLARE_EVENT_SOURCE(RefillAliasEvent::Event, 0x01B86350)
DECLARE_EVENT_SOURCE(TESQuestEvent::Event, 0x01B863C0)
DECLARE_EVENT_SOURCE(RolloverIsCrimeEvent::Event, 0x02150AD0)
DECLARE_EVENT_SOURCE(HideSubtitleEvent::Event, 0x0215BDA0)
DECLARE_EVENT_SOURCE(ShowSubtitleEvent::Event, 0x0215BE10)
DECLARE_EVENT_SOURCE(MissionMenuStateEvent::Event, 0x021B84F0)
DECLARE_EVENT_SOURCE(ClearShipHudTarget::Event, 0x02216200)
DECLARE_EVENT_SOURCE(TryUpdateShipHudTarget::Event, 0x02216270)
DECLARE_EVENT_SOURCE(LocationTextEvent::Event, 0x022710F0)
DECLARE_EVENT_SOURCE(TraitDiscoveryTextEvent::Event, 0x02271160)
DECLARE_EVENT_SOURCE(DaysPassed::Event, 0x0250A5A0)
DECLARE_EVENT_SOURCE(HourPassed::Event, 0x0250A610)
DECLARE_EVENT_SOURCE(ActorDamage::Event, 0x025EBB80)
DECLARE_EVENT_SOURCE(ActorItemEquipped::Event, 0x025EBBF0)
DECLARE_EVENT_SOURCE(ActorKill::Event, 0x025EBC60)
DECLARE_EVENT_SOURCE(AssaultCrime::Event, 0x025EBCD0)
DECLARE_EVENT_SOURCE(DisarmedEvent::Event, 0x025EBD40)
DECLARE_EVENT_SOURCE(FactionRankChange::Event, 0x025EBDB0)
DECLARE_EVENT_SOURCE(GrandTheftHorse::Event, 0x025EBE20)
DECLARE_EVENT_SOURCE(MurderCrime::Event, 0x025EBE90)
DECLARE_EVENT_SOURCE(PiracyCrime::Event, 0x025EBF00)
DECLARE_EVENT_SOURCE(Bleedout::Event, 0x0261A480)
DECLARE_EVENT_SOURCE(ContractedDisease::Event, 0x0261A4F0)
DECLARE_EVENT_SOURCE(ReloadWeaponEvent::Event, 0x0261A560)
DECLARE_EVENT_SOURCE(SpellsLearned::Event, 0x026290D0)
DECLARE_EVENT_SOURCE(Bounty::Event, 0x026CAB40)
DECLARE_EVENT_SOURCE(ChestLooted::Event, 0x026CABB0)
DECLARE_EVENT_SOURCE(CriticalHitEvent::Event, 0x026CAC20)
DECLARE_EVENT_SOURCE(CustomMarkerUpdate::Event, 0x026CAC90)
DECLARE_EVENT_SOURCE(DaysJailed::Event, 0x026CAD00)
DECLARE_EVENT_SOURCE(EnteredUnity::Event, 0x026CAD70)
DECLARE_EVENT_SOURCE(FinePaid::Event, 0x026CADE0)
DECLARE_EVENT_SOURCE(ItemCrafted::Event, 0x026CAE50)
DECLARE_EVENT_SOURCE(ItemSteal::Event, 0x026CAEC0)
DECLARE_EVENT_SOURCE(JailEscape::Event, 0x026CAF30)
DECLARE_EVENT_SOURCE(Jailing::Event, 0x026CAFA0)
DECLARE_EVENT_SOURCE(LevelIncrease::Event, 0x026CB010)
DECLARE_EVENT_SOURCE(LocationMarkerArrayUpdate::Event, 0x026CB080)
DECLARE_EVENT_SOURCE(PlayerActiveEffectChanged::Event, 0x026CB0F0)
DECLARE_EVENT_SOURCE(PlayerAmmoChanged::Event, 0x026CB160)
DECLARE_EVENT_SOURCE(PlayerCharacterQuestEvent::Event, 0x026CB1D0)
DECLARE_EVENT_SOURCE(PlayerDifficultySettingChanged::Event, 0x026CB240)
DECLARE_EVENT_SOURCE(PlayerFastTravel::Event, 0x026CB2B0)
DECLARE_EVENT_SOURCE(PlayerInDialogueChanged::Event, 0x026CB320)
DECLARE_EVENT_SOURCE(PlayerLifeStateChanged::Event, 0x026CB390)
DECLARE_EVENT_SOURCE(PlayerPickpocketSuccess::Event, 0x026CB400)
DECLARE_EVENT_SOURCE(PoisonedWeapon::Event, 0x026CB470)
DECLARE_EVENT_SOURCE(TerminalHacked::Event, 0x026CB4E0)
DECLARE_EVENT_SOURCE(TravelMarkerStateChange::Event, 0x026CB550)
DECLARE_EVENT_SOURCE(WeaponAttack::Event, 0x026CB5C0)
DECLARE_EVENT_SOURCE(Trespass::Event, 0x0272A0F0)
DECLARE_EVENT_SOURCE(VATSEvents::ModeChange, 0x02793F40)
DECLARE_EVENT_SOURCE(VATSCommand, 0x02793FB0)
DECLARE_EVENT_SOURCE(HoursPassed::Event, 0x029FD000)

// other events
DECLARE_EVENT_SOURCE(RadioManager::PipboyTransmitterDetectionEvent, 0x02480260)
DECLARE_EVENT_SOURCE_EX(XPChange::Event, 0x05F9CAC0)
DECLARE_EVENT_SOURCE_EX(WeaponFiredEvent, 0x05F8F288)
DECLARE_EVENT_SOURCE_EX(ActorEquipManagerEvent::Event, 0x069677B0)
DECLARE_EVENT_SOURCE_EX(ActorEquipManagerEvent::SpellEvent, 0x069677D8)
DECLARE_EVENT_SOURCE_EX(AttachReference::Event, 0x05F9CA98)
