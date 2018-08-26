#pragma once
#include "UTslGamepadOptionGameplay.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBP_GamepadOptionGameplay_C // Size: 0x440
	: public UTslGamepadOptionGameplay // Size: 0x440
{
private:
	typedef UBP_GamepadOptionGameplay_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(178030); // id32("WidgetBlueprintGeneratedClass BP_GamepadOptionGameplay.BP_GamepadOptionGameplay_C")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBP_GamepadOptionGameplay_C = sizeof(UBP_GamepadOptionGameplay_C); // 1088
    static_assert(sizeof(UBP_GamepadOptionGameplay_C) == 0x440, "Size of UBP_GamepadOptionGameplay_C is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
