#pragma once
#include "UVehicleSeatInteractionComponent.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMotorbikeVehicleSeatInteraction // Size: 0x6D0
	: public UVehicleSeatInteractionComponent // Size: 0x6D0
{
private:
	typedef UMotorbikeVehicleSeatInteraction t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1951); // id32("Class TslGame.MotorbikeVehicleSeatInteraction")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMotorbikeVehicleSeatInteraction = sizeof(UMotorbikeVehicleSeatInteraction); // 1744
    static_assert(sizeof(UMotorbikeVehicleSeatInteraction) == 0x6D0, "Size of UMotorbikeVehicleSeatInteraction is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
