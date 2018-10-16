#pragma once
#include "UTslBreakableFence.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBreakable_Desert_Stable_MetalFence_02_C // Size: 0x510
	: public UTslBreakableFence // Size: 0x510
{
private:
	typedef UBreakable_Desert_Stable_MetalFence_02_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(217053); // id32("BlueprintGeneratedClass Breakable_Desert_Stable_MetalFence_02.Breakable_Desert_Stable_MetalFence_02_C")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBreakable_Desert_Stable_MetalFence_02_C = sizeof(UBreakable_Desert_Stable_MetalFence_02_C); // 1296
    static_assert(sizeof(UBreakable_Desert_Stable_MetalFence_02_C) == 0x510, "Size of UBreakable_Desert_Stable_MetalFence_02_C is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
