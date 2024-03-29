#pragma once
#include "UMotorbikeSidecart_Wheel_R_C.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMotorbikeSidecart_Wheel_RL_Punctured_C // Size: 0x270
	: public UMotorbikeSidecart_Wheel_R_C // Size: 0x270
{
private:
	typedef UMotorbikeSidecart_Wheel_RL_Punctured_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(120228); // id32("BlueprintGeneratedClass MotorbikeSidecart_Wheel_RL_Punctured.MotorbikeSidecart_Wheel_RL_Punctured_C")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMotorbikeSidecart_Wheel_RL_Punctured_C = sizeof(UMotorbikeSidecart_Wheel_RL_Punctured_C); // 624
    static_assert(sizeof(UMotorbikeSidecart_Wheel_RL_Punctured_C) == 0x270, "Size of UMotorbikeSidecart_Wheel_RL_Punctured_C is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
