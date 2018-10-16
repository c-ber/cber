#pragma once
#include "UWheeledVehicle.hpp"
#include "FTslImpactSoundInfo.hpp"
#include "FAnimUpdateRateSettings.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTslWheeledVehicle // Size: 0x840
	: public UWheeledVehicle // Size: 0x480
{
private:
	typedef UTslWheeledVehicle t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(45); // id32("Class TslGame.TslWheeledVehicle")
		return ptr;
	}
	uint8_t UnknownData480[0x90];
	ExternalPtr<struct USphereComponent> ActivationTrigger; /* Ofs: 0x510 Size: 0x8 - ObjectProperty TslGame.TslWheeledVehicle.ActivationTrigger */
	ExternalPtr<struct UGamePadInputAixsComponent> GamePadInputAixsComponent; /* Ofs: 0x518 Size: 0x8 - ObjectProperty TslGame.TslWheeledVehicle.GamePadInputAixsComponent */
	float Health; /* Ofs: 0x520 Size: 0x4 - FloatProperty TslGame.TslWheeledVehicle.Health */
	float HealthMax; /* Ofs: 0x524 Size: 0x4 - FloatProperty TslGame.TslWheeledVehicle.HealthMax */
	float Fuel; /* Ofs: 0x528 Size: 0x4 - FloatProperty TslGame.TslWheeledVehicle.Fuel */
	float FuelMax; /* Ofs: 0x52C Size: 0x4 - FloatProperty TslGame.TslWheeledVehicle.FuelMax */
	uint8_t boolField530;
	uint8_t UnknownData531[0x3];
	float AirControlPitchInput; /* Ofs: 0x534 Size: 0x4 - FloatProperty TslGame.TslWheeledVehicle.AirControlPitchInput */
	float SpeedKPH; /* Ofs: 0x538 Size: 0x4 - FloatProperty TslGame.TslWheeledVehicle.SpeedKPH */
	float ThrottleInput; /* Ofs: 0x53C Size: 0x4 - FloatProperty TslGame.TslWheeledVehicle.ThrottleInput */
	float RPM; /* Ofs: 0x540 Size: 0x4 - FloatProperty TslGame.TslWheeledVehicle.RPM */
	float Brake; /* Ofs: 0x544 Size: 0x4 - FloatProperty TslGame.TslWheeledVehicle.Brake */
	float LatMax; /* Ofs: 0x548 Size: 0x4 - FloatProperty TslGame.TslWheeledVehicle.LatMax */
	float LongSum; /* Ofs: 0x54C Size: 0x4 - FloatProperty TslGame.TslWheeledVehicle.LongSum */
	float WaterDepthMax; /* Ofs: 0x550 Size: 0x4 - FloatProperty TslGame.TslWheeledVehicle.WaterDepthMax */
	float SurfaceMax; /* Ofs: 0x554 Size: 0x4 - FloatProperty TslGame.TslWheeledVehicle.SurfaceMax */
	float SuspensionMax; /* Ofs: 0x558 Size: 0x4 - FloatProperty TslGame.TslWheeledVehicle.SuspensionMax */
	int32_t FlatTireCount; /* Ofs: 0x55C Size: 0x4 - IntProperty TslGame.TslWheeledVehicle.FlatTireCount */
	uint8_t boolField560;
	uint8_t UnknownData561[0x7];
	TArray<float> WheelsLatSlip; /* Ofs: 0x568 Size: 0x10 - ArrayProperty TslGame.TslWheeledVehicle.WheelsLatSlip */
	TArray<float> WheelsLongSlip; /* Ofs: 0x578 Size: 0x10 - ArrayProperty TslGame.TslWheeledVehicle.WheelsLongSlip */
	TArray<float> WheelsSuspensionOffset; /* Ofs: 0x588 Size: 0x10 - ArrayProperty TslGame.TslWheeledVehicle.WheelsSuspensionOffset */
	TArray<ExternalPtr<struct UPhysicalMaterial>> WheelsContactSurface; /* Ofs: 0x598 Size: 0x10 - ArrayProperty TslGame.TslWheeledVehicle.WheelsContactSurface */
	TArray<ExternalPtr<struct UPhysicalMaterial>> TestWheelsContactSurface_prev; /* Ofs: 0x5A8 Size: 0x10 - ArrayProperty TslGame.TslWheeledVehicle.TestWheelsContactSurface_prev */
	TArray<float> WheelsSuspensionMaxDrop; /* Ofs: 0x5B8 Size: 0x10 - ArrayProperty TslGame.TslWheeledVehicle.WheelsSuspensionMaxDrop */
	TArray<float> WheelsSuspensionMaxRaise; /* Ofs: 0x5C8 Size: 0x10 - ArrayProperty TslGame.TslWheeledVehicle.WheelsSuspensionMaxRaise */
	ExternalPtr<struct UAkAudioEvent> NullSound; /* Ofs: 0x5D8 Size: 0x8 - ObjectProperty TslGame.TslWheeledVehicle.NullSound */
	FTslImpactSoundInfo ImpactSound; /* Ofs: 0x5E0 Size: 0x60 - StructProperty TslGame.TslWheeledVehicle.ImpactSound */
	FTslImpactSoundInfo LandingSound; /* Ofs: 0x640 Size: 0x60 - StructProperty TslGame.TslWheeledVehicle.LandingSound */
	ExternalPtr<struct UAkAudioEvent> StartupSound; /* Ofs: 0x6A0 Size: 0x8 - ObjectProperty TslGame.TslWheeledVehicle.StartupSound */
	ExternalPtr<struct UAkAudioEvent> BreakSound; /* Ofs: 0x6A8 Size: 0x8 - ObjectProperty TslGame.TslWheeledVehicle.BreakSound */
	ExternalPtr<struct UAkAudioEvent> StopSound; /* Ofs: 0x6B0 Size: 0x8 - ObjectProperty TslGame.TslWheeledVehicle.StopSound */
	ExternalPtr<struct UAkAudioEvent> CharacterHitSound; /* Ofs: 0x6B8 Size: 0x8 - ObjectProperty TslGame.TslWheeledVehicle.CharacterHitSound */
	float MaxClampThrottleInClutch; /* Ofs: 0x6C0 Size: 0x4 - FloatProperty TslGame.TslWheeledVehicle.MaxClampThrottleInClutch */
	uint8_t boolField6C4;
	uint8_t UnknownData6C5[0x3];
	FAnimUpdateRateSettings AnimUpdateRateSettings; /* Ofs: 0x6C8 Size: 0x78 - StructProperty TslGame.TslWheeledVehicle.AnimUpdateRateSettings */
	uint8_t boolField740;
	uint8_t UnknownData741[0x3];
	float TorqueMultiplierForBoosting; /* Ofs: 0x744 Size: 0x4 - FloatProperty TslGame.TslWheeledVehicle.TorqueMultiplierForBoosting */
	uint8_t UnknownData748[0x8];
	ExternalPtr<struct UTslVehicleHitComponent> VehicleHitComponent; /* Ofs: 0x750 Size: 0x8 - ObjectProperty TslGame.TslWheeledVehicle.VehicleHitComponent */
	ExternalPtr<struct UTslVehicleCommonComponent> VehicleCommonComponent; /* Ofs: 0x758 Size: 0x8 - ObjectProperty TslGame.TslWheeledVehicle.VehicleCommonComponent */
	ExternalPtr<struct UTslVehicleSeatComponent> VehicleSeatComponent; /* Ofs: 0x760 Size: 0x8 - ObjectProperty TslGame.TslWheeledVehicle.VehicleSeatComponent */
	ExternalPtr<struct UTslVehicleEffectComponent> VehicleEffectComponent; /* Ofs: 0x768 Size: 0x8 - ObjectProperty TslGame.TslWheeledVehicle.VehicleEffectComponent */
	ExternalPtr<struct UTslVehicleSyncComponent> VehicleSyncComponent; /* Ofs: 0x770 Size: 0x8 - ObjectProperty TslGame.TslWheeledVehicle.VehicleSyncComponent */
	ExternalPtr<struct UTslVehicleTempComponent> VehicleTempComponent; /* Ofs: 0x778 Size: 0x8 - ObjectProperty TslGame.TslWheeledVehicle.VehicleTempComponent */
	ExternalPtr<struct UTslPawnInputBindingComponent> TslPawnInputBindingComponent; /* Ofs: 0x780 Size: 0x8 - ObjectProperty TslGame.TslWheeledVehicle.TslPawnInputBindingComponent */
	ExternalPtr<struct UTslGamepadPawnInputComponent> TslGamepadInputComponent; /* Ofs: 0x788 Size: 0x8 - ObjectProperty TslGame.TslWheeledVehicle.TslGamepadInputComponent */
	ExternalPtr<struct UTslHornComponent> TslHornComponent; /* Ofs: 0x790 Size: 0x8 - ObjectProperty TslGame.TslWheeledVehicle.TslHornComponent */
	ExternalPtr<struct UAkComponent> AudioComEngine; /* Ofs: 0x798 Size: 0x8 - ObjectProperty TslGame.TslWheeledVehicle.AudioComEngine */
	ExternalPtr<struct UBuoyancyForceComponent> BuoyancyForceComponent; /* Ofs: 0x7A0 Size: 0x8 - ObjectProperty TslGame.TslWheeledVehicle.BuoyancyForceComponent */
	FName SinkPoint; /* Ofs: 0x7A8 Size: 0x8 - NameProperty TslGame.TslWheeledVehicle.SinkPoint */
	ExternalPtr<struct UClass> SinkBuffType; /* Ofs: 0x7B0 Size: 0x8 - ClassProperty TslGame.TslWheeledVehicle.SinkBuffType */
	uint8_t UnknownData7B8[0x8];
	ExternalPtr<struct UBuffComponet> BuffComponent; /* Ofs: 0x7C0 Size: 0x8 - ObjectProperty TslGame.TslWheeledVehicle.BuffComponent */
	TArray<ExternalPtr<struct UClass>> ComponentsToDestroyOnDedicatedServer; /* Ofs: 0x7C8 Size: 0x10 - ArrayProperty TslGame.TslWheeledVehicle.ComponentsToDestroyOnDedicatedServer */
	uint8_t boolField7D8;
	uint8_t UnknownData7D9[0x3];
	float AutoEjectGroundDistance; /* Ofs: 0x7DC Size: 0x4 - FloatProperty TslGame.TslWheeledVehicle.AutoEjectGroundDistance */
	float AutoEjectRoll; /* Ofs: 0x7E0 Size: 0x4 - FloatProperty TslGame.TslWheeledVehicle.AutoEjectRoll */
	float AutoEjectPitch; /* Ofs: 0x7E4 Size: 0x4 - FloatProperty TslGame.TslWheeledVehicle.AutoEjectPitch */
	float AutoEject_RiseRate; /* Ofs: 0x7E8 Size: 0x4 - FloatProperty TslGame.TslWheeledVehicle.AutoEject_RiseRate */
	float AutoEject_FallRate; /* Ofs: 0x7EC Size: 0x4 - FloatProperty TslGame.TslWheeledVehicle.AutoEject_FallRate */
	uint8_t UnknownData7F0[0x4];
	uint8_t boolField7F4;
	uint8_t UnknownData7F5[0x3];
	float StabilizeInitialTimer; /* Ofs: 0x7F8 Size: 0x4 - FloatProperty TslGame.TslWheeledVehicle.StabilizeInitialTimer */
	float StablizeCurrentTimer; /* Ofs: 0x7FC Size: 0x4 - FloatProperty TslGame.TslWheeledVehicle.StablizeCurrentTimer */
	float SteeringYawBias; /* Ofs: 0x800 Size: 0x4 - FloatProperty TslGame.TslWheeledVehicle.SteeringYawBias */
	uint8_t UnknownData804[0x3C];


	inline bool SetActivationTrigger(t_structHelper inst, ExternalPtr<struct USphereComponent> value) { inst.WriteOffset(0x510, value); }
	inline bool SetGamePadInputAixsComponent(t_structHelper inst, ExternalPtr<struct UGamePadInputAixsComponent> value) { inst.WriteOffset(0x518, value); }
	inline bool SetHealth(t_structHelper inst, float value) { inst.WriteOffset(0x520, value); }
	inline bool SetHealthMax(t_structHelper inst, float value) { inst.WriteOffset(0x524, value); }
	inline bool SetFuel(t_structHelper inst, float value) { inst.WriteOffset(0x528, value); }
	inline bool SetFuelMax(t_structHelper inst, float value) { inst.WriteOffset(0x52C, value); }
	inline bool bStabilizeActive()
	{
		return boolField530& 0x1;
	}
	inline bool SetbStabilizeActive(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x530, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetAirControlPitchInput(t_structHelper inst, float value) { inst.WriteOffset(0x534, value); }
	inline bool SetSpeedKPH(t_structHelper inst, float value) { inst.WriteOffset(0x538, value); }
	inline bool SetThrottleInput(t_structHelper inst, float value) { inst.WriteOffset(0x53C, value); }
	inline bool SetRPM(t_structHelper inst, float value) { inst.WriteOffset(0x540, value); }
	inline bool SetBrake(t_structHelper inst, float value) { inst.WriteOffset(0x544, value); }
	inline bool SetLatMax(t_structHelper inst, float value) { inst.WriteOffset(0x548, value); }
	inline bool SetLongSum(t_structHelper inst, float value) { inst.WriteOffset(0x54C, value); }
	inline bool SetWaterDepthMax(t_structHelper inst, float value) { inst.WriteOffset(0x550, value); }
	inline bool SetSurfaceMax(t_structHelper inst, float value) { inst.WriteOffset(0x554, value); }
	inline bool SetSuspensionMax(t_structHelper inst, float value) { inst.WriteOffset(0x558, value); }
	inline bool SetFlatTireCount(t_structHelper inst, int32_t value) { inst.WriteOffset(0x55C, value); }
	inline bool bDirtySpeedKPH()
	{
		return boolField560& 0x1;
	}
	inline bool SetbDirtySpeedKPH(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x560, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bDirtyThrottleInput()
	{
		return boolField560& 0x2;
	}
	inline bool SetbDirtyThrottleInput(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x560, (uint8_t)(value ? curVal | (uint8_t)2 : curVal & ~(uint8_t)2));
	}
	inline bool bDirtyRPM()
	{
		return boolField560& 0x4;
	}
	inline bool SetbDirtyRPM(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x560, (uint8_t)(value ? curVal | (uint8_t)4 : curVal & ~(uint8_t)4));
	}
	inline bool bDirtyWaterDepthMax()
	{
		return boolField560& 0x8;
	}
	inline bool SetbDirtyWaterDepthMax(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x560, (uint8_t)(value ? curVal | (uint8_t)8 : curVal & ~(uint8_t)8));
	}
	inline bool bDirtyBrake()
	{
		return boolField560& 0x10;
	}
	inline bool SetbDirtyBrake(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x560, (uint8_t)(value ? curVal | (uint8_t)16 : curVal & ~(uint8_t)16));
	}
	inline bool bDetectedStartup()
	{
		return boolField560& 0x20;
	}
	inline bool SetbDetectedStartup(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x560, (uint8_t)(value ? curVal | (uint8_t)32 : curVal & ~(uint8_t)32));
	}
	inline bool bDetectedBraking()
	{
		return boolField560& 0x40;
	}
	inline bool SetbDetectedBraking(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x560, (uint8_t)(value ? curVal | (uint8_t)64 : curVal & ~(uint8_t)64));
	}
	inline bool SetWheelsLatSlip(t_structHelper inst, TArray<float> value) { inst.WriteOffset(0x568, value); }
	inline bool SetWheelsLongSlip(t_structHelper inst, TArray<float> value) { inst.WriteOffset(0x578, value); }
	inline bool SetWheelsSuspensionOffset(t_structHelper inst, TArray<float> value) { inst.WriteOffset(0x588, value); }
	inline bool SetWheelsContactSurface(t_structHelper inst, TArray<ExternalPtr<struct UPhysicalMaterial>> value) { inst.WriteOffset(0x598, value); }
	inline bool SetTestWheelsContactSurface_prev(t_structHelper inst, TArray<ExternalPtr<struct UPhysicalMaterial>> value) { inst.WriteOffset(0x5A8, value); }
	inline bool SetWheelsSuspensionMaxDrop(t_structHelper inst, TArray<float> value) { inst.WriteOffset(0x5B8, value); }
	inline bool SetWheelsSuspensionMaxRaise(t_structHelper inst, TArray<float> value) { inst.WriteOffset(0x5C8, value); }
	inline bool SetNullSound(t_structHelper inst, ExternalPtr<struct UAkAudioEvent> value) { inst.WriteOffset(0x5D8, value); }
	inline bool SetImpactSound(t_structHelper inst, FTslImpactSoundInfo value) { inst.WriteOffset(0x5E0, value); }
	inline bool SetLandingSound(t_structHelper inst, FTslImpactSoundInfo value) { inst.WriteOffset(0x640, value); }
	inline bool SetStartupSound(t_structHelper inst, ExternalPtr<struct UAkAudioEvent> value) { inst.WriteOffset(0x6A0, value); }
	inline bool SetBreakSound(t_structHelper inst, ExternalPtr<struct UAkAudioEvent> value) { inst.WriteOffset(0x6A8, value); }
	inline bool SetStopSound(t_structHelper inst, ExternalPtr<struct UAkAudioEvent> value) { inst.WriteOffset(0x6B0, value); }
	inline bool SetCharacterHitSound(t_structHelper inst, ExternalPtr<struct UAkAudioEvent> value) { inst.WriteOffset(0x6B8, value); }
	inline bool SetMaxClampThrottleInClutch(t_structHelper inst, float value) { inst.WriteOffset(0x6C0, value); }
	inline bool bApplyCustomAnimUpdaterateSettings()
	{
		return boolField6C4& 0x1;
	}
	inline bool SetbApplyCustomAnimUpdaterateSettings(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x6C4, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetAnimUpdateRateSettings(t_structHelper inst, FAnimUpdateRateSettings value) { inst.WriteOffset(0x6C8, value); }
	inline bool bWheelGrounded()
	{
		return boolField740& 0x1;
	}
	inline bool SetbWheelGrounded(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x740, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bWantsToBoosting()
	{
		return boolField740& 0x2;
	}
	inline bool SetbWantsToBoosting(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x740, (uint8_t)(value ? curVal | (uint8_t)2 : curVal & ~(uint8_t)2));
	}
	inline bool SetTorqueMultiplierForBoosting(t_structHelper inst, float value) { inst.WriteOffset(0x744, value); }
	inline bool SetVehicleHitComponent(t_structHelper inst, ExternalPtr<struct UTslVehicleHitComponent> value) { inst.WriteOffset(0x750, value); }
	inline bool SetVehicleCommonComponent(t_structHelper inst, ExternalPtr<struct UTslVehicleCommonComponent> value) { inst.WriteOffset(0x758, value); }
	inline bool SetVehicleSeatComponent(t_structHelper inst, ExternalPtr<struct UTslVehicleSeatComponent> value) { inst.WriteOffset(0x760, value); }
	inline bool SetVehicleEffectComponent(t_structHelper inst, ExternalPtr<struct UTslVehicleEffectComponent> value) { inst.WriteOffset(0x768, value); }
	inline bool SetVehicleSyncComponent(t_structHelper inst, ExternalPtr<struct UTslVehicleSyncComponent> value) { inst.WriteOffset(0x770, value); }
	inline bool SetVehicleTempComponent(t_structHelper inst, ExternalPtr<struct UTslVehicleTempComponent> value) { inst.WriteOffset(0x778, value); }
	inline bool SetTslPawnInputBindingComponent(t_structHelper inst, ExternalPtr<struct UTslPawnInputBindingComponent> value) { inst.WriteOffset(0x780, value); }
	inline bool SetTslGamepadInputComponent(t_structHelper inst, ExternalPtr<struct UTslGamepadPawnInputComponent> value) { inst.WriteOffset(0x788, value); }
	inline bool SetTslHornComponent(t_structHelper inst, ExternalPtr<struct UTslHornComponent> value) { inst.WriteOffset(0x790, value); }
	inline bool SetAudioComEngine(t_structHelper inst, ExternalPtr<struct UAkComponent> value) { inst.WriteOffset(0x798, value); }
	inline bool SetBuoyancyForceComponent(t_structHelper inst, ExternalPtr<struct UBuoyancyForceComponent> value) { inst.WriteOffset(0x7A0, value); }
	inline bool SetSinkPoint(t_structHelper inst, FName value) { inst.WriteOffset(0x7A8, value); }
	inline bool SetSinkBuffType(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0x7B0, value); }
	inline bool SetBuffComponent(t_structHelper inst, ExternalPtr<struct UBuffComponet> value) { inst.WriteOffset(0x7C0, value); }
	inline bool SetComponentsToDestroyOnDedicatedServer(t_structHelper inst, TArray<ExternalPtr<struct UClass>> value) { inst.WriteOffset(0x7C8, value); }
	inline bool bProcessAutoEject()
	{
		return boolField7D8& 0x1;
	}
	inline bool SetbProcessAutoEject(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x7D8, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetAutoEjectGroundDistance(t_structHelper inst, float value) { inst.WriteOffset(0x7DC, value); }
	inline bool SetAutoEjectRoll(t_structHelper inst, float value) { inst.WriteOffset(0x7E0, value); }
	inline bool SetAutoEjectPitch(t_structHelper inst, float value) { inst.WriteOffset(0x7E4, value); }
	inline bool SetAutoEject_RiseRate(t_structHelper inst, float value) { inst.WriteOffset(0x7E8, value); }
	inline bool SetAutoEject_FallRate(t_structHelper inst, float value) { inst.WriteOffset(0x7EC, value); }
	inline bool bRunStabilizeOnEntry()
	{
		return boolField7F4& 0x1;
	}
	inline bool SetbRunStabilizeOnEntry(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x7F4, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetStabilizeInitialTimer(t_structHelper inst, float value) { inst.WriteOffset(0x7F8, value); }
	inline bool SetStablizeCurrentTimer(t_structHelper inst, float value) { inst.WriteOffset(0x7FC, value); }
	inline bool SetSteeringYawBias(t_structHelper inst, float value) { inst.WriteOffset(0x800, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTslWheeledVehicle = sizeof(UTslWheeledVehicle); // 2112
    static_assert(sizeof(UTslWheeledVehicle) == 0x840, "Size of UTslWheeledVehicle is not correct.");
	auto constexpr UTslWheeledVehicle_ActivationTrigger_Offset = offsetof(UTslWheeledVehicle, ActivationTrigger);
	static_assert(UTslWheeledVehicle_ActivationTrigger_Offset == 0x510, "UTslWheeledVehicle::ActivationTrigger offset is not 510");
	auto constexpr UTslWheeledVehicle_GamePadInputAixsComponent_Offset = offsetof(UTslWheeledVehicle, GamePadInputAixsComponent);
	static_assert(UTslWheeledVehicle_GamePadInputAixsComponent_Offset == 0x518, "UTslWheeledVehicle::GamePadInputAixsComponent offset is not 518");
	auto constexpr UTslWheeledVehicle_Health_Offset = offsetof(UTslWheeledVehicle, Health);
	static_assert(UTslWheeledVehicle_Health_Offset == 0x520, "UTslWheeledVehicle::Health offset is not 520");
	auto constexpr UTslWheeledVehicle_HealthMax_Offset = offsetof(UTslWheeledVehicle, HealthMax);
	static_assert(UTslWheeledVehicle_HealthMax_Offset == 0x524, "UTslWheeledVehicle::HealthMax offset is not 524");
	auto constexpr UTslWheeledVehicle_Fuel_Offset = offsetof(UTslWheeledVehicle, Fuel);
	static_assert(UTslWheeledVehicle_Fuel_Offset == 0x528, "UTslWheeledVehicle::Fuel offset is not 528");
	auto constexpr UTslWheeledVehicle_FuelMax_Offset = offsetof(UTslWheeledVehicle, FuelMax);
	static_assert(UTslWheeledVehicle_FuelMax_Offset == 0x52c, "UTslWheeledVehicle::FuelMax offset is not 52c");
	auto constexpr UTslWheeledVehicle_boolField530_Offset = offsetof(UTslWheeledVehicle, boolField530);
	static_assert(UTslWheeledVehicle_boolField530_Offset == 0x530, "UTslWheeledVehicle::boolField530 offset is not 530");
	auto constexpr UTslWheeledVehicle_AirControlPitchInput_Offset = offsetof(UTslWheeledVehicle, AirControlPitchInput);
	static_assert(UTslWheeledVehicle_AirControlPitchInput_Offset == 0x534, "UTslWheeledVehicle::AirControlPitchInput offset is not 534");
	auto constexpr UTslWheeledVehicle_SpeedKPH_Offset = offsetof(UTslWheeledVehicle, SpeedKPH);
	static_assert(UTslWheeledVehicle_SpeedKPH_Offset == 0x538, "UTslWheeledVehicle::SpeedKPH offset is not 538");
	auto constexpr UTslWheeledVehicle_ThrottleInput_Offset = offsetof(UTslWheeledVehicle, ThrottleInput);
	static_assert(UTslWheeledVehicle_ThrottleInput_Offset == 0x53c, "UTslWheeledVehicle::ThrottleInput offset is not 53c");
	auto constexpr UTslWheeledVehicle_RPM_Offset = offsetof(UTslWheeledVehicle, RPM);
	static_assert(UTslWheeledVehicle_RPM_Offset == 0x540, "UTslWheeledVehicle::RPM offset is not 540");
	auto constexpr UTslWheeledVehicle_Brake_Offset = offsetof(UTslWheeledVehicle, Brake);
	static_assert(UTslWheeledVehicle_Brake_Offset == 0x544, "UTslWheeledVehicle::Brake offset is not 544");
	auto constexpr UTslWheeledVehicle_LatMax_Offset = offsetof(UTslWheeledVehicle, LatMax);
	static_assert(UTslWheeledVehicle_LatMax_Offset == 0x548, "UTslWheeledVehicle::LatMax offset is not 548");
	auto constexpr UTslWheeledVehicle_LongSum_Offset = offsetof(UTslWheeledVehicle, LongSum);
	static_assert(UTslWheeledVehicle_LongSum_Offset == 0x54c, "UTslWheeledVehicle::LongSum offset is not 54c");
	auto constexpr UTslWheeledVehicle_WaterDepthMax_Offset = offsetof(UTslWheeledVehicle, WaterDepthMax);
	static_assert(UTslWheeledVehicle_WaterDepthMax_Offset == 0x550, "UTslWheeledVehicle::WaterDepthMax offset is not 550");
	auto constexpr UTslWheeledVehicle_SurfaceMax_Offset = offsetof(UTslWheeledVehicle, SurfaceMax);
	static_assert(UTslWheeledVehicle_SurfaceMax_Offset == 0x554, "UTslWheeledVehicle::SurfaceMax offset is not 554");
	auto constexpr UTslWheeledVehicle_SuspensionMax_Offset = offsetof(UTslWheeledVehicle, SuspensionMax);
	static_assert(UTslWheeledVehicle_SuspensionMax_Offset == 0x558, "UTslWheeledVehicle::SuspensionMax offset is not 558");
	auto constexpr UTslWheeledVehicle_FlatTireCount_Offset = offsetof(UTslWheeledVehicle, FlatTireCount);
	static_assert(UTslWheeledVehicle_FlatTireCount_Offset == 0x55c, "UTslWheeledVehicle::FlatTireCount offset is not 55c");
	auto constexpr UTslWheeledVehicle_boolField560_Offset = offsetof(UTslWheeledVehicle, boolField560);
	static_assert(UTslWheeledVehicle_boolField560_Offset == 0x560, "UTslWheeledVehicle::boolField560 offset is not 560");
	auto constexpr UTslWheeledVehicle_WheelsLatSlip_Offset = offsetof(UTslWheeledVehicle, WheelsLatSlip);
	static_assert(UTslWheeledVehicle_WheelsLatSlip_Offset == 0x568, "UTslWheeledVehicle::WheelsLatSlip offset is not 568");
	auto constexpr UTslWheeledVehicle_WheelsLongSlip_Offset = offsetof(UTslWheeledVehicle, WheelsLongSlip);
	static_assert(UTslWheeledVehicle_WheelsLongSlip_Offset == 0x578, "UTslWheeledVehicle::WheelsLongSlip offset is not 578");
	auto constexpr UTslWheeledVehicle_WheelsSuspensionOffset_Offset = offsetof(UTslWheeledVehicle, WheelsSuspensionOffset);
	static_assert(UTslWheeledVehicle_WheelsSuspensionOffset_Offset == 0x588, "UTslWheeledVehicle::WheelsSuspensionOffset offset is not 588");
	auto constexpr UTslWheeledVehicle_WheelsContactSurface_Offset = offsetof(UTslWheeledVehicle, WheelsContactSurface);
	static_assert(UTslWheeledVehicle_WheelsContactSurface_Offset == 0x598, "UTslWheeledVehicle::WheelsContactSurface offset is not 598");
	auto constexpr UTslWheeledVehicle_TestWheelsContactSurface_prev_Offset = offsetof(UTslWheeledVehicle, TestWheelsContactSurface_prev);
	static_assert(UTslWheeledVehicle_TestWheelsContactSurface_prev_Offset == 0x5a8, "UTslWheeledVehicle::TestWheelsContactSurface_prev offset is not 5a8");
	auto constexpr UTslWheeledVehicle_WheelsSuspensionMaxDrop_Offset = offsetof(UTslWheeledVehicle, WheelsSuspensionMaxDrop);
	static_assert(UTslWheeledVehicle_WheelsSuspensionMaxDrop_Offset == 0x5b8, "UTslWheeledVehicle::WheelsSuspensionMaxDrop offset is not 5b8");
	auto constexpr UTslWheeledVehicle_WheelsSuspensionMaxRaise_Offset = offsetof(UTslWheeledVehicle, WheelsSuspensionMaxRaise);
	static_assert(UTslWheeledVehicle_WheelsSuspensionMaxRaise_Offset == 0x5c8, "UTslWheeledVehicle::WheelsSuspensionMaxRaise offset is not 5c8");
	auto constexpr UTslWheeledVehicle_NullSound_Offset = offsetof(UTslWheeledVehicle, NullSound);
	static_assert(UTslWheeledVehicle_NullSound_Offset == 0x5d8, "UTslWheeledVehicle::NullSound offset is not 5d8");
	auto constexpr UTslWheeledVehicle_ImpactSound_Offset = offsetof(UTslWheeledVehicle, ImpactSound);
	static_assert(UTslWheeledVehicle_ImpactSound_Offset == 0x5e0, "UTslWheeledVehicle::ImpactSound offset is not 5e0");
	auto constexpr UTslWheeledVehicle_LandingSound_Offset = offsetof(UTslWheeledVehicle, LandingSound);
	static_assert(UTslWheeledVehicle_LandingSound_Offset == 0x640, "UTslWheeledVehicle::LandingSound offset is not 640");
	auto constexpr UTslWheeledVehicle_StartupSound_Offset = offsetof(UTslWheeledVehicle, StartupSound);
	static_assert(UTslWheeledVehicle_StartupSound_Offset == 0x6a0, "UTslWheeledVehicle::StartupSound offset is not 6a0");
	auto constexpr UTslWheeledVehicle_BreakSound_Offset = offsetof(UTslWheeledVehicle, BreakSound);
	static_assert(UTslWheeledVehicle_BreakSound_Offset == 0x6a8, "UTslWheeledVehicle::BreakSound offset is not 6a8");
	auto constexpr UTslWheeledVehicle_StopSound_Offset = offsetof(UTslWheeledVehicle, StopSound);
	static_assert(UTslWheeledVehicle_StopSound_Offset == 0x6b0, "UTslWheeledVehicle::StopSound offset is not 6b0");
	auto constexpr UTslWheeledVehicle_CharacterHitSound_Offset = offsetof(UTslWheeledVehicle, CharacterHitSound);
	static_assert(UTslWheeledVehicle_CharacterHitSound_Offset == 0x6b8, "UTslWheeledVehicle::CharacterHitSound offset is not 6b8");
	auto constexpr UTslWheeledVehicle_MaxClampThrottleInClutch_Offset = offsetof(UTslWheeledVehicle, MaxClampThrottleInClutch);
	static_assert(UTslWheeledVehicle_MaxClampThrottleInClutch_Offset == 0x6c0, "UTslWheeledVehicle::MaxClampThrottleInClutch offset is not 6c0");
	auto constexpr UTslWheeledVehicle_boolField6C4_Offset = offsetof(UTslWheeledVehicle, boolField6C4);
	static_assert(UTslWheeledVehicle_boolField6C4_Offset == 0x6c4, "UTslWheeledVehicle::boolField6C4 offset is not 6c4");
	auto constexpr UTslWheeledVehicle_AnimUpdateRateSettings_Offset = offsetof(UTslWheeledVehicle, AnimUpdateRateSettings);
	static_assert(UTslWheeledVehicle_AnimUpdateRateSettings_Offset == 0x6c8, "UTslWheeledVehicle::AnimUpdateRateSettings offset is not 6c8");
	auto constexpr UTslWheeledVehicle_boolField740_Offset = offsetof(UTslWheeledVehicle, boolField740);
	static_assert(UTslWheeledVehicle_boolField740_Offset == 0x740, "UTslWheeledVehicle::boolField740 offset is not 740");
	auto constexpr UTslWheeledVehicle_TorqueMultiplierForBoosting_Offset = offsetof(UTslWheeledVehicle, TorqueMultiplierForBoosting);
	static_assert(UTslWheeledVehicle_TorqueMultiplierForBoosting_Offset == 0x744, "UTslWheeledVehicle::TorqueMultiplierForBoosting offset is not 744");
	auto constexpr UTslWheeledVehicle_VehicleHitComponent_Offset = offsetof(UTslWheeledVehicle, VehicleHitComponent);
	static_assert(UTslWheeledVehicle_VehicleHitComponent_Offset == 0x750, "UTslWheeledVehicle::VehicleHitComponent offset is not 750");
	auto constexpr UTslWheeledVehicle_VehicleCommonComponent_Offset = offsetof(UTslWheeledVehicle, VehicleCommonComponent);
	static_assert(UTslWheeledVehicle_VehicleCommonComponent_Offset == 0x758, "UTslWheeledVehicle::VehicleCommonComponent offset is not 758");
	auto constexpr UTslWheeledVehicle_VehicleSeatComponent_Offset = offsetof(UTslWheeledVehicle, VehicleSeatComponent);
	static_assert(UTslWheeledVehicle_VehicleSeatComponent_Offset == 0x760, "UTslWheeledVehicle::VehicleSeatComponent offset is not 760");
	auto constexpr UTslWheeledVehicle_VehicleEffectComponent_Offset = offsetof(UTslWheeledVehicle, VehicleEffectComponent);
	static_assert(UTslWheeledVehicle_VehicleEffectComponent_Offset == 0x768, "UTslWheeledVehicle::VehicleEffectComponent offset is not 768");
	auto constexpr UTslWheeledVehicle_VehicleSyncComponent_Offset = offsetof(UTslWheeledVehicle, VehicleSyncComponent);
	static_assert(UTslWheeledVehicle_VehicleSyncComponent_Offset == 0x770, "UTslWheeledVehicle::VehicleSyncComponent offset is not 770");
	auto constexpr UTslWheeledVehicle_VehicleTempComponent_Offset = offsetof(UTslWheeledVehicle, VehicleTempComponent);
	static_assert(UTslWheeledVehicle_VehicleTempComponent_Offset == 0x778, "UTslWheeledVehicle::VehicleTempComponent offset is not 778");
	auto constexpr UTslWheeledVehicle_TslPawnInputBindingComponent_Offset = offsetof(UTslWheeledVehicle, TslPawnInputBindingComponent);
	static_assert(UTslWheeledVehicle_TslPawnInputBindingComponent_Offset == 0x780, "UTslWheeledVehicle::TslPawnInputBindingComponent offset is not 780");
	auto constexpr UTslWheeledVehicle_TslGamepadInputComponent_Offset = offsetof(UTslWheeledVehicle, TslGamepadInputComponent);
	static_assert(UTslWheeledVehicle_TslGamepadInputComponent_Offset == 0x788, "UTslWheeledVehicle::TslGamepadInputComponent offset is not 788");
	auto constexpr UTslWheeledVehicle_TslHornComponent_Offset = offsetof(UTslWheeledVehicle, TslHornComponent);
	static_assert(UTslWheeledVehicle_TslHornComponent_Offset == 0x790, "UTslWheeledVehicle::TslHornComponent offset is not 790");
	auto constexpr UTslWheeledVehicle_AudioComEngine_Offset = offsetof(UTslWheeledVehicle, AudioComEngine);
	static_assert(UTslWheeledVehicle_AudioComEngine_Offset == 0x798, "UTslWheeledVehicle::AudioComEngine offset is not 798");
	auto constexpr UTslWheeledVehicle_BuoyancyForceComponent_Offset = offsetof(UTslWheeledVehicle, BuoyancyForceComponent);
	static_assert(UTslWheeledVehicle_BuoyancyForceComponent_Offset == 0x7a0, "UTslWheeledVehicle::BuoyancyForceComponent offset is not 7a0");
	auto constexpr UTslWheeledVehicle_SinkPoint_Offset = offsetof(UTslWheeledVehicle, SinkPoint);
	static_assert(UTslWheeledVehicle_SinkPoint_Offset == 0x7a8, "UTslWheeledVehicle::SinkPoint offset is not 7a8");
	auto constexpr UTslWheeledVehicle_SinkBuffType_Offset = offsetof(UTslWheeledVehicle, SinkBuffType);
	static_assert(UTslWheeledVehicle_SinkBuffType_Offset == 0x7b0, "UTslWheeledVehicle::SinkBuffType offset is not 7b0");
	auto constexpr UTslWheeledVehicle_BuffComponent_Offset = offsetof(UTslWheeledVehicle, BuffComponent);
	static_assert(UTslWheeledVehicle_BuffComponent_Offset == 0x7c0, "UTslWheeledVehicle::BuffComponent offset is not 7c0");
	auto constexpr UTslWheeledVehicle_ComponentsToDestroyOnDedicatedServer_Offset = offsetof(UTslWheeledVehicle, ComponentsToDestroyOnDedicatedServer);
	static_assert(UTslWheeledVehicle_ComponentsToDestroyOnDedicatedServer_Offset == 0x7c8, "UTslWheeledVehicle::ComponentsToDestroyOnDedicatedServer offset is not 7c8");
	auto constexpr UTslWheeledVehicle_boolField7D8_Offset = offsetof(UTslWheeledVehicle, boolField7D8);
	static_assert(UTslWheeledVehicle_boolField7D8_Offset == 0x7d8, "UTslWheeledVehicle::boolField7D8 offset is not 7d8");
	auto constexpr UTslWheeledVehicle_AutoEjectGroundDistance_Offset = offsetof(UTslWheeledVehicle, AutoEjectGroundDistance);
	static_assert(UTslWheeledVehicle_AutoEjectGroundDistance_Offset == 0x7dc, "UTslWheeledVehicle::AutoEjectGroundDistance offset is not 7dc");
	auto constexpr UTslWheeledVehicle_AutoEjectRoll_Offset = offsetof(UTslWheeledVehicle, AutoEjectRoll);
	static_assert(UTslWheeledVehicle_AutoEjectRoll_Offset == 0x7e0, "UTslWheeledVehicle::AutoEjectRoll offset is not 7e0");
	auto constexpr UTslWheeledVehicle_AutoEjectPitch_Offset = offsetof(UTslWheeledVehicle, AutoEjectPitch);
	static_assert(UTslWheeledVehicle_AutoEjectPitch_Offset == 0x7e4, "UTslWheeledVehicle::AutoEjectPitch offset is not 7e4");
	auto constexpr UTslWheeledVehicle_AutoEject_RiseRate_Offset = offsetof(UTslWheeledVehicle, AutoEject_RiseRate);
	static_assert(UTslWheeledVehicle_AutoEject_RiseRate_Offset == 0x7e8, "UTslWheeledVehicle::AutoEject_RiseRate offset is not 7e8");
	auto constexpr UTslWheeledVehicle_AutoEject_FallRate_Offset = offsetof(UTslWheeledVehicle, AutoEject_FallRate);
	static_assert(UTslWheeledVehicle_AutoEject_FallRate_Offset == 0x7ec, "UTslWheeledVehicle::AutoEject_FallRate offset is not 7ec");
	auto constexpr UTslWheeledVehicle_boolField7F4_Offset = offsetof(UTslWheeledVehicle, boolField7F4);
	static_assert(UTslWheeledVehicle_boolField7F4_Offset == 0x7f4, "UTslWheeledVehicle::boolField7F4 offset is not 7f4");
	auto constexpr UTslWheeledVehicle_StabilizeInitialTimer_Offset = offsetof(UTslWheeledVehicle, StabilizeInitialTimer);
	static_assert(UTslWheeledVehicle_StabilizeInitialTimer_Offset == 0x7f8, "UTslWheeledVehicle::StabilizeInitialTimer offset is not 7f8");
	auto constexpr UTslWheeledVehicle_StablizeCurrentTimer_Offset = offsetof(UTslWheeledVehicle, StablizeCurrentTimer);
	static_assert(UTslWheeledVehicle_StablizeCurrentTimer_Offset == 0x7fc, "UTslWheeledVehicle::StablizeCurrentTimer offset is not 7fc");
	auto constexpr UTslWheeledVehicle_SteeringYawBias_Offset = offsetof(UTslWheeledVehicle, SteeringYawBias);
	static_assert(UTslWheeledVehicle_SteeringYawBias_Offset == 0x800, "UTslWheeledVehicle::SteeringYawBias offset is not 800");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
