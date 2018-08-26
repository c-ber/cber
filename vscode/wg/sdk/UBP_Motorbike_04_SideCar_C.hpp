#pragma once
#include "UTslMotorbikeVehicle_Sidecar.hpp"
#include "FPointerToUberGraphFrame.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBP_Motorbike_04_SideCar_C // Size: 0xADC
	: public UTslMotorbikeVehicle_Sidecar // Size: 0xA70
{
private:
	typedef UBP_Motorbike_04_SideCar_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(120408); // id32("BlueprintGeneratedClass BP_Motorbike_04_SideCar.BP_Motorbike_04_SideCar_C")
		return ptr;
	}
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0xA70 Size: 0x8 - StructProperty BP_Motorbike_04_SideCar.BP_Motorbike_04_SideCar_C.UberGraphFrame */
	ExternalPtr<struct USphereComponent> Sphere2; /* Ofs: 0xA78 Size: 0x8 - ObjectProperty BP_Motorbike_04_SideCar.BP_Motorbike_04_SideCar_C.Sphere2 */
	ExternalPtr<struct UMotorbikeVehicleSeatInteraction> SideCarSeat; /* Ofs: 0xA80 Size: 0x8 - ObjectProperty BP_Motorbike_04_SideCar.BP_Motorbike_04_SideCar_C.SideCarSeat */
	ExternalPtr<struct USphereComponent> Sphere1; /* Ofs: 0xA88 Size: 0x8 - ObjectProperty BP_Motorbike_04_SideCar.BP_Motorbike_04_SideCar_C.Sphere1 */
	ExternalPtr<struct UMotorbikeVehicleSeatInteraction> PassengerSeat; /* Ofs: 0xA90 Size: 0x8 - ObjectProperty BP_Motorbike_04_SideCar.BP_Motorbike_04_SideCar_C.PassengerSeat */
	ExternalPtr<struct USphereComponent> Sphere; /* Ofs: 0xA98 Size: 0x8 - ObjectProperty BP_Motorbike_04_SideCar.BP_Motorbike_04_SideCar_C.Sphere */
	ExternalPtr<struct UMotorbikeVehicleSeatInteraction> DirverSeat; /* Ofs: 0xAA0 Size: 0x8 - ObjectProperty BP_Motorbike_04_SideCar.BP_Motorbike_04_SideCar_C.DirverSeat */
	ExternalPtr<struct URadialForceComponent> RadialForce; /* Ofs: 0xAA8 Size: 0x8 - ObjectProperty BP_Motorbike_04_SideCar.BP_Motorbike_04_SideCar_C.RadialForce */
	ExternalPtr<struct UCameraComponent> ThirdPersonCameraInVehicle; /* Ofs: 0xAB0 Size: 0x8 - ObjectProperty BP_Motorbike_04_SideCar.BP_Motorbike_04_SideCar_C.ThirdPersonCameraInVehicle */
	ExternalPtr<struct USpringArmInVehicleComponent> ThirdPersonSpringArmInVehicle; /* Ofs: 0xAB8 Size: 0x8 - ObjectProperty BP_Motorbike_04_SideCar.BP_Motorbike_04_SideCar_C.ThirdPersonSpringArmInVehicle */
	ExternalPtr<struct UCameraComponent> FirstPersonCameraInVehicle; /* Ofs: 0xAC0 Size: 0x8 - ObjectProperty BP_Motorbike_04_SideCar.BP_Motorbike_04_SideCar_C.FirstPersonCameraInVehicle */
	ExternalPtr<struct USpringArmInVehicleComponent> FirstPersonSpringArmInVehicle; /* Ofs: 0xAC8 Size: 0x8 - ObjectProperty BP_Motorbike_04_SideCar.BP_Motorbike_04_SideCar_C.FirstPersonSpringArmInVehicle */
	ExternalPtr<struct UTslWheeledVehicleMovement> TslMovementRef; /* Ofs: 0xAD0 Size: 0x8 - ObjectProperty BP_Motorbike_04_SideCar.BP_Motorbike_04_SideCar_C.TslMovementRef */
	float FuelEfficiency; /* Ofs: 0xAD8 Size: 0x4 - FloatProperty BP_Motorbike_04_SideCar.BP_Motorbike_04_SideCar_C.FuelEfficiency */


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0xA70, value); }
	inline bool SetSphere2(t_structHelper inst, ExternalPtr<struct USphereComponent> value) { inst.WriteOffset(0xA78, value); }
	inline bool SetSideCarSeat(t_structHelper inst, ExternalPtr<struct UMotorbikeVehicleSeatInteraction> value) { inst.WriteOffset(0xA80, value); }
	inline bool SetSphere1(t_structHelper inst, ExternalPtr<struct USphereComponent> value) { inst.WriteOffset(0xA88, value); }
	inline bool SetPassengerSeat(t_structHelper inst, ExternalPtr<struct UMotorbikeVehicleSeatInteraction> value) { inst.WriteOffset(0xA90, value); }
	inline bool SetSphere(t_structHelper inst, ExternalPtr<struct USphereComponent> value) { inst.WriteOffset(0xA98, value); }
	inline bool SetDirverSeat(t_structHelper inst, ExternalPtr<struct UMotorbikeVehicleSeatInteraction> value) { inst.WriteOffset(0xAA0, value); }
	inline bool SetRadialForce(t_structHelper inst, ExternalPtr<struct URadialForceComponent> value) { inst.WriteOffset(0xAA8, value); }
	inline bool SetThirdPersonCameraInVehicle(t_structHelper inst, ExternalPtr<struct UCameraComponent> value) { inst.WriteOffset(0xAB0, value); }
	inline bool SetThirdPersonSpringArmInVehicle(t_structHelper inst, ExternalPtr<struct USpringArmInVehicleComponent> value) { inst.WriteOffset(0xAB8, value); }
	inline bool SetFirstPersonCameraInVehicle(t_structHelper inst, ExternalPtr<struct UCameraComponent> value) { inst.WriteOffset(0xAC0, value); }
	inline bool SetFirstPersonSpringArmInVehicle(t_structHelper inst, ExternalPtr<struct USpringArmInVehicleComponent> value) { inst.WriteOffset(0xAC8, value); }
	inline bool SetTslMovementRef(t_structHelper inst, ExternalPtr<struct UTslWheeledVehicleMovement> value) { inst.WriteOffset(0xAD0, value); }
	inline bool SetFuelEfficiency(t_structHelper inst, float value) { inst.WriteOffset(0xAD8, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBP_Motorbike_04_SideCar_C = sizeof(UBP_Motorbike_04_SideCar_C); // 2780
    static_assert(sizeof(UBP_Motorbike_04_SideCar_C) == 0xADC, "Size of UBP_Motorbike_04_SideCar_C is not correct.");
	auto constexpr UBP_Motorbike_04_SideCar_C_UberGraphFrame_Offset = offsetof(UBP_Motorbike_04_SideCar_C, UberGraphFrame);
	static_assert(UBP_Motorbike_04_SideCar_C_UberGraphFrame_Offset == 0xa70, "UBP_Motorbike_04_SideCar_C::UberGraphFrame offset is not a70");
	auto constexpr UBP_Motorbike_04_SideCar_C_Sphere2_Offset = offsetof(UBP_Motorbike_04_SideCar_C, Sphere2);
	static_assert(UBP_Motorbike_04_SideCar_C_Sphere2_Offset == 0xa78, "UBP_Motorbike_04_SideCar_C::Sphere2 offset is not a78");
	auto constexpr UBP_Motorbike_04_SideCar_C_SideCarSeat_Offset = offsetof(UBP_Motorbike_04_SideCar_C, SideCarSeat);
	static_assert(UBP_Motorbike_04_SideCar_C_SideCarSeat_Offset == 0xa80, "UBP_Motorbike_04_SideCar_C::SideCarSeat offset is not a80");
	auto constexpr UBP_Motorbike_04_SideCar_C_Sphere1_Offset = offsetof(UBP_Motorbike_04_SideCar_C, Sphere1);
	static_assert(UBP_Motorbike_04_SideCar_C_Sphere1_Offset == 0xa88, "UBP_Motorbike_04_SideCar_C::Sphere1 offset is not a88");
	auto constexpr UBP_Motorbike_04_SideCar_C_PassengerSeat_Offset = offsetof(UBP_Motorbike_04_SideCar_C, PassengerSeat);
	static_assert(UBP_Motorbike_04_SideCar_C_PassengerSeat_Offset == 0xa90, "UBP_Motorbike_04_SideCar_C::PassengerSeat offset is not a90");
	auto constexpr UBP_Motorbike_04_SideCar_C_Sphere_Offset = offsetof(UBP_Motorbike_04_SideCar_C, Sphere);
	static_assert(UBP_Motorbike_04_SideCar_C_Sphere_Offset == 0xa98, "UBP_Motorbike_04_SideCar_C::Sphere offset is not a98");
	auto constexpr UBP_Motorbike_04_SideCar_C_DirverSeat_Offset = offsetof(UBP_Motorbike_04_SideCar_C, DirverSeat);
	static_assert(UBP_Motorbike_04_SideCar_C_DirverSeat_Offset == 0xaa0, "UBP_Motorbike_04_SideCar_C::DirverSeat offset is not aa0");
	auto constexpr UBP_Motorbike_04_SideCar_C_RadialForce_Offset = offsetof(UBP_Motorbike_04_SideCar_C, RadialForce);
	static_assert(UBP_Motorbike_04_SideCar_C_RadialForce_Offset == 0xaa8, "UBP_Motorbike_04_SideCar_C::RadialForce offset is not aa8");
	auto constexpr UBP_Motorbike_04_SideCar_C_ThirdPersonCameraInVehicle_Offset = offsetof(UBP_Motorbike_04_SideCar_C, ThirdPersonCameraInVehicle);
	static_assert(UBP_Motorbike_04_SideCar_C_ThirdPersonCameraInVehicle_Offset == 0xab0, "UBP_Motorbike_04_SideCar_C::ThirdPersonCameraInVehicle offset is not ab0");
	auto constexpr UBP_Motorbike_04_SideCar_C_ThirdPersonSpringArmInVehicle_Offset = offsetof(UBP_Motorbike_04_SideCar_C, ThirdPersonSpringArmInVehicle);
	static_assert(UBP_Motorbike_04_SideCar_C_ThirdPersonSpringArmInVehicle_Offset == 0xab8, "UBP_Motorbike_04_SideCar_C::ThirdPersonSpringArmInVehicle offset is not ab8");
	auto constexpr UBP_Motorbike_04_SideCar_C_FirstPersonCameraInVehicle_Offset = offsetof(UBP_Motorbike_04_SideCar_C, FirstPersonCameraInVehicle);
	static_assert(UBP_Motorbike_04_SideCar_C_FirstPersonCameraInVehicle_Offset == 0xac0, "UBP_Motorbike_04_SideCar_C::FirstPersonCameraInVehicle offset is not ac0");
	auto constexpr UBP_Motorbike_04_SideCar_C_FirstPersonSpringArmInVehicle_Offset = offsetof(UBP_Motorbike_04_SideCar_C, FirstPersonSpringArmInVehicle);
	static_assert(UBP_Motorbike_04_SideCar_C_FirstPersonSpringArmInVehicle_Offset == 0xac8, "UBP_Motorbike_04_SideCar_C::FirstPersonSpringArmInVehicle offset is not ac8");
	auto constexpr UBP_Motorbike_04_SideCar_C_TslMovementRef_Offset = offsetof(UBP_Motorbike_04_SideCar_C, TslMovementRef);
	static_assert(UBP_Motorbike_04_SideCar_C_TslMovementRef_Offset == 0xad0, "UBP_Motorbike_04_SideCar_C::TslMovementRef offset is not ad0");
	auto constexpr UBP_Motorbike_04_SideCar_C_FuelEfficiency_Offset = offsetof(UBP_Motorbike_04_SideCar_C, FuelEfficiency);
	static_assert(UBP_Motorbike_04_SideCar_C_FuelEfficiency_Offset == 0xad8, "UBP_Motorbike_04_SideCar_C::FuelEfficiency offset is not ad8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
