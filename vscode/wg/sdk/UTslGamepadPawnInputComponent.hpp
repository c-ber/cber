#pragma once
#include "UTslGamepadInputComponent.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTslGamepadPawnInputComponent // Size: 0x1E90
	: public UTslGamepadInputComponent // Size: 0x2D0
{
private:
	typedef UTslGamepadPawnInputComponent t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1390); // id32("Class TslGame.TslGamepadPawnInputComponent")
		return ptr;
	}
	uint8_t UnknownData2D0[0x1BC0];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTslGamepadPawnInputComponent = sizeof(UTslGamepadPawnInputComponent); // 7824
    static_assert(sizeof(UTslGamepadPawnInputComponent) == 0x1E90, "Size of UTslGamepadPawnInputComponent is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
