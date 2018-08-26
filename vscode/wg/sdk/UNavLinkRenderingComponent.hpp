#pragma once
#include "UPrimitiveComponent.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UNavLinkRenderingComponent // Size: 0x8F0
	: public UPrimitiveComponent // Size: 0x8F0
{
private:
	typedef UNavLinkRenderingComponent t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(218); // id32("Class Engine.NavLinkRenderingComponent")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUNavLinkRenderingComponent = sizeof(UNavLinkRenderingComponent); // 2288
    static_assert(sizeof(UNavLinkRenderingComponent) == 0x8F0, "Size of UNavLinkRenderingComponent is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
