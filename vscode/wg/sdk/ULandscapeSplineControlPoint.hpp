#pragma once
#include "FVector.hpp"
#include "FRotator.hpp"
#include "FBox.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) ULandscapeSplineControlPoint // Size: 0xA0
	: public UObject // Size: 0x30
{
private:
	typedef ULandscapeSplineControlPoint t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1300); // id32("Class Landscape.LandscapeSplineControlPoint")
		return ptr;
	}
	FVector Location; /* Ofs: 0x30 Size: 0xC - StructProperty Landscape.LandscapeSplineControlPoint.Location */
	FRotator Rotation; /* Ofs: 0x3C Size: 0xC - StructProperty Landscape.LandscapeSplineControlPoint.Rotation */
	float Width; /* Ofs: 0x48 Size: 0x4 - FloatProperty Landscape.LandscapeSplineControlPoint.Width */
	float SideFalloff; /* Ofs: 0x4C Size: 0x4 - FloatProperty Landscape.LandscapeSplineControlPoint.SideFalloff */
	float EndFalloff; /* Ofs: 0x50 Size: 0x4 - FloatProperty Landscape.LandscapeSplineControlPoint.EndFalloff */
	uint8_t UnknownData54[0x4];
	TArray<struct FLandscapeSplineConnection> ConnectedSegments; /* Ofs: 0x58 Size: 0x10 - ArrayProperty Landscape.LandscapeSplineControlPoint.ConnectedSegments */
	TArray<struct FLandscapeSplineInterpPoint> Points; /* Ofs: 0x68 Size: 0x10 - ArrayProperty Landscape.LandscapeSplineControlPoint.Points */
	FBox Bounds; /* Ofs: 0x78 Size: 0x1C - StructProperty Landscape.LandscapeSplineControlPoint.Bounds */
	uint8_t UnknownData94[0x4];
	ExternalPtr<struct UControlPointMeshComponent> LocalMeshComponent; /* Ofs: 0x98 Size: 0x8 - ObjectProperty Landscape.LandscapeSplineControlPoint.LocalMeshComponent */


	inline bool SetLocation(t_structHelper inst, FVector value) { inst.WriteOffset(0x30, value); }
	inline bool SetRotation(t_structHelper inst, FRotator value) { inst.WriteOffset(0x3C, value); }
	inline bool SetWidth(t_structHelper inst, float value) { inst.WriteOffset(0x48, value); }
	inline bool SetSideFalloff(t_structHelper inst, float value) { inst.WriteOffset(0x4C, value); }
	inline bool SetEndFalloff(t_structHelper inst, float value) { inst.WriteOffset(0x50, value); }
	inline bool SetConnectedSegments(t_structHelper inst, TArray<struct FLandscapeSplineConnection> value) { inst.WriteOffset(0x58, value); }
	inline bool SetPoints(t_structHelper inst, TArray<struct FLandscapeSplineInterpPoint> value) { inst.WriteOffset(0x68, value); }
	inline bool SetBounds(t_structHelper inst, FBox value) { inst.WriteOffset(0x78, value); }
	inline bool SetLocalMeshComponent(t_structHelper inst, ExternalPtr<struct UControlPointMeshComponent> value) { inst.WriteOffset(0x98, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofULandscapeSplineControlPoint = sizeof(ULandscapeSplineControlPoint); // 160
    static_assert(sizeof(ULandscapeSplineControlPoint) == 0xA0, "Size of ULandscapeSplineControlPoint is not correct.");
	auto constexpr ULandscapeSplineControlPoint_Location_Offset = offsetof(ULandscapeSplineControlPoint, Location);
	static_assert(ULandscapeSplineControlPoint_Location_Offset == 0x30, "ULandscapeSplineControlPoint::Location offset is not 30");
	auto constexpr ULandscapeSplineControlPoint_Rotation_Offset = offsetof(ULandscapeSplineControlPoint, Rotation);
	static_assert(ULandscapeSplineControlPoint_Rotation_Offset == 0x3c, "ULandscapeSplineControlPoint::Rotation offset is not 3c");
	auto constexpr ULandscapeSplineControlPoint_Width_Offset = offsetof(ULandscapeSplineControlPoint, Width);
	static_assert(ULandscapeSplineControlPoint_Width_Offset == 0x48, "ULandscapeSplineControlPoint::Width offset is not 48");
	auto constexpr ULandscapeSplineControlPoint_SideFalloff_Offset = offsetof(ULandscapeSplineControlPoint, SideFalloff);
	static_assert(ULandscapeSplineControlPoint_SideFalloff_Offset == 0x4c, "ULandscapeSplineControlPoint::SideFalloff offset is not 4c");
	auto constexpr ULandscapeSplineControlPoint_EndFalloff_Offset = offsetof(ULandscapeSplineControlPoint, EndFalloff);
	static_assert(ULandscapeSplineControlPoint_EndFalloff_Offset == 0x50, "ULandscapeSplineControlPoint::EndFalloff offset is not 50");
	auto constexpr ULandscapeSplineControlPoint_ConnectedSegments_Offset = offsetof(ULandscapeSplineControlPoint, ConnectedSegments);
	static_assert(ULandscapeSplineControlPoint_ConnectedSegments_Offset == 0x58, "ULandscapeSplineControlPoint::ConnectedSegments offset is not 58");
	auto constexpr ULandscapeSplineControlPoint_Points_Offset = offsetof(ULandscapeSplineControlPoint, Points);
	static_assert(ULandscapeSplineControlPoint_Points_Offset == 0x68, "ULandscapeSplineControlPoint::Points offset is not 68");
	auto constexpr ULandscapeSplineControlPoint_Bounds_Offset = offsetof(ULandscapeSplineControlPoint, Bounds);
	static_assert(ULandscapeSplineControlPoint_Bounds_Offset == 0x78, "ULandscapeSplineControlPoint::Bounds offset is not 78");
	auto constexpr ULandscapeSplineControlPoint_LocalMeshComponent_Offset = offsetof(ULandscapeSplineControlPoint, LocalMeshComponent);
	static_assert(ULandscapeSplineControlPoint_LocalMeshComponent_Offset == 0x98, "ULandscapeSplineControlPoint::LocalMeshComponent offset is not 98");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
