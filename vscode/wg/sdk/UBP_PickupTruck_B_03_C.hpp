#pragma once
#include "UBP_PickupTruck_B_C.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBP_PickupTruck_B_03_C // Size: 0xA18
	: public UBP_PickupTruck_B_C // Size: 0xA18
{
private:
	typedef UBP_PickupTruck_B_03_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(124551); // id32("BlueprintGeneratedClass BP_PickupTruck_B_03.BP_PickupTruck_B_03_C")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBP_PickupTruck_B_03_C = sizeof(UBP_PickupTruck_B_03_C); // 2584
    static_assert(sizeof(UBP_PickupTruck_B_03_C) == 0xA18, "Size of UBP_PickupTruck_B_03_C is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
