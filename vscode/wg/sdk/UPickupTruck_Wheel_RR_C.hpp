#pragma once
#include "UPickupTruck_Wheel_C.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UPickupTruck_Wheel_RR_C // Size: 0x270
	: public UPickupTruck_Wheel_C // Size: 0x270
{
private:
	typedef UPickupTruck_Wheel_RR_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(124048); // id32("BlueprintGeneratedClass PickupTruck_Wheel_RR.PickupTruck_Wheel_RR_C")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUPickupTruck_Wheel_RR_C = sizeof(UPickupTruck_Wheel_RR_C); // 624
    static_assert(sizeof(UPickupTruck_Wheel_RR_C) == 0x270, "Size of UPickupTruck_Wheel_RR_C is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
