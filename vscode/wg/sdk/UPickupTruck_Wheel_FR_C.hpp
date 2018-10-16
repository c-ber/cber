#pragma once
#include "UPickupTruck_Wheel_C.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UPickupTruck_Wheel_FR_C // Size: 0x270
	: public UPickupTruck_Wheel_C // Size: 0x270
{
private:
	typedef UPickupTruck_Wheel_FR_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(124050); // id32("BlueprintGeneratedClass PickupTruck_Wheel_FR.PickupTruck_Wheel_FR_C")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUPickupTruck_Wheel_FR_C = sizeof(UPickupTruck_Wheel_FR_C); // 624
    static_assert(sizeof(UPickupTruck_Wheel_FR_C) == 0x270, "Size of UPickupTruck_Wheel_FR_C is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
