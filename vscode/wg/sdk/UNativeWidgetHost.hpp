#pragma once
#include "UWidget.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UNativeWidgetHost // Size: 0x140
	: public UWidget // Size: 0x130
{
private:
	typedef UNativeWidgetHost t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(493); // id32("Class UMG.NativeWidgetHost")
		return ptr;
	}
	uint8_t UnknownData130[0x10];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUNativeWidgetHost = sizeof(UNativeWidgetHost); // 320
    static_assert(sizeof(UNativeWidgetHost) == 0x140, "Size of UNativeWidgetHost is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
