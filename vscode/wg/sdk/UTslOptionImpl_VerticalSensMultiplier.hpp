#pragma once
#include "UTslOptionImpl.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTslOptionImpl_VerticalSensMultiplier // Size: 0x30
	: public UTslOptionImpl // Size: 0x30
{
private:
	typedef UTslOptionImpl_VerticalSensMultiplier t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1460); // id32("Class TslGame.TslOptionImpl_VerticalSensMultiplier")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTslOptionImpl_VerticalSensMultiplier = sizeof(UTslOptionImpl_VerticalSensMultiplier); // 48
    static_assert(sizeof(UTslOptionImpl_VerticalSensMultiplier) == 0x30, "Size of UTslOptionImpl_VerticalSensMultiplier is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
