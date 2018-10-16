#pragma once
#include "UPrimitiveComponent.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) ULandscapeGizmoRenderComponent // Size: 0x8F0
	: public UPrimitiveComponent // Size: 0x8F0
{
private:
	typedef ULandscapeGizmoRenderComponent t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1285); // id32("Class Landscape.LandscapeGizmoRenderComponent")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofULandscapeGizmoRenderComponent = sizeof(ULandscapeGizmoRenderComponent); // 2288
    static_assert(sizeof(ULandscapeGizmoRenderComponent) == 0x8F0, "Size of ULandscapeGizmoRenderComponent is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
