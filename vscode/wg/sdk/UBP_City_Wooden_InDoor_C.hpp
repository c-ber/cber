#pragma once
#include "UDoorFrameComponent.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBP_City_Wooden_InDoor_C // Size: 0xAF0
	: public UDoorFrameComponent // Size: 0xAF0
{
private:
	typedef UBP_City_Wooden_InDoor_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(145611); // id32("BlueprintGeneratedClass BP_City_Wooden_InDoor.BP_City_Wooden_InDoor_C")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBP_City_Wooden_InDoor_C = sizeof(UBP_City_Wooden_InDoor_C); // 2800
    static_assert(sizeof(UBP_City_Wooden_InDoor_C) == 0xAF0, "Size of UBP_City_Wooden_InDoor_C is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
