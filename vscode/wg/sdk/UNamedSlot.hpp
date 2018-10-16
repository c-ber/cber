#pragma once
#include "UContentWidget.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UNamedSlot // Size: 0x158
	: public UContentWidget // Size: 0x148
{
private:
	typedef UNamedSlot t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(501); // id32("Class UMG.NamedSlot")
		return ptr;
	}
	uint8_t UnknownData148[0x10];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUNamedSlot = sizeof(UNamedSlot); // 344
    static_assert(sizeof(UNamedSlot) == 0x158, "Size of UNamedSlot is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
