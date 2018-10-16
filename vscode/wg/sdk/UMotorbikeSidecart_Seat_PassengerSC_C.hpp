#pragma once
#include "UVehicleSeatBase_Moto_C.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMotorbikeSidecart_Seat_PassengerSC_C // Size: 0x4C4
	: public UVehicleSeatBase_Moto_C // Size: 0x4C4
{
private:
	typedef UMotorbikeSidecart_Seat_PassengerSC_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(120231); // id32("BlueprintGeneratedClass MotorbikeSidecart_Seat_PassengerSC.MotorbikeSidecart_Seat_PassengerSC_C")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMotorbikeSidecart_Seat_PassengerSC_C = sizeof(UMotorbikeSidecart_Seat_PassengerSC_C); // 1220
    static_assert(sizeof(UMotorbikeSidecart_Seat_PassengerSC_C) == 0x4C4, "Size of UMotorbikeSidecart_Seat_PassengerSC_C is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
