#pragma once
#include "UTslGamepadOptionSeparator.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBP_GamepadOptionSeparator_C // Size: 0x338
	: public UTslGamepadOptionSeparator // Size: 0x338
{
private:
	typedef UBP_GamepadOptionSeparator_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(178018); // id32("WidgetBlueprintGeneratedClass BP_GamepadOptionSeparator.BP_GamepadOptionSeparator_C")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBP_GamepadOptionSeparator_C = sizeof(UBP_GamepadOptionSeparator_C); // 824
    static_assert(sizeof(UBP_GamepadOptionSeparator_C) == 0x338, "Size of UBP_GamepadOptionSeparator_C is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
