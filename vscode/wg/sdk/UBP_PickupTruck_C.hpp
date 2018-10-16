#pragma once
#include "UVehicleBase_C.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBP_PickupTruck_C // Size: 0x9F8
	: public UVehicleBase_C // Size: 0x9D4
{
private:
	typedef UBP_PickupTruck_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(124490); // id32("BlueprintGeneratedClass BP_PickupTruck.BP_PickupTruck_C")
		return ptr;
	}
	uint8_t UnknownData9D4[0x4];
	ExternalPtr<struct USphereComponent> Sphere1; /* Ofs: 0x9D8 Size: 0x8 - ObjectProperty BP_PickupTruck.BP_PickupTruck_C.Sphere1 */
	ExternalPtr<struct UVehicleSeatInteractionComponent> PassengerFRSeat; /* Ofs: 0x9E0 Size: 0x8 - ObjectProperty BP_PickupTruck.BP_PickupTruck_C.PassengerFRSeat */
	ExternalPtr<struct USphereComponent> Sphere; /* Ofs: 0x9E8 Size: 0x8 - ObjectProperty BP_PickupTruck.BP_PickupTruck_C.Sphere */
	ExternalPtr<struct UVehicleSeatInteractionComponent> DriverSeat; /* Ofs: 0x9F0 Size: 0x8 - ObjectProperty BP_PickupTruck.BP_PickupTruck_C.DriverSeat */


	inline bool SetSphere1(t_structHelper inst, ExternalPtr<struct USphereComponent> value) { inst.WriteOffset(0x9D8, value); }
	inline bool SetPassengerFRSeat(t_structHelper inst, ExternalPtr<struct UVehicleSeatInteractionComponent> value) { inst.WriteOffset(0x9E0, value); }
	inline bool SetSphere(t_structHelper inst, ExternalPtr<struct USphereComponent> value) { inst.WriteOffset(0x9E8, value); }
	inline bool SetDriverSeat(t_structHelper inst, ExternalPtr<struct UVehicleSeatInteractionComponent> value) { inst.WriteOffset(0x9F0, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBP_PickupTruck_C = sizeof(UBP_PickupTruck_C); // 2552
    static_assert(sizeof(UBP_PickupTruck_C) == 0x9F8, "Size of UBP_PickupTruck_C is not correct.");
	auto constexpr UBP_PickupTruck_C_Sphere1_Offset = offsetof(UBP_PickupTruck_C, Sphere1);
	static_assert(UBP_PickupTruck_C_Sphere1_Offset == 0x9d8, "UBP_PickupTruck_C::Sphere1 offset is not 9d8");
	auto constexpr UBP_PickupTruck_C_PassengerFRSeat_Offset = offsetof(UBP_PickupTruck_C, PassengerFRSeat);
	static_assert(UBP_PickupTruck_C_PassengerFRSeat_Offset == 0x9e0, "UBP_PickupTruck_C::PassengerFRSeat offset is not 9e0");
	auto constexpr UBP_PickupTruck_C_Sphere_Offset = offsetof(UBP_PickupTruck_C, Sphere);
	static_assert(UBP_PickupTruck_C_Sphere_Offset == 0x9e8, "UBP_PickupTruck_C::Sphere offset is not 9e8");
	auto constexpr UBP_PickupTruck_C_DriverSeat_Offset = offsetof(UBP_PickupTruck_C, DriverSeat);
	static_assert(UBP_PickupTruck_C_DriverSeat_Offset == 0x9f0, "UBP_PickupTruck_C::DriverSeat offset is not 9f0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
