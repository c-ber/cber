#pragma once
#include "UPrimitiveComponent.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UNavLinkComponent // Size: 0x900
	: public UPrimitiveComponent // Size: 0x8F0
{
private:
	typedef UNavLinkComponent t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(217); // id32("Class Engine.NavLinkComponent")
		return ptr;
	}
	TArray<struct FNavigationLink> Links; /* Ofs: 0x8F0 Size: 0x10 - ArrayProperty Engine.NavLinkComponent.Links */


	inline bool SetLinks(t_structHelper inst, TArray<struct FNavigationLink> value) { inst.WriteOffset(0x8F0, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUNavLinkComponent = sizeof(UNavLinkComponent); // 2304
    static_assert(sizeof(UNavLinkComponent) == 0x900, "Size of UNavLinkComponent is not correct.");
	auto constexpr UNavLinkComponent_Links_Offset = offsetof(UNavLinkComponent, Links);
	static_assert(UNavLinkComponent_Links_Offset == 0x8f0, "UNavLinkComponent::Links offset is not 8f0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
