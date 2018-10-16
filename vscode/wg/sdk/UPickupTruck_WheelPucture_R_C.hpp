#pragma once
#include "UPickupTruck_WheelPucture_C.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UPickupTruck_WheelPucture_R_C // Size: 0x270
	: public UPickupTruck_WheelPucture_C // Size: 0x270
{
private:
	typedef UPickupTruck_WheelPucture_R_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(124046); // id32("BlueprintGeneratedClass PickupTruck_WheelPucture_R.PickupTruck_WheelPucture_R_C")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUPickupTruck_WheelPucture_R_C = sizeof(UPickupTruck_WheelPucture_R_C); // 624
    static_assert(sizeof(UPickupTruck_WheelPucture_R_C) == 0x270, "Size of UPickupTruck_WheelPucture_R_C is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
