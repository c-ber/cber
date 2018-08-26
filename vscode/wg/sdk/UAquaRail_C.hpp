#pragma once
#include "UBoatBase_C.hpp"
#include "FPointerToUberGraphFrame.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UAquaRail_C // Size: 0x5D0
	: public UBoatBase_C // Size: 0x59C
{
private:
	typedef UAquaRail_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(116706); // id32("BlueprintGeneratedClass AquaRail.AquaRail_C")
		return ptr;
	}
	uint8_t UnknownData59C[0x4];
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0x5A0 Size: 0x8 - StructProperty AquaRail.AquaRail_C.UberGraphFrame */
	ExternalPtr<struct UTslVehicleSinkComponent> TslVehicleSink; /* Ofs: 0x5A8 Size: 0x8 - ObjectProperty AquaRail.AquaRail_C.TslVehicleSink */
	ExternalPtr<struct USphereComponent> Sphere1; /* Ofs: 0x5B0 Size: 0x8 - ObjectProperty AquaRail.AquaRail_C.Sphere1 */
	ExternalPtr<struct UVehicleSeatInteractionComponent> Passenger; /* Ofs: 0x5B8 Size: 0x8 - ObjectProperty AquaRail.AquaRail_C.Passenger */
	ExternalPtr<struct USphereComponent> Sphere; /* Ofs: 0x5C0 Size: 0x8 - ObjectProperty AquaRail.AquaRail_C.Sphere */
	ExternalPtr<struct UVehicleSeatInteractionComponent> DriverSeat; /* Ofs: 0x5C8 Size: 0x8 - ObjectProperty AquaRail.AquaRail_C.DriverSeat */


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0x5A0, value); }
	inline bool SetTslVehicleSink(t_structHelper inst, ExternalPtr<struct UTslVehicleSinkComponent> value) { inst.WriteOffset(0x5A8, value); }
	inline bool SetSphere1(t_structHelper inst, ExternalPtr<struct USphereComponent> value) { inst.WriteOffset(0x5B0, value); }
	inline bool SetPassenger(t_structHelper inst, ExternalPtr<struct UVehicleSeatInteractionComponent> value) { inst.WriteOffset(0x5B8, value); }
	inline bool SetSphere(t_structHelper inst, ExternalPtr<struct USphereComponent> value) { inst.WriteOffset(0x5C0, value); }
	inline bool SetDriverSeat(t_structHelper inst, ExternalPtr<struct UVehicleSeatInteractionComponent> value) { inst.WriteOffset(0x5C8, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUAquaRail_C = sizeof(UAquaRail_C); // 1488
    static_assert(sizeof(UAquaRail_C) == 0x5D0, "Size of UAquaRail_C is not correct.");
	auto constexpr UAquaRail_C_UberGraphFrame_Offset = offsetof(UAquaRail_C, UberGraphFrame);
	static_assert(UAquaRail_C_UberGraphFrame_Offset == 0x5a0, "UAquaRail_C::UberGraphFrame offset is not 5a0");
	auto constexpr UAquaRail_C_TslVehicleSink_Offset = offsetof(UAquaRail_C, TslVehicleSink);
	static_assert(UAquaRail_C_TslVehicleSink_Offset == 0x5a8, "UAquaRail_C::TslVehicleSink offset is not 5a8");
	auto constexpr UAquaRail_C_Sphere1_Offset = offsetof(UAquaRail_C, Sphere1);
	static_assert(UAquaRail_C_Sphere1_Offset == 0x5b0, "UAquaRail_C::Sphere1 offset is not 5b0");
	auto constexpr UAquaRail_C_Passenger_Offset = offsetof(UAquaRail_C, Passenger);
	static_assert(UAquaRail_C_Passenger_Offset == 0x5b8, "UAquaRail_C::Passenger offset is not 5b8");
	auto constexpr UAquaRail_C_Sphere_Offset = offsetof(UAquaRail_C, Sphere);
	static_assert(UAquaRail_C_Sphere_Offset == 0x5c0, "UAquaRail_C::Sphere offset is not 5c0");
	auto constexpr UAquaRail_C_DriverSeat_Offset = offsetof(UAquaRail_C, DriverSeat);
	static_assert(UAquaRail_C_DriverSeat_Offset == 0x5c8, "UAquaRail_C::DriverSeat offset is not 5c8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
