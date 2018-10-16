#pragma once
#include "UVehicleSeatActor.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTransportAircraft_Seat_C // Size: 0x4B8
	: public UVehicleSeatActor // Size: 0x490
{
private:
	typedef UTransportAircraft_Seat_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(157046); // id32("BlueprintGeneratedClass TransportAircraft_Seat.TransportAircraft_Seat_C")
		return ptr;
	}
	ExternalPtr<struct UCameraComponent> ThirdPersonCameraInVehicle; /* Ofs: 0x490 Size: 0x8 - ObjectProperty TransportAircraft_Seat.TransportAircraft_Seat_C.ThirdPersonCameraInVehicle */
	ExternalPtr<struct USpringArmInVehicleComponent> ThirdPersonVehicleSpringArm; /* Ofs: 0x498 Size: 0x8 - ObjectProperty TransportAircraft_Seat.TransportAircraft_Seat_C.ThirdPersonVehicleSpringArm */
	ExternalPtr<struct UCameraComponent> FirstPersonCameraInVehicle; /* Ofs: 0x4A0 Size: 0x8 - ObjectProperty TransportAircraft_Seat.TransportAircraft_Seat_C.FirstPersonCameraInVehicle */
	ExternalPtr<struct USpringArmInVehicleComponent> FirstPersonVehicleSpringArm; /* Ofs: 0x4A8 Size: 0x8 - ObjectProperty TransportAircraft_Seat.TransportAircraft_Seat_C.FirstPersonVehicleSpringArm */
	ExternalPtr<struct USceneComponent> DefaultSceneRoot; /* Ofs: 0x4B0 Size: 0x8 - ObjectProperty TransportAircraft_Seat.TransportAircraft_Seat_C.DefaultSceneRoot */


	inline bool SetThirdPersonCameraInVehicle(t_structHelper inst, ExternalPtr<struct UCameraComponent> value) { inst.WriteOffset(0x490, value); }
	inline bool SetThirdPersonVehicleSpringArm(t_structHelper inst, ExternalPtr<struct USpringArmInVehicleComponent> value) { inst.WriteOffset(0x498, value); }
	inline bool SetFirstPersonCameraInVehicle(t_structHelper inst, ExternalPtr<struct UCameraComponent> value) { inst.WriteOffset(0x4A0, value); }
	inline bool SetFirstPersonVehicleSpringArm(t_structHelper inst, ExternalPtr<struct USpringArmInVehicleComponent> value) { inst.WriteOffset(0x4A8, value); }
	inline bool SetDefaultSceneRoot(t_structHelper inst, ExternalPtr<struct USceneComponent> value) { inst.WriteOffset(0x4B0, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTransportAircraft_Seat_C = sizeof(UTransportAircraft_Seat_C); // 1208
    static_assert(sizeof(UTransportAircraft_Seat_C) == 0x4B8, "Size of UTransportAircraft_Seat_C is not correct.");
	auto constexpr UTransportAircraft_Seat_C_ThirdPersonCameraInVehicle_Offset = offsetof(UTransportAircraft_Seat_C, ThirdPersonCameraInVehicle);
	static_assert(UTransportAircraft_Seat_C_ThirdPersonCameraInVehicle_Offset == 0x490, "UTransportAircraft_Seat_C::ThirdPersonCameraInVehicle offset is not 490");
	auto constexpr UTransportAircraft_Seat_C_ThirdPersonVehicleSpringArm_Offset = offsetof(UTransportAircraft_Seat_C, ThirdPersonVehicleSpringArm);
	static_assert(UTransportAircraft_Seat_C_ThirdPersonVehicleSpringArm_Offset == 0x498, "UTransportAircraft_Seat_C::ThirdPersonVehicleSpringArm offset is not 498");
	auto constexpr UTransportAircraft_Seat_C_FirstPersonCameraInVehicle_Offset = offsetof(UTransportAircraft_Seat_C, FirstPersonCameraInVehicle);
	static_assert(UTransportAircraft_Seat_C_FirstPersonCameraInVehicle_Offset == 0x4a0, "UTransportAircraft_Seat_C::FirstPersonCameraInVehicle offset is not 4a0");
	auto constexpr UTransportAircraft_Seat_C_FirstPersonVehicleSpringArm_Offset = offsetof(UTransportAircraft_Seat_C, FirstPersonVehicleSpringArm);
	static_assert(UTransportAircraft_Seat_C_FirstPersonVehicleSpringArm_Offset == 0x4a8, "UTransportAircraft_Seat_C::FirstPersonVehicleSpringArm offset is not 4a8");
	auto constexpr UTransportAircraft_Seat_C_DefaultSceneRoot_Offset = offsetof(UTransportAircraft_Seat_C, DefaultSceneRoot);
	static_assert(UTransportAircraft_Seat_C_DefaultSceneRoot_Offset == 0x4b0, "UTransportAircraft_Seat_C::DefaultSceneRoot offset is not 4b0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
