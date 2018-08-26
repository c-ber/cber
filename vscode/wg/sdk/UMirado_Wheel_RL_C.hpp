#pragma once
#include "UMirado_Wheel_C.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMirado_Wheel_RL_C // Size: 0x270
	: public UMirado_Wheel_C // Size: 0x270
{
private:
	typedef UMirado_Wheel_RL_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(117814); // id32("BlueprintGeneratedClass Mirado_Wheel_RL.Mirado_Wheel_RL_C")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMirado_Wheel_RL_C = sizeof(UMirado_Wheel_RL_C); // 624
    static_assert(sizeof(UMirado_Wheel_RL_C) == 0x270, "Size of UMirado_Wheel_RL_C is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
