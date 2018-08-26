#pragma once
#include "UVehicleSeatPassenger_C.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBuggy_Seat_Passenger_C // Size: 0x4C4
	: public UVehicleSeatPassenger_C // Size: 0x4C4
{
private:
	typedef UBuggy_Seat_Passenger_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(124279); // id32("BlueprintGeneratedClass Buggy_Seat_Passenger.Buggy_Seat_Passenger_C")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBuggy_Seat_Passenger_C = sizeof(UBuggy_Seat_Passenger_C); // 1220
    static_assert(sizeof(UBuggy_Seat_Passenger_C) == 0x4C4, "Size of UBuggy_Seat_Passenger_C is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
