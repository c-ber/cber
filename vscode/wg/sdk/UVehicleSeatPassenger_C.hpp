#pragma once
#include "UVehicleSeatBase_C.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UVehicleSeatPassenger_C // Size: 0x4C4
	: public UVehicleSeatBase_C // Size: 0x4C4
{
private:
	typedef UVehicleSeatPassenger_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(124266); // id32("BlueprintGeneratedClass VehicleSeatPassenger.VehicleSeatPassenger_C")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUVehicleSeatPassenger_C = sizeof(UVehicleSeatPassenger_C); // 1220
    static_assert(sizeof(UVehicleSeatPassenger_C) == 0x4C4, "Size of UVehicleSeatPassenger_C is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
