#pragma once
#include "FFilePath.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FMaterialEditorPromotionSettings // Size: 0x30
{
public:
    FFilePath DefaultMaterialAsset; /* Ofs: 0x0 Size: 0x10 StructProperty Engine.MaterialEditorPromotionSettings.DefaultMaterialAsset */
    FFilePath DefaultDiffuseTexture; /* Ofs: 0x10 Size: 0x10 StructProperty Engine.MaterialEditorPromotionSettings.DefaultDiffuseTexture */
    FFilePath DefaultNormalTexture; /* Ofs: 0x20 Size: 0x10 StructProperty Engine.MaterialEditorPromotionSettings.DefaultNormalTexture */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFMaterialEditorPromotionSettings = sizeof(FMaterialEditorPromotionSettings); // 48
    static_assert(sizeof(FMaterialEditorPromotionSettings) == 0x30, "Size of FMaterialEditorPromotionSettings is not correct.");
	auto constexpr FMaterialEditorPromotionSettings_DefaultMaterialAsset_Offset = offsetof(FMaterialEditorPromotionSettings, DefaultMaterialAsset);
	static_assert(FMaterialEditorPromotionSettings_DefaultMaterialAsset_Offset == 0x0, "FMaterialEditorPromotionSettings::DefaultMaterialAsset offset is not 0");
	auto constexpr FMaterialEditorPromotionSettings_DefaultDiffuseTexture_Offset = offsetof(FMaterialEditorPromotionSettings, DefaultDiffuseTexture);
	static_assert(FMaterialEditorPromotionSettings_DefaultDiffuseTexture_Offset == 0x10, "FMaterialEditorPromotionSettings::DefaultDiffuseTexture offset is not 10");
	auto constexpr FMaterialEditorPromotionSettings_DefaultNormalTexture_Offset = offsetof(FMaterialEditorPromotionSettings, DefaultNormalTexture);
	static_assert(FMaterialEditorPromotionSettings_DefaultNormalTexture_Offset == 0x20, "FMaterialEditorPromotionSettings::DefaultNormalTexture offset is not 20");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
