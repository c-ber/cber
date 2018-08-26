#pragma once
#include "USimpleInterpolationMovement.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTslAircraftVehicleMovement // Size: 0x320
	: public USimpleInterpolationMovement // Size: 0x310
{
private:
	typedef UTslAircraftVehicleMovement t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1956); // id32("Class TslGame.TslAircraftVehicleMovement")
		return ptr;
	}
	uint8_t UnknownData310[0x10];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTslAircraftVehicleMovement = sizeof(UTslAircraftVehicleMovement); // 800
    static_assert(sizeof(UTslAircraftVehicleMovement) == 0x320, "Size of UTslAircraftVehicleMovement is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
