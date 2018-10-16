#pragma once
#include "FLandscapeSplineSegmentConnection.hpp"
#include "FInterpCurveVector.hpp"
#include "FBox.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) ULandscapeSplineSegment // Size: 0xB8
	: public UObject // Size: 0x30
{
private:
	typedef ULandscapeSplineSegment t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1299); // id32("Class Landscape.LandscapeSplineSegment")
		return ptr;
	}
	FLandscapeSplineSegmentConnection Connections[2]; /* Ofs: 0x2 Size: 0x18 - StructProperty Landscape.LandscapeSplineSegment.Connections */
	FInterpCurveVector SplineInfo; /* Ofs: 0x60 Size: 0x18 - StructProperty Landscape.LandscapeSplineSegment.SplineInfo */
	TArray<struct FLandscapeSplineInterpPoint> Points; /* Ofs: 0x78 Size: 0x10 - ArrayProperty Landscape.LandscapeSplineSegment.Points */
	FBox Bounds; /* Ofs: 0x88 Size: 0x1C - StructProperty Landscape.LandscapeSplineSegment.Bounds */
	uint8_t UnknownDataA4[0x4];
	TArray<ExternalPtr<struct USplineMeshComponent>> LocalMeshComponents; /* Ofs: 0xA8 Size: 0x10 - ArrayProperty Landscape.LandscapeSplineSegment.LocalMeshComponents */


	inline bool SetSplineInfo(t_structHelper inst, FInterpCurveVector value) { inst.WriteOffset(0x60, value); }
	inline bool SetPoints(t_structHelper inst, TArray<struct FLandscapeSplineInterpPoint> value) { inst.WriteOffset(0x78, value); }
	inline bool SetBounds(t_structHelper inst, FBox value) { inst.WriteOffset(0x88, value); }
	inline bool SetLocalMeshComponents(t_structHelper inst, TArray<ExternalPtr<struct USplineMeshComponent>> value) { inst.WriteOffset(0xA8, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofULandscapeSplineSegment = sizeof(ULandscapeSplineSegment); // 184
    static_assert(sizeof(ULandscapeSplineSegment) == 0xB8, "Size of ULandscapeSplineSegment is not correct.");
	auto constexpr ULandscapeSplineSegment_Connections_Offset = offsetof(ULandscapeSplineSegment, Connections);
	static_assert(ULandscapeSplineSegment_Connections_Offset == 0x30, "ULandscapeSplineSegment::Connections offset is not 30");
	auto constexpr ULandscapeSplineSegment_SplineInfo_Offset = offsetof(ULandscapeSplineSegment, SplineInfo);
	static_assert(ULandscapeSplineSegment_SplineInfo_Offset == 0x60, "ULandscapeSplineSegment::SplineInfo offset is not 60");
	auto constexpr ULandscapeSplineSegment_Points_Offset = offsetof(ULandscapeSplineSegment, Points);
	static_assert(ULandscapeSplineSegment_Points_Offset == 0x78, "ULandscapeSplineSegment::Points offset is not 78");
	auto constexpr ULandscapeSplineSegment_Bounds_Offset = offsetof(ULandscapeSplineSegment, Bounds);
	static_assert(ULandscapeSplineSegment_Bounds_Offset == 0x88, "ULandscapeSplineSegment::Bounds offset is not 88");
	auto constexpr ULandscapeSplineSegment_LocalMeshComponents_Offset = offsetof(ULandscapeSplineSegment, LocalMeshComponents);
	static_assert(ULandscapeSplineSegment_LocalMeshComponents_Offset == 0xa8, "ULandscapeSplineSegment::LocalMeshComponents offset is not a8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
