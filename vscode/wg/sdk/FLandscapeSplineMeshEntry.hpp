#pragma once
#include "FVector2D.hpp"
#include "FVector.hpp"
#include "LandscapeSplineMeshOrientation.hpp"
#include "ESplineMeshAxis.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FLandscapeSplineMeshEntry // Size: 0x38
{
public:
    ExternalPtr<struct UStaticMesh> Mesh; /* Ofs: 0x0 Size: 0x8 ObjectProperty Landscape.LandscapeSplineMeshEntry.Mesh */
    TArray<ExternalPtr<struct UMaterialInterface>> MaterialOverrides; /* Ofs: 0x8 Size: 0x10 ArrayProperty Landscape.LandscapeSplineMeshEntry.MaterialOverrides */
    bool bCenterH; /* Ofs: 0x18 Size: 0x1 BitMask: 01 BoolProperty Landscape.LandscapeSplineMeshEntry.bCenterH */
    uint8_t UnknownData19[0x3];
    FVector2D CenterAdjust; /* Ofs: 0x1C Size: 0x8 StructProperty Landscape.LandscapeSplineMeshEntry.CenterAdjust */
    bool bScaleToWidth; /* Ofs: 0x24 Size: 0x1 BitMask: 01 BoolProperty Landscape.LandscapeSplineMeshEntry.bScaleToWidth */
    uint8_t UnknownData25[0x3];
    FVector Scale; /* Ofs: 0x28 Size: 0xC StructProperty Landscape.LandscapeSplineMeshEntry.Scale */
    TEnumAsByte<enum LandscapeSplineMeshOrientation> Orientation; /* Ofs: 0x34 Size: 0x1 ByteProperty Landscape.LandscapeSplineMeshEntry.Orientation */
    TEnumAsByte<enum ESplineMeshAxis> ForwardAxis; /* Ofs: 0x35 Size: 0x1 ByteProperty Landscape.LandscapeSplineMeshEntry.ForwardAxis */
    TEnumAsByte<enum ESplineMeshAxis> UpAxis; /* Ofs: 0x36 Size: 0x1 ByteProperty Landscape.LandscapeSplineMeshEntry.UpAxis */
    uint8_t UnknownData37[0x1];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFLandscapeSplineMeshEntry = sizeof(FLandscapeSplineMeshEntry); // 56
    static_assert(sizeof(FLandscapeSplineMeshEntry) == 0x38, "Size of FLandscapeSplineMeshEntry is not correct.");
	auto constexpr FLandscapeSplineMeshEntry_Mesh_Offset = offsetof(FLandscapeSplineMeshEntry, Mesh);
	static_assert(FLandscapeSplineMeshEntry_Mesh_Offset == 0x0, "FLandscapeSplineMeshEntry::Mesh offset is not 0");
	auto constexpr FLandscapeSplineMeshEntry_MaterialOverrides_Offset = offsetof(FLandscapeSplineMeshEntry, MaterialOverrides);
	static_assert(FLandscapeSplineMeshEntry_MaterialOverrides_Offset == 0x8, "FLandscapeSplineMeshEntry::MaterialOverrides offset is not 8");
	auto constexpr FLandscapeSplineMeshEntry_CenterAdjust_Offset = offsetof(FLandscapeSplineMeshEntry, CenterAdjust);
	static_assert(FLandscapeSplineMeshEntry_CenterAdjust_Offset == 0x1c, "FLandscapeSplineMeshEntry::CenterAdjust offset is not 1c");
	auto constexpr FLandscapeSplineMeshEntry_Scale_Offset = offsetof(FLandscapeSplineMeshEntry, Scale);
	static_assert(FLandscapeSplineMeshEntry_Scale_Offset == 0x28, "FLandscapeSplineMeshEntry::Scale offset is not 28");
	auto constexpr FLandscapeSplineMeshEntry_Orientation_Offset = offsetof(FLandscapeSplineMeshEntry, Orientation);
	static_assert(FLandscapeSplineMeshEntry_Orientation_Offset == 0x34, "FLandscapeSplineMeshEntry::Orientation offset is not 34");
	auto constexpr FLandscapeSplineMeshEntry_ForwardAxis_Offset = offsetof(FLandscapeSplineMeshEntry, ForwardAxis);
	static_assert(FLandscapeSplineMeshEntry_ForwardAxis_Offset == 0x35, "FLandscapeSplineMeshEntry::ForwardAxis offset is not 35");
	auto constexpr FLandscapeSplineMeshEntry_UpAxis_Offset = offsetof(FLandscapeSplineMeshEntry, UpAxis);
	static_assert(FLandscapeSplineMeshEntry_UpAxis_Offset == 0x36, "FLandscapeSplineMeshEntry::UpAxis offset is not 36");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
