#pragma once
#include "UUmgBaseWidget.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBluezoneGuideWidget // Size: 0x300
	: public UUmgBaseWidget // Size: 0x300
{
private:
	typedef UBluezoneGuideWidget t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1515); // id32("Class TslGame.BluezoneGuideWidget")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBluezoneGuideWidget = sizeof(UBluezoneGuideWidget); // 768
    static_assert(sizeof(UBluezoneGuideWidget) == 0x300, "Size of UBluezoneGuideWidget is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
