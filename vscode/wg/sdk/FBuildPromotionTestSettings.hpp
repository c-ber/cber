#pragma once
#include "FFilePath.hpp"
#include "FBuildPromotionImportWorkflowSettings.hpp"
#include "FBuildPromotionOpenAssetSettings.hpp"
#include "FBuildPromotionNewProjectSettings.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FBuildPromotionTestSettings // Size: 0x1F0
{
public:
    FFilePath DefaultStaticMeshAsset; /* Ofs: 0x0 Size: 0x10 StructProperty Engine.BuildPromotionTestSettings.DefaultStaticMeshAsset */
    FBuildPromotionImportWorkflowSettings ImportWorkflow; /* Ofs: 0x10 Size: 0x150 StructProperty Engine.BuildPromotionTestSettings.ImportWorkflow */
    FBuildPromotionOpenAssetSettings OpenAssets; /* Ofs: 0x160 Size: 0x60 StructProperty Engine.BuildPromotionTestSettings.OpenAssets */
    FBuildPromotionNewProjectSettings NewProjectSettings; /* Ofs: 0x1C0 Size: 0x20 StructProperty Engine.BuildPromotionTestSettings.NewProjectSettings */
    FFilePath SourceControlMaterial; /* Ofs: 0x1E0 Size: 0x10 StructProperty Engine.BuildPromotionTestSettings.SourceControlMaterial */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFBuildPromotionTestSettings = sizeof(FBuildPromotionTestSettings); // 496
    static_assert(sizeof(FBuildPromotionTestSettings) == 0x1F0, "Size of FBuildPromotionTestSettings is not correct.");
	auto constexpr FBuildPromotionTestSettings_DefaultStaticMeshAsset_Offset = offsetof(FBuildPromotionTestSettings, DefaultStaticMeshAsset);
	static_assert(FBuildPromotionTestSettings_DefaultStaticMeshAsset_Offset == 0x0, "FBuildPromotionTestSettings::DefaultStaticMeshAsset offset is not 0");
	auto constexpr FBuildPromotionTestSettings_ImportWorkflow_Offset = offsetof(FBuildPromotionTestSettings, ImportWorkflow);
	static_assert(FBuildPromotionTestSettings_ImportWorkflow_Offset == 0x10, "FBuildPromotionTestSettings::ImportWorkflow offset is not 10");
	auto constexpr FBuildPromotionTestSettings_OpenAssets_Offset = offsetof(FBuildPromotionTestSettings, OpenAssets);
	static_assert(FBuildPromotionTestSettings_OpenAssets_Offset == 0x160, "FBuildPromotionTestSettings::OpenAssets offset is not 160");
	auto constexpr FBuildPromotionTestSettings_NewProjectSettings_Offset = offsetof(FBuildPromotionTestSettings, NewProjectSettings);
	static_assert(FBuildPromotionTestSettings_NewProjectSettings_Offset == 0x1c0, "FBuildPromotionTestSettings::NewProjectSettings offset is not 1c0");
	auto constexpr FBuildPromotionTestSettings_SourceControlMaterial_Offset = offsetof(FBuildPromotionTestSettings, SourceControlMaterial);
	static_assert(FBuildPromotionTestSettings_SourceControlMaterial_Offset == 0x1e0, "FBuildPromotionTestSettings::SourceControlMaterial offset is not 1e0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
