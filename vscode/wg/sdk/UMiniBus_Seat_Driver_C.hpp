#pragma once
#include "UVehicleSeatDriver_C.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMiniBus_Seat_Driver_C // Size: 0x4C4
	: public UVehicleSeatDriver_C // Size: 0x4C4
{
private:
	typedef UMiniBus_Seat_Driver_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(124257); // id32("BlueprintGeneratedClass MiniBus_Seat_Driver.MiniBus_Seat_Driver_C")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMiniBus_Seat_Driver_C = sizeof(UMiniBus_Seat_Driver_C); // 1220
    static_assert(sizeof(UMiniBus_Seat_Driver_C) == 0x4C4, "Size of UMiniBus_Seat_Driver_C is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
