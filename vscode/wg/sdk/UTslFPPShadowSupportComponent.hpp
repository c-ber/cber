#pragma once
#include "UPrimitiveComponent.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTslFPPShadowSupportComponent // Size: 0x900
	: public UPrimitiveComponent // Size: 0x8F0
{
private:
	typedef UTslFPPShadowSupportComponent t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1385); // id32("Class TslGame.TslFPPShadowSupportComponent")
		return ptr;
	}
	TArray<ExternalPtr<struct USceneComponent>> CachedChildren; /* Ofs: 0x8F0 Size: 0x10 - ArrayProperty TslGame.TslFPPShadowSupportComponent.CachedChildren */


	inline bool SetCachedChildren(t_structHelper inst, TArray<ExternalPtr<struct USceneComponent>> value) { inst.WriteOffset(0x8F0, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTslFPPShadowSupportComponent = sizeof(UTslFPPShadowSupportComponent); // 2304
    static_assert(sizeof(UTslFPPShadowSupportComponent) == 0x900, "Size of UTslFPPShadowSupportComponent is not correct.");
	auto constexpr UTslFPPShadowSupportComponent_CachedChildren_Offset = offsetof(UTslFPPShadowSupportComponent, CachedChildren);
	static_assert(UTslFPPShadowSupportComponent_CachedChildren_Offset == 0x8f0, "UTslFPPShadowSupportComponent::CachedChildren offset is not 8f0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
