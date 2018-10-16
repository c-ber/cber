#pragma once
#include "ULandscapeGizmoActor.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) ULandscapeGizmoActiveActor // Size: 0x460
	: public ULandscapeGizmoActor // Size: 0x410
{
private:
	typedef ULandscapeGizmoActiveActor t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1284); // id32("Class Landscape.LandscapeGizmoActiveActor")
		return ptr;
	}
	uint8_t UnknownData410[0x50];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofULandscapeGizmoActiveActor = sizeof(ULandscapeGizmoActiveActor); // 1120
    static_assert(sizeof(ULandscapeGizmoActiveActor) == 0x460, "Size of ULandscapeGizmoActiveActor is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
