#pragma once
#include "UTslGamepadOptionSound.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBP_GamepadOptionSound_C // Size: 0x440
	: public UTslGamepadOptionSound // Size: 0x440
{
private:
	typedef UBP_GamepadOptionSound_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(178015); // id32("WidgetBlueprintGeneratedClass BP_GamepadOptionSound.BP_GamepadOptionSound_C")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBP_GamepadOptionSound_C = sizeof(UBP_GamepadOptionSound_C); // 1088
    static_assert(sizeof(UBP_GamepadOptionSound_C) == 0x440, "Size of UBP_GamepadOptionSound_C is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
