#pragma once
#include "FFilePath.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FBuildPromotionOpenAssetSettings // Size: 0x60
{
public:
    FFilePath BlueprintAsset; /* Ofs: 0x0 Size: 0x10 StructProperty Engine.BuildPromotionOpenAssetSettings.BlueprintAsset */
    FFilePath MaterialAsset; /* Ofs: 0x10 Size: 0x10 StructProperty Engine.BuildPromotionOpenAssetSettings.MaterialAsset */
    FFilePath ParticleSystemAsset; /* Ofs: 0x20 Size: 0x10 StructProperty Engine.BuildPromotionOpenAssetSettings.ParticleSystemAsset */
    FFilePath SkeletalMeshAsset; /* Ofs: 0x30 Size: 0x10 StructProperty Engine.BuildPromotionOpenAssetSettings.SkeletalMeshAsset */
    FFilePath StaticMeshAsset; /* Ofs: 0x40 Size: 0x10 StructProperty Engine.BuildPromotionOpenAssetSettings.StaticMeshAsset */
    FFilePath TextureAsset; /* Ofs: 0x50 Size: 0x10 StructProperty Engine.BuildPromotionOpenAssetSettings.TextureAsset */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFBuildPromotionOpenAssetSettings = sizeof(FBuildPromotionOpenAssetSettings); // 96
    static_assert(sizeof(FBuildPromotionOpenAssetSettings) == 0x60, "Size of FBuildPromotionOpenAssetSettings is not correct.");
	auto constexpr FBuildPromotionOpenAssetSettings_BlueprintAsset_Offset = offsetof(FBuildPromotionOpenAssetSettings, BlueprintAsset);
	static_assert(FBuildPromotionOpenAssetSettings_BlueprintAsset_Offset == 0x0, "FBuildPromotionOpenAssetSettings::BlueprintAsset offset is not 0");
	auto constexpr FBuildPromotionOpenAssetSettings_MaterialAsset_Offset = offsetof(FBuildPromotionOpenAssetSettings, MaterialAsset);
	static_assert(FBuildPromotionOpenAssetSettings_MaterialAsset_Offset == 0x10, "FBuildPromotionOpenAssetSettings::MaterialAsset offset is not 10");
	auto constexpr FBuildPromotionOpenAssetSettings_ParticleSystemAsset_Offset = offsetof(FBuildPromotionOpenAssetSettings, ParticleSystemAsset);
	static_assert(FBuildPromotionOpenAssetSettings_ParticleSystemAsset_Offset == 0x20, "FBuildPromotionOpenAssetSettings::ParticleSystemAsset offset is not 20");
	auto constexpr FBuildPromotionOpenAssetSettings_SkeletalMeshAsset_Offset = offsetof(FBuildPromotionOpenAssetSettings, SkeletalMeshAsset);
	static_assert(FBuildPromotionOpenAssetSettings_SkeletalMeshAsset_Offset == 0x30, "FBuildPromotionOpenAssetSettings::SkeletalMeshAsset offset is not 30");
	auto constexpr FBuildPromotionOpenAssetSettings_StaticMeshAsset_Offset = offsetof(FBuildPromotionOpenAssetSettings, StaticMeshAsset);
	static_assert(FBuildPromotionOpenAssetSettings_StaticMeshAsset_Offset == 0x40, "FBuildPromotionOpenAssetSettings::StaticMeshAsset offset is not 40");
	auto constexpr FBuildPromotionOpenAssetSettings_TextureAsset_Offset = offsetof(FBuildPromotionOpenAssetSettings, TextureAsset);
	static_assert(FBuildPromotionOpenAssetSettings_TextureAsset_Offset == 0x50, "FBuildPromotionOpenAssetSettings::TextureAsset offset is not 50");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
