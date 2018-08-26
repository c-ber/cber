#pragma once
#include "EProjectileExplosionStartType.hpp"
#include "FThrowableAnim.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FThrowableWeaponData // Size: 0xA0
{
public:
    ExternalPtr<struct UClass> ProjectileClass; /* Ofs: 0x0 Size: 0x8 ClassProperty TslGame.ThrowableWeaponData.ProjectileClass */
    FName CookingSocketName; /* Ofs: 0x8 Size: 0x8 NameProperty TslGame.ThrowableWeaponData.CookingSocketName */
    ExternalPtr<struct UClass> CookingEffectClass; /* Ofs: 0x10 Size: 0x8 ClassProperty TslGame.ThrowableWeaponData.CookingEffectClass */
    ExternalPtr<struct UClass> Ring; /* Ofs: 0x18 Size: 0x8 ClassProperty TslGame.ThrowableWeaponData.Ring */
    FName RingAttachSocket; /* Ofs: 0x20 Size: 0x8 NameProperty TslGame.ThrowableWeaponData.RingAttachSocket */
    TEnumAsByte<enum EProjectileExplosionStartType> ExplosionStartType; /* Ofs: 0x28 Size: 0x1 EnumProperty TslGame.ThrowableWeaponData.ExplosionStartType */
    uint8_t UnknownData29[0x3];
    float ExplosionDelay; /* Ofs: 0x2C Size: 0x4 FloatProperty TslGame.ThrowableWeaponData.ExplosionDelay */
    float FireDelay; /* Ofs: 0x30 Size: 0x4 FloatProperty TslGame.ThrowableWeaponData.FireDelay */
    float ActivationTimeLimit; /* Ofs: 0x34 Size: 0x4 FloatProperty TslGame.ThrowableWeaponData.ActivationTimeLimit */
    FThrowableAnim StandAnim; /* Ofs: 0x38 Size: 0x18 StructProperty TslGame.ThrowableWeaponData.StandAnim */
    FThrowableAnim CrouchAnim; /* Ofs: 0x50 Size: 0x18 StructProperty TslGame.ThrowableWeaponData.CrouchAnim */
    FThrowableAnim ProneAnim; /* Ofs: 0x68 Size: 0x18 StructProperty TslGame.ThrowableWeaponData.ProneAnim */
    ExternalPtr<struct UCurveFloat> SpeedCurve; /* Ofs: 0x80 Size: 0x8 ObjectProperty TslGame.ThrowableWeaponData.SpeedCurve */
    ExternalPtr<struct UCurveFloat> PitchCurve; /* Ofs: 0x88 Size: 0x8 ObjectProperty TslGame.ThrowableWeaponData.PitchCurve */
    float ThrowTime; /* Ofs: 0x90 Size: 0x4 FloatProperty TslGame.ThrowableWeaponData.ThrowTime */
    float ThrowCooldownDuration; /* Ofs: 0x94 Size: 0x4 FloatProperty TslGame.ThrowableWeaponData.ThrowCooldownDuration */
    bool bCanBeCooked; /* Ofs: 0x98 Size: 0x1 BitMask: 01 BoolProperty TslGame.ThrowableWeaponData.bCanBeCooked */
    uint8_t UnknownData99[0x7];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFThrowableWeaponData = sizeof(FThrowableWeaponData); // 160
    static_assert(sizeof(FThrowableWeaponData) == 0xA0, "Size of FThrowableWeaponData is not correct.");
	auto constexpr FThrowableWeaponData_ProjectileClass_Offset = offsetof(FThrowableWeaponData, ProjectileClass);
	static_assert(FThrowableWeaponData_ProjectileClass_Offset == 0x0, "FThrowableWeaponData::ProjectileClass offset is not 0");
	auto constexpr FThrowableWeaponData_CookingSocketName_Offset = offsetof(FThrowableWeaponData, CookingSocketName);
	static_assert(FThrowableWeaponData_CookingSocketName_Offset == 0x8, "FThrowableWeaponData::CookingSocketName offset is not 8");
	auto constexpr FThrowableWeaponData_CookingEffectClass_Offset = offsetof(FThrowableWeaponData, CookingEffectClass);
	static_assert(FThrowableWeaponData_CookingEffectClass_Offset == 0x10, "FThrowableWeaponData::CookingEffectClass offset is not 10");
	auto constexpr FThrowableWeaponData_Ring_Offset = offsetof(FThrowableWeaponData, Ring);
	static_assert(FThrowableWeaponData_Ring_Offset == 0x18, "FThrowableWeaponData::Ring offset is not 18");
	auto constexpr FThrowableWeaponData_RingAttachSocket_Offset = offsetof(FThrowableWeaponData, RingAttachSocket);
	static_assert(FThrowableWeaponData_RingAttachSocket_Offset == 0x20, "FThrowableWeaponData::RingAttachSocket offset is not 20");
	auto constexpr FThrowableWeaponData_ExplosionStartType_Offset = offsetof(FThrowableWeaponData, ExplosionStartType);
	static_assert(FThrowableWeaponData_ExplosionStartType_Offset == 0x28, "FThrowableWeaponData::ExplosionStartType offset is not 28");
	auto constexpr FThrowableWeaponData_ExplosionDelay_Offset = offsetof(FThrowableWeaponData, ExplosionDelay);
	static_assert(FThrowableWeaponData_ExplosionDelay_Offset == 0x2c, "FThrowableWeaponData::ExplosionDelay offset is not 2c");
	auto constexpr FThrowableWeaponData_FireDelay_Offset = offsetof(FThrowableWeaponData, FireDelay);
	static_assert(FThrowableWeaponData_FireDelay_Offset == 0x30, "FThrowableWeaponData::FireDelay offset is not 30");
	auto constexpr FThrowableWeaponData_ActivationTimeLimit_Offset = offsetof(FThrowableWeaponData, ActivationTimeLimit);
	static_assert(FThrowableWeaponData_ActivationTimeLimit_Offset == 0x34, "FThrowableWeaponData::ActivationTimeLimit offset is not 34");
	auto constexpr FThrowableWeaponData_StandAnim_Offset = offsetof(FThrowableWeaponData, StandAnim);
	static_assert(FThrowableWeaponData_StandAnim_Offset == 0x38, "FThrowableWeaponData::StandAnim offset is not 38");
	auto constexpr FThrowableWeaponData_CrouchAnim_Offset = offsetof(FThrowableWeaponData, CrouchAnim);
	static_assert(FThrowableWeaponData_CrouchAnim_Offset == 0x50, "FThrowableWeaponData::CrouchAnim offset is not 50");
	auto constexpr FThrowableWeaponData_ProneAnim_Offset = offsetof(FThrowableWeaponData, ProneAnim);
	static_assert(FThrowableWeaponData_ProneAnim_Offset == 0x68, "FThrowableWeaponData::ProneAnim offset is not 68");
	auto constexpr FThrowableWeaponData_SpeedCurve_Offset = offsetof(FThrowableWeaponData, SpeedCurve);
	static_assert(FThrowableWeaponData_SpeedCurve_Offset == 0x80, "FThrowableWeaponData::SpeedCurve offset is not 80");
	auto constexpr FThrowableWeaponData_PitchCurve_Offset = offsetof(FThrowableWeaponData, PitchCurve);
	static_assert(FThrowableWeaponData_PitchCurve_Offset == 0x88, "FThrowableWeaponData::PitchCurve offset is not 88");
	auto constexpr FThrowableWeaponData_ThrowTime_Offset = offsetof(FThrowableWeaponData, ThrowTime);
	static_assert(FThrowableWeaponData_ThrowTime_Offset == 0x90, "FThrowableWeaponData::ThrowTime offset is not 90");
	auto constexpr FThrowableWeaponData_ThrowCooldownDuration_Offset = offsetof(FThrowableWeaponData, ThrowCooldownDuration);
	static_assert(FThrowableWeaponData_ThrowCooldownDuration_Offset == 0x94, "FThrowableWeaponData::ThrowCooldownDuration offset is not 94");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
