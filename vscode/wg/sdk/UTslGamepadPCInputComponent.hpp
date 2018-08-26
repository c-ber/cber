#pragma once
#include "UTslGamepadInputComponent.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTslGamepadPCInputComponent // Size: 0x9B0
	: public UTslGamepadInputComponent // Size: 0x2D0
{
private:
	typedef UTslGamepadPCInputComponent t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1391); // id32("Class TslGame.TslGamepadPCInputComponent")
		return ptr;
	}
	uint8_t UnknownData2D0[0x6E0];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTslGamepadPCInputComponent = sizeof(UTslGamepadPCInputComponent); // 2480
    static_assert(sizeof(UTslGamepadPCInputComponent) == 0x9B0, "Size of UTslGamepadPCInputComponent is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
