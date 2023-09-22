#pragma once

#include "sfse/GameTypes.h"

struct BGSHotloadCompletedEvent{};

struct MenuOpenCloseEvent
{
    BSFixedString	MenuName;
    bool			bOpening;
};

struct UpdateSceneRectEvent{};
struct MenuModeChangeEvent{};
struct MenuPauseChangeEvent{};
struct MenuPauseCounterChangeEvent{};
struct TutorialEvent{};
struct BSCursorTypeChange{};
struct BSCursorRotationChange{};
struct BIUIMenuVisiblePausedBeginEvent{};
struct BIUIMenuVisiblePausedEndEvent{};

struct BGSOnPlayerCompanionDismiss {};
struct BGSOnPlayerEnterVertibirdEvent {};
struct BGSOnPlayerFallLongDistances {};
struct BGSOnPlayerFireWeaponEvent {};
struct BGSOnPlayerHealTeammateEvent {};
struct BGSOnPlayerLoiteringBeginEvent {};
struct BGSOnPlayerLoiteringEndEvent {};
struct BGSOnPlayerModArmorWeaponEvent {};
struct BGSOnPlayerCompleteResearchEvent {};
struct BGSOnPlayerCraftItemEvent {};
struct BGSOnPlayerCreateRobotEvent {};
struct BGSOnPlayerModRobotEvent {};
struct BGSOnPlayerSwimmingEvent {};
struct BGSOnPlayerUseWorkBenchEvent {};
struct BGSOnSpeechChallengeAvailable {};
struct CrewAssignedEven {};
struct CrewDismissedEvent {};
struct PlayerDifficultySettingChanged
{
    struct Event {};
};
struct RadioManager
{
    struct PipboyTransmitterDetectionEvent {};
};
struct ReferenceDestroyedEvent {};
struct TESActiveEffectApplyFinishEvent {};
struct TESActivateEvent {};
struct TESActorActivatedRefEvent {};
struct BGSAffinityEventEvent {};
struct TESActorLocationChangeEvent {};
struct ActorCellChangeEvent {};
struct AliasChangeEvent {};
struct TESBookReadEvent {};
struct TESCellReferenceAttachDetachEvent {};
struct TESCellFullyLoadedEvent {};
struct TESCombatEvent {};
struct TESCombatListEvent {};
struct TESCommandModeCompleteCommandEvent {};
struct TESCommandModeEnterEvent {};
struct TESCommandModeExitEvent {};
struct TESCommandModeGiveCommandEvent {};
struct TESDeathEvent {};
struct TESDeferredKillEvent {};
struct DestroyedEvent {};
struct TESDestructionStageChangedEvent {};
struct TESEnterBleedoutEvent {};
struct TESExitBleedoutEvent {};
struct TESEnterSneakingEvent {};
struct TESEscortWaitStartEvent {};
struct TESEscortWaitStopEvent {};
struct TESExitFurnitureEvent {};
struct TESPlayerFollowerWarpEvent {};
struct TESFurnitureEvent {};
struct TESGrabReleaseEvent {};
struct HomeShipSetEvent {};
struct PlayerFailedPlotRouteEvent {};
struct PlayerModifiedShipEvent {};
struct TESConsciousnessEvent {};
struct TESLimbCrippleEvent {};
struct TESLoadGameEvent {};
struct TESLocationExploredEvent {};
struct TESLockChangedEvent {};
struct TESMissionAcceptedEvent {};
struct TESQuestRejectedEvent {};
struct TESObjectLoadedEvent {};
struct TESObjectREFRTranslationEvent {};
struct TESOnPCDialogueTargetEvent {};
struct TESOpenCloseEvent {};
struct TESPickpocketFailedEvent {};
struct TESQuestInitEvent {};
struct TESResetEvent {};
struct TESSellEvent {};
struct TESSpellCastEvent {};
struct TESSwitchRaceCompleteEvent {};
struct TESTrapHitEvent {};
struct TESTriggerEnterEvent {};
struct TESTriggerLeaveEvent {};
struct Workshop
{
    struct ItemRemovedEvent {};
    struct ItemMovedEvent {};
    struct ItemPlacedEvent {};
    struct ItemRepairedEvent {};
    struct ItemGrabbedEvent {};
    struct PowerOffEvent {};
    struct PowerOnEvent {};
    struct WorkshopFlyCameraEvent {};
    struct WorkshopModeEvent {};
    struct OutpostPlacedEvent {};
    struct EnterOutpostBeaconModeEvent {};
    struct WorkshopOutputLinkEvent {};
    struct CargoLinkTargetChangedEvent {};
};
struct WorkshopNPCTransferEvent {};
struct QuickContainerOpenedEvent {};
struct BuilderMenuSelectEvent {};
struct PlayerPlanetSurveyCompleteEvent {};
struct ObjectScannedEvent {};
struct SpeechChallengeCompletionEvent {};
struct MapMarkerDiscoveredEvent {};
struct PlayerArrestedEvent {};
struct PlayerAssaultActorEvent {};
struct PlayerCrimeGoldEvent {};
struct PlayerJailEvent {};
struct PlayerPayFineEvent {};
struct PlayerMurderActorEvent {};
struct PlayerTrespassEvent {};
struct TerminalMenuOnEnterEvent {};
struct PlayerBuyShipEvent {};
struct PlayerSellShipEven {};
struct LockPickedEvent {};
struct TESQuestTimerEvent {};

// GameScript::InventoryEventHandler

struct TESContainerChangedEvent
{
    u32          sourceContainerFormID;              // 00
    u32          targetContainerFormID;                // 04
    u32          itemFormID;                            // 08
    u32          count;                                // 0C
    //...
};
struct TESEquipEvent {};
struct PlayerAddItemEvent {};


namespace BSTEventDetail
{
    class SinkBase
    {
    public:
        virtual ~SinkBase() = 0;
    };

    class SourceBase
    {
    public:
        virtual ~SourceBase() = 0;

        DEFINE_MEMBER_FN_1(RegisterSink, void, 0x005C0BDC, SinkBase* sink);
        DEFINE_MEMBER_FN_1(UnregisterSink, void, 0x005C09F0, SinkBase* sink);
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

template<typename EventT>
BSTEventSource<EventT>* GetEventSource() { };

#define DECLARE_EVENT_SOURCE(Event, address) \
template<> inline BSTEventSource<Event> * GetEventSource() \
{ \
    typedef BSTEventSource<Event> * (*_GetEventSource)(); \
    RelocAddr<_GetEventSource> GetEventSource(address); \
    return GetEventSource(); \
}

DECLARE_EVENT_SOURCE(BGSOnPlayerCompanionDismiss, 0x1A27C80)
DECLARE_EVENT_SOURCE(BGSOnPlayerEnterVertibirdEvent, 0x1A27E40)
DECLARE_EVENT_SOURCE(BGSOnPlayerFallLongDistances, 0x1A27EB0)
DECLARE_EVENT_SOURCE(BGSOnPlayerFireWeaponEvent, 0x1A27F20)
DECLARE_EVENT_SOURCE(BGSOnPlayerHealTeammateEvent, 0x1A27F90)
DECLARE_EVENT_SOURCE(BGSOnPlayerLoiteringBeginEvent, 0x1A28000)
DECLARE_EVENT_SOURCE(BGSOnPlayerLoiteringEndEvent, 0x1A28070)
DECLARE_EVENT_SOURCE(BGSOnPlayerModArmorWeaponEvent, 0x1A280E0)
DECLARE_EVENT_SOURCE(BGSOnPlayerCompleteResearchEvent, 0x1A27CF0)
DECLARE_EVENT_SOURCE(BGSOnPlayerCraftItemEvent, 0x1A27D60)
DECLARE_EVENT_SOURCE(BGSOnPlayerCreateRobotEvent, 0x1A27DD0)
DECLARE_EVENT_SOURCE(BGSOnPlayerModRobotEvent, 0x1A28150)
DECLARE_EVENT_SOURCE(BGSOnPlayerSwimmingEvent, 0x1A281C0)
DECLARE_EVENT_SOURCE(BGSOnPlayerUseWorkBenchEvent, 0x1A28230)
DECLARE_EVENT_SOURCE(BGSOnSpeechChallengeAvailable, 0x1A282A0)
DECLARE_EVENT_SOURCE(CrewAssignedEven, 0x1A283F0)
DECLARE_EVENT_SOURCE(CrewDismissedEvent, 0x1A28460)
DECLARE_EVENT_SOURCE(PlayerDifficultySettingChanged::Event, 0x2584A90)
DECLARE_EVENT_SOURCE(RadioManager::PipboyTransmitterDetectionEvent, 0x23551F0)
DECLARE_EVENT_SOURCE(ReferenceDestroyedEvent, 0x1A28F50)
DECLARE_EVENT_SOURCE(TESActiveEffectApplyFinishEvent, 0x1A290A0)
DECLARE_EVENT_SOURCE(TESActivateEvent, 0x1A29030)
DECLARE_EVENT_SOURCE(TESActorActivatedRefEvent, 0x1A29180)
DECLARE_EVENT_SOURCE(BGSAffinityEventEvent, 0x1A27A50)
DECLARE_EVENT_SOURCE(TESActorLocationChangeEvent, 0x1A291F0)
DECLARE_EVENT_SOURCE(ActorCellChangeEvent, 0x1A27820)
DECLARE_EVENT_SOURCE(AliasChangeEvent, 0x1A27970)
DECLARE_EVENT_SOURCE(TESBookReadEvent, 0x1A29260)
DECLARE_EVENT_SOURCE(TESCellReferenceAttachDetachEvent, 0x1A29500)
DECLARE_EVENT_SOURCE(TESCellFullyLoadedEvent, 0x1A29340)
DECLARE_EVENT_SOURCE(TESCombatEvent, 0x1A29570)
DECLARE_EVENT_SOURCE(TESCombatListEvent, 0x1A295E0)
DECLARE_EVENT_SOURCE(TESCommandModeCompleteCommandEvent, 0x1A29650)
DECLARE_EVENT_SOURCE(TESCommandModeEnterEvent, 0x1A296C0)
DECLARE_EVENT_SOURCE(TESCommandModeExitEvent, 0x1A29730)
DECLARE_EVENT_SOURCE(TESCommandModeGiveCommandEvent, 0x1A297A0)
DECLARE_EVENT_SOURCE(TESDeathEvent, 0x1A298F0)
DECLARE_EVENT_SOURCE(TESDeferredKillEvent, 0x1A29960)
DECLARE_EVENT_SOURCE(DestroyedEvent, 0x1A284D0)
DECLARE_EVENT_SOURCE(TESDestructionStageChangedEvent, 0x1A299D0)
DECLARE_EVENT_SOURCE(TESEnterBleedoutEvent, 0x1A29A40)
DECLARE_EVENT_SOURCE(TESExitBleedoutEvent, 0x1A29C70)
DECLARE_EVENT_SOURCE(TESEnterSneakingEvent, 0x1A29AB0)
DECLARE_EVENT_SOURCE(TESEscortWaitStartEvent, 0x1A29B90)
DECLARE_EVENT_SOURCE(TESEscortWaitStopEvent, 0x1A29C00)
DECLARE_EVENT_SOURCE(TESExitFurnitureEvent, 0x1A29CE0)
DECLARE_EVENT_SOURCE(TESPlayerFollowerWarpEvent, 0x1A2A610)
DECLARE_EVENT_SOURCE(TESFurnitureEvent, 0x1A29E30)
DECLARE_EVENT_SOURCE(TESGrabReleaseEvent, 0x1A29EA0)
DECLARE_EVENT_SOURCE(HomeShipSetEvent, 0x1A28540)
DECLARE_EVENT_SOURCE(PlayerFailedPlotRouteEvent, 0x1A28A80)
DECLARE_EVENT_SOURCE(PlayerModifiedShipEvent, 0x1A28B60)
DECLARE_EVENT_SOURCE(TESConsciousnessEvent, 0x1A29810)
DECLARE_EVENT_SOURCE(TESLimbCrippleEvent, 0x1A29F80)
DECLARE_EVENT_SOURCE(TESLoadGameEvent, 0x1A29FF0)
DECLARE_EVENT_SOURCE(TESLocationExploredEvent, 0x1A2A060)
DECLARE_EVENT_SOURCE(TESLockChangedEvent, 0x1A2A0D0)
DECLARE_EVENT_SOURCE(TESMissionAcceptedEvent, 0x1A2A1B0)
DECLARE_EVENT_SOURCE(TESQuestRejectedEvent, 0x1A2A6F0)
DECLARE_EVENT_SOURCE(TESObjectLoadedEvent, 0x1A2A220)
DECLARE_EVENT_SOURCE(TESObjectREFRTranslationEvent, 0x1A2A290)
DECLARE_EVENT_SOURCE(TESOnPCDialogueTargetEvent, 0x1A2A300)
DECLARE_EVENT_SOURCE(TESOpenCloseEvent, 0x1A2A370)
DECLARE_EVENT_SOURCE(TESPickpocketFailedEvent, 0x1A2A530)
DECLARE_EVENT_SOURCE(TESQuestInitEvent, 0x1A2A680)
DECLARE_EVENT_SOURCE(TESResetEvent, 0x1A2A920)
DECLARE_EVENT_SOURCE(TESSellEvent, 0x1A2AB50)
DECLARE_EVENT_SOURCE(TESSpellCastEvent, 0x1A2ACA0)
DECLARE_EVENT_SOURCE(TESSwitchRaceCompleteEvent, 0x1A2AD80)
DECLARE_EVENT_SOURCE(TESTrapHitEvent, 0x1A2AED0)
DECLARE_EVENT_SOURCE(TESTriggerEnterEvent, 0x1A2AF40)
DECLARE_EVENT_SOURCE(TESTriggerLeaveEvent, 0x1A2B020)
DECLARE_EVENT_SOURCE(Workshop::ItemRemovedEvent, 0x1D248BC)
DECLARE_EVENT_SOURCE(Workshop::ItemMovedEvent, 0x1D2470C)
DECLARE_EVENT_SOURCE(Workshop::ItemPlacedEvent, 0x1D2479C)
DECLARE_EVENT_SOURCE(Workshop::ItemRepairedEvent, 0x1D2494C)
DECLARE_EVENT_SOURCE(Workshop::ItemGrabbedEvent, 0x1D2467C)
DECLARE_EVENT_SOURCE(Workshop::PowerOffEvent, 0x1D24CAC)
DECLARE_EVENT_SOURCE(Workshop::PowerOnEvent, 0x1D24D3C)
DECLARE_EVENT_SOURCE(Workshop::WorkshopFlyCameraEvent, 0x1D24E5C)
DECLARE_EVENT_SOURCE(Workshop::WorkshopModeEvent, 0x1D24F7C)
DECLARE_EVENT_SOURCE(Workshop::OutpostPlacedEvent, 0x1D24AFC)
DECLARE_EVENT_SOURCE(Workshop::EnterOutpostBeaconModeEvent, 0x1D245EC)
DECLARE_EVENT_SOURCE(Workshop::WorkshopOutputLinkEvent, 0x1D2500C)
DECLARE_EVENT_SOURCE(Workshop::CargoLinkTargetChangedEvent, 0x1D2455C)
DECLARE_EVENT_SOURCE(WorkshopNPCTransferEvent, 0x1A2B2C0)
DECLARE_EVENT_SOURCE(QuickContainerOpenedEvent, 0x1A28E70)
DECLARE_EVENT_SOURCE(BuilderMenuSelectEvent, 0x1A28380)
DECLARE_EVENT_SOURCE(PlayerPlanetSurveyCompleteEvent, 0x1A28CB0)
DECLARE_EVENT_SOURCE(ObjectScannedEvent, 0x1A287E0)
DECLARE_EVENT_SOURCE(SpeechChallengeCompletionEvent, 0x1A28FC0)
DECLARE_EVENT_SOURCE(MapMarkerDiscoveredEvent, 0x1A28770)
DECLARE_EVENT_SOURCE(PlayerArrestedEvent, 0x1A288C0)
DECLARE_EVENT_SOURCE(PlayerAssaultActorEvent, 0x1A28930)
DECLARE_EVENT_SOURCE(PlayerCrimeGoldEvent, 0x1A28A10)
DECLARE_EVENT_SOURCE(PlayerJailEvent, 0x1A28AF0)
DECLARE_EVENT_SOURCE(PlayerPayFineEvent, 0x1A28AF0)
DECLARE_EVENT_SOURCE(PlayerMurderActorEvent, 0x1A28BD0)
DECLARE_EVENT_SOURCE(PlayerTrespassEvent, 0x1A28E00)
DECLARE_EVENT_SOURCE(TerminalMenuOnEnterEvent, 0x1A2B250)
DECLARE_EVENT_SOURCE(PlayerBuyShipEvent, 0x1A289A0)
DECLARE_EVENT_SOURCE(PlayerSellShipEven, 0x1A28D90)
DECLARE_EVENT_SOURCE(LockPickedEvent, 0x1A28700)
DECLARE_EVENT_SOURCE(TESQuestTimerEvent, 0x1A2A8B0)
DECLARE_EVENT_SOURCE(TESContainerChangedEvent, 0x1A29880)
DECLARE_EVENT_SOURCE(TESEquipEvent, 0x1A29B20)
DECLARE_EVENT_SOURCE(PlayerAddItemEvent, 0x1A28850)