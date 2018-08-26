#pragma once
#include "UTslOptionImpl.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTslOptionImpl_FOV // Size: 0x30
	: public UTslOptionImpl // Size: 0x30
{
private:
	typedef UTslOptionImpl_FOV t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1438); // id32("Class TslGame.TslOptionImpl_FOV")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTslOptionImpl_FOV = sizeof(UTslOptionImpl_FOV); // 48
    static_assert(sizeof(UTslOptionImpl_FOV) == 0x30, "Size of UTslOptionImpl_FOV is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
