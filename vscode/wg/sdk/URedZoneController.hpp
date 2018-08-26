#pragma once
#include "UModeController.hpp"
#include "ERedZoneGenerateType.hpp"
#include "FVector2D.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) URedZoneController // Size: 0x5F0
	: public UModeController // Size: 0x520
{
private:
	typedef URedZoneController t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1933); // id32("Class TslGame.RedZoneController")
		return ptr;
	}
//	ExternalPtr<struct UClass> BombTemplateClass; /* Ofs: 0x518 Size: 0x8 - ClassProperty TslGame.RedZoneController.BombTemplateClass */
	TEnumAsByte<enum ERedZoneGenerateType> RedZoneGenerateType; /* Ofs: 0x520 Size: 0x1 - EnumProperty TslGame.RedZoneController.RedZoneGenerateType */
	uint8_t UnknownData521[0x3];
	float StartDelay; /* Ofs: 0x524 Size: 0x4 - FloatProperty TslGame.RedZoneController.StartDelay */
	FVector2D NextCreateRedZoneInterval; /* Ofs: 0x528 Size: 0x8 - StructProperty TslGame.RedZoneController.NextCreateRedZoneInterval */
	float BombingDelay; /* Ofs: 0x530 Size: 0x4 - FloatProperty TslGame.RedZoneController.BombingDelay */
	float OuterRadius; /* Ofs: 0x534 Size: 0x4 - FloatProperty TslGame.RedZoneController.OuterRadius */
	FVector2D LimitExceptExplosionRadius; /* Ofs: 0x538 Size: 0x8 - StructProperty TslGame.RedZoneController.LimitExceptExplosionRadius */
	float ExceptExplosionRadius; /* Ofs: 0x540 Size: 0x4 - FloatProperty TslGame.RedZoneController.ExceptExplosionRadius */
	float BombProjectileDelayTime; /* Ofs: 0x544 Size: 0x4 - FloatProperty TslGame.RedZoneController.BombProjectileDelayTime */
	float RedZoneDuration; /* Ofs: 0x548 Size: 0x4 - FloatProperty TslGame.RedZoneController.RedZoneDuration */
	FVector2D BombingInterval; /* Ofs: 0x54C Size: 0x8 - StructProperty TslGame.RedZoneController.BombingInterval */
	float RedZoneLifeTime; /* Ofs: 0x554 Size: 0x4 - FloatProperty TslGame.RedZoneController.RedZoneLifeTime */
	float ReyStartHeight; /* Ofs: 0x558 Size: 0x4 - FloatProperty TslGame.RedZoneController.ReyStartHeight */
	float RedZoneRadiusOffsetRate; /* Ofs: 0x55C Size: 0x4 - FloatProperty TslGame.RedZoneController.RedZoneRadiusOffsetRate */
	FText RedZoneStartText; /* Ofs: 0x560 Size: 0x18 - TextProperty TslGame.RedZoneController.RedZoneStartText */
	int32_t RedZoneProjectileCount; /* Ofs: 0x578 Size: 0x4 - IntProperty TslGame.RedZoneController.RedZoneProjectileCount */
	uint8_t boolField57C;
	uint8_t UnknownData57D[0x3];
	float RayCheckAroundLength; /* Ofs: 0x580 Size: 0x4 - FloatProperty TslGame.RedZoneController.RayCheckAroundLength */
	uint8_t boolField584;
	uint8_t UnknownData585[0x3];
	ExternalPtr<struct UCurveFloat> RedZoneSizeRateCurve; /* Ofs: 0x588 Size: 0x8 - ObjectProperty TslGame.RedZoneController.RedZoneSizeRateCurve */
	ExternalPtr<struct UCurveFloat> BombingDelayRateCurve; /* Ofs: 0x590 Size: 0x8 - ObjectProperty TslGame.RedZoneController.BombingDelayRateCurve */
	ExternalPtr<struct UCurveFloat> BombingIntervalRateCurve; /* Ofs: 0x598 Size: 0x8 - ObjectProperty TslGame.RedZoneController.BombingIntervalRateCurve */
	ExternalPtr<struct UCurveFloat> ProjectileCountCurve; /* Ofs: 0x5A0 Size: 0x8 - ObjectProperty TslGame.RedZoneController.ProjectileCountCurve */
	ExternalPtr<struct UCurveFloat> RedZoneDurationRateCurve; /* Ofs: 0x5A8 Size: 0x8 - ObjectProperty TslGame.RedZoneController.RedZoneDurationRateCurve */
	ExternalPtr<struct UClass> BeginServerPaticleClass; /* Ofs: 0x5B0 Size: 0x8 - ClassProperty TslGame.RedZoneController.BeginServerPaticleClass */
	ExternalPtr<struct UTslServerParticle> BeginServerPaticle; /* Ofs: 0x5B8 Size: 0x8 - ObjectProperty TslGame.RedZoneController.BeginServerPaticle */
	float BeginSoundDelay; /* Ofs: 0x5C0 Size: 0x4 - FloatProperty TslGame.RedZoneController.BeginSoundDelay */
	uint8_t UnknownData5C4[0x14];
	TArray<ExternalPtr<struct UTslPhysicsVolume>> OceanPhysicsVolume; /* Ofs: 0x5D8 Size: 0x10 - ArrayProperty TslGame.RedZoneController.OceanPhysicsVolume */
	uint8_t UnknownData5E8[0x8];


//	inline bool SetBombTemplateClass(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0x518, value); }
	inline bool SetRedZoneGenerateType(t_structHelper inst, TEnumAsByte<enum ERedZoneGenerateType> value) { inst.WriteOffset(0x520, value); }
	inline bool SetStartDelay(t_structHelper inst, float value) { inst.WriteOffset(0x524, value); }
	inline bool SetNextCreateRedZoneInterval(t_structHelper inst, FVector2D value) { inst.WriteOffset(0x528, value); }
	inline bool SetBombingDelay(t_structHelper inst, float value) { inst.WriteOffset(0x530, value); }
	inline bool SetOuterRadius(t_structHelper inst, float value) { inst.WriteOffset(0x534, value); }
	inline bool SetLimitExceptExplosionRadius(t_structHelper inst, FVector2D value) { inst.WriteOffset(0x538, value); }
	inline bool SetExceptExplosionRadius(t_structHelper inst, float value) { inst.WriteOffset(0x540, value); }
	inline bool SetBombProjectileDelayTime(t_structHelper inst, float value) { inst.WriteOffset(0x544, value); }
	inline bool SetRedZoneDuration(t_structHelper inst, float value) { inst.WriteOffset(0x548, value); }
	inline bool SetBombingInterval(t_structHelper inst, FVector2D value) { inst.WriteOffset(0x54C, value); }
	inline bool SetRedZoneLifeTime(t_structHelper inst, float value) { inst.WriteOffset(0x554, value); }
	inline bool SetReyStartHeight(t_structHelper inst, float value) { inst.WriteOffset(0x558, value); }
	inline bool SetRedZoneRadiusOffsetRate(t_structHelper inst, float value) { inst.WriteOffset(0x55C, value); }
	inline bool SetRedZoneStartText(t_structHelper inst, FText value) { inst.WriteOffset(0x560, value); }
	inline bool SetRedZoneProjectileCount(t_structHelper inst, int32_t value) { inst.WriteOffset(0x578, value); }
	inline bool bFGSquircularMapping()
	{
		return boolField57C& 0x1;
	}
	inline bool SetbFGSquircularMapping(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x57C, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetRayCheckAroundLength(t_structHelper inst, float value) { inst.WriteOffset(0x580, value); }
	inline bool bUseRedZoneSizeRate()
	{
		return boolField584& 0x1;
	}
	inline bool SetbUseRedZoneSizeRate(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x584, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetRedZoneSizeRateCurve(t_structHelper inst, ExternalPtr<struct UCurveFloat> value) { inst.WriteOffset(0x588, value); }
	inline bool SetBombingDelayRateCurve(t_structHelper inst, ExternalPtr<struct UCurveFloat> value) { inst.WriteOffset(0x590, value); }
	inline bool SetBombingIntervalRateCurve(t_structHelper inst, ExternalPtr<struct UCurveFloat> value) { inst.WriteOffset(0x598, value); }
	inline bool SetProjectileCountCurve(t_structHelper inst, ExternalPtr<struct UCurveFloat> value) { inst.WriteOffset(0x5A0, value); }
	inline bool SetRedZoneDurationRateCurve(t_structHelper inst, ExternalPtr<struct UCurveFloat> value) { inst.WriteOffset(0x5A8, value); }
	inline bool SetBeginServerPaticleClass(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0x5B0, value); }
	inline bool SetBeginServerPaticle(t_structHelper inst, ExternalPtr<struct UTslServerParticle> value) { inst.WriteOffset(0x5B8, value); }
	inline bool SetBeginSoundDelay(t_structHelper inst, float value) { inst.WriteOffset(0x5C0, value); }
	inline bool SetOceanPhysicsVolume(t_structHelper inst, TArray<ExternalPtr<struct UTslPhysicsVolume>> value) { inst.WriteOffset(0x5D8, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofURedZoneController = sizeof(URedZoneController); // 1520
    static_assert(sizeof(URedZoneController) == 0x5F0, "Size of URedZoneController is not correct.");
//	auto constexpr URedZoneController_BombTemplateClass_Offset = offsetof(URedZoneController, BombTemplateClass);
//	static_assert(URedZoneController_BombTemplateClass_Offset == 0x518, "URedZoneController::BombTemplateClass offset is not 518");
	auto constexpr URedZoneController_RedZoneGenerateType_Offset = offsetof(URedZoneController, RedZoneGenerateType);
	static_assert(URedZoneController_RedZoneGenerateType_Offset == 0x520, "URedZoneController::RedZoneGenerateType offset is not 520");
	auto constexpr URedZoneController_StartDelay_Offset = offsetof(URedZoneController, StartDelay);
	static_assert(URedZoneController_StartDelay_Offset == 0x524, "URedZoneController::StartDelay offset is not 524");
	auto constexpr URedZoneController_NextCreateRedZoneInterval_Offset = offsetof(URedZoneController, NextCreateRedZoneInterval);
	static_assert(URedZoneController_NextCreateRedZoneInterval_Offset == 0x528, "URedZoneController::NextCreateRedZoneInterval offset is not 528");
	auto constexpr URedZoneController_BombingDelay_Offset = offsetof(URedZoneController, BombingDelay);
	static_assert(URedZoneController_BombingDelay_Offset == 0x530, "URedZoneController::BombingDelay offset is not 530");
	auto constexpr URedZoneController_OuterRadius_Offset = offsetof(URedZoneController, OuterRadius);
	static_assert(URedZoneController_OuterRadius_Offset == 0x534, "URedZoneController::OuterRadius offset is not 534");
	auto constexpr URedZoneController_LimitExceptExplosionRadius_Offset = offsetof(URedZoneController, LimitExceptExplosionRadius);
	static_assert(URedZoneController_LimitExceptExplosionRadius_Offset == 0x538, "URedZoneController::LimitExceptExplosionRadius offset is not 538");
	auto constexpr URedZoneController_ExceptExplosionRadius_Offset = offsetof(URedZoneController, ExceptExplosionRadius);
	static_assert(URedZoneController_ExceptExplosionRadius_Offset == 0x540, "URedZoneController::ExceptExplosionRadius offset is not 540");
	auto constexpr URedZoneController_BombProjectileDelayTime_Offset = offsetof(URedZoneController, BombProjectileDelayTime);
	static_assert(URedZoneController_BombProjectileDelayTime_Offset == 0x544, "URedZoneController::BombProjectileDelayTime offset is not 544");
	auto constexpr URedZoneController_RedZoneDuration_Offset = offsetof(URedZoneController, RedZoneDuration);
	static_assert(URedZoneController_RedZoneDuration_Offset == 0x548, "URedZoneController::RedZoneDuration offset is not 548");
	auto constexpr URedZoneController_BombingInterval_Offset = offsetof(URedZoneController, BombingInterval);
	static_assert(URedZoneController_BombingInterval_Offset == 0x54c, "URedZoneController::BombingInterval offset is not 54c");
	auto constexpr URedZoneController_RedZoneLifeTime_Offset = offsetof(URedZoneController, RedZoneLifeTime);
	static_assert(URedZoneController_RedZoneLifeTime_Offset == 0x554, "URedZoneController::RedZoneLifeTime offset is not 554");
	auto constexpr URedZoneController_ReyStartHeight_Offset = offsetof(URedZoneController, ReyStartHeight);
	static_assert(URedZoneController_ReyStartHeight_Offset == 0x558, "URedZoneController::ReyStartHeight offset is not 558");
	auto constexpr URedZoneController_RedZoneRadiusOffsetRate_Offset = offsetof(URedZoneController, RedZoneRadiusOffsetRate);
	static_assert(URedZoneController_RedZoneRadiusOffsetRate_Offset == 0x55c, "URedZoneController::RedZoneRadiusOffsetRate offset is not 55c");
	auto constexpr URedZoneController_RedZoneStartText_Offset = offsetof(URedZoneController, RedZoneStartText);
	static_assert(URedZoneController_RedZoneStartText_Offset == 0x560, "URedZoneController::RedZoneStartText offset is not 560");
	auto constexpr URedZoneController_RedZoneProjectileCount_Offset = offsetof(URedZoneController, RedZoneProjectileCount);
	static_assert(URedZoneController_RedZoneProjectileCount_Offset == 0x578, "URedZoneController::RedZoneProjectileCount offset is not 578");
	auto constexpr URedZoneController_boolField57C_Offset = offsetof(URedZoneController, boolField57C);
	static_assert(URedZoneController_boolField57C_Offset == 0x57c, "URedZoneController::boolField57C offset is not 57c");
	auto constexpr URedZoneController_RayCheckAroundLength_Offset = offsetof(URedZoneController, RayCheckAroundLength);
	static_assert(URedZoneController_RayCheckAroundLength_Offset == 0x580, "URedZoneController::RayCheckAroundLength offset is not 580");
	auto constexpr URedZoneController_boolField584_Offset = offsetof(URedZoneController, boolField584);
	static_assert(URedZoneController_boolField584_Offset == 0x584, "URedZoneController::boolField584 offset is not 584");
	auto constexpr URedZoneController_RedZoneSizeRateCurve_Offset = offsetof(URedZoneController, RedZoneSizeRateCurve);
	static_assert(URedZoneController_RedZoneSizeRateCurve_Offset == 0x588, "URedZoneController::RedZoneSizeRateCurve offset is not 588");
	auto constexpr URedZoneController_BombingDelayRateCurve_Offset = offsetof(URedZoneController, BombingDelayRateCurve);
	static_assert(URedZoneController_BombingDelayRateCurve_Offset == 0x590, "URedZoneController::BombingDelayRateCurve offset is not 590");
	auto constexpr URedZoneController_BombingIntervalRateCurve_Offset = offsetof(URedZoneController, BombingIntervalRateCurve);
	static_assert(URedZoneController_BombingIntervalRateCurve_Offset == 0x598, "URedZoneController::BombingIntervalRateCurve offset is not 598");
	auto constexpr URedZoneController_ProjectileCountCurve_Offset = offsetof(URedZoneController, ProjectileCountCurve);
	static_assert(URedZoneController_ProjectileCountCurve_Offset == 0x5a0, "URedZoneController::ProjectileCountCurve offset is not 5a0");
	auto constexpr URedZoneController_RedZoneDurationRateCurve_Offset = offsetof(URedZoneController, RedZoneDurationRateCurve);
	static_assert(URedZoneController_RedZoneDurationRateCurve_Offset == 0x5a8, "URedZoneController::RedZoneDurationRateCurve offset is not 5a8");
	auto constexpr URedZoneController_BeginServerPaticleClass_Offset = offsetof(URedZoneController, BeginServerPaticleClass);
	static_assert(URedZoneController_BeginServerPaticleClass_Offset == 0x5b0, "URedZoneController::BeginServerPaticleClass offset is not 5b0");
	auto constexpr URedZoneController_BeginServerPaticle_Offset = offsetof(URedZoneController, BeginServerPaticle);
	static_assert(URedZoneController_BeginServerPaticle_Offset == 0x5b8, "URedZoneController::BeginServerPaticle offset is not 5b8");
	auto constexpr URedZoneController_BeginSoundDelay_Offset = offsetof(URedZoneController, BeginSoundDelay);
	static_assert(URedZoneController_BeginSoundDelay_Offset == 0x5c0, "URedZoneController::BeginSoundDelay offset is not 5c0");
	auto constexpr URedZoneController_OceanPhysicsVolume_Offset = offsetof(URedZoneController, OceanPhysicsVolume);
	static_assert(URedZoneController_OceanPhysicsVolume_Offset == 0x5d8, "URedZoneController::OceanPhysicsVolume offset is not 5d8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
