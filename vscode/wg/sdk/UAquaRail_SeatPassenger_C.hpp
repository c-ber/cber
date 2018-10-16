#pragma once
#include "UVehicleSeatPassenger_C.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UAquaRail_SeatPassenger_C // Size: 0x4C4
	: public UVehicleSeatPassenger_C // Size: 0x4C4
{
private:
	typedef UAquaRail_SeatPassenger_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(124274); // id32("BlueprintGeneratedClass AquaRail_SeatPassenger.AquaRail_SeatPassenger_C")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUAquaRail_SeatPassenger_C = sizeof(UAquaRail_SeatPassenger_C); // 1220
    static_assert(sizeof(UAquaRail_SeatPassenger_C) == 0x4C4, "Size of UAquaRail_SeatPassenger_C is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
