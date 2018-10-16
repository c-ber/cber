#pragma once
#include "EPhysXAggregationMode.hpp"
#include "FMaterialSimplificationSettings.hpp"
#include "FMaterialProxySettings.hpp"
#include "ELandscapeCullingPrecision.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FLevelSimplificationDetails // Size: 0x1DC
{
public:
    bool bCreatePackagePerAsset; /* Ofs: 0x0 Size: 0x1 BitMask: 01 BoolProperty Engine.LevelSimplificationDetails.bCreatePackagePerAsset */
    uint8_t UnknownData1[0x3];
    float DetailsPercentage; /* Ofs: 0x4 Size: 0x4 FloatProperty Engine.LevelSimplificationDetails.DetailsPercentage */
    float MergeDistance; /* Ofs: 0x8 Size: 0x4 FloatProperty Engine.LevelSimplificationDetails.MergeDistance */
    float MergeBoldness; /* Ofs: 0xC Size: 0x4 FloatProperty Engine.LevelSimplificationDetails.MergeBoldness */
    TEnumAsByte<enum EPhysXAggregationMode> PhysXAggregationMode; /* Ofs: 0x10 Size: 0x1 EnumProperty Engine.LevelSimplificationDetails.PhysXAggregationMode */
    uint8_t UnknownData11[0x3];
    float MaxTriangleSize; /* Ofs: 0x14 Size: 0x4 FloatProperty Engine.LevelSimplificationDetails.MaxTriangleSize */
    FMaterialSimplificationSettings StaticMeshMaterial; /* Ofs: 0x18 Size: 0x44 StructProperty Engine.LevelSimplificationDetails.StaticMeshMaterial */
    FMaterialProxySettings StaticMeshMaterialSettings; /* Ofs: 0x5C Size: 0x94 StructProperty Engine.LevelSimplificationDetails.StaticMeshMaterialSettings */
    bool bOverrideLandscapeExportLOD; /* Ofs: 0xF0 Size: 0x1 BitMask: 01 BoolProperty Engine.LevelSimplificationDetails.bOverrideLandscapeExportLOD */
    uint8_t UnknownDataF1[0x3];
    int32_t LandscapeExportLOD; /* Ofs: 0xF4 Size: 0x4 IntProperty Engine.LevelSimplificationDetails.LandscapeExportLOD */
    FMaterialSimplificationSettings LandscapeMaterial; /* Ofs: 0xF8 Size: 0x44 StructProperty Engine.LevelSimplificationDetails.LandscapeMaterial */
    FMaterialProxySettings LandscapeMaterialSettings; /* Ofs: 0x13C Size: 0x94 StructProperty Engine.LevelSimplificationDetails.LandscapeMaterialSettings */
    bool bBakeFoliageToLandscape; /* Ofs: 0x1D0 Size: 0x1 BitMask: 01 BoolProperty Engine.LevelSimplificationDetails.bBakeFoliageToLandscape */
    bool bBakeGrassToLandscape; /* Ofs: 0x1D1 Size: 0x1 BitMask: 01 BoolProperty Engine.LevelSimplificationDetails.bBakeGrassToLandscape */
    bool bGenerateMeshNormalMap; /* Ofs: 0x1D2 Size: 0x1 BitMask: 01 BoolProperty Engine.LevelSimplificationDetails.bGenerateMeshNormalMap */
    bool bGenerateMeshMetallicMap; /* Ofs: 0x1D3 Size: 0x1 BitMask: 01 BoolProperty Engine.LevelSimplificationDetails.bGenerateMeshMetallicMap */
    bool bGenerateMeshRoughnessMap; /* Ofs: 0x1D4 Size: 0x1 BitMask: 01 BoolProperty Engine.LevelSimplificationDetails.bGenerateMeshRoughnessMap */
    bool bGenerateMeshSpecularMap; /* Ofs: 0x1D5 Size: 0x1 BitMask: 01 BoolProperty Engine.LevelSimplificationDetails.bGenerateMeshSpecularMap */
    bool bGenerateLandscapeNormalMap; /* Ofs: 0x1D6 Size: 0x1 BitMask: 01 BoolProperty Engine.LevelSimplificationDetails.bGenerateLandscapeNormalMap */
    bool bGenerateLandscapeMetallicMap; /* Ofs: 0x1D7 Size: 0x1 BitMask: 01 BoolProperty Engine.LevelSimplificationDetails.bGenerateLandscapeMetallicMap */
    bool bGenerateLandscapeRoughnessMap; /* Ofs: 0x1D8 Size: 0x1 BitMask: 01 BoolProperty Engine.LevelSimplificationDetails.bGenerateLandscapeRoughnessMap */
    bool bGenerateLandscapeSpecularMap; /* Ofs: 0x1D9 Size: 0x1 BitMask: 01 BoolProperty Engine.LevelSimplificationDetails.bGenerateLandscapeSpecularMap */
    bool bUseLandscapeCulling; /* Ofs: 0x1DA Size: 0x1 BitMask: 01 BoolProperty Engine.LevelSimplificationDetails.bUseLandscapeCulling */
    TEnumAsByte<enum ELandscapeCullingPrecision> LandscapeCullingPrecision; /* Ofs: 0x1DB Size: 0x1 ByteProperty Engine.LevelSimplificationDetails.LandscapeCullingPrecision */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFLevelSimplificationDetails = sizeof(FLevelSimplificationDetails); // 476
    static_assert(sizeof(FLevelSimplificationDetails) == 0x1DC, "Size of FLevelSimplificationDetails is not correct.");
	auto constexpr FLevelSimplificationDetails_DetailsPercentage_Offset = offsetof(FLevelSimplificationDetails, DetailsPercentage);
	static_assert(FLevelSimplificationDetails_DetailsPercentage_Offset == 0x4, "FLevelSimplificationDetails::DetailsPercentage offset is not 4");
	auto constexpr FLevelSimplificationDetails_MergeDistance_Offset = offsetof(FLevelSimplificationDetails, MergeDistance);
	static_assert(FLevelSimplificationDetails_MergeDistance_Offset == 0x8, "FLevelSimplificationDetails::MergeDistance offset is not 8");
	auto constexpr FLevelSimplificationDetails_MergeBoldness_Offset = offsetof(FLevelSimplificationDetails, MergeBoldness);
	static_assert(FLevelSimplificationDetails_MergeBoldness_Offset == 0xc, "FLevelSimplificationDetails::MergeBoldness offset is not c");
	auto constexpr FLevelSimplificationDetails_PhysXAggregationMode_Offset = offsetof(FLevelSimplificationDetails, PhysXAggregationMode);
	static_assert(FLevelSimplificationDetails_PhysXAggregationMode_Offset == 0x10, "FLevelSimplificationDetails::PhysXAggregationMode offset is not 10");
	auto constexpr FLevelSimplificationDetails_MaxTriangleSize_Offset = offsetof(FLevelSimplificationDetails, MaxTriangleSize);
	static_assert(FLevelSimplificationDetails_MaxTriangleSize_Offset == 0x14, "FLevelSimplificationDetails::MaxTriangleSize offset is not 14");
	auto constexpr FLevelSimplificationDetails_StaticMeshMaterial_Offset = offsetof(FLevelSimplificationDetails, StaticMeshMaterial);
	static_assert(FLevelSimplificationDetails_StaticMeshMaterial_Offset == 0x18, "FLevelSimplificationDetails::StaticMeshMaterial offset is not 18");
	auto constexpr FLevelSimplificationDetails_StaticMeshMaterialSettings_Offset = offsetof(FLevelSimplificationDetails, StaticMeshMaterialSettings);
	static_assert(FLevelSimplificationDetails_StaticMeshMaterialSettings_Offset == 0x5c, "FLevelSimplificationDetails::StaticMeshMaterialSettings offset is not 5c");
	auto constexpr FLevelSimplificationDetails_LandscapeExportLOD_Offset = offsetof(FLevelSimplificationDetails, LandscapeExportLOD);
	static_assert(FLevelSimplificationDetails_LandscapeExportLOD_Offset == 0xf4, "FLevelSimplificationDetails::LandscapeExportLOD offset is not f4");
	auto constexpr FLevelSimplificationDetails_LandscapeMaterial_Offset = offsetof(FLevelSimplificationDetails, LandscapeMaterial);
	static_assert(FLevelSimplificationDetails_LandscapeMaterial_Offset == 0xf8, "FLevelSimplificationDetails::LandscapeMaterial offset is not f8");
	auto constexpr FLevelSimplificationDetails_LandscapeMaterialSettings_Offset = offsetof(FLevelSimplificationDetails, LandscapeMaterialSettings);
	static_assert(FLevelSimplificationDetails_LandscapeMaterialSettings_Offset == 0x13c, "FLevelSimplificationDetails::LandscapeMaterialSettings offset is not 13c");
	auto constexpr FLevelSimplificationDetails_LandscapeCullingPrecision_Offset = offsetof(FLevelSimplificationDetails, LandscapeCullingPrecision);
	static_assert(FLevelSimplificationDetails_LandscapeCullingPrecision_Offset == 0x1db, "FLevelSimplificationDetails::LandscapeCullingPrecision offset is not 1db");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
