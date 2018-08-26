#pragma once
#include "UTslGamepadOptionControl.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBP_GamepadOptionControl_C // Size: 0x440
	: public UTslGamepadOptionControl // Size: 0x440
{
private:
	typedef UBP_GamepadOptionControl_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(178035); // id32("WidgetBlueprintGeneratedClass BP_GamepadOptionControl.BP_GamepadOptionControl_C")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBP_GamepadOptionControl_C = sizeof(UBP_GamepadOptionControl_C); // 1088
    static_assert(sizeof(UBP_GamepadOptionControl_C) == 0x440, "Size of UBP_GamepadOptionControl_C is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
