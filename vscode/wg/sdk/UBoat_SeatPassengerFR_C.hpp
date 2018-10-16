#pragma once
#include "UVehicleSeatPassenger_C.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBoat_SeatPassengerFR_C // Size: 0x4C4
	: public UVehicleSeatPassenger_C // Size: 0x4C4
{
private:
	typedef UBoat_SeatPassengerFR_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(124270); // id32("BlueprintGeneratedClass Boat_SeatPassengerFR.Boat_SeatPassengerFR_C")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBoat_SeatPassengerFR_C = sizeof(UBoat_SeatPassengerFR_C); // 1220
    static_assert(sizeof(UBoat_SeatPassengerFR_C) == 0x4C4, "Size of UBoat_SeatPassengerFR_C is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
