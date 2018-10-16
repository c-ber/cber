#pragma once
#include "UPanelWidget.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UOverlay // Size: 0x158
	: public UPanelWidget // Size: 0x148
{
private:
	typedef UOverlay t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(509); // id32("Class UMG.Overlay")
		return ptr;
	}
	uint8_t UnknownData148[0x10];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUOverlay = sizeof(UOverlay); // 344
    static_assert(sizeof(UOverlay) == 0x158, "Size of UOverlay is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
