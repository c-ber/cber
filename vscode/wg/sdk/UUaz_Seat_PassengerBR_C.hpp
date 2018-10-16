#pragma once
#include "UVehicleSeatPassenger_C.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UUaz_Seat_PassengerBR_C // Size: 0x4C4
	: public UVehicleSeatPassenger_C // Size: 0x4C4
{
private:
	typedef UUaz_Seat_PassengerBR_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(124419); // id32("BlueprintGeneratedClass Uaz_Seat_PassengerBR.Uaz_Seat_PassengerBR_C")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUUaz_Seat_PassengerBR_C = sizeof(UUaz_Seat_PassengerBR_C); // 1220
    static_assert(sizeof(UUaz_Seat_PassengerBR_C) == 0x4C4, "Size of UUaz_Seat_PassengerBR_C is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
