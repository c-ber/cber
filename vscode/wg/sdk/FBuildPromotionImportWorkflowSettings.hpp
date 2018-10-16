#pragma once
#include "FEditorImportWorkflowDefinition.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FBuildPromotionImportWorkflowSettings // Size: 0x150
{
public:
    FEditorImportWorkflowDefinition Diffuse; /* Ofs: 0x0 Size: 0x20 StructProperty Engine.BuildPromotionImportWorkflowSettings.Diffuse */
    FEditorImportWorkflowDefinition Normal; /* Ofs: 0x20 Size: 0x20 StructProperty Engine.BuildPromotionImportWorkflowSettings.Normal */
    FEditorImportWorkflowDefinition StaticMesh; /* Ofs: 0x40 Size: 0x20 StructProperty Engine.BuildPromotionImportWorkflowSettings.StaticMesh */
    FEditorImportWorkflowDefinition ReimportStaticMesh; /* Ofs: 0x60 Size: 0x20 StructProperty Engine.BuildPromotionImportWorkflowSettings.ReimportStaticMesh */
    FEditorImportWorkflowDefinition BlendShapeMesh; /* Ofs: 0x80 Size: 0x20 StructProperty Engine.BuildPromotionImportWorkflowSettings.BlendShapeMesh */
    FEditorImportWorkflowDefinition MorphMesh; /* Ofs: 0xA0 Size: 0x20 StructProperty Engine.BuildPromotionImportWorkflowSettings.MorphMesh */
    FEditorImportWorkflowDefinition SkeletalMesh; /* Ofs: 0xC0 Size: 0x20 StructProperty Engine.BuildPromotionImportWorkflowSettings.SkeletalMesh */
    FEditorImportWorkflowDefinition Animation; /* Ofs: 0xE0 Size: 0x20 StructProperty Engine.BuildPromotionImportWorkflowSettings.Animation */
    FEditorImportWorkflowDefinition Sound; /* Ofs: 0x100 Size: 0x20 StructProperty Engine.BuildPromotionImportWorkflowSettings.Sound */
    FEditorImportWorkflowDefinition SurroundSound; /* Ofs: 0x120 Size: 0x20 StructProperty Engine.BuildPromotionImportWorkflowSettings.SurroundSound */
    TArray<struct FEditorImportWorkflowDefinition> OtherAssetsToImport; /* Ofs: 0x140 Size: 0x10 ArrayProperty Engine.BuildPromotionImportWorkflowSettings.OtherAssetsToImport */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFBuildPromotionImportWorkflowSettings = sizeof(FBuildPromotionImportWorkflowSettings); // 336
    static_assert(sizeof(FBuildPromotionImportWorkflowSettings) == 0x150, "Size of FBuildPromotionImportWorkflowSettings is not correct.");
	auto constexpr FBuildPromotionImportWorkflowSettings_Diffuse_Offset = offsetof(FBuildPromotionImportWorkflowSettings, Diffuse);
	static_assert(FBuildPromotionImportWorkflowSettings_Diffuse_Offset == 0x0, "FBuildPromotionImportWorkflowSettings::Diffuse offset is not 0");
	auto constexpr FBuildPromotionImportWorkflowSettings_Normal_Offset = offsetof(FBuildPromotionImportWorkflowSettings, Normal);
	static_assert(FBuildPromotionImportWorkflowSettings_Normal_Offset == 0x20, "FBuildPromotionImportWorkflowSettings::Normal offset is not 20");
	auto constexpr FBuildPromotionImportWorkflowSettings_StaticMesh_Offset = offsetof(FBuildPromotionImportWorkflowSettings, StaticMesh);
	static_assert(FBuildPromotionImportWorkflowSettings_StaticMesh_Offset == 0x40, "FBuildPromotionImportWorkflowSettings::StaticMesh offset is not 40");
	auto constexpr FBuildPromotionImportWorkflowSettings_ReimportStaticMesh_Offset = offsetof(FBuildPromotionImportWorkflowSettings, ReimportStaticMesh);
	static_assert(FBuildPromotionImportWorkflowSettings_ReimportStaticMesh_Offset == 0x60, "FBuildPromotionImportWorkflowSettings::ReimportStaticMesh offset is not 60");
	auto constexpr FBuildPromotionImportWorkflowSettings_BlendShapeMesh_Offset = offsetof(FBuildPromotionImportWorkflowSettings, BlendShapeMesh);
	static_assert(FBuildPromotionImportWorkflowSettings_BlendShapeMesh_Offset == 0x80, "FBuildPromotionImportWorkflowSettings::BlendShapeMesh offset is not 80");
	auto constexpr FBuildPromotionImportWorkflowSettings_MorphMesh_Offset = offsetof(FBuildPromotionImportWorkflowSettings, MorphMesh);
	static_assert(FBuildPromotionImportWorkflowSettings_MorphMesh_Offset == 0xa0, "FBuildPromotionImportWorkflowSettings::MorphMesh offset is not a0");
	auto constexpr FBuildPromotionImportWorkflowSettings_SkeletalMesh_Offset = offsetof(FBuildPromotionImportWorkflowSettings, SkeletalMesh);
	static_assert(FBuildPromotionImportWorkflowSettings_SkeletalMesh_Offset == 0xc0, "FBuildPromotionImportWorkflowSettings::SkeletalMesh offset is not c0");
	auto constexpr FBuildPromotionImportWorkflowSettings_Animation_Offset = offsetof(FBuildPromotionImportWorkflowSettings, Animation);
	static_assert(FBuildPromotionImportWorkflowSettings_Animation_Offset == 0xe0, "FBuildPromotionImportWorkflowSettings::Animation offset is not e0");
	auto constexpr FBuildPromotionImportWorkflowSettings_Sound_Offset = offsetof(FBuildPromotionImportWorkflowSettings, Sound);
	static_assert(FBuildPromotionImportWorkflowSettings_Sound_Offset == 0x100, "FBuildPromotionImportWorkflowSettings::Sound offset is not 100");
	auto constexpr FBuildPromotionImportWorkflowSettings_SurroundSound_Offset = offsetof(FBuildPromotionImportWorkflowSettings, SurroundSound);
	static_assert(FBuildPromotionImportWorkflowSettings_SurroundSound_Offset == 0x120, "FBuildPromotionImportWorkflowSettings::SurroundSound offset is not 120");
	auto constexpr FBuildPromotionImportWorkflowSettings_OtherAssetsToImport_Offset = offsetof(FBuildPromotionImportWorkflowSettings, OtherAssetsToImport);
	static_assert(FBuildPromotionImportWorkflowSettings_OtherAssetsToImport_Offset == 0x140, "FBuildPromotionImportWorkflowSettings::OtherAssetsToImport offset is not 140");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
