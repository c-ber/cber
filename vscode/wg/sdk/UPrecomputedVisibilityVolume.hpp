#pragma once
#include "UVolume.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UPrecomputedVisibilityVolume // Size: 0x440
	: public UVolume // Size: 0x440
{
private:
	typedef UPrecomputedVisibilityVolume t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1727); // id32("Class Engine.PrecomputedVisibilityVolume")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUPrecomputedVisibilityVolume = sizeof(UPrecomputedVisibilityVolume); // 1088
    static_assert(sizeof(UPrecomputedVisibilityVolume) == 0x440, "Size of UPrecomputedVisibilityVolume is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
