#pragma once
#include "UTslGamepadOptionContentsWidget.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTslGamepadOptionControl // Size: 0x440
	: public UTslGamepadOptionContentsWidget // Size: 0x440
{
private:
	typedef UTslGamepadOptionControl t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1450); // id32("Class TslGame.TslGamepadOptionControl")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTslGamepadOptionControl = sizeof(UTslGamepadOptionControl); // 1088
    static_assert(sizeof(UTslGamepadOptionControl) == 0x440, "Size of UTslGamepadOptionControl is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
