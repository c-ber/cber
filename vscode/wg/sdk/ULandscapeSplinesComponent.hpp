#pragma once
#include "UPrimitiveComponent.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) ULandscapeSplinesComponent // Size: 0x920
	: public UPrimitiveComponent // Size: 0x8F0
{
private:
	typedef ULandscapeSplinesComponent t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1298); // id32("Class Landscape.LandscapeSplinesComponent")
		return ptr;
	}
//	TArray<ExternalPtr<struct ULandscapeSplineControlPoint>> ControlPoints; /* Ofs: 0x8E8 Size: 0x10 - ArrayProperty Landscape.LandscapeSplinesComponent.ControlPoints */
	uint8_t UnknownData8F0[0x8];
	TArray<ExternalPtr<struct ULandscapeSplineSegment>> Segments; /* Ofs: 0x8F8 Size: 0x10 - ArrayProperty Landscape.LandscapeSplinesComponent.Segments */
	TArray<ExternalPtr<struct UMeshComponent>> CookedForeignMeshComponents; /* Ofs: 0x908 Size: 0x10 - ArrayProperty Landscape.LandscapeSplinesComponent.CookedForeignMeshComponents */
	uint8_t UnknownData918[0x8];


//	inline bool SetControlPoints(t_structHelper inst, TArray<ExternalPtr<struct ULandscapeSplineControlPoint>> value) { inst.WriteOffset(0x8E8, value); }
	inline bool SetSegments(t_structHelper inst, TArray<ExternalPtr<struct ULandscapeSplineSegment>> value) { inst.WriteOffset(0x8F8, value); }
	inline bool SetCookedForeignMeshComponents(t_structHelper inst, TArray<ExternalPtr<struct UMeshComponent>> value) { inst.WriteOffset(0x908, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofULandscapeSplinesComponent = sizeof(ULandscapeSplinesComponent); // 2336
    static_assert(sizeof(ULandscapeSplinesComponent) == 0x920, "Size of ULandscapeSplinesComponent is not correct.");
//	auto constexpr ULandscapeSplinesComponent_ControlPoints_Offset = offsetof(ULandscapeSplinesComponent, ControlPoints);
//	static_assert(ULandscapeSplinesComponent_ControlPoints_Offset == 0x8e8, "ULandscapeSplinesComponent::ControlPoints offset is not 8e8");
	auto constexpr ULandscapeSplinesComponent_Segments_Offset = offsetof(ULandscapeSplinesComponent, Segments);
	static_assert(ULandscapeSplinesComponent_Segments_Offset == 0x8f8, "ULandscapeSplinesComponent::Segments offset is not 8f8");
	auto constexpr ULandscapeSplinesComponent_CookedForeignMeshComponents_Offset = offsetof(ULandscapeSplinesComponent, CookedForeignMeshComponents);
	static_assert(ULandscapeSplinesComponent_CookedForeignMeshComponents_Offset == 0x908, "ULandscapeSplinesComponent::CookedForeignMeshComponents offset is not 908");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
