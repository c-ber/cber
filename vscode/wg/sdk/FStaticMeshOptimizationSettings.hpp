#pragma once
#include "EOptimizationType.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FStaticMeshOptimizationSettings // Size: 0x1C
{
public:
    TEnumAsByte<enum EOptimizationType> ReductionMethod; /* Ofs: 0x0 Size: 0x1 ByteProperty Engine.StaticMeshOptimizationSettings.ReductionMethod */
    uint8_t UnknownData1[0x3];
    float NumOfTrianglesPercentage; /* Ofs: 0x4 Size: 0x4 FloatProperty Engine.StaticMeshOptimizationSettings.NumOfTrianglesPercentage */
    float MaxDeviationPercentage; /* Ofs: 0x8 Size: 0x4 FloatProperty Engine.StaticMeshOptimizationSettings.MaxDeviationPercentage */
    float WeldingThreshold; /* Ofs: 0xC Size: 0x4 FloatProperty Engine.StaticMeshOptimizationSettings.WeldingThreshold */
    bool bRecalcNormals; /* Ofs: 0x10 Size: 0x1 BitMask: 01 BoolProperty Engine.StaticMeshOptimizationSettings.bRecalcNormals */
    uint8_t UnknownData11[0x3];
    float NormalsThreshold; /* Ofs: 0x14 Size: 0x4 FloatProperty Engine.StaticMeshOptimizationSettings.NormalsThreshold */
    uint8_t SilhouetteImportance; /* Ofs: 0x18 Size: 0x1 ByteProperty Engine.StaticMeshOptimizationSettings.SilhouetteImportance */
    uint8_t TextureImportance; /* Ofs: 0x19 Size: 0x1 ByteProperty Engine.StaticMeshOptimizationSettings.TextureImportance */
    uint8_t ShadingImportance; /* Ofs: 0x1A Size: 0x1 ByteProperty Engine.StaticMeshOptimizationSettings.ShadingImportance */
    uint8_t UnknownData1B[0x1];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFStaticMeshOptimizationSettings = sizeof(FStaticMeshOptimizationSettings); // 28
    static_assert(sizeof(FStaticMeshOptimizationSettings) == 0x1C, "Size of FStaticMeshOptimizationSettings is not correct.");
	auto constexpr FStaticMeshOptimizationSettings_ReductionMethod_Offset = offsetof(FStaticMeshOptimizationSettings, ReductionMethod);
	static_assert(FStaticMeshOptimizationSettings_ReductionMethod_Offset == 0x0, "FStaticMeshOptimizationSettings::ReductionMethod offset is not 0");
	auto constexpr FStaticMeshOptimizationSettings_NumOfTrianglesPercentage_Offset = offsetof(FStaticMeshOptimizationSettings, NumOfTrianglesPercentage);
	static_assert(FStaticMeshOptimizationSettings_NumOfTrianglesPercentage_Offset == 0x4, "FStaticMeshOptimizationSettings::NumOfTrianglesPercentage offset is not 4");
	auto constexpr FStaticMeshOptimizationSettings_MaxDeviationPercentage_Offset = offsetof(FStaticMeshOptimizationSettings, MaxDeviationPercentage);
	static_assert(FStaticMeshOptimizationSettings_MaxDeviationPercentage_Offset == 0x8, "FStaticMeshOptimizationSettings::MaxDeviationPercentage offset is not 8");
	auto constexpr FStaticMeshOptimizationSettings_WeldingThreshold_Offset = offsetof(FStaticMeshOptimizationSettings, WeldingThreshold);
	static_assert(FStaticMeshOptimizationSettings_WeldingThreshold_Offset == 0xc, "FStaticMeshOptimizationSettings::WeldingThreshold offset is not c");
	auto constexpr FStaticMeshOptimizationSettings_NormalsThreshold_Offset = offsetof(FStaticMeshOptimizationSettings, NormalsThreshold);
	static_assert(FStaticMeshOptimizationSettings_NormalsThreshold_Offset == 0x14, "FStaticMeshOptimizationSettings::NormalsThreshold offset is not 14");
	auto constexpr FStaticMeshOptimizationSettings_SilhouetteImportance_Offset = offsetof(FStaticMeshOptimizationSettings, SilhouetteImportance);
	static_assert(FStaticMeshOptimizationSettings_SilhouetteImportance_Offset == 0x18, "FStaticMeshOptimizationSettings::SilhouetteImportance offset is not 18");
	auto constexpr FStaticMeshOptimizationSettings_TextureImportance_Offset = offsetof(FStaticMeshOptimizationSettings, TextureImportance);
	static_assert(FStaticMeshOptimizationSettings_TextureImportance_Offset == 0x19, "FStaticMeshOptimizationSettings::TextureImportance offset is not 19");
	auto constexpr FStaticMeshOptimizationSettings_ShadingImportance_Offset = offsetof(FStaticMeshOptimizationSettings, ShadingImportance);
	static_assert(FStaticMeshOptimizationSettings_ShadingImportance_Offset == 0x1a, "FStaticMeshOptimizationSettings::ShadingImportance offset is not 1a");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
