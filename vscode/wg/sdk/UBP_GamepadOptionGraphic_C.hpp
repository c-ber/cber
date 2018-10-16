#pragma once
#include "UTslGamepadOptionGraphic.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBP_GamepadOptionGraphic_C // Size: 0x450
	: public UTslGamepadOptionGraphic // Size: 0x450
{
private:
	typedef UBP_GamepadOptionGraphic_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(178027); // id32("WidgetBlueprintGeneratedClass BP_GamepadOptionGraphic.BP_GamepadOptionGraphic_C")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBP_GamepadOptionGraphic_C = sizeof(UBP_GamepadOptionGraphic_C); // 1104
    static_assert(sizeof(UBP_GamepadOptionGraphic_C) == 0x450, "Size of UBP_GamepadOptionGraphic_C is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
