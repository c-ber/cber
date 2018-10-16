#pragma once
#include "UVehicleSeatDriver_C.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UAquaRail_SeatDriver_C // Size: 0x4C4
	: public UVehicleSeatDriver_C // Size: 0x4C4
{
private:
	typedef UAquaRail_SeatDriver_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(124248); // id32("BlueprintGeneratedClass AquaRail_SeatDriver.AquaRail_SeatDriver_C")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUAquaRail_SeatDriver_C = sizeof(UAquaRail_SeatDriver_C); // 1220
    static_assert(sizeof(UAquaRail_SeatDriver_C) == 0x4C4, "Size of UAquaRail_SeatDriver_C is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
