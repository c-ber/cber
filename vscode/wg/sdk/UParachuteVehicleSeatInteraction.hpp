#pragma once
#include "UVehicleSeatInteractionComponent.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UParachuteVehicleSeatInteraction // Size: 0x6D0
	: public UVehicleSeatInteractionComponent // Size: 0x6D0
{
private:
	typedef UParachuteVehicleSeatInteraction t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1952); // id32("Class TslGame.ParachuteVehicleSeatInteraction")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUParachuteVehicleSeatInteraction = sizeof(UParachuteVehicleSeatInteraction); // 1744
    static_assert(sizeof(UParachuteVehicleSeatInteraction) == 0x6D0, "Size of UParachuteVehicleSeatInteraction is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
