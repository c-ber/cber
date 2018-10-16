#pragma once
#include "UTslWheeledVehicle.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FVector.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UVehicleBase_C // Size: 0x9D4
	: public UTslWheeledVehicle // Size: 0x840
{
private:
	typedef UVehicleBase_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(123881); // id32("BlueprintGeneratedClass VehicleBase.VehicleBase_C")
		return ptr;
	}
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0x840 Size: 0x8 - StructProperty VehicleBase.VehicleBase_C.UberGraphFrame */
	ExternalPtr<struct UCameraComponent> ThirdPersonCameraInVehicle; /* Ofs: 0x848 Size: 0x8 - ObjectProperty VehicleBase.VehicleBase_C.ThirdPersonCameraInVehicle */
	ExternalPtr<struct USpringArmInVehicleComponent> ThirdPersonSpringArmInVehicle; /* Ofs: 0x850 Size: 0x8 - ObjectProperty VehicleBase.VehicleBase_C.ThirdPersonSpringArmInVehicle */
	ExternalPtr<struct UCameraComponent> FirstPersonCameraInVehicle; /* Ofs: 0x858 Size: 0x8 - ObjectProperty VehicleBase.VehicleBase_C.FirstPersonCameraInVehicle */
	ExternalPtr<struct USpringArmInVehicleComponent> FirstPersonSpringArmInVehicle; /* Ofs: 0x860 Size: 0x8 - ObjectProperty VehicleBase.VehicleBase_C.FirstPersonSpringArmInVehicle */
	ExternalPtr<struct URadialForceComponent> RadialForce; /* Ofs: 0x868 Size: 0x8 - ObjectProperty VehicleBase.VehicleBase_C.RadialForce */
	float ImpactModifier; /* Ofs: 0x870 Size: 0x4 - FloatProperty VehicleBase.VehicleBase_C.ImpactModifier */
	float ImpactAbsorption; /* Ofs: 0x874 Size: 0x4 - FloatProperty VehicleBase.VehicleBase_C.ImpactAbsorption */
	float ImpactAbsorption_Console; /* Ofs: 0x878 Size: 0x4 - FloatProperty VehicleBase.VehicleBase_C.ImpactAbsorption_Console */
	float ImpactModifierUpsideDown; /* Ofs: 0x87C Size: 0x4 - FloatProperty VehicleBase.VehicleBase_C.ImpactModifierUpsideDown */
	float ImpactAbsorptionUpsideDown; /* Ofs: 0x880 Size: 0x4 - FloatProperty VehicleBase.VehicleBase_C.ImpactAbsorptionUpsideDown */
	float FuelConsumptionModifierBoost; /* Ofs: 0x884 Size: 0x4 - FloatProperty VehicleBase.VehicleBase_C.FuelConsumptionModifierBoost */
	float ImpactAbsorptionPassenger; /* Ofs: 0x888 Size: 0x4 - FloatProperty VehicleBase.VehicleBase_C.ImpactAbsorptionPassenger */
	float ImpactAbsorptionPassenger_Console; /* Ofs: 0x88C Size: 0x4 - FloatProperty VehicleBase.VehicleBase_C.ImpactAbsorptionPassenger_Console */
	float ImpactAbsorptionPassengerUpsideDown; /* Ofs: 0x890 Size: 0x4 - FloatProperty VehicleBase.VehicleBase_C.ImpactAbsorptionPassengerUpsideDown */
	float LaunchVelocityFactorOnHitCharacter; /* Ofs: 0x894 Size: 0x4 - FloatProperty VehicleBase.VehicleBase_C.LaunchVelocityFactorOnHitCharacter */
	uint8_t boolField898;
	uint8_t boolField899;
	uint8_t boolField89A;
	uint8_t boolField89B;
	float BrakeLightIntensity_On; /* Ofs: 0x89C Size: 0x4 - FloatProperty VehicleBase.VehicleBase_C.BrakeLightIntensity_On */
	float BrakeLightIntensity_Off; /* Ofs: 0x8A0 Size: 0x4 - FloatProperty VehicleBase.VehicleBase_C.BrakeLightIntensity_Off */
	float ExplosionRadius_Inner; /* Ofs: 0x8A4 Size: 0x4 - FloatProperty VehicleBase.VehicleBase_C.ExplosionRadius_Inner */
	float ExplosionRadius_Outer; /* Ofs: 0x8A8 Size: 0x4 - FloatProperty VehicleBase.VehicleBase_C.ExplosionRadius_Outer */
	uint8_t UnknownData8AC[0x4];
	ExternalPtr<struct UCurveFloat> DamageCurve; /* Ofs: 0x8B0 Size: 0x8 - ObjectProperty VehicleBase.VehicleBase_C.DamageCurve */
	float Throttle; /* Ofs: 0x8B8 Size: 0x4 - FloatProperty VehicleBase.VehicleBase_C.Throttle */
	uint8_t UnknownData8BC[0x4];
	ExternalPtr<struct UCurveFloat> FuelConsumptionCurve; /* Ofs: 0x8C0 Size: 0x8 - ObjectProperty VehicleBase.VehicleBase_C.FuelConsumptionCurve */
	float FuelEfficiency; /* Ofs: 0x8C8 Size: 0x4 - FloatProperty VehicleBase.VehicleBase_C.FuelEfficiency */
	uint8_t UnknownData8CC[0x4];
	ExternalPtr<struct UTslWheeledVehicleMovement> TslWheeledVehicleMovementRef; /* Ofs: 0x8D0 Size: 0x8 - ObjectProperty VehicleBase.VehicleBase_C.TslWheeledVehicleMovementRef */
	ExternalPtr<struct UTslPlayerController> DriveControllerrRef; /* Ofs: 0x8D8 Size: 0x8 - ObjectProperty VehicleBase.VehicleBase_C.DriveControllerrRef */
	TArray<float> WheelsLatSlip_1; /* Ofs: 0x8E0 Size: 0x10 - ArrayProperty VehicleBase.VehicleBase_C.WheelsLatSlip_1 */
	TArray<float> WheelsLongSlip_1; /* Ofs: 0x8F0 Size: 0x10 - ArrayProperty VehicleBase.VehicleBase_C.WheelsLongSlip_1 */
	float FuelConsumptionModifierIdle; /* Ofs: 0x900 Size: 0x4 - FloatProperty VehicleBase.VehicleBase_C.FuelConsumptionModifierIdle */
	float SpeedKPH_1; /* Ofs: 0x904 Size: 0x4 - FloatProperty VehicleBase.VehicleBase_C.SpeedKPH_1 */
	TArray<float> WheelsSuspensionOffset_1; /* Ofs: 0x908 Size: 0x10 - ArrayProperty VehicleBase.VehicleBase_C.WheelsSuspensionOffset_1 */
	TArray<ExternalPtr<struct UPhysicalMaterial>> WheelsContactSurface_1; /* Ofs: 0x918 Size: 0x10 - ArrayProperty VehicleBase.VehicleBase_C.WheelsContactSurface_1 */
	TArray<float> WheelsRotationSpeed; /* Ofs: 0x928 Size: 0x10 - ArrayProperty VehicleBase.VehicleBase_C.WheelsRotationSpeed */
	TArray<float> WheelsSuspensionMaxDrop_1; /* Ofs: 0x938 Size: 0x10 - ArrayProperty VehicleBase.VehicleBase_C.WheelsSuspensionMaxDrop_1 */
	TArray<float> WheelsSuspensionMaxRaise_1; /* Ofs: 0x948 Size: 0x10 - ArrayProperty VehicleBase.VehicleBase_C.WheelsSuspensionMaxRaise_1 */
	float RPM_1; /* Ofs: 0x958 Size: 0x4 - FloatProperty VehicleBase.VehicleBase_C.RPM_1 */
	uint8_t boolField95C;
	uint8_t boolField95D;
	uint8_t boolField95E;
	uint8_t boolField95F;
	uint8_t boolField960;
	uint8_t boolField961;
	uint8_t UnknownData962[0x2];
	float Brake_1; /* Ofs: 0x964 Size: 0x4 - FloatProperty VehicleBase.VehicleBase_C.Brake_1 */
	uint8_t boolField968;
	uint8_t UnknownData969[0x7];
	TArray<ExternalPtr<struct UPhysicalMaterial>> TestWheelsContactSurface_prev_1; /* Ofs: 0x970 Size: 0x10 - ArrayProperty VehicleBase.VehicleBase_C.TestWheelsContactSurface_prev_1 */
	uint8_t boolField980;
	uint8_t UnknownData981[0x7];
	TArray<float> WheelsSuspensionOffsetNorm; /* Ofs: 0x988 Size: 0x10 - ArrayProperty VehicleBase.VehicleBase_C.WheelsSuspensionOffsetNorm */
	TArray<float> WheelsWaterDepth_1; /* Ofs: 0x998 Size: 0x10 - ArrayProperty VehicleBase.VehicleBase_C.WheelsWaterDepth_1 */
	float FlatTireCount_1; /* Ofs: 0x9A8 Size: 0x4 - FloatProperty VehicleBase.VehicleBase_C.FlatTireCount_1 */
	uint8_t boolField9AC;
	uint8_t UnknownData9AD[0x3];
	FVector LastVelocity; /* Ofs: 0x9B0 Size: 0xC - StructProperty VehicleBase.VehicleBase_C.LastVelocity */
	FVector Acceleration; /* Ofs: 0x9BC Size: 0xC - StructProperty VehicleBase.VehicleBase_C.Acceleration */
	uint8_t boolField9C8;
	uint8_t boolField9C9;
	uint8_t UnknownData9CA[0x2];
	float LowFuelLevel; /* Ofs: 0x9CC Size: 0x4 - FloatProperty VehicleBase.VehicleBase_C.LowFuelLevel */
	float LastFuelConsumptionTime; /* Ofs: 0x9D0 Size: 0x4 - FloatProperty VehicleBase.VehicleBase_C.LastFuelConsumptionTime */


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0x840, value); }
	inline bool SetThirdPersonCameraInVehicle(t_structHelper inst, ExternalPtr<struct UCameraComponent> value) { inst.WriteOffset(0x848, value); }
	inline bool SetThirdPersonSpringArmInVehicle(t_structHelper inst, ExternalPtr<struct USpringArmInVehicleComponent> value) { inst.WriteOffset(0x850, value); }
	inline bool SetFirstPersonCameraInVehicle(t_structHelper inst, ExternalPtr<struct UCameraComponent> value) { inst.WriteOffset(0x858, value); }
	inline bool SetFirstPersonSpringArmInVehicle(t_structHelper inst, ExternalPtr<struct USpringArmInVehicleComponent> value) { inst.WriteOffset(0x860, value); }
	inline bool SetRadialForce(t_structHelper inst, ExternalPtr<struct URadialForceComponent> value) { inst.WriteOffset(0x868, value); }
	inline bool SetImpactModifier(t_structHelper inst, float value) { inst.WriteOffset(0x870, value); }
	inline bool SetImpactAbsorption(t_structHelper inst, float value) { inst.WriteOffset(0x874, value); }
	inline bool SetImpactAbsorption_Console(t_structHelper inst, float value) { inst.WriteOffset(0x878, value); }
	inline bool SetImpactModifierUpsideDown(t_structHelper inst, float value) { inst.WriteOffset(0x87C, value); }
	inline bool SetImpactAbsorptionUpsideDown(t_structHelper inst, float value) { inst.WriteOffset(0x880, value); }
	inline bool SetFuelConsumptionModifierBoost(t_structHelper inst, float value) { inst.WriteOffset(0x884, value); }
	inline bool SetImpactAbsorptionPassenger(t_structHelper inst, float value) { inst.WriteOffset(0x888, value); }
	inline bool SetImpactAbsorptionPassenger_Console(t_structHelper inst, float value) { inst.WriteOffset(0x88C, value); }
	inline bool SetImpactAbsorptionPassengerUpsideDown(t_structHelper inst, float value) { inst.WriteOffset(0x890, value); }
	inline bool SetLaunchVelocityFactorOnHitCharacter(t_structHelper inst, float value) { inst.WriteOffset(0x894, value); }
	inline bool IsLightsOn()
	{
		return boolField898& 0x1;
	}
	inline bool SetIsLightsOn(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x898, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool IsBrakeEngaging()
	{
		return boolField899& 0x1;
	}
	inline bool SetIsBrakeEngaging(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x899, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool IsReverseEngaging()
	{
		return boolField89A& 0x1;
	}
	inline bool SetIsReverseEngaging(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x89A, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool IsHandBraking()
	{
		return boolField89B& 0x1;
	}
	inline bool SetIsHandBraking(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x89B, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetBrakeLightIntensity_On(t_structHelper inst, float value) { inst.WriteOffset(0x89C, value); }
	inline bool SetBrakeLightIntensity_Off(t_structHelper inst, float value) { inst.WriteOffset(0x8A0, value); }
	inline bool SetExplosionRadius_Inner(t_structHelper inst, float value) { inst.WriteOffset(0x8A4, value); }
	inline bool SetExplosionRadius_Outer(t_structHelper inst, float value) { inst.WriteOffset(0x8A8, value); }
	inline bool SetDamageCurve(t_structHelper inst, ExternalPtr<struct UCurveFloat> value) { inst.WriteOffset(0x8B0, value); }
	inline bool SetThrottle(t_structHelper inst, float value) { inst.WriteOffset(0x8B8, value); }
	inline bool SetFuelConsumptionCurve(t_structHelper inst, ExternalPtr<struct UCurveFloat> value) { inst.WriteOffset(0x8C0, value); }
	inline bool SetFuelEfficiency(t_structHelper inst, float value) { inst.WriteOffset(0x8C8, value); }
	inline bool SetTslWheeledVehicleMovementRef(t_structHelper inst, ExternalPtr<struct UTslWheeledVehicleMovement> value) { inst.WriteOffset(0x8D0, value); }
	inline bool SetDriveControllerrRef(t_structHelper inst, ExternalPtr<struct UTslPlayerController> value) { inst.WriteOffset(0x8D8, value); }
	inline bool SetWheelsLatSlip_1(t_structHelper inst, TArray<float> value) { inst.WriteOffset(0x8E0, value); }
	inline bool SetWheelsLongSlip_1(t_structHelper inst, TArray<float> value) { inst.WriteOffset(0x8F0, value); }
	inline bool SetFuelConsumptionModifierIdle(t_structHelper inst, float value) { inst.WriteOffset(0x900, value); }
	inline bool SetSpeedKPH_1(t_structHelper inst, float value) { inst.WriteOffset(0x904, value); }
	inline bool SetWheelsSuspensionOffset_1(t_structHelper inst, TArray<float> value) { inst.WriteOffset(0x908, value); }
	inline bool SetWheelsContactSurface_1(t_structHelper inst, TArray<ExternalPtr<struct UPhysicalMaterial>> value) { inst.WriteOffset(0x918, value); }
	inline bool SetWheelsRotationSpeed(t_structHelper inst, TArray<float> value) { inst.WriteOffset(0x928, value); }
	inline bool SetWheelsSuspensionMaxDrop_1(t_structHelper inst, TArray<float> value) { inst.WriteOffset(0x938, value); }
	inline bool SetWheelsSuspensionMaxRaise_1(t_structHelper inst, TArray<float> value) { inst.WriteOffset(0x948, value); }
	inline bool SetRPM_1(t_structHelper inst, float value) { inst.WriteOffset(0x958, value); }
	inline bool TestBoostingAKEvent()
	{
		return boolField95C& 0x1;
	}
	inline bool SetTestBoostingAKEvent(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x95C, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool TestBoostingAKEvent_prev()
	{
		return boolField95D& 0x1;
	}
	inline bool SetTestBoostingAKEvent_prev(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x95D, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool TestThrottlingAKEvent()
	{
		return boolField95E& 0x1;
	}
	inline bool SetTestThrottlingAKEvent(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x95E, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool TestThrottlingAKEvent_prev()
	{
		return boolField95F& 0x1;
	}
	inline bool SetTestThrottlingAKEvent_prev(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x95F, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool TestSteeringAKEvent()
	{
		return boolField960& 0x1;
	}
	inline bool SetTestSteeringAKEvent(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x960, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool TestSteeringAKEvent_prev()
	{
		return boolField961& 0x1;
	}
	inline bool SetTestSteeringAKEvent_prev(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x961, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetBrake_1(t_structHelper inst, float value) { inst.WriteOffset(0x964, value); }
	inline bool TestBrakingAKEvent()
	{
		return boolField968& 0x1;
	}
	inline bool SetTestBrakingAKEvent(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x968, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetTestWheelsContactSurface_prev_1(t_structHelper inst, TArray<ExternalPtr<struct UPhysicalMaterial>> value) { inst.WriteOffset(0x970, value); }
	inline bool TestBrakingAKEvent_prev()
	{
		return boolField980& 0x1;
	}
	inline bool SetTestBrakingAKEvent_prev(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x980, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetWheelsSuspensionOffsetNorm(t_structHelper inst, TArray<float> value) { inst.WriteOffset(0x988, value); }
	inline bool SetWheelsWaterDepth_1(t_structHelper inst, TArray<float> value) { inst.WriteOffset(0x998, value); }
	inline bool SetFlatTireCount_1(t_structHelper inst, float value) { inst.WriteOffset(0x9A8, value); }
	inline bool bUseDynamicCamera()
	{
		return boolField9AC& 0x1;
	}
	inline bool SetbUseDynamicCamera(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x9AC, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetLastVelocity(t_structHelper inst, FVector value) { inst.WriteOffset(0x9B0, value); }
	inline bool SetAcceleration(t_structHelper inst, FVector value) { inst.WriteOffset(0x9BC, value); }
	inline bool bTickFuelIndicator()
	{
		return boolField9C8& 0x1;
	}
	inline bool SetbTickFuelIndicator(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x9C8, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bTickBoostIndicator()
	{
		return boolField9C9& 0x1;
	}
	inline bool SetbTickBoostIndicator(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x9C9, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetLowFuelLevel(t_structHelper inst, float value) { inst.WriteOffset(0x9CC, value); }
	inline bool SetLastFuelConsumptionTime(t_structHelper inst, float value) { inst.WriteOffset(0x9D0, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUVehicleBase_C = sizeof(UVehicleBase_C); // 2516
    static_assert(sizeof(UVehicleBase_C) == 0x9D4, "Size of UVehicleBase_C is not correct.");
	auto constexpr UVehicleBase_C_UberGraphFrame_Offset = offsetof(UVehicleBase_C, UberGraphFrame);
	static_assert(UVehicleBase_C_UberGraphFrame_Offset == 0x840, "UVehicleBase_C::UberGraphFrame offset is not 840");
	auto constexpr UVehicleBase_C_ThirdPersonCameraInVehicle_Offset = offsetof(UVehicleBase_C, ThirdPersonCameraInVehicle);
	static_assert(UVehicleBase_C_ThirdPersonCameraInVehicle_Offset == 0x848, "UVehicleBase_C::ThirdPersonCameraInVehicle offset is not 848");
	auto constexpr UVehicleBase_C_ThirdPersonSpringArmInVehicle_Offset = offsetof(UVehicleBase_C, ThirdPersonSpringArmInVehicle);
	static_assert(UVehicleBase_C_ThirdPersonSpringArmInVehicle_Offset == 0x850, "UVehicleBase_C::ThirdPersonSpringArmInVehicle offset is not 850");
	auto constexpr UVehicleBase_C_FirstPersonCameraInVehicle_Offset = offsetof(UVehicleBase_C, FirstPersonCameraInVehicle);
	static_assert(UVehicleBase_C_FirstPersonCameraInVehicle_Offset == 0x858, "UVehicleBase_C::FirstPersonCameraInVehicle offset is not 858");
	auto constexpr UVehicleBase_C_FirstPersonSpringArmInVehicle_Offset = offsetof(UVehicleBase_C, FirstPersonSpringArmInVehicle);
	static_assert(UVehicleBase_C_FirstPersonSpringArmInVehicle_Offset == 0x860, "UVehicleBase_C::FirstPersonSpringArmInVehicle offset is not 860");
	auto constexpr UVehicleBase_C_RadialForce_Offset = offsetof(UVehicleBase_C, RadialForce);
	static_assert(UVehicleBase_C_RadialForce_Offset == 0x868, "UVehicleBase_C::RadialForce offset is not 868");
	auto constexpr UVehicleBase_C_ImpactModifier_Offset = offsetof(UVehicleBase_C, ImpactModifier);
	static_assert(UVehicleBase_C_ImpactModifier_Offset == 0x870, "UVehicleBase_C::ImpactModifier offset is not 870");
	auto constexpr UVehicleBase_C_ImpactAbsorption_Offset = offsetof(UVehicleBase_C, ImpactAbsorption);
	static_assert(UVehicleBase_C_ImpactAbsorption_Offset == 0x874, "UVehicleBase_C::ImpactAbsorption offset is not 874");
	auto constexpr UVehicleBase_C_ImpactAbsorption_Console_Offset = offsetof(UVehicleBase_C, ImpactAbsorption_Console);
	static_assert(UVehicleBase_C_ImpactAbsorption_Console_Offset == 0x878, "UVehicleBase_C::ImpactAbsorption_Console offset is not 878");
	auto constexpr UVehicleBase_C_ImpactModifierUpsideDown_Offset = offsetof(UVehicleBase_C, ImpactModifierUpsideDown);
	static_assert(UVehicleBase_C_ImpactModifierUpsideDown_Offset == 0x87c, "UVehicleBase_C::ImpactModifierUpsideDown offset is not 87c");
	auto constexpr UVehicleBase_C_ImpactAbsorptionUpsideDown_Offset = offsetof(UVehicleBase_C, ImpactAbsorptionUpsideDown);
	static_assert(UVehicleBase_C_ImpactAbsorptionUpsideDown_Offset == 0x880, "UVehicleBase_C::ImpactAbsorptionUpsideDown offset is not 880");
	auto constexpr UVehicleBase_C_FuelConsumptionModifierBoost_Offset = offsetof(UVehicleBase_C, FuelConsumptionModifierBoost);
	static_assert(UVehicleBase_C_FuelConsumptionModifierBoost_Offset == 0x884, "UVehicleBase_C::FuelConsumptionModifierBoost offset is not 884");
	auto constexpr UVehicleBase_C_ImpactAbsorptionPassenger_Offset = offsetof(UVehicleBase_C, ImpactAbsorptionPassenger);
	static_assert(UVehicleBase_C_ImpactAbsorptionPassenger_Offset == 0x888, "UVehicleBase_C::ImpactAbsorptionPassenger offset is not 888");
	auto constexpr UVehicleBase_C_ImpactAbsorptionPassenger_Console_Offset = offsetof(UVehicleBase_C, ImpactAbsorptionPassenger_Console);
	static_assert(UVehicleBase_C_ImpactAbsorptionPassenger_Console_Offset == 0x88c, "UVehicleBase_C::ImpactAbsorptionPassenger_Console offset is not 88c");
	auto constexpr UVehicleBase_C_ImpactAbsorptionPassengerUpsideDown_Offset = offsetof(UVehicleBase_C, ImpactAbsorptionPassengerUpsideDown);
	static_assert(UVehicleBase_C_ImpactAbsorptionPassengerUpsideDown_Offset == 0x890, "UVehicleBase_C::ImpactAbsorptionPassengerUpsideDown offset is not 890");
	auto constexpr UVehicleBase_C_LaunchVelocityFactorOnHitCharacter_Offset = offsetof(UVehicleBase_C, LaunchVelocityFactorOnHitCharacter);
	static_assert(UVehicleBase_C_LaunchVelocityFactorOnHitCharacter_Offset == 0x894, "UVehicleBase_C::LaunchVelocityFactorOnHitCharacter offset is not 894");
	auto constexpr UVehicleBase_C_boolField898_Offset = offsetof(UVehicleBase_C, boolField898);
	static_assert(UVehicleBase_C_boolField898_Offset == 0x898, "UVehicleBase_C::boolField898 offset is not 898");
	auto constexpr UVehicleBase_C_boolField899_Offset = offsetof(UVehicleBase_C, boolField899);
	static_assert(UVehicleBase_C_boolField899_Offset == 0x899, "UVehicleBase_C::boolField899 offset is not 899");
	auto constexpr UVehicleBase_C_boolField89A_Offset = offsetof(UVehicleBase_C, boolField89A);
	static_assert(UVehicleBase_C_boolField89A_Offset == 0x89a, "UVehicleBase_C::boolField89A offset is not 89a");
	auto constexpr UVehicleBase_C_boolField89B_Offset = offsetof(UVehicleBase_C, boolField89B);
	static_assert(UVehicleBase_C_boolField89B_Offset == 0x89b, "UVehicleBase_C::boolField89B offset is not 89b");
	auto constexpr UVehicleBase_C_BrakeLightIntensity_On_Offset = offsetof(UVehicleBase_C, BrakeLightIntensity_On);
	static_assert(UVehicleBase_C_BrakeLightIntensity_On_Offset == 0x89c, "UVehicleBase_C::BrakeLightIntensity_On offset is not 89c");
	auto constexpr UVehicleBase_C_BrakeLightIntensity_Off_Offset = offsetof(UVehicleBase_C, BrakeLightIntensity_Off);
	static_assert(UVehicleBase_C_BrakeLightIntensity_Off_Offset == 0x8a0, "UVehicleBase_C::BrakeLightIntensity_Off offset is not 8a0");
	auto constexpr UVehicleBase_C_ExplosionRadius_Inner_Offset = offsetof(UVehicleBase_C, ExplosionRadius_Inner);
	static_assert(UVehicleBase_C_ExplosionRadius_Inner_Offset == 0x8a4, "UVehicleBase_C::ExplosionRadius_Inner offset is not 8a4");
	auto constexpr UVehicleBase_C_ExplosionRadius_Outer_Offset = offsetof(UVehicleBase_C, ExplosionRadius_Outer);
	static_assert(UVehicleBase_C_ExplosionRadius_Outer_Offset == 0x8a8, "UVehicleBase_C::ExplosionRadius_Outer offset is not 8a8");
	auto constexpr UVehicleBase_C_DamageCurve_Offset = offsetof(UVehicleBase_C, DamageCurve);
	static_assert(UVehicleBase_C_DamageCurve_Offset == 0x8b0, "UVehicleBase_C::DamageCurve offset is not 8b0");
	auto constexpr UVehicleBase_C_Throttle_Offset = offsetof(UVehicleBase_C, Throttle);
	static_assert(UVehicleBase_C_Throttle_Offset == 0x8b8, "UVehicleBase_C::Throttle offset is not 8b8");
	auto constexpr UVehicleBase_C_FuelConsumptionCurve_Offset = offsetof(UVehicleBase_C, FuelConsumptionCurve);
	static_assert(UVehicleBase_C_FuelConsumptionCurve_Offset == 0x8c0, "UVehicleBase_C::FuelConsumptionCurve offset is not 8c0");
	auto constexpr UVehicleBase_C_FuelEfficiency_Offset = offsetof(UVehicleBase_C, FuelEfficiency);
	static_assert(UVehicleBase_C_FuelEfficiency_Offset == 0x8c8, "UVehicleBase_C::FuelEfficiency offset is not 8c8");
	auto constexpr UVehicleBase_C_TslWheeledVehicleMovementRef_Offset = offsetof(UVehicleBase_C, TslWheeledVehicleMovementRef);
	static_assert(UVehicleBase_C_TslWheeledVehicleMovementRef_Offset == 0x8d0, "UVehicleBase_C::TslWheeledVehicleMovementRef offset is not 8d0");
	auto constexpr UVehicleBase_C_DriveControllerrRef_Offset = offsetof(UVehicleBase_C, DriveControllerrRef);
	static_assert(UVehicleBase_C_DriveControllerrRef_Offset == 0x8d8, "UVehicleBase_C::DriveControllerrRef offset is not 8d8");
	auto constexpr UVehicleBase_C_WheelsLatSlip_1_Offset = offsetof(UVehicleBase_C, WheelsLatSlip_1);
	static_assert(UVehicleBase_C_WheelsLatSlip_1_Offset == 0x8e0, "UVehicleBase_C::WheelsLatSlip_1 offset is not 8e0");
	auto constexpr UVehicleBase_C_WheelsLongSlip_1_Offset = offsetof(UVehicleBase_C, WheelsLongSlip_1);
	static_assert(UVehicleBase_C_WheelsLongSlip_1_Offset == 0x8f0, "UVehicleBase_C::WheelsLongSlip_1 offset is not 8f0");
	auto constexpr UVehicleBase_C_FuelConsumptionModifierIdle_Offset = offsetof(UVehicleBase_C, FuelConsumptionModifierIdle);
	static_assert(UVehicleBase_C_FuelConsumptionModifierIdle_Offset == 0x900, "UVehicleBase_C::FuelConsumptionModifierIdle offset is not 900");
	auto constexpr UVehicleBase_C_SpeedKPH_1_Offset = offsetof(UVehicleBase_C, SpeedKPH_1);
	static_assert(UVehicleBase_C_SpeedKPH_1_Offset == 0x904, "UVehicleBase_C::SpeedKPH_1 offset is not 904");
	auto constexpr UVehicleBase_C_WheelsSuspensionOffset_1_Offset = offsetof(UVehicleBase_C, WheelsSuspensionOffset_1);
	static_assert(UVehicleBase_C_WheelsSuspensionOffset_1_Offset == 0x908, "UVehicleBase_C::WheelsSuspensionOffset_1 offset is not 908");
	auto constexpr UVehicleBase_C_WheelsContactSurface_1_Offset = offsetof(UVehicleBase_C, WheelsContactSurface_1);
	static_assert(UVehicleBase_C_WheelsContactSurface_1_Offset == 0x918, "UVehicleBase_C::WheelsContactSurface_1 offset is not 918");
	auto constexpr UVehicleBase_C_WheelsRotationSpeed_Offset = offsetof(UVehicleBase_C, WheelsRotationSpeed);
	static_assert(UVehicleBase_C_WheelsRotationSpeed_Offset == 0x928, "UVehicleBase_C::WheelsRotationSpeed offset is not 928");
	auto constexpr UVehicleBase_C_WheelsSuspensionMaxDrop_1_Offset = offsetof(UVehicleBase_C, WheelsSuspensionMaxDrop_1);
	static_assert(UVehicleBase_C_WheelsSuspensionMaxDrop_1_Offset == 0x938, "UVehicleBase_C::WheelsSuspensionMaxDrop_1 offset is not 938");
	auto constexpr UVehicleBase_C_WheelsSuspensionMaxRaise_1_Offset = offsetof(UVehicleBase_C, WheelsSuspensionMaxRaise_1);
	static_assert(UVehicleBase_C_WheelsSuspensionMaxRaise_1_Offset == 0x948, "UVehicleBase_C::WheelsSuspensionMaxRaise_1 offset is not 948");
	auto constexpr UVehicleBase_C_RPM_1_Offset = offsetof(UVehicleBase_C, RPM_1);
	static_assert(UVehicleBase_C_RPM_1_Offset == 0x958, "UVehicleBase_C::RPM_1 offset is not 958");
	auto constexpr UVehicleBase_C_boolField95C_Offset = offsetof(UVehicleBase_C, boolField95C);
	static_assert(UVehicleBase_C_boolField95C_Offset == 0x95c, "UVehicleBase_C::boolField95C offset is not 95c");
	auto constexpr UVehicleBase_C_boolField95D_Offset = offsetof(UVehicleBase_C, boolField95D);
	static_assert(UVehicleBase_C_boolField95D_Offset == 0x95d, "UVehicleBase_C::boolField95D offset is not 95d");
	auto constexpr UVehicleBase_C_boolField95E_Offset = offsetof(UVehicleBase_C, boolField95E);
	static_assert(UVehicleBase_C_boolField95E_Offset == 0x95e, "UVehicleBase_C::boolField95E offset is not 95e");
	auto constexpr UVehicleBase_C_boolField95F_Offset = offsetof(UVehicleBase_C, boolField95F);
	static_assert(UVehicleBase_C_boolField95F_Offset == 0x95f, "UVehicleBase_C::boolField95F offset is not 95f");
	auto constexpr UVehicleBase_C_boolField960_Offset = offsetof(UVehicleBase_C, boolField960);
	static_assert(UVehicleBase_C_boolField960_Offset == 0x960, "UVehicleBase_C::boolField960 offset is not 960");
	auto constexpr UVehicleBase_C_boolField961_Offset = offsetof(UVehicleBase_C, boolField961);
	static_assert(UVehicleBase_C_boolField961_Offset == 0x961, "UVehicleBase_C::boolField961 offset is not 961");
	auto constexpr UVehicleBase_C_Brake_1_Offset = offsetof(UVehicleBase_C, Brake_1);
	static_assert(UVehicleBase_C_Brake_1_Offset == 0x964, "UVehicleBase_C::Brake_1 offset is not 964");
	auto constexpr UVehicleBase_C_boolField968_Offset = offsetof(UVehicleBase_C, boolField968);
	static_assert(UVehicleBase_C_boolField968_Offset == 0x968, "UVehicleBase_C::boolField968 offset is not 968");
	auto constexpr UVehicleBase_C_TestWheelsContactSurface_prev_1_Offset = offsetof(UVehicleBase_C, TestWheelsContactSurface_prev_1);
	static_assert(UVehicleBase_C_TestWheelsContactSurface_prev_1_Offset == 0x970, "UVehicleBase_C::TestWheelsContactSurface_prev_1 offset is not 970");
	auto constexpr UVehicleBase_C_boolField980_Offset = offsetof(UVehicleBase_C, boolField980);
	static_assert(UVehicleBase_C_boolField980_Offset == 0x980, "UVehicleBase_C::boolField980 offset is not 980");
	auto constexpr UVehicleBase_C_WheelsSuspensionOffsetNorm_Offset = offsetof(UVehicleBase_C, WheelsSuspensionOffsetNorm);
	static_assert(UVehicleBase_C_WheelsSuspensionOffsetNorm_Offset == 0x988, "UVehicleBase_C::WheelsSuspensionOffsetNorm offset is not 988");
	auto constexpr UVehicleBase_C_WheelsWaterDepth_1_Offset = offsetof(UVehicleBase_C, WheelsWaterDepth_1);
	static_assert(UVehicleBase_C_WheelsWaterDepth_1_Offset == 0x998, "UVehicleBase_C::WheelsWaterDepth_1 offset is not 998");
	auto constexpr UVehicleBase_C_FlatTireCount_1_Offset = offsetof(UVehicleBase_C, FlatTireCount_1);
	static_assert(UVehicleBase_C_FlatTireCount_1_Offset == 0x9a8, "UVehicleBase_C::FlatTireCount_1 offset is not 9a8");
	auto constexpr UVehicleBase_C_boolField9AC_Offset = offsetof(UVehicleBase_C, boolField9AC);
	static_assert(UVehicleBase_C_boolField9AC_Offset == 0x9ac, "UVehicleBase_C::boolField9AC offset is not 9ac");
	auto constexpr UVehicleBase_C_LastVelocity_Offset = offsetof(UVehicleBase_C, LastVelocity);
	static_assert(UVehicleBase_C_LastVelocity_Offset == 0x9b0, "UVehicleBase_C::LastVelocity offset is not 9b0");
	auto constexpr UVehicleBase_C_Acceleration_Offset = offsetof(UVehicleBase_C, Acceleration);
	static_assert(UVehicleBase_C_Acceleration_Offset == 0x9bc, "UVehicleBase_C::Acceleration offset is not 9bc");
	auto constexpr UVehicleBase_C_boolField9C8_Offset = offsetof(UVehicleBase_C, boolField9C8);
	static_assert(UVehicleBase_C_boolField9C8_Offset == 0x9c8, "UVehicleBase_C::boolField9C8 offset is not 9c8");
	auto constexpr UVehicleBase_C_boolField9C9_Offset = offsetof(UVehicleBase_C, boolField9C9);
	static_assert(UVehicleBase_C_boolField9C9_Offset == 0x9c9, "UVehicleBase_C::boolField9C9 offset is not 9c9");
	auto constexpr UVehicleBase_C_LowFuelLevel_Offset = offsetof(UVehicleBase_C, LowFuelLevel);
	static_assert(UVehicleBase_C_LowFuelLevel_Offset == 0x9cc, "UVehicleBase_C::LowFuelLevel offset is not 9cc");
	auto constexpr UVehicleBase_C_LastFuelConsumptionTime_Offset = offsetof(UVehicleBase_C, LastFuelConsumptionTime);
	static_assert(UVehicleBase_C_LastFuelConsumptionTime_Offset == 0x9d0, "UVehicleBase_C::LastFuelConsumptionTime offset is not 9d0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
