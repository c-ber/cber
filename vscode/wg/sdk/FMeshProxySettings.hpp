#pragma once
#include "FMaterialProxySettings.hpp"
#include "FMaterialSimplificationSettings.hpp"
#include "ELandscapeCullingPrecision.hpp"
#include "EChartAggregationMode.hpp"
#include "EPhysXAggregationMode.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FMeshProxySettings // Size: 0x114
{
public:
    int32_t ScreenSize; /* Ofs: 0x0 Size: 0x4 IntProperty Engine.MeshProxySettings.ScreenSize */
    FMaterialProxySettings MaterialSettings; /* Ofs: 0x4 Size: 0x94 StructProperty Engine.MeshProxySettings.MaterialSettings */
    int32_t TextureWidth; /* Ofs: 0x98 Size: 0x4 IntProperty Engine.MeshProxySettings.TextureWidth */
    int32_t TextureHeight; /* Ofs: 0x9C Size: 0x4 IntProperty Engine.MeshProxySettings.TextureHeight */
    bool bExportNormalMap; /* Ofs: 0xA0 Size: 0x1 BitMask: 01 BoolProperty Engine.MeshProxySettings.bExportNormalMap */
    bool bExportMetallicMap; /* Ofs: 0xA1 Size: 0x1 BitMask: 01 BoolProperty Engine.MeshProxySettings.bExportMetallicMap */
    bool bExportRoughnessMap; /* Ofs: 0xA2 Size: 0x1 BitMask: 01 BoolProperty Engine.MeshProxySettings.bExportRoughnessMap */
    bool bExportSpecularMap; /* Ofs: 0xA3 Size: 0x1 BitMask: 01 BoolProperty Engine.MeshProxySettings.bExportSpecularMap */
    FMaterialSimplificationSettings Material; /* Ofs: 0xA4 Size: 0x44 StructProperty Engine.MeshProxySettings.Material */
    bool bCalculateCorrectLODModel; /* Ofs: 0xE8 Size: 0x1 BitMask: 01 BoolProperty Engine.MeshProxySettings.bCalculateCorrectLODModel */
    uint8_t UnknownDataE9[0x3];
    float OverrideDistanceForLevelLOD; /* Ofs: 0xEC Size: 0x4 FloatProperty Engine.MeshProxySettings.OverrideDistanceForLevelLOD */
    float MergeDistance; /* Ofs: 0xF0 Size: 0x4 FloatProperty Engine.MeshProxySettings.MergeDistance */
    float HardAngleThreshold; /* Ofs: 0xF4 Size: 0x4 FloatProperty Engine.MeshProxySettings.HardAngleThreshold */
    int32_t LightMapResolution; /* Ofs: 0xF8 Size: 0x4 IntProperty Engine.MeshProxySettings.LightMapResolution */
    bool bRecalculateNormals; /* Ofs: 0xFC Size: 0x1 BitMask: 01 BoolProperty Engine.MeshProxySettings.bRecalculateNormals */
    bool bBakeVertexData; /* Ofs: 0xFD Size: 0x1 BitMask: 01 BoolProperty Engine.MeshProxySettings.bBakeVertexData */
    bool bUseLandscapeCulling; /* Ofs: 0xFE Size: 0x1 BitMask: 01 BoolProperty Engine.MeshProxySettings.bUseLandscapeCulling */
    TEnumAsByte<enum ELandscapeCullingPrecision> LandscapeCullingPrecision; /* Ofs: 0xFF Size: 0x1 ByteProperty Engine.MeshProxySettings.LandscapeCullingPrecision */
    bool bAssignLODGroup; /* Ofs: 0x100 Size: 0x1 BitMask: 01 BoolProperty Engine.MeshProxySettings.bAssignLODGroup */
    uint8_t UnknownData101[0x3];
    int32_t LODGroupIndex; /* Ofs: 0x104 Size: 0x4 IntProperty Engine.MeshProxySettings.LODGroupIndex */
    bool bAggregateMeshes; /* Ofs: 0x108 Size: 0x1 BitMask: 01 BoolProperty Engine.MeshProxySettings.bAggregateMeshes */
    TEnumAsByte<enum EChartAggregationMode> AggregatorMode; /* Ofs: 0x109 Size: 0x1 EnumProperty Engine.MeshProxySettings.AggregatorMode */
    TEnumAsByte<enum EPhysXAggregationMode> PhysXAggregationMode; /* Ofs: 0x10A Size: 0x1 EnumProperty Engine.MeshProxySettings.PhysXAggregationMode */
    bool bUseCustomHemisphere; /* Ofs: 0x10B Size: 0x1 BitMask: 01 BoolProperty Engine.MeshProxySettings.bUseCustomHemisphere */
    float MergeBoldness; /* Ofs: 0x10C Size: 0x4 FloatProperty Engine.MeshProxySettings.MergeBoldness */
    float MaxTriangleSize; /* Ofs: 0x110 Size: 0x4 FloatProperty Engine.MeshProxySettings.MaxTriangleSize */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFMeshProxySettings = sizeof(FMeshProxySettings); // 276
    static_assert(sizeof(FMeshProxySettings) == 0x114, "Size of FMeshProxySettings is not correct.");
	auto constexpr FMeshProxySettings_ScreenSize_Offset = offsetof(FMeshProxySettings, ScreenSize);
	static_assert(FMeshProxySettings_ScreenSize_Offset == 0x0, "FMeshProxySettings::ScreenSize offset is not 0");
	auto constexpr FMeshProxySettings_MaterialSettings_Offset = offsetof(FMeshProxySettings, MaterialSettings);
	static_assert(FMeshProxySettings_MaterialSettings_Offset == 0x4, "FMeshProxySettings::MaterialSettings offset is not 4");
	auto constexpr FMeshProxySettings_TextureWidth_Offset = offsetof(FMeshProxySettings, TextureWidth);
	static_assert(FMeshProxySettings_TextureWidth_Offset == 0x98, "FMeshProxySettings::TextureWidth offset is not 98");
	auto constexpr FMeshProxySettings_TextureHeight_Offset = offsetof(FMeshProxySettings, TextureHeight);
	static_assert(FMeshProxySettings_TextureHeight_Offset == 0x9c, "FMeshProxySettings::TextureHeight offset is not 9c");
	auto constexpr FMeshProxySettings_Material_Offset = offsetof(FMeshProxySettings, Material);
	static_assert(FMeshProxySettings_Material_Offset == 0xa4, "FMeshProxySettings::Material offset is not a4");
	auto constexpr FMeshProxySettings_OverrideDistanceForLevelLOD_Offset = offsetof(FMeshProxySettings, OverrideDistanceForLevelLOD);
	static_assert(FMeshProxySettings_OverrideDistanceForLevelLOD_Offset == 0xec, "FMeshProxySettings::OverrideDistanceForLevelLOD offset is not ec");
	auto constexpr FMeshProxySettings_MergeDistance_Offset = offsetof(FMeshProxySettings, MergeDistance);
	static_assert(FMeshProxySettings_MergeDistance_Offset == 0xf0, "FMeshProxySettings::MergeDistance offset is not f0");
	auto constexpr FMeshProxySettings_HardAngleThreshold_Offset = offsetof(FMeshProxySettings, HardAngleThreshold);
	static_assert(FMeshProxySettings_HardAngleThreshold_Offset == 0xf4, "FMeshProxySettings::HardAngleThreshold offset is not f4");
	auto constexpr FMeshProxySettings_LightMapResolution_Offset = offsetof(FMeshProxySettings, LightMapResolution);
	static_assert(FMeshProxySettings_LightMapResolution_Offset == 0xf8, "FMeshProxySettings::LightMapResolution offset is not f8");
	auto constexpr FMeshProxySettings_LandscapeCullingPrecision_Offset = offsetof(FMeshProxySettings, LandscapeCullingPrecision);
	static_assert(FMeshProxySettings_LandscapeCullingPrecision_Offset == 0xff, "FMeshProxySettings::LandscapeCullingPrecision offset is not ff");
	auto constexpr FMeshProxySettings_LODGroupIndex_Offset = offsetof(FMeshProxySettings, LODGroupIndex);
	static_assert(FMeshProxySettings_LODGroupIndex_Offset == 0x104, "FMeshProxySettings::LODGroupIndex offset is not 104");
	auto constexpr FMeshProxySettings_AggregatorMode_Offset = offsetof(FMeshProxySettings, AggregatorMode);
	static_assert(FMeshProxySettings_AggregatorMode_Offset == 0x109, "FMeshProxySettings::AggregatorMode offset is not 109");
	auto constexpr FMeshProxySettings_PhysXAggregationMode_Offset = offsetof(FMeshProxySettings, PhysXAggregationMode);
	static_assert(FMeshProxySettings_PhysXAggregationMode_Offset == 0x10a, "FMeshProxySettings::PhysXAggregationMode offset is not 10a");
	auto constexpr FMeshProxySettings_MergeBoldness_Offset = offsetof(FMeshProxySettings, MergeBoldness);
	static_assert(FMeshProxySettings_MergeBoldness_Offset == 0x10c, "FMeshProxySettings::MergeBoldness offset is not 10c");
	auto constexpr FMeshProxySettings_MaxTriangleSize_Offset = offsetof(FMeshProxySettings, MaxTriangleSize);
	static_assert(FMeshProxySettings_MaxTriangleSize_Offset == 0x110, "FMeshProxySettings::MaxTriangleSize offset is not 110");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
