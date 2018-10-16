#pragma once
#include "UTslGamepadKeyGuideWidget.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBP_GamepadKeyGuideBase_C // Size: 0x320
	: public UTslGamepadKeyGuideWidget // Size: 0x320
{
private:
	typedef UBP_GamepadKeyGuideBase_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(178987); // id32("WidgetBlueprintGeneratedClass BP_GamepadKeyGuideBase.BP_GamepadKeyGuideBase_C")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBP_GamepadKeyGuideBase_C = sizeof(UBP_GamepadKeyGuideBase_C); // 800
    static_assert(sizeof(UBP_GamepadKeyGuideBase_C) == 0x320, "Size of UBP_GamepadKeyGuideBase_C is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
