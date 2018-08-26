#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FSkeletalMeshClothBuildParams // Size: 0x50
{
public:
    FString AssetName; /* Ofs: 0x0 Size: 0x10 StrProperty Engine.SkeletalMeshClothBuildParams.AssetName */
    int32_t LODIndex; /* Ofs: 0x10 Size: 0x4 IntProperty Engine.SkeletalMeshClothBuildParams.LODIndex */
    int32_t SourceSection; /* Ofs: 0x14 Size: 0x4 IntProperty Engine.SkeletalMeshClothBuildParams.SourceSection */
    bool bRemoveFromMesh; /* Ofs: 0x18 Size: 0x1 BitMask: 01 BoolProperty Engine.SkeletalMeshClothBuildParams.bRemoveFromMesh */
    uint8_t UnknownData19[0x7];
    TAssetPtr<ExternalPtr<struct UPhysicsAsset>> PhysicsAsset; /* Ofs: 0x20 Size: 0x1C AssetObjectProperty Engine.SkeletalMeshClothBuildParams.PhysicsAsset */
    uint8_t UnknownData3C[0x4];
    bool bTryAutoFix; /* Ofs: 0x40 Size: 0x1 BitMask: 01 BoolProperty Engine.SkeletalMeshClothBuildParams.bTryAutoFix */
    uint8_t UnknownData41[0x3];
    float AutoFixThreshold; /* Ofs: 0x44 Size: 0x4 FloatProperty Engine.SkeletalMeshClothBuildParams.AutoFixThreshold */
    float SimulatedParticleMaxDistance; /* Ofs: 0x48 Size: 0x4 FloatProperty Engine.SkeletalMeshClothBuildParams.SimulatedParticleMaxDistance */
    uint8_t UnknownData4C[0x4];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFSkeletalMeshClothBuildParams = sizeof(FSkeletalMeshClothBuildParams); // 80
    static_assert(sizeof(FSkeletalMeshClothBuildParams) == 0x50, "Size of FSkeletalMeshClothBuildParams is not correct.");
	auto constexpr FSkeletalMeshClothBuildParams_AssetName_Offset = offsetof(FSkeletalMeshClothBuildParams, AssetName);
	static_assert(FSkeletalMeshClothBuildParams_AssetName_Offset == 0x0, "FSkeletalMeshClothBuildParams::AssetName offset is not 0");
	auto constexpr FSkeletalMeshClothBuildParams_LODIndex_Offset = offsetof(FSkeletalMeshClothBuildParams, LODIndex);
	static_assert(FSkeletalMeshClothBuildParams_LODIndex_Offset == 0x10, "FSkeletalMeshClothBuildParams::LODIndex offset is not 10");
	auto constexpr FSkeletalMeshClothBuildParams_SourceSection_Offset = offsetof(FSkeletalMeshClothBuildParams, SourceSection);
	static_assert(FSkeletalMeshClothBuildParams_SourceSection_Offset == 0x14, "FSkeletalMeshClothBuildParams::SourceSection offset is not 14");
	auto constexpr FSkeletalMeshClothBuildParams_PhysicsAsset_Offset = offsetof(FSkeletalMeshClothBuildParams, PhysicsAsset);
	static_assert(FSkeletalMeshClothBuildParams_PhysicsAsset_Offset == 0x20, "FSkeletalMeshClothBuildParams::PhysicsAsset offset is not 20");
	auto constexpr FSkeletalMeshClothBuildParams_AutoFixThreshold_Offset = offsetof(FSkeletalMeshClothBuildParams, AutoFixThreshold);
	static_assert(FSkeletalMeshClothBuildParams_AutoFixThreshold_Offset == 0x44, "FSkeletalMeshClothBuildParams::AutoFixThreshold offset is not 44");
	auto constexpr FSkeletalMeshClothBuildParams_SimulatedParticleMaxDistance_Offset = offsetof(FSkeletalMeshClothBuildParams, SimulatedParticleMaxDistance);
	static_assert(FSkeletalMeshClothBuildParams_SimulatedParticleMaxDistance_Offset == 0x48, "FSkeletalMeshClothBuildParams::SimulatedParticleMaxDistance offset is not 48");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
