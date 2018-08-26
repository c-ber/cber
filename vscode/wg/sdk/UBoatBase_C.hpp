#pragma once
#include "UTslFloatingVehicle.hpp"
#include "FPointerToUberGraphFrame.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBoatBase_C // Size: 0x59C
	: public UTslFloatingVehicle // Size: 0x520
{
private:
	typedef UBoatBase_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(116630); // id32("BlueprintGeneratedClass BoatBase.BoatBase_C")
		return ptr;
	}
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0x520 Size: 0x8 - StructProperty BoatBase.BoatBase_C.UberGraphFrame */
	ExternalPtr<struct URadialForceComponent> RadialForce; /* Ofs: 0x528 Size: 0x8 - ObjectProperty BoatBase.BoatBase_C.RadialForce */
	ExternalPtr<struct UCameraComponent> FirstPersonCameraInVehicle; /* Ofs: 0x530 Size: 0x8 - ObjectProperty BoatBase.BoatBase_C.FirstPersonCameraInVehicle */
	ExternalPtr<struct UCameraComponent> ThirdPersonCameraInVehicle; /* Ofs: 0x538 Size: 0x8 - ObjectProperty BoatBase.BoatBase_C.ThirdPersonCameraInVehicle */
	ExternalPtr<struct USpringArmInVehicleComponent> FirstPersonSpringArmInVehicle; /* Ofs: 0x540 Size: 0x8 - ObjectProperty BoatBase.BoatBase_C.FirstPersonSpringArmInVehicle */
	ExternalPtr<struct USpringArmInVehicleComponent> ThirdPersonSpringArmInVehicle; /* Ofs: 0x548 Size: 0x8 - ObjectProperty BoatBase.BoatBase_C.ThirdPersonSpringArmInVehicle */
	float LaunchVelocityFactorOnHitCharacter; /* Ofs: 0x550 Size: 0x4 - FloatProperty BoatBase.BoatBase_C.LaunchVelocityFactorOnHitCharacter */
	uint8_t UnknownData554[0x4];
	ExternalPtr<struct UCurveFloat> DamageCurve; /* Ofs: 0x558 Size: 0x8 - ObjectProperty BoatBase.BoatBase_C.DamageCurve */
	float ImpactModifier; /* Ofs: 0x560 Size: 0x4 - FloatProperty BoatBase.BoatBase_C.ImpactModifier */
	float ImpactModifierUpsideDown; /* Ofs: 0x564 Size: 0x4 - FloatProperty BoatBase.BoatBase_C.ImpactModifierUpsideDown */
	float ImpactAbsorption; /* Ofs: 0x568 Size: 0x4 - FloatProperty BoatBase.BoatBase_C.ImpactAbsorption */
	float ImpactAbsorptionUpsideDown; /* Ofs: 0x56C Size: 0x4 - FloatProperty BoatBase.BoatBase_C.ImpactAbsorptionUpsideDown */
	float ImpactAbsorptionPassenger; /* Ofs: 0x570 Size: 0x4 - FloatProperty BoatBase.BoatBase_C.ImpactAbsorptionPassenger */
	float ImpactAbsorptionPassengerUpsideDown; /* Ofs: 0x574 Size: 0x4 - FloatProperty BoatBase.BoatBase_C.ImpactAbsorptionPassengerUpsideDown */
	float FuelConsumptionModifierBoost; /* Ofs: 0x578 Size: 0x4 - FloatProperty BoatBase.BoatBase_C.FuelConsumptionModifierBoost */
	float ExplosionRadius_Inner; /* Ofs: 0x57C Size: 0x4 - FloatProperty BoatBase.BoatBase_C.ExplosionRadius_Inner */
	float ExplosionRadius_Outer; /* Ofs: 0x580 Size: 0x4 - FloatProperty BoatBase.BoatBase_C.ExplosionRadius_Outer */
	uint8_t UnknownData584[0x4];
	ExternalPtr<struct UCurveFloat> FuelConsumptionCurve; /* Ofs: 0x588 Size: 0x8 - ObjectProperty BoatBase.BoatBase_C.FuelConsumptionCurve */
	float FuelEfficiency; /* Ofs: 0x590 Size: 0x4 - FloatProperty BoatBase.BoatBase_C.FuelEfficiency */
	float FuelConsumptionModifierIdle; /* Ofs: 0x594 Size: 0x4 - FloatProperty BoatBase.BoatBase_C.FuelConsumptionModifierIdle */
	float LastFuelConsumptionTime; /* Ofs: 0x598 Size: 0x4 - FloatProperty BoatBase.BoatBase_C.LastFuelConsumptionTime */


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0x520, value); }
	inline bool SetRadialForce(t_structHelper inst, ExternalPtr<struct URadialForceComponent> value) { inst.WriteOffset(0x528, value); }
	inline bool SetFirstPersonCameraInVehicle(t_structHelper inst, ExternalPtr<struct UCameraComponent> value) { inst.WriteOffset(0x530, value); }
	inline bool SetThirdPersonCameraInVehicle(t_structHelper inst, ExternalPtr<struct UCameraComponent> value) { inst.WriteOffset(0x538, value); }
	inline bool SetFirstPersonSpringArmInVehicle(t_structHelper inst, ExternalPtr<struct USpringArmInVehicleComponent> value) { inst.WriteOffset(0x540, value); }
	inline bool SetThirdPersonSpringArmInVehicle(t_structHelper inst, ExternalPtr<struct USpringArmInVehicleComponent> value) { inst.WriteOffset(0x548, value); }
	inline bool SetLaunchVelocityFactorOnHitCharacter(t_structHelper inst, float value) { inst.WriteOffset(0x550, value); }
	inline bool SetDamageCurve(t_structHelper inst, ExternalPtr<struct UCurveFloat> value) { inst.WriteOffset(0x558, value); }
	inline bool SetImpactModifier(t_structHelper inst, float value) { inst.WriteOffset(0x560, value); }
	inline bool SetImpactModifierUpsideDown(t_structHelper inst, float value) { inst.WriteOffset(0x564, value); }
	inline bool SetImpactAbsorption(t_structHelper inst, float value) { inst.WriteOffset(0x568, value); }
	inline bool SetImpactAbsorptionUpsideDown(t_structHelper inst, float value) { inst.WriteOffset(0x56C, value); }
	inline bool SetImpactAbsorptionPassenger(t_structHelper inst, float value) { inst.WriteOffset(0x570, value); }
	inline bool SetImpactAbsorptionPassengerUpsideDown(t_structHelper inst, float value) { inst.WriteOffset(0x574, value); }
	inline bool SetFuelConsumptionModifierBoost(t_structHelper inst, float value) { inst.WriteOffset(0x578, value); }
	inline bool SetExplosionRadius_Inner(t_structHelper inst, float value) { inst.WriteOffset(0x57C, value); }
	inline bool SetExplosionRadius_Outer(t_structHelper inst, float value) { inst.WriteOffset(0x580, value); }
	inline bool SetFuelConsumptionCurve(t_structHelper inst, ExternalPtr<struct UCurveFloat> value) { inst.WriteOffset(0x588, value); }
	inline bool SetFuelEfficiency(t_structHelper inst, float value) { inst.WriteOffset(0x590, value); }
	inline bool SetFuelConsumptionModifierIdle(t_structHelper inst, float value) { inst.WriteOffset(0x594, value); }
	inline bool SetLastFuelConsumptionTime(t_structHelper inst, float value) { inst.WriteOffset(0x598, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBoatBase_C = sizeof(UBoatBase_C); // 1436
    static_assert(sizeof(UBoatBase_C) == 0x59C, "Size of UBoatBase_C is not correct.");
	auto constexpr UBoatBase_C_UberGraphFrame_Offset = offsetof(UBoatBase_C, UberGraphFrame);
	static_assert(UBoatBase_C_UberGraphFrame_Offset == 0x520, "UBoatBase_C::UberGraphFrame offset is not 520");
	auto constexpr UBoatBase_C_RadialForce_Offset = offsetof(UBoatBase_C, RadialForce);
	static_assert(UBoatBase_C_RadialForce_Offset == 0x528, "UBoatBase_C::RadialForce offset is not 528");
	auto constexpr UBoatBase_C_FirstPersonCameraInVehicle_Offset = offsetof(UBoatBase_C, FirstPersonCameraInVehicle);
	static_assert(UBoatBase_C_FirstPersonCameraInVehicle_Offset == 0x530, "UBoatBase_C::FirstPersonCameraInVehicle offset is not 530");
	auto constexpr UBoatBase_C_ThirdPersonCameraInVehicle_Offset = offsetof(UBoatBase_C, ThirdPersonCameraInVehicle);
	static_assert(UBoatBase_C_ThirdPersonCameraInVehicle_Offset == 0x538, "UBoatBase_C::ThirdPersonCameraInVehicle offset is not 538");
	auto constexpr UBoatBase_C_FirstPersonSpringArmInVehicle_Offset = offsetof(UBoatBase_C, FirstPersonSpringArmInVehicle);
	static_assert(UBoatBase_C_FirstPersonSpringArmInVehicle_Offset == 0x540, "UBoatBase_C::FirstPersonSpringArmInVehicle offset is not 540");
	auto constexpr UBoatBase_C_ThirdPersonSpringArmInVehicle_Offset = offsetof(UBoatBase_C, ThirdPersonSpringArmInVehicle);
	static_assert(UBoatBase_C_ThirdPersonSpringArmInVehicle_Offset == 0x548, "UBoatBase_C::ThirdPersonSpringArmInVehicle offset is not 548");
	auto constexpr UBoatBase_C_LaunchVelocityFactorOnHitCharacter_Offset = offsetof(UBoatBase_C, LaunchVelocityFactorOnHitCharacter);
	static_assert(UBoatBase_C_LaunchVelocityFactorOnHitCharacter_Offset == 0x550, "UBoatBase_C::LaunchVelocityFactorOnHitCharacter offset is not 550");
	auto constexpr UBoatBase_C_DamageCurve_Offset = offsetof(UBoatBase_C, DamageCurve);
	static_assert(UBoatBase_C_DamageCurve_Offset == 0x558, "UBoatBase_C::DamageCurve offset is not 558");
	auto constexpr UBoatBase_C_ImpactModifier_Offset = offsetof(UBoatBase_C, ImpactModifier);
	static_assert(UBoatBase_C_ImpactModifier_Offset == 0x560, "UBoatBase_C::ImpactModifier offset is not 560");
	auto constexpr UBoatBase_C_ImpactModifierUpsideDown_Offset = offsetof(UBoatBase_C, ImpactModifierUpsideDown);
	static_assert(UBoatBase_C_ImpactModifierUpsideDown_Offset == 0x564, "UBoatBase_C::ImpactModifierUpsideDown offset is not 564");
	auto constexpr UBoatBase_C_ImpactAbsorption_Offset = offsetof(UBoatBase_C, ImpactAbsorption);
	static_assert(UBoatBase_C_ImpactAbsorption_Offset == 0x568, "UBoatBase_C::ImpactAbsorption offset is not 568");
	auto constexpr UBoatBase_C_ImpactAbsorptionUpsideDown_Offset = offsetof(UBoatBase_C, ImpactAbsorptionUpsideDown);
	static_assert(UBoatBase_C_ImpactAbsorptionUpsideDown_Offset == 0x56c, "UBoatBase_C::ImpactAbsorptionUpsideDown offset is not 56c");
	auto constexpr UBoatBase_C_ImpactAbsorptionPassenger_Offset = offsetof(UBoatBase_C, ImpactAbsorptionPassenger);
	static_assert(UBoatBase_C_ImpactAbsorptionPassenger_Offset == 0x570, "UBoatBase_C::ImpactAbsorptionPassenger offset is not 570");
	auto constexpr UBoatBase_C_ImpactAbsorptionPassengerUpsideDown_Offset = offsetof(UBoatBase_C, ImpactAbsorptionPassengerUpsideDown);
	static_assert(UBoatBase_C_ImpactAbsorptionPassengerUpsideDown_Offset == 0x574, "UBoatBase_C::ImpactAbsorptionPassengerUpsideDown offset is not 574");
	auto constexpr UBoatBase_C_FuelConsumptionModifierBoost_Offset = offsetof(UBoatBase_C, FuelConsumptionModifierBoost);
	static_assert(UBoatBase_C_FuelConsumptionModifierBoost_Offset == 0x578, "UBoatBase_C::FuelConsumptionModifierBoost offset is not 578");
	auto constexpr UBoatBase_C_ExplosionRadius_Inner_Offset = offsetof(UBoatBase_C, ExplosionRadius_Inner);
	static_assert(UBoatBase_C_ExplosionRadius_Inner_Offset == 0x57c, "UBoatBase_C::ExplosionRadius_Inner offset is not 57c");
	auto constexpr UBoatBase_C_ExplosionRadius_Outer_Offset = offsetof(UBoatBase_C, ExplosionRadius_Outer);
	static_assert(UBoatBase_C_ExplosionRadius_Outer_Offset == 0x580, "UBoatBase_C::ExplosionRadius_Outer offset is not 580");
	auto constexpr UBoatBase_C_FuelConsumptionCurve_Offset = offsetof(UBoatBase_C, FuelConsumptionCurve);
	static_assert(UBoatBase_C_FuelConsumptionCurve_Offset == 0x588, "UBoatBase_C::FuelConsumptionCurve offset is not 588");
	auto constexpr UBoatBase_C_FuelEfficiency_Offset = offsetof(UBoatBase_C, FuelEfficiency);
	static_assert(UBoatBase_C_FuelEfficiency_Offset == 0x590, "UBoatBase_C::FuelEfficiency offset is not 590");
	auto constexpr UBoatBase_C_FuelConsumptionModifierIdle_Offset = offsetof(UBoatBase_C, FuelConsumptionModifierIdle);
	static_assert(UBoatBase_C_FuelConsumptionModifierIdle_Offset == 0x594, "UBoatBase_C::FuelConsumptionModifierIdle offset is not 594");
	auto constexpr UBoatBase_C_LastFuelConsumptionTime_Offset = offsetof(UBoatBase_C, LastFuelConsumptionTime);
	static_assert(UBoatBase_C_LastFuelConsumptionTime_Offset == 0x598, "UBoatBase_C::LastFuelConsumptionTime offset is not 598");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
