#pragma once
#include "UDoorFrameComponent.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBP_Steel_Door_Outdoor_L_C // Size: 0xAF0
	: public UDoorFrameComponent // Size: 0xAF0
{
private:
	typedef UBP_Steel_Door_Outdoor_L_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(145613); // id32("BlueprintGeneratedClass BP_Steel_Door_Outdoor_L.BP_Steel_Door_Outdoor_L_C")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBP_Steel_Door_Outdoor_L_C = sizeof(UBP_Steel_Door_Outdoor_L_C); // 2800
    static_assert(sizeof(UBP_Steel_Door_Outdoor_L_C) == 0xAF0, "Size of UBP_Steel_Door_Outdoor_L_C is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
