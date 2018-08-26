#pragma once
#include "UTslGamepadOptionContentsWidget.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTslGamepadOptionSound // Size: 0x440
	: public UTslGamepadOptionContentsWidget // Size: 0x440
{
private:
	typedef UTslGamepadOptionSound t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1435); // id32("Class TslGame.TslGamepadOptionSound")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTslGamepadOptionSound = sizeof(UTslGamepadOptionSound); // 1088
    static_assert(sizeof(UTslGamepadOptionSound) == 0x440, "Size of UTslGamepadOptionSound is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
