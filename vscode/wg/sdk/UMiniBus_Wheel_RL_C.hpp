#pragma once
#include "UMiniBus_Wheel_C.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMiniBus_Wheel_RL_C // Size: 0x270
	: public UMiniBus_Wheel_C // Size: 0x270
{
private:
	typedef UMiniBus_Wheel_RL_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(117139); // id32("BlueprintGeneratedClass MiniBus_Wheel_RL.MiniBus_Wheel_RL_C")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMiniBus_Wheel_RL_C = sizeof(UMiniBus_Wheel_RL_C); // 624
    static_assert(sizeof(UMiniBus_Wheel_RL_C) == 0x270, "Size of UMiniBus_Wheel_RL_C is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
