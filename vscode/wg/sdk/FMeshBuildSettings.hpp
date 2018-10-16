#pragma once
#include "FVector.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FMeshBuildSettings // Size: 0x40
{
public:
    bool bUseMikkTSpace; /* Ofs: 0x0 Size: 0x1 BitMask: 01 BoolProperty Engine.MeshBuildSettings.bUseMikkTSpace */
    bool bRecomputeNormals; /* Ofs: 0x1 Size: 0x1 BitMask: 01 BoolProperty Engine.MeshBuildSettings.bRecomputeNormals */
    bool bRecomputeTangents; /* Ofs: 0x2 Size: 0x1 BitMask: 01 BoolProperty Engine.MeshBuildSettings.bRecomputeTangents */
    bool bRemoveDegenerates; /* Ofs: 0x3 Size: 0x1 BitMask: 01 BoolProperty Engine.MeshBuildSettings.bRemoveDegenerates */
    bool bBuildAdjacencyBuffer; /* Ofs: 0x4 Size: 0x1 BitMask: 01 BoolProperty Engine.MeshBuildSettings.bBuildAdjacencyBuffer */
    bool bBuildReversedIndexBuffer; /* Ofs: 0x5 Size: 0x1 BitMask: 01 BoolProperty Engine.MeshBuildSettings.bBuildReversedIndexBuffer */
    bool bUseHighPrecisionTangentBasis; /* Ofs: 0x6 Size: 0x1 BitMask: 01 BoolProperty Engine.MeshBuildSettings.bUseHighPrecisionTangentBasis */
    bool bUseFullPrecisionUVs; /* Ofs: 0x7 Size: 0x1 BitMask: 01 BoolProperty Engine.MeshBuildSettings.bUseFullPrecisionUVs */
    bool bGenerateLightmapUVs; /* Ofs: 0x8 Size: 0x1 BitMask: 01 BoolProperty Engine.MeshBuildSettings.bGenerateLightmapUVs */
    uint8_t UnknownData9[0x3];
    int32_t MinLightmapResolution; /* Ofs: 0xC Size: 0x4 IntProperty Engine.MeshBuildSettings.MinLightmapResolution */
    int32_t SrcLightmapIndex; /* Ofs: 0x10 Size: 0x4 IntProperty Engine.MeshBuildSettings.SrcLightmapIndex */
    int32_t DstLightmapIndex; /* Ofs: 0x14 Size: 0x4 IntProperty Engine.MeshBuildSettings.DstLightmapIndex */
    float BuildScale; /* Ofs: 0x18 Size: 0x4 FloatProperty Engine.MeshBuildSettings.BuildScale */
    FVector BuildScale3D; /* Ofs: 0x1C Size: 0xC StructProperty Engine.MeshBuildSettings.BuildScale3D */
    float DistanceFieldResolutionScale; /* Ofs: 0x28 Size: 0x4 FloatProperty Engine.MeshBuildSettings.DistanceFieldResolutionScale */
    bool bGenerateDistanceFieldAsIfTwoSided; /* Ofs: 0x2C Size: 0x1 BitMask: 01 BoolProperty Engine.MeshBuildSettings.bGenerateDistanceFieldAsIfTwoSided */
    uint8_t UnknownData2D[0x3];
    float DistanceFieldBias; /* Ofs: 0x30 Size: 0x4 FloatProperty Engine.MeshBuildSettings.DistanceFieldBias */
    uint8_t UnknownData34[0x4];
    ExternalPtr<struct UStaticMesh> DistanceFieldReplacementMesh; /* Ofs: 0x38 Size: 0x8 ObjectProperty Engine.MeshBuildSettings.DistanceFieldReplacementMesh */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFMeshBuildSettings = sizeof(FMeshBuildSettings); // 64
    static_assert(sizeof(FMeshBuildSettings) == 0x40, "Size of FMeshBuildSettings is not correct.");
	auto constexpr FMeshBuildSettings_MinLightmapResolution_Offset = offsetof(FMeshBuildSettings, MinLightmapResolution);
	static_assert(FMeshBuildSettings_MinLightmapResolution_Offset == 0xc, "FMeshBuildSettings::MinLightmapResolution offset is not c");
	auto constexpr FMeshBuildSettings_SrcLightmapIndex_Offset = offsetof(FMeshBuildSettings, SrcLightmapIndex);
	static_assert(FMeshBuildSettings_SrcLightmapIndex_Offset == 0x10, "FMeshBuildSettings::SrcLightmapIndex offset is not 10");
	auto constexpr FMeshBuildSettings_DstLightmapIndex_Offset = offsetof(FMeshBuildSettings, DstLightmapIndex);
	static_assert(FMeshBuildSettings_DstLightmapIndex_Offset == 0x14, "FMeshBuildSettings::DstLightmapIndex offset is not 14");
	auto constexpr FMeshBuildSettings_BuildScale_Offset = offsetof(FMeshBuildSettings, BuildScale);
	static_assert(FMeshBuildSettings_BuildScale_Offset == 0x18, "FMeshBuildSettings::BuildScale offset is not 18");
	auto constexpr FMeshBuildSettings_BuildScale3D_Offset = offsetof(FMeshBuildSettings, BuildScale3D);
	static_assert(FMeshBuildSettings_BuildScale3D_Offset == 0x1c, "FMeshBuildSettings::BuildScale3D offset is not 1c");
	auto constexpr FMeshBuildSettings_DistanceFieldResolutionScale_Offset = offsetof(FMeshBuildSettings, DistanceFieldResolutionScale);
	static_assert(FMeshBuildSettings_DistanceFieldResolutionScale_Offset == 0x28, "FMeshBuildSettings::DistanceFieldResolutionScale offset is not 28");
	auto constexpr FMeshBuildSettings_DistanceFieldBias_Offset = offsetof(FMeshBuildSettings, DistanceFieldBias);
	static_assert(FMeshBuildSettings_DistanceFieldBias_Offset == 0x30, "FMeshBuildSettings::DistanceFieldBias offset is not 30");
	auto constexpr FMeshBuildSettings_DistanceFieldReplacementMesh_Offset = offsetof(FMeshBuildSettings, DistanceFieldReplacementMesh);
	static_assert(FMeshBuildSettings_DistanceFieldReplacementMesh_Offset == 0x38, "FMeshBuildSettings::DistanceFieldReplacementMesh offset is not 38");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
