#pragma once
#include "EOptimizationMetric.hpp"
#include "EMeshFeatureImportance.hpp"
#include "FSimplygonMaterialLODSettings.hpp"
#include "FMaterialProxySettings.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FMeshReductionSettings // Size: 0x148
{
public:
    int32_t BaseLODModel; /* Ofs: 0x0 Size: 0x4 IntProperty Engine.MeshReductionSettings.BaseLODModel */
    TEnumAsByte<enum EOptimizationMetric> MetricToUse; /* Ofs: 0x4 Size: 0x1 EnumProperty Engine.MeshReductionSettings.MetricToUse */
    uint8_t UnknownData5[0x3];
    float PercentTriangles; /* Ofs: 0x8 Size: 0x4 FloatProperty Engine.MeshReductionSettings.PercentTriangles */
    float ScreenSize; /* Ofs: 0xC Size: 0x4 FloatProperty Engine.MeshReductionSettings.ScreenSize */
    float MaxDeviation; /* Ofs: 0x10 Size: 0x4 FloatProperty Engine.MeshReductionSettings.MaxDeviation */
    float PixelError; /* Ofs: 0x14 Size: 0x4 FloatProperty Engine.MeshReductionSettings.PixelError */
    float WeldingThreshold; /* Ofs: 0x18 Size: 0x4 FloatProperty Engine.MeshReductionSettings.WeldingThreshold */
    TEnumAsByte<enum EMeshFeatureImportance> SilhouetteImportance; /* Ofs: 0x1C Size: 0x1 ByteProperty Engine.MeshReductionSettings.SilhouetteImportance */
    TEnumAsByte<enum EMeshFeatureImportance> TextureImportance; /* Ofs: 0x1D Size: 0x1 ByteProperty Engine.MeshReductionSettings.TextureImportance */
    TEnumAsByte<enum EMeshFeatureImportance> ShadingImportance; /* Ofs: 0x1E Size: 0x1 ByteProperty Engine.MeshReductionSettings.ShadingImportance */
    TEnumAsByte<enum EMeshFeatureImportance> VertexColorImportance; /* Ofs: 0x1F Size: 0x1 ByteProperty Engine.MeshReductionSettings.VertexColorImportance */
    bool bRecalculateNormals; /* Ofs: 0x20 Size: 0x1 BitMask: 01 BoolProperty Engine.MeshReductionSettings.bRecalculateNormals */
    uint8_t UnknownData21[0x3];
    float HardAngleThreshold; /* Ofs: 0x24 Size: 0x4 FloatProperty Engine.MeshReductionSettings.HardAngleThreshold */
    bool bActive; /* Ofs: 0x28 Size: 0x1 BitMask: 01 BoolProperty Engine.MeshReductionSettings.bActive */
    bool bGenerateUniqueLightmapUVs; /* Ofs: 0x29 Size: 0x1 BitMask: 01 BoolProperty Engine.MeshReductionSettings.bGenerateUniqueLightmapUVs */
    bool bKeepSymmetry; /* Ofs: 0x2A Size: 0x1 BitMask: 01 BoolProperty Engine.MeshReductionSettings.bKeepSymmetry */
    bool bVisibilityAided; /* Ofs: 0x2B Size: 0x1 BitMask: 01 BoolProperty Engine.MeshReductionSettings.bVisibilityAided */
    bool bCullOccluded; /* Ofs: 0x2C Size: 0x1 BitMask: 01 BoolProperty Engine.MeshReductionSettings.bCullOccluded */
    TEnumAsByte<enum EMeshFeatureImportance> VisibilityAggressiveness; /* Ofs: 0x2D Size: 0x1 ByteProperty Engine.MeshReductionSettings.VisibilityAggressiveness */
    bool bUseVertexWeights; /* Ofs: 0x2E Size: 0x1 BitMask: 01 BoolProperty Engine.MeshReductionSettings.bUseVertexWeights */
    bool bSimplifyMaterials; /* Ofs: 0x2F Size: 0x1 BitMask: 01 BoolProperty Engine.MeshReductionSettings.bSimplifyMaterials */
    FSimplygonMaterialLODSettings MaterialLODSettings; /* Ofs: 0x30 Size: 0x80 StructProperty Engine.MeshReductionSettings.MaterialLODSettings */
    FMaterialProxySettings MaterialProxySettings; /* Ofs: 0xB0 Size: 0x94 StructProperty Engine.MeshReductionSettings.MaterialProxySettings */
    uint8_t UnknownData144[0x4];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFMeshReductionSettings = sizeof(FMeshReductionSettings); // 328
    static_assert(sizeof(FMeshReductionSettings) == 0x148, "Size of FMeshReductionSettings is not correct.");
	auto constexpr FMeshReductionSettings_BaseLODModel_Offset = offsetof(FMeshReductionSettings, BaseLODModel);
	static_assert(FMeshReductionSettings_BaseLODModel_Offset == 0x0, "FMeshReductionSettings::BaseLODModel offset is not 0");
	auto constexpr FMeshReductionSettings_MetricToUse_Offset = offsetof(FMeshReductionSettings, MetricToUse);
	static_assert(FMeshReductionSettings_MetricToUse_Offset == 0x4, "FMeshReductionSettings::MetricToUse offset is not 4");
	auto constexpr FMeshReductionSettings_PercentTriangles_Offset = offsetof(FMeshReductionSettings, PercentTriangles);
	static_assert(FMeshReductionSettings_PercentTriangles_Offset == 0x8, "FMeshReductionSettings::PercentTriangles offset is not 8");
	auto constexpr FMeshReductionSettings_ScreenSize_Offset = offsetof(FMeshReductionSettings, ScreenSize);
	static_assert(FMeshReductionSettings_ScreenSize_Offset == 0xc, "FMeshReductionSettings::ScreenSize offset is not c");
	auto constexpr FMeshReductionSettings_MaxDeviation_Offset = offsetof(FMeshReductionSettings, MaxDeviation);
	static_assert(FMeshReductionSettings_MaxDeviation_Offset == 0x10, "FMeshReductionSettings::MaxDeviation offset is not 10");
	auto constexpr FMeshReductionSettings_PixelError_Offset = offsetof(FMeshReductionSettings, PixelError);
	static_assert(FMeshReductionSettings_PixelError_Offset == 0x14, "FMeshReductionSettings::PixelError offset is not 14");
	auto constexpr FMeshReductionSettings_WeldingThreshold_Offset = offsetof(FMeshReductionSettings, WeldingThreshold);
	static_assert(FMeshReductionSettings_WeldingThreshold_Offset == 0x18, "FMeshReductionSettings::WeldingThreshold offset is not 18");
	auto constexpr FMeshReductionSettings_SilhouetteImportance_Offset = offsetof(FMeshReductionSettings, SilhouetteImportance);
	static_assert(FMeshReductionSettings_SilhouetteImportance_Offset == 0x1c, "FMeshReductionSettings::SilhouetteImportance offset is not 1c");
	auto constexpr FMeshReductionSettings_TextureImportance_Offset = offsetof(FMeshReductionSettings, TextureImportance);
	static_assert(FMeshReductionSettings_TextureImportance_Offset == 0x1d, "FMeshReductionSettings::TextureImportance offset is not 1d");
	auto constexpr FMeshReductionSettings_ShadingImportance_Offset = offsetof(FMeshReductionSettings, ShadingImportance);
	static_assert(FMeshReductionSettings_ShadingImportance_Offset == 0x1e, "FMeshReductionSettings::ShadingImportance offset is not 1e");
	auto constexpr FMeshReductionSettings_VertexColorImportance_Offset = offsetof(FMeshReductionSettings, VertexColorImportance);
	static_assert(FMeshReductionSettings_VertexColorImportance_Offset == 0x1f, "FMeshReductionSettings::VertexColorImportance offset is not 1f");
	auto constexpr FMeshReductionSettings_HardAngleThreshold_Offset = offsetof(FMeshReductionSettings, HardAngleThreshold);
	static_assert(FMeshReductionSettings_HardAngleThreshold_Offset == 0x24, "FMeshReductionSettings::HardAngleThreshold offset is not 24");
	auto constexpr FMeshReductionSettings_VisibilityAggressiveness_Offset = offsetof(FMeshReductionSettings, VisibilityAggressiveness);
	static_assert(FMeshReductionSettings_VisibilityAggressiveness_Offset == 0x2d, "FMeshReductionSettings::VisibilityAggressiveness offset is not 2d");
	auto constexpr FMeshReductionSettings_MaterialLODSettings_Offset = offsetof(FMeshReductionSettings, MaterialLODSettings);
	static_assert(FMeshReductionSettings_MaterialLODSettings_Offset == 0x30, "FMeshReductionSettings::MaterialLODSettings offset is not 30");
	auto constexpr FMeshReductionSettings_MaterialProxySettings_Offset = offsetof(FMeshReductionSettings, MaterialProxySettings);
	static_assert(FMeshReductionSettings_MaterialProxySettings_Offset == 0xb0, "FMeshReductionSettings::MaterialProxySettings offset is not b0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
