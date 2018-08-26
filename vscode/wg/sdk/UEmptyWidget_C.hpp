#pragma once
#include "UUserWidget.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UEmptyWidget_C // Size: 0x248
	: public UUserWidget // Size: 0x248
{
private:
	typedef UEmptyWidget_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(177642); // id32("WidgetBlueprintGeneratedClass EmptyWidget.EmptyWidget_C")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUEmptyWidget_C = sizeof(UEmptyWidget_C); // 584
    static_assert(sizeof(UEmptyWidget_C) == 0x248, "Size of UEmptyWidget_C is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
