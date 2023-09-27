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
struct CrewAssignedEvent {};
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

template<typename EventT>
BSTEventSource<EventT>* GetEventSource() { };

#define DECLARE_EVENT_SOURCE(Event, address) \
template<> inline BSTEventSource<Event> * GetEventSource() \
{ \
    typedef BSTEventSource<Event> * (*_GetEventSource)(); \
    RelocAddr<_GetEventSource> GetEventSource(address); \
    return GetEventSource(); \
}

DECLARE_EVENT_SOURCE(BGSOnPlayerCompanionDismiss, 0x01A27630)
DECLARE_EVENT_SOURCE(BGSOnPlayerEnterVertibirdEvent, 0x01A277F0)
DECLARE_EVENT_SOURCE(BGSOnPlayerFallLongDistances, 0x01A27860)
DECLARE_EVENT_SOURCE(BGSOnPlayerFireWeaponEvent, 0x01A278D0)
DECLARE_EVENT_SOURCE(BGSOnPlayerHealTeammateEvent, 0x01A27940)
DECLARE_EVENT_SOURCE(BGSOnPlayerLoiteringBeginEvent, 0x01A279B0)
DECLARE_EVENT_SOURCE(BGSOnPlayerLoiteringEndEvent, 0x01A27A20)
DECLARE_EVENT_SOURCE(BGSOnPlayerModArmorWeaponEvent, 0x01A27A90)
DECLARE_EVENT_SOURCE(BGSOnPlayerCompleteResearchEvent, 0x01A276A0)
DECLARE_EVENT_SOURCE(BGSOnPlayerCraftItemEvent, 0x01A27710)
DECLARE_EVENT_SOURCE(BGSOnPlayerCreateRobotEvent, 0x01A27780)
DECLARE_EVENT_SOURCE(BGSOnPlayerModRobotEvent, 0x01A27B00)
DECLARE_EVENT_SOURCE(BGSOnPlayerSwimmingEvent, 0x01A27B70)
DECLARE_EVENT_SOURCE(BGSOnPlayerUseWorkBenchEvent, 0x01A27BE0)
DECLARE_EVENT_SOURCE(BGSOnSpeechChallengeAvailable, 0x01A27C50)
DECLARE_EVENT_SOURCE(CrewAssignedEvent, 0x01A27DA0)
DECLARE_EVENT_SOURCE(CrewDismissedEvent, 0x01A27E10)
DECLARE_EVENT_SOURCE(PlayerDifficultySettingChanged::Event, 0x02587BF0)
DECLARE_EVENT_SOURCE(RadioManager::PipboyTransmitterDetectionEvent, 0x02358340)
DECLARE_EVENT_SOURCE(ReferenceDestroyedEvent, 0x01A28900)
DECLARE_EVENT_SOURCE(TESActiveEffectApplyFinishEvent, 0x01A28A50)
DECLARE_EVENT_SOURCE(TESActivateEvent, 0x01A289E0)
DECLARE_EVENT_SOURCE(TESActorActivatedRefEvent, 0x01A28B30)
DECLARE_EVENT_SOURCE(BGSAffinityEventEvent, 0x01A27400)
DECLARE_EVENT_SOURCE(TESActorLocationChangeEvent, 0x01A28BA0)
DECLARE_EVENT_SOURCE(ActorCellChangeEvent, 0x01A271D0)
DECLARE_EVENT_SOURCE(AliasChangeEvent, 0x01A27320)
DECLARE_EVENT_SOURCE(TESBookReadEvent, 0x01A28C10)
DECLARE_EVENT_SOURCE(TESCellReferenceAttachDetachEvent, 0x01A28EB0)
DECLARE_EVENT_SOURCE(TESCellFullyLoadedEvent, 0x01A28CF0)
DECLARE_EVENT_SOURCE(TESCombatEvent, 0x01A28F20)
DECLARE_EVENT_SOURCE(TESCombatListEvent, 0x01A28F90)
DECLARE_EVENT_SOURCE(TESCommandModeCompleteCommandEvent, 0x01A29000)
DECLARE_EVENT_SOURCE(TESCommandModeEnterEvent, 0x01A29070)
DECLARE_EVENT_SOURCE(TESCommandModeExitEvent, 0x01A290E0)
DECLARE_EVENT_SOURCE(TESCommandModeGiveCommandEvent, 0x01A29150)
DECLARE_EVENT_SOURCE(TESDeathEvent, 0x01A292A0)
DECLARE_EVENT_SOURCE(TESDeferredKillEvent, 0x01A29310)
DECLARE_EVENT_SOURCE(DestroyedEvent, 0x01A27E80)
DECLARE_EVENT_SOURCE(TESDestructionStageChangedEvent, 0x01A29380)
DECLARE_EVENT_SOURCE(TESEnterBleedoutEvent, 0x01A293F0)
DECLARE_EVENT_SOURCE(TESExitBleedoutEvent, 0x01A29620)
DECLARE_EVENT_SOURCE(TESEnterSneakingEvent, 0x01A29460)
DECLARE_EVENT_SOURCE(TESEscortWaitStartEvent, 0x01A29540)
DECLARE_EVENT_SOURCE(TESEscortWaitStopEvent, 0x01A295B0)
DECLARE_EVENT_SOURCE(TESExitFurnitureEvent, 0x01A29690)
DECLARE_EVENT_SOURCE(TESPlayerFollowerWarpEvent, 0x01A29FC0)
DECLARE_EVENT_SOURCE(TESFurnitureEvent, 0x01A297E0)
DECLARE_EVENT_SOURCE(TESGrabReleaseEvent, 0x01A29850)
DECLARE_EVENT_SOURCE(HomeShipSetEvent, 0x01A27EF0)
DECLARE_EVENT_SOURCE(PlayerFailedPlotRouteEvent, 0x01A28430)
DECLARE_EVENT_SOURCE(PlayerModifiedShipEvent, 0x01A28510)
DECLARE_EVENT_SOURCE(TESConsciousnessEvent, 0x01A291C0)
DECLARE_EVENT_SOURCE(TESLimbCrippleEvent, 0x01A29930)
DECLARE_EVENT_SOURCE(TESLoadGameEvent, 0x01A299A0)
DECLARE_EVENT_SOURCE(TESLocationExploredEvent, 0x01A29A10)
DECLARE_EVENT_SOURCE(TESLockChangedEvent, 0x01A29A80)
DECLARE_EVENT_SOURCE(TESMissionAcceptedEvent, 0x01A29B60)
DECLARE_EVENT_SOURCE(TESQuestRejectedEvent, 0x01A2A0A0)
DECLARE_EVENT_SOURCE(TESObjectLoadedEvent, 0x01A29BD0)
DECLARE_EVENT_SOURCE(TESObjectREFRTranslationEvent, 0x01A29C40)
DECLARE_EVENT_SOURCE(TESOnPCDialogueTargetEvent, 0x01A29CB0)
DECLARE_EVENT_SOURCE(TESOpenCloseEvent, 0x01A29D20)
DECLARE_EVENT_SOURCE(TESPickpocketFailedEvent, 0x01A29EE0)
DECLARE_EVENT_SOURCE(TESQuestInitEvent, 0x01A2A030)
DECLARE_EVENT_SOURCE(TESResetEvent, 0x01A2A2D0)
DECLARE_EVENT_SOURCE(TESSellEvent, 0x01A2A500)
DECLARE_EVENT_SOURCE(TESSpellCastEvent, 0x01A2A650)
DECLARE_EVENT_SOURCE(TESSwitchRaceCompleteEvent, 0x01A2A730)
DECLARE_EVENT_SOURCE(TESTrapHitEvent, 0x01A2A880)
DECLARE_EVENT_SOURCE(TESTriggerEnterEvent, 0x01A2A8F0)
DECLARE_EVENT_SOURCE(TESTriggerLeaveEvent, 0x01A2A9D0)
DECLARE_EVENT_SOURCE(Workshop::ItemRemovedEvent, 0x01D2425C)
DECLARE_EVENT_SOURCE(Workshop::ItemMovedEvent, 0x01D240AC)
DECLARE_EVENT_SOURCE(Workshop::ItemPlacedEvent, 0x01D2413C)
DECLARE_EVENT_SOURCE(Workshop::ItemRepairedEvent, 0x01D242EC)
DECLARE_EVENT_SOURCE(Workshop::ItemGrabbedEvent, 0x01D2401C)
DECLARE_EVENT_SOURCE(Workshop::PowerOffEvent, 0x01D2464C)
DECLARE_EVENT_SOURCE(Workshop::PowerOnEvent, 0x01D246DC)
DECLARE_EVENT_SOURCE(Workshop::WorkshopFlyCameraEvent, 0x01D247FC)
DECLARE_EVENT_SOURCE(Workshop::WorkshopModeEvent, 0x01D2491C)
DECLARE_EVENT_SOURCE(Workshop::OutpostPlacedEvent, 0x01D2449C)
DECLARE_EVENT_SOURCE(Workshop::EnterOutpostBeaconModeEvent, 0x01D23F8C)
DECLARE_EVENT_SOURCE(Workshop::WorkshopOutputLinkEvent, 0x01D249AC)
DECLARE_EVENT_SOURCE(Workshop::CargoLinkTargetChangedEvent, 0x01D23EFC)
DECLARE_EVENT_SOURCE(WorkshopNPCTransferEvent, 0x01A2AC70)
DECLARE_EVENT_SOURCE(QuickContainerOpenedEvent, 0x01A28820)
DECLARE_EVENT_SOURCE(BuilderMenuSelectEvent, 0x01A27D30)
DECLARE_EVENT_SOURCE(PlayerPlanetSurveyCompleteEvent, 0x01A28660)
DECLARE_EVENT_SOURCE(ObjectScannedEvent, 0x01A28190)
DECLARE_EVENT_SOURCE(SpeechChallengeCompletionEvent, 0x01A28970)
DECLARE_EVENT_SOURCE(MapMarkerDiscoveredEvent, 0x01A28120)
DECLARE_EVENT_SOURCE(PlayerArrestedEvent, 0x01A28270)
DECLARE_EVENT_SOURCE(PlayerAssaultActorEvent, 0x01A282E0)
DECLARE_EVENT_SOURCE(PlayerCrimeGoldEvent, 0x01A283C0)
DECLARE_EVENT_SOURCE(PlayerJailEvent, 0x01A284A0)
DECLARE_EVENT_SOURCE(PlayerPayFineEvent, 0x01A284A0)
DECLARE_EVENT_SOURCE(PlayerMurderActorEvent, 0x01A28580)
DECLARE_EVENT_SOURCE(PlayerTrespassEvent, 0x01A287B0)
DECLARE_EVENT_SOURCE(TerminalMenuOnEnterEvent, 0x01A2AC00)
DECLARE_EVENT_SOURCE(PlayerBuyShipEvent, 0x01A28350)
DECLARE_EVENT_SOURCE(PlayerSellShipEven, 0x01A28740)
DECLARE_EVENT_SOURCE(LockPickedEvent, 0x01A280B0)
DECLARE_EVENT_SOURCE(TESQuestTimerEvent, 0x01A2A260)
DECLARE_EVENT_SOURCE(TESContainerChangedEvent, 0x01A29230)
DECLARE_EVENT_SOURCE(TESEquipEvent, 0x01A294D0)
DECLARE_EVENT_SOURCE(PlayerAddItemEvent, 0x01A28200)
