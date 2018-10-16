#pragma once
#include "FVector.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FWeaponGunAnim // Size: 0x118
{
public:
    bool bLoopedFire; /* Ofs: 0x0 Size: 0x1 BitMask: 01 BoolProperty TslGame.WeaponGunAnim.bLoopedFire */
    uint8_t UnknownData1[0x3];
    float FireCycleDuration; /* Ofs: 0x4 Size: 0x4 FloatProperty TslGame.WeaponGunAnim.FireCycleDuration */
    FVector RecoilADSSocketOffsetScale; /* Ofs: 0x8 Size: 0xC StructProperty TslGame.WeaponGunAnim.RecoilADSSocketOffsetScale */
    float ReloadDurationMagOut; /* Ofs: 0x14 Size: 0x4 FloatProperty TslGame.WeaponGunAnim.ReloadDurationMagOut */
    FVector MagDropAngularVelocity; /* Ofs: 0x18 Size: 0xC StructProperty TslGame.WeaponGunAnim.MagDropAngularVelocity */
    uint8_t UnknownData24[0x4];
    ExternalPtr<struct UAnimMontage> CharacterFire; /* Ofs: 0x28 Size: 0x8 ObjectProperty TslGame.WeaponGunAnim.CharacterFire */
    bool bCycleAfterLastShot; /* Ofs: 0x30 Size: 0x1 BitMask: 01 BoolProperty TslGame.WeaponGunAnim.bCycleAfterLastShot */
    uint8_t UnknownData31[0x7];
    ExternalPtr<struct UAnimMontage> Reload; /* Ofs: 0x38 Size: 0x8 ObjectProperty TslGame.WeaponGunAnim.Reload */
    ExternalPtr<struct UAnimMontage> CharacterFireSelector; /* Ofs: 0x40 Size: 0x8 ObjectProperty TslGame.WeaponGunAnim.CharacterFireSelector */
    ExternalPtr<struct UAnimMontage> CharacterFireCycle; /* Ofs: 0x48 Size: 0x8 ObjectProperty TslGame.WeaponGunAnim.CharacterFireCycle */
    ExternalPtr<struct UBlendSpaceBase> CharacterLHGripBlendspace; /* Ofs: 0x50 Size: 0x8 ObjectProperty TslGame.WeaponGunAnim.CharacterLHGripBlendspace */
    FVector MagDropLinearVelocity; /* Ofs: 0x58 Size: 0xC StructProperty TslGame.WeaponGunAnim.MagDropLinearVelocity */
    float ReloadDurationStart; /* Ofs: 0x64 Size: 0x4 FloatProperty TslGame.WeaponGunAnim.ReloadDurationStart */
    ExternalPtr<struct UAnimMontage> WeaponReloadTactical; /* Ofs: 0x68 Size: 0x8 ObjectProperty TslGame.WeaponGunAnim.WeaponReloadTactical */
    float RecoilKick_MovementMaxMultiplier; /* Ofs: 0x70 Size: 0x4 FloatProperty TslGame.WeaponGunAnim.RecoilKick_MovementMaxMultiplier */
    float InertiaInterpMultiplier; /* Ofs: 0x74 Size: 0x4 FloatProperty TslGame.WeaponGunAnim.InertiaInterpMultiplier */
    float ReloadDurationLoop; /* Ofs: 0x78 Size: 0x4 FloatProperty TslGame.WeaponGunAnim.ReloadDurationLoop */
    uint8_t UnknownData7C[0x4];
    ExternalPtr<struct UAnimMontage> CharacterReloadTactical; /* Ofs: 0x80 Size: 0x8 ObjectProperty TslGame.WeaponGunAnim.CharacterReloadTactical */
    ExternalPtr<struct UAnimMontage> CharacterReloadCharge; /* Ofs: 0x88 Size: 0x8 ObjectProperty TslGame.WeaponGunAnim.CharacterReloadCharge */
    float ReloadDurationCharge; /* Ofs: 0x90 Size: 0x4 FloatProperty TslGame.WeaponGunAnim.ReloadDurationCharge */
    uint8_t UnknownData94[0x4];
    ExternalPtr<struct UAnimMontage> WeaponReloadCharge; /* Ofs: 0x98 Size: 0x8 ObjectProperty TslGame.WeaponGunAnim.WeaponReloadCharge */
    ExternalPtr<struct UCameraAnim> CycleCameraAnim; /* Ofs: 0xA0 Size: 0x8 ObjectProperty TslGame.WeaponGunAnim.CycleCameraAnim */
    float RecoilKickADS; /* Ofs: 0xA8 Size: 0x4 FloatProperty TslGame.WeaponGunAnim.RecoilKickADS */
    uint8_t UnknownDataAC[0x4];
    ExternalPtr<struct UAnimMontage> CharacterReloadByOneStart; /* Ofs: 0xB0 Size: 0x8 ObjectProperty TslGame.WeaponGunAnim.CharacterReloadByOneStart */
    float RecoilKick_MovementSpeedMax; /* Ofs: 0xB8 Size: 0x4 FloatProperty TslGame.WeaponGunAnim.RecoilKick_MovementSpeedMax */
    float CycleAfterReloadDelay; /* Ofs: 0xBC Size: 0x4 FloatProperty TslGame.WeaponGunAnim.CycleAfterReloadDelay */
    float InertiaClampMultiplier; /* Ofs: 0xC0 Size: 0x4 FloatProperty TslGame.WeaponGunAnim.InertiaClampMultiplier */
    bool bCycleDuringReload; /* Ofs: 0xC4 Size: 0x1 BitMask: 01 BoolProperty TslGame.WeaponGunAnim.bCycleDuringReload */
    uint8_t UnknownDataC5[0x3];
    ExternalPtr<struct UAnimMontage> CharacterReloadByOneSingle; /* Ofs: 0xC8 Size: 0x8 ObjectProperty TslGame.WeaponGunAnim.CharacterReloadByOneSingle */
    float ReloadDurationTactical; /* Ofs: 0xD0 Size: 0x4 FloatProperty TslGame.WeaponGunAnim.ReloadDurationTactical */
    uint8_t UnknownDataD4[0x4];
    ExternalPtr<struct UAnimMontage> CharacterReloadByOneStop; /* Ofs: 0xD8 Size: 0x8 ObjectProperty TslGame.WeaponGunAnim.CharacterReloadByOneStop */
    ExternalPtr<struct UClass> ShotCameraShake; /* Ofs: 0xE0 Size: 0x8 ClassProperty TslGame.WeaponGunAnim.ShotCameraShake */
    ExternalPtr<struct UAnimMontage> Fire; /* Ofs: 0xE8 Size: 0x8 ObjectProperty TslGame.WeaponGunAnim.Fire */
    float FireCycleDelay; /* Ofs: 0xF0 Size: 0x4 FloatProperty TslGame.WeaponGunAnim.FireCycleDelay */
    uint8_t UnknownDataF4[0x4];
    ExternalPtr<struct UClass> ShotCameraShakeADS; /* Ofs: 0xF8 Size: 0x8 ClassProperty TslGame.WeaponGunAnim.ShotCameraShakeADS */
    ExternalPtr<struct UBlendSpace1D> CharacterGripBlendspace; /* Ofs: 0x100 Size: 0x8 ObjectProperty TslGame.WeaponGunAnim.CharacterGripBlendspace */
    bool bUseBoltAction; /* Ofs: 0x108 Size: 0x1 BitMask: 01 BoolProperty TslGame.WeaponGunAnim.bUseBoltAction */
    uint8_t UnknownData109[0x7];
    ExternalPtr<struct UClass> ShotCameraShakeIronsight; /* Ofs: 0x110 Size: 0x8 ClassProperty TslGame.WeaponGunAnim.ShotCameraShakeIronsight */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFWeaponGunAnim = sizeof(FWeaponGunAnim); // 280
    static_assert(sizeof(FWeaponGunAnim) == 0x118, "Size of FWeaponGunAnim is not correct.");
	auto constexpr FWeaponGunAnim_FireCycleDuration_Offset = offsetof(FWeaponGunAnim, FireCycleDuration);
	static_assert(FWeaponGunAnim_FireCycleDuration_Offset == 0x4, "FWeaponGunAnim::FireCycleDuration offset is not 4");
	auto constexpr FWeaponGunAnim_RecoilADSSocketOffsetScale_Offset = offsetof(FWeaponGunAnim, RecoilADSSocketOffsetScale);
	static_assert(FWeaponGunAnim_RecoilADSSocketOffsetScale_Offset == 0x8, "FWeaponGunAnim::RecoilADSSocketOffsetScale offset is not 8");
	auto constexpr FWeaponGunAnim_ReloadDurationMagOut_Offset = offsetof(FWeaponGunAnim, ReloadDurationMagOut);
	static_assert(FWeaponGunAnim_ReloadDurationMagOut_Offset == 0x14, "FWeaponGunAnim::ReloadDurationMagOut offset is not 14");
	auto constexpr FWeaponGunAnim_MagDropAngularVelocity_Offset = offsetof(FWeaponGunAnim, MagDropAngularVelocity);
	static_assert(FWeaponGunAnim_MagDropAngularVelocity_Offset == 0x18, "FWeaponGunAnim::MagDropAngularVelocity offset is not 18");
	auto constexpr FWeaponGunAnim_CharacterFire_Offset = offsetof(FWeaponGunAnim, CharacterFire);
	static_assert(FWeaponGunAnim_CharacterFire_Offset == 0x28, "FWeaponGunAnim::CharacterFire offset is not 28");
	auto constexpr FWeaponGunAnim_Reload_Offset = offsetof(FWeaponGunAnim, Reload);
	static_assert(FWeaponGunAnim_Reload_Offset == 0x38, "FWeaponGunAnim::Reload offset is not 38");
	auto constexpr FWeaponGunAnim_CharacterFireSelector_Offset = offsetof(FWeaponGunAnim, CharacterFireSelector);
	static_assert(FWeaponGunAnim_CharacterFireSelector_Offset == 0x40, "FWeaponGunAnim::CharacterFireSelector offset is not 40");
	auto constexpr FWeaponGunAnim_CharacterFireCycle_Offset = offsetof(FWeaponGunAnim, CharacterFireCycle);
	static_assert(FWeaponGunAnim_CharacterFireCycle_Offset == 0x48, "FWeaponGunAnim::CharacterFireCycle offset is not 48");
	auto constexpr FWeaponGunAnim_CharacterLHGripBlendspace_Offset = offsetof(FWeaponGunAnim, CharacterLHGripBlendspace);
	static_assert(FWeaponGunAnim_CharacterLHGripBlendspace_Offset == 0x50, "FWeaponGunAnim::CharacterLHGripBlendspace offset is not 50");
	auto constexpr FWeaponGunAnim_MagDropLinearVelocity_Offset = offsetof(FWeaponGunAnim, MagDropLinearVelocity);
	static_assert(FWeaponGunAnim_MagDropLinearVelocity_Offset == 0x58, "FWeaponGunAnim::MagDropLinearVelocity offset is not 58");
	auto constexpr FWeaponGunAnim_ReloadDurationStart_Offset = offsetof(FWeaponGunAnim, ReloadDurationStart);
	static_assert(FWeaponGunAnim_ReloadDurationStart_Offset == 0x64, "FWeaponGunAnim::ReloadDurationStart offset is not 64");
	auto constexpr FWeaponGunAnim_WeaponReloadTactical_Offset = offsetof(FWeaponGunAnim, WeaponReloadTactical);
	static_assert(FWeaponGunAnim_WeaponReloadTactical_Offset == 0x68, "FWeaponGunAnim::WeaponReloadTactical offset is not 68");
	auto constexpr FWeaponGunAnim_RecoilKick_MovementMaxMultiplier_Offset = offsetof(FWeaponGunAnim, RecoilKick_MovementMaxMultiplier);
	static_assert(FWeaponGunAnim_RecoilKick_MovementMaxMultiplier_Offset == 0x70, "FWeaponGunAnim::RecoilKick_MovementMaxMultiplier offset is not 70");
	auto constexpr FWeaponGunAnim_InertiaInterpMultiplier_Offset = offsetof(FWeaponGunAnim, InertiaInterpMultiplier);
	static_assert(FWeaponGunAnim_InertiaInterpMultiplier_Offset == 0x74, "FWeaponGunAnim::InertiaInterpMultiplier offset is not 74");
	auto constexpr FWeaponGunAnim_ReloadDurationLoop_Offset = offsetof(FWeaponGunAnim, ReloadDurationLoop);
	static_assert(FWeaponGunAnim_ReloadDurationLoop_Offset == 0x78, "FWeaponGunAnim::ReloadDurationLoop offset is not 78");
	auto constexpr FWeaponGunAnim_CharacterReloadTactical_Offset = offsetof(FWeaponGunAnim, CharacterReloadTactical);
	static_assert(FWeaponGunAnim_CharacterReloadTactical_Offset == 0x80, "FWeaponGunAnim::CharacterReloadTactical offset is not 80");
	auto constexpr FWeaponGunAnim_CharacterReloadCharge_Offset = offsetof(FWeaponGunAnim, CharacterReloadCharge);
	static_assert(FWeaponGunAnim_CharacterReloadCharge_Offset == 0x88, "FWeaponGunAnim::CharacterReloadCharge offset is not 88");
	auto constexpr FWeaponGunAnim_ReloadDurationCharge_Offset = offsetof(FWeaponGunAnim, ReloadDurationCharge);
	static_assert(FWeaponGunAnim_ReloadDurationCharge_Offset == 0x90, "FWeaponGunAnim::ReloadDurationCharge offset is not 90");
	auto constexpr FWeaponGunAnim_WeaponReloadCharge_Offset = offsetof(FWeaponGunAnim, WeaponReloadCharge);
	static_assert(FWeaponGunAnim_WeaponReloadCharge_Offset == 0x98, "FWeaponGunAnim::WeaponReloadCharge offset is not 98");
	auto constexpr FWeaponGunAnim_CycleCameraAnim_Offset = offsetof(FWeaponGunAnim, CycleCameraAnim);
	static_assert(FWeaponGunAnim_CycleCameraAnim_Offset == 0xa0, "FWeaponGunAnim::CycleCameraAnim offset is not a0");
	auto constexpr FWeaponGunAnim_RecoilKickADS_Offset = offsetof(FWeaponGunAnim, RecoilKickADS);
	static_assert(FWeaponGunAnim_RecoilKickADS_Offset == 0xa8, "FWeaponGunAnim::RecoilKickADS offset is not a8");
	auto constexpr FWeaponGunAnim_CharacterReloadByOneStart_Offset = offsetof(FWeaponGunAnim, CharacterReloadByOneStart);
	static_assert(FWeaponGunAnim_CharacterReloadByOneStart_Offset == 0xb0, "FWeaponGunAnim::CharacterReloadByOneStart offset is not b0");
	auto constexpr FWeaponGunAnim_RecoilKick_MovementSpeedMax_Offset = offsetof(FWeaponGunAnim, RecoilKick_MovementSpeedMax);
	static_assert(FWeaponGunAnim_RecoilKick_MovementSpeedMax_Offset == 0xb8, "FWeaponGunAnim::RecoilKick_MovementSpeedMax offset is not b8");
	auto constexpr FWeaponGunAnim_CycleAfterReloadDelay_Offset = offsetof(FWeaponGunAnim, CycleAfterReloadDelay);
	static_assert(FWeaponGunAnim_CycleAfterReloadDelay_Offset == 0xbc, "FWeaponGunAnim::CycleAfterReloadDelay offset is not bc");
	auto constexpr FWeaponGunAnim_InertiaClampMultiplier_Offset = offsetof(FWeaponGunAnim, InertiaClampMultiplier);
	static_assert(FWeaponGunAnim_InertiaClampMultiplier_Offset == 0xc0, "FWeaponGunAnim::InertiaClampMultiplier offset is not c0");
	auto constexpr FWeaponGunAnim_CharacterReloadByOneSingle_Offset = offsetof(FWeaponGunAnim, CharacterReloadByOneSingle);
	static_assert(FWeaponGunAnim_CharacterReloadByOneSingle_Offset == 0xc8, "FWeaponGunAnim::CharacterReloadByOneSingle offset is not c8");
	auto constexpr FWeaponGunAnim_ReloadDurationTactical_Offset = offsetof(FWeaponGunAnim, ReloadDurationTactical);
	static_assert(FWeaponGunAnim_ReloadDurationTactical_Offset == 0xd0, "FWeaponGunAnim::ReloadDurationTactical offset is not d0");
	auto constexpr FWeaponGunAnim_CharacterReloadByOneStop_Offset = offsetof(FWeaponGunAnim, CharacterReloadByOneStop);
	static_assert(FWeaponGunAnim_CharacterReloadByOneStop_Offset == 0xd8, "FWeaponGunAnim::CharacterReloadByOneStop offset is not d8");
	auto constexpr FWeaponGunAnim_ShotCameraShake_Offset = offsetof(FWeaponGunAnim, ShotCameraShake);
	static_assert(FWeaponGunAnim_ShotCameraShake_Offset == 0xe0, "FWeaponGunAnim::ShotCameraShake offset is not e0");
	auto constexpr FWeaponGunAnim_Fire_Offset = offsetof(FWeaponGunAnim, Fire);
	static_assert(FWeaponGunAnim_Fire_Offset == 0xe8, "FWeaponGunAnim::Fire offset is not e8");
	auto constexpr FWeaponGunAnim_FireCycleDelay_Offset = offsetof(FWeaponGunAnim, FireCycleDelay);
	static_assert(FWeaponGunAnim_FireCycleDelay_Offset == 0xf0, "FWeaponGunAnim::FireCycleDelay offset is not f0");
	auto constexpr FWeaponGunAnim_ShotCameraShakeADS_Offset = offsetof(FWeaponGunAnim, ShotCameraShakeADS);
	static_assert(FWeaponGunAnim_ShotCameraShakeADS_Offset == 0xf8, "FWeaponGunAnim::ShotCameraShakeADS offset is not f8");
	auto constexpr FWeaponGunAnim_CharacterGripBlendspace_Offset = offsetof(FWeaponGunAnim, CharacterGripBlendspace);
	static_assert(FWeaponGunAnim_CharacterGripBlendspace_Offset == 0x100, "FWeaponGunAnim::CharacterGripBlendspace offset is not 100");
	auto constexpr FWeaponGunAnim_ShotCameraShakeIronsight_Offset = offsetof(FWeaponGunAnim, ShotCameraShakeIronsight);
	static_assert(FWeaponGunAnim_ShotCameraShakeIronsight_Offset == 0x110, "FWeaponGunAnim::ShotCameraShakeIronsight offset is not 110");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
