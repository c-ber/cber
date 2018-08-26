#pragma once
#include "UVehicleSubThingSpawnProcessor.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UVehicleSpawnProcessor_Desert_C // Size: 0x420
	: public UVehicleSubThingSpawnProcessor // Size: 0x420
{
private:
	typedef UVehicleSpawnProcessor_Desert_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(126241); // id32("BlueprintGeneratedClass VehicleSpawnProcessor_Desert.VehicleSpawnProcessor_Desert_C")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUVehicleSpawnProcessor_Desert_C = sizeof(UVehicleSpawnProcessor_Desert_C); // 1056
    static_assert(sizeof(UVehicleSpawnProcessor_Desert_C) == 0x420, "Size of UVehicleSpawnProcessor_Desert_C is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
