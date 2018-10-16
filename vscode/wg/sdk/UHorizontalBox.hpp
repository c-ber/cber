#pragma once
#include "UPanelWidget.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UHorizontalBox // Size: 0x158
	: public UPanelWidget // Size: 0x148
{
private:
	typedef UHorizontalBox t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(508); // id32("Class UMG.HorizontalBox")
		return ptr;
	}
	uint8_t UnknownData148[0x10];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUHorizontalBox = sizeof(UHorizontalBox); // 344
    static_assert(sizeof(UHorizontalBox) == 0x158, "Size of UHorizontalBox is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
