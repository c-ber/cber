#pragma once
#include "UTslOptionImpl.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTslOptionImpl_DVR // Size: 0x30
	: public UTslOptionImpl // Size: 0x30
{
private:
	typedef UTslOptionImpl_DVR t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1443); // id32("Class TslGame.TslOptionImpl_DVR")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTslOptionImpl_DVR = sizeof(UTslOptionImpl_DVR); // 48
    static_assert(sizeof(UTslOptionImpl_DVR) == 0x30, "Size of UTslOptionImpl_DVR is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
