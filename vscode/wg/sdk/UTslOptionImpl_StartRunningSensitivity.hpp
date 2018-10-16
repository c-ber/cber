#pragma once
#include "UTslOptionImpl.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTslOptionImpl_StartRunningSensitivity // Size: 0x30
	: public UTslOptionImpl // Size: 0x30
{
private:
	typedef UTslOptionImpl_StartRunningSensitivity t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1456); // id32("Class TslGame.TslOptionImpl_StartRunningSensitivity")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTslOptionImpl_StartRunningSensitivity = sizeof(UTslOptionImpl_StartRunningSensitivity); // 48
    static_assert(sizeof(UTslOptionImpl_StartRunningSensitivity) == 0x30, "Size of UTslOptionImpl_StartRunningSensitivity is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
