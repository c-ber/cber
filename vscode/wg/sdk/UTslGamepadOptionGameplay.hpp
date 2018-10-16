#pragma once
#include "UTslGamepadOptionContentsWidget.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTslGamepadOptionGameplay // Size: 0x440
	: public UTslGamepadOptionContentsWidget // Size: 0x440
{
private:
	typedef UTslGamepadOptionGameplay t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1441); // id32("Class TslGame.TslGamepadOptionGameplay")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTslGamepadOptionGameplay = sizeof(UTslGamepadOptionGameplay); // 1088
    static_assert(sizeof(UTslGamepadOptionGameplay) == 0x440, "Size of UTslGamepadOptionGameplay is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
