#pragma once
#include "FMaterialProxySettings.hpp"
#include "EMeshLODSelectionType.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FMeshMergingSettings // Size: 0xC8
{
public:
    bool bGenerateLightMapUV; /* Ofs: 0x0 Size: 0x1 BitMask: 01 BoolProperty Engine.MeshMergingSettings.bGenerateLightMapUV */
    uint8_t UnknownData1[0x3];
    int32_t TargetLightMapResolution; /* Ofs: 0x4 Size: 0x4 IntProperty Engine.MeshMergingSettings.TargetLightMapResolution */
    bool bImportVertexColors; /* Ofs: 0x8 Size: 0x1 BitMask: 01 BoolProperty Engine.MeshMergingSettings.bImportVertexColors */
    bool bPivotPointAtZero; /* Ofs: 0x9 Size: 0x1 BitMask: 01 BoolProperty Engine.MeshMergingSettings.bPivotPointAtZero */
    bool bMergePhysicsData; /* Ofs: 0xA Size: 0x1 BitMask: 01 BoolProperty Engine.MeshMergingSettings.bMergePhysicsData */
    bool bAssignLODGroup; /* Ofs: 0xB Size: 0x1 BitMask: 01 BoolProperty Engine.MeshMergingSettings.bAssignLODGroup */
    int32_t LODGroupIndex; /* Ofs: 0xC Size: 0x4 IntProperty Engine.MeshMergingSettings.LODGroupIndex */
    bool bMergeMaterials; /* Ofs: 0x10 Size: 0x1 BitMask: 01 BoolProperty Engine.MeshMergingSettings.bMergeMaterials */
    uint8_t UnknownData11[0x3];
    FMaterialProxySettings MaterialSettings; /* Ofs: 0x14 Size: 0x94 StructProperty Engine.MeshMergingSettings.MaterialSettings */
    bool bBakeVertexDataToMesh; /* Ofs: 0xA8 Size: 0x1 BitMask: 01 BoolProperty Engine.MeshMergingSettings.bBakeVertexDataToMesh */
    bool bUseVertexDataForBakingMaterial; /* Ofs: 0xA9 Size: 0x1 BitMask: 01 BoolProperty Engine.MeshMergingSettings.bUseVertexDataForBakingMaterial */
    bool bUseTextureBinning; /* Ofs: 0xAA Size: 0x1 BitMask: 01 BoolProperty Engine.MeshMergingSettings.bUseTextureBinning */
    bool bCalculateCorrectLODModel; /* Ofs: 0xAB Size: 0x1 BitMask: 01 BoolProperty Engine.MeshMergingSettings.bCalculateCorrectLODModel */
    TEnumAsByte<enum EMeshLODSelectionType> LODSelectionType; /* Ofs: 0xAC Size: 0x1 EnumProperty Engine.MeshMergingSettings.LODSelectionType */
    uint8_t UnknownDataAD[0x3];
    int32_t ExportSpecificLOD; /* Ofs: 0xB0 Size: 0x4 IntProperty Engine.MeshMergingSettings.ExportSpecificLOD */
    int32_t SpecificLOD; /* Ofs: 0xB4 Size: 0x4 IntProperty Engine.MeshMergingSettings.SpecificLOD */
    bool bUseLandscapeCulling; /* Ofs: 0xB8 Size: 0x1 BitMask: 01 BoolProperty Engine.MeshMergingSettings.bUseLandscapeCulling */
    bool bExportNormalMap; /* Ofs: 0xB9 Size: 0x1 BitMask: 01 BoolProperty Engine.MeshMergingSettings.bExportNormalMap */
    bool bExportMetallicMap; /* Ofs: 0xBA Size: 0x1 BitMask: 01 BoolProperty Engine.MeshMergingSettings.bExportMetallicMap */
    bool bExportRoughnessMap; /* Ofs: 0xBB Size: 0x1 BitMask: 01 BoolProperty Engine.MeshMergingSettings.bExportRoughnessMap */
    bool bExportSpecularMap; /* Ofs: 0xBC Size: 0x1 BitMask: 01 BoolProperty Engine.MeshMergingSettings.bExportSpecularMap */
    uint8_t UnknownDataBD[0x3];
    int32_t MergedMaterialAtlasResolution; /* Ofs: 0xC0 Size: 0x4 IntProperty Engine.MeshMergingSettings.MergedMaterialAtlasResolution */
    uint8_t UnknownDataC4[0x4];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFMeshMergingSettings = sizeof(FMeshMergingSettings); // 200
    static_assert(sizeof(FMeshMergingSettings) == 0xC8, "Size of FMeshMergingSettings is not correct.");
	auto constexpr FMeshMergingSettings_TargetLightMapResolution_Offset = offsetof(FMeshMergingSettings, TargetLightMapResolution);
	static_assert(FMeshMergingSettings_TargetLightMapResolution_Offset == 0x4, "FMeshMergingSettings::TargetLightMapResolution offset is not 4");
	auto constexpr FMeshMergingSettings_LODGroupIndex_Offset = offsetof(FMeshMergingSettings, LODGroupIndex);
	static_assert(FMeshMergingSettings_LODGroupIndex_Offset == 0xc, "FMeshMergingSettings::LODGroupIndex offset is not c");
	auto constexpr FMeshMergingSettings_MaterialSettings_Offset = offsetof(FMeshMergingSettings, MaterialSettings);
	static_assert(FMeshMergingSettings_MaterialSettings_Offset == 0x14, "FMeshMergingSettings::MaterialSettings offset is not 14");
	auto constexpr FMeshMergingSettings_LODSelectionType_Offset = offsetof(FMeshMergingSettings, LODSelectionType);
	static_assert(FMeshMergingSettings_LODSelectionType_Offset == 0xac, "FMeshMergingSettings::LODSelectionType offset is not ac");
	auto constexpr FMeshMergingSettings_ExportSpecificLOD_Offset = offsetof(FMeshMergingSettings, ExportSpecificLOD);
	static_assert(FMeshMergingSettings_ExportSpecificLOD_Offset == 0xb0, "FMeshMergingSettings::ExportSpecificLOD offset is not b0");
	auto constexpr FMeshMergingSettings_SpecificLOD_Offset = offsetof(FMeshMergingSettings, SpecificLOD);
	static_assert(FMeshMergingSettings_SpecificLOD_Offset == 0xb4, "FMeshMergingSettings::SpecificLOD offset is not b4");
	auto constexpr FMeshMergingSettings_MergedMaterialAtlasResolution_Offset = offsetof(FMeshMergingSettings, MergedMaterialAtlasResolution);
	static_assert(FMeshMergingSettings_MergedMaterialAtlasResolution_Offset == 0xc0, "FMeshMergingSettings::MergedMaterialAtlasResolution offset is not c0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
