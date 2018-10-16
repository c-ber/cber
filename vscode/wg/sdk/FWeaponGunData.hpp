#pragma once
#include "EFiringMode.hpp"
#include "FVector.hpp"
#include "EWeaponReloadMethod.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FWeaponGunData // Size: 0x108
{
public:
    ExternalPtr<struct UParticleSystem> TracerClass; /* Ofs: 0x0 Size: 0x8 ObjectProperty TslGame.WeaponGunData.TracerClass */
    bool DebugWeaponCollision; /* Ofs: 0x8 Size: 0x1 BitMask: 01 BoolProperty TslGame.WeaponGunData.DebugWeaponCollision */
    uint8_t UnknownData9[0x3];
    float StabilityForceModifier; /* Ofs: 0xC Size: 0x4 FloatProperty TslGame.WeaponGunData.StabilityForceModifier */
    float WeaponSuppressorLength; /* Ofs: 0x10 Size: 0x4 FloatProperty TslGame.WeaponGunData.WeaponSuppressorLength */
    float InertiaPitchAdditiveInterpSpeed; /* Ofs: 0x14 Size: 0x4 FloatProperty TslGame.WeaponGunData.InertiaPitchAdditiveInterpSpeed */
    float ReloadSpeedScalar; /* Ofs: 0x18 Size: 0x4 FloatProperty TslGame.WeaponGunData.ReloadSpeedScalar */
    uint8_t UnknownData1C[0x4];
    TArray<EFiringMode> FiringModes; /* Ofs: 0x20 Size: 0x10 ArrayProperty TslGame.WeaponGunData.FiringModes */
    FVector HandWeaponOffsetFPP; /* Ofs: 0x30 Size: 0xC StructProperty TslGame.WeaponGunData.HandWeaponOffsetFPP */
    int32_t AmmoPerClip; /* Ofs: 0x3C Size: 0x4 IntProperty TslGame.WeaponGunData.AmmoPerClip */
    float BurstDelay; /* Ofs: 0x40 Size: 0x4 FloatProperty TslGame.WeaponGunData.BurstDelay */
    int32_t BurstShots; /* Ofs: 0x44 Size: 0x4 IntProperty TslGame.WeaponGunData.BurstShots */
    float NoAnimReloadDuration; /* Ofs: 0x48 Size: 0x4 FloatProperty TslGame.WeaponGunData.NoAnimReloadDuration */
    bool bUseReloadScalarOverride; /* Ofs: 0x4C Size: 0x1 BitMask: 01 BoolProperty TslGame.WeaponGunData.bUseReloadScalarOverride */
    uint8_t UnknownData4D[0x3];
    float WeaponLength; /* Ofs: 0x50 Size: 0x4 FloatProperty TslGame.WeaponGunData.WeaponLength */
    float ReloadDurationByOneInitial; /* Ofs: 0x54 Size: 0x4 FloatProperty TslGame.WeaponGunData.ReloadDurationByOneInitial */
    float StabilitySpeedModifier; /* Ofs: 0x58 Size: 0x4 FloatProperty TslGame.WeaponGunData.StabilitySpeedModifier */
    float ADSTimeMultiplier; /* Ofs: 0x5C Size: 0x4 FloatProperty TslGame.WeaponGunData.ADSTimeMultiplier */
    float ShoulderLength; /* Ofs: 0x60 Size: 0x4 FloatProperty TslGame.WeaponGunData.ShoulderLength */
    int32_t BulletPerFiring; /* Ofs: 0x64 Size: 0x4 IntProperty TslGame.WeaponGunData.BulletPerFiring */
    float FiringBulletsSpread; /* Ofs: 0x68 Size: 0x4 FloatProperty TslGame.WeaponGunData.FiringBulletsSpread */
    float MovementModifierScope; /* Ofs: 0x6C Size: 0x4 FloatProperty TslGame.WeaponGunData.MovementModifierScope */
    float ReloadDurationByOneLoop; /* Ofs: 0x70 Size: 0x4 FloatProperty TslGame.WeaponGunData.ReloadDurationByOneLoop */
    bool bUseGridPelletSpread; /* Ofs: 0x74 Size: 0x1 BitMask: 01 BoolProperty TslGame.WeaponGunData.bUseGridPelletSpread */
    uint8_t UnknownData75[0x3];
    TMap<int32_t, struct FVector2D> PelletGrid; /* Ofs: 0x78 Size: 0x50 MapProperty TslGame.WeaponGunData.PelletGrid */
    bool bIsArrowProjectile; /* Ofs: 0xC8 Size: 0x1 BitMask: 01 BoolProperty TslGame.WeaponGunData.bIsArrowProjectile */
    uint8_t UnknownDataC9[0x3];
    float GridPelletSpreadHalfAngle; /* Ofs: 0xCC Size: 0x4 FloatProperty TslGame.WeaponGunData.GridPelletSpreadHalfAngle */
    FVector HandWeaponOffset; /* Ofs: 0xD0 Size: 0xC StructProperty TslGame.WeaponGunData.HandWeaponOffset */
    bool bUseInertiaPitchAdditive; /* Ofs: 0xDC Size: 0x1 BitMask: 01 BoolProperty TslGame.WeaponGunData.bUseInertiaPitchAdditive */
    bool bManualCycleAfterShot; /* Ofs: 0xDD Size: 0x1 BitMask: 01 BoolProperty TslGame.WeaponGunData.bManualCycleAfterShot */
    TEnumAsByte<enum EWeaponReloadMethod> ReloadMethod; /* Ofs: 0xDE Size: 0x1 EnumProperty TslGame.WeaponGunData.ReloadMethod */
    uint8_t UnknownDataDF[0x1];
    float MovementModifierAim; /* Ofs: 0xE0 Size: 0x4 FloatProperty TslGame.WeaponGunData.MovementModifierAim */
    bool bRotationFromBarrelWhenScoped; /* Ofs: 0xE4 Size: 0x1 BitMask: 01 BoolProperty TslGame.WeaponGunData.bRotationFromBarrelWhenScoped */
    bool bManualCycleInitialStateReady; /* Ofs: 0xE5 Size: 0x1 BitMask: 01 BoolProperty TslGame.WeaponGunData.bManualCycleInitialStateReady */
    uint8_t UnknownDataE6[0x2];
    ExternalPtr<struct UClass> AmmoItemClass; /* Ofs: 0xE8 Size: 0x8 ClassProperty TslGame.WeaponGunData.AmmoItemClass */
    float TraceAdditiveZ; /* Ofs: 0xF0 Size: 0x4 FloatProperty TslGame.WeaponGunData.TraceAdditiveZ */
    bool bUseConstScope; /* Ofs: 0xF4 Size: 0x1 BitMask: 01 BoolProperty TslGame.WeaponGunData.bUseConstScope */
    uint8_t UnknownDataF5[0x3];
    float TimeBetweenShots; /* Ofs: 0xF8 Size: 0x4 FloatProperty TslGame.WeaponGunData.TimeBetweenShots */
    float TraceRadius; /* Ofs: 0xFC Size: 0x4 FloatProperty TslGame.WeaponGunData.TraceRadius */
    float LongTailDelay; /* Ofs: 0x100 Size: 0x4 FloatProperty TslGame.WeaponGunData.LongTailDelay */
    uint8_t UnknownData104[0x4];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFWeaponGunData = sizeof(FWeaponGunData); // 264
    static_assert(sizeof(FWeaponGunData) == 0x108, "Size of FWeaponGunData is not correct.");
	auto constexpr FWeaponGunData_TracerClass_Offset = offsetof(FWeaponGunData, TracerClass);
	static_assert(FWeaponGunData_TracerClass_Offset == 0x0, "FWeaponGunData::TracerClass offset is not 0");
	auto constexpr FWeaponGunData_StabilityForceModifier_Offset = offsetof(FWeaponGunData, StabilityForceModifier);
	static_assert(FWeaponGunData_StabilityForceModifier_Offset == 0xc, "FWeaponGunData::StabilityForceModifier offset is not c");
	auto constexpr FWeaponGunData_WeaponSuppressorLength_Offset = offsetof(FWeaponGunData, WeaponSuppressorLength);
	static_assert(FWeaponGunData_WeaponSuppressorLength_Offset == 0x10, "FWeaponGunData::WeaponSuppressorLength offset is not 10");
	auto constexpr FWeaponGunData_InertiaPitchAdditiveInterpSpeed_Offset = offsetof(FWeaponGunData, InertiaPitchAdditiveInterpSpeed);
	static_assert(FWeaponGunData_InertiaPitchAdditiveInterpSpeed_Offset == 0x14, "FWeaponGunData::InertiaPitchAdditiveInterpSpeed offset is not 14");
	auto constexpr FWeaponGunData_ReloadSpeedScalar_Offset = offsetof(FWeaponGunData, ReloadSpeedScalar);
	static_assert(FWeaponGunData_ReloadSpeedScalar_Offset == 0x18, "FWeaponGunData::ReloadSpeedScalar offset is not 18");
	auto constexpr FWeaponGunData_FiringModes_Offset = offsetof(FWeaponGunData, FiringModes);
	static_assert(FWeaponGunData_FiringModes_Offset == 0x20, "FWeaponGunData::FiringModes offset is not 20");
	auto constexpr FWeaponGunData_HandWeaponOffsetFPP_Offset = offsetof(FWeaponGunData, HandWeaponOffsetFPP);
	static_assert(FWeaponGunData_HandWeaponOffsetFPP_Offset == 0x30, "FWeaponGunData::HandWeaponOffsetFPP offset is not 30");
	auto constexpr FWeaponGunData_AmmoPerClip_Offset = offsetof(FWeaponGunData, AmmoPerClip);
	static_assert(FWeaponGunData_AmmoPerClip_Offset == 0x3c, "FWeaponGunData::AmmoPerClip offset is not 3c");
	auto constexpr FWeaponGunData_BurstDelay_Offset = offsetof(FWeaponGunData, BurstDelay);
	static_assert(FWeaponGunData_BurstDelay_Offset == 0x40, "FWeaponGunData::BurstDelay offset is not 40");
	auto constexpr FWeaponGunData_BurstShots_Offset = offsetof(FWeaponGunData, BurstShots);
	static_assert(FWeaponGunData_BurstShots_Offset == 0x44, "FWeaponGunData::BurstShots offset is not 44");
	auto constexpr FWeaponGunData_NoAnimReloadDuration_Offset = offsetof(FWeaponGunData, NoAnimReloadDuration);
	static_assert(FWeaponGunData_NoAnimReloadDuration_Offset == 0x48, "FWeaponGunData::NoAnimReloadDuration offset is not 48");
	auto constexpr FWeaponGunData_WeaponLength_Offset = offsetof(FWeaponGunData, WeaponLength);
	static_assert(FWeaponGunData_WeaponLength_Offset == 0x50, "FWeaponGunData::WeaponLength offset is not 50");
	auto constexpr FWeaponGunData_ReloadDurationByOneInitial_Offset = offsetof(FWeaponGunData, ReloadDurationByOneInitial);
	static_assert(FWeaponGunData_ReloadDurationByOneInitial_Offset == 0x54, "FWeaponGunData::ReloadDurationByOneInitial offset is not 54");
	auto constexpr FWeaponGunData_StabilitySpeedModifier_Offset = offsetof(FWeaponGunData, StabilitySpeedModifier);
	static_assert(FWeaponGunData_StabilitySpeedModifier_Offset == 0x58, "FWeaponGunData::StabilitySpeedModifier offset is not 58");
	auto constexpr FWeaponGunData_ADSTimeMultiplier_Offset = offsetof(FWeaponGunData, ADSTimeMultiplier);
	static_assert(FWeaponGunData_ADSTimeMultiplier_Offset == 0x5c, "FWeaponGunData::ADSTimeMultiplier offset is not 5c");
	auto constexpr FWeaponGunData_ShoulderLength_Offset = offsetof(FWeaponGunData, ShoulderLength);
	static_assert(FWeaponGunData_ShoulderLength_Offset == 0x60, "FWeaponGunData::ShoulderLength offset is not 60");
	auto constexpr FWeaponGunData_BulletPerFiring_Offset = offsetof(FWeaponGunData, BulletPerFiring);
	static_assert(FWeaponGunData_BulletPerFiring_Offset == 0x64, "FWeaponGunData::BulletPerFiring offset is not 64");
	auto constexpr FWeaponGunData_FiringBulletsSpread_Offset = offsetof(FWeaponGunData, FiringBulletsSpread);
	static_assert(FWeaponGunData_FiringBulletsSpread_Offset == 0x68, "FWeaponGunData::FiringBulletsSpread offset is not 68");
	auto constexpr FWeaponGunData_MovementModifierScope_Offset = offsetof(FWeaponGunData, MovementModifierScope);
	static_assert(FWeaponGunData_MovementModifierScope_Offset == 0x6c, "FWeaponGunData::MovementModifierScope offset is not 6c");
	auto constexpr FWeaponGunData_ReloadDurationByOneLoop_Offset = offsetof(FWeaponGunData, ReloadDurationByOneLoop);
	static_assert(FWeaponGunData_ReloadDurationByOneLoop_Offset == 0x70, "FWeaponGunData::ReloadDurationByOneLoop offset is not 70");
	auto constexpr FWeaponGunData_PelletGrid_Offset = offsetof(FWeaponGunData, PelletGrid);
	static_assert(FWeaponGunData_PelletGrid_Offset == 0x78, "FWeaponGunData::PelletGrid offset is not 78");
	auto constexpr FWeaponGunData_GridPelletSpreadHalfAngle_Offset = offsetof(FWeaponGunData, GridPelletSpreadHalfAngle);
	static_assert(FWeaponGunData_GridPelletSpreadHalfAngle_Offset == 0xcc, "FWeaponGunData::GridPelletSpreadHalfAngle offset is not cc");
	auto constexpr FWeaponGunData_HandWeaponOffset_Offset = offsetof(FWeaponGunData, HandWeaponOffset);
	static_assert(FWeaponGunData_HandWeaponOffset_Offset == 0xd0, "FWeaponGunData::HandWeaponOffset offset is not d0");
	auto constexpr FWeaponGunData_ReloadMethod_Offset = offsetof(FWeaponGunData, ReloadMethod);
	static_assert(FWeaponGunData_ReloadMethod_Offset == 0xde, "FWeaponGunData::ReloadMethod offset is not de");
	auto constexpr FWeaponGunData_MovementModifierAim_Offset = offsetof(FWeaponGunData, MovementModifierAim);
	static_assert(FWeaponGunData_MovementModifierAim_Offset == 0xe0, "FWeaponGunData::MovementModifierAim offset is not e0");
	auto constexpr FWeaponGunData_AmmoItemClass_Offset = offsetof(FWeaponGunData, AmmoItemClass);
	static_assert(FWeaponGunData_AmmoItemClass_Offset == 0xe8, "FWeaponGunData::AmmoItemClass offset is not e8");
	auto constexpr FWeaponGunData_TraceAdditiveZ_Offset = offsetof(FWeaponGunData, TraceAdditiveZ);
	static_assert(FWeaponGunData_TraceAdditiveZ_Offset == 0xf0, "FWeaponGunData::TraceAdditiveZ offset is not f0");
	auto constexpr FWeaponGunData_TimeBetweenShots_Offset = offsetof(FWeaponGunData, TimeBetweenShots);
	static_assert(FWeaponGunData_TimeBetweenShots_Offset == 0xf8, "FWeaponGunData::TimeBetweenShots offset is not f8");
	auto constexpr FWeaponGunData_TraceRadius_Offset = offsetof(FWeaponGunData, TraceRadius);
	static_assert(FWeaponGunData_TraceRadius_Offset == 0xfc, "FWeaponGunData::TraceRadius offset is not fc");
	auto constexpr FWeaponGunData_LongTailDelay_Offset = offsetof(FWeaponGunData, LongTailDelay);
	static_assert(FWeaponGunData_LongTailDelay_Offset == 0x100, "FWeaponGunData::LongTailDelay offset is not 100");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
