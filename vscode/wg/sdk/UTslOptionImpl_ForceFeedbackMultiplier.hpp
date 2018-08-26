#pragma once
#include "UTslOptionImpl.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTslOptionImpl_ForceFeedbackMultiplier // Size: 0x30
	: public UTslOptionImpl // Size: 0x30
{
private:
	typedef UTslOptionImpl_ForceFeedbackMultiplier t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1459); // id32("Class TslGame.TslOptionImpl_ForceFeedbackMultiplier")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTslOptionImpl_ForceFeedbackMultiplier = sizeof(UTslOptionImpl_ForceFeedbackMultiplier); // 48
    static_assert(sizeof(UTslOptionImpl_ForceFeedbackMultiplier) == 0x30, "Size of UTslOptionImpl_ForceFeedbackMultiplier is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
