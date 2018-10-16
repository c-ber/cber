#pragma once
#include "UVehicleSeatPassenger_C.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UDacia_Seat_PassengerBR_C // Size: 0x4C4
	: public UVehicleSeatPassenger_C // Size: 0x4C4
{
private:
	typedef UDacia_Seat_PassengerBR_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(124312); // id32("BlueprintGeneratedClass Dacia_Seat_PassengerBR.Dacia_Seat_PassengerBR_C")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUDacia_Seat_PassengerBR_C = sizeof(UDacia_Seat_PassengerBR_C); // 1220
    static_assert(sizeof(UDacia_Seat_PassengerBR_C) == 0x4C4, "Size of UDacia_Seat_PassengerBR_C is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
