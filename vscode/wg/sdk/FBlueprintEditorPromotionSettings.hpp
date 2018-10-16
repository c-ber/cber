#pragma once
#include "FFilePath.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FBlueprintEditorPromotionSettings // Size: 0x30
{
public:
    FFilePath FirstMeshPath; /* Ofs: 0x0 Size: 0x10 StructProperty Engine.BlueprintEditorPromotionSettings.FirstMeshPath */
    FFilePath SecondMeshPath; /* Ofs: 0x10 Size: 0x10 StructProperty Engine.BlueprintEditorPromotionSettings.SecondMeshPath */
    FFilePath DefaultParticleAsset; /* Ofs: 0x20 Size: 0x10 StructProperty Engine.BlueprintEditorPromotionSettings.DefaultParticleAsset */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFBlueprintEditorPromotionSettings = sizeof(FBlueprintEditorPromotionSettings); // 48
    static_assert(sizeof(FBlueprintEditorPromotionSettings) == 0x30, "Size of FBlueprintEditorPromotionSettings is not correct.");
	auto constexpr FBlueprintEditorPromotionSettings_FirstMeshPath_Offset = offsetof(FBlueprintEditorPromotionSettings, FirstMeshPath);
	static_assert(FBlueprintEditorPromotionSettings_FirstMeshPath_Offset == 0x0, "FBlueprintEditorPromotionSettings::FirstMeshPath offset is not 0");
	auto constexpr FBlueprintEditorPromotionSettings_SecondMeshPath_Offset = offsetof(FBlueprintEditorPromotionSettings, SecondMeshPath);
	static_assert(FBlueprintEditorPromotionSettings_SecondMeshPath_Offset == 0x10, "FBlueprintEditorPromotionSettings::SecondMeshPath offset is not 10");
	auto constexpr FBlueprintEditorPromotionSettings_DefaultParticleAsset_Offset = offsetof(FBlueprintEditorPromotionSettings, DefaultParticleAsset);
	static_assert(FBlueprintEditorPromotionSettings_DefaultParticleAsset_Offset == 0x20, "FBlueprintEditorPromotionSettings::DefaultParticleAsset offset is not 20");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
