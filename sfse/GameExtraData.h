#pragma once

#include "sfse_common/Types.h"
#include "sfse_common/Utilities.h"
#include "sfse/GameTypes.h"
#include "sfse/GameLock.h"

class BSExtraData
{
public:
	virtual ~BSExtraData();  // 00

	// add
	virtual void Unk_01();  // 01
	virtual void Unk_02();  // 02
	virtual void Unk_03();  // 03
	virtual void Unk_04();  // 04
	virtual void Unk_05();  // 05
	virtual void Unk_06();  // 06

	enum Type : u8
	{
		kNone,                                     // 0x00
		kHavok,                                    // 0x01 - ExtraHavok
		kCell3D,                                   // 0x02 - ExtraCell3D
		kCellWaterType,                            // 0x03 - ExtraCellWaterType
		kRegionList,                               // 0x04 - ExtraRegionList
		kSeenData,                                 // 0x05 - ExtraSeenData
		kEditorID,                                 // 0x06 - ExtraEditorID
		kCellMusicType,                            // 0x07 - ExtraCellMusicType
		kCellSkyRegion,                            // 0x08 - ExtraCellSkyRegion
		kProcessMiddleLow,                         // 0x09 - ExtraProcessMiddleLow
		kUnk0A,                                    // 0x0A
		kPersistentCell,                           // 0x0B - ExtraPersistentCell
		kKeywords,                                 // 0x0C - ExtraKeywords
		kAction,                                   // 0x0D - ExtraAction
		kStartingPosition,                         // 0x0E - ExtraStartingPosition
		kUnk0F,                                    // 0x0F
		kAnimGraphManager,                         // 0x10 - ExtraAnimGraphManager
		kUsedMarkers,                              // 0x11 - ExtraUsedMarkers
		kUnk12,                                    // 0x12
		kRagdollData,                              // 0x13 - ExtraRagDollData
		kInitActions,                              // 0x14 - ExtraInitActions
		kEssentialProtected,                       // 0x15 - ExtraEssentialProtected
		kPackagesStartLoc,                         // 0x16 - ExtraPackageStartLocation
		kPackage,                                  // 0x17 - ExtraPackage
		kTrespassPackage,                          // 0x18 - ExtraTresPassPackage
		kRunOncePacks,                             // 0x19 - ExtraRunOncePacks
		kReferenceHandles,                         // 0x1A - ExtraReferenceHandles
		kFollower,                                 // 0x1B - ExtraFollower
		kLevCreaMod,                               // 0x1C - ExtraLevCreaModifier
		kGhost,                                    // 0x1D - ExtraGhost
		kOriginalReference,                        // 0x1E - ExtraOriginalReference
		kOwnership,                                // 0x1F - ExtraOwnership
		kGlobal,                                   // 0x20 - ExtraGlobal
		kRank,                                     // 0x21 - ExtraRank
		kCount,                                    // 0x22 - ExtraCount
		kHealth,                                   // 0x23 - ExtraHealth
		kRangeDistOverride,                        // 0x24 - ExtraRangedDistOverride
		kTimeLeft,                                 // 0x25 - ExtraTimeLeft
		kCharge,                                   // 0x26 - ExtraCharge
		kLight,                                    // 0x27 - ExtraLight
		kLock,                                     // 0x28 - ExtraLock
		kTeleport,                                 // 0x29 - ExtraTeleport
		kMapMarker,                                // 0x2A - ExtraMapMarker
		kLeveledCreature,                          // 0x2B - ExtraLeveledCreature
		kLeveledItem,                              // 0x2C - ExtraLeveledItem
		kScale,                                    // 0x2D - ExtraScale
		kSeed,                                     // 0x2E - ExtraSeed
		kMagicCaster,                              // 0x2F - ExtraMagicCaster, NonActorMagicCaster
		kMagicTarget,                              // 0x30 - NonActorMagicTarget
		kUnk31,                                    // 0x31
		kPlayerCrimeList,                          // 0x32 - ExtraPlayerCrimeList
		kObjectInstance,                           // 0x33 - BGSObjectInstanceExtra
		kEnableStateParent,                        // 0x34 - ExtraEnableStateParent
		kEnableStateChildren,                      // 0x35 - ExtraEnableStateChildren
		kItemDropper,                              // 0x36 - ExtraItemDropper
		kDroppedItemList,                          // 0x37 - ExtraDroppedItemList
		kRandomTeleportMarker,                     // 0x38 - ExtraRandomTeleportMarker
		kSavedHavokData,                           // 0x39 - ExtraSavedHavokData
		kCannotWear,                               // 0x3A - ExtraCannotWear
		kPoison,                                   // 0x3B - ExtraPoison
		kUnk3C,                                    // 0x3C
		kLastFinishedSequence,                     // 0x3D - ExtraLastFinishedSequence
		kSavedAnimation,                           // 0x3E - ExtraSavedAnimation
		kNorthRotation,                            // 0x3F - ExtraNorthRotation
		kSpawnContainer,                           // 0x40 - ExtraSpawnContainer
		kFriendHits,                               // 0x41 - ExtraFriendHits
		kHeadingTarget,                            // 0x42 - ExtraHeadingTarget
		kUnk43,                                    // 0x43
		kRefractionProperty,                       // 0x44 - ExtraRefractionProperty
		kStartingWorldOrCell,                      // 0x45 - ExtraStartingWorldOrCell
		kFavorite,                                 // 0x46 - ExtraFavorite
		kUnk47,                                    // 0x47
		kEditorRefMoveData,                        // 0x48 - ExtraEditorRefMoveData
		kUnk49,                                    // 0x49
		kNoRumors,                                 // 0x4A - ExtraHasNoRumors
		kSound,                                    // 0x4B - ExtraSound
		kLinkedRef,                                // 0x4C - ExtraLinkedRef
		kLinkedRefChildren,                        // 0x4D - ExtraLinkedRefChildren
		kActivateRef,                              // 0x4E - ExtraActivateRef
		kUnk4F,                                    // 0x4F
		kTalkToPlayer,                             // 0x50 - ExtraCanTalkToPlayer
		kCellImageSpace,                           // 0x51 - ExtraCellImageSpace
		kNavMeshPortal,                            // 0x52 - ExtraNavMeshPortal
		kModelSwap,                                // 0x53 - ExtraModelSwap
		kRadius,                                   // 0x54 - ExtraRadius
		kUnk55,                                    // 0x55
		kFactionChanges,                           // 0x56 - ExtraFactionChanges
		kActorCause,                               // 0x57 - ExtraActorCause
		kUnk58,                                    // 0x58
		kUnk59,                                    // 0x59
		kUnk5A,                                    // 0x5A
		kReflectedRefs,                            // 0x5B - ExtraReflectedRefs
		kReflectorRefs,                            // 0x5C - ExtraReflectorRefs
		kEmittanceSource,                          // 0x5D - ExtraEmittanceSource
		kRadioData,                                // 0x5E - ExtraRadioData
		kCombatStyle,                              // 0x5F - ExtraCombatStyle
		kUnk60,                                    // 0x60
		kPrimitive,                                // 0x61 - ExtraPrimitive
		kOpenCloseActivateRef,                     // 0x62 - ExtraOpenCloseActivateRef
		kUnk63,                                    // 0x63
		kAmmo,                                     // 0x64 - ExtraAmmo
		kPatrolRefData,                            // 0x65 - ExtraPatrolRefData
		kPackageData,                              // 0x66 - ExtraPackageData
		kUnk67,                                    // 0x67
		kCollisionData,                            // 0x68 - ExtraCollisionData
		kSayOnceADayTopicInfo,                     // 0x69 - ExtraSayTopicInfoOnceADay
		kEncounterZone,                            // 0x6A - ExtraEncounterZone
		kSayToTopicInfo,                           // 0x6B - ExtraSayToTopicInfo
		kOcclusionPlaneRefData,                    // 0x6C - ExtraOcclusionPlaneRefData
		kUnk6D,                                    // 0x6D
		kUnk6E,                                    // 0x6E
		kUnk6F,                                    // 0x6F
		kRoomRefData,                              // 0x70 - ExtraRoomRefData
		kGuardedRefData,                           // 0x71 - ExtraGuardedRefData
		kCreatureAwakeSound,                       // 0x72 - ExtraCreatureAwakeSound
		kUnk73,                                    // 0x73
		kHorse,                                    // 0x74
		kIgnoredBySandbox,                         // 0x75 - ExtraIgnoredBySandbox
		kCellAcousticSpace,                        // 0x76 - ExtraCellAcousticSpace
		kReservedMarkers,                          // 0x77 - ExtraReservedMarkers
		kTransitionCellCount,                      // 0x78 - ExtraTransitionCellCount
		kWaterLightRefs,                           // 0x79 - ExtraWaterLightRefs
		kLitWaterRef,                              // 0x7A - ExtraLitWaterRef
		kRadioRepeater,                            // 0x7B - ExtraRadioRepeater
		kSoundHook,                                // 0x7C - ExtraSoundHook
		kPatrolRefInUseData,                       // 0x7D - ExtraPatrolRefInUseData
		kAshpileRef,                               // 0x7E - ExtraAshPileRef
		kFollowerSwimBreadcrumbs,                  // 0x7F - ExtraFollowerSwimBreadcrumbs
		kAliasInstanceArray,                       // 0x80 - ExtraAliasInstanceArray
		kLocation,                                 // 0x81 - ExtraLocation
		kUnk82,                                    // 0x82
		kLocationRefType,                          // 0x83 - ExtraLocationRefType
		kPromotedRef,                              // 0x84 - ExtraPromotedRef
		kUnk85,                                    // 0x85
		kOutfitItem,                               // 0x86 - ExtraOutfitItem
		kUnk87,                                    // 0x87
		kLeveledItemBase,                          // 0x88 - ExtraLeveledBaseObject
		kLightData,                                // 0x89 - ExtraLightData
		kLightBarndoorData,                        // 0x8A - ExtraLightBarndoorData
		kLightRoundnessData,                       // 0x8B - ExtraLightRoundnessData
		kLightAreaData,                            // 0x8C - ExtraLightAreaData
		kLightLayerData,                           // 0x8D - ExtraLightLayerData
		kLightVolumetricData,                      // 0x8E - ExtraLightVolumetricData
		kScene,                                    // 0x8F - ExtraSceneData
		kBadPosition,                              // 0x90 - ExtraBadPosition
		kHeadTrackingWeight,                       // 0x91 - ExtraHeadTrackingWeight
		kFromAlias,                                // 0x92 - ExtraFromAlias
		kShouldWear,                               // 0x93 - ExtraShouldWear
		kFavorCost,                                // 0x94 - ExtraFavorCost
		kAttachedArrows3D,                         // 0x95 - ExtraAttachedArrows3D
		kTextDisplayData,                          // 0x96 - ExtraTextDisplayData
		kEnchantment,                              // 0x97 - ExtraEnchantment
		kSoul,                                     // 0x98 - ExtraSoul
		kForcedTarget,                             // 0x99 - ExtraForcedTarget
		kWwiseSwitchData,                          // 0x9A - ExtraWwiseSwitchData
		kUniqueID,                                 // 0x9B - ExtraUniqueID
		kFlags,                                    // 0x9C - ExtraFlags
		kRefrPath,                                 // 0x9D - ExtraRefrPath
		kUnk9E,                                    // 0x9E
		kLockList,                                 // 0x9F - ExtraLockList
		kForcedLandingMarker,                      // 0xA0 - ExtraForcedLandingMarker
		kLargeRefOwnerCells,                       // 0xA1 - ExtraLargeRefOwnerCells
		kCellWaterEnvMap,                          // 0xA2 - ExtraCellWaterEnvMap
		kUnkA3,                                    // 0xA3
		kTeleportName,                             // 0xA4 - ExtraTeleportName
		kInteraction,                              // 0xA5 - ExtraInteraction
		kWaterData,                                // 0xA6 - ExtraWaterData
		kWaterCurrentZoneData,                     // 0xA7 - ExtraWaterCurrentZoneData
		kAttachRef,                                // 0xA8 - ExtraAttachRef
		kAttachRefChildren,                        // 0xA9 - ExtraAttachRefChildren
		kScriptedAnimDependence,                   // 0xAA - ExtraScriptedAnimDependence
		kCachedScale,                              // 0xAB - ExtraCachedScale
		kUnkAC,                                    // 0xAC
		kUnkAD,                                    // 0xAD
		kMissingRefIDs,                            // 0xAE - ExtraMissingRefIDs
		kBendableSplineParams,                     // 0xAF - ExtraBendableSplineParams
		kNavMeshSplineData,                        // 0xB0 - NavMeshSplineExtraData
		kReferenceGroup,                           // 0xB1 - ExtraReferenceGroup
		kUnkB2,                                    // 0xB2
		kUnkB3,                                    // 0xB3
		kOriginalItemBase,                         // 0xB4 - ExtraOriginalBaseObject
		kMaterialSwap,                             // 0xB5 - ExtraMaterialSwap
		kInstanceData,                             // 0xB6 - ExtraInstanceData
		kPowerArmor,                               // 0xB7 - ExtraPowerArmor
		kAcousticParent,                           // 0xB8 - ExtraAcousticParent
		kInputEnableLayer,                         // 0xB9 - ExtraInputEnableLayer
		kProjectedDecalRef,                        // 0xBA - ExtraProjectedDecalData
		kConstrainedDecalRef,                      // 0xBB - ExtraConstrainedDecalData
		kWorkshop,                                 // 0xBC - Workshop::ExtraData
		kRadioReceiver,                            // 0xBD - ExtraRadioReceiver
		kCulledBone,                               // 0xBE - ExtraCulledBone
		kActorValueStorage,                        // 0xBF - ExtraActorValueStorage
		kDirectAtTarget,                           // 0xC0 - ExtraDirectAtTarget
		kActivateText,                             // 0xC1 - ExtraActivateText
		kObjectBreakable,                          // 0xC2 - ExtraObjectBreakable
		kSavedDynamicIdles,                        // 0xC3 - ExtraObjectSavedDynamicIdles
		kIgnoredAttractKeywords,                   // 0xC4 - ExtraIgnoredAttractKeywords
		kModRank,                                  // 0xC5 - ExtraModRank
		kActorBoneScaleMap,                        // 0xC6 - ExtraBoneScaleMap
		kActorFXPickNodes,                         // 0xC7 - ExtraFXPickNodes
		kPowerArmorPreload,                        // 0xC8 - ExtraPowerArmorPreload
		kAnimGraphPreload,                         // 0xC9 - ExtraAnimGraphPreload
		kAnimSounds,                               // 0xCA - ExtraAnimSounds
		kPowerLinks,                               // 0xCB - ExtraPowerLinks
		kWorkshopSnapping,                         // 0xCC - ExtraWorkshopSnapping
		kSavedUnrecoverableSubgraphs,              // 0xCD - ExtraObjectSavedUnrecoverableSubgraphs
		kRefWeaponSounds,                          // 0xCE - ExtraRefWeaponSounds
		kRefInvestedGold,                          // 0xCF - ExtraInvestedGold
		kRefFurnitureEntryData,                    // 0xD0 - ExtraFurnitureEntryData
		kVoiceType,                                // 0xD1 - ExtraVoiceType
		kCalcedPackIn,                             // 0xD2 - ExtraCalcedPackIn
		kBody,                                     // 0xD3 - ExtraBody
		kSourcePackIn,                             // 0xD4 - ExtraSourcePackIn
		kTraversalData,                            // 0xD5 - ExtraTraversalData
		kTerminalMenuItems,                        // 0xD6 - ExtraTerminalMenuItems
		kCellEnvMap,                               // 0xD7 - ExtraCellEnvMap
		kModIndex,                                 // 0xD8 - ExtraModIndex
		kShipArrivalData,                          // 0xD9 - ExtraShipArrivalData
		kGroupedPackin,                            // 0xDA - ExtraGroupedPackin
		kUnkDB,                                    // 0xDB
		kUnkDC,                                    // 0xDC
		kBlueprintPartOriginData,                  // 0xDD - ExtraBlueprintPartOriginData
		kSnapLinks,                                // 0xDE - ExtraSnapLinks
		kUnkDF,                                    // 0xDF
		kUnkE0,                                    // 0xE0
		kPropertySheet,                            // 0xE1 - ExtraPropertySheet
		kCrew,                                     // 0xE2 - CrewExtraData
		kTerminalMenuMenuItems,                    // 0xE3 - ExtraTerminalMenuMenuItems
		kVolumeData,                               // 0xE4 - ExtraVolumeData
		kTerminalMenuBodyTextItems,                // 0xE5 - ExtraTerminalMenuBodyTextItems
		kCulledSubsegment,                         // 0xE6 - ExtraCulledSubsegment
		kLinkedChildrenAliasInstanceArray,         // 0xE7 - ExtraLinkedChildrenAliasInstanceArray
		kUnkE8,                                    // 0xE8
		kFogVolume,                                // 0xE9 - ExtraFogVolume
		kOwningInstance,                           // 0xEA - ExtraOwningInstance
		kDesiredLegendaryRank,                     // 0xEB - ExtraDesiredLegendaryRank
		kGeometryDirtynessScale,                   // 0xEC - ExtraGeometryDirtynessScale
		kVolumeReflectionProbeOffsetIntensity,     // 0xED - ExtraVolumeReflectionProbe_OffsetIntensity
		kTerminalMenuUnlockedItems,                // 0xEE - ExtraTerminalMenuUnlockedItems
		kProceduralInstanceData,                   // 0xEF - ExtraProceduralInstanceData
		kTimeOfDayData,                            // 0xF0 - ExtraTimeOfDayData
		kLightFlickerData,                         // 0xF1 - ExtraLightFlickerData
		kLightGoboData,                            // 0xF2 - ExtraLightGoboData
		kLightColorData,                           // 0xF3 - ExtraLightColorData
		kLightStaticShadowMapData,                 // 0xF4 - ExtraLightStaticShadowMapData
		kExternalEmittanceData,                    // 0xF5 - ExtraExternalEmittanceData
		kTempLocationWorldSpace,                   // 0xF6 - ExtraTempLocationWorldSpace
		kShipBlueprintSnapData,                    // 0xF7 - ExtraShipBlueprintSnapData
		kRandomAnimStartTime,                      // 0xF8 - ExtraRandomAnimStartTime
		kExteriorReflectionProbeAdjustmentVolume,  // 0xF9 - ExtraExteriorReflectionProbeAdjustmentVolume
		kCellGlobalDirtLayer,                      // 0xFA - ExtraCellGlobalDirtLayer
		kRadiusFalloffExponent,                    // 0xFB - ExtraRadiusFalloffExponent
		kWaterReflectionData,                      // 0xFC - ExtraWaterReflectionData
		kPlacedPlanetContent,                      // 0xFD - ExtraPlacedPlanetContent
	};

	// members
	BSExtraData*	next;   // 08
	u16				flags;  // 10
	Type			type;   // 12
};
static_assert(sizeof(BSExtraData) == 0x18);

class BaseExtraList
{
public:
	DEFINE_MEMBER_FN_1(AddExtra, void, 0x0146B9CC, BSExtraData* a_extra);
	DEFINE_MEMBER_FN_1(GetByType, BSExtraData*, 0x01471B80, BSExtraData::Type type);

private:
	// members
	BSExtraData*  _head;  // 00
	BSExtraData** _tail;  // 08
	u8*			  _flags; // 10
};
static_assert(sizeof(BaseExtraList) == 0x18);

class ExtraDataList : public BSIntrusiveRefCounted
{
public:
	void AddExtra(BSExtraData* a_extra)
	{
		const BSAutoWriteLock l{ _extraRWLock };
		_extraData.AddExtra(a_extra);
	}

	BSExtraData* GetByType(BSExtraData::Type a_type)
	{
		const BSAutoReadLock l{ _extraRWLock };
		return _extraData.GetByType(a_type);
	}

private:
	// members
	BaseExtraList           _extraData;    // 08
	mutable BSReadWriteLock _extraRWLock;  // 20
};
static_assert(sizeof(ExtraDataList) == 0x28);
