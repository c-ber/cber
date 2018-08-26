#pragma once
#include "UActorComponent.hpp"
#include "FVehicleEffectInfo.hpp"
#include "ESurfaceEffect.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTslVehicleEffectComponent // Size: 0x5A0
	: public UActorComponent // Size: 0x1F0
{
private:
	typedef UTslVehicleEffectComponent t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1607); // id32("Class TslGame.TslVehicleEffectComponent")
		return ptr;
	}
	ExternalPtr<struct UMeshComponent> MeshComponent; /* Ofs: 0x1F0 Size: 0x8 - ObjectProperty TslGame.TslVehicleEffectComponent.MeshComponent */
	ExternalPtr<struct UAkComponent> EngineSoundComponent; /* Ofs: 0x1F8 Size: 0x8 - ObjectProperty TslGame.TslVehicleEffectComponent.EngineSoundComponent */
	FVehicleEffectInfo VehicleEffectInfo; /* Ofs: 0x200 Size: 0xF0 - StructProperty TslGame.TslVehicleEffectComponent.VehicleEffectInfo */
	ExternalPtr<struct UTslParticle> MufflerEffect; /* Ofs: 0x2F0 Size: 0x8 - ObjectProperty TslGame.TslVehicleEffectComponent.MufflerEffect */
	ExternalPtr<struct UTslParticle> Muffler2Effect; /* Ofs: 0x2F8 Size: 0x8 - ObjectProperty TslGame.TslVehicleEffectComponent.Muffler2Effect */
	ExternalPtr<struct UTslParticle> BoostEffect; /* Ofs: 0x300 Size: 0x8 - ObjectProperty TslGame.TslVehicleEffectComponent.BoostEffect */
	ExternalPtr<struct UTslParticle> Boost2Effect; /* Ofs: 0x308 Size: 0x8 - ObjectProperty TslGame.TslVehicleEffectComponent.Boost2Effect */
	ExternalPtr<struct UTslParticle> DamagedEffect; /* Ofs: 0x310 Size: 0x8 - ObjectProperty TslGame.TslVehicleEffectComponent.DamagedEffect */
	ExternalPtr<struct UTslParticle> ExplosionEffect; /* Ofs: 0x318 Size: 0x8 - ObjectProperty TslGame.TslVehicleEffectComponent.ExplosionEffect */
	ExternalPtr<struct UTslParticle> FrontTrailEffect; /* Ofs: 0x320 Size: 0x8 - ObjectProperty TslGame.TslVehicleEffectComponent.FrontTrailEffect */
	ExternalPtr<struct UTslParticle> RearTrailEffect; /* Ofs: 0x328 Size: 0x8 - ObjectProperty TslGame.TslVehicleEffectComponent.RearTrailEffect */
	ExternalPtr<struct UTslParticle> ThrusterEffect; /* Ofs: 0x330 Size: 0x8 - ObjectProperty TslGame.TslVehicleEffectComponent.ThrusterEffect */
	ExternalPtr<struct UTslParticle> Thruster2Effect; /* Ofs: 0x338 Size: 0x8 - ObjectProperty TslGame.TslVehicleEffectComponent.Thruster2Effect */
	ExternalPtr<struct UTslParticle> FrontFoamLeftEffect; /* Ofs: 0x340 Size: 0x8 - ObjectProperty TslGame.TslVehicleEffectComponent.FrontFoamLeftEffect */
	ExternalPtr<struct UTslParticle> FrontFoamRightEffect; /* Ofs: 0x348 Size: 0x8 - ObjectProperty TslGame.TslVehicleEffectComponent.FrontFoamRightEffect */
	uint8_t UnknownData350[0x1C];
	float TrailSpeedThreshold; /* Ofs: 0x36C Size: 0x4 - FloatProperty TslGame.TslVehicleEffectComponent.TrailSpeedThreshold */
	float FrontFoamSpawnThreshold; /* Ofs: 0x370 Size: 0x4 - FloatProperty TslGame.TslVehicleEffectComponent.FrontFoamSpawnThreshold */
	uint8_t boolField374;
	uint8_t UnknownData375[0x13];
	uint8_t boolField388;
	uint8_t UnknownData389[0x7];
	ExternalPtr<struct UCurveFloat> Curve_EngineAudio; /* Ofs: 0x390 Size: 0x8 - ObjectProperty TslGame.TslVehicleEffectComponent.Curve_EngineAudio */
	uint8_t boolField398;
	uint8_t UnknownData399[0x7];
	TMap<ESurfaceEffect, struct UVehicleSurfaceAudioData> SurfaceAudioMap; /* Ofs: 0x3A0 Size: 0x50 - MapProperty TslGame.TslVehicleEffectComponent.SurfaceAudioMap */
	uint8_t boolField3F0;
	uint8_t UnknownData3F1[0x7];
	TArray<int32_t> MeasuredWheelIndices; /* Ofs: 0x3F8 Size: 0x10 - ArrayProperty TslGame.TslVehicleEffectComponent.MeasuredWheelIndices */
	TArray<int32_t> MeasuredWheelIndicesSlip; /* Ofs: 0x408 Size: 0x10 - ArrayProperty TslGame.TslVehicleEffectComponent.MeasuredWheelIndicesSlip */
	TArray<int32_t> MeasuredWheelIndicesSpin; /* Ofs: 0x418 Size: 0x10 - ArrayProperty TslGame.TslVehicleEffectComponent.MeasuredWheelIndicesSpin */
	TArray<int32_t> MeasuredWheelIndicesBrake; /* Ofs: 0x428 Size: 0x10 - ArrayProperty TslGame.TslVehicleEffectComponent.MeasuredWheelIndicesBrake */
	float SuspenionOffsetForContact; /* Ofs: 0x438 Size: 0x4 - FloatProperty TslGame.TslVehicleEffectComponent.SuspenionOffsetForContact */
	float SurfaceActivationValue; /* Ofs: 0x43C Size: 0x4 - FloatProperty TslGame.TslVehicleEffectComponent.SurfaceActivationValue */
	float SurfaceDeactivationValue; /* Ofs: 0x440 Size: 0x4 - FloatProperty TslGame.TslVehicleEffectComponent.SurfaceDeactivationValue */
	float DT_Multiplier; /* Ofs: 0x444 Size: 0x4 - FloatProperty TslGame.TslVehicleEffectComponent.DT_Multiplier */
	float MinVelocityForSurfaceCheck; /* Ofs: 0x448 Size: 0x4 - FloatProperty TslGame.TslVehicleEffectComponent.MinVelocityForSurfaceCheck */
	float MinRotationSpeedForSurfaceCheck; /* Ofs: 0x44C Size: 0x4 - FloatProperty TslGame.TslVehicleEffectComponent.MinRotationSpeedForSurfaceCheck */
	float MinSlip; /* Ofs: 0x450 Size: 0x4 - FloatProperty TslGame.TslVehicleEffectComponent.MinSlip */
	float MinSpin; /* Ofs: 0x454 Size: 0x4 - FloatProperty TslGame.TslVehicleEffectComponent.MinSpin */
	float MinVelocityForBreak; /* Ofs: 0x458 Size: 0x4 - FloatProperty TslGame.TslVehicleEffectComponent.MinVelocityForBreak */
	float BrakeNoDriverMultiplier; /* Ofs: 0x45C Size: 0x4 - FloatProperty TslGame.TslVehicleEffectComponent.BrakeNoDriverMultiplier */
	int32_t VelocityInterpSpeed; /* Ofs: 0x460 Size: 0x4 - IntProperty TslGame.TslVehicleEffectComponent.VelocityInterpSpeed */
	int32_t SlipInterpSpeed; /* Ofs: 0x464 Size: 0x4 - IntProperty TslGame.TslVehicleEffectComponent.SlipInterpSpeed */
	int32_t SpinInterpSpeed; /* Ofs: 0x468 Size: 0x4 - IntProperty TslGame.TslVehicleEffectComponent.SpinInterpSpeed */
	int32_t BreakInterpSpeed; /* Ofs: 0x46C Size: 0x4 - IntProperty TslGame.TslVehicleEffectComponent.BreakInterpSpeed */
	uint8_t boolField470;
	uint8_t UnknownData471[0x3];
	float AngularVelocityCoefficient; /* Ofs: 0x474 Size: 0x4 - FloatProperty TslGame.TslVehicleEffectComponent.AngularVelocityCoefficient */
	float LateralVelocityCoeffictient; /* Ofs: 0x478 Size: 0x4 - FloatProperty TslGame.TslVehicleEffectComponent.LateralVelocityCoeffictient */
	float LateralVelocityClamp; /* Ofs: 0x47C Size: 0x4 - FloatProperty TslGame.TslVehicleEffectComponent.LateralVelocityClamp */
	uint8_t boolField480;
	uint8_t boolField481;
	uint8_t boolField482;
	uint8_t boolField483;
	float ReverseThrottleScalar; /* Ofs: 0x484 Size: 0x4 - FloatProperty TslGame.TslVehicleEffectComponent.ReverseThrottleScalar */
	ExternalPtr<struct UAkAudioEvent> GearUpSound_Start; /* Ofs: 0x488 Size: 0x8 - ObjectProperty TslGame.TslVehicleEffectComponent.GearUpSound_Start */
	ExternalPtr<struct UAkAudioEvent> GearDownSound_Start; /* Ofs: 0x490 Size: 0x8 - ObjectProperty TslGame.TslVehicleEffectComponent.GearDownSound_Start */
	ExternalPtr<struct UAkAudioEvent> GearUpSound_End; /* Ofs: 0x498 Size: 0x8 - ObjectProperty TslGame.TslVehicleEffectComponent.GearUpSound_End */
	ExternalPtr<struct UAkAudioEvent> GearDownSound_End; /* Ofs: 0x4A0 Size: 0x8 - ObjectProperty TslGame.TslVehicleEffectComponent.GearDownSound_End */
	ExternalPtr<struct UAkAudioEvent> GearReverseSound; /* Ofs: 0x4A8 Size: 0x8 - ObjectProperty TslGame.TslVehicleEffectComponent.GearReverseSound */
	uint8_t UnknownData4B0[0x90];
	TMap<int32_t, struct UMaterialInterface> DestroyedMaterialMap; /* Ofs: 0x540 Size: 0x50 - MapProperty TslGame.TslVehicleEffectComponent.DestroyedMaterialMap */
	float ApplyDestroyedMaterialDelay; /* Ofs: 0x590 Size: 0x4 - FloatProperty TslGame.TslVehicleEffectComponent.ApplyDestroyedMaterialDelay */
	uint8_t UnknownData594[0xC];


	inline bool SetMeshComponent(t_structHelper inst, ExternalPtr<struct UMeshComponent> value) { inst.WriteOffset(0x1F0, value); }
	inline bool SetEngineSoundComponent(t_structHelper inst, ExternalPtr<struct UAkComponent> value) { inst.WriteOffset(0x1F8, value); }
	inline bool SetVehicleEffectInfo(t_structHelper inst, FVehicleEffectInfo value) { inst.WriteOffset(0x200, value); }
	inline bool SetMufflerEffect(t_structHelper inst, ExternalPtr<struct UTslParticle> value) { inst.WriteOffset(0x2F0, value); }
	inline bool SetMuffler2Effect(t_structHelper inst, ExternalPtr<struct UTslParticle> value) { inst.WriteOffset(0x2F8, value); }
	inline bool SetBoostEffect(t_structHelper inst, ExternalPtr<struct UTslParticle> value) { inst.WriteOffset(0x300, value); }
	inline bool SetBoost2Effect(t_structHelper inst, ExternalPtr<struct UTslParticle> value) { inst.WriteOffset(0x308, value); }
	inline bool SetDamagedEffect(t_structHelper inst, ExternalPtr<struct UTslParticle> value) { inst.WriteOffset(0x310, value); }
	inline bool SetExplosionEffect(t_structHelper inst, ExternalPtr<struct UTslParticle> value) { inst.WriteOffset(0x318, value); }
	inline bool SetFrontTrailEffect(t_structHelper inst, ExternalPtr<struct UTslParticle> value) { inst.WriteOffset(0x320, value); }
	inline bool SetRearTrailEffect(t_structHelper inst, ExternalPtr<struct UTslParticle> value) { inst.WriteOffset(0x328, value); }
	inline bool SetThrusterEffect(t_structHelper inst, ExternalPtr<struct UTslParticle> value) { inst.WriteOffset(0x330, value); }
	inline bool SetThruster2Effect(t_structHelper inst, ExternalPtr<struct UTslParticle> value) { inst.WriteOffset(0x338, value); }
	inline bool SetFrontFoamLeftEffect(t_structHelper inst, ExternalPtr<struct UTslParticle> value) { inst.WriteOffset(0x340, value); }
	inline bool SetFrontFoamRightEffect(t_structHelper inst, ExternalPtr<struct UTslParticle> value) { inst.WriteOffset(0x348, value); }
	inline bool SetTrailSpeedThreshold(t_structHelper inst, float value) { inst.WriteOffset(0x36C, value); }
	inline bool SetFrontFoamSpawnThreshold(t_structHelper inst, float value) { inst.WriteOffset(0x370, value); }
	inline bool bRPMOverride()
	{
		return boolField374& 0x1;
	}
	inline bool SetbRPMOverride(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x374, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bUseNewChassisAudio()
	{
		return boolField388& 0x1;
	}
	inline bool SetbUseNewChassisAudio(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x388, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetCurve_EngineAudio(t_structHelper inst, ExternalPtr<struct UCurveFloat> value) { inst.WriteOffset(0x390, value); }
	inline bool bUseDopplerEffect()
	{
		return boolField398& 0x1;
	}
	inline bool SetbUseDopplerEffect(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x398, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetSurfaceAudioMap(t_structHelper inst, TMap<ESurfaceEffect, struct UVehicleSurfaceAudioData> value) { inst.WriteOffset(0x3A0, value); }
	inline bool bUseNewSurfaceAudio()
	{
		return boolField3F0& 0x1;
	}
	inline bool SetbUseNewSurfaceAudio(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x3F0, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetMeasuredWheelIndices(t_structHelper inst, TArray<int32_t> value) { inst.WriteOffset(0x3F8, value); }
	inline bool SetMeasuredWheelIndicesSlip(t_structHelper inst, TArray<int32_t> value) { inst.WriteOffset(0x408, value); }
	inline bool SetMeasuredWheelIndicesSpin(t_structHelper inst, TArray<int32_t> value) { inst.WriteOffset(0x418, value); }
	inline bool SetMeasuredWheelIndicesBrake(t_structHelper inst, TArray<int32_t> value) { inst.WriteOffset(0x428, value); }
	inline bool SetSuspenionOffsetForContact(t_structHelper inst, float value) { inst.WriteOffset(0x438, value); }
	inline bool SetSurfaceActivationValue(t_structHelper inst, float value) { inst.WriteOffset(0x43C, value); }
	inline bool SetSurfaceDeactivationValue(t_structHelper inst, float value) { inst.WriteOffset(0x440, value); }
	inline bool SetDT_Multiplier(t_structHelper inst, float value) { inst.WriteOffset(0x444, value); }
	inline bool SetMinVelocityForSurfaceCheck(t_structHelper inst, float value) { inst.WriteOffset(0x448, value); }
	inline bool SetMinRotationSpeedForSurfaceCheck(t_structHelper inst, float value) { inst.WriteOffset(0x44C, value); }
	inline bool SetMinSlip(t_structHelper inst, float value) { inst.WriteOffset(0x450, value); }
	inline bool SetMinSpin(t_structHelper inst, float value) { inst.WriteOffset(0x454, value); }
	inline bool SetMinVelocityForBreak(t_structHelper inst, float value) { inst.WriteOffset(0x458, value); }
	inline bool SetBrakeNoDriverMultiplier(t_structHelper inst, float value) { inst.WriteOffset(0x45C, value); }
	inline bool SetVelocityInterpSpeed(t_structHelper inst, int32_t value) { inst.WriteOffset(0x460, value); }
	inline bool SetSlipInterpSpeed(t_structHelper inst, int32_t value) { inst.WriteOffset(0x464, value); }
	inline bool SetSpinInterpSpeed(t_structHelper inst, int32_t value) { inst.WriteOffset(0x468, value); }
	inline bool SetBreakInterpSpeed(t_structHelper inst, int32_t value) { inst.WriteOffset(0x46C, value); }
	inline bool bDebugVisualizedMeasuredWheels()
	{
		return boolField470& 0x1;
	}
	inline bool SetbDebugVisualizedMeasuredWheels(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x470, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetAngularVelocityCoefficient(t_structHelper inst, float value) { inst.WriteOffset(0x474, value); }
	inline bool SetLateralVelocityCoeffictient(t_structHelper inst, float value) { inst.WriteOffset(0x478, value); }
	inline bool SetLateralVelocityClamp(t_structHelper inst, float value) { inst.WriteOffset(0x47C, value); }
	inline bool bProcessShiftStart()
	{
		return boolField480& 0x1;
	}
	inline bool SetbProcessShiftStart(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x480, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bProcessShiftEnd()
	{
		return boolField481& 0x1;
	}
	inline bool SetbProcessShiftEnd(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x481, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bProcessReverse()
	{
		return boolField482& 0x1;
	}
	inline bool SetbProcessReverse(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x482, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bUseTargetGearForAudio()
	{
		return boolField483& 0x1;
	}
	inline bool SetbUseTargetGearForAudio(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x483, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetReverseThrottleScalar(t_structHelper inst, float value) { inst.WriteOffset(0x484, value); }
	inline bool SetGearUpSound_Start(t_structHelper inst, ExternalPtr<struct UAkAudioEvent> value) { inst.WriteOffset(0x488, value); }
	inline bool SetGearDownSound_Start(t_structHelper inst, ExternalPtr<struct UAkAudioEvent> value) { inst.WriteOffset(0x490, value); }
	inline bool SetGearUpSound_End(t_structHelper inst, ExternalPtr<struct UAkAudioEvent> value) { inst.WriteOffset(0x498, value); }
	inline bool SetGearDownSound_End(t_structHelper inst, ExternalPtr<struct UAkAudioEvent> value) { inst.WriteOffset(0x4A0, value); }
	inline bool SetGearReverseSound(t_structHelper inst, ExternalPtr<struct UAkAudioEvent> value) { inst.WriteOffset(0x4A8, value); }
	inline bool SetDestroyedMaterialMap(t_structHelper inst, TMap<int32_t, struct UMaterialInterface> value) { inst.WriteOffset(0x540, value); }
	inline bool SetApplyDestroyedMaterialDelay(t_structHelper inst, float value) { inst.WriteOffset(0x590, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTslVehicleEffectComponent = sizeof(UTslVehicleEffectComponent); // 1440
    static_assert(sizeof(UTslVehicleEffectComponent) == 0x5A0, "Size of UTslVehicleEffectComponent is not correct.");
	auto constexpr UTslVehicleEffectComponent_MeshComponent_Offset = offsetof(UTslVehicleEffectComponent, MeshComponent);
	static_assert(UTslVehicleEffectComponent_MeshComponent_Offset == 0x1f0, "UTslVehicleEffectComponent::MeshComponent offset is not 1f0");
	auto constexpr UTslVehicleEffectComponent_EngineSoundComponent_Offset = offsetof(UTslVehicleEffectComponent, EngineSoundComponent);
	static_assert(UTslVehicleEffectComponent_EngineSoundComponent_Offset == 0x1f8, "UTslVehicleEffectComponent::EngineSoundComponent offset is not 1f8");
	auto constexpr UTslVehicleEffectComponent_VehicleEffectInfo_Offset = offsetof(UTslVehicleEffectComponent, VehicleEffectInfo);
	static_assert(UTslVehicleEffectComponent_VehicleEffectInfo_Offset == 0x200, "UTslVehicleEffectComponent::VehicleEffectInfo offset is not 200");
	auto constexpr UTslVehicleEffectComponent_MufflerEffect_Offset = offsetof(UTslVehicleEffectComponent, MufflerEffect);
	static_assert(UTslVehicleEffectComponent_MufflerEffect_Offset == 0x2f0, "UTslVehicleEffectComponent::MufflerEffect offset is not 2f0");
	auto constexpr UTslVehicleEffectComponent_Muffler2Effect_Offset = offsetof(UTslVehicleEffectComponent, Muffler2Effect);
	static_assert(UTslVehicleEffectComponent_Muffler2Effect_Offset == 0x2f8, "UTslVehicleEffectComponent::Muffler2Effect offset is not 2f8");
	auto constexpr UTslVehicleEffectComponent_BoostEffect_Offset = offsetof(UTslVehicleEffectComponent, BoostEffect);
	static_assert(UTslVehicleEffectComponent_BoostEffect_Offset == 0x300, "UTslVehicleEffectComponent::BoostEffect offset is not 300");
	auto constexpr UTslVehicleEffectComponent_Boost2Effect_Offset = offsetof(UTslVehicleEffectComponent, Boost2Effect);
	static_assert(UTslVehicleEffectComponent_Boost2Effect_Offset == 0x308, "UTslVehicleEffectComponent::Boost2Effect offset is not 308");
	auto constexpr UTslVehicleEffectComponent_DamagedEffect_Offset = offsetof(UTslVehicleEffectComponent, DamagedEffect);
	static_assert(UTslVehicleEffectComponent_DamagedEffect_Offset == 0x310, "UTslVehicleEffectComponent::DamagedEffect offset is not 310");
	auto constexpr UTslVehicleEffectComponent_ExplosionEffect_Offset = offsetof(UTslVehicleEffectComponent, ExplosionEffect);
	static_assert(UTslVehicleEffectComponent_ExplosionEffect_Offset == 0x318, "UTslVehicleEffectComponent::ExplosionEffect offset is not 318");
	auto constexpr UTslVehicleEffectComponent_FrontTrailEffect_Offset = offsetof(UTslVehicleEffectComponent, FrontTrailEffect);
	static_assert(UTslVehicleEffectComponent_FrontTrailEffect_Offset == 0x320, "UTslVehicleEffectComponent::FrontTrailEffect offset is not 320");
	auto constexpr UTslVehicleEffectComponent_RearTrailEffect_Offset = offsetof(UTslVehicleEffectComponent, RearTrailEffect);
	static_assert(UTslVehicleEffectComponent_RearTrailEffect_Offset == 0x328, "UTslVehicleEffectComponent::RearTrailEffect offset is not 328");
	auto constexpr UTslVehicleEffectComponent_ThrusterEffect_Offset = offsetof(UTslVehicleEffectComponent, ThrusterEffect);
	static_assert(UTslVehicleEffectComponent_ThrusterEffect_Offset == 0x330, "UTslVehicleEffectComponent::ThrusterEffect offset is not 330");
	auto constexpr UTslVehicleEffectComponent_Thruster2Effect_Offset = offsetof(UTslVehicleEffectComponent, Thruster2Effect);
	static_assert(UTslVehicleEffectComponent_Thruster2Effect_Offset == 0x338, "UTslVehicleEffectComponent::Thruster2Effect offset is not 338");
	auto constexpr UTslVehicleEffectComponent_FrontFoamLeftEffect_Offset = offsetof(UTslVehicleEffectComponent, FrontFoamLeftEffect);
	static_assert(UTslVehicleEffectComponent_FrontFoamLeftEffect_Offset == 0x340, "UTslVehicleEffectComponent::FrontFoamLeftEffect offset is not 340");
	auto constexpr UTslVehicleEffectComponent_FrontFoamRightEffect_Offset = offsetof(UTslVehicleEffectComponent, FrontFoamRightEffect);
	static_assert(UTslVehicleEffectComponent_FrontFoamRightEffect_Offset == 0x348, "UTslVehicleEffectComponent::FrontFoamRightEffect offset is not 348");
	auto constexpr UTslVehicleEffectComponent_TrailSpeedThreshold_Offset = offsetof(UTslVehicleEffectComponent, TrailSpeedThreshold);
	static_assert(UTslVehicleEffectComponent_TrailSpeedThreshold_Offset == 0x36c, "UTslVehicleEffectComponent::TrailSpeedThreshold offset is not 36c");
	auto constexpr UTslVehicleEffectComponent_FrontFoamSpawnThreshold_Offset = offsetof(UTslVehicleEffectComponent, FrontFoamSpawnThreshold);
	static_assert(UTslVehicleEffectComponent_FrontFoamSpawnThreshold_Offset == 0x370, "UTslVehicleEffectComponent::FrontFoamSpawnThreshold offset is not 370");
	auto constexpr UTslVehicleEffectComponent_boolField374_Offset = offsetof(UTslVehicleEffectComponent, boolField374);
	static_assert(UTslVehicleEffectComponent_boolField374_Offset == 0x374, "UTslVehicleEffectComponent::boolField374 offset is not 374");
	auto constexpr UTslVehicleEffectComponent_boolField388_Offset = offsetof(UTslVehicleEffectComponent, boolField388);
	static_assert(UTslVehicleEffectComponent_boolField388_Offset == 0x388, "UTslVehicleEffectComponent::boolField388 offset is not 388");
	auto constexpr UTslVehicleEffectComponent_Curve_EngineAudio_Offset = offsetof(UTslVehicleEffectComponent, Curve_EngineAudio);
	static_assert(UTslVehicleEffectComponent_Curve_EngineAudio_Offset == 0x390, "UTslVehicleEffectComponent::Curve_EngineAudio offset is not 390");
	auto constexpr UTslVehicleEffectComponent_boolField398_Offset = offsetof(UTslVehicleEffectComponent, boolField398);
	static_assert(UTslVehicleEffectComponent_boolField398_Offset == 0x398, "UTslVehicleEffectComponent::boolField398 offset is not 398");
	auto constexpr UTslVehicleEffectComponent_SurfaceAudioMap_Offset = offsetof(UTslVehicleEffectComponent, SurfaceAudioMap);
	static_assert(UTslVehicleEffectComponent_SurfaceAudioMap_Offset == 0x3a0, "UTslVehicleEffectComponent::SurfaceAudioMap offset is not 3a0");
	auto constexpr UTslVehicleEffectComponent_boolField3F0_Offset = offsetof(UTslVehicleEffectComponent, boolField3F0);
	static_assert(UTslVehicleEffectComponent_boolField3F0_Offset == 0x3f0, "UTslVehicleEffectComponent::boolField3F0 offset is not 3f0");
	auto constexpr UTslVehicleEffectComponent_MeasuredWheelIndices_Offset = offsetof(UTslVehicleEffectComponent, MeasuredWheelIndices);
	static_assert(UTslVehicleEffectComponent_MeasuredWheelIndices_Offset == 0x3f8, "UTslVehicleEffectComponent::MeasuredWheelIndices offset is not 3f8");
	auto constexpr UTslVehicleEffectComponent_MeasuredWheelIndicesSlip_Offset = offsetof(UTslVehicleEffectComponent, MeasuredWheelIndicesSlip);
	static_assert(UTslVehicleEffectComponent_MeasuredWheelIndicesSlip_Offset == 0x408, "UTslVehicleEffectComponent::MeasuredWheelIndicesSlip offset is not 408");
	auto constexpr UTslVehicleEffectComponent_MeasuredWheelIndicesSpin_Offset = offsetof(UTslVehicleEffectComponent, MeasuredWheelIndicesSpin);
	static_assert(UTslVehicleEffectComponent_MeasuredWheelIndicesSpin_Offset == 0x418, "UTslVehicleEffectComponent::MeasuredWheelIndicesSpin offset is not 418");
	auto constexpr UTslVehicleEffectComponent_MeasuredWheelIndicesBrake_Offset = offsetof(UTslVehicleEffectComponent, MeasuredWheelIndicesBrake);
	static_assert(UTslVehicleEffectComponent_MeasuredWheelIndicesBrake_Offset == 0x428, "UTslVehicleEffectComponent::MeasuredWheelIndicesBrake offset is not 428");
	auto constexpr UTslVehicleEffectComponent_SuspenionOffsetForContact_Offset = offsetof(UTslVehicleEffectComponent, SuspenionOffsetForContact);
	static_assert(UTslVehicleEffectComponent_SuspenionOffsetForContact_Offset == 0x438, "UTslVehicleEffectComponent::SuspenionOffsetForContact offset is not 438");
	auto constexpr UTslVehicleEffectComponent_SurfaceActivationValue_Offset = offsetof(UTslVehicleEffectComponent, SurfaceActivationValue);
	static_assert(UTslVehicleEffectComponent_SurfaceActivationValue_Offset == 0x43c, "UTslVehicleEffectComponent::SurfaceActivationValue offset is not 43c");
	auto constexpr UTslVehicleEffectComponent_SurfaceDeactivationValue_Offset = offsetof(UTslVehicleEffectComponent, SurfaceDeactivationValue);
	static_assert(UTslVehicleEffectComponent_SurfaceDeactivationValue_Offset == 0x440, "UTslVehicleEffectComponent::SurfaceDeactivationValue offset is not 440");
	auto constexpr UTslVehicleEffectComponent_DT_Multiplier_Offset = offsetof(UTslVehicleEffectComponent, DT_Multiplier);
	static_assert(UTslVehicleEffectComponent_DT_Multiplier_Offset == 0x444, "UTslVehicleEffectComponent::DT_Multiplier offset is not 444");
	auto constexpr UTslVehicleEffectComponent_MinVelocityForSurfaceCheck_Offset = offsetof(UTslVehicleEffectComponent, MinVelocityForSurfaceCheck);
	static_assert(UTslVehicleEffectComponent_MinVelocityForSurfaceCheck_Offset == 0x448, "UTslVehicleEffectComponent::MinVelocityForSurfaceCheck offset is not 448");
	auto constexpr UTslVehicleEffectComponent_MinRotationSpeedForSurfaceCheck_Offset = offsetof(UTslVehicleEffectComponent, MinRotationSpeedForSurfaceCheck);
	static_assert(UTslVehicleEffectComponent_MinRotationSpeedForSurfaceCheck_Offset == 0x44c, "UTslVehicleEffectComponent::MinRotationSpeedForSurfaceCheck offset is not 44c");
	auto constexpr UTslVehicleEffectComponent_MinSlip_Offset = offsetof(UTslVehicleEffectComponent, MinSlip);
	static_assert(UTslVehicleEffectComponent_MinSlip_Offset == 0x450, "UTslVehicleEffectComponent::MinSlip offset is not 450");
	auto constexpr UTslVehicleEffectComponent_MinSpin_Offset = offsetof(UTslVehicleEffectComponent, MinSpin);
	static_assert(UTslVehicleEffectComponent_MinSpin_Offset == 0x454, "UTslVehicleEffectComponent::MinSpin offset is not 454");
	auto constexpr UTslVehicleEffectComponent_MinVelocityForBreak_Offset = offsetof(UTslVehicleEffectComponent, MinVelocityForBreak);
	static_assert(UTslVehicleEffectComponent_MinVelocityForBreak_Offset == 0x458, "UTslVehicleEffectComponent::MinVelocityForBreak offset is not 458");
	auto constexpr UTslVehicleEffectComponent_BrakeNoDriverMultiplier_Offset = offsetof(UTslVehicleEffectComponent, BrakeNoDriverMultiplier);
	static_assert(UTslVehicleEffectComponent_BrakeNoDriverMultiplier_Offset == 0x45c, "UTslVehicleEffectComponent::BrakeNoDriverMultiplier offset is not 45c");
	auto constexpr UTslVehicleEffectComponent_VelocityInterpSpeed_Offset = offsetof(UTslVehicleEffectComponent, VelocityInterpSpeed);
	static_assert(UTslVehicleEffectComponent_VelocityInterpSpeed_Offset == 0x460, "UTslVehicleEffectComponent::VelocityInterpSpeed offset is not 460");
	auto constexpr UTslVehicleEffectComponent_SlipInterpSpeed_Offset = offsetof(UTslVehicleEffectComponent, SlipInterpSpeed);
	static_assert(UTslVehicleEffectComponent_SlipInterpSpeed_Offset == 0x464, "UTslVehicleEffectComponent::SlipInterpSpeed offset is not 464");
	auto constexpr UTslVehicleEffectComponent_SpinInterpSpeed_Offset = offsetof(UTslVehicleEffectComponent, SpinInterpSpeed);
	static_assert(UTslVehicleEffectComponent_SpinInterpSpeed_Offset == 0x468, "UTslVehicleEffectComponent::SpinInterpSpeed offset is not 468");
	auto constexpr UTslVehicleEffectComponent_BreakInterpSpeed_Offset = offsetof(UTslVehicleEffectComponent, BreakInterpSpeed);
	static_assert(UTslVehicleEffectComponent_BreakInterpSpeed_Offset == 0x46c, "UTslVehicleEffectComponent::BreakInterpSpeed offset is not 46c");
	auto constexpr UTslVehicleEffectComponent_boolField470_Offset = offsetof(UTslVehicleEffectComponent, boolField470);
	static_assert(UTslVehicleEffectComponent_boolField470_Offset == 0x470, "UTslVehicleEffectComponent::boolField470 offset is not 470");
	auto constexpr UTslVehicleEffectComponent_AngularVelocityCoefficient_Offset = offsetof(UTslVehicleEffectComponent, AngularVelocityCoefficient);
	static_assert(UTslVehicleEffectComponent_AngularVelocityCoefficient_Offset == 0x474, "UTslVehicleEffectComponent::AngularVelocityCoefficient offset is not 474");
	auto constexpr UTslVehicleEffectComponent_LateralVelocityCoeffictient_Offset = offsetof(UTslVehicleEffectComponent, LateralVelocityCoeffictient);
	static_assert(UTslVehicleEffectComponent_LateralVelocityCoeffictient_Offset == 0x478, "UTslVehicleEffectComponent::LateralVelocityCoeffictient offset is not 478");
	auto constexpr UTslVehicleEffectComponent_LateralVelocityClamp_Offset = offsetof(UTslVehicleEffectComponent, LateralVelocityClamp);
	static_assert(UTslVehicleEffectComponent_LateralVelocityClamp_Offset == 0x47c, "UTslVehicleEffectComponent::LateralVelocityClamp offset is not 47c");
	auto constexpr UTslVehicleEffectComponent_boolField480_Offset = offsetof(UTslVehicleEffectComponent, boolField480);
	static_assert(UTslVehicleEffectComponent_boolField480_Offset == 0x480, "UTslVehicleEffectComponent::boolField480 offset is not 480");
	auto constexpr UTslVehicleEffectComponent_boolField481_Offset = offsetof(UTslVehicleEffectComponent, boolField481);
	static_assert(UTslVehicleEffectComponent_boolField481_Offset == 0x481, "UTslVehicleEffectComponent::boolField481 offset is not 481");
	auto constexpr UTslVehicleEffectComponent_boolField482_Offset = offsetof(UTslVehicleEffectComponent, boolField482);
	static_assert(UTslVehicleEffectComponent_boolField482_Offset == 0x482, "UTslVehicleEffectComponent::boolField482 offset is not 482");
	auto constexpr UTslVehicleEffectComponent_boolField483_Offset = offsetof(UTslVehicleEffectComponent, boolField483);
	static_assert(UTslVehicleEffectComponent_boolField483_Offset == 0x483, "UTslVehicleEffectComponent::boolField483 offset is not 483");
	auto constexpr UTslVehicleEffectComponent_ReverseThrottleScalar_Offset = offsetof(UTslVehicleEffectComponent, ReverseThrottleScalar);
	static_assert(UTslVehicleEffectComponent_ReverseThrottleScalar_Offset == 0x484, "UTslVehicleEffectComponent::ReverseThrottleScalar offset is not 484");
	auto constexpr UTslVehicleEffectComponent_GearUpSound_Start_Offset = offsetof(UTslVehicleEffectComponent, GearUpSound_Start);
	static_assert(UTslVehicleEffectComponent_GearUpSound_Start_Offset == 0x488, "UTslVehicleEffectComponent::GearUpSound_Start offset is not 488");
	auto constexpr UTslVehicleEffectComponent_GearDownSound_Start_Offset = offsetof(UTslVehicleEffectComponent, GearDownSound_Start);
	static_assert(UTslVehicleEffectComponent_GearDownSound_Start_Offset == 0x490, "UTslVehicleEffectComponent::GearDownSound_Start offset is not 490");
	auto constexpr UTslVehicleEffectComponent_GearUpSound_End_Offset = offsetof(UTslVehicleEffectComponent, GearUpSound_End);
	static_assert(UTslVehicleEffectComponent_GearUpSound_End_Offset == 0x498, "UTslVehicleEffectComponent::GearUpSound_End offset is not 498");
	auto constexpr UTslVehicleEffectComponent_GearDownSound_End_Offset = offsetof(UTslVehicleEffectComponent, GearDownSound_End);
	static_assert(UTslVehicleEffectComponent_GearDownSound_End_Offset == 0x4a0, "UTslVehicleEffectComponent::GearDownSound_End offset is not 4a0");
	auto constexpr UTslVehicleEffectComponent_GearReverseSound_Offset = offsetof(UTslVehicleEffectComponent, GearReverseSound);
	static_assert(UTslVehicleEffectComponent_GearReverseSound_Offset == 0x4a8, "UTslVehicleEffectComponent::GearReverseSound offset is not 4a8");
	auto constexpr UTslVehicleEffectComponent_DestroyedMaterialMap_Offset = offsetof(UTslVehicleEffectComponent, DestroyedMaterialMap);
	static_assert(UTslVehicleEffectComponent_DestroyedMaterialMap_Offset == 0x540, "UTslVehicleEffectComponent::DestroyedMaterialMap offset is not 540");
	auto constexpr UTslVehicleEffectComponent_ApplyDestroyedMaterialDelay_Offset = offsetof(UTslVehicleEffectComponent, ApplyDestroyedMaterialDelay);
	static_assert(UTslVehicleEffectComponent_ApplyDestroyedMaterialDelay_Offset == 0x590, "UTslVehicleEffectComponent::ApplyDestroyedMaterialDelay offset is not 590");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
