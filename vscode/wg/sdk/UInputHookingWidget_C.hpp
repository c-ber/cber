#pragma once
#include "UBlockInputUserWidget.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UInputHookingWidget_C // Size: 0x330
	: public UBlockInputUserWidget // Size: 0x330
{
private:
	typedef UInputHookingWidget_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(67983); // id32("WidgetBlueprintGeneratedClass InputHookingWidget.InputHookingWidget_C")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUInputHookingWidget_C = sizeof(UInputHookingWidget_C); // 816
    static_assert(sizeof(UInputHookingWidget_C) == 0x330, "Size of UInputHookingWidget_C is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
