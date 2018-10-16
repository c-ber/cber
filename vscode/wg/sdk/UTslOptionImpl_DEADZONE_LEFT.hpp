#pragma once
#include "UTslOptionImpl.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTslOptionImpl_DEADZONE_LEFT // Size: 0x30
	: public UTslOptionImpl // Size: 0x30
{
private:
	typedef UTslOptionImpl_DEADZONE_LEFT t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1455); // id32("Class TslGame.TslOptionImpl_DEADZONE_LEFT")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTslOptionImpl_DEADZONE_LEFT = sizeof(UTslOptionImpl_DEADZONE_LEFT); // 48
    static_assert(sizeof(UTslOptionImpl_DEADZONE_LEFT) == 0x30, "Size of UTslOptionImpl_DEADZONE_LEFT is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
