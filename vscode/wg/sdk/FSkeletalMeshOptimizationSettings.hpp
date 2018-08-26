#pragma once
#include "SkeletalMeshOptimizationType.hpp"
#include "SkeletalMeshOptimizationImportance.hpp"
#include "FSimplygonMaterialLODSettings.hpp"
#include "FMaterialProxySettings.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FSkeletalMeshOptimizationSettings // Size: 0x170
{
public:
    TEnumAsByte<enum SkeletalMeshOptimizationType> ReductionMethod; /* Ofs: 0x0 Size: 0x1 ByteProperty Engine.SkeletalMeshOptimizationSettings.ReductionMethod */
    uint8_t UnknownData1[0x3];
    float NumOfTrianglesPercentage; /* Ofs: 0x4 Size: 0x4 FloatProperty Engine.SkeletalMeshOptimizationSettings.NumOfTrianglesPercentage */
    float MaxDeviationPercentage; /* Ofs: 0x8 Size: 0x4 FloatProperty Engine.SkeletalMeshOptimizationSettings.MaxDeviationPercentage */
    int32_t ScreenSize; /* Ofs: 0xC Size: 0x4 IntProperty Engine.SkeletalMeshOptimizationSettings.ScreenSize */
    float WeldingThreshold; /* Ofs: 0x10 Size: 0x4 FloatProperty Engine.SkeletalMeshOptimizationSettings.WeldingThreshold */
    bool bRecalcNormals; /* Ofs: 0x14 Size: 0x1 BitMask: 01 BoolProperty Engine.SkeletalMeshOptimizationSettings.bRecalcNormals */
    uint8_t UnknownData15[0x3];
    float NormalsThreshold; /* Ofs: 0x18 Size: 0x4 FloatProperty Engine.SkeletalMeshOptimizationSettings.NormalsThreshold */
    TEnumAsByte<enum SkeletalMeshOptimizationImportance> SilhouetteImportance; /* Ofs: 0x1C Size: 0x1 ByteProperty Engine.SkeletalMeshOptimizationSettings.SilhouetteImportance */
    TEnumAsByte<enum SkeletalMeshOptimizationImportance> TextureImportance; /* Ofs: 0x1D Size: 0x1 ByteProperty Engine.SkeletalMeshOptimizationSettings.TextureImportance */
    TEnumAsByte<enum SkeletalMeshOptimizationImportance> ShadingImportance; /* Ofs: 0x1E Size: 0x1 ByteProperty Engine.SkeletalMeshOptimizationSettings.ShadingImportance */
    TEnumAsByte<enum SkeletalMeshOptimizationImportance> SkinningImportance; /* Ofs: 0x1F Size: 0x1 ByteProperty Engine.SkeletalMeshOptimizationSettings.SkinningImportance */
    float BoneReductionRatio; /* Ofs: 0x20 Size: 0x4 FloatProperty Engine.SkeletalMeshOptimizationSettings.BoneReductionRatio */
    int32_t MaxBonesPerVertex; /* Ofs: 0x24 Size: 0x4 IntProperty Engine.SkeletalMeshOptimizationSettings.MaxBonesPerVertex */
    bool bTransferMorphTarget; /* Ofs: 0x28 Size: 0x1 BitMask: 01 BoolProperty Engine.SkeletalMeshOptimizationSettings.bTransferMorphTarget */
    uint8_t UnknownData29[0x7];
    TArray<struct FBoneReference> BonesToRemove; /* Ofs: 0x30 Size: 0x10 ArrayProperty Engine.SkeletalMeshOptimizationSettings.BonesToRemove */
    int32_t BaseLOD; /* Ofs: 0x40 Size: 0x4 IntProperty Engine.SkeletalMeshOptimizationSettings.BaseLOD */
    int32_t LODChainLastIndex; /* Ofs: 0x44 Size: 0x4 IntProperty Engine.SkeletalMeshOptimizationSettings.LODChainLastIndex */
    bool bUseVertexWeights; /* Ofs: 0x48 Size: 0x1 BitMask: 01 BoolProperty Engine.SkeletalMeshOptimizationSettings.bUseVertexWeights */
    bool bUseVertexWeightsForMaterial; /* Ofs: 0x49 Size: 0x1 BitMask: 01 BoolProperty Engine.SkeletalMeshOptimizationSettings.bUseVertexWeightsForMaterial */
    bool bSimplifyMaterials; /* Ofs: 0x4A Size: 0x1 BitMask: 01 BoolProperty Engine.SkeletalMeshOptimizationSettings.bSimplifyMaterials */
    uint8_t UnknownData4B[0x5];
    FSimplygonMaterialLODSettings MaterialLODSettings; /* Ofs: 0x50 Size: 0x80 StructProperty Engine.SkeletalMeshOptimizationSettings.MaterialLODSettings */
    FMaterialProxySettings MaterialSettings; /* Ofs: 0xD0 Size: 0x94 StructProperty Engine.SkeletalMeshOptimizationSettings.MaterialSettings */
    bool bForceRebuild; /* Ofs: 0x164 Size: 0x1 BitMask: 01 BoolProperty Engine.SkeletalMeshOptimizationSettings.bForceRebuild */
    uint8_t UnknownData165[0x3];
    ExternalPtr<struct UAnimSequence> BakePose; /* Ofs: 0x168 Size: 0x8 ObjectProperty Engine.SkeletalMeshOptimizationSettings.BakePose */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFSkeletalMeshOptimizationSettings = sizeof(FSkeletalMeshOptimizationSettings); // 368
    static_assert(sizeof(FSkeletalMeshOptimizationSettings) == 0x170, "Size of FSkeletalMeshOptimizationSettings is not correct.");
	auto constexpr FSkeletalMeshOptimizationSettings_ReductionMethod_Offset = offsetof(FSkeletalMeshOptimizationSettings, ReductionMethod);
	static_assert(FSkeletalMeshOptimizationSettings_ReductionMethod_Offset == 0x0, "FSkeletalMeshOptimizationSettings::ReductionMethod offset is not 0");
	auto constexpr FSkeletalMeshOptimizationSettings_NumOfTrianglesPercentage_Offset = offsetof(FSkeletalMeshOptimizationSettings, NumOfTrianglesPercentage);
	static_assert(FSkeletalMeshOptimizationSettings_NumOfTrianglesPercentage_Offset == 0x4, "FSkeletalMeshOptimizationSettings::NumOfTrianglesPercentage offset is not 4");
	auto constexpr FSkeletalMeshOptimizationSettings_MaxDeviationPercentage_Offset = offsetof(FSkeletalMeshOptimizationSettings, MaxDeviationPercentage);
	static_assert(FSkeletalMeshOptimizationSettings_MaxDeviationPercentage_Offset == 0x8, "FSkeletalMeshOptimizationSettings::MaxDeviationPercentage offset is not 8");
	auto constexpr FSkeletalMeshOptimizationSettings_ScreenSize_Offset = offsetof(FSkeletalMeshOptimizationSettings, ScreenSize);
	static_assert(FSkeletalMeshOptimizationSettings_ScreenSize_Offset == 0xc, "FSkeletalMeshOptimizationSettings::ScreenSize offset is not c");
	auto constexpr FSkeletalMeshOptimizationSettings_WeldingThreshold_Offset = offsetof(FSkeletalMeshOptimizationSettings, WeldingThreshold);
	static_assert(FSkeletalMeshOptimizationSettings_WeldingThreshold_Offset == 0x10, "FSkeletalMeshOptimizationSettings::WeldingThreshold offset is not 10");
	auto constexpr FSkeletalMeshOptimizationSettings_NormalsThreshold_Offset = offsetof(FSkeletalMeshOptimizationSettings, NormalsThreshold);
	static_assert(FSkeletalMeshOptimizationSettings_NormalsThreshold_Offset == 0x18, "FSkeletalMeshOptimizationSettings::NormalsThreshold offset is not 18");
	auto constexpr FSkeletalMeshOptimizationSettings_SilhouetteImportance_Offset = offsetof(FSkeletalMeshOptimizationSettings, SilhouetteImportance);
	static_assert(FSkeletalMeshOptimizationSettings_SilhouetteImportance_Offset == 0x1c, "FSkeletalMeshOptimizationSettings::SilhouetteImportance offset is not 1c");
	auto constexpr FSkeletalMeshOptimizationSettings_TextureImportance_Offset = offsetof(FSkeletalMeshOptimizationSettings, TextureImportance);
	static_assert(FSkeletalMeshOptimizationSettings_TextureImportance_Offset == 0x1d, "FSkeletalMeshOptimizationSettings::TextureImportance offset is not 1d");
	auto constexpr FSkeletalMeshOptimizationSettings_ShadingImportance_Offset = offsetof(FSkeletalMeshOptimizationSettings, ShadingImportance);
	static_assert(FSkeletalMeshOptimizationSettings_ShadingImportance_Offset == 0x1e, "FSkeletalMeshOptimizationSettings::ShadingImportance offset is not 1e");
	auto constexpr FSkeletalMeshOptimizationSettings_SkinningImportance_Offset = offsetof(FSkeletalMeshOptimizationSettings, SkinningImportance);
	static_assert(FSkeletalMeshOptimizationSettings_SkinningImportance_Offset == 0x1f, "FSkeletalMeshOptimizationSettings::SkinningImportance offset is not 1f");
	auto constexpr FSkeletalMeshOptimizationSettings_BoneReductionRatio_Offset = offsetof(FSkeletalMeshOptimizationSettings, BoneReductionRatio);
	static_assert(FSkeletalMeshOptimizationSettings_BoneReductionRatio_Offset == 0x20, "FSkeletalMeshOptimizationSettings::BoneReductionRatio offset is not 20");
	auto constexpr FSkeletalMeshOptimizationSettings_MaxBonesPerVertex_Offset = offsetof(FSkeletalMeshOptimizationSettings, MaxBonesPerVertex);
	static_assert(FSkeletalMeshOptimizationSettings_MaxBonesPerVertex_Offset == 0x24, "FSkeletalMeshOptimizationSettings::MaxBonesPerVertex offset is not 24");
	auto constexpr FSkeletalMeshOptimizationSettings_BonesToRemove_Offset = offsetof(FSkeletalMeshOptimizationSettings, BonesToRemove);
	static_assert(FSkeletalMeshOptimizationSettings_BonesToRemove_Offset == 0x30, "FSkeletalMeshOptimizationSettings::BonesToRemove offset is not 30");
	auto constexpr FSkeletalMeshOptimizationSettings_BaseLOD_Offset = offsetof(FSkeletalMeshOptimizationSettings, BaseLOD);
	static_assert(FSkeletalMeshOptimizationSettings_BaseLOD_Offset == 0x40, "FSkeletalMeshOptimizationSettings::BaseLOD offset is not 40");
	auto constexpr FSkeletalMeshOptimizationSettings_LODChainLastIndex_Offset = offsetof(FSkeletalMeshOptimizationSettings, LODChainLastIndex);
	static_assert(FSkeletalMeshOptimizationSettings_LODChainLastIndex_Offset == 0x44, "FSkeletalMeshOptimizationSettings::LODChainLastIndex offset is not 44");
	auto constexpr FSkeletalMeshOptimizationSettings_MaterialLODSettings_Offset = offsetof(FSkeletalMeshOptimizationSettings, MaterialLODSettings);
	static_assert(FSkeletalMeshOptimizationSettings_MaterialLODSettings_Offset == 0x50, "FSkeletalMeshOptimizationSettings::MaterialLODSettings offset is not 50");
	auto constexpr FSkeletalMeshOptimizationSettings_MaterialSettings_Offset = offsetof(FSkeletalMeshOptimizationSettings, MaterialSettings);
	static_assert(FSkeletalMeshOptimizationSettings_MaterialSettings_Offset == 0xd0, "FSkeletalMeshOptimizationSettings::MaterialSettings offset is not d0");
	auto constexpr FSkeletalMeshOptimizationSettings_BakePose_Offset = offsetof(FSkeletalMeshOptimizationSettings, BakePose);
	static_assert(FSkeletalMeshOptimizationSettings_BakePose_Offset == 0x168, "FSkeletalMeshOptimizationSettings::BakePose offset is not 168");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
