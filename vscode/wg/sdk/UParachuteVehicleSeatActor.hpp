#pragma once
#include "UVehicleSeatActor.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UParachuteVehicleSeatActor // Size: 0x490
	: public UVehicleSeatActor // Size: 0x490
{
private:
	typedef UParachuteVehicleSeatActor t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(55); // id32("Class TslGame.ParachuteVehicleSeatActor")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUParachuteVehicleSeatActor = sizeof(UParachuteVehicleSeatActor); // 1168
    static_assert(sizeof(UParachuteVehicleSeatActor) == 0x490, "Size of UParachuteVehicleSeatActor is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
