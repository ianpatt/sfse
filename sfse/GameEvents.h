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
        DEFINE_MEMBER_FN_1(RegisterSink, void, 0x005C05AC, SinkBase* sink);
        DEFINE_MEMBER_FN_1(UnregisterSink, void, 0x005C03C0, SinkBase* sink);
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

DECLARE_EVENT_SOURCE(SnapTemplateUtils::SnapReplaceEvent, 0x084169C)
DECLARE_EVENT_SOURCE(ImageFixtureEvent_RequestImage, 0x0842954)
DECLARE_EVENT_SOURCE(ImageFixtureEvent_UnregisterImage, 0x0845850)
DECLARE_EVENT_SOURCE(Spaceship::TakeOffEvent, 0x08486B0)
DECLARE_EVENT_SOURCE(HUDActivityIncreaseEvent, 0x01255AA0)
DECLARE_EVENT_SOURCE(AnimationDataCleanupEvent, 0x01276C1C)
DECLARE_EVENT_SOURCE(AnimationDataSetupEvent, 0x01276CAC)
DECLARE_EVENT_SOURCE(EndLoadGameEvent, 0x012C5974)
DECLARE_EVENT_SOURCE(StartLoadGameEvent, 0x012C5A04)
DECLARE_EVENT_SOURCE(ShipEditor_SystemSelected, 0x012DC3DC)
DECLARE_EVENT_SOURCE(ShipEditor_PreviewUpgrade, 0x012E2AA0)
DECLARE_EVENT_SOURCE(ShipEditor_SelectedUpgrade, 0x012E2B30)
DECLARE_EVENT_SOURCE(RuntimeComponentDBFactory::ReferenceAttach, 0x0131E480)
DECLARE_EVENT_SOURCE(RuntimeComponentDBFactory::ReferenceDetach, 0x0131E510)
DECLARE_EVENT_SOURCE(WeaponGroupAssignmentMenu_ChangeWeaponAssignment, 0x013A2DC4)
DECLARE_EVENT_SOURCE(WeaponGroupAssignmentMenu_OnHintButtonActivated, 0x013A2E54)
DECLARE_EVENT_SOURCE(ShipEditor_OnExitConfirmCancel, 0x013C3424)
DECLARE_EVENT_SOURCE(ShipEditor_OnExitConfirmExit, 0x013C34B4)
DECLARE_EVENT_SOURCE(ShipEditor_OnExitConfirmSaveAndExit, 0x013C3544)
DECLARE_EVENT_SOURCE(ShipEditor_OnFlightCheckTabChanged, 0x013C7FE4)
DECLARE_EVENT_SOURCE(ShipEditor_OnWeaponGroupChanged, 0x013C8074)
DECLARE_EVENT_SOURCE(ShipEditor_OnRenameEndEditText, 0x013CD9B0)
DECLARE_EVENT_SOURCE(ShipEditor_OnRenameInputCancelled, 0x013CDA40)
DECLARE_EVENT_SOURCE(ShipEditor_ChangeModuleCategory, 0x013D212C)
DECLARE_EVENT_SOURCE(ShipEditor_PreviewShipPart, 0x013D21BC)
DECLARE_EVENT_SOURCE(ShipEditor_SelectedShipPart, 0x013D224C)
DECLARE_EVENT_SOURCE(ShipEditor_OnColorPickerControlChanged, 0x013DB100)
DECLARE_EVENT_SOURCE(ShipEditor_OnColorPickerTabChanged, 0x013DB190)
DECLARE_EVENT_SOURCE(ShipEditor_OnColorSliderMouseInput, 0x013DB220)
DECLARE_EVENT_SOURCE(ShipEditor_OnRecentColorSwatchClicked, 0x013DB2B0)
DECLARE_EVENT_SOURCE(ShipBuilder_CloseAllMenus, 0x013FC7A4)
DECLARE_EVENT_SOURCE(ShipEditor_OnHintButtonActivated, 0x013FC834)
DECLARE_EVENT_SOURCE(ShipEditor_RemoveAll3D, 0x013FC8C4)
DECLARE_EVENT_SOURCE(ReferenceQueuedEvent, 0x01464648)
DECLARE_EVENT_SOURCE(LoadScreenEndEvent, 0x0147D640)
DECLARE_EVENT_SOURCE(LoadScreenStartEvent, 0x0147D6D0)
DECLARE_EVENT_SOURCE(CellAttachDetachEvent, 0x0147D760)
DECLARE_EVENT_SOURCE(PickRefStateChangedEvent, 0x014ED048)
DECLARE_EVENT_SOURCE(ActivityTrackerActivityStartedEvent, 0x014F7638)
DECLARE_EVENT_SOURCE(RuntimeComponentDBFactory::ReferenceCleared3d, 0x015827E0)
DECLARE_EVENT_SOURCE(RuntimeComponentDBFactory::ReferenceDestroy, 0x01582870)
DECLARE_EVENT_SOURCE(RuntimeComponentDBFactory::ReferenceInit, 0x01582900)
DECLARE_EVENT_SOURCE(RuntimeComponentDBFactory::ReferenceRecycle, 0x01582990)
DECLARE_EVENT_SOURCE(RuntimeComponentDBFactory::ReferenceSet3d, 0x01582A20)
DECLARE_EVENT_SOURCE(RuntimeComponentDBFactory::Release3DRelatedData, 0x01582AB0)
DECLARE_EVENT_SOURCE(BSWorldOriginShiftEvent, 0x0158EFA0)
DECLARE_EVENT_SOURCE(BGSPlanet::PlayerKnowledgeFlagSetEvent, 0x016B8F3C)
DECLARE_EVENT_SOURCE(StarMap::PlanetTraitKnownEvent, 0x016B8FCC)
DECLARE_EVENT_SOURCE(ResetHistoryDataEvent, 0x0178C114)
DECLARE_EVENT_SOURCE(TESQuestRewardEvent, 0x017A58C4)
DECLARE_EVENT_SOURCE(HUDWeaponWorldFOVMultChangedEvent, 0x017A7B4C)
DECLARE_EVENT_SOURCE(BGSSceneActionPlayerDialogue::ActionEndEvent, 0x01880FE0)
DECLARE_EVENT_SOURCE(BGSSceneActionPlayerDialogue::ActionStartEvent, 0x01881070)
DECLARE_EVENT_SOURCE(AutoLoadDoorRolloverEvent, 0x0192F2EC)
DECLARE_EVENT_SOURCE(ClearQuickContainerEvent, 0x0192F37C)
DECLARE_EVENT_SOURCE(ReferenceCellLoadedTemps, 0x019A6EEC)
DECLARE_EVENT_SOURCE(Workshop::CargoLinkAddedEvent, 0x01D23E6C)
DECLARE_EVENT_SOURCE(Workshop::CargoLinkTargetChangedEvent, 0x01D23EFC)
DECLARE_EVENT_SOURCE(Workshop::EnterOutpostBeaconModeEvent, 0x01D23F8C)
DECLARE_EVENT_SOURCE(Workshop::ItemGrabbedEvent, 0x01D2401C)
DECLARE_EVENT_SOURCE(Workshop::ItemMovedEvent, 0x01D240AC)
DECLARE_EVENT_SOURCE(Workshop::ItemPlacedEvent, 0x01D2413C)
DECLARE_EVENT_SOURCE(Workshop::ItemProducedEvent, 0x01D241CC)
DECLARE_EVENT_SOURCE(Workshop::ItemRemovedEvent, 0x01D2425C)
DECLARE_EVENT_SOURCE(Workshop::ItemRepairedEvent, 0x01D242EC)
DECLARE_EVENT_SOURCE(Workshop::ItemScrappedEvent, 0x01D2437C)
DECLARE_EVENT_SOURCE(Workshop::OutpostNameChangedEvent, 0x01D2440C)
DECLARE_EVENT_SOURCE(Workshop::OutpostPlacedEvent, 0x01D2449C)
DECLARE_EVENT_SOURCE(PickRefUpdateEvent, 0x01D2452C)
DECLARE_EVENT_SOURCE(Workshop::PlacementStatusEvent, 0x01D245BC)
DECLARE_EVENT_SOURCE(Workshop::PowerOffEvent, 0x01D2464C)
DECLARE_EVENT_SOURCE(Workshop::PowerOnEvent, 0x01D246DC)
DECLARE_EVENT_SOURCE(Workshop::SnapBehaviorCycledEvent, 0x01D2476C)
DECLARE_EVENT_SOURCE(Workshop::WorkshopFlyCameraEvent, 0x01D247FC)
DECLARE_EVENT_SOURCE(Workshop::WorkshopItemPlacedEvent, 0x01D2488C)
DECLARE_EVENT_SOURCE(Workshop::WorkshopModeEvent, 0x01D2491C)
DECLARE_EVENT_SOURCE(Workshop::WorkshopOutputLinkEvent, 0x01D249AC)
DECLARE_EVENT_SOURCE(Workshop::WorkshopStatsChangedEvent, 0x01D24A3C)
DECLARE_EVENT_SOURCE(Workshop::WorkshopUpdateStatsEvent, 0x01D24ACC)
DECLARE_EVENT_SOURCE(ShipCameraStateToggled, 0x01D783A4)
DECLARE_EVENT_SOURCE(PlayerControls::PlayerJumpPressEvent, 0x01F46C44)
DECLARE_EVENT_SOURCE(PlayerControls::PlayerJumpReleaseEvent, 0x01F46CD4)
DECLARE_EVENT_SOURCE(PlayerSneakingChangeEvent, 0x01F483B8)
DECLARE_EVENT_SOURCE(PlayerControls::PlayerZeroGSprintJustPressedEvent, 0x01F485F4)
DECLARE_EVENT_SOURCE(PlayerControls::PlayerZeroGSprintReleasedEvent, 0x01F48684)
DECLARE_EVENT_SOURCE(PlayerControls::PlayerIronSightsEndEvent, 0x01F4B88C)
DECLARE_EVENT_SOURCE(PlayerControls::PlayerIronSightsStartEvent, 0x01F4B91C)
DECLARE_EVENT_SOURCE(SaveLoadEvent, 0x01F7AEFC)
DECLARE_EVENT_SOURCE(SpaceshipWeaponBinding::SpaceshipWeaponBindingChangedEvent, 0x01FA4108)
DECLARE_EVENT_SOURCE(BoundaryMenu_FastTravel, 0x01FB8E38)
DECLARE_EVENT_SOURCE(BoundaryMenu_ShowMap, 0x01FB8EC8)
DECLARE_EVENT_SOURCE(PhotoGallery_DeletePhoto, 0x01FC1C94)
DECLARE_EVENT_SOURCE(PowersMenu_ActivateEssence, 0x01FC5170)
DECLARE_EVENT_SOURCE(PowersMenu_EquipPower, 0x01FC5200)
DECLARE_EVENT_SOURCE(PowersMenu_FavoritePower, 0x01FC5290)
DECLARE_EVENT_SOURCE(ContainerMenuClosed::Event, 0x01FD877C)
DECLARE_EVENT_SOURCE(HangarShipSelection_ChangeSystemDisplay, 0x01FD880C)
DECLARE_EVENT_SOURCE(HangarShipSelection_RepairShip, 0x01FD889C)
DECLARE_EVENT_SOURCE(HangarShipSelection_UpgradeSystem, 0x01FD892C)
DECLARE_EVENT_SOURCE(ShipCrewMenu_Close, 0x01FD89BC)
DECLARE_EVENT_SOURCE(BinkMovieStoppedPlayingEvent, 0x01FDDA20)
DECLARE_EVENT_SOURCE(WorkshopColorMode_ApplyColors, 0x0200586C)
DECLARE_EVENT_SOURCE(WorkshopColorMode_SelectedTab, 0x020058FC)
DECLARE_EVENT_SOURCE(WorkshopColorMode_SliderChanged, 0x0200598C)
DECLARE_EVENT_SOURCE(WorkshopColorMode_SwatchChanged, 0x02005A1C)
DECLARE_EVENT_SOURCE(HUDCrewBuffMessageEvent, 0x02006BBC)
DECLARE_EVENT_SOURCE(CraftingMenu_SessionSummaryEvent, 0x0200FC58)
DECLARE_EVENT_SOURCE(CraftingMenu_CraftItem, 0x0200FCE8)
DECLARE_EVENT_SOURCE(CraftingMenu_ExitBench, 0x0200FD78)
DECLARE_EVENT_SOURCE(CraftingMenu_InstallMod, 0x0200FE08)
DECLARE_EVENT_SOURCE(CraftingMenu_RenameItem, 0x0200FE98)
DECLARE_EVENT_SOURCE(CraftingMenu_RevertedModdedItem, 0x0200FF28)
DECLARE_EVENT_SOURCE(CraftingMenu_SelectedMod, 0x0200FFB8)
DECLARE_EVENT_SOURCE(CraftingMenu_SelectedModSlot, 0x02010048)
DECLARE_EVENT_SOURCE(CraftingMenu_SelectedModdableItem, 0x020100D8)
DECLARE_EVENT_SOURCE(CraftingMenu_SelectedRecipe, 0x02010168)
DECLARE_EVENT_SOURCE(CraftingMenu_SetInspectControls, 0x020101F8)
DECLARE_EVENT_SOURCE(CraftingMenu_ToggleTracking, 0x02010288)
DECLARE_EVENT_SOURCE(CraftingMenu_ViewingModdableItem, 0x02010318)
DECLARE_EVENT_SOURCE(ContainerMenu_CloseMenu, 0x0201E7CC)
DECLARE_EVENT_SOURCE(InventoryMenu_Change3DView, 0x0201E8FC)
DECLARE_EVENT_SOURCE(InventoryMenu_PaperDollTryOn, 0x0201E98C)
DECLARE_EVENT_SOURCE(InventoryMenu_ResetPaperDollInv, 0x0201EA1C)
DECLARE_EVENT_SOURCE(UpdateActivateListenerEvent, 0x02026B98)
DECLARE_EVENT_SOURCE(StartOutpostFromListenerEvent, 0x02028858)
DECLARE_EVENT_SOURCE(HUDModeEvent, 0x02038A64)
DECLARE_EVENT_SOURCE(OpenContainerMenuEventData, 0x02038AF4)
DECLARE_EVENT_SOURCE(OpenContainerMenuFromListenerEvent, 0x02038B84)
DECLARE_EVENT_SOURCE(HUDRolloverActivationButtonEvent, 0x02038C14)
DECLARE_EVENT_SOURCE(HUDRolloverActivationQCItemPressEvent, 0x02038CA4)
DECLARE_EVENT_SOURCE(Inventory_SetSort, 0x02038D34)
DECLARE_EVENT_SOURCE(ShowingQuestMarketTextEvent, 0x02046AF8)
DECLARE_EVENT_SOURCE(TargetHitEvent, 0x020490E8)
DECLARE_EVENT_SOURCE(BSTValueRequestEvent<PlayerCrosshairModeEvent>, 0x02049178)
DECLARE_EVENT_SOURCE(ClearHUDMessagesEvent, 0x02050584)
DECLARE_EVENT_SOURCE(ShowHUDMessageEvent, 0x02050614)
DECLARE_EVENT_SOURCE(PlayerDetectionLevelChangeEvent, 0x02053774)
DECLARE_EVENT_SOURCE(ShowCustomWatchAlert, 0x0205888C)
DECLARE_EVENT_SOURCE(PlayerUpdateEvent, 0x0208BF5C)
DECLARE_EVENT_SOURCE(InventoryMenu_ToggleHelmet, 0x0208BFEC)
DECLARE_EVENT_SOURCE(InventoryMenu_ToggleSuit, 0x0208C07C)
DECLARE_EVENT_SOURCE(ControlsRemappedEvent, 0x020CB978)
DECLARE_EVENT_SOURCE(SettingsPanel_CheckBoxChanged, 0x020CBA08)
DECLARE_EVENT_SOURCE(SettingsPanel_ClearBinding, 0x020CBA98)
DECLARE_EVENT_SOURCE(SettingsPanel_OpenCategory, 0x020CBB28)
DECLARE_EVENT_SOURCE(SettingsPanel_OpenSettings, 0x020CBBB8)
DECLARE_EVENT_SOURCE(SettingsPanel_RemapConfirmed, 0x020CBC48)
DECLARE_EVENT_SOURCE(SettingsPanel_RemapMode, 0x020CBCD8)
DECLARE_EVENT_SOURCE(SettingsPanel_ResetToDefaults, 0x020CBD68)
DECLARE_EVENT_SOURCE(SettingsPanel_SaveControls, 0x020CBDF8)
DECLARE_EVENT_SOURCE(SettingsPanel_SaveSettings, 0x020CBE88)
DECLARE_EVENT_SOURCE(SettingsPanel_SliderChanged, 0x020CBF18)
DECLARE_EVENT_SOURCE(SettingsPanel_StepperChanged, 0x020CBFA8)
DECLARE_EVENT_SOURCE(SettingsPanel_ValidateControls, 0x020CC038)
DECLARE_EVENT_SOURCE(ShipCrewMenu_OpenAssignMenu, 0x020D5988)
DECLARE_EVENT_SOURCE(ShipCrewMenu_SetSort, 0x020D5A18)
DECLARE_EVENT_SOURCE(Spaceship::PlayerMovementOutputEvent, 0x020FBB88)
DECLARE_EVENT_SOURCE(ShowLongShipBootup, 0x020FBC18)
DECLARE_EVENT_SOURCE(ShipHudQuickContainer_TransferMenu, 0x020FBCA8)
DECLARE_EVENT_SOURCE(ShipHud_Activate, 0x020FBD38)
DECLARE_EVENT_SOURCE(ShipHud_BodyViewMarkerDimensions, 0x020FBDC8)
DECLARE_EVENT_SOURCE(ShipHud_ChangeComponentSelection, 0x020FBE58)
DECLARE_EVENT_SOURCE(ShipHud_CloseMenu, 0x020FBEE8)
DECLARE_EVENT_SOURCE(ShipHud_Deselect, 0x020FBF78)
DECLARE_EVENT_SOURCE(ShipHud_FarTravel, 0x020FC008)
DECLARE_EVENT_SOURCE(ShipHud_HailAccepted, 0x020FC098)
DECLARE_EVENT_SOURCE(ShipHud_HailCancelled, 0x020FC128)
DECLARE_EVENT_SOURCE(ShipHud_JumpToQuestMarker, 0x020FC1B8)
DECLARE_EVENT_SOURCE(ShipHud_Land, 0x020FC248)
DECLARE_EVENT_SOURCE(ShipHud_LandingMarkerMap, 0x020FC2D8)
DECLARE_EVENT_SOURCE(ShipHud_Map, 0x020FC368)
DECLARE_EVENT_SOURCE(ShipHud_OnMonocleToggle, 0x020FC3F8)
DECLARE_EVENT_SOURCE(ShipHud_OpenPhotoMode, 0x020FC488)
DECLARE_EVENT_SOURCE(ShipHud_Repair, 0x020FC518)
DECLARE_EVENT_SOURCE(ShipHud_SetTargetMode, 0x020FC5A8)
DECLARE_EVENT_SOURCE(ShipHud_Target, 0x020FC638)
DECLARE_EVENT_SOURCE(ShipHud_TargetShipSystem, 0x020FC6C8)
DECLARE_EVENT_SOURCE(ShipHud_UntargetShipSystem, 0x020FC758)
DECLARE_EVENT_SOURCE(ShipHud_UpdateComponentPower, 0x020FC7E8)
DECLARE_EVENT_SOURCE(DialogueMenu_CompleteExit, 0x02127FDC)
DECLARE_EVENT_SOURCE(BGSScannerGuideEffectStatusUpdateEvent, 0x02138190)
DECLARE_EVENT_SOURCE(GlobalFunc_CloseAllMenus, 0x0213D158)
DECLARE_EVENT_SOURCE(GlobalFunc_CloseMenu, 0x0213D1E8)
DECLARE_EVENT_SOURCE(GlobalFunc_PlayMenuSound, 0x0213D278)
DECLARE_EVENT_SOURCE(GlobalFunc_StartGameRender, 0x0213D308)
DECLARE_EVENT_SOURCE(GlobalFunc_UserEvent, 0x0213D398)
DECLARE_EVENT_SOURCE(ExperienceMeterDisplayData, 0x02146CF8)
DECLARE_EVENT_SOURCE(LevelUp_AnimFinished, 0x02146D88)
DECLARE_EVENT_SOURCE(LevelUp_OnWidgetShown, 0x02146E18)
DECLARE_EVENT_SOURCE(LevelUp_OpenDataMenu, 0x02146EA8)
DECLARE_EVENT_SOURCE(LevelUp_ShowSkills, 0x02146F38)
DECLARE_EVENT_SOURCE(LocationTextWidget_FinishedQueue, 0x02146FC8)
DECLARE_EVENT_SOURCE(DisplayFatigueWarningEvent, 0x02147270)
DECLARE_EVENT_SOURCE(BSTValueRequestEvent<SaveLoadMessageStringEvent>, 0x0214ACDC)
DECLARE_EVENT_SOURCE(PlayerCrosshairModeEvent, 0x020487F0)
DECLARE_EVENT_SOURCE(HUDNotificationEvent, 0x02153F38)
DECLARE_EVENT_SOURCE(HUDNotification_MissionActiveWidgetUpdate, 0x02153FC8)
DECLARE_EVENT_SOURCE(HUDNotification_OpenDataMenu, 0x02154058)
DECLARE_EVENT_SOURCE(HUDNotification_OpenMissionMenu, 0x021540E8)
DECLARE_EVENT_SOURCE(HUDNotification_SetMissionActive, 0x02154178)
DECLARE_EVENT_SOURCE(PlayerSetWeaponStateEvent, 0x02155D58)
DECLARE_EVENT_SOURCE(BarterMenu_BuyItem, 0x02168DF8)
DECLARE_EVENT_SOURCE(BarterMenu_CloseMenu, 0x02168E88)
DECLARE_EVENT_SOURCE(BarterMenu_HideModel, 0x02168F18)
DECLARE_EVENT_SOURCE(BarterMenu_LoadModel, 0x02168FA8)
DECLARE_EVENT_SOURCE(BarterMenu_SellItem, 0x02169038)
DECLARE_EVENT_SOURCE(BarterMenu_SetMouseOverModel, 0x021690C8)
DECLARE_EVENT_SOURCE(BarterMenu_ShowFailureMessage, 0x02169158)
DECLARE_EVENT_SOURCE(BarterMenu_ViewedItem, 0x021691E8)
DECLARE_EVENT_SOURCE(MissionMenu_ClearState, 0x0216D7F0)
DECLARE_EVENT_SOURCE(MissionMenu_PlotToLocation, 0x0216D880)
DECLARE_EVENT_SOURCE(MissionMenu_RejectQuest, 0x0216D910)
DECLARE_EVENT_SOURCE(MissionMenu_SaveCategoryIndex, 0x0216D9A0)
DECLARE_EVENT_SOURCE(MissionMenu_SaveOpenedId, 0x0216DA30)
DECLARE_EVENT_SOURCE(MissionMenu_ShowItemLocation, 0x0216DAC0)
DECLARE_EVENT_SOURCE(MissionMenu_ToggleTrackingQuest, 0x0216DBEC)
DECLARE_EVENT_SOURCE(DataSlateButtons_acceptClicked, 0x02173320)
DECLARE_EVENT_SOURCE(DataSlateButtons_cancelClicked, 0x021733B0)
DECLARE_EVENT_SOURCE(DataSlateMenu_playSFX, 0x02173440)
DECLARE_EVENT_SOURCE(DataSlateMenu_toggleAudio, 0x021734D0)
DECLARE_EVENT_SOURCE(InventoryMenu_DropItem, 0x02179BE4)
DECLARE_EVENT_SOURCE(InventoryMenu_HideModel, 0x02179C74)
DECLARE_EVENT_SOURCE(InventoryMenu_LoadModel, 0x02179D04)
DECLARE_EVENT_SOURCE(InventoryMenu_OnEnterCategory, 0x02179D94)
DECLARE_EVENT_SOURCE(InventoryMenu_OpenCargoHold, 0x02179E24)
DECLARE_EVENT_SOURCE(InventoryMenu_SelectItem, 0x02179EB4)
DECLARE_EVENT_SOURCE(InventoryMenu_SetMouseOverModel, 0x02179F44)
DECLARE_EVENT_SOURCE(InventoryMenu_ToggleFavorite, 0x0217A07C)
DECLARE_EVENT_SOURCE(MissionBoard_MissionEntryChanged, 0x021863C8)
DECLARE_EVENT_SOURCE(MissionBoard_MissionEntryPressed, 0x02186458)
DECLARE_EVENT_SOURCE(MonocleMenu_Bioscan, 0x0218D74C)
DECLARE_EVENT_SOURCE(MonocleMenu_FastTravel, 0x0218D7DC)
DECLARE_EVENT_SOURCE(MonocleMenu_Harvest, 0x0218D86C)
DECLARE_EVENT_SOURCE(MonocleMenu_Initialize, 0x0218D8FC)
DECLARE_EVENT_SOURCE(MonocleMenu_Outpost, 0x0218D98C)
DECLARE_EVENT_SOURCE(MonocleMenu_PhotoMode, 0x0218DA1C)
DECLARE_EVENT_SOURCE(MonocleMenu_Shutdown, 0x0218DAAC)
DECLARE_EVENT_SOURCE(MonocleMenu_SocialSpell, 0x0218DB3C)
DECLARE_EVENT_SOURCE(MonocleMenu_StartContainerView, 0x0218DBCC)
DECLARE_EVENT_SOURCE(MonocleMenu_StopContainerView, 0x0218DC5C)
DECLARE_EVENT_SOURCE(MonocleMenu_SurfaceMap, 0x0218DCEC)
DECLARE_EVENT_SOURCE(MonocleMenu_UseListScrollControls, 0x0218DD7C)
DECLARE_EVENT_SOURCE(MonocleMenu_ZoomIn, 0x0218DE0C)
DECLARE_EVENT_SOURCE(MonocleMenu_ZoomOut, 0x0218DE9C)
DECLARE_EVENT_SOURCE(PhotoMode_InitializeCategory, 0x0219263C)
DECLARE_EVENT_SOURCE(PhotoMode_ResetToDefaults, 0x021926CC)
DECLARE_EVENT_SOURCE(PhotoMode_SliderChanged, 0x0219275C)
DECLARE_EVENT_SOURCE(PhotoMode_StepperChanged, 0x021927EC)
DECLARE_EVENT_SOURCE(PhotoMode_TakeSnapshot, 0x0219287C)
DECLARE_EVENT_SOURCE(PhotoMode_ToggleHelmet, 0x0219290C)
DECLARE_EVENT_SOURCE(PhotoMode_ToggleUI, 0x0219299C)
DECLARE_EVENT_SOURCE(PickpocketMenu_OnItemSelect, 0x0219AE54)
DECLARE_EVENT_SOURCE(ResearchMenu_AddMaterial, 0x021A0288)
DECLARE_EVENT_SOURCE(ResearchMenu_CategorySelected, 0x021A0318)
DECLARE_EVENT_SOURCE(ResearchMenu_ExitMenu, 0x021A03A8)
DECLARE_EVENT_SOURCE(ResearchMenu_HideModel, 0x021A0438)
DECLARE_EVENT_SOURCE(ResearchMenu_PreviewProject, 0x021A04C8)
DECLARE_EVENT_SOURCE(ResearchMenu_ProjectViewed, 0x021A0558)
DECLARE_EVENT_SOURCE(ResearchMenu_SetInspectControls, 0x021A05E8)
DECLARE_EVENT_SOURCE(ResearchMenu_ToggleTrackingProject, 0x021A0678)
DECLARE_EVENT_SOURCE(UnlockedTerminalElementEvent, 0x021B1EEC)
DECLARE_EVENT_SOURCE(SecurityMenu_BackOutKey, 0x021B1F7C)
DECLARE_EVENT_SOURCE(SecurityMenu_CloseMenu, 0x021B200C)
DECLARE_EVENT_SOURCE(SecurityMenu_ConfirmExit, 0x021B209C)
DECLARE_EVENT_SOURCE(SecurityMenu_EliminateUnusedKeys, 0x021B212C)
DECLARE_EVENT_SOURCE(SecurityMenu_GetRingHint, 0x021B21BC)
DECLARE_EVENT_SOURCE(SecurityMenu_SelectNewKey, 0x021B224C)
DECLARE_EVENT_SOURCE(SecurityMenu_TryUseKey, 0x021B22DC)
DECLARE_EVENT_SOURCE(ShipCrewAssignMenu_Assign, 0x021B62A4)
DECLARE_EVENT_SOURCE(ShipCrewAssignMenu_Unassign, 0x021B6334)
DECLARE_EVENT_SOURCE(ShipCrewMenu_ViewedItem, 0x021B63C4)
DECLARE_EVENT_SOURCE(Refuel_Accept, 0x021B8264)
DECLARE_EVENT_SOURCE(Refuel_Cancel, 0x021B82F4)
DECLARE_EVENT_SOURCE(SkillsMenu_Accept, 0x021BED3C)
DECLARE_EVENT_SOURCE(SkillsMenu_AddPatch, 0x021BEDCC)
DECLARE_EVENT_SOURCE(SkillsMenu_Cancel, 0x021BEE5C)
DECLARE_EVENT_SOURCE(SkillsMenu_ChangeCursorVisibility, 0x021BEEEC)
DECLARE_EVENT_SOURCE(SkillsMenu_SaveLastCategory, 0x021BEF7C)
DECLARE_EVENT_SOURCE(BSChargenAPI::BIDataUtils::MenuClosedEvent, 0x021E3A64)
DECLARE_EVENT_SOURCE(BSChargenAPI::BIDataUtils::PresetNPCChangedEvent, 0x021E3AF4)
DECLARE_EVENT_SOURCE(CharGen_BrowChange, 0x021E3B84)
DECLARE_EVENT_SOURCE(CharGen_BrowColorChange, 0x021E3C14)
DECLARE_EVENT_SOURCE(CharGen_CancelTextEntry, 0x021E3CA4)
DECLARE_EVENT_SOURCE(CharGen_CloseMenu, 0x021E3D34)
DECLARE_EVENT_SOURCE(CharGen_CyclePronoun, 0x021E3DC4)
DECLARE_EVENT_SOURCE(CharGen_DirtScarsEtcChange, 0x021E3E54)
DECLARE_EVENT_SOURCE(CharGen_EndBodyChange, 0x021E3EE4)
DECLARE_EVENT_SOURCE(CharGen_EndTextEntry, 0x021E3F74)
DECLARE_EVENT_SOURCE(CharGen_EyeColorChange, 0x021E4004)
DECLARE_EVENT_SOURCE(CharGen_FacialHairChange, 0x021E4094)
DECLARE_EVENT_SOURCE(CharGen_FacialHairColorChange, 0x021E4124)
DECLARE_EVENT_SOURCE(CharGen_HairChange, 0x021E41B4)
DECLARE_EVENT_SOURCE(CharGen_HairColorChange, 0x021E4244)
DECLARE_EVENT_SOURCE(CharGen_HeadpartPlusSelectorChange, 0x021E42D4)
DECLARE_EVENT_SOURCE(CharGen_HeadpartPresetChange, 0x021E4364)
DECLARE_EVENT_SOURCE(CharGen_JewelryChange, 0x021E43F4)
DECLARE_EVENT_SOURCE(CharGen_JewelryColorChange, 0x021E4484)
DECLARE_EVENT_SOURCE(CharGen_MakeupChange, 0x021E4514)
DECLARE_EVENT_SOURCE(CharGen_MarkingsChange, 0x021E45A4)
DECLARE_EVENT_SOURCE(CharGen_PostBlendColorOptionChange, 0x021E4634)
DECLARE_EVENT_SOURCE(CharGen_PostBlendFaceChange, 0x021E46C4)
DECLARE_EVENT_SOURCE(CharGen_PostBlendIntensityChange, 0x021E4754)
DECLARE_EVENT_SOURCE(CharGen_PresetChange, 0x021E47E4)
DECLARE_EVENT_SOURCE(CharGen_RollOffLocomotion, 0x021E4874)
DECLARE_EVENT_SOURCE(CharGen_RollOnLocomotion, 0x021E4904)
DECLARE_EVENT_SOURCE(CharGen_RotatePaperdoll, 0x021E4994)
DECLARE_EVENT_SOURCE(CharGen_SetAdditionalSlider, 0x021E4A24)
DECLARE_EVENT_SOURCE(CharGen_SetBackground, 0x021E4AB4)
DECLARE_EVENT_SOURCE(CharGen_SetBlockInputUnderPopup, 0x021E4B44)
DECLARE_EVENT_SOURCE(CharGen_SetBodyValues, 0x021E4BD4)
DECLARE_EVENT_SOURCE(CharGen_SetCameraPosition, 0x021E4C64)
DECLARE_EVENT_SOURCE(CharGen_SetPronoun, 0x021E4CF4)
DECLARE_EVENT_SOURCE(CharGen_SetSex, 0x021E4D84)
DECLARE_EVENT_SOURCE(CharGen_SetSlider, 0x021E4E14)
DECLARE_EVENT_SOURCE(CharGen_SetTrait, 0x021E4EA4)
DECLARE_EVENT_SOURCE(CharGen_ShowChooseBackgroundMessage, 0x021E4F34)
DECLARE_EVENT_SOURCE(CharGen_ShowPlayerRenameMessage, 0x021E4FC4)
DECLARE_EVENT_SOURCE(CharGen_SkintoneChange, 0x021E5054)
DECLARE_EVENT_SOURCE(CharGen_StartBodyChange, 0x021E50E4)
DECLARE_EVENT_SOURCE(CharGen_StartTextEntry, 0x021E5174)
DECLARE_EVENT_SOURCE(CharGen_SwitchBodyType, 0x021E5204)
DECLARE_EVENT_SOURCE(CharGen_SwitchLocomotion, 0x021E5294)
DECLARE_EVENT_SOURCE(CharGen_TeethChange, 0x021E5324)
DECLARE_EVENT_SOURCE(CharGen_TeethRollOff, 0x021E53B4)
DECLARE_EVENT_SOURCE(CharGen_TeethRollOn, 0x021E5444)
DECLARE_EVENT_SOURCE(CharGen_ToggleMarking, 0x021E54D4)
DECLARE_EVENT_SOURCE(CharGen_TogglePreviewHabSuit, 0x021E5564)
DECLARE_EVENT_SOURCE(UIMenuChargenMenuDisablePaperdoll, 0x021E55F4)
DECLARE_EVENT_SOURCE(DataMenu_CloseMenu, 0x021EC678)
DECLARE_EVENT_SOURCE(DataMenu_ClosedForSubMenu, 0x021EC708)
DECLARE_EVENT_SOURCE(DataMenu_Missions, 0x021EC798)
DECLARE_EVENT_SOURCE(DataMenu_PlotToLocation, 0x021EC8CC)
DECLARE_EVENT_SOURCE(DataMenu_Reopened, 0x021EC95C)
DECLARE_EVENT_SOURCE(DataMenu_SelectedAttributesMenu, 0x021EC9EC)
DECLARE_EVENT_SOURCE(DataMenu_SelectedInventoryMenu, 0x021ECA7C)
DECLARE_EVENT_SOURCE(DataMenu_SelectedMapMenu, 0x021ECB0C)
DECLARE_EVENT_SOURCE(DataMenu_SelectedPowersMenu, 0x021ECB9C)
DECLARE_EVENT_SOURCE(DataMenu_SelectedShipMenu, 0x021ECC2C)
DECLARE_EVENT_SOURCE(DataMenu_SelectedStatusMenu, 0x021ECCBC)
DECLARE_EVENT_SOURCE(DataMenu_SetMenuForQuickEntry, 0x021ECD4C)
DECLARE_EVENT_SOURCE(DataMenu_SetPaperDollActive, 0x021ECDDC)
DECLARE_EVENT_SOURCE(PauseMenu_ActionCanceled, 0x021F6FA4)
DECLARE_EVENT_SOURCE(PauseMenu_ConfirmAction, 0x021F7034)
DECLARE_EVENT_SOURCE(PauseMenu_ConfirmLoad, 0x021F70C4)
DECLARE_EVENT_SOURCE(PauseMenu_ConfirmSave, 0x021F7154)
DECLARE_EVENT_SOURCE(PauseMenu_DeleteSave, 0x021F71E4)
DECLARE_EVENT_SOURCE(PauseMenu_QuitToDesktop, 0x021F7274)
DECLARE_EVENT_SOURCE(PauseMenu_SetCharacter, 0x021F7304)
DECLARE_EVENT_SOURCE(PauseMenu_StartAction, 0x021F7394)
DECLARE_EVENT_SOURCE(PauseMenu_StartLoad, 0x021F7424)
DECLARE_EVENT_SOURCE(PauseMenu_UploadSave, 0x021F74B4)
DECLARE_EVENT_SOURCE(PlayBink_CloseMenu, 0x021F8460)
DECLARE_EVENT_SOURCE(Spaceship::GravJumpEvent, 0x021FE094)
DECLARE_EVENT_SOURCE(Spaceship::LandedSetEvent, 0x021FE124)
DECLARE_EVENT_SOURCE(Reticle_OnLongAnimFinished, 0x021FE1B4)
DECLARE_EVENT_SOURCE(ShipHudQuickContainer_TransferItem, 0x021FE244)
DECLARE_EVENT_SOURCE(ShipHud_AbortJump, 0x021FE2D4)
DECLARE_EVENT_SOURCE(ShipHud_DockRequested, 0x021FE364)
DECLARE_EVENT_SOURCE(ShipHud_HailShip, 0x021FE3F4)
DECLARE_EVENT_SOURCE(ShipHud_UpdateTargetPanelRect, 0x021FE484)
DECLARE_EVENT_SOURCE(TakeoffMenu_CloseMenu, 0x021FE514)
DECLARE_EVENT_SOURCE(TakeoffMenu_ExitShip, 0x021FE5A4)
DECLARE_EVENT_SOURCE(TakeoffMenu_Launch, 0x021FE634)
DECLARE_EVENT_SOURCE(StarMapMenu_LandingInputInProgress, 0x0221D8D0)
DECLARE_EVENT_SOURCE(StarMapMenu_MarkerGroupContainerVisibilityChanged, 0x0221D960)
DECLARE_EVENT_SOURCE(StarMapMenu_MarkerGroupEntryClicked, 0x0221D9F0)
DECLARE_EVENT_SOURCE(StarMapMenu_MarkerGroupEntryHoverChanged, 0x0221DA80)
DECLARE_EVENT_SOURCE(StarMapMenu_ScanPlanet, 0x0221DB10)
DECLARE_EVENT_SOURCE(StarMapMenu_SelectedLandingSite, 0x0221DBA0)
DECLARE_EVENT_SOURCE(StarMapMenu_SelectedLandingSiteFailed, 0x0221DC30)
DECLARE_EVENT_SOURCE(StarMapMenu_ShowRealCursor, 0x0221DCC0)
DECLARE_EVENT_SOURCE(StarMapMenu_QuickSelectChange, 0x02233190)
DECLARE_EVENT_SOURCE(StarMapMenu_Galaxy_FocusSystem, 0x022440E0)
DECLARE_EVENT_SOURCE(StarMapMenu_OnGalaxyViewInitialized, 0x02244170)
DECLARE_EVENT_SOURCE(StarMapMenu_ExecuteRoute, 0x0224EC58)
DECLARE_EVENT_SOURCE(StarMapMenu_OnCancel, 0x0224ECE8)
DECLARE_EVENT_SOURCE(StarMapMenu_OnClearRoute, 0x0224ED78)
DECLARE_EVENT_SOURCE(StarMapMenu_OnExitStarMap, 0x0224EE08)
DECLARE_EVENT_SOURCE(StarMapMenu_OnHintButtonClicked, 0x0224EE98)
DECLARE_EVENT_SOURCE(StarMapMenu_OnOutpostEntrySelected, 0x0224EF28)
DECLARE_EVENT_SOURCE(StarMapMenu_ReadyToClose, 0x0224EFB8)
DECLARE_EVENT_SOURCE(SurfaceMapMenu_MarkerClicked, 0x0226CC4C)
DECLARE_EVENT_SOURCE(SurfaceMapMenu_TryPlaceCustomMarker, 0x0226CCDC)
DECLARE_EVENT_SOURCE(TerminalMenu_CancelEvent, 0x02287140)
DECLARE_EVENT_SOURCE(Terminal_CloseAllViews, 0x022871D0)
DECLARE_EVENT_SOURCE(Terminal_CloseTopView, 0x02287260)
DECLARE_EVENT_SOURCE(Terminal_CloseView, 0x022872F0)
DECLARE_EVENT_SOURCE(Terminal_MenuItemClick, 0x02287380)
DECLARE_EVENT_SOURCE(TestMenu_DoAction, 0x02293270)
DECLARE_EVENT_SOURCE(TestMenu_ExitMenu, 0x02293300)
DECLARE_EVENT_SOURCE(TestMenu_ShowImages, 0x02293390)
DECLARE_EVENT_SOURCE(TestMenu_ShowResources, 0x02293420)
DECLARE_EVENT_SOURCE(TestMenu_TestAll, 0x022934B0)
DECLARE_EVENT_SOURCE(TextInputMenu_EndEditText, 0x02297454)
DECLARE_EVENT_SOURCE(TextInputMenu_InputCanceled, 0x022974E4)
DECLARE_EVENT_SOURCE(TextInputMenu_StartEditText, 0x02297574)
DECLARE_EVENT_SOURCE(CraftingMenu_Highlight3D, 0x02298844)
DECLARE_EVENT_SOURCE(CraftingMenu_RevertHighlight, 0x022988D4)
DECLARE_EVENT_SOURCE(WorkshopBuilderMenu_ChangeBuildItem, 0x0229AF38)
DECLARE_EVENT_SOURCE(WorkshopBuilderMenu_SelectedItem, 0x0229AFC8)
DECLARE_EVENT_SOURCE(WorkshopBuilderMenu_ToggleTracking, 0x0229B058)
DECLARE_EVENT_SOURCE(WorkshopMenu_AttemptBuild, 0x022A38A4)
DECLARE_EVENT_SOURCE(WorkshopMenu_CancelAction, 0x022A3934)
DECLARE_EVENT_SOURCE(WorkshopMenu_ChangeVariant, 0x022A39C4)
DECLARE_EVENT_SOURCE(WorkshopMenu_ConnectionEvent, 0x022A3A54)
DECLARE_EVENT_SOURCE(WorkshopMenu_ExitMenu, 0x022A3AE4)
DECLARE_EVENT_SOURCE(WorkshopMenu_MessageCallback, 0x022A3B74)
DECLARE_EVENT_SOURCE(WorkshopMenu_SelectedCategory, 0x022A3C04)
DECLARE_EVENT_SOURCE(WorkshopMenu_SelectedGridObject, 0x022A3C94)
DECLARE_EVENT_SOURCE(WorkshopMenu_ShowExtras, 0x022A3D24)
DECLARE_EVENT_SOURCE(WorkshopMenu_SwitchMode, 0x022A3DB4)
DECLARE_EVENT_SOURCE(WorkshopMenu_ToggleDistance, 0x022A3E44)
DECLARE_EVENT_SOURCE(WorkshopMenu_ToggleTracking, 0x022A3ED4)
DECLARE_EVENT_SOURCE(WorkshopMenu_ToggleView, 0x022A3F64)
DECLARE_EVENT_SOURCE(WorkshopQuickMenu_ConfirmAction, 0x022A59B4)
DECLARE_EVENT_SOURCE(WorkshopQuickMenu_ExitMenu, 0x022A5A44)
DECLARE_EVENT_SOURCE(WorkshopTargetMenu_TargetHovered, 0x022ABF0C)
DECLARE_EVENT_SOURCE(WorkshopTargetMenu_TargetPicked, 0x022ABF9C)
DECLARE_EVENT_SOURCE(WorkshopActionButton_HoldFinished, 0x022C3040)
DECLARE_EVENT_SOURCE(WorkshopActionButton_HoldStopped, 0x022C30D0)
DECLARE_EVENT_SOURCE(WorkshopShared_SetActionHandles, 0x022C3160)
DECLARE_EVENT_SOURCE(WorkshopShared_StartAction, 0x022C31F0)
DECLARE_EVENT_SOURCE(ModelReferenceEffectEvents::ReferenceEffectFinished, 0x022E2E04)
DECLARE_EVENT_SOURCE(BGSAcousticSpaceListener::StackChangedEvent, 0x022F6E94)
DECLARE_EVENT_SOURCE(SpaceshipBIEvents::ShipPowerAllocationBIEventSent, 0x0230D980)
DECLARE_EVENT_SOURCE(BGSActorDeathEvent, 0x023198CC)
DECLARE_EVENT_SOURCE(Research::ResearchProgressEvent, 0x0236A0F8)
DECLARE_EVENT_SOURCE(BSTValueRequestEvent<PlayerAutoAimActorEvent>, 0x02587FD8)
DECLARE_EVENT_SOURCE(PlayerInCombatChangeEvent, 0x025A0500)
DECLARE_EVENT_SOURCE(BlurEvent, 0x0286F018)
DECLARE_EVENT_SOURCE(ContainerMenu_HideModel, 0x02891E78)
DECLARE_EVENT_SOURCE(ContainerMenu_Jettison, 0x02891F08)
DECLARE_EVENT_SOURCE(ContainerMenu_LoadModel, 0x02891F98)
DECLARE_EVENT_SOURCE(ContainerMenu_OpenRefuelMenu, 0x02892028)
DECLARE_EVENT_SOURCE(ContainerMenu_SetMouseOverModel, 0x028920B8)
DECLARE_EVENT_SOURCE(ContainerMenu_TakeAll, 0x02892148)
DECLARE_EVENT_SOURCE(ContainerMenu_ToggleEquip, 0x028921D8)
DECLARE_EVENT_SOURCE(ContainerMenu_TransferItem, 0x0289230C)
DECLARE_EVENT_SOURCE(DialogueMenu_OnDialogueSelect, 0x02895DB0)
DECLARE_EVENT_SOURCE(DialogueMenu_OnListVisibilityChange, 0x02895E40)
DECLARE_EVENT_SOURCE(DialogueMenu_OnPersuasionAutoWin, 0x02895ED0)
DECLARE_EVENT_SOURCE(DialogueMenu_OnScriptedDialogueSelect, 0x02895F60)
DECLARE_EVENT_SOURCE(DialogueMenu_RequestExit, 0x02895FF0)
DECLARE_EVENT_SOURCE(DialogueMenu_RequestSkipDialogue, 0x02896080)
DECLARE_EVENT_SOURCE(BSTValueRequestEvent<FaderMenuDisplayState>, 0x02896E48)
DECLARE_EVENT_SOURCE(FavoritesMenu_AssignQuickkey, 0x028A2E80)
DECLARE_EVENT_SOURCE(FavoritesMenu_UseQuickkey, 0x028A2F10)
DECLARE_EVENT_SOURCE(LoadingMenu_RefreshText, 0x028A6D90)
DECLARE_EVENT_SOURCE(MainMenu_ActionCanceled, 0x028AA460)
DECLARE_EVENT_SOURCE(MainMenu_ActionConfirmed, 0x028AA4F0)
DECLARE_EVENT_SOURCE(MainMenu_ConfirmLoad, 0x028AA580)
DECLARE_EVENT_SOURCE(MainMenu_DeleteSave, 0x028AA610)
DECLARE_EVENT_SOURCE(MainMenu_SetCharacter, 0x028AA73C)
DECLARE_EVENT_SOURCE(MainMenu_StartAction, 0x028AA7CC)
DECLARE_EVENT_SOURCE(MainMenu_StartLoad, 0x028AA85C)
DECLARE_EVENT_SOURCE(MainMenu_UploadSave, 0x028AA8EC)
DECLARE_EVENT_SOURCE(BGSAppPausedEvent, 0x028AC11C)
DECLARE_EVENT_SOURCE(MessageBoxMenu_OnBackOut, 0x028B1408)
DECLARE_EVENT_SOURCE(MessageBoxMenu_OnButtonPress, 0x028B1498)
DECLARE_EVENT_SOURCE(MessageBoxMenu_OnScriptedButtonPress, 0x028B1528)
DECLARE_EVENT_SOURCE(SleepWaitMenu_InterruptRest, 0x028B61B8)
DECLARE_EVENT_SOURCE(SleepWaitMenu_StartRest, 0x028B6248)
DECLARE_EVENT_SOURCE(Spaceship::BoughtEvent, 0x02B7F85C)
DECLARE_EVENT_SOURCE(Spaceship::ContrabandScanWarningEvent, 0x02B7F8EC)
DECLARE_EVENT_SOURCE(Spaceship::DockEvent, 0x02B7F97C)
DECLARE_EVENT_SOURCE(Spaceship::DynamicNavmeshCompleted, 0x02B7FA0C)
DECLARE_EVENT_SOURCE(Spaceship::FarTravelEvent, 0x02B7FA9C)
DECLARE_EVENT_SOURCE(Spaceship::LandingEvent, 0x02B7FB2C)
DECLARE_EVENT_SOURCE(Spaceship::PlanetScanEvent, 0x02B7FBBC)
DECLARE_EVENT_SOURCE(Spaceship::RampDownEvent, 0x02B7FC4C)
DECLARE_EVENT_SOURCE(Spaceship::RefueledEvent, 0x02B7FCDC)
DECLARE_EVENT_SOURCE(Spaceship::RegisteredEvent, 0x02B7FD6C)
DECLARE_EVENT_SOURCE(Spaceship::ShieldEvent, 0x02B7FDFC)
DECLARE_EVENT_SOURCE(Spaceship::ShipAddedEvent, 0x02B7FE8C)
DECLARE_EVENT_SOURCE(Spaceship::ShipCollisionEvent, 0x02B7FF1C)
DECLARE_EVENT_SOURCE(Spaceship::ShipCustomizedEvent, 0x02B7FFAC)
DECLARE_EVENT_SOURCE(Spaceship::SoldEvent, 0x02B8003C)
DECLARE_EVENT_SOURCE(Spaceship::SystemDamagedEvent, 0x02B800CC)
DECLARE_EVENT_SOURCE(Spaceship::SystemPowerAllocationEvent, 0x02B8015C)
DECLARE_EVENT_SOURCE(Spaceship::SystemPowerChangeEvent, 0x02B801EC)
DECLARE_EVENT_SOURCE(Spaceship::SystemRepairedBIEvent, 0x02B8027C)
DECLARE_EVENT_SOURCE(Spaceship::SystemRepairedEvent, 0x02B8030C)
DECLARE_EVENT_SOURCE(Spaceship::TakeDamagEvent, 0x02B8039C)
DECLARE_EVENT_SOURCE(ContextStackChangedEvent, 0x02CAC8E8)
DECLARE_EVENT_SOURCE(UpdateSceneRectEvent, 0x02E7DA10)
DECLARE_EVENT_SOURCE(GameStalledEvent, 0x03042A00)

// more

DECLARE_EVENT_SOURCE(TESCellNavmeshGeneratedEvent, 0x05BFAC0)
DECLARE_EVENT_SOURCE(TESHitEvent, 0x05C0350)
DECLARE_EVENT_SOURCE(FirstThirdPersonSwitch::Event, 0x05C0D40)
DECLARE_EVENT_SOURCE(PerkChanged::Event, 0x01306B50)
DECLARE_EVENT_SOURCE(TESHarvestEvent::ItemHarvested, 0x014ECFE0)
DECLARE_EVENT_SOURCE(ActivityEvents::ActivityCompletedEvent, 0x014F52B0)
DECLARE_EVENT_SOURCE(ChallengeCompletedEvent::Event, 0x014F75D0)
DECLARE_EVENT_SOURCE(InventoryItemEvent::Event, 0x0152EBF0)
DECLARE_EVENT_SOURCE(BooksRead::Event, 0x01922BA0)
DECLARE_EVENT_SOURCE(LocationExplored::Event, 0x0195A550)
DECLARE_EVENT_SOURCE(LocationLinked::Event, 0x0195A5C0)
DECLARE_EVENT_SOURCE(Activation::Event, 0x01A157E0)
DECLARE_EVENT_SOURCE(ActorCellChangeEvent, 0x01A271D0)
DECLARE_EVENT_SOURCE(ActorHeadAttachedEvent, 0x01A27240)
DECLARE_EVENT_SOURCE(ActorValueEvents::ActorValueChangedEvent, 0x01A272B0)
DECLARE_EVENT_SOURCE(AliasChangeEvent, 0x01A27320)
DECLARE_EVENT_SOURCE(AnimationGraphDependentEvent, 0x01A27390)
DECLARE_EVENT_SOURCE(BGSAffinityEventEvent, 0x01A27400)
DECLARE_EVENT_SOURCE(BGSCellGridLoadEvent, 0x01A27470)
DECLARE_EVENT_SOURCE(BGSEventProcessedEvent, 0x01A274E0)
DECLARE_EVENT_SOURCE(BGSHavokWorldCreatedEvent, 0x01A27550)
DECLARE_EVENT_SOURCE(BGSLocationLoadedEvent, 0x01A275C0)
DECLARE_EVENT_SOURCE(BGSOnPlayerCompanionDismiss, 0x01A27630)
DECLARE_EVENT_SOURCE(BGSOnPlayerCompleteResearchEvent, 0x01A276A0)
DECLARE_EVENT_SOURCE(BGSOnPlayerCraftItemEvent, 0x01A27710)
DECLARE_EVENT_SOURCE(BGSOnPlayerCreateRobotEvent, 0x01A27780)
DECLARE_EVENT_SOURCE(BGSOnPlayerEnterVertibirdEvent, 0x01A277F0)
DECLARE_EVENT_SOURCE(BGSOnPlayerFallLongDistances, 0x01A27860)
DECLARE_EVENT_SOURCE(BGSOnPlayerFireWeaponEvent, 0x01A278D0)
DECLARE_EVENT_SOURCE(BGSOnPlayerHealTeammateEvent, 0x01A27940)
DECLARE_EVENT_SOURCE(BGSOnPlayerLoiteringBeginEvent, 0x01A279B0)
DECLARE_EVENT_SOURCE(BGSOnPlayerLoiteringEndEvent, 0x01A27A20)
DECLARE_EVENT_SOURCE(BGSOnPlayerModArmorWeaponEvent, 0x01A27A90)
DECLARE_EVENT_SOURCE(BGSOnPlayerModRobotEvent, 0x01A27B00)
DECLARE_EVENT_SOURCE(BGSOnPlayerSwimmingEvent, 0x01A27B70)
DECLARE_EVENT_SOURCE(BGSOnPlayerUseWorkBenchEvent, 0x01A27BE0)
DECLARE_EVENT_SOURCE(BGSOnSpeechChallengeAvailable, 0x01A27C50)
DECLARE_EVENT_SOURCE(BGSRadiationDamageEvent, 0x01A27CC0)
DECLARE_EVENT_SOURCE(BuilderMenuSelectEvent, 0x01A27D30)
DECLARE_EVENT_SOURCE(CrewAssignedEvent, 0x01A27DA0)
DECLARE_EVENT_SOURCE(CrewDismissedEvent, 0x01A27E10)
DECLARE_EVENT_SOURCE(DestroyedEvent, 0x01A27E80)
DECLARE_EVENT_SOURCE(HomeShipSetEvent, 0x01A27EF0)
DECLARE_EVENT_SOURCE(InstantReferenceInteractionEvent, 0x01A27F60)
DECLARE_EVENT_SOURCE(ItemConsumedEvent, 0x01A27FD0)
DECLARE_EVENT_SOURCE(ItemSwappedEvent, 0x01A28040)
DECLARE_EVENT_SOURCE(LockPickedEvent, 0x01A280B0)
DECLARE_EVENT_SOURCE(MapMarkerDiscoveredEvent, 0x01A28120)
DECLARE_EVENT_SOURCE(ObjectScannedEvent, 0x01A28190)
DECLARE_EVENT_SOURCE(PlayerAddItemEvent, 0x01A28200)
DECLARE_EVENT_SOURCE(PlayerArrestedEvent, 0x01A28270)
DECLARE_EVENT_SOURCE(PlayerAssaultActorEvent, 0x01A282E0)
DECLARE_EVENT_SOURCE(PlayerBuyShipEvent, 0x01A28350)
DECLARE_EVENT_SOURCE(PlayerCrimeGoldEvent, 0x01A283C0)
DECLARE_EVENT_SOURCE(PlayerFailedPlotRouteEvent, 0x01A28430)
DECLARE_EVENT_SOURCE(PlayerJailEvent, 0x01A284A0)
DECLARE_EVENT_SOURCE(PlayerModifiedShipEvent, 0x01A28510)
DECLARE_EVENT_SOURCE(PlayerMurderActorEvent, 0x01A28580)
DECLARE_EVENT_SOURCE(PlayerPayFineEvent, 0x01A285F0)
DECLARE_EVENT_SOURCE(PlayerPlanetSurveyCompleteEvent, 0x01A28660)
DECLARE_EVENT_SOURCE(PlayerPlanetSurveyProgressEvent, 0x01A286D0)
DECLARE_EVENT_SOURCE(PlayerSellShipEvent, 0x01A28740)
DECLARE_EVENT_SOURCE(PlayerTrespassEvent, 0x01A287B0)
DECLARE_EVENT_SOURCE(QuickContainerOpenedEvent, 0x01A28820)
DECLARE_EVENT_SOURCE(RefControlChangedEvent, 0x01A28890)
DECLARE_EVENT_SOURCE(ReferenceDestroyedEvent, 0x01A28900)
DECLARE_EVENT_SOURCE(SpeechChallengeCompletionEvent, 0x01A28970)
DECLARE_EVENT_SOURCE(TESActivateEvent, 0x01A289E0)
DECLARE_EVENT_SOURCE(TESActiveEffectApplyFinishEvent, 0x01A28A50)
DECLARE_EVENT_SOURCE(TESActiveEffectRemovedEvent, 0x01A28AC0)
DECLARE_EVENT_SOURCE(TESActorActivatedRefEvent, 0x01A28B30)
DECLARE_EVENT_SOURCE(TESActorLocationChangeEvent, 0x01A28BA0)
DECLARE_EVENT_SOURCE(TESBookReadEvent, 0x01A28C10)
DECLARE_EVENT_SOURCE(TESCellCriticalRefsAttachedEvent, 0x01A28C80)
DECLARE_EVENT_SOURCE(TESCellFullyLoadedEvent, 0x01A28CF0)
DECLARE_EVENT_SOURCE(TESCellGravityChangeEvent, 0x01A28D60)
DECLARE_EVENT_SOURCE(TESCellReadyToApplyDecalsEvent, 0x01A28DD0)
DECLARE_EVENT_SOURCE(TESCellReference3DAttachEvent, 0x01A28E40)
DECLARE_EVENT_SOURCE(TESCellReferenceAttachDetachEvent, 0x01A28EB0)
DECLARE_EVENT_SOURCE(TESCombatEvent, 0x01A28F20)
DECLARE_EVENT_SOURCE(TESCombatListEvent, 0x01A28F90)
DECLARE_EVENT_SOURCE(TESCommandModeCompleteCommandEvent, 0x01A29000)
DECLARE_EVENT_SOURCE(TESCommandModeEnterEvent, 0x01A29070)
DECLARE_EVENT_SOURCE(TESCommandModeExitEvent, 0x01A290E0)
DECLARE_EVENT_SOURCE(TESCommandModeGiveCommandEvent, 0x01A29150)
DECLARE_EVENT_SOURCE(TESConsciousnessEvent, 0x01A291C0)
DECLARE_EVENT_SOURCE(TESContainerChangedEvent, 0x01A29230)
DECLARE_EVENT_SOURCE(TESDeathEvent, 0x01A292A0)
DECLARE_EVENT_SOURCE(TESDeferredKillEvent, 0x01A29310)
DECLARE_EVENT_SOURCE(TESDestructionStageChangedEvent, 0x01A29380)
DECLARE_EVENT_SOURCE(TESEnterBleedoutEvent, 0x01A293F0)
DECLARE_EVENT_SOURCE(TESEnterSneakingEvent, 0x01A29460)
DECLARE_EVENT_SOURCE(TESEquipEvent, 0x01A294D0)
DECLARE_EVENT_SOURCE(TESEscortWaitStartEvent, 0x01A29540)
DECLARE_EVENT_SOURCE(TESEscortWaitStopEvent, 0x01A295B0)
DECLARE_EVENT_SOURCE(TESExitBleedoutEvent, 0x01A29620)
DECLARE_EVENT_SOURCE(TESExitFurnitureEvent, 0x01A29690)
DECLARE_EVENT_SOURCE(TESFormDeleteEvent, 0x01A29700)
DECLARE_EVENT_SOURCE(TESFormIDRemapEvent, 0x01A29770)
DECLARE_EVENT_SOURCE(TESFurnitureEvent, 0x01A297E0)
DECLARE_EVENT_SOURCE(TESGrabReleaseEvent, 0x01A29850)
DECLARE_EVENT_SOURCE(TESInitScriptEvent, 0x01A298C0)
DECLARE_EVENT_SOURCE(TESLimbCrippleEvent, 0x01A29930)
DECLARE_EVENT_SOURCE(TESLoadGameEvent, 0x01A299A0)
DECLARE_EVENT_SOURCE(TESLocationExploredEvent, 0x01A29A10)
DECLARE_EVENT_SOURCE(TESLockChangedEvent, 0x01A29A80)
DECLARE_EVENT_SOURCE(TESMagicEffectApplyEvent, 0x01A29AF0)
DECLARE_EVENT_SOURCE(TESMissionAcceptedEvent, 0x01A29B60)
DECLARE_EVENT_SOURCE(TESObjectLoadedEvent, 0x01A29BD0)
DECLARE_EVENT_SOURCE(TESObjectREFRTranslationEvent, 0x01A29C40)
DECLARE_EVENT_SOURCE(TESOnPCDialogueTargetEvent, 0x01A29CB0)
DECLARE_EVENT_SOURCE(TESOpenCloseEvent, 0x01A29D20)
DECLARE_EVENT_SOURCE(TESPackageEvent, 0x01A29D90)
DECLARE_EVENT_SOURCE(TESPerkEntryRunEvent, 0x01A29E00)
DECLARE_EVENT_SOURCE(TESPickNewIdleEvent, 0x01A29E70)
DECLARE_EVENT_SOURCE(TESPickpocketFailedEvent, 0x01A29EE0)
DECLARE_EVENT_SOURCE(TESPlayerActiveEffectEvent, 0x01A29F50)
DECLARE_EVENT_SOURCE(TESPlayerFollowerWarpEvent, 0x01A29FC0)
DECLARE_EVENT_SOURCE(TESQuestInitEvent, 0x01A2A030)
DECLARE_EVENT_SOURCE(TESQuestRejectedEvent, 0x01A2A0A0)
DECLARE_EVENT_SOURCE(TESQuestStageEvent, 0x01A2A110)
DECLARE_EVENT_SOURCE(TESQuestStageItemDoneEvent, 0x01A2A180)
DECLARE_EVENT_SOURCE(TESQuestStartStopEvent, 0x01A2A1F0)
DECLARE_EVENT_SOURCE(TESQuestTimerEvent, 0x01A2A260)
DECLARE_EVENT_SOURCE(TESResetEvent, 0x01A2A2D0)
DECLARE_EVENT_SOURCE(TESResolveNPCTemplatesEvent, 0x01A2A340)
DECLARE_EVENT_SOURCE(TESSceneActionEvent, 0x01A2A3B0)
DECLARE_EVENT_SOURCE(TESSceneEvent, 0x01A2A420)
DECLARE_EVENT_SOURCE(TESScenePhaseEvent, 0x01A2A490)
DECLARE_EVENT_SOURCE(TESSellEvent, 0x01A2A500)
DECLARE_EVENT_SOURCE(TESSleepStartEvent, 0x01A2A570)
DECLARE_EVENT_SOURCE(TESSleepStopEvent, 0x01A2A5E0)
DECLARE_EVENT_SOURCE(TESSpellCastEvent, 0x01A2A650)
DECLARE_EVENT_SOURCE(TESSpellCastFailureEvent, 0x01A2A6C0)
DECLARE_EVENT_SOURCE(TESSwitchRaceCompleteEvent, 0x01A2A730)
DECLARE_EVENT_SOURCE(TESTopicInfoEvent, 0x01A2A7A0)
DECLARE_EVENT_SOURCE(TESTrackedStatsEvent, 0x01A2A810)
DECLARE_EVENT_SOURCE(TESTrapHitEvent, 0x01A2A880)
DECLARE_EVENT_SOURCE(TESTriggerEnterEvent, 0x01A2A8F0)
DECLARE_EVENT_SOURCE(TESTriggerEvent, 0x01A2A960)
DECLARE_EVENT_SOURCE(TESTriggerLeaveEvent, 0x01A2A9D0)
DECLARE_EVENT_SOURCE(TESUniqueIDChangeEvent, 0x01A2AA40)
DECLARE_EVENT_SOURCE(TESWaitStartEvent, 0x01A2AAB0)
DECLARE_EVENT_SOURCE(TESWaitStopEvent, 0x01A2AB20)
DECLARE_EVENT_SOURCE(TerminalMenuMenuItemRunEvent, 0x01A2AB90)
DECLARE_EVENT_SOURCE(TerminalMenuOnEnterEvent, 0x01A2AC00)
DECLARE_EVENT_SOURCE(WorkshopNPCTransferEvent, 0x01A2AC70)
DECLARE_EVENT_SOURCE(TESObjectREFRIsReadyForAttachEvent, 0x01A2ACE0)
DECLARE_EVENT_SOURCE(DefaultObjectsReadyEvent::Event, 0x01A56E30)
DECLARE_EVENT_SOURCE(ObjectiveState::Event, 0x01AFFEA0)
DECLARE_EVENT_SOURCE(QuestStatus::Event, 0x01B60100)
DECLARE_EVENT_SOURCE(RefillAliasEvent::Event, 0x01B60170)
DECLARE_EVENT_SOURCE(TESQuestEvent::Event, 0x01B601E0)
DECLARE_EVENT_SOURCE(RolloverIsCrimeEvent::Event, 0x02049080)
DECLARE_EVENT_SOURCE(HideSubtitleEvent::Event, 0x020542C0)
DECLARE_EVENT_SOURCE(ShowSubtitleEvent::Event, 0x02054330)
DECLARE_EVENT_SOURCE(MissionMenuStateEvent::Event, 0x020A6740)
DECLARE_EVENT_SOURCE(ClearShipHudTarget::Event, 0x020FBAB0)
DECLARE_EVENT_SOURCE(TryUpdateShipHudTarget::Event, 0x020FBB20)
DECLARE_EVENT_SOURCE(LocationTextEvent::Event, 0x02155C80)
DECLARE_EVENT_SOURCE(TraitDiscoveryTextEvent::Event, 0x02155CF0)
DECLARE_EVENT_SOURCE(DaysPassed::Event, 0x023CE5E0)
DECLARE_EVENT_SOURCE(HourPassed::Event, 0x023CE650)
DECLARE_EVENT_SOURCE(ActorDamage::Event, 0x024A9CD0)
DECLARE_EVENT_SOURCE(ActorItemEquipped::Event, 0x024A9D40)
DECLARE_EVENT_SOURCE(ActorKill::Event, 0x024A9DB0)
DECLARE_EVENT_SOURCE(AssaultCrime::Event, 0x024A9E20)
DECLARE_EVENT_SOURCE(DisarmedEvent::Event, 0x024A9E90)
DECLARE_EVENT_SOURCE(FactionRankChange::Event, 0x024A9F00)
DECLARE_EVENT_SOURCE(GrandTheftHorse::Event, 0x024A9F70)
DECLARE_EVENT_SOURCE(MurderCrime::Event, 0x024A9FE0)
DECLARE_EVENT_SOURCE(PiracyCrime::Event, 0x024AA050)
DECLARE_EVENT_SOURCE(Bleedout::Event, 0x024D82C0)
DECLARE_EVENT_SOURCE(ContractedDisease::Event, 0x024D8330)
DECLARE_EVENT_SOURCE(ReloadWeaponEvent::Event, 0x024D83A0)
DECLARE_EVENT_SOURCE(SpellsLearned::Event, 0x024E69C0)
DECLARE_EVENT_SOURCE(Bounty::Event, 0x025874F0)
DECLARE_EVENT_SOURCE(ChestLooted::Event, 0x02587560)
DECLARE_EVENT_SOURCE(CriticalHitEvent::Event, 0x025875D0)
DECLARE_EVENT_SOURCE(CustomMarkerUpdate::Event, 0x02587640)
DECLARE_EVENT_SOURCE(DaysJailed::Event, 0x025876B0)
DECLARE_EVENT_SOURCE(EnteredUnity::Event, 0x02587720)
DECLARE_EVENT_SOURCE(FinePaid::Event, 0x02587790)
DECLARE_EVENT_SOURCE(ItemCrafted::Event, 0x02587800)
DECLARE_EVENT_SOURCE(ItemSteal::Event, 0x02587870)
DECLARE_EVENT_SOURCE(JailEscape::Event, 0x025878E0)
DECLARE_EVENT_SOURCE(Jailing::Event, 0x02587950)
DECLARE_EVENT_SOURCE(LevelIncrease::Event, 0x025879C0)
DECLARE_EVENT_SOURCE(LocationMarkerArrayUpdate::Event, 0x02587A30)
DECLARE_EVENT_SOURCE(PlayerActiveEffectChanged::Event, 0x02587AA0)
DECLARE_EVENT_SOURCE(PlayerAmmoChanged::Event, 0x02587B10)
DECLARE_EVENT_SOURCE(PlayerCharacterQuestEvent::Event, 0x02587B80)
DECLARE_EVENT_SOURCE(PlayerDifficultySettingChanged::Event, 0x02587BF0)
DECLARE_EVENT_SOURCE(PlayerFastTravel::Event, 0x02587C60)
DECLARE_EVENT_SOURCE(PlayerInDialogueChanged::Event, 0x02587CD0)
DECLARE_EVENT_SOURCE(PlayerLifeStateChanged::Event, 0x02587D40)
DECLARE_EVENT_SOURCE(PlayerPickpocketSuccess::Event, 0x02587DB0)
DECLARE_EVENT_SOURCE(PoisonedWeapon::Event, 0x02587E20)
DECLARE_EVENT_SOURCE(TerminalHacked::Event, 0x02587E90)
DECLARE_EVENT_SOURCE(TravelMarkerStateChange::Event, 0x02587F00)
DECLARE_EVENT_SOURCE(WeaponAttack::Event, 0x02587F70)
DECLARE_EVENT_SOURCE(Trespass::Event, 0x025E58D0)
DECLARE_EVENT_SOURCE(VATSEvents::ModeChange, 0x0264EF80)
DECLARE_EVENT_SOURCE(VATSCommand, 0x0264EFF0)
DECLARE_EVENT_SOURCE(HoursPassed::Event, 0x028B6150)

// other events
DECLARE_EVENT_SOURCE(RadioManager::PipboyTransmitterDetectionEvent, 0x02358340)
DECLARE_EVENT_SOURCE_EX(XPChange::Event, 0x505DE00)
DECLARE_EVENT_SOURCE_EX(WeaponFiredEvent, 0x5050FB8)
DECLARE_EVENT_SOURCE_EX(ActorEquipManagerEvent::Event, 0x59EAD70)
DECLARE_EVENT_SOURCE_EX(ActorEquipManagerEvent::SpellEvent, 0x59EAD98)
DECLARE_EVENT_SOURCE_EX(AttachReference::Event, 0x505DDD8)