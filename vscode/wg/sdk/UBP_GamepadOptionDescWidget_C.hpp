#pragma once
#include "UTslGamepadOptionDescWidget.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBP_GamepadOptionDescWidget_C // Size: 0x340
	: public UTslGamepadOptionDescWidget // Size: 0x340
{
private:
	typedef UBP_GamepadOptionDescWidget_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(178033); // id32("WidgetBlueprintGeneratedClass BP_GamepadOptionDescWidget.BP_GamepadOptionDescWidget_C")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBP_GamepadOptionDescWidget_C = sizeof(UBP_GamepadOptionDescWidget_C); // 832
    static_assert(sizeof(UBP_GamepadOptionDescWidget_C) == 0x340, "Size of UBP_GamepadOptionDescWidget_C is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
