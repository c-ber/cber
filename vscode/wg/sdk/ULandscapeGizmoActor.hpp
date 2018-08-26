#pragma once
#include "UActor.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) ULandscapeGizmoActor // Size: 0x410
	: public UActor // Size: 0x410
{
private:
	typedef ULandscapeGizmoActor t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1283); // id32("Class Landscape.LandscapeGizmoActor")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofULandscapeGizmoActor = sizeof(ULandscapeGizmoActor); // 1040
    static_assert(sizeof(ULandscapeGizmoActor) == 0x410, "Size of ULandscapeGizmoActor is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
