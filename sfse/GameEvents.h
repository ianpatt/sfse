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
        DEFINE_MEMBER_FN_1(RegisterSink, void, 0x005C195C, SinkBase* sink);
        DEFINE_MEMBER_FN_1(UnregisterSink, void, 0x005C1770, SinkBase* sink);
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

DECLARE_EVENT_SOURCE(SnapTemplateUtils::SnapReplaceEvent, 0x00842ACC)
DECLARE_EVENT_SOURCE(ImageFixtureEvent_RequestImage, 0x00843D84)
DECLARE_EVENT_SOURCE(ImageFixtureEvent_UnregisterImage, 0x00846C80)
DECLARE_EVENT_SOURCE(Spaceship::TakeOffEvent, 0x00849B28)
DECLARE_EVENT_SOURCE(HUDActivityIncreaseEvent, 0x01256CE0)
DECLARE_EVENT_SOURCE(AnimationDataCleanupEvent, 0x01277ECC)
DECLARE_EVENT_SOURCE(AnimationDataSetupEvent, 0x01277F5C)
DECLARE_EVENT_SOURCE(EndLoadGameEvent, 0x012C6C44)
DECLARE_EVENT_SOURCE(StartLoadGameEvent, 0x012C6CD4)
DECLARE_EVENT_SOURCE(ShipEditor_SystemSelected, 0x012DD75C)
DECLARE_EVENT_SOURCE(ShipEditor_PreviewUpgrade, 0x012E3E20)
DECLARE_EVENT_SOURCE(ShipEditor_SelectedUpgrade, 0x012E3EB0)
DECLARE_EVENT_SOURCE(RuntimeComponentDBFactory::ReferenceAttach, 0x0131F540)
DECLARE_EVENT_SOURCE(RuntimeComponentDBFactory::ReferenceDetach, 0x0131F5D0)
DECLARE_EVENT_SOURCE(WeaponGroupAssignmentMenu_ChangeWeaponAssignment, 0x013A44E4)
DECLARE_EVENT_SOURCE(WeaponGroupAssignmentMenu_OnHintButtonActivated, 0x013A4574)
DECLARE_EVENT_SOURCE(ShipEditor_OnExitConfirmCancel, 0x013C4B34)
DECLARE_EVENT_SOURCE(ShipEditor_OnExitConfirmExit, 0x013C4BC4)
DECLARE_EVENT_SOURCE(ShipEditor_OnExitConfirmSaveAndExit, 0x013C4C54)
DECLARE_EVENT_SOURCE(ShipEditor_OnFlightCheckTabChanged, 0x013C96F4)
DECLARE_EVENT_SOURCE(ShipEditor_OnWeaponGroupChanged, 0x013C9784)
DECLARE_EVENT_SOURCE(ShipEditor_OnRenameEndEditText, 0x013CF0C0)
DECLARE_EVENT_SOURCE(ShipEditor_OnRenameInputCancelled, 0x013CF150)
DECLARE_EVENT_SOURCE(ShipEditor_ChangeModuleCategory, 0x013D383C)
DECLARE_EVENT_SOURCE(ShipEditor_PreviewShipPart, 0x013D38CC)
DECLARE_EVENT_SOURCE(ShipEditor_SelectedShipPart, 0x013D395C)
DECLARE_EVENT_SOURCE(ShipEditor_OnColorPickerControlChanged, 0x013DC810)
DECLARE_EVENT_SOURCE(ShipEditor_OnColorPickerTabChanged, 0x013DC8A0)
DECLARE_EVENT_SOURCE(ShipEditor_OnColorSliderMouseInput, 0x013DC930)
DECLARE_EVENT_SOURCE(ShipEditor_OnRecentColorSwatchClicked, 0x013DC9C0)
DECLARE_EVENT_SOURCE(ShipBuilder_CloseAllMenus, 0x013FDE84)
DECLARE_EVENT_SOURCE(ShipEditor_OnHintButtonActivated, 0x013FDF14)
DECLARE_EVENT_SOURCE(ShipEditor_RemoveAll3D, 0x013FDFA4)
DECLARE_EVENT_SOURCE(ReferenceQueuedEvent, 0x01465CA8)
DECLARE_EVENT_SOURCE(LoadScreenEndEvent, 0x0147EAD0)
DECLARE_EVENT_SOURCE(LoadScreenStartEvent, 0x0147EB60)
DECLARE_EVENT_SOURCE(CellAttachDetachEvent, 0x0147EBF0)
DECLARE_EVENT_SOURCE(PickRefStateChangedEvent, 0x014EF418)
DECLARE_EVENT_SOURCE(ActivityTrackerActivityStartedEvent, 0x014F9A38)
DECLARE_EVENT_SOURCE(RuntimeComponentDBFactory::ReferenceCleared3d, 0x01584B70)
DECLARE_EVENT_SOURCE(RuntimeComponentDBFactory::ReferenceDestroy, 0x01584C00)
DECLARE_EVENT_SOURCE(RuntimeComponentDBFactory::ReferenceInit, 0x01584C90)
DECLARE_EVENT_SOURCE(RuntimeComponentDBFactory::ReferenceRecycle, 0x01584D20)
DECLARE_EVENT_SOURCE(RuntimeComponentDBFactory::ReferenceSet3d, 0x01584DB0)
DECLARE_EVENT_SOURCE(RuntimeComponentDBFactory::Release3DRelatedData, 0x01584E40)
DECLARE_EVENT_SOURCE(BSWorldOriginShiftEvent, 0x0159132C)
DECLARE_EVENT_SOURCE(BGSPlanet::PlayerKnowledgeFlagSetEvent, 0x016BA69C)
DECLARE_EVENT_SOURCE(StarMap::PlanetTraitKnownEvent, 0x016BA72C)
DECLARE_EVENT_SOURCE(ResetHistoryDataEvent, 0x01790928)
DECLARE_EVENT_SOURCE(TESQuestRewardEvent, 0x017AAB8C)
DECLARE_EVENT_SOURCE(HUDWeaponWorldFOVMultChangedEvent, 0x017ACE0C)
DECLARE_EVENT_SOURCE(BGSSceneActionPlayerDialogue::ActionEndEvent, 0x01886460)
DECLARE_EVENT_SOURCE(BGSSceneActionPlayerDialogue::ActionStartEvent, 0x018864F0)
DECLARE_EVENT_SOURCE(AutoLoadDoorRolloverEvent, 0x01935BCC)
DECLARE_EVENT_SOURCE(ClearQuickContainerEvent, 0x01935C5C)
DECLARE_EVENT_SOURCE(ReferenceCellLoadedTemps, 0x019ACE3C)
DECLARE_EVENT_SOURCE(Workshop::CargoLinkAddedEvent, 0x01D29C7C)
DECLARE_EVENT_SOURCE(Workshop::CargoLinkTargetChangedEvent, 0x01D29D0C)
DECLARE_EVENT_SOURCE(Workshop::EnterOutpostBeaconModeEvent, 0x01D29D9C)
DECLARE_EVENT_SOURCE(Workshop::ItemGrabbedEvent, 0x01D29E2C)
DECLARE_EVENT_SOURCE(Workshop::ItemMovedEvent, 0x01D29EBC)
DECLARE_EVENT_SOURCE(Workshop::ItemPlacedEvent, 0x01D29F4C)
DECLARE_EVENT_SOURCE(Workshop::ItemProducedEvent, 0x01D29FDC)
DECLARE_EVENT_SOURCE(Workshop::ItemRemovedEvent, 0x01D2A06C)
DECLARE_EVENT_SOURCE(Workshop::ItemRepairedEvent, 0x01D2A0FC)
DECLARE_EVENT_SOURCE(Workshop::ItemScrappedEvent, 0x01D2A18C)
DECLARE_EVENT_SOURCE(Workshop::OutpostNameChangedEvent, 0x01D2A21C)
DECLARE_EVENT_SOURCE(Workshop::OutpostPlacedEvent, 0x01D2A2AC)
DECLARE_EVENT_SOURCE(PickRefUpdateEvent, 0x01D2A33C)
DECLARE_EVENT_SOURCE(Workshop::PlacementStatusEvent, 0x01D2A3CC)
DECLARE_EVENT_SOURCE(Workshop::PowerOffEvent, 0x01D2A45C)
DECLARE_EVENT_SOURCE(Workshop::PowerOnEvent, 0x01D2A4EC)
DECLARE_EVENT_SOURCE(Workshop::SnapBehaviorCycledEvent, 0x01D2A57C)
DECLARE_EVENT_SOURCE(Workshop::WorkshopFlyCameraEvent, 0x01D2A60C)
DECLARE_EVENT_SOURCE(Workshop::WorkshopItemPlacedEvent, 0x01D2A69C)
DECLARE_EVENT_SOURCE(Workshop::WorkshopModeEvent, 0x01D2A72C)
DECLARE_EVENT_SOURCE(Workshop::WorkshopOutputLinkEvent, 0x01D2A7BC)
DECLARE_EVENT_SOURCE(Workshop::WorkshopStatsChangedEvent, 0x01D2A84C)
DECLARE_EVENT_SOURCE(Workshop::WorkshopUpdateStatsEvent, 0x01D2A8DC)
DECLARE_EVENT_SOURCE(ShipCameraStateToggled, 0x01D7E1A4)
DECLARE_EVENT_SOURCE(PlayerControls::PlayerJumpPressEvent, 0x01F4C994)
DECLARE_EVENT_SOURCE(PlayerControls::PlayerJumpReleaseEvent, 0x01F4CA24)
DECLARE_EVENT_SOURCE(PlayerSneakingChangeEvent, 0x01F4E19C)
DECLARE_EVENT_SOURCE(PlayerControls::PlayerZeroGSprintJustPressedEvent, 0x01F4E3D8)
DECLARE_EVENT_SOURCE(PlayerControls::PlayerZeroGSprintReleasedEvent, 0x01F4E468)
DECLARE_EVENT_SOURCE(PlayerControls::PlayerIronSightsEndEvent, 0x01F515EC)
DECLARE_EVENT_SOURCE(PlayerControls::PlayerIronSightsStartEvent, 0x01F5167C)
DECLARE_EVENT_SOURCE(SaveLoadEvent, 0x01F809AC)
DECLARE_EVENT_SOURCE(SpaceshipWeaponBinding::SpaceshipWeaponBindingChangedEvent, 0x01FAA868)
DECLARE_EVENT_SOURCE(BoundaryMenu_FastTravel, 0x01FBF598)
DECLARE_EVENT_SOURCE(BoundaryMenu_ShowMap, 0x01FBF628)
DECLARE_EVENT_SOURCE(PhotoGallery_DeletePhoto, 0x01FC83F4)
DECLARE_EVENT_SOURCE(PowersMenu_ActivateEssence, 0x01FCB8D0)
DECLARE_EVENT_SOURCE(PowersMenu_EquipPower, 0x01FCB960)
DECLARE_EVENT_SOURCE(PowersMenu_FavoritePower, 0x01FCB9F0)
DECLARE_EVENT_SOURCE(ContainerMenuClosed::Event, 0x01FDEEDC)
DECLARE_EVENT_SOURCE(HangarShipSelection_ChangeSystemDisplay, 0x01FDEF6C)
DECLARE_EVENT_SOURCE(HangarShipSelection_RepairShip, 0x01FDEFFC)
DECLARE_EVENT_SOURCE(HangarShipSelection_UpgradeSystem, 0x01FDF08C)
DECLARE_EVENT_SOURCE(ShipCrewMenu_Close, 0x01FDF11C)
DECLARE_EVENT_SOURCE(BinkMovieStoppedPlayingEvent, 0x01FE4180)
DECLARE_EVENT_SOURCE(WorkshopColorMode_ApplyColors, 0x0200C69C)
DECLARE_EVENT_SOURCE(WorkshopColorMode_SelectedTab, 0x0200C72C)
DECLARE_EVENT_SOURCE(WorkshopColorMode_SliderChanged, 0x0200C7BC)
DECLARE_EVENT_SOURCE(WorkshopColorMode_SwatchChanged, 0x0200C84C)
DECLARE_EVENT_SOURCE(HUDCrewBuffMessageEvent, 0x0200D9EC)
DECLARE_EVENT_SOURCE(CraftingMenu_SessionSummaryEvent, 0x02016A88)
DECLARE_EVENT_SOURCE(CraftingMenu_CraftItem, 0x02016B18)
DECLARE_EVENT_SOURCE(CraftingMenu_ExitBench, 0x02016BA8)
DECLARE_EVENT_SOURCE(CraftingMenu_InstallMod, 0x02016C38)
DECLARE_EVENT_SOURCE(CraftingMenu_RenameItem, 0x02016CC8)
DECLARE_EVENT_SOURCE(CraftingMenu_RevertedModdedItem, 0x02016D58)
DECLARE_EVENT_SOURCE(CraftingMenu_SelectedMod, 0x02016DE8)
DECLARE_EVENT_SOURCE(CraftingMenu_SelectedModSlot, 0x02016E78)
DECLARE_EVENT_SOURCE(CraftingMenu_SelectedModdableItem, 0x02016F08)
DECLARE_EVENT_SOURCE(CraftingMenu_SelectedRecipe, 0x02016F98)
DECLARE_EVENT_SOURCE(CraftingMenu_SetInspectControls, 0x02017028)
DECLARE_EVENT_SOURCE(CraftingMenu_ToggleTracking, 0x020170B8)
DECLARE_EVENT_SOURCE(CraftingMenu_ViewingModdableItem, 0x02017148)
DECLARE_EVENT_SOURCE(ContainerMenu_CloseMenu, 0x020255FC)
DECLARE_EVENT_SOURCE(InventoryMenu_Change3DView, 0x0202572C)
DECLARE_EVENT_SOURCE(InventoryMenu_PaperDollTryOn, 0x020257BC)
DECLARE_EVENT_SOURCE(InventoryMenu_ResetPaperDollInv, 0x0202584C)
DECLARE_EVENT_SOURCE(UpdateActivateListenerEvent, 0x0202D9C8)
DECLARE_EVENT_SOURCE(StartOutpostFromListenerEvent, 0x0202F688)
DECLARE_EVENT_SOURCE(HUDModeEvent, 0x0203F884)
DECLARE_EVENT_SOURCE(OpenContainerMenuEventData, 0x0203F914)
DECLARE_EVENT_SOURCE(OpenContainerMenuFromListenerEvent, 0x0203F9A4)
DECLARE_EVENT_SOURCE(HUDRolloverActivationButtonEvent, 0x0203FA34)
DECLARE_EVENT_SOURCE(HUDRolloverActivationQCItemPressEvent, 0x0203FAC4)
DECLARE_EVENT_SOURCE(Inventory_SetSort, 0x0203FB54)
DECLARE_EVENT_SOURCE(ShowingQuestMarketTextEvent, 0x0204DA08)
DECLARE_EVENT_SOURCE(TargetHitEvent, 0x0204FFF8)
DECLARE_EVENT_SOURCE(BSTValueRequestEvent<PlayerCrosshairModeEvent>, 0x02050088)
DECLARE_EVENT_SOURCE(ClearHUDMessagesEvent, 0x02057474)
DECLARE_EVENT_SOURCE(ShowHUDMessageEvent, 0x02057504)
DECLARE_EVENT_SOURCE(PlayerDetectionLevelChangeEvent, 0x0205A664)
DECLARE_EVENT_SOURCE(ShowCustomWatchAlert, 0x0205F76C)
DECLARE_EVENT_SOURCE(PlayerUpdateEvent, 0x02092E4C)
DECLARE_EVENT_SOURCE(InventoryMenu_ToggleHelmet, 0x02092EDC)
DECLARE_EVENT_SOURCE(InventoryMenu_ToggleSuit, 0x02092F6C)
DECLARE_EVENT_SOURCE(ControlsRemappedEvent, 0x020D6648)
DECLARE_EVENT_SOURCE(SettingsPanel_CheckBoxChanged, 0x020D66D8)
DECLARE_EVENT_SOURCE(SettingsPanel_ClearBinding, 0x020D6768)
DECLARE_EVENT_SOURCE(SettingsPanel_OpenCategory, 0x020D689C)
DECLARE_EVENT_SOURCE(SettingsPanel_OpenSettings, 0x020D692C)
DECLARE_EVENT_SOURCE(SettingsPanel_RemapConfirmed, 0x020D69BC)
DECLARE_EVENT_SOURCE(SettingsPanel_RemapMode, 0x020D6A4C)
DECLARE_EVENT_SOURCE(SettingsPanel_ResetToDefaults, 0x020D6ADC)
DECLARE_EVENT_SOURCE(SettingsPanel_SaveControls, 0x020D6B6C)
DECLARE_EVENT_SOURCE(SettingsPanel_SaveSettings, 0x020D6BFC)
DECLARE_EVENT_SOURCE(SettingsPanel_SliderChanged, 0x020D6C8C)
DECLARE_EVENT_SOURCE(SettingsPanel_StepperChanged, 0x020D6D1C)
DECLARE_EVENT_SOURCE(SettingsPanel_ValidateControls, 0x020D6DAC)
DECLARE_EVENT_SOURCE(ShipCrewMenu_OpenAssignMenu, 0x020E09A8)
DECLARE_EVENT_SOURCE(ShipCrewMenu_SetSort, 0x020E0A38)
DECLARE_EVENT_SOURCE(Spaceship::PlayerMovementOutputEvent, 0x02106BA8)
DECLARE_EVENT_SOURCE(ShowLongShipBootup, 0x02106C38)
DECLARE_EVENT_SOURCE(ShipHudQuickContainer_TransferMenu, 0x02106CC8)
DECLARE_EVENT_SOURCE(ShipHud_Activate, 0x02106D58)
DECLARE_EVENT_SOURCE(ShipHud_BodyViewMarkerDimensions, 0x02106DE8)
DECLARE_EVENT_SOURCE(ShipHud_ChangeComponentSelection, 0x02106E78)
DECLARE_EVENT_SOURCE(ShipHud_CloseMenu, 0x02106F08)
DECLARE_EVENT_SOURCE(ShipHud_Deselect, 0x02106F98)
DECLARE_EVENT_SOURCE(ShipHud_FarTravel, 0x02107028)
DECLARE_EVENT_SOURCE(ShipHud_HailAccepted, 0x021070B8)
DECLARE_EVENT_SOURCE(ShipHud_HailCancelled, 0x02107148)
DECLARE_EVENT_SOURCE(ShipHud_JumpToQuestMarker, 0x021071D8)
DECLARE_EVENT_SOURCE(ShipHud_Land, 0x02107268)
DECLARE_EVENT_SOURCE(ShipHud_LandingMarkerMap, 0x021072F8)
DECLARE_EVENT_SOURCE(ShipHud_Map, 0x02107388)
DECLARE_EVENT_SOURCE(ShipHud_OnMonocleToggle, 0x02107418)
DECLARE_EVENT_SOURCE(ShipHud_OpenPhotoMode, 0x021074A8)
DECLARE_EVENT_SOURCE(ShipHud_Repair, 0x02107538)
DECLARE_EVENT_SOURCE(ShipHud_SetTargetMode, 0x021075C8)
DECLARE_EVENT_SOURCE(ShipHud_Target, 0x02107658)
DECLARE_EVENT_SOURCE(ShipHud_TargetShipSystem, 0x021076E8)
DECLARE_EVENT_SOURCE(ShipHud_UntargetShipSystem, 0x02107778)
DECLARE_EVENT_SOURCE(ShipHud_UpdateComponentPower, 0x02107808)
DECLARE_EVENT_SOURCE(DialogueMenu_CompleteExit, 0x0213301C)
DECLARE_EVENT_SOURCE(BGSScannerGuideEffectStatusUpdateEvent, 0x021431B0)
DECLARE_EVENT_SOURCE(GlobalFunc_CloseAllMenus, 0x02148178)
DECLARE_EVENT_SOURCE(GlobalFunc_CloseMenu, 0x02148208)
DECLARE_EVENT_SOURCE(GlobalFunc_PlayMenuSound, 0x02148298)
DECLARE_EVENT_SOURCE(GlobalFunc_StartGameRender, 0x02148328)
DECLARE_EVENT_SOURCE(GlobalFunc_UserEvent, 0x021483B8)
DECLARE_EVENT_SOURCE(ExperienceMeterDisplayData, 0x02151D18)
DECLARE_EVENT_SOURCE(LevelUp_AnimFinished, 0x02151DA8)
DECLARE_EVENT_SOURCE(LevelUp_OnWidgetShown, 0x02151E38)
DECLARE_EVENT_SOURCE(LevelUp_OpenDataMenu, 0x02151EC8)
DECLARE_EVENT_SOURCE(LevelUp_ShowSkills, 0x02151F58)
DECLARE_EVENT_SOURCE(LocationTextWidget_FinishedQueue, 0x02151FE8)
DECLARE_EVENT_SOURCE(DisplayFatigueWarningEvent, 0x02152290)
DECLARE_EVENT_SOURCE(BSTValueRequestEvent<SaveLoadMessageStringEvent>, 0x02155CFC)
DECLARE_EVENT_SOURCE(PlayerCrosshairModeEvent, 0x0204F700)
DECLARE_EVENT_SOURCE(HUDNotificationEvent, 0x0215EF58)
DECLARE_EVENT_SOURCE(HUDNotification_MissionActiveWidgetUpdate, 0x0215EFE8)
DECLARE_EVENT_SOURCE(HUDNotification_OpenDataMenu, 0x0215F078)
DECLARE_EVENT_SOURCE(HUDNotification_OpenMissionMenu, 0x0215F108)
DECLARE_EVENT_SOURCE(HUDNotification_SetMissionActive, 0x0215F198)
DECLARE_EVENT_SOURCE(PlayerSetWeaponStateEvent, 0x02160D78)
DECLARE_EVENT_SOURCE(BarterMenu_BuyItem, 0x02173DF8)
DECLARE_EVENT_SOURCE(BarterMenu_CloseMenu, 0x02173E88)
DECLARE_EVENT_SOURCE(BarterMenu_HideModel, 0x02173F18)
DECLARE_EVENT_SOURCE(BarterMenu_LoadModel, 0x02173FA8)
DECLARE_EVENT_SOURCE(BarterMenu_SellItem, 0x02174038)
DECLARE_EVENT_SOURCE(BarterMenu_SetMouseOverModel, 0x021740C8)
DECLARE_EVENT_SOURCE(BarterMenu_ShowFailureMessage, 0x02174158)
DECLARE_EVENT_SOURCE(BarterMenu_ViewedItem, 0x021741E8)
DECLARE_EVENT_SOURCE(MissionMenu_ClearState, 0x021787F0)
DECLARE_EVENT_SOURCE(MissionMenu_PlotToLocation, 0x02178880)
DECLARE_EVENT_SOURCE(MissionMenu_RejectQuest, 0x02178910)
DECLARE_EVENT_SOURCE(MissionMenu_SaveCategoryIndex, 0x021789A0)
DECLARE_EVENT_SOURCE(MissionMenu_SaveOpenedId, 0x02178A30)
DECLARE_EVENT_SOURCE(MissionMenu_ShowItemLocation, 0x02178AC0)
DECLARE_EVENT_SOURCE(MissionMenu_ToggleTrackingQuest, 0x02178BEC)
DECLARE_EVENT_SOURCE(DataSlateButtons_acceptClicked, 0x0217E310)
DECLARE_EVENT_SOURCE(DataSlateButtons_cancelClicked, 0x0217E3A0)
DECLARE_EVENT_SOURCE(DataSlateMenu_playSFX, 0x0217E430)
DECLARE_EVENT_SOURCE(DataSlateMenu_toggleAudio, 0x0217E4C0)
DECLARE_EVENT_SOURCE(InventoryMenu_DropItem, 0x02184BD4)
DECLARE_EVENT_SOURCE(InventoryMenu_HideModel, 0x02184C64)
DECLARE_EVENT_SOURCE(InventoryMenu_LoadModel, 0x02184CF4)
DECLARE_EVENT_SOURCE(InventoryMenu_OnEnterCategory, 0x02184D84)
DECLARE_EVENT_SOURCE(InventoryMenu_OpenCargoHold, 0x02184E14)
DECLARE_EVENT_SOURCE(InventoryMenu_SelectItem, 0x02184EA4)
DECLARE_EVENT_SOURCE(InventoryMenu_SetMouseOverModel, 0x02184F34)
DECLARE_EVENT_SOURCE(InventoryMenu_ToggleFavorite, 0x0218506C)
DECLARE_EVENT_SOURCE(MissionBoard_MissionEntryChanged, 0x021913B8)
DECLARE_EVENT_SOURCE(MissionBoard_MissionEntryPressed, 0x02191448)
DECLARE_EVENT_SOURCE(MonocleMenu_Bioscan, 0x0219873C)
DECLARE_EVENT_SOURCE(MonocleMenu_FastTravel, 0x021987CC)
DECLARE_EVENT_SOURCE(MonocleMenu_Harvest, 0x0219885C)
DECLARE_EVENT_SOURCE(MonocleMenu_Initialize, 0x021988EC)
DECLARE_EVENT_SOURCE(MonocleMenu_Outpost, 0x0219897C)
DECLARE_EVENT_SOURCE(MonocleMenu_PhotoMode, 0x02198A0C)
DECLARE_EVENT_SOURCE(MonocleMenu_Shutdown, 0x02198A9C)
DECLARE_EVENT_SOURCE(MonocleMenu_SocialSpell, 0x02198B2C)
DECLARE_EVENT_SOURCE(MonocleMenu_StartContainerView, 0x02198BBC)
DECLARE_EVENT_SOURCE(MonocleMenu_StopContainerView, 0x02198C4C)
DECLARE_EVENT_SOURCE(MonocleMenu_SurfaceMap, 0x02198CDC)
DECLARE_EVENT_SOURCE(MonocleMenu_UseListScrollControls, 0x02198D6C)
DECLARE_EVENT_SOURCE(MonocleMenu_ZoomIn, 0x02198DFC)
DECLARE_EVENT_SOURCE(MonocleMenu_ZoomOut, 0x02198E8C)
DECLARE_EVENT_SOURCE(PhotoMode_InitializeCategory, 0x0219D7BC)
DECLARE_EVENT_SOURCE(PhotoMode_ResetToDefaults, 0x0219D84C)
DECLARE_EVENT_SOURCE(PhotoMode_SliderChanged, 0x0219D8DC)
DECLARE_EVENT_SOURCE(PhotoMode_StepperChanged, 0x0219D96C)
DECLARE_EVENT_SOURCE(PhotoMode_TakeSnapshot, 0x0219D9FC)
DECLARE_EVENT_SOURCE(PhotoMode_ToggleHelmet, 0x0219DA8C)
DECLARE_EVENT_SOURCE(PhotoMode_ToggleUI, 0x0219DB1C)
DECLARE_EVENT_SOURCE(PickpocketMenu_OnItemSelect, 0x021A5FD4)
DECLARE_EVENT_SOURCE(ResearchMenu_AddMaterial, 0x021AB408)
DECLARE_EVENT_SOURCE(ResearchMenu_CategorySelected, 0x021AB498)
DECLARE_EVENT_SOURCE(ResearchMenu_ExitMenu, 0x021AB528)
DECLARE_EVENT_SOURCE(ResearchMenu_HideModel, 0x021AB5B8)
DECLARE_EVENT_SOURCE(ResearchMenu_PreviewProject, 0x021AB648)
DECLARE_EVENT_SOURCE(ResearchMenu_ProjectViewed, 0x021AB6D8)
DECLARE_EVENT_SOURCE(ResearchMenu_SetInspectControls, 0x021AB768)
DECLARE_EVENT_SOURCE(ResearchMenu_ToggleTrackingProject, 0x021AB7F8)
DECLARE_EVENT_SOURCE(UnlockedTerminalElementEvent, 0x021BD06C)
DECLARE_EVENT_SOURCE(SecurityMenu_BackOutKey, 0x021BD0FC)
DECLARE_EVENT_SOURCE(SecurityMenu_CloseMenu, 0x021BD18C)
DECLARE_EVENT_SOURCE(SecurityMenu_ConfirmExit, 0x021BD21C)
DECLARE_EVENT_SOURCE(SecurityMenu_EliminateUnusedKeys, 0x021BD2AC)
DECLARE_EVENT_SOURCE(SecurityMenu_GetRingHint, 0x021BD33C)
DECLARE_EVENT_SOURCE(SecurityMenu_SelectNewKey, 0x021BD3CC)
DECLARE_EVENT_SOURCE(SecurityMenu_TryUseKey, 0x021BD45C)
DECLARE_EVENT_SOURCE(ShipCrewAssignMenu_Assign, 0x021C1424)
DECLARE_EVENT_SOURCE(ShipCrewAssignMenu_Unassign, 0x021C14B4)
DECLARE_EVENT_SOURCE(ShipCrewMenu_ViewedItem, 0x021C1544)
DECLARE_EVENT_SOURCE(Refuel_Accept, 0x021C33E4)
DECLARE_EVENT_SOURCE(Refuel_Cancel, 0x021C3474)
DECLARE_EVENT_SOURCE(SkillsMenu_Accept, 0x021C9EBC)
DECLARE_EVENT_SOURCE(SkillsMenu_AddPatch, 0x021C9F4C)
DECLARE_EVENT_SOURCE(SkillsMenu_Cancel, 0x021C9FDC)
DECLARE_EVENT_SOURCE(SkillsMenu_ChangeCursorVisibility, 0x021CA06C)
DECLARE_EVENT_SOURCE(SkillsMenu_SaveLastCategory, 0x021CA0FC)
DECLARE_EVENT_SOURCE(BSChargenAPI::BIDataUtils::MenuClosedEvent, 0x021EEBD4)
DECLARE_EVENT_SOURCE(BSChargenAPI::BIDataUtils::PresetNPCChangedEvent, 0x021EEC64)
DECLARE_EVENT_SOURCE(CharGen_BrowChange, 0x021EECF4)
DECLARE_EVENT_SOURCE(CharGen_BrowColorChange, 0x021EED84)
DECLARE_EVENT_SOURCE(CharGen_CancelTextEntry, 0x021EEE14)
DECLARE_EVENT_SOURCE(CharGen_CloseMenu, 0x021EEEA4)
DECLARE_EVENT_SOURCE(CharGen_CyclePronoun, 0x021EEF34)
DECLARE_EVENT_SOURCE(CharGen_DirtScarsEtcChange, 0x021EEFC4)
DECLARE_EVENT_SOURCE(CharGen_EndBodyChange, 0x021EF054)
DECLARE_EVENT_SOURCE(CharGen_EndTextEntry, 0x021EF0E4)
DECLARE_EVENT_SOURCE(CharGen_EyeColorChange, 0x021EF174)
DECLARE_EVENT_SOURCE(CharGen_FacialHairChange, 0x021EF204)
DECLARE_EVENT_SOURCE(CharGen_FacialHairColorChange, 0x021EF294)
DECLARE_EVENT_SOURCE(CharGen_HairChange, 0x021EF324)
DECLARE_EVENT_SOURCE(CharGen_HairColorChange, 0x021EF3B4)
DECLARE_EVENT_SOURCE(CharGen_HeadpartPlusSelectorChange, 0x021EF444)
DECLARE_EVENT_SOURCE(CharGen_HeadpartPresetChange, 0x021EF4D4)
DECLARE_EVENT_SOURCE(CharGen_JewelryChange, 0x021EF564)
DECLARE_EVENT_SOURCE(CharGen_JewelryColorChange, 0x021EF5F4)
DECLARE_EVENT_SOURCE(CharGen_MakeupChange, 0x021EF684)
DECLARE_EVENT_SOURCE(CharGen_MarkingsChange, 0x021EF714)
DECLARE_EVENT_SOURCE(CharGen_PostBlendColorOptionChange, 0x021EF7A4)
DECLARE_EVENT_SOURCE(CharGen_PostBlendFaceChange, 0x021EF834)
DECLARE_EVENT_SOURCE(CharGen_PostBlendIntensityChange, 0x021EF8C4)
DECLARE_EVENT_SOURCE(CharGen_PresetChange, 0x021EF954)
DECLARE_EVENT_SOURCE(CharGen_RollOffLocomotion, 0x021EF9E4)
DECLARE_EVENT_SOURCE(CharGen_RollOnLocomotion, 0x021EFA74)
DECLARE_EVENT_SOURCE(CharGen_RotatePaperdoll, 0x021EFB04)
DECLARE_EVENT_SOURCE(CharGen_SetAdditionalSlider, 0x021EFB94)
DECLARE_EVENT_SOURCE(CharGen_SetBackground, 0x021EFC24)
DECLARE_EVENT_SOURCE(CharGen_SetBlockInputUnderPopup, 0x021EFCB4)
DECLARE_EVENT_SOURCE(CharGen_SetBodyValues, 0x021EFD44)
DECLARE_EVENT_SOURCE(CharGen_SetCameraPosition, 0x021EFDD4)
DECLARE_EVENT_SOURCE(CharGen_SetPronoun, 0x021EFE64)
DECLARE_EVENT_SOURCE(CharGen_SetSex, 0x021EFEF4)
DECLARE_EVENT_SOURCE(CharGen_SetSlider, 0x021EFF84)
DECLARE_EVENT_SOURCE(CharGen_SetTrait, 0x021F0014)
DECLARE_EVENT_SOURCE(CharGen_ShowChooseBackgroundMessage, 0x021F00A4)
DECLARE_EVENT_SOURCE(CharGen_ShowPlayerRenameMessage, 0x021F0134)
DECLARE_EVENT_SOURCE(CharGen_SkintoneChange, 0x021F01C4)
DECLARE_EVENT_SOURCE(CharGen_StartBodyChange, 0x021F0254)
DECLARE_EVENT_SOURCE(CharGen_StartTextEntry, 0x021F02E4)
DECLARE_EVENT_SOURCE(CharGen_SwitchBodyType, 0x021F0374)
DECLARE_EVENT_SOURCE(CharGen_SwitchLocomotion, 0x021F0404)
DECLARE_EVENT_SOURCE(CharGen_TeethChange, 0x021F0494)
DECLARE_EVENT_SOURCE(CharGen_TeethRollOff, 0x021F0524)
DECLARE_EVENT_SOURCE(CharGen_TeethRollOn, 0x021F05B4)
DECLARE_EVENT_SOURCE(CharGen_ToggleMarking, 0x021F0644)
DECLARE_EVENT_SOURCE(CharGen_TogglePreviewHabSuit, 0x021F06D4)
DECLARE_EVENT_SOURCE(UIMenuChargenMenuDisablePaperdoll, 0x021F0764)
DECLARE_EVENT_SOURCE(DataMenu_CloseMenu, 0x021F77E8)
DECLARE_EVENT_SOURCE(DataMenu_ClosedForSubMenu, 0x021F7878)
DECLARE_EVENT_SOURCE(DataMenu_Missions, 0x021F7908)
DECLARE_EVENT_SOURCE(DataMenu_PlotToLocation, 0x021F7A3C)
DECLARE_EVENT_SOURCE(DataMenu_Reopened, 0x021F7ACC)
DECLARE_EVENT_SOURCE(DataMenu_SelectedAttributesMenu, 0x021F7B5C)
DECLARE_EVENT_SOURCE(DataMenu_SelectedInventoryMenu, 0x021F7BEC)
DECLARE_EVENT_SOURCE(DataMenu_SelectedMapMenu, 0x021F7C7C)
DECLARE_EVENT_SOURCE(DataMenu_SelectedPowersMenu, 0x021F7D0C)
DECLARE_EVENT_SOURCE(DataMenu_SelectedShipMenu, 0x021F7D9C)
DECLARE_EVENT_SOURCE(DataMenu_SelectedStatusMenu, 0x021F7E2C)
DECLARE_EVENT_SOURCE(DataMenu_SetMenuForQuickEntry, 0x021F7EBC)
DECLARE_EVENT_SOURCE(DataMenu_SetPaperDollActive, 0x021F7F4C)
DECLARE_EVENT_SOURCE(PauseMenu_ActionCanceled, 0x02202114)
DECLARE_EVENT_SOURCE(PauseMenu_ConfirmAction, 0x022021A4)
DECLARE_EVENT_SOURCE(PauseMenu_ConfirmLoad, 0x02202234)
DECLARE_EVENT_SOURCE(PauseMenu_ConfirmSave, 0x022022C4)
DECLARE_EVENT_SOURCE(PauseMenu_DeleteSave, 0x02202354)
DECLARE_EVENT_SOURCE(PauseMenu_QuitToDesktop, 0x022023E4)
DECLARE_EVENT_SOURCE(PauseMenu_SetCharacter, 0x02202474)
DECLARE_EVENT_SOURCE(PauseMenu_StartAction, 0x02202504)
DECLARE_EVENT_SOURCE(PauseMenu_StartLoad, 0x02202594)
DECLARE_EVENT_SOURCE(PauseMenu_UploadSave, 0x02202624)
DECLARE_EVENT_SOURCE(PlayBink_CloseMenu, 0x022035D0)
DECLARE_EVENT_SOURCE(Spaceship::GravJumpEvent, 0x02209204)
DECLARE_EVENT_SOURCE(Spaceship::LandedSetEvent, 0x02209294)
DECLARE_EVENT_SOURCE(Reticle_OnLongAnimFinished, 0x02209324)
DECLARE_EVENT_SOURCE(ShipHudQuickContainer_TransferItem, 0x022093B4)
DECLARE_EVENT_SOURCE(ShipHud_AbortJump, 0x02209444)
DECLARE_EVENT_SOURCE(ShipHud_DockRequested, 0x022094D4)
DECLARE_EVENT_SOURCE(ShipHud_HailShip, 0x02209564)
DECLARE_EVENT_SOURCE(ShipHud_UpdateTargetPanelRect, 0x022095F4)
DECLARE_EVENT_SOURCE(TakeoffMenu_CloseMenu, 0x02209684)
DECLARE_EVENT_SOURCE(TakeoffMenu_ExitShip, 0x02209714)
DECLARE_EVENT_SOURCE(TakeoffMenu_Launch, 0x022097A4)
DECLARE_EVENT_SOURCE(StarMapMenu_LandingInputInProgress, 0x02228A40)
DECLARE_EVENT_SOURCE(StarMapMenu_MarkerGroupContainerVisibilityChanged, 0x02228AD0)
DECLARE_EVENT_SOURCE(StarMapMenu_MarkerGroupEntryClicked, 0x02228B60)
DECLARE_EVENT_SOURCE(StarMapMenu_MarkerGroupEntryHoverChanged, 0x02228BF0)
DECLARE_EVENT_SOURCE(StarMapMenu_ScanPlanet, 0x02228C80)
DECLARE_EVENT_SOURCE(StarMapMenu_SelectedLandingSite, 0x02228D10)
DECLARE_EVENT_SOURCE(StarMapMenu_SelectedLandingSiteFailed, 0x02228DA0)
DECLARE_EVENT_SOURCE(StarMapMenu_ShowRealCursor, 0x02228E30)
DECLARE_EVENT_SOURCE(StarMapMenu_QuickSelectChange, 0x0223E300)
DECLARE_EVENT_SOURCE(StarMapMenu_Galaxy_FocusSystem, 0x0224F250)
DECLARE_EVENT_SOURCE(StarMapMenu_OnGalaxyViewInitialized, 0x0224F2E0)
DECLARE_EVENT_SOURCE(StarMapMenu_ExecuteRoute, 0x02259DC8)
DECLARE_EVENT_SOURCE(StarMapMenu_OnCancel, 0x02259E58)
DECLARE_EVENT_SOURCE(StarMapMenu_OnClearRoute, 0x02259EE8)
DECLARE_EVENT_SOURCE(StarMapMenu_OnExitStarMap, 0x02259F78)
DECLARE_EVENT_SOURCE(StarMapMenu_OnHintButtonClicked, 0x0225A008)
DECLARE_EVENT_SOURCE(StarMapMenu_OnOutpostEntrySelected, 0x0225A098)
DECLARE_EVENT_SOURCE(StarMapMenu_ReadyToClose, 0x0225A128)
DECLARE_EVENT_SOURCE(SurfaceMapMenu_MarkerClicked, 0x02277DBC)
DECLARE_EVENT_SOURCE(SurfaceMapMenu_TryPlaceCustomMarker, 0x02277E4C)
DECLARE_EVENT_SOURCE(TerminalMenu_CancelEvent, 0x02292310)
DECLARE_EVENT_SOURCE(Terminal_CloseAllViews, 0x022923A0)
DECLARE_EVENT_SOURCE(Terminal_CloseTopView, 0x02292430)
DECLARE_EVENT_SOURCE(Terminal_CloseView, 0x022924C0)
DECLARE_EVENT_SOURCE(Terminal_MenuItemClick, 0x02292550)
DECLARE_EVENT_SOURCE(TestMenu_DoAction, 0x0229E3C0)
DECLARE_EVENT_SOURCE(TestMenu_ExitMenu, 0x0229E450)
DECLARE_EVENT_SOURCE(TestMenu_ShowImages, 0x0229E4E0)
DECLARE_EVENT_SOURCE(TestMenu_ShowResources, 0x0229E570)
DECLARE_EVENT_SOURCE(TestMenu_TestAll, 0x0229E600)
DECLARE_EVENT_SOURCE(TextInputMenu_EndEditText, 0x022A25A4)
DECLARE_EVENT_SOURCE(TextInputMenu_InputCanceled, 0x022A2634)
DECLARE_EVENT_SOURCE(TextInputMenu_StartEditText, 0x022A26C4)
DECLARE_EVENT_SOURCE(CraftingMenu_Highlight3D, 0x022A3994)
DECLARE_EVENT_SOURCE(CraftingMenu_RevertHighlight, 0x022A3A24)
DECLARE_EVENT_SOURCE(WorkshopBuilderMenu_ChangeBuildItem, 0x022A6088)
DECLARE_EVENT_SOURCE(WorkshopBuilderMenu_SelectedItem, 0x022A6118)
DECLARE_EVENT_SOURCE(WorkshopBuilderMenu_ToggleTracking, 0x022A61A8)
DECLARE_EVENT_SOURCE(WorkshopMenu_AttemptBuild, 0x022AE9F4)
DECLARE_EVENT_SOURCE(WorkshopMenu_CancelAction, 0x022AEA84)
DECLARE_EVENT_SOURCE(WorkshopMenu_ChangeVariant, 0x022AEB14)
DECLARE_EVENT_SOURCE(WorkshopMenu_ConnectionEvent, 0x022AEBA4)
DECLARE_EVENT_SOURCE(WorkshopMenu_ExitMenu, 0x022AEC34)
DECLARE_EVENT_SOURCE(WorkshopMenu_MessageCallback, 0x022AECC4)
DECLARE_EVENT_SOURCE(WorkshopMenu_SelectedCategory, 0x022AED54)
DECLARE_EVENT_SOURCE(WorkshopMenu_SelectedGridObject, 0x022AEDE4)
DECLARE_EVENT_SOURCE(WorkshopMenu_ShowExtras, 0x022AEE74)
DECLARE_EVENT_SOURCE(WorkshopMenu_SwitchMode, 0x022AEF04)
DECLARE_EVENT_SOURCE(WorkshopMenu_ToggleDistance, 0x022AEF94)
DECLARE_EVENT_SOURCE(WorkshopMenu_ToggleTracking, 0x022AF024)
DECLARE_EVENT_SOURCE(WorkshopMenu_ToggleView, 0x022AF0B4)
DECLARE_EVENT_SOURCE(WorkshopQuickMenu_ConfirmAction, 0x022B0B04)
DECLARE_EVENT_SOURCE(WorkshopQuickMenu_ExitMenu, 0x022B0B94)
DECLARE_EVENT_SOURCE(WorkshopTargetMenu_TargetHovered, 0x022B705C)
DECLARE_EVENT_SOURCE(WorkshopTargetMenu_TargetPicked, 0x022B70EC)
DECLARE_EVENT_SOURCE(WorkshopActionButton_HoldFinished, 0x022CE190)
DECLARE_EVENT_SOURCE(WorkshopActionButton_HoldStopped, 0x022CE220)
DECLARE_EVENT_SOURCE(WorkshopShared_SetActionHandles, 0x022CE2B0)
DECLARE_EVENT_SOURCE(WorkshopShared_StartAction, 0x022CE340)
DECLARE_EVENT_SOURCE(ModelReferenceEffectEvents::ReferenceEffectFinished, 0x022EDF54)
DECLARE_EVENT_SOURCE(BGSAcousticSpaceListener::StackChangedEvent, 0x02301E84)
DECLARE_EVENT_SOURCE(SpaceshipBIEvents::ShipPowerAllocationBIEventSent, 0x02318950)
DECLARE_EVENT_SOURCE(BGSActorDeathEvent, 0x0232513C)
DECLARE_EVENT_SOURCE(Research::ResearchProgressEvent, 0x023759B8)
DECLARE_EVENT_SOURCE(BSTValueRequestEvent<PlayerAutoAimActorEvent>, 0x02596348)
DECLARE_EVENT_SOURCE(PlayerInCombatChangeEvent, 0x025AE890)
DECLARE_EVENT_SOURCE(BlurEvent, 0x0287D218)
DECLARE_EVENT_SOURCE(ContainerMenu_HideModel, 0x028A0208)
DECLARE_EVENT_SOURCE(ContainerMenu_Jettison, 0x028A0298)
DECLARE_EVENT_SOURCE(ContainerMenu_LoadModel, 0x028A0328)
DECLARE_EVENT_SOURCE(ContainerMenu_OpenRefuelMenu, 0x028A03B8)
DECLARE_EVENT_SOURCE(ContainerMenu_SetMouseOverModel, 0x028A0448)
DECLARE_EVENT_SOURCE(ContainerMenu_TakeAll, 0x028A04D8)
DECLARE_EVENT_SOURCE(ContainerMenu_ToggleEquip, 0x028A0568)
DECLARE_EVENT_SOURCE(ContainerMenu_TransferItem, 0x028A069C)
DECLARE_EVENT_SOURCE(DialogueMenu_OnDialogueSelect, 0x028A4140)
DECLARE_EVENT_SOURCE(DialogueMenu_OnListVisibilityChange, 0x028A41D0)
DECLARE_EVENT_SOURCE(DialogueMenu_OnPersuasionAutoWin, 0x028A4260)
DECLARE_EVENT_SOURCE(DialogueMenu_OnScriptedDialogueSelect, 0x028A42F0)
DECLARE_EVENT_SOURCE(DialogueMenu_RequestExit, 0x028A4380)
DECLARE_EVENT_SOURCE(DialogueMenu_RequestSkipDialogue, 0x028A4410)
DECLARE_EVENT_SOURCE(BSTValueRequestEvent<FaderMenuDisplayState>, 0x028A51D8)
DECLARE_EVENT_SOURCE(FavoritesMenu_AssignQuickkey, 0x028B1210)
DECLARE_EVENT_SOURCE(FavoritesMenu_UseQuickkey, 0x028B12A0)
DECLARE_EVENT_SOURCE(LoadingMenu_RefreshText, 0x028B5120)
DECLARE_EVENT_SOURCE(MainMenu_ActionCanceled, 0x028B87F0)
DECLARE_EVENT_SOURCE(MainMenu_ActionConfirmed, 0x028B8880)
DECLARE_EVENT_SOURCE(MainMenu_ConfirmLoad, 0x028B8910)
DECLARE_EVENT_SOURCE(MainMenu_DeleteSave, 0x028B89A0)
DECLARE_EVENT_SOURCE(MainMenu_SetCharacter, 0x028B8ACC)
DECLARE_EVENT_SOURCE(MainMenu_StartAction, 0x028B8B5C)
DECLARE_EVENT_SOURCE(MainMenu_StartLoad, 0x028B8BEC)
DECLARE_EVENT_SOURCE(MainMenu_UploadSave, 0x028B8C7C)
DECLARE_EVENT_SOURCE(BGSAppPausedEvent, 0x028BA4AC)
DECLARE_EVENT_SOURCE(MessageBoxMenu_OnBackOut, 0x028BF798)
DECLARE_EVENT_SOURCE(MessageBoxMenu_OnButtonPress, 0x028BF828)
DECLARE_EVENT_SOURCE(MessageBoxMenu_OnScriptedButtonPress, 0x028BF8B8)
DECLARE_EVENT_SOURCE(SleepWaitMenu_InterruptRest, 0x028C4548)
DECLARE_EVENT_SOURCE(SleepWaitMenu_StartRest, 0x028C45D8)
DECLARE_EVENT_SOURCE(Spaceship::BoughtEvent, 0x02B8E97C)
DECLARE_EVENT_SOURCE(Spaceship::ContrabandScanWarningEvent, 0x02B8EA0C)
DECLARE_EVENT_SOURCE(Spaceship::DockEvent, 0x02B8EA9C)
DECLARE_EVENT_SOURCE(Spaceship::DynamicNavmeshCompleted, 0x02B8EB2C)
DECLARE_EVENT_SOURCE(Spaceship::FarTravelEvent, 0x02B8EBBC)
DECLARE_EVENT_SOURCE(Spaceship::LandingEvent, 0x02B8EC4C)
DECLARE_EVENT_SOURCE(Spaceship::PlanetScanEvent, 0x02B8ECDC)
DECLARE_EVENT_SOURCE(Spaceship::RampDownEvent, 0x02B8ED6C)
DECLARE_EVENT_SOURCE(Spaceship::RefueledEvent, 0x02B8EDFC)
DECLARE_EVENT_SOURCE(Spaceship::RegisteredEvent, 0x02B8EE8C)
DECLARE_EVENT_SOURCE(Spaceship::ShieldEvent, 0x02B8EF1C)
DECLARE_EVENT_SOURCE(Spaceship::ShipAddedEvent, 0x02B8EFAC)
DECLARE_EVENT_SOURCE(Spaceship::ShipCollisionEvent, 0x02B8F03C)
DECLARE_EVENT_SOURCE(Spaceship::ShipCustomizedEvent, 0x02B8F0CC)
DECLARE_EVENT_SOURCE(Spaceship::SoldEvent, 0x02B8F15C)
DECLARE_EVENT_SOURCE(Spaceship::SystemDamagedEvent, 0x02B8F1EC)
DECLARE_EVENT_SOURCE(Spaceship::SystemPowerAllocationEvent, 0x02B8F27C)
DECLARE_EVENT_SOURCE(Spaceship::SystemPowerChangeEvent, 0x02B8F30C)
DECLARE_EVENT_SOURCE(Spaceship::SystemRepairedBIEvent, 0x02B8F39C)
DECLARE_EVENT_SOURCE(Spaceship::SystemRepairedEvent, 0x02B8F42C)
DECLARE_EVENT_SOURCE(Spaceship::TakeDamagEvent, 0x02B8F4BC)
DECLARE_EVENT_SOURCE(ContextStackChangedEvent, 0x02CBBAF8)
DECLARE_EVENT_SOURCE(UpdateSceneRectEvent, 0x02E916A0)
DECLARE_EVENT_SOURCE(GameStalledEvent, 0x03056190)

// more

DECLARE_EVENT_SOURCE(TESCellNavmeshGeneratedEvent, 0x005C0E70)
DECLARE_EVENT_SOURCE(TESHitEvent, 0x005C1700)
DECLARE_EVENT_SOURCE(FirstThirdPersonSwitch::Event, 0x005C20F0)
DECLARE_EVENT_SOURCE(PerkChanged::Event, 0x01307D70)
DECLARE_EVENT_SOURCE(TESHarvestEvent::ItemHarvested, 0x014EF3B0)
DECLARE_EVENT_SOURCE(ActivityEvents::ActivityCompletedEvent, 0x014F76B0)
DECLARE_EVENT_SOURCE(ChallengeCompletedEvent::Event, 0x014F99D0)
DECLARE_EVENT_SOURCE(InventoryItemEvent::Event, 0x01530FB0)
DECLARE_EVENT_SOURCE(BooksRead::Event, 0x01929490)
DECLARE_EVENT_SOURCE(LocationExplored::Event, 0x01960E30)
DECLARE_EVENT_SOURCE(LocationLinked::Event, 0x01960EA0)
DECLARE_EVENT_SOURCE(Activation::Event, 0x01A1C4E0)
DECLARE_EVENT_SOURCE(ActorCellChangeEvent, 0x01A2DED0)
DECLARE_EVENT_SOURCE(ActorHeadAttachedEvent, 0x01A2DF40)
DECLARE_EVENT_SOURCE(ActorValueEvents::ActorValueChangedEvent, 0x01A2DFB0)
DECLARE_EVENT_SOURCE(AliasChangeEvent, 0x01A2E020)
DECLARE_EVENT_SOURCE(AnimationGraphDependentEvent, 0x01A2E090)
DECLARE_EVENT_SOURCE(BGSAffinityEventEvent, 0x01A2E100)
DECLARE_EVENT_SOURCE(BGSCellGridLoadEvent, 0x01A2E170)
DECLARE_EVENT_SOURCE(BGSEventProcessedEvent, 0x01A2E1E0)
DECLARE_EVENT_SOURCE(BGSHavokWorldCreatedEvent, 0x01A2E250)
DECLARE_EVENT_SOURCE(BGSLocationLoadedEvent, 0x01A2E2C0)
DECLARE_EVENT_SOURCE(BGSOnPlayerCompanionDismiss, 0x01A2E330)
DECLARE_EVENT_SOURCE(BGSOnPlayerCompleteResearchEvent, 0x01A2E3A0)
DECLARE_EVENT_SOURCE(BGSOnPlayerCraftItemEvent, 0x01A2E410)
DECLARE_EVENT_SOURCE(BGSOnPlayerCreateRobotEvent, 0x01A2E480)
DECLARE_EVENT_SOURCE(BGSOnPlayerEnterVertibirdEvent, 0x01A2E4F0)
DECLARE_EVENT_SOURCE(BGSOnPlayerFallLongDistances, 0x01A2E560)
DECLARE_EVENT_SOURCE(BGSOnPlayerFireWeaponEvent, 0x01A2E5D0)
DECLARE_EVENT_SOURCE(BGSOnPlayerHealTeammateEvent, 0x01A2E640)
DECLARE_EVENT_SOURCE(BGSOnPlayerLoiteringBeginEvent, 0x01A2E6B0)
DECLARE_EVENT_SOURCE(BGSOnPlayerLoiteringEndEvent, 0x01A2E720)
DECLARE_EVENT_SOURCE(BGSOnPlayerModArmorWeaponEvent, 0x01A2E790)
DECLARE_EVENT_SOURCE(BGSOnPlayerModRobotEvent, 0x01A2E800)
DECLARE_EVENT_SOURCE(BGSOnPlayerSwimmingEvent, 0x01A2E870)
DECLARE_EVENT_SOURCE(BGSOnPlayerUseWorkBenchEvent, 0x01A2E8E0)
DECLARE_EVENT_SOURCE(BGSOnSpeechChallengeAvailable, 0x01A2E950)
DECLARE_EVENT_SOURCE(BGSRadiationDamageEvent, 0x01A2E9C0)
DECLARE_EVENT_SOURCE(BuilderMenuSelectEvent, 0x01A2EA30)
DECLARE_EVENT_SOURCE(CrewAssignedEvent, 0x01A2EAA0)
DECLARE_EVENT_SOURCE(CrewDismissedEvent, 0x01A2EB10)
DECLARE_EVENT_SOURCE(DestroyedEvent, 0x01A2EB80)
DECLARE_EVENT_SOURCE(HomeShipSetEvent, 0x01A2EBF0)
DECLARE_EVENT_SOURCE(InstantReferenceInteractionEvent, 0x01A2EC60)
DECLARE_EVENT_SOURCE(ItemConsumedEvent, 0x01A2ECD0)
DECLARE_EVENT_SOURCE(ItemSwappedEvent, 0x01A2ED40)
DECLARE_EVENT_SOURCE(LockPickedEvent, 0x01A2EDB0)
DECLARE_EVENT_SOURCE(MapMarkerDiscoveredEvent, 0x01A2EE20)
DECLARE_EVENT_SOURCE(ObjectScannedEvent, 0x01A2EE90)
DECLARE_EVENT_SOURCE(PlayerAddItemEvent, 0x01A2EF00)
DECLARE_EVENT_SOURCE(PlayerArrestedEvent, 0x01A2EF70)
DECLARE_EVENT_SOURCE(PlayerAssaultActorEvent, 0x01A2EFE0)
DECLARE_EVENT_SOURCE(PlayerBuyShipEvent, 0x01A2F050)
DECLARE_EVENT_SOURCE(PlayerCrimeGoldEvent, 0x01A2F0C0)
DECLARE_EVENT_SOURCE(PlayerFailedPlotRouteEvent, 0x01A2F130)
DECLARE_EVENT_SOURCE(PlayerJailEvent, 0x01A2F1A0)
DECLARE_EVENT_SOURCE(PlayerModifiedShipEvent, 0x01A2F210)
DECLARE_EVENT_SOURCE(PlayerMurderActorEvent, 0x01A2F280)
DECLARE_EVENT_SOURCE(PlayerPayFineEvent, 0x01A2F2F0)
DECLARE_EVENT_SOURCE(PlayerPlanetSurveyCompleteEvent, 0x01A2F360)
DECLARE_EVENT_SOURCE(PlayerPlanetSurveyProgressEvent, 0x01A2F3D0)
DECLARE_EVENT_SOURCE(PlayerSellShipEvent, 0x01A2F440)
DECLARE_EVENT_SOURCE(PlayerTrespassEvent, 0x01A2F4B0)
DECLARE_EVENT_SOURCE(QuickContainerOpenedEvent, 0x01A2F520)
DECLARE_EVENT_SOURCE(RefControlChangedEvent, 0x01A2F590)
DECLARE_EVENT_SOURCE(ReferenceDestroyedEvent, 0x01A2F600)
DECLARE_EVENT_SOURCE(SpeechChallengeCompletionEvent, 0x01A2F670)
DECLARE_EVENT_SOURCE(TESActivateEvent, 0x01A2F6E0)
DECLARE_EVENT_SOURCE(TESActiveEffectApplyFinishEvent, 0x01A2F750)
DECLARE_EVENT_SOURCE(TESActiveEffectRemovedEvent, 0x01A2F7C0)
DECLARE_EVENT_SOURCE(TESActorActivatedRefEvent, 0x01A2F830)
DECLARE_EVENT_SOURCE(TESActorLocationChangeEvent, 0x01A2F8A0)
DECLARE_EVENT_SOURCE(TESBookReadEvent, 0x01A2F910)
DECLARE_EVENT_SOURCE(TESCellCriticalRefsAttachedEvent, 0x01A2F980)
DECLARE_EVENT_SOURCE(TESCellFullyLoadedEvent, 0x01A2F9F0)
DECLARE_EVENT_SOURCE(TESCellGravityChangeEvent, 0x01A2FA60)
DECLARE_EVENT_SOURCE(TESCellReadyToApplyDecalsEvent, 0x01A2FAD0)
DECLARE_EVENT_SOURCE(TESCellReference3DAttachEvent, 0x01A2FB40)
DECLARE_EVENT_SOURCE(TESCellReferenceAttachDetachEvent, 0x01A2FBB0)
DECLARE_EVENT_SOURCE(TESCombatEvent, 0x01A2FC20)
DECLARE_EVENT_SOURCE(TESCombatListEvent, 0x01A2FC90)
DECLARE_EVENT_SOURCE(TESCommandModeCompleteCommandEvent, 0x01A2FD00)
DECLARE_EVENT_SOURCE(TESCommandModeEnterEvent, 0x01A2FD70)
DECLARE_EVENT_SOURCE(TESCommandModeExitEvent, 0x01A2FDE0)
DECLARE_EVENT_SOURCE(TESCommandModeGiveCommandEvent, 0x01A2FE50)
DECLARE_EVENT_SOURCE(TESConsciousnessEvent, 0x01A2FEC0)
DECLARE_EVENT_SOURCE(TESContainerChangedEvent, 0x01A2FF30)
DECLARE_EVENT_SOURCE(TESDeathEvent, 0x01A2FFA0)
DECLARE_EVENT_SOURCE(TESDeferredKillEvent, 0x01A30010)
DECLARE_EVENT_SOURCE(TESDestructionStageChangedEvent, 0x01A30080)
DECLARE_EVENT_SOURCE(TESEnterBleedoutEvent, 0x01A300F0)
DECLARE_EVENT_SOURCE(TESEnterSneakingEvent, 0x01A30160)
DECLARE_EVENT_SOURCE(TESEquipEvent, 0x01A301D0)
DECLARE_EVENT_SOURCE(TESEscortWaitStartEvent, 0x01A30240)
DECLARE_EVENT_SOURCE(TESEscortWaitStopEvent, 0x01A302B0)
DECLARE_EVENT_SOURCE(TESExitBleedoutEvent, 0x01A30320)
DECLARE_EVENT_SOURCE(TESExitFurnitureEvent, 0x01A30390)
DECLARE_EVENT_SOURCE(TESFormDeleteEvent, 0x01A30400)
DECLARE_EVENT_SOURCE(TESFormIDRemapEvent, 0x01A30470)
DECLARE_EVENT_SOURCE(TESFurnitureEvent, 0x01A304E0)
DECLARE_EVENT_SOURCE(TESGrabReleaseEvent, 0x01A30550)
DECLARE_EVENT_SOURCE(TESInitScriptEvent, 0x01A305C0)
DECLARE_EVENT_SOURCE(TESLimbCrippleEvent, 0x01A30630)
DECLARE_EVENT_SOURCE(TESLoadGameEvent, 0x01A306A0)
DECLARE_EVENT_SOURCE(TESLocationExploredEvent, 0x01A30710)
DECLARE_EVENT_SOURCE(TESLockChangedEvent, 0x01A30780)
DECLARE_EVENT_SOURCE(TESMagicEffectApplyEvent, 0x01A307F0)
DECLARE_EVENT_SOURCE(TESMissionAcceptedEvent, 0x01A30860)
DECLARE_EVENT_SOURCE(TESObjectLoadedEvent, 0x01A308D0)
DECLARE_EVENT_SOURCE(TESObjectREFRTranslationEvent, 0x01A30940)
DECLARE_EVENT_SOURCE(TESOnPCDialogueTargetEvent, 0x01A309B0)
DECLARE_EVENT_SOURCE(TESOpenCloseEvent, 0x01A30A20)
DECLARE_EVENT_SOURCE(TESPackageEvent, 0x01A30A90)
DECLARE_EVENT_SOURCE(TESPerkEntryRunEvent, 0x01A30B00)
DECLARE_EVENT_SOURCE(TESPickNewIdleEvent, 0x01A30B70)
DECLARE_EVENT_SOURCE(TESPickpocketFailedEvent, 0x01A30BE0)
DECLARE_EVENT_SOURCE(TESPlayerActiveEffectEvent, 0x01A30C50)
DECLARE_EVENT_SOURCE(TESPlayerFollowerWarpEvent, 0x01A30CC0)
DECLARE_EVENT_SOURCE(TESQuestInitEvent, 0x01A30D30)
DECLARE_EVENT_SOURCE(TESQuestRejectedEvent, 0x01A30DA0)
DECLARE_EVENT_SOURCE(TESQuestStageEvent, 0x01A30E10)
DECLARE_EVENT_SOURCE(TESQuestStageItemDoneEvent, 0x01A30E80)
DECLARE_EVENT_SOURCE(TESQuestStartStopEvent, 0x01A30EF0)
DECLARE_EVENT_SOURCE(TESQuestTimerEvent, 0x01A30F60)
DECLARE_EVENT_SOURCE(TESResetEvent, 0x01A30FD0)
DECLARE_EVENT_SOURCE(TESResolveNPCTemplatesEvent, 0x01A31040)
DECLARE_EVENT_SOURCE(TESSceneActionEvent, 0x01A310B0)
DECLARE_EVENT_SOURCE(TESSceneEvent, 0x01A31120)
DECLARE_EVENT_SOURCE(TESScenePhaseEvent, 0x01A31190)
DECLARE_EVENT_SOURCE(TESSellEvent, 0x01A31200)
DECLARE_EVENT_SOURCE(TESSleepStartEvent, 0x01A31270)
DECLARE_EVENT_SOURCE(TESSleepStopEvent, 0x01A312E0)
DECLARE_EVENT_SOURCE(TESSpellCastEvent, 0x01A31350)
DECLARE_EVENT_SOURCE(TESSpellCastFailureEvent, 0x01A313C0)
DECLARE_EVENT_SOURCE(TESSwitchRaceCompleteEvent, 0x01A31430)
DECLARE_EVENT_SOURCE(TESTopicInfoEvent, 0x01A314A0)
DECLARE_EVENT_SOURCE(TESTrackedStatsEvent, 0x01A31510)
DECLARE_EVENT_SOURCE(TESTrapHitEvent, 0x01A31580)
DECLARE_EVENT_SOURCE(TESTriggerEnterEvent, 0x01A315F0)
DECLARE_EVENT_SOURCE(TESTriggerEvent, 0x01A31660)
DECLARE_EVENT_SOURCE(TESTriggerLeaveEvent, 0x01A316D0)
DECLARE_EVENT_SOURCE(TESUniqueIDChangeEvent, 0x01A31740)
DECLARE_EVENT_SOURCE(TESWaitStartEvent, 0x01A317B0)
DECLARE_EVENT_SOURCE(TESWaitStopEvent, 0x01A31820)
DECLARE_EVENT_SOURCE(TerminalMenuMenuItemRunEvent, 0x01A31890)
DECLARE_EVENT_SOURCE(TerminalMenuOnEnterEvent, 0x01A31900)
DECLARE_EVENT_SOURCE(WorkshopNPCTransferEvent, 0x01A31970)
DECLARE_EVENT_SOURCE(TESObjectREFRIsReadyForAttachEvent, 0x01A319E0)
DECLARE_EVENT_SOURCE(DefaultObjectsReadyEvent::Event, 0x01A5CF10)
DECLARE_EVENT_SOURCE(ObjectiveState::Event, 0x01B064A0)
DECLARE_EVENT_SOURCE(QuestStatus::Event, 0x01B666B0)
DECLARE_EVENT_SOURCE(RefillAliasEvent::Event, 0x01B66720)
DECLARE_EVENT_SOURCE(TESQuestEvent::Event, 0x01B66790)
DECLARE_EVENT_SOURCE(RolloverIsCrimeEvent::Event, 0x0204FF90)
DECLARE_EVENT_SOURCE(HideSubtitleEvent::Event, 0x0205B1B0)
DECLARE_EVENT_SOURCE(ShowSubtitleEvent::Event, 0x0205B220)
DECLARE_EVENT_SOURCE(MissionMenuStateEvent::Event, 0x020AD630)
DECLARE_EVENT_SOURCE(ClearShipHudTarget::Event, 0x02106AD0)
DECLARE_EVENT_SOURCE(TryUpdateShipHudTarget::Event, 0x02106B40)
DECLARE_EVENT_SOURCE(LocationTextEvent::Event, 0x02160CA0)
DECLARE_EVENT_SOURCE(TraitDiscoveryTextEvent::Event, 0x02160D10)
DECLARE_EVENT_SOURCE(DaysPassed::Event, 0x023DAA80)
DECLARE_EVENT_SOURCE(HourPassed::Event, 0x023DAAF0)
DECLARE_EVENT_SOURCE(ActorDamage::Event, 0x024B7E80)
DECLARE_EVENT_SOURCE(ActorItemEquipped::Event, 0x024B7EF0)
DECLARE_EVENT_SOURCE(ActorKill::Event, 0x024B7F60)
DECLARE_EVENT_SOURCE(AssaultCrime::Event, 0x024B7FD0)
DECLARE_EVENT_SOURCE(DisarmedEvent::Event, 0x024B8040)
DECLARE_EVENT_SOURCE(FactionRankChange::Event, 0x024B80B0)
DECLARE_EVENT_SOURCE(GrandTheftHorse::Event, 0x024B8120)
DECLARE_EVENT_SOURCE(MurderCrime::Event, 0x024B8190)
DECLARE_EVENT_SOURCE(PiracyCrime::Event, 0x024B8200)
DECLARE_EVENT_SOURCE(Bleedout::Event, 0x024E6460)
DECLARE_EVENT_SOURCE(ContractedDisease::Event, 0x024E64D0)
DECLARE_EVENT_SOURCE(ReloadWeaponEvent::Event, 0x024E6540)
DECLARE_EVENT_SOURCE(SpellsLearned::Event, 0x024F4B70)
DECLARE_EVENT_SOURCE(Bounty::Event, 0x02595860)
DECLARE_EVENT_SOURCE(ChestLooted::Event, 0x025958D0)
DECLARE_EVENT_SOURCE(CriticalHitEvent::Event, 0x02595940)
DECLARE_EVENT_SOURCE(CustomMarkerUpdate::Event, 0x025959B0)
DECLARE_EVENT_SOURCE(DaysJailed::Event, 0x02595A20)
DECLARE_EVENT_SOURCE(EnteredUnity::Event, 0x02595A90)
DECLARE_EVENT_SOURCE(FinePaid::Event, 0x02595B00)
DECLARE_EVENT_SOURCE(ItemCrafted::Event, 0x02595B70)
DECLARE_EVENT_SOURCE(ItemSteal::Event, 0x02595BE0)
DECLARE_EVENT_SOURCE(JailEscape::Event, 0x02595C50)
DECLARE_EVENT_SOURCE(Jailing::Event, 0x02595CC0)
DECLARE_EVENT_SOURCE(LevelIncrease::Event, 0x02595D30)
DECLARE_EVENT_SOURCE(LocationMarkerArrayUpdate::Event, 0x02595DA0)
DECLARE_EVENT_SOURCE(PlayerActiveEffectChanged::Event, 0x02595E10)
DECLARE_EVENT_SOURCE(PlayerAmmoChanged::Event, 0x02595E80)
DECLARE_EVENT_SOURCE(PlayerCharacterQuestEvent::Event, 0x02595EF0)
DECLARE_EVENT_SOURCE(PlayerDifficultySettingChanged::Event, 0x02595F60)
DECLARE_EVENT_SOURCE(PlayerFastTravel::Event, 0x02595FD0)
DECLARE_EVENT_SOURCE(PlayerInDialogueChanged::Event, 0x02596040)
DECLARE_EVENT_SOURCE(PlayerLifeStateChanged::Event, 0x025960B0)
DECLARE_EVENT_SOURCE(PlayerPickpocketSuccess::Event, 0x02596120)
DECLARE_EVENT_SOURCE(PoisonedWeapon::Event, 0x02596190)
DECLARE_EVENT_SOURCE(TerminalHacked::Event, 0x02596200)
DECLARE_EVENT_SOURCE(TravelMarkerStateChange::Event, 0x02596270)
DECLARE_EVENT_SOURCE(WeaponAttack::Event, 0x025962E0)
DECLARE_EVENT_SOURCE(Trespass::Event, 0x025F3C70)
DECLARE_EVENT_SOURCE(VATSEvents::ModeChange, 0x0265D170)
DECLARE_EVENT_SOURCE(VATSCommand, 0x0265D1E0)
DECLARE_EVENT_SOURCE(HoursPassed::Event, 0x028C44E0)

// other events
DECLARE_EVENT_SOURCE(RadioManager::PipboyTransmitterDetectionEvent, 0x02363C00)
DECLARE_EVENT_SOURCE_EX(XPChange::Event, 0x050D7BC0)
DECLARE_EVENT_SOURCE_EX(WeaponFiredEvent, 0x050CADA8)
DECLARE_EVENT_SOURCE_EX(ActorEquipManagerEvent::Event, 0x05A65FF0)
DECLARE_EVENT_SOURCE_EX(ActorEquipManagerEvent::SpellEvent, 0x05A66018)
DECLARE_EVENT_SOURCE_EX(AttachReference::Event, 0x050D7B98)