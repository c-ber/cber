#pragma once
#include "UPropertyBinding.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UVisibilityBinding // Size: 0x50
	: public UPropertyBinding // Size: 0x50
{
private:
	typedef UVisibilityBinding t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1643); // id32("Class UMG.VisibilityBinding")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUVisibilityBinding = sizeof(UVisibilityBinding); // 80
    static_assert(sizeof(UVisibilityBinding) == 0x50, "Size of UVisibilityBinding is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
