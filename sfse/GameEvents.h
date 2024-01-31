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
        DEFINE_MEMBER_FN_1(RegisterSink, void, 0x005BCE5C, SinkBase* sink);
        DEFINE_MEMBER_FN_1(UnregisterSink, void, 0x005BCC70, SinkBase* sink);
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

DECLARE_EVENT_SOURCE(SnapTemplateUtils::SnapReplaceEvent, 0x0083E2CC)
DECLARE_EVENT_SOURCE(ImageFixtureEvent_RequestImage, 0x0083F584)
DECLARE_EVENT_SOURCE(ImageFixtureEvent_UnregisterImage, 0x00842480)
DECLARE_EVENT_SOURCE(Spaceship::TakeOffEvent, 0x00845328)
DECLARE_EVENT_SOURCE(HUDActivityIncreaseEvent, 0x012524E0)
DECLARE_EVENT_SOURCE(AnimationDataCleanupEvent, 0x0127371C)
DECLARE_EVENT_SOURCE(AnimationDataSetupEvent, 0x012737AC)
DECLARE_EVENT_SOURCE(EndLoadGameEvent, 0x012C2064)
DECLARE_EVENT_SOURCE(StartLoadGameEvent, 0x012C20F4)
DECLARE_EVENT_SOURCE(ShipEditor_SystemSelected, 0x012D8B7C)
DECLARE_EVENT_SOURCE(ShipEditor_PreviewUpgrade, 0x012DF240)
DECLARE_EVENT_SOURCE(ShipEditor_SelectedUpgrade, 0x012DF2D0)
DECLARE_EVENT_SOURCE(RuntimeComponentDBFactory::ReferenceAttach, 0x0131CDF0)
DECLARE_EVENT_SOURCE(RuntimeComponentDBFactory::ReferenceDetach, 0x0131CE80)
DECLARE_EVENT_SOURCE(WeaponGroupAssignmentMenu_ChangeWeaponAssignment, 0x013A26D4)
DECLARE_EVENT_SOURCE(WeaponGroupAssignmentMenu_OnHintButtonActivated, 0x013A2764)
DECLARE_EVENT_SOURCE(ShipEditor_OnExitConfirmCancel, 0x013C2E74)
DECLARE_EVENT_SOURCE(ShipEditor_OnExitConfirmExit, 0x013C2F04)
DECLARE_EVENT_SOURCE(ShipEditor_OnExitConfirmSaveAndExit, 0x013C2F94)
DECLARE_EVENT_SOURCE(ShipEditor_OnFlightCheckTabChanged, 0x013C7A34)
DECLARE_EVENT_SOURCE(ShipEditor_OnWeaponGroupChanged, 0x013C7AC4)
DECLARE_EVENT_SOURCE(ShipEditor_OnRenameEndEditText, 0x013CD400)
DECLARE_EVENT_SOURCE(ShipEditor_OnRenameInputCancelled, 0x013CD490)
DECLARE_EVENT_SOURCE(ShipEditor_ChangeModuleCategory, 0x013D1B7C)
DECLARE_EVENT_SOURCE(ShipEditor_PreviewShipPart, 0x013D1C0C)
DECLARE_EVENT_SOURCE(ShipEditor_SelectedShipPart, 0x013D1C9C)
DECLARE_EVENT_SOURCE(ShipEditor_OnColorPickerControlChanged, 0x013DABA0)
DECLARE_EVENT_SOURCE(ShipEditor_OnColorPickerTabChanged, 0x013DAC30)
DECLARE_EVENT_SOURCE(ShipEditor_OnColorSliderMouseInput, 0x013DACC0)
DECLARE_EVENT_SOURCE(ShipEditor_OnRecentColorSwatchClicked, 0x013DAD50)
DECLARE_EVENT_SOURCE(ShipBuilder_CloseAllMenus, 0x013FD7A4)
DECLARE_EVENT_SOURCE(ShipEditor_OnHintButtonActivated, 0x013FD834)
DECLARE_EVENT_SOURCE(ShipEditor_RemoveAll3D, 0x013FD8C4)
DECLARE_EVENT_SOURCE(ReferenceQueuedEvent, 0x01465608)
DECLARE_EVENT_SOURCE(LoadScreenEndEvent, 0x0147E400)
DECLARE_EVENT_SOURCE(LoadScreenStartEvent, 0x0147E490)
DECLARE_EVENT_SOURCE(CellAttachDetachEvent, 0x0147E520)
DECLARE_EVENT_SOURCE(PickRefStateChangedEvent, 0x014EF138)
DECLARE_EVENT_SOURCE(ActivityTrackerActivityStartedEvent, 0x014F9878)
DECLARE_EVENT_SOURCE(RuntimeComponentDBFactory::ReferenceCleared3d, 0x01584E30)
DECLARE_EVENT_SOURCE(RuntimeComponentDBFactory::ReferenceDestroy, 0x01584EC0)
DECLARE_EVENT_SOURCE(RuntimeComponentDBFactory::ReferenceInit, 0x01584F50)
DECLARE_EVENT_SOURCE(RuntimeComponentDBFactory::ReferenceRecycle, 0x01584FE0)
DECLARE_EVENT_SOURCE(RuntimeComponentDBFactory::ReferenceSet3d, 0x01585070)
DECLARE_EVENT_SOURCE(RuntimeComponentDBFactory::Release3DRelatedData, 0x01585100)
DECLARE_EVENT_SOURCE(BSWorldOriginShiftEvent, 0x015915CC)
DECLARE_EVENT_SOURCE(BGSPlanet::PlayerKnowledgeFlagSetEvent, 0x016BAC5C)
DECLARE_EVENT_SOURCE(StarMap::PlanetTraitKnownEvent, 0x016BACEC)
DECLARE_EVENT_SOURCE(ResetHistoryDataEvent, 0x0178F6A8)
DECLARE_EVENT_SOURCE(TESQuestRewardEvent, 0x017A9958)
DECLARE_EVENT_SOURCE(HUDWeaponWorldFOVMultChangedEvent, 0x017ABB6C)
DECLARE_EVENT_SOURCE(BGSSceneActionPlayerDialogue::ActionEndEvent, 0x01886770)
DECLARE_EVENT_SOURCE(BGSSceneActionPlayerDialogue::ActionStartEvent, 0x01886800)
DECLARE_EVENT_SOURCE(AutoLoadDoorRolloverEvent, 0x019367AC)
DECLARE_EVENT_SOURCE(ClearQuickContainerEvent, 0x0193683C)
DECLARE_EVENT_SOURCE(ReferenceCellLoadedTemps, 0x019ADA6C)
DECLARE_EVENT_SOURCE(Workshop::CargoLinkAddedEvent, 0x01D2CEAC)
DECLARE_EVENT_SOURCE(Workshop::CargoLinkTargetChangedEvent, 0x01D2CF3C)
DECLARE_EVENT_SOURCE(Workshop::EnterOutpostBeaconModeEvent, 0x01D2CFCC)
DECLARE_EVENT_SOURCE(Workshop::ItemGrabbedEvent, 0x01D2D05C)
DECLARE_EVENT_SOURCE(Workshop::ItemMovedEvent, 0x01D2D0EC)
DECLARE_EVENT_SOURCE(Workshop::ItemPlacedEvent, 0x01D2D17C)
DECLARE_EVENT_SOURCE(Workshop::ItemProducedEvent, 0x01D2D20C)
DECLARE_EVENT_SOURCE(Workshop::ItemRemovedEvent, 0x01D2D29C)
DECLARE_EVENT_SOURCE(Workshop::ItemRepairedEvent, 0x01D2D32C)
DECLARE_EVENT_SOURCE(Workshop::ItemScrappedEvent, 0x01D2D3BC)
DECLARE_EVENT_SOURCE(Workshop::OutpostNameChangedEvent, 0x01D2D44C)
DECLARE_EVENT_SOURCE(Workshop::OutpostPlacedEvent, 0x01D2D4DC)
DECLARE_EVENT_SOURCE(PickRefUpdateEvent, 0x01D2D56C)
DECLARE_EVENT_SOURCE(Workshop::PlacementStatusEvent, 0x01D2D5FC)
DECLARE_EVENT_SOURCE(Workshop::PowerOffEvent, 0x01D2D68C)
DECLARE_EVENT_SOURCE(Workshop::PowerOnEvent, 0x01D2D71C)
DECLARE_EVENT_SOURCE(Workshop::SnapBehaviorCycledEvent, 0x01D2D7AC)
DECLARE_EVENT_SOURCE(Workshop::WorkshopFlyCameraEvent, 0x01D2D83C)
DECLARE_EVENT_SOURCE(Workshop::WorkshopItemPlacedEvent, 0x01D2D8CC)
DECLARE_EVENT_SOURCE(Workshop::WorkshopModeEvent, 0x01D2D95C)
DECLARE_EVENT_SOURCE(Workshop::WorkshopOutputLinkEvent, 0x01D2D9EC)
DECLARE_EVENT_SOURCE(Workshop::WorkshopStatsChangedEvent, 0x01D2DA7C)
DECLARE_EVENT_SOURCE(Workshop::WorkshopUpdateStatsEvent, 0x01D2DB0C)
DECLARE_EVENT_SOURCE(ShipCameraStateToggled, 0x01D813B4)
DECLARE_EVENT_SOURCE(PlayerControls::PlayerJumpPressEvent, 0x01F4F924)
DECLARE_EVENT_SOURCE(PlayerControls::PlayerJumpReleaseEvent, 0x01F4F9B4)
DECLARE_EVENT_SOURCE(PlayerSneakingChangeEvent, 0x01F5112C)
DECLARE_EVENT_SOURCE(PlayerControls::PlayerZeroGSprintJustPressedEvent, 0x01F51368)
DECLARE_EVENT_SOURCE(PlayerControls::PlayerZeroGSprintReleasedEvent, 0x01F513F8)
DECLARE_EVENT_SOURCE(PlayerControls::PlayerIronSightsEndEvent, 0x01F5457C)
DECLARE_EVENT_SOURCE(PlayerControls::PlayerIronSightsStartEvent, 0x01F5460C)
DECLARE_EVENT_SOURCE(SaveLoadEvent, 0x01F8394C)
DECLARE_EVENT_SOURCE(SpaceshipWeaponBinding::SpaceshipWeaponBindingChangedEvent, 0x01FADA28)
DECLARE_EVENT_SOURCE(BoundaryMenu_FastTravel, 0x01FC6928)
DECLARE_EVENT_SOURCE(BoundaryMenu_ShowMap, 0x01FC69B8)
DECLARE_EVENT_SOURCE(PhotoGallery_DeletePhoto, 0x01FCF6D4)
DECLARE_EVENT_SOURCE(PowersMenu_ActivateEssence, 0x01FD2BB0)
DECLARE_EVENT_SOURCE(PowersMenu_EquipPower, 0x01FD2C40)
DECLARE_EVENT_SOURCE(PowersMenu_FavoritePower, 0x01FD2CD0)
DECLARE_EVENT_SOURCE(ContainerMenuClosed::Event, 0x01FE61BC)
DECLARE_EVENT_SOURCE(HangarShipSelection_ChangeSystemDisplay, 0x01FE624C)
DECLARE_EVENT_SOURCE(HangarShipSelection_RepairShip, 0x01FE62DC)
DECLARE_EVENT_SOURCE(HangarShipSelection_UpgradeSystem, 0x01FE636C)
DECLARE_EVENT_SOURCE(ShipCrewMenu_Close, 0x01FE63FC)
DECLARE_EVENT_SOURCE(BinkMovieStoppedPlayingEvent, 0x01FEB460)
DECLARE_EVENT_SOURCE(WorkshopColorMode_ApplyColors, 0x02013A0C)
DECLARE_EVENT_SOURCE(WorkshopColorMode_SelectedTab, 0x02013A9C)
DECLARE_EVENT_SOURCE(WorkshopColorMode_SliderChanged, 0x02013B2C)
DECLARE_EVENT_SOURCE(WorkshopColorMode_SwatchChanged, 0x02013BBC)
DECLARE_EVENT_SOURCE(HUDCrewBuffMessageEvent, 0x02014D5C)
DECLARE_EVENT_SOURCE(CraftingMenu_SessionSummaryEvent, 0x0201DDF8)
DECLARE_EVENT_SOURCE(CraftingMenu_CraftItem, 0x0201DE88)
DECLARE_EVENT_SOURCE(CraftingMenu_ExitBench, 0x0201DF18)
DECLARE_EVENT_SOURCE(CraftingMenu_InstallMod, 0x0201DFA8)
DECLARE_EVENT_SOURCE(CraftingMenu_RenameItem, 0x0201E038)
DECLARE_EVENT_SOURCE(CraftingMenu_RevertedModdedItem, 0x0201E0C8)
DECLARE_EVENT_SOURCE(CraftingMenu_SelectedMod, 0x0201E158)
DECLARE_EVENT_SOURCE(CraftingMenu_SelectedModSlot, 0x0201E1E8)
DECLARE_EVENT_SOURCE(CraftingMenu_SelectedModdableItem, 0x0201E278)
DECLARE_EVENT_SOURCE(CraftingMenu_SelectedRecipe, 0x0201E308)
DECLARE_EVENT_SOURCE(CraftingMenu_SetInspectControls, 0x0201E398)
DECLARE_EVENT_SOURCE(CraftingMenu_ToggleTracking, 0x0201E428)
DECLARE_EVENT_SOURCE(CraftingMenu_ViewingModdableItem, 0x0201E4B8)
DECLARE_EVENT_SOURCE(ContainerMenu_CloseMenu, 0x0202C96C)
DECLARE_EVENT_SOURCE(InventoryMenu_Change3DView, 0x0202CA9C)
DECLARE_EVENT_SOURCE(InventoryMenu_PaperDollTryOn, 0x0202CB2C)
DECLARE_EVENT_SOURCE(InventoryMenu_ResetPaperDollInv, 0x0202CBBC)
DECLARE_EVENT_SOURCE(UpdateActivateListenerEvent, 0x02034D38)
DECLARE_EVENT_SOURCE(StartOutpostFromListenerEvent, 0x020369F8)
DECLARE_EVENT_SOURCE(HUDModeEvent, 0x02046BF4)
DECLARE_EVENT_SOURCE(OpenContainerMenuEventData, 0x02046C84)
DECLARE_EVENT_SOURCE(OpenContainerMenuFromListenerEvent, 0x02046D14)
DECLARE_EVENT_SOURCE(HUDRolloverActivationButtonEvent, 0x02046DA4)
DECLARE_EVENT_SOURCE(HUDRolloverActivationQCItemPressEvent, 0x02046E34)
DECLARE_EVENT_SOURCE(Inventory_SetSort, 0x02046EC4)
DECLARE_EVENT_SOURCE(ShowingQuestMarketTextEvent, 0x02054D38)
DECLARE_EVENT_SOURCE(TargetHitEvent, 0x02057328)
DECLARE_EVENT_SOURCE(BSTValueRequestEvent<PlayerCrosshairModeEvent>, 0x020573B8)
DECLARE_EVENT_SOURCE(ClearHUDMessagesEvent, 0x0205E7A4)
DECLARE_EVENT_SOURCE(ShowHUDMessageEvent, 0x0205E834)
DECLARE_EVENT_SOURCE(PlayerDetectionLevelChangeEvent, 0x02061994)
DECLARE_EVENT_SOURCE(ShowCustomWatchAlert, 0x02066A9C)
DECLARE_EVENT_SOURCE(PlayerUpdateEvent, 0x02099B1C)
DECLARE_EVENT_SOURCE(InventoryMenu_ToggleHelmet, 0x02099BAC)
DECLARE_EVENT_SOURCE(InventoryMenu_ToggleSuit, 0x02099C3C)
DECLARE_EVENT_SOURCE(ControlsRemappedEvent, 0x020DD8D8)
DECLARE_EVENT_SOURCE(SettingsPanel_CheckBoxChanged, 0x020DD968)
DECLARE_EVENT_SOURCE(SettingsPanel_ClearBinding, 0x020DD9F8)
DECLARE_EVENT_SOURCE(SettingsPanel_OpenCategory, 0x020DDB2C)
DECLARE_EVENT_SOURCE(SettingsPanel_OpenSettings, 0x020DDBBC)
DECLARE_EVENT_SOURCE(SettingsPanel_RemapConfirmed, 0x020DDC4C)
DECLARE_EVENT_SOURCE(SettingsPanel_RemapMode, 0x020DDCDC)
DECLARE_EVENT_SOURCE(SettingsPanel_ResetToDefaults, 0x020DDD6C)
DECLARE_EVENT_SOURCE(SettingsPanel_SaveControls, 0x020DDDFC)
DECLARE_EVENT_SOURCE(SettingsPanel_SaveSettings, 0x020DDE8C)
DECLARE_EVENT_SOURCE(SettingsPanel_SliderChanged, 0x020DDF1C)
DECLARE_EVENT_SOURCE(SettingsPanel_StepperChanged, 0x020DDFAC)
DECLARE_EVENT_SOURCE(SettingsPanel_ValidateControls, 0x020DE03C)
DECLARE_EVENT_SOURCE(ShipCrewMenu_OpenAssignMenu, 0x020E8148)
DECLARE_EVENT_SOURCE(ShipCrewMenu_SetSort, 0x020E81D8)
DECLARE_EVENT_SOURCE(Spaceship::PlayerMovementOutputEvent, 0x0210E348)
DECLARE_EVENT_SOURCE(ShowLongShipBootup, 0x0210E3D8)
DECLARE_EVENT_SOURCE(ShipHudQuickContainer_TransferMenu, 0x0210E468)
DECLARE_EVENT_SOURCE(ShipHud_Activate, 0x0210E4F8)
DECLARE_EVENT_SOURCE(ShipHud_BodyViewMarkerDimensions, 0x0210E588)
DECLARE_EVENT_SOURCE(ShipHud_ChangeComponentSelection, 0x0210E618)
DECLARE_EVENT_SOURCE(ShipHud_CloseMenu, 0x0210E6A8)
DECLARE_EVENT_SOURCE(ShipHud_Deselect, 0x0210E738)
DECLARE_EVENT_SOURCE(ShipHud_FarTravel, 0x0210E7C8)
DECLARE_EVENT_SOURCE(ShipHud_HailAccepted, 0x0210E858)
DECLARE_EVENT_SOURCE(ShipHud_HailCancelled, 0x0210E8E8)
DECLARE_EVENT_SOURCE(ShipHud_JumpToQuestMarker, 0x0210E978)
DECLARE_EVENT_SOURCE(ShipHud_Land, 0x0210EA08)
DECLARE_EVENT_SOURCE(ShipHud_LandingMarkerMap, 0x0210EA98)
DECLARE_EVENT_SOURCE(ShipHud_Map, 0x0210EB28)
DECLARE_EVENT_SOURCE(ShipHud_OnMonocleToggle, 0x0210EBB8)
DECLARE_EVENT_SOURCE(ShipHud_OpenPhotoMode, 0x0210EC48)
DECLARE_EVENT_SOURCE(ShipHud_Repair, 0x0210ECD8)
DECLARE_EVENT_SOURCE(ShipHud_SetTargetMode, 0x0210ED68)
DECLARE_EVENT_SOURCE(ShipHud_Target, 0x0210EDF8)
DECLARE_EVENT_SOURCE(ShipHud_TargetShipSystem, 0x0210EE88)
DECLARE_EVENT_SOURCE(ShipHud_UntargetShipSystem, 0x0210EF18)
DECLARE_EVENT_SOURCE(ShipHud_UpdateComponentPower, 0x0210EFA8)
DECLARE_EVENT_SOURCE(DialogueMenu_CompleteExit, 0x0213A7EC)
DECLARE_EVENT_SOURCE(BGSScannerGuideEffectStatusUpdateEvent, 0x0214A960)
DECLARE_EVENT_SOURCE(GlobalFunc_CloseAllMenus, 0x0214F928)
DECLARE_EVENT_SOURCE(GlobalFunc_CloseMenu, 0x0214F9B8)
DECLARE_EVENT_SOURCE(GlobalFunc_PlayMenuSound, 0x0214FA48)
DECLARE_EVENT_SOURCE(GlobalFunc_StartGameRender, 0x0214FAD8)
DECLARE_EVENT_SOURCE(GlobalFunc_UserEvent, 0x0214FB68)
DECLARE_EVENT_SOURCE(ExperienceMeterDisplayData, 0x021594C8)
DECLARE_EVENT_SOURCE(LevelUp_AnimFinished, 0x02159558)
DECLARE_EVENT_SOURCE(LevelUp_OnWidgetShown, 0x021595E8)
DECLARE_EVENT_SOURCE(LevelUp_OpenDataMenu, 0x02159678)
DECLARE_EVENT_SOURCE(LevelUp_ShowSkills, 0x02159708)
DECLARE_EVENT_SOURCE(LocationTextWidget_FinishedQueue, 0x02159798)
DECLARE_EVENT_SOURCE(DisplayFatigueWarningEvent, 0x02159A40)
DECLARE_EVENT_SOURCE(BSTValueRequestEvent<SaveLoadMessageStringEvent>, 0x0215D4AC)
DECLARE_EVENT_SOURCE(PlayerCrosshairModeEvent, 0x02056A30)
DECLARE_EVENT_SOURCE(HUDNotificationEvent, 0x02166708)
DECLARE_EVENT_SOURCE(HUDNotification_MissionActiveWidgetUpdate, 0x02166798)
DECLARE_EVENT_SOURCE(HUDNotification_OpenDataMenu, 0x02166828)
DECLARE_EVENT_SOURCE(HUDNotification_OpenMissionMenu, 0x021668B8)
DECLARE_EVENT_SOURCE(HUDNotification_SetMissionActive, 0x02166948)
DECLARE_EVENT_SOURCE(PlayerSetWeaponStateEvent, 0x02168528)
DECLARE_EVENT_SOURCE(BarterMenu_BuyItem, 0x0217B5A8)
DECLARE_EVENT_SOURCE(BarterMenu_CloseMenu, 0x0217B638)
DECLARE_EVENT_SOURCE(BarterMenu_HideModel, 0x0217B6C8)
DECLARE_EVENT_SOURCE(BarterMenu_LoadModel, 0x0217B758)
DECLARE_EVENT_SOURCE(BarterMenu_SellItem, 0x0217B7E8)
DECLARE_EVENT_SOURCE(BarterMenu_SetMouseOverModel, 0x0217B878)
DECLARE_EVENT_SOURCE(BarterMenu_ShowFailureMessage, 0x0217B908)
DECLARE_EVENT_SOURCE(BarterMenu_ViewedItem, 0x0217B998)
DECLARE_EVENT_SOURCE(MissionMenu_ClearState, 0x0217FFA0)
DECLARE_EVENT_SOURCE(MissionMenu_PlotToLocation, 0x02180030)
DECLARE_EVENT_SOURCE(MissionMenu_RejectQuest, 0x021800C0)
DECLARE_EVENT_SOURCE(MissionMenu_SaveCategoryIndex, 0x02180150)
DECLARE_EVENT_SOURCE(MissionMenu_SaveOpenedId, 0x021801E0)
DECLARE_EVENT_SOURCE(MissionMenu_ShowItemLocation, 0x02180270)
DECLARE_EVENT_SOURCE(MissionMenu_ToggleTrackingQuest, 0x0218039C)
DECLARE_EVENT_SOURCE(DataSlateButtons_acceptClicked, 0x02185AC0)
DECLARE_EVENT_SOURCE(DataSlateButtons_cancelClicked, 0x02185B50)
DECLARE_EVENT_SOURCE(DataSlateMenu_playSFX, 0x02185BE0)
DECLARE_EVENT_SOURCE(DataSlateMenu_toggleAudio, 0x02185C70)
DECLARE_EVENT_SOURCE(InventoryMenu_DropItem, 0x0218C384)
DECLARE_EVENT_SOURCE(InventoryMenu_HideModel, 0x0218C414)
DECLARE_EVENT_SOURCE(InventoryMenu_LoadModel, 0x0218C4A4)
DECLARE_EVENT_SOURCE(InventoryMenu_OnEnterCategory, 0x0218C534)
DECLARE_EVENT_SOURCE(InventoryMenu_OpenCargoHold, 0x0218C5C4)
DECLARE_EVENT_SOURCE(InventoryMenu_SelectItem, 0x0218C654)
DECLARE_EVENT_SOURCE(InventoryMenu_SetMouseOverModel, 0x0218C6E4)
DECLARE_EVENT_SOURCE(InventoryMenu_ToggleFavorite, 0x0218C81C)
DECLARE_EVENT_SOURCE(MissionBoard_MissionEntryChanged, 0x02198CD8)
DECLARE_EVENT_SOURCE(MissionBoard_MissionEntryPressed, 0x02198D68)
DECLARE_EVENT_SOURCE(MonocleMenu_Bioscan, 0x021A005C)
DECLARE_EVENT_SOURCE(MonocleMenu_FastTravel, 0x021A00EC)
DECLARE_EVENT_SOURCE(MonocleMenu_Harvest, 0x021A017C)
DECLARE_EVENT_SOURCE(MonocleMenu_Initialize, 0x021A020C)
DECLARE_EVENT_SOURCE(MonocleMenu_Outpost, 0x021A029C)
DECLARE_EVENT_SOURCE(MonocleMenu_PhotoMode, 0x021A032C)
DECLARE_EVENT_SOURCE(MonocleMenu_Shutdown, 0x021A03BC)
DECLARE_EVENT_SOURCE(MonocleMenu_SocialSpell, 0x021A044C)
DECLARE_EVENT_SOURCE(MonocleMenu_StartContainerView, 0x021A04DC)
DECLARE_EVENT_SOURCE(MonocleMenu_StopContainerView, 0x021A056C)
DECLARE_EVENT_SOURCE(MonocleMenu_SurfaceMap, 0x021A05FC)
DECLARE_EVENT_SOURCE(MonocleMenu_UseListScrollControls, 0x021A068C)
DECLARE_EVENT_SOURCE(MonocleMenu_ZoomIn, 0x021A071C)
DECLARE_EVENT_SOURCE(MonocleMenu_ZoomOut, 0x021A07AC)
DECLARE_EVENT_SOURCE(PhotoMode_InitializeCategory, 0x021A5160)
DECLARE_EVENT_SOURCE(PhotoMode_ResetToDefaults, 0x021A51F0)
DECLARE_EVENT_SOURCE(PhotoMode_SliderChanged, 0x021A5280)
DECLARE_EVENT_SOURCE(PhotoMode_StepperChanged, 0x021A5310)
DECLARE_EVENT_SOURCE(PhotoMode_TakeSnapshot, 0x021A53A0)
DECLARE_EVENT_SOURCE(PhotoMode_ToggleHelmet, 0x021A5430)
DECLARE_EVENT_SOURCE(PhotoMode_ToggleUI, 0x021A54C0)
DECLARE_EVENT_SOURCE(PickpocketMenu_OnItemSelect, 0x021AD974)
DECLARE_EVENT_SOURCE(ResearchMenu_AddMaterial, 0x021B2DA8)
DECLARE_EVENT_SOURCE(ResearchMenu_CategorySelected, 0x021B2E38)
DECLARE_EVENT_SOURCE(ResearchMenu_ExitMenu, 0x021B2EC8)
DECLARE_EVENT_SOURCE(ResearchMenu_HideModel, 0x021B2F58)
DECLARE_EVENT_SOURCE(ResearchMenu_PreviewProject, 0x021B2FE8)
DECLARE_EVENT_SOURCE(ResearchMenu_ProjectViewed, 0x021B3078)
DECLARE_EVENT_SOURCE(ResearchMenu_SetInspectControls, 0x021B3108)
DECLARE_EVENT_SOURCE(ResearchMenu_ToggleTrackingProject, 0x021B3198)
DECLARE_EVENT_SOURCE(UnlockedTerminalElementEvent, 0x021C4C54)
DECLARE_EVENT_SOURCE(SecurityMenu_BackOutKey, 0x021C4CE4)
DECLARE_EVENT_SOURCE(SecurityMenu_CloseMenu, 0x021C4D74)
DECLARE_EVENT_SOURCE(SecurityMenu_ConfirmExit, 0x021C4E04)
DECLARE_EVENT_SOURCE(SecurityMenu_EliminateUnusedKeys, 0x021C4E94)
DECLARE_EVENT_SOURCE(SecurityMenu_GetRingHint, 0x021C4F24)
DECLARE_EVENT_SOURCE(SecurityMenu_SelectNewKey, 0x021C4FB4)
DECLARE_EVENT_SOURCE(SecurityMenu_TryUseKey, 0x021C5044)
DECLARE_EVENT_SOURCE(ShipCrewAssignMenu_Assign, 0x021C9014)
DECLARE_EVENT_SOURCE(ShipCrewAssignMenu_Unassign, 0x021C90A4)
DECLARE_EVENT_SOURCE(ShipCrewMenu_ViewedItem, 0x021C9134)
DECLARE_EVENT_SOURCE(Refuel_Accept, 0x021CAFD4)
DECLARE_EVENT_SOURCE(Refuel_Cancel, 0x021CB064)
DECLARE_EVENT_SOURCE(SkillsMenu_Accept, 0x021D1AAC)
DECLARE_EVENT_SOURCE(SkillsMenu_AddPatch, 0x021D1B3C)
DECLARE_EVENT_SOURCE(SkillsMenu_Cancel, 0x021D1BCC)
DECLARE_EVENT_SOURCE(SkillsMenu_ChangeCursorVisibility, 0x021D1C5C)
DECLARE_EVENT_SOURCE(SkillsMenu_SaveLastCategory, 0x021D1CEC)
DECLARE_EVENT_SOURCE(BSChargenAPI::BIDataUtils::MenuClosedEvent, 0x021F6664)
DECLARE_EVENT_SOURCE(BSChargenAPI::BIDataUtils::PresetNPCChangedEvent, 0x021F66F4)
DECLARE_EVENT_SOURCE(CharGen_BrowChange, 0x021F6784)
DECLARE_EVENT_SOURCE(CharGen_BrowColorChange, 0x021F6814)
DECLARE_EVENT_SOURCE(CharGen_CancelTextEntry, 0x021F68A4)
DECLARE_EVENT_SOURCE(CharGen_CloseMenu, 0x021F6934)
DECLARE_EVENT_SOURCE(CharGen_CyclePronoun, 0x021F69C4)
DECLARE_EVENT_SOURCE(CharGen_DirtScarsEtcChange, 0x021F6A54)
DECLARE_EVENT_SOURCE(CharGen_EndBodyChange, 0x021F6AE4)
DECLARE_EVENT_SOURCE(CharGen_EndTextEntry, 0x021F6B74)
DECLARE_EVENT_SOURCE(CharGen_EyeColorChange, 0x021F6C04)
DECLARE_EVENT_SOURCE(CharGen_FacialHairChange, 0x021F6C94)
DECLARE_EVENT_SOURCE(CharGen_FacialHairColorChange, 0x021F6D24)
DECLARE_EVENT_SOURCE(CharGen_HairChange, 0x021F6DB4)
DECLARE_EVENT_SOURCE(CharGen_HairColorChange, 0x021F6E44)
DECLARE_EVENT_SOURCE(CharGen_HeadpartPlusSelectorChange, 0x021F6ED4)
DECLARE_EVENT_SOURCE(CharGen_HeadpartPresetChange, 0x021F6F64)
DECLARE_EVENT_SOURCE(CharGen_JewelryChange, 0x021F6FF4)
DECLARE_EVENT_SOURCE(CharGen_JewelryColorChange, 0x021F7084)
DECLARE_EVENT_SOURCE(CharGen_MakeupChange, 0x021F7114)
DECLARE_EVENT_SOURCE(CharGen_MarkingsChange, 0x021F71A4)
DECLARE_EVENT_SOURCE(CharGen_PostBlendColorOptionChange, 0x021F7234)
DECLARE_EVENT_SOURCE(CharGen_PostBlendFaceChange, 0x021F72C4)
DECLARE_EVENT_SOURCE(CharGen_PostBlendIntensityChange, 0x021F7354)
DECLARE_EVENT_SOURCE(CharGen_PresetChange, 0x021F73E4)
DECLARE_EVENT_SOURCE(CharGen_RollOffLocomotion, 0x021F7474)
DECLARE_EVENT_SOURCE(CharGen_RollOnLocomotion, 0x021F7504)
DECLARE_EVENT_SOURCE(CharGen_RotatePaperdoll, 0x021F7594)
DECLARE_EVENT_SOURCE(CharGen_SetAdditionalSlider, 0x021F7624)
DECLARE_EVENT_SOURCE(CharGen_SetBackground, 0x021F76B4)
DECLARE_EVENT_SOURCE(CharGen_SetBlockInputUnderPopup, 0x021F7744)
DECLARE_EVENT_SOURCE(CharGen_SetBodyValues, 0x021F77D4)
DECLARE_EVENT_SOURCE(CharGen_SetCameraPosition, 0x021F7864)
DECLARE_EVENT_SOURCE(CharGen_SetPronoun, 0x021F78F4)
DECLARE_EVENT_SOURCE(CharGen_SetSex, 0x021F7984)
DECLARE_EVENT_SOURCE(CharGen_SetSlider, 0x021F7A14)
DECLARE_EVENT_SOURCE(CharGen_SetTrait, 0x021F7AA4)
DECLARE_EVENT_SOURCE(CharGen_ShowChooseBackgroundMessage, 0x021F7B34)
DECLARE_EVENT_SOURCE(CharGen_ShowPlayerRenameMessage, 0x021F7BC4)
DECLARE_EVENT_SOURCE(CharGen_SkintoneChange, 0x021F7C54)
DECLARE_EVENT_SOURCE(CharGen_StartBodyChange, 0x021F7CE4)
DECLARE_EVENT_SOURCE(CharGen_StartTextEntry, 0x021F7D74)
DECLARE_EVENT_SOURCE(CharGen_SwitchBodyType, 0x021F7E04)
DECLARE_EVENT_SOURCE(CharGen_SwitchLocomotion, 0x021F7E94)
DECLARE_EVENT_SOURCE(CharGen_TeethChange, 0x021F7F24)
DECLARE_EVENT_SOURCE(CharGen_TeethRollOff, 0x021F7FB4)
DECLARE_EVENT_SOURCE(CharGen_TeethRollOn, 0x021F8044)
DECLARE_EVENT_SOURCE(CharGen_ToggleMarking, 0x021F80D4)
DECLARE_EVENT_SOURCE(CharGen_TogglePreviewHabSuit, 0x021F8164)
DECLARE_EVENT_SOURCE(UIMenuChargenMenuDisablePaperdoll, 0x021F81F4)
DECLARE_EVENT_SOURCE(DataMenu_CloseMenu, 0x021FF268)
DECLARE_EVENT_SOURCE(DataMenu_ClosedForSubMenu, 0x021FF2F8)
DECLARE_EVENT_SOURCE(DataMenu_Missions, 0x021FF388)
DECLARE_EVENT_SOURCE(DataMenu_PlotToLocation, 0x021FF4BC)
DECLARE_EVENT_SOURCE(DataMenu_Reopened, 0x021FF54C)
DECLARE_EVENT_SOURCE(DataMenu_SelectedAttributesMenu, 0x021FF5DC)
DECLARE_EVENT_SOURCE(DataMenu_SelectedInventoryMenu, 0x021FF66C)
DECLARE_EVENT_SOURCE(DataMenu_SelectedMapMenu, 0x021FF6FC)
DECLARE_EVENT_SOURCE(DataMenu_SelectedPowersMenu, 0x021FF78C)
DECLARE_EVENT_SOURCE(DataMenu_SelectedShipMenu, 0x021FF81C)
DECLARE_EVENT_SOURCE(DataMenu_SelectedStatusMenu, 0x021FF8AC)
DECLARE_EVENT_SOURCE(DataMenu_SetMenuForQuickEntry, 0x021FF93C)
DECLARE_EVENT_SOURCE(DataMenu_SetPaperDollActive, 0x021FF9CC)
DECLARE_EVENT_SOURCE(PauseMenu_ActionCanceled, 0x02209C14)
DECLARE_EVENT_SOURCE(PauseMenu_ConfirmAction, 0x02209CA4)
DECLARE_EVENT_SOURCE(PauseMenu_ConfirmLoad, 0x02209D34)
DECLARE_EVENT_SOURCE(PauseMenu_ConfirmSave, 0x02209DC4)
DECLARE_EVENT_SOURCE(PauseMenu_DeleteSave, 0x02209E54)
DECLARE_EVENT_SOURCE(PauseMenu_QuitToDesktop, 0x02209EE4)
DECLARE_EVENT_SOURCE(PauseMenu_SetCharacter, 0x02209F74)
DECLARE_EVENT_SOURCE(PauseMenu_StartAction, 0x0220A004)
DECLARE_EVENT_SOURCE(PauseMenu_StartLoad, 0x0220A094)
DECLARE_EVENT_SOURCE(PauseMenu_UploadSave, 0x0220A124)
DECLARE_EVENT_SOURCE(PlayBink_CloseMenu, 0x0220B0C0)
DECLARE_EVENT_SOURCE(Spaceship::GravJumpEvent, 0x02210CF4)
DECLARE_EVENT_SOURCE(Spaceship::LandedSetEvent, 0x02210D84)
DECLARE_EVENT_SOURCE(Reticle_OnLongAnimFinished, 0x02210E14)
DECLARE_EVENT_SOURCE(ShipHudQuickContainer_TransferItem, 0x02210EA4)
DECLARE_EVENT_SOURCE(ShipHud_AbortJump, 0x02210F34)
DECLARE_EVENT_SOURCE(ShipHud_DockRequested, 0x02210FC4)
DECLARE_EVENT_SOURCE(ShipHud_HailShip, 0x02211054)
DECLARE_EVENT_SOURCE(ShipHud_UpdateTargetPanelRect, 0x022110E4)
DECLARE_EVENT_SOURCE(TakeoffMenu_CloseMenu, 0x02211174)
DECLARE_EVENT_SOURCE(TakeoffMenu_ExitShip, 0x02211204)
DECLARE_EVENT_SOURCE(TakeoffMenu_Launch, 0x02211294)
DECLARE_EVENT_SOURCE(StarMapMenu_LandingInputInProgress, 0x022307D0)
DECLARE_EVENT_SOURCE(StarMapMenu_MarkerGroupContainerVisibilityChanged, 0x02230860)
DECLARE_EVENT_SOURCE(StarMapMenu_MarkerGroupEntryClicked, 0x022308F0)
DECLARE_EVENT_SOURCE(StarMapMenu_MarkerGroupEntryHoverChanged, 0x02230980)
DECLARE_EVENT_SOURCE(StarMapMenu_ScanPlanet, 0x02230A10)
DECLARE_EVENT_SOURCE(StarMapMenu_SelectedLandingSite, 0x02230AA0)
DECLARE_EVENT_SOURCE(StarMapMenu_SelectedLandingSiteFailed, 0x02230B30)
DECLARE_EVENT_SOURCE(StarMapMenu_ShowRealCursor, 0x02230BC0)
DECLARE_EVENT_SOURCE(StarMapMenu_QuickSelectChange, 0x02246090)
DECLARE_EVENT_SOURCE(StarMapMenu_Galaxy_FocusSystem, 0x02256FE0)
DECLARE_EVENT_SOURCE(StarMapMenu_OnGalaxyViewInitialized, 0x02257070)
DECLARE_EVENT_SOURCE(StarMapMenu_ExecuteRoute, 0x02261B68)
DECLARE_EVENT_SOURCE(StarMapMenu_OnCancel, 0x02261BF8)
DECLARE_EVENT_SOURCE(StarMapMenu_OnClearRoute, 0x02261C88)
DECLARE_EVENT_SOURCE(StarMapMenu_OnExitStarMap, 0x02261D18)
DECLARE_EVENT_SOURCE(StarMapMenu_OnHintButtonClicked, 0x02261DA8)
DECLARE_EVENT_SOURCE(StarMapMenu_OnOutpostEntrySelected, 0x02261E38)
DECLARE_EVENT_SOURCE(StarMapMenu_ReadyToClose, 0x02261EC8)
DECLARE_EVENT_SOURCE(SurfaceMapMenu_MarkerClicked, 0x0227FB4C)
DECLARE_EVENT_SOURCE(SurfaceMapMenu_TryPlaceCustomMarker, 0x0227FBDC)
DECLARE_EVENT_SOURCE(TerminalMenu_CancelEvent, 0x0229A0A0)
DECLARE_EVENT_SOURCE(Terminal_CloseAllViews, 0x0229A130)
DECLARE_EVENT_SOURCE(Terminal_CloseTopView, 0x0229A1C0)
DECLARE_EVENT_SOURCE(Terminal_CloseView, 0x0229A250)
DECLARE_EVENT_SOURCE(Terminal_MenuItemClick, 0x0229A2E0)
DECLARE_EVENT_SOURCE(TestMenu_DoAction, 0x022A615C)
DECLARE_EVENT_SOURCE(TestMenu_ExitMenu, 0x022A61EC)
DECLARE_EVENT_SOURCE(TestMenu_ShowImages, 0x022A627C)
DECLARE_EVENT_SOURCE(TestMenu_ShowResources, 0x022A630C)
DECLARE_EVENT_SOURCE(TestMenu_TestAll, 0x022A639C)
DECLARE_EVENT_SOURCE(TextInputMenu_EndEditText, 0x022AA344)
DECLARE_EVENT_SOURCE(TextInputMenu_InputCanceled, 0x022AA3D4)
DECLARE_EVENT_SOURCE(TextInputMenu_StartEditText, 0x022AA464)
DECLARE_EVENT_SOURCE(CraftingMenu_Highlight3D, 0x022AB734)
DECLARE_EVENT_SOURCE(CraftingMenu_RevertHighlight, 0x022AB7C4)
DECLARE_EVENT_SOURCE(WorkshopBuilderMenu_ChangeBuildItem, 0x022ADE28)
DECLARE_EVENT_SOURCE(WorkshopBuilderMenu_SelectedItem, 0x022ADEB8)
DECLARE_EVENT_SOURCE(WorkshopBuilderMenu_ToggleTracking, 0x022ADF48)
DECLARE_EVENT_SOURCE(WorkshopMenu_AttemptBuild, 0x022B6794)
DECLARE_EVENT_SOURCE(WorkshopMenu_CancelAction, 0x022B6824)
DECLARE_EVENT_SOURCE(WorkshopMenu_ChangeVariant, 0x022B68B4)
DECLARE_EVENT_SOURCE(WorkshopMenu_ConnectionEvent, 0x022B6944)
DECLARE_EVENT_SOURCE(WorkshopMenu_ExitMenu, 0x022B69D4)
DECLARE_EVENT_SOURCE(WorkshopMenu_MessageCallback, 0x022B6A64)
DECLARE_EVENT_SOURCE(WorkshopMenu_SelectedCategory, 0x022B6AF4)
DECLARE_EVENT_SOURCE(WorkshopMenu_SelectedGridObject, 0x022B6B84)
DECLARE_EVENT_SOURCE(WorkshopMenu_ShowExtras, 0x022B6C14)
DECLARE_EVENT_SOURCE(WorkshopMenu_SwitchMode, 0x022B6CA4)
DECLARE_EVENT_SOURCE(WorkshopMenu_ToggleDistance, 0x022B6D34)
DECLARE_EVENT_SOURCE(WorkshopMenu_ToggleTracking, 0x022B6DC4)
DECLARE_EVENT_SOURCE(WorkshopMenu_ToggleView, 0x022B6E54)
DECLARE_EVENT_SOURCE(WorkshopQuickMenu_ConfirmAction, 0x022B88A4)
DECLARE_EVENT_SOURCE(WorkshopQuickMenu_ExitMenu, 0x022B8934)
DECLARE_EVENT_SOURCE(WorkshopTargetMenu_TargetHovered, 0x022BEDFC)
DECLARE_EVENT_SOURCE(WorkshopTargetMenu_TargetPicked, 0x022BEE8C)
DECLARE_EVENT_SOURCE(WorkshopActionButton_HoldFinished, 0x022D5F30)
DECLARE_EVENT_SOURCE(WorkshopActionButton_HoldStopped, 0x022D5FC0)
DECLARE_EVENT_SOURCE(WorkshopShared_SetActionHandles, 0x022D6050)
DECLARE_EVENT_SOURCE(WorkshopShared_StartAction, 0x022D60E0)
DECLARE_EVENT_SOURCE(ModelReferenceEffectEvents::ReferenceEffectFinished, 0x022F5D3C)
DECLARE_EVENT_SOURCE(BGSAcousticSpaceListener::StackChangedEvent, 0x02309F04)
DECLARE_EVENT_SOURCE(SpaceshipBIEvents::ShipPowerAllocationBIEventSent, 0x023209D0)
DECLARE_EVENT_SOURCE(BGSActorDeathEvent, 0x0232D1BC)
DECLARE_EVENT_SOURCE(Research::ResearchProgressEvent, 0x0237DA58)
DECLARE_EVENT_SOURCE(BSTValueRequestEvent<PlayerAutoAimActorEvent>, 0x025A25B8)
DECLARE_EVENT_SOURCE(PlayerInCombatChangeEvent, 0x025BAAF0)
DECLARE_EVENT_SOURCE(BlurEvent, 0x02889728)
DECLARE_EVENT_SOURCE(ContainerMenu_HideModel, 0x028AC7A8)
DECLARE_EVENT_SOURCE(ContainerMenu_Jettison, 0x028AC838)
DECLARE_EVENT_SOURCE(ContainerMenu_LoadModel, 0x028AC8C8)
DECLARE_EVENT_SOURCE(ContainerMenu_OpenRefuelMenu, 0x028AC958)
DECLARE_EVENT_SOURCE(ContainerMenu_SetMouseOverModel, 0x028AC9E8)
DECLARE_EVENT_SOURCE(ContainerMenu_TakeAll, 0x028ACA78)
DECLARE_EVENT_SOURCE(ContainerMenu_ToggleEquip, 0x028ACB08)
DECLARE_EVENT_SOURCE(ContainerMenu_TransferItem, 0x028ACC3C)
DECLARE_EVENT_SOURCE(DialogueMenu_OnDialogueSelect, 0x028B06E0)
DECLARE_EVENT_SOURCE(DialogueMenu_OnListVisibilityChange, 0x028B0770)
DECLARE_EVENT_SOURCE(DialogueMenu_OnPersuasionAutoWin, 0x028B0800)
DECLARE_EVENT_SOURCE(DialogueMenu_OnScriptedDialogueSelect, 0x028B0890)
DECLARE_EVENT_SOURCE(DialogueMenu_RequestExit, 0x028B0920)
DECLARE_EVENT_SOURCE(DialogueMenu_RequestSkipDialogue, 0x028B09B0)
DECLARE_EVENT_SOURCE(BSTValueRequestEvent<FaderMenuDisplayState>, 0x028B1778)
DECLARE_EVENT_SOURCE(FavoritesMenu_AssignQuickkey, 0x028BD7B0)
DECLARE_EVENT_SOURCE(FavoritesMenu_UseQuickkey, 0x028BD840)
DECLARE_EVENT_SOURCE(LoadingMenu_RefreshText, 0x028C16B0)
DECLARE_EVENT_SOURCE(MainMenu_ActionCanceled, 0x028C4DC0)
DECLARE_EVENT_SOURCE(MainMenu_ActionConfirmed, 0x028C4E50)
DECLARE_EVENT_SOURCE(MainMenu_ConfirmLoad, 0x028C4EE0)
DECLARE_EVENT_SOURCE(MainMenu_DeleteSave, 0x028C4F70)
DECLARE_EVENT_SOURCE(MainMenu_SetCharacter, 0x028C509C)
DECLARE_EVENT_SOURCE(MainMenu_StartAction, 0x028C512C)
DECLARE_EVENT_SOURCE(MainMenu_StartLoad, 0x028C51BC)
DECLARE_EVENT_SOURCE(MainMenu_UploadSave, 0x028C524C)
DECLARE_EVENT_SOURCE(BGSAppPausedEvent, 0x028C6ADC)
DECLARE_EVENT_SOURCE(MessageBoxMenu_OnBackOut, 0x028CBDC8)
DECLARE_EVENT_SOURCE(MessageBoxMenu_OnButtonPress, 0x028CBE58)
DECLARE_EVENT_SOURCE(MessageBoxMenu_OnScriptedButtonPress, 0x028CBEE8)
DECLARE_EVENT_SOURCE(SleepWaitMenu_InterruptRest, 0x028D0B78)
DECLARE_EVENT_SOURCE(SleepWaitMenu_StartRest, 0x028D0C08)
DECLARE_EVENT_SOURCE(Spaceship::BoughtEvent, 0x02B9F664)
DECLARE_EVENT_SOURCE(Spaceship::ContrabandScanWarningEvent, 0x02B9F6F4)
DECLARE_EVENT_SOURCE(Spaceship::DockEvent, 0x02B9F784)
DECLARE_EVENT_SOURCE(Spaceship::DynamicNavmeshCompleted, 0x02B9F814)
DECLARE_EVENT_SOURCE(Spaceship::FarTravelEvent, 0x02B9F8A4)
DECLARE_EVENT_SOURCE(Spaceship::LandingEvent, 0x02B9F934)
DECLARE_EVENT_SOURCE(Spaceship::PlanetScanEvent, 0x02B9F9C4)
DECLARE_EVENT_SOURCE(Spaceship::RampDownEvent, 0x02B9FA54)
DECLARE_EVENT_SOURCE(Spaceship::RefueledEvent, 0x02B9FAE4)
DECLARE_EVENT_SOURCE(Spaceship::RegisteredEvent, 0x02B9FB74)
DECLARE_EVENT_SOURCE(Spaceship::ShieldEvent, 0x02B9FC04)
DECLARE_EVENT_SOURCE(Spaceship::ShipAddedEvent, 0x02B9FC94)
DECLARE_EVENT_SOURCE(Spaceship::ShipCollisionEvent, 0x02B9FD24)
DECLARE_EVENT_SOURCE(Spaceship::ShipCustomizedEvent, 0x02B9FDB4)
DECLARE_EVENT_SOURCE(Spaceship::SoldEvent, 0x02B9FE44)
DECLARE_EVENT_SOURCE(Spaceship::SystemDamagedEvent, 0x02B9FED4)
DECLARE_EVENT_SOURCE(Spaceship::SystemPowerAllocationEvent, 0x02B9FF64)
DECLARE_EVENT_SOURCE(Spaceship::SystemPowerChangeEvent, 0x02B9FFF4)
DECLARE_EVENT_SOURCE(Spaceship::SystemRepairedBIEvent, 0x02BA0084)
DECLARE_EVENT_SOURCE(Spaceship::SystemRepairedEvent, 0x02BA0114)
DECLARE_EVENT_SOURCE(Spaceship::TakeDamagEvent, 0x02BA01A4)
DECLARE_EVENT_SOURCE(ContextStackChangedEvent, 0x02CCD0C8)
DECLARE_EVENT_SOURCE(UpdateSceneRectEvent, 0x02EA9E10)
DECLARE_EVENT_SOURCE(GameStalledEvent, 0x0306EE10)

// more

DECLARE_EVENT_SOURCE(TESCellNavmeshGeneratedEvent, 0x005BC370)
DECLARE_EVENT_SOURCE(TESHitEvent, 0x005BCC00)
DECLARE_EVENT_SOURCE(FirstThirdPersonSwitch::Event, 0x005BD5F0)
DECLARE_EVENT_SOURCE(PerkChanged::Event, 0x013031F0)
DECLARE_EVENT_SOURCE(TESHarvestEvent::ItemHarvested, 0x014EF0D0)
DECLARE_EVENT_SOURCE(ActivityEvents::ActivityCompletedEvent, 0x014F74F0)
DECLARE_EVENT_SOURCE(ChallengeCompletedEvent::Event, 0x014F9810)
DECLARE_EVENT_SOURCE(InventoryItemEvent::Event, 0x01531450)
DECLARE_EVENT_SOURCE(BooksRead::Event, 0x0192A070)
DECLARE_EVENT_SOURCE(LocationExplored::Event, 0x019617D0)
DECLARE_EVENT_SOURCE(LocationLinked::Event, 0x01961840)
DECLARE_EVENT_SOURCE(Activation::Event, 0x01A1DB10)
DECLARE_EVENT_SOURCE(ActorCellChangeEvent, 0x01A2F510)
DECLARE_EVENT_SOURCE(ActorHeadAttachedEvent, 0x01A2F580)
DECLARE_EVENT_SOURCE(ActorValueEvents::ActorValueChangedEvent, 0x01A2F5F0)
DECLARE_EVENT_SOURCE(AliasChangeEvent, 0x01A2F660)
DECLARE_EVENT_SOURCE(AnimationGraphDependentEvent, 0x01A2F6D0)
DECLARE_EVENT_SOURCE(BGSAffinityEventEvent, 0x01A2F740)
DECLARE_EVENT_SOURCE(BGSCellGridLoadEvent, 0x01A2F7B0)
DECLARE_EVENT_SOURCE(BGSEventProcessedEvent, 0x01A2F820)
DECLARE_EVENT_SOURCE(BGSHavokWorldCreatedEvent, 0x01A2F890)
DECLARE_EVENT_SOURCE(BGSLocationLoadedEvent, 0x01A2F900)
DECLARE_EVENT_SOURCE(BGSOnPlayerCompanionDismiss, 0x01A2F970)
DECLARE_EVENT_SOURCE(BGSOnPlayerCompleteResearchEvent, 0x01A2F9E0)
DECLARE_EVENT_SOURCE(BGSOnPlayerCraftItemEvent, 0x01A2FA50)
DECLARE_EVENT_SOURCE(BGSOnPlayerCreateRobotEvent, 0x01A2FAC0)
DECLARE_EVENT_SOURCE(BGSOnPlayerEnterVertibirdEvent, 0x01A2FB30)
DECLARE_EVENT_SOURCE(BGSOnPlayerFallLongDistances, 0x01A2FBA0)
DECLARE_EVENT_SOURCE(BGSOnPlayerFireWeaponEvent, 0x01A2FC10)
DECLARE_EVENT_SOURCE(BGSOnPlayerHealTeammateEvent, 0x01A2FC80)
DECLARE_EVENT_SOURCE(BGSOnPlayerLoiteringBeginEvent, 0x01A2FCF0)
DECLARE_EVENT_SOURCE(BGSOnPlayerLoiteringEndEvent, 0x01A2FD60)
DECLARE_EVENT_SOURCE(BGSOnPlayerModArmorWeaponEvent, 0x01A2FDD0)
DECLARE_EVENT_SOURCE(BGSOnPlayerModRobotEvent, 0x01A2FE40)
DECLARE_EVENT_SOURCE(BGSOnPlayerSwimmingEvent, 0x01A2FEB0)
DECLARE_EVENT_SOURCE(BGSOnPlayerUseWorkBenchEvent, 0x01A2FF20)
DECLARE_EVENT_SOURCE(BGSOnSpeechChallengeAvailable, 0x01A2FF90)
DECLARE_EVENT_SOURCE(BGSRadiationDamageEvent, 0x01A30000)
DECLARE_EVENT_SOURCE(BuilderMenuSelectEvent, 0x01A30070)
DECLARE_EVENT_SOURCE(CrewAssignedEvent, 0x01A300E0)
DECLARE_EVENT_SOURCE(CrewDismissedEvent, 0x01A30150)
DECLARE_EVENT_SOURCE(DestroyedEvent, 0x01A301C0)
DECLARE_EVENT_SOURCE(HomeShipSetEvent, 0x01A30230)
DECLARE_EVENT_SOURCE(InstantReferenceInteractionEvent, 0x01A302A0)
DECLARE_EVENT_SOURCE(ItemConsumedEvent, 0x01A30310)
DECLARE_EVENT_SOURCE(ItemSwappedEvent, 0x01A30380)
DECLARE_EVENT_SOURCE(LockPickedEvent, 0x01A303F0)
DECLARE_EVENT_SOURCE(MapMarkerDiscoveredEvent, 0x01A30460)
DECLARE_EVENT_SOURCE(ObjectScannedEvent, 0x01A304D0)
DECLARE_EVENT_SOURCE(PlayerAddItemEvent, 0x01A30540)
DECLARE_EVENT_SOURCE(PlayerArrestedEvent, 0x01A305B0)
DECLARE_EVENT_SOURCE(PlayerAssaultActorEvent, 0x01A30620)
DECLARE_EVENT_SOURCE(PlayerBuyShipEvent, 0x01A30690)
DECLARE_EVENT_SOURCE(PlayerCrimeGoldEvent, 0x01A30700)
DECLARE_EVENT_SOURCE(PlayerFailedPlotRouteEvent, 0x01A30770)
DECLARE_EVENT_SOURCE(PlayerJailEvent, 0x01A307E0)
DECLARE_EVENT_SOURCE(PlayerModifiedShipEvent, 0x01A30850)
DECLARE_EVENT_SOURCE(PlayerMurderActorEvent, 0x01A308C0)
DECLARE_EVENT_SOURCE(PlayerPayFineEvent, 0x01A30930)
DECLARE_EVENT_SOURCE(PlayerPlanetSurveyCompleteEvent, 0x01A309A0)
DECLARE_EVENT_SOURCE(PlayerPlanetSurveyProgressEvent, 0x01A30A10)
DECLARE_EVENT_SOURCE(PlayerSellShipEvent, 0x01A30A80)
DECLARE_EVENT_SOURCE(PlayerTrespassEvent, 0x01A30AF0)
DECLARE_EVENT_SOURCE(QuickContainerOpenedEvent, 0x01A30B60)
DECLARE_EVENT_SOURCE(RefControlChangedEvent, 0x01A30BD0)
DECLARE_EVENT_SOURCE(ReferenceDestroyedEvent, 0x01A30C40)
DECLARE_EVENT_SOURCE(SpeechChallengeCompletionEvent, 0x01A30CB0)
DECLARE_EVENT_SOURCE(TESActivateEvent, 0x01A30D20)
DECLARE_EVENT_SOURCE(TESActiveEffectApplyFinishEvent, 0x01A30D90)
DECLARE_EVENT_SOURCE(TESActiveEffectRemovedEvent, 0x01A30E00)
DECLARE_EVENT_SOURCE(TESActorActivatedRefEvent, 0x01A30E70)
DECLARE_EVENT_SOURCE(TESActorLocationChangeEvent, 0x01A30EE0)
DECLARE_EVENT_SOURCE(TESBookReadEvent, 0x01A30F50)
DECLARE_EVENT_SOURCE(TESCellCriticalRefsAttachedEvent, 0x01A30FC0)
DECLARE_EVENT_SOURCE(TESCellFullyLoadedEvent, 0x01A31030)
DECLARE_EVENT_SOURCE(TESCellGravityChangeEvent, 0x01A310A0)
DECLARE_EVENT_SOURCE(TESCellReadyToApplyDecalsEvent, 0x01A31110)
DECLARE_EVENT_SOURCE(TESCellReference3DAttachEvent, 0x01A31180)
DECLARE_EVENT_SOURCE(TESCellReferenceAttachDetachEvent, 0x01A311F0)
DECLARE_EVENT_SOURCE(TESCombatEvent, 0x01A31260)
DECLARE_EVENT_SOURCE(TESCombatListEvent, 0x01A312D0)
DECLARE_EVENT_SOURCE(TESCommandModeCompleteCommandEvent, 0x01A31340)
DECLARE_EVENT_SOURCE(TESCommandModeEnterEvent, 0x01A313B0)
DECLARE_EVENT_SOURCE(TESCommandModeExitEvent, 0x01A31420)
DECLARE_EVENT_SOURCE(TESCommandModeGiveCommandEvent, 0x01A31490)
DECLARE_EVENT_SOURCE(TESConsciousnessEvent, 0x01A31500)
DECLARE_EVENT_SOURCE(TESContainerChangedEvent, 0x01A31570)
DECLARE_EVENT_SOURCE(TESDeathEvent, 0x01A315E0)
DECLARE_EVENT_SOURCE(TESDeferredKillEvent, 0x01A31650)
DECLARE_EVENT_SOURCE(TESDestructionStageChangedEvent, 0x01A316C0)
DECLARE_EVENT_SOURCE(TESEnterBleedoutEvent, 0x01A31730)
DECLARE_EVENT_SOURCE(TESEnterSneakingEvent, 0x01A317A0)
DECLARE_EVENT_SOURCE(TESEquipEvent, 0x01A31810)
DECLARE_EVENT_SOURCE(TESEscortWaitStartEvent, 0x01A31880)
DECLARE_EVENT_SOURCE(TESEscortWaitStopEvent, 0x01A318F0)
DECLARE_EVENT_SOURCE(TESExitBleedoutEvent, 0x01A31960)
DECLARE_EVENT_SOURCE(TESExitFurnitureEvent, 0x01A319D0)
DECLARE_EVENT_SOURCE(TESFormDeleteEvent, 0x01A31A40)
DECLARE_EVENT_SOURCE(TESFormIDRemapEvent, 0x01A31AB0)
DECLARE_EVENT_SOURCE(TESFurnitureEvent, 0x01A31B20)
DECLARE_EVENT_SOURCE(TESGrabReleaseEvent, 0x01A31B90)
DECLARE_EVENT_SOURCE(TESInitScriptEvent, 0x01A31C00)
DECLARE_EVENT_SOURCE(TESLimbCrippleEvent, 0x01A31C70)
DECLARE_EVENT_SOURCE(TESLoadGameEvent, 0x01A31CE0)
DECLARE_EVENT_SOURCE(TESLocationExploredEvent, 0x01A31D50)
DECLARE_EVENT_SOURCE(TESLockChangedEvent, 0x01A31DC0)
DECLARE_EVENT_SOURCE(TESMagicEffectApplyEvent, 0x01A31E30)
DECLARE_EVENT_SOURCE(TESMissionAcceptedEvent, 0x01A31EA0)
DECLARE_EVENT_SOURCE(TESObjectLoadedEvent, 0x01A31F10)
DECLARE_EVENT_SOURCE(TESObjectREFRTranslationEvent, 0x01A31F80)
DECLARE_EVENT_SOURCE(TESOnPCDialogueTargetEvent, 0x01A31FF0)
DECLARE_EVENT_SOURCE(TESOpenCloseEvent, 0x01A32060)
DECLARE_EVENT_SOURCE(TESPackageEvent, 0x01A320D0)
DECLARE_EVENT_SOURCE(TESPerkEntryRunEvent, 0x01A32140)
DECLARE_EVENT_SOURCE(TESPickNewIdleEvent, 0x01A321B0)
DECLARE_EVENT_SOURCE(TESPickpocketFailedEvent, 0x01A32220)
DECLARE_EVENT_SOURCE(TESPlayerActiveEffectEvent, 0x01A32290)
DECLARE_EVENT_SOURCE(TESPlayerFollowerWarpEvent, 0x01A32300)
DECLARE_EVENT_SOURCE(TESQuestInitEvent, 0x01A32370)
DECLARE_EVENT_SOURCE(TESQuestRejectedEvent, 0x01A323E0)
DECLARE_EVENT_SOURCE(TESQuestStageEvent, 0x01A32450)
DECLARE_EVENT_SOURCE(TESQuestStageItemDoneEvent, 0x01A324C0)
DECLARE_EVENT_SOURCE(TESQuestStartStopEvent, 0x01A32530)
DECLARE_EVENT_SOURCE(TESQuestTimerEvent, 0x01A325A0)
DECLARE_EVENT_SOURCE(TESResetEvent, 0x01A32610)
DECLARE_EVENT_SOURCE(TESResolveNPCTemplatesEvent, 0x01A32680)
DECLARE_EVENT_SOURCE(TESSceneActionEvent, 0x01A326F0)
DECLARE_EVENT_SOURCE(TESSceneEvent, 0x01A32760)
DECLARE_EVENT_SOURCE(TESScenePhaseEvent, 0x01A327D0)
DECLARE_EVENT_SOURCE(TESSellEvent, 0x01A32840)
DECLARE_EVENT_SOURCE(TESSleepStartEvent, 0x01A328B0)
DECLARE_EVENT_SOURCE(TESSleepStopEvent, 0x01A32920)
DECLARE_EVENT_SOURCE(TESSpellCastEvent, 0x01A32990)
DECLARE_EVENT_SOURCE(TESSpellCastFailureEvent, 0x01A32A00)
DECLARE_EVENT_SOURCE(TESSwitchRaceCompleteEvent, 0x01A32A70)
DECLARE_EVENT_SOURCE(TESTopicInfoEvent, 0x01A32AE0)
DECLARE_EVENT_SOURCE(TESTrackedStatsEvent, 0x01A32B50)
DECLARE_EVENT_SOURCE(TESTrapHitEvent, 0x01A32BC0)
DECLARE_EVENT_SOURCE(TESTriggerEnterEvent, 0x01A32C30)
DECLARE_EVENT_SOURCE(TESTriggerEvent, 0x01A32CA0)
DECLARE_EVENT_SOURCE(TESTriggerLeaveEvent, 0x01A32D10)
DECLARE_EVENT_SOURCE(TESUniqueIDChangeEvent, 0x01A32D80)
DECLARE_EVENT_SOURCE(TESWaitStartEvent, 0x01A32DF0)
DECLARE_EVENT_SOURCE(TESWaitStopEvent, 0x01A32E60)
DECLARE_EVENT_SOURCE(TerminalMenuMenuItemRunEvent, 0x01A32ED0)
DECLARE_EVENT_SOURCE(TerminalMenuOnEnterEvent, 0x01A32F40)
DECLARE_EVENT_SOURCE(WorkshopNPCTransferEvent, 0x01A32FB0)
DECLARE_EVENT_SOURCE(TESObjectREFRIsReadyForAttachEvent, 0x01A33020)
DECLARE_EVENT_SOURCE(DefaultObjectsReadyEvent::Event, 0x01A5E660)
DECLARE_EVENT_SOURCE(ObjectiveState::Event, 0x01B08260)
DECLARE_EVENT_SOURCE(QuestStatus::Event, 0x01B68450)
DECLARE_EVENT_SOURCE(RefillAliasEvent::Event, 0x01B684C0)
DECLARE_EVENT_SOURCE(TESQuestEvent::Event, 0x01B68530)
DECLARE_EVENT_SOURCE(RolloverIsCrimeEvent::Event, 0x020572C0)
DECLARE_EVENT_SOURCE(HideSubtitleEvent::Event, 0x020624E0)
DECLARE_EVENT_SOURCE(ShowSubtitleEvent::Event, 0x02062550)
DECLARE_EVENT_SOURCE(MissionMenuStateEvent::Event, 0x020B4300)
DECLARE_EVENT_SOURCE(ClearShipHudTarget::Event, 0x0210E270)
DECLARE_EVENT_SOURCE(TryUpdateShipHudTarget::Event, 0x0210E2E0)
DECLARE_EVENT_SOURCE(LocationTextEvent::Event, 0x02168450)
DECLARE_EVENT_SOURCE(TraitDiscoveryTextEvent::Event, 0x021684C0)
DECLARE_EVENT_SOURCE(DaysPassed::Event, 0x023E3AE0)
DECLARE_EVENT_SOURCE(HourPassed::Event, 0x023E3B50)
DECLARE_EVENT_SOURCE(ActorDamage::Event, 0x024C3C60)
DECLARE_EVENT_SOURCE(ActorItemEquipped::Event, 0x024C3CD0)
DECLARE_EVENT_SOURCE(ActorKill::Event, 0x024C3D40)
DECLARE_EVENT_SOURCE(AssaultCrime::Event, 0x024C3DB0)
DECLARE_EVENT_SOURCE(DisarmedEvent::Event, 0x024C3E20)
DECLARE_EVENT_SOURCE(FactionRankChange::Event, 0x024C3E90)
DECLARE_EVENT_SOURCE(GrandTheftHorse::Event, 0x024C3F00)
DECLARE_EVENT_SOURCE(MurderCrime::Event, 0x024C3F70)
DECLARE_EVENT_SOURCE(PiracyCrime::Event, 0x024C3FE0)
DECLARE_EVENT_SOURCE(Bleedout::Event, 0x024F2630)
DECLARE_EVENT_SOURCE(ContractedDisease::Event, 0x024F26A0)
DECLARE_EVENT_SOURCE(ReloadWeaponEvent::Event, 0x024F2710)
DECLARE_EVENT_SOURCE(SpellsLearned::Event, 0x02500CF0)
DECLARE_EVENT_SOURCE(Bounty::Event, 0x025A1AD0)
DECLARE_EVENT_SOURCE(ChestLooted::Event, 0x025A1B40)
DECLARE_EVENT_SOURCE(CriticalHitEvent::Event, 0x025A1BB0)
DECLARE_EVENT_SOURCE(CustomMarkerUpdate::Event, 0x025A1C20)
DECLARE_EVENT_SOURCE(DaysJailed::Event, 0x025A1C90)
DECLARE_EVENT_SOURCE(EnteredUnity::Event, 0x025A1D00)
DECLARE_EVENT_SOURCE(FinePaid::Event, 0x025A1D70)
DECLARE_EVENT_SOURCE(ItemCrafted::Event, 0x025A1DE0)
DECLARE_EVENT_SOURCE(ItemSteal::Event, 0x025A1E50)
DECLARE_EVENT_SOURCE(JailEscape::Event, 0x025A1EC0)
DECLARE_EVENT_SOURCE(Jailing::Event, 0x025A1F30)
DECLARE_EVENT_SOURCE(LevelIncrease::Event, 0x025A1FA0)
DECLARE_EVENT_SOURCE(LocationMarkerArrayUpdate::Event, 0x025A2010)
DECLARE_EVENT_SOURCE(PlayerActiveEffectChanged::Event, 0x025A2080)
DECLARE_EVENT_SOURCE(PlayerAmmoChanged::Event, 0x025A20F0)
DECLARE_EVENT_SOURCE(PlayerCharacterQuestEvent::Event, 0x025A2160)
DECLARE_EVENT_SOURCE(PlayerDifficultySettingChanged::Event, 0x025A21D0)
DECLARE_EVENT_SOURCE(PlayerFastTravel::Event, 0x025A2240)
DECLARE_EVENT_SOURCE(PlayerInDialogueChanged::Event, 0x025A22B0)
DECLARE_EVENT_SOURCE(PlayerLifeStateChanged::Event, 0x025A2320)
DECLARE_EVENT_SOURCE(PlayerPickpocketSuccess::Event, 0x025A2390)
DECLARE_EVENT_SOURCE(PoisonedWeapon::Event, 0x025A2400)
DECLARE_EVENT_SOURCE(TerminalHacked::Event, 0x025A2470)
DECLARE_EVENT_SOURCE(TravelMarkerStateChange::Event, 0x025A24E0)
DECLARE_EVENT_SOURCE(WeaponAttack::Event, 0x025A2550)
DECLARE_EVENT_SOURCE(Trespass::Event, 0x025FFFB0)
DECLARE_EVENT_SOURCE(VATSEvents::ModeChange, 0x02669670)
DECLARE_EVENT_SOURCE(VATSCommand, 0x026696E0)
DECLARE_EVENT_SOURCE(HoursPassed::Event, 0x028D0B10)

// other events
DECLARE_EVENT_SOURCE(RadioManager::PipboyTransmitterDetectionEvent, 0x0236BC90)
DECLARE_EVENT_SOURCE_EX(XPChange::Event, 0x050EAD80)
DECLARE_EVENT_SOURCE_EX(WeaponFiredEvent, 0x050DDF58)
DECLARE_EVENT_SOURCE_EX(ActorEquipManagerEvent::Event, 0x05A7C5F0)
DECLARE_EVENT_SOURCE_EX(ActorEquipManagerEvent::SpellEvent, 0x05A7C618)
DECLARE_EVENT_SOURCE_EX(AttachReference::Event, 0x050EAD58)