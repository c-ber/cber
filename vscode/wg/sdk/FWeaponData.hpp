#pragma once
#include "EWeaponClass.hpp"
#include "EWeaponGripLeftHand.hpp"
#include "FVector.hpp"
#include "EThrownWeaponType.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FWeaponData // Size: 0xA8
{
public:
    float HoldBreathFOV; /* Ofs: 0x0 Size: 0x4 FloatProperty TslGame.WeaponData.HoldBreathFOV */
    float AnimationKick; /* Ofs: 0x4 Size: 0x4 FloatProperty TslGame.WeaponData.AnimationKick */
    float CameraDOF_Power; /* Ofs: 0x8 Size: 0x4 FloatProperty TslGame.WeaponData.CameraDOF_Power */
    bool bApplyGripPoseLeft; /* Ofs: 0xC Size: 0x1 BitMask: 01 BoolProperty TslGame.WeaponData.bApplyGripPoseLeft */
    bool DestructibleDoor; /* Ofs: 0xD Size: 0x1 BitMask: 01 BoolProperty TslGame.WeaponData.DestructibleDoor */
    uint8_t UnknownDataE[0x2];
    FName Rarity; /* Ofs: 0x10 Size: 0x8 NameProperty TslGame.WeaponData.Rarity */
    TEnumAsByte<enum EWeaponClass> WeaponClass; /* Ofs: 0x18 Size: 0x1 EnumProperty TslGame.WeaponData.WeaponClass */
    TEnumAsByte<enum EWeaponGripLeftHand> WeaponGripLeft; /* Ofs: 0x19 Size: 0x1 EnumProperty TslGame.WeaponData.WeaponGripLeft */
    uint8_t UnknownData1A[0x2];
    FVector SocketOffset_Hand; /* Ofs: 0x1C Size: 0xC StructProperty TslGame.WeaponData.SocketOffset_Hand */
    float CameraDOF_Range; /* Ofs: 0x28 Size: 0x4 FloatProperty TslGame.WeaponData.CameraDOF_Range */
    float SwayModifier_Movement; /* Ofs: 0x2C Size: 0x4 FloatProperty TslGame.WeaponData.SwayModifier_Movement */
    FName WeaponSensitivityOverride; /* Ofs: 0x30 Size: 0x8 NameProperty TslGame.WeaponData.WeaponSensitivityOverride */
    float CameraDOF_NearRange; /* Ofs: 0x38 Size: 0x4 FloatProperty TslGame.WeaponData.CameraDOF_NearRange */
    bool bUseDefaultScoreMultiplier; /* Ofs: 0x3C Size: 0x1 BitMask: 01 BoolProperty TslGame.WeaponData.bUseDefaultScoreMultiplier */
    uint8_t UnknownData3D[0x3];
    float ScoreMultiplierByDamage; /* Ofs: 0x40 Size: 0x4 FloatProperty TslGame.WeaponData.ScoreMultiplierByDamage */
    float SwayModifier_Prone; /* Ofs: 0x44 Size: 0x4 FloatProperty TslGame.WeaponData.SwayModifier_Prone */
    float SwayModifier_Stand; /* Ofs: 0x48 Size: 0x4 FloatProperty TslGame.WeaponData.SwayModifier_Stand */
    float WeaponReadyDuration; /* Ofs: 0x4C Size: 0x4 FloatProperty TslGame.WeaponData.WeaponReadyDuration */
    bool bForceFireAfterEquip; /* Ofs: 0x50 Size: 0x1 BitMask: 01 BoolProperty TslGame.WeaponData.bForceFireAfterEquip */
    uint8_t UnknownData51[0x3];
    float ScoreMultiplierByKill; /* Ofs: 0x54 Size: 0x4 FloatProperty TslGame.WeaponData.ScoreMultiplierByKill */
    float PhysicalBodyHitImpactPower; /* Ofs: 0x58 Size: 0x4 FloatProperty TslGame.WeaponData.PhysicalBodyHitImpactPower */
    uint8_t UnknownData5C[0x4];
    ExternalPtr<struct UAnimMontage> RecoilMontage; /* Ofs: 0x60 Size: 0x8 ObjectProperty TslGame.WeaponData.RecoilMontage */
    TEnumAsByte<enum EThrownWeaponType> ThrownType; /* Ofs: 0x68 Size: 0x1 EnumProperty TslGame.WeaponData.ThrownType */
    uint8_t UnknownData69[0x3];
    float SwayModifier_YawOffset; /* Ofs: 0x6C Size: 0x4 FloatProperty TslGame.WeaponData.SwayModifier_YawOffset */
    float SwayModifier_Crouch; /* Ofs: 0x70 Size: 0x4 FloatProperty TslGame.WeaponData.SwayModifier_Crouch */
    float SwayModifier_Pitch; /* Ofs: 0x74 Size: 0x4 FloatProperty TslGame.WeaponData.SwayModifier_Pitch */
    float WeaponEquipDuration; /* Ofs: 0x78 Size: 0x4 FloatProperty TslGame.WeaponData.WeaponEquipDuration */
    float TargetingFOV; /* Ofs: 0x7C Size: 0x4 FloatProperty TslGame.WeaponData.TargetingFOV */
    TArray<float> IronSightZeroingDistances; /* Ofs: 0x80 Size: 0x10 ArrayProperty TslGame.WeaponData.IronSightZeroingDistances */
    float WeaponBoltActionTrigger; /* Ofs: 0x90 Size: 0x4 FloatProperty TslGame.WeaponData.WeaponBoltActionTrigger */
    FVector SocketOffset_Shoulder; /* Ofs: 0x94 Size: 0xC StructProperty TslGame.WeaponData.SocketOffset_Shoulder */
    bool bUseDynamicReverbAK; /* Ofs: 0xA0 Size: 0x1 BitMask: 01 BoolProperty TslGame.WeaponData.bUseDynamicReverbAK */
    uint8_t UnknownDataA1[0x3];
    float WeaponUnequipDuration; /* Ofs: 0xA4 Size: 0x4 FloatProperty TslGame.WeaponData.WeaponUnequipDuration */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFWeaponData = sizeof(FWeaponData); // 168
    static_assert(sizeof(FWeaponData) == 0xA8, "Size of FWeaponData is not correct.");
	auto constexpr FWeaponData_HoldBreathFOV_Offset = offsetof(FWeaponData, HoldBreathFOV);
	static_assert(FWeaponData_HoldBreathFOV_Offset == 0x0, "FWeaponData::HoldBreathFOV offset is not 0");
	auto constexpr FWeaponData_AnimationKick_Offset = offsetof(FWeaponData, AnimationKick);
	static_assert(FWeaponData_AnimationKick_Offset == 0x4, "FWeaponData::AnimationKick offset is not 4");
	auto constexpr FWeaponData_CameraDOF_Power_Offset = offsetof(FWeaponData, CameraDOF_Power);
	static_assert(FWeaponData_CameraDOF_Power_Offset == 0x8, "FWeaponData::CameraDOF_Power offset is not 8");
	auto constexpr FWeaponData_Rarity_Offset = offsetof(FWeaponData, Rarity);
	static_assert(FWeaponData_Rarity_Offset == 0x10, "FWeaponData::Rarity offset is not 10");
	auto constexpr FWeaponData_WeaponClass_Offset = offsetof(FWeaponData, WeaponClass);
	static_assert(FWeaponData_WeaponClass_Offset == 0x18, "FWeaponData::WeaponClass offset is not 18");
	auto constexpr FWeaponData_WeaponGripLeft_Offset = offsetof(FWeaponData, WeaponGripLeft);
	static_assert(FWeaponData_WeaponGripLeft_Offset == 0x19, "FWeaponData::WeaponGripLeft offset is not 19");
	auto constexpr FWeaponData_SocketOffset_Hand_Offset = offsetof(FWeaponData, SocketOffset_Hand);
	static_assert(FWeaponData_SocketOffset_Hand_Offset == 0x1c, "FWeaponData::SocketOffset_Hand offset is not 1c");
	auto constexpr FWeaponData_CameraDOF_Range_Offset = offsetof(FWeaponData, CameraDOF_Range);
	static_assert(FWeaponData_CameraDOF_Range_Offset == 0x28, "FWeaponData::CameraDOF_Range offset is not 28");
	auto constexpr FWeaponData_SwayModifier_Movement_Offset = offsetof(FWeaponData, SwayModifier_Movement);
	static_assert(FWeaponData_SwayModifier_Movement_Offset == 0x2c, "FWeaponData::SwayModifier_Movement offset is not 2c");
	auto constexpr FWeaponData_WeaponSensitivityOverride_Offset = offsetof(FWeaponData, WeaponSensitivityOverride);
	static_assert(FWeaponData_WeaponSensitivityOverride_Offset == 0x30, "FWeaponData::WeaponSensitivityOverride offset is not 30");
	auto constexpr FWeaponData_CameraDOF_NearRange_Offset = offsetof(FWeaponData, CameraDOF_NearRange);
	static_assert(FWeaponData_CameraDOF_NearRange_Offset == 0x38, "FWeaponData::CameraDOF_NearRange offset is not 38");
	auto constexpr FWeaponData_ScoreMultiplierByDamage_Offset = offsetof(FWeaponData, ScoreMultiplierByDamage);
	static_assert(FWeaponData_ScoreMultiplierByDamage_Offset == 0x40, "FWeaponData::ScoreMultiplierByDamage offset is not 40");
	auto constexpr FWeaponData_SwayModifier_Prone_Offset = offsetof(FWeaponData, SwayModifier_Prone);
	static_assert(FWeaponData_SwayModifier_Prone_Offset == 0x44, "FWeaponData::SwayModifier_Prone offset is not 44");
	auto constexpr FWeaponData_SwayModifier_Stand_Offset = offsetof(FWeaponData, SwayModifier_Stand);
	static_assert(FWeaponData_SwayModifier_Stand_Offset == 0x48, "FWeaponData::SwayModifier_Stand offset is not 48");
	auto constexpr FWeaponData_WeaponReadyDuration_Offset = offsetof(FWeaponData, WeaponReadyDuration);
	static_assert(FWeaponData_WeaponReadyDuration_Offset == 0x4c, "FWeaponData::WeaponReadyDuration offset is not 4c");
	auto constexpr FWeaponData_ScoreMultiplierByKill_Offset = offsetof(FWeaponData, ScoreMultiplierByKill);
	static_assert(FWeaponData_ScoreMultiplierByKill_Offset == 0x54, "FWeaponData::ScoreMultiplierByKill offset is not 54");
	auto constexpr FWeaponData_PhysicalBodyHitImpactPower_Offset = offsetof(FWeaponData, PhysicalBodyHitImpactPower);
	static_assert(FWeaponData_PhysicalBodyHitImpactPower_Offset == 0x58, "FWeaponData::PhysicalBodyHitImpactPower offset is not 58");
	auto constexpr FWeaponData_RecoilMontage_Offset = offsetof(FWeaponData, RecoilMontage);
	static_assert(FWeaponData_RecoilMontage_Offset == 0x60, "FWeaponData::RecoilMontage offset is not 60");
	auto constexpr FWeaponData_ThrownType_Offset = offsetof(FWeaponData, ThrownType);
	static_assert(FWeaponData_ThrownType_Offset == 0x68, "FWeaponData::ThrownType offset is not 68");
	auto constexpr FWeaponData_SwayModifier_YawOffset_Offset = offsetof(FWeaponData, SwayModifier_YawOffset);
	static_assert(FWeaponData_SwayModifier_YawOffset_Offset == 0x6c, "FWeaponData::SwayModifier_YawOffset offset is not 6c");
	auto constexpr FWeaponData_SwayModifier_Crouch_Offset = offsetof(FWeaponData, SwayModifier_Crouch);
	static_assert(FWeaponData_SwayModifier_Crouch_Offset == 0x70, "FWeaponData::SwayModifier_Crouch offset is not 70");
	auto constexpr FWeaponData_SwayModifier_Pitch_Offset = offsetof(FWeaponData, SwayModifier_Pitch);
	static_assert(FWeaponData_SwayModifier_Pitch_Offset == 0x74, "FWeaponData::SwayModifier_Pitch offset is not 74");
	auto constexpr FWeaponData_WeaponEquipDuration_Offset = offsetof(FWeaponData, WeaponEquipDuration);
	static_assert(FWeaponData_WeaponEquipDuration_Offset == 0x78, "FWeaponData::WeaponEquipDuration offset is not 78");
	auto constexpr FWeaponData_TargetingFOV_Offset = offsetof(FWeaponData, TargetingFOV);
	static_assert(FWeaponData_TargetingFOV_Offset == 0x7c, "FWeaponData::TargetingFOV offset is not 7c");
	auto constexpr FWeaponData_IronSightZeroingDistances_Offset = offsetof(FWeaponData, IronSightZeroingDistances);
	static_assert(FWeaponData_IronSightZeroingDistances_Offset == 0x80, "FWeaponData::IronSightZeroingDistances offset is not 80");
	auto constexpr FWeaponData_WeaponBoltActionTrigger_Offset = offsetof(FWeaponData, WeaponBoltActionTrigger);
	static_assert(FWeaponData_WeaponBoltActionTrigger_Offset == 0x90, "FWeaponData::WeaponBoltActionTrigger offset is not 90");
	auto constexpr FWeaponData_SocketOffset_Shoulder_Offset = offsetof(FWeaponData, SocketOffset_Shoulder);
	static_assert(FWeaponData_SocketOffset_Shoulder_Offset == 0x94, "FWeaponData::SocketOffset_Shoulder offset is not 94");
	auto constexpr FWeaponData_WeaponUnequipDuration_Offset = offsetof(FWeaponData, WeaponUnequipDuration);
	static_assert(FWeaponData_WeaponUnequipDuration_Offset == 0xa4, "FWeaponData::WeaponUnequipDuration offset is not a4");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
