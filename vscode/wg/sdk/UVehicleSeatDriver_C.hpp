#pragma once
#include "UVehicleSeatBase_C.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UVehicleSeatDriver_C // Size: 0x4C4
	: public UVehicleSeatBase_C // Size: 0x4C4
{
private:
	typedef UVehicleSeatDriver_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(124240); // id32("BlueprintGeneratedClass VehicleSeatDriver.VehicleSeatDriver_C")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUVehicleSeatDriver_C = sizeof(UVehicleSeatDriver_C); // 1220
    static_assert(sizeof(UVehicleSeatDriver_C) == 0x4C4, "Size of UVehicleSeatDriver_C is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
