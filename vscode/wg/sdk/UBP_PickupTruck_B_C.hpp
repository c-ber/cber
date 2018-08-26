#pragma once
#include "UBP_PickupTruck_C.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBP_PickupTruck_B_C // Size: 0xA18
	: public UBP_PickupTruck_C // Size: 0x9F8
{
private:
	typedef UBP_PickupTruck_B_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(124524); // id32("BlueprintGeneratedClass BP_PickupTruck_B.BP_PickupTruck_B_C")
		return ptr;
	}
	ExternalPtr<struct USphereComponent> Sphere3; /* Ofs: 0x9F8 Size: 0x8 - ObjectProperty BP_PickupTruck_B.BP_PickupTruck_B_C.Sphere3 */
	ExternalPtr<struct UVehicleSeatInteractionComponent> PassengerBRSeat; /* Ofs: 0xA00 Size: 0x8 - ObjectProperty BP_PickupTruck_B.BP_PickupTruck_B_C.PassengerBRSeat */
	ExternalPtr<struct USphereComponent> Sphere2; /* Ofs: 0xA08 Size: 0x8 - ObjectProperty BP_PickupTruck_B.BP_PickupTruck_B_C.Sphere2 */
	ExternalPtr<struct UVehicleSeatInteractionComponent> PassengerBLSeat; /* Ofs: 0xA10 Size: 0x8 - ObjectProperty BP_PickupTruck_B.BP_PickupTruck_B_C.PassengerBLSeat */


	inline bool SetSphere3(t_structHelper inst, ExternalPtr<struct USphereComponent> value) { inst.WriteOffset(0x9F8, value); }
	inline bool SetPassengerBRSeat(t_structHelper inst, ExternalPtr<struct UVehicleSeatInteractionComponent> value) { inst.WriteOffset(0xA00, value); }
	inline bool SetSphere2(t_structHelper inst, ExternalPtr<struct USphereComponent> value) { inst.WriteOffset(0xA08, value); }
	inline bool SetPassengerBLSeat(t_structHelper inst, ExternalPtr<struct UVehicleSeatInteractionComponent> value) { inst.WriteOffset(0xA10, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBP_PickupTruck_B_C = sizeof(UBP_PickupTruck_B_C); // 2584
    static_assert(sizeof(UBP_PickupTruck_B_C) == 0xA18, "Size of UBP_PickupTruck_B_C is not correct.");
	auto constexpr UBP_PickupTruck_B_C_Sphere3_Offset = offsetof(UBP_PickupTruck_B_C, Sphere3);
	static_assert(UBP_PickupTruck_B_C_Sphere3_Offset == 0x9f8, "UBP_PickupTruck_B_C::Sphere3 offset is not 9f8");
	auto constexpr UBP_PickupTruck_B_C_PassengerBRSeat_Offset = offsetof(UBP_PickupTruck_B_C, PassengerBRSeat);
	static_assert(UBP_PickupTruck_B_C_PassengerBRSeat_Offset == 0xa00, "UBP_PickupTruck_B_C::PassengerBRSeat offset is not a00");
	auto constexpr UBP_PickupTruck_B_C_Sphere2_Offset = offsetof(UBP_PickupTruck_B_C, Sphere2);
	static_assert(UBP_PickupTruck_B_C_Sphere2_Offset == 0xa08, "UBP_PickupTruck_B_C::Sphere2 offset is not a08");
	auto constexpr UBP_PickupTruck_B_C_PassengerBLSeat_Offset = offsetof(UBP_PickupTruck_B_C, PassengerBLSeat);
	static_assert(UBP_PickupTruck_B_C_PassengerBLSeat_Offset == 0xa10, "UBP_PickupTruck_B_C::PassengerBLSeat offset is not a10");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
