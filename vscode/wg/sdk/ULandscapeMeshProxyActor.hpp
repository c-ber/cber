#pragma once
#include "UActor.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) ULandscapeMeshProxyActor // Size: 0x410
	: public UActor // Size: 0x410
{
private:
	typedef ULandscapeMeshProxyActor t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1293); // id32("Class Landscape.LandscapeMeshProxyActor")
		return ptr;
	}
//	ExternalPtr<struct ULandscapeMeshProxyComponent> LandscapeMeshProxyComponent; /* Ofs: 0x408 Size: 0x8 - ObjectProperty Landscape.LandscapeMeshProxyActor.LandscapeMeshProxyComponent */


//	inline bool SetLandscapeMeshProxyComponent(t_structHelper inst, ExternalPtr<struct ULandscapeMeshProxyComponent> value) { inst.WriteOffset(0x408, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofULandscapeMeshProxyActor = sizeof(ULandscapeMeshProxyActor); // 1040
    static_assert(sizeof(ULandscapeMeshProxyActor) == 0x410, "Size of ULandscapeMeshProxyActor is not correct.");
//	auto constexpr ULandscapeMeshProxyActor_LandscapeMeshProxyComponent_Offset = offsetof(ULandscapeMeshProxyActor, LandscapeMeshProxyComponent);
//	static_assert(ULandscapeMeshProxyActor_LandscapeMeshProxyComponent_Offset == 0x408, "ULandscapeMeshProxyActor::LandscapeMeshProxyComponent offset is not 408");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
