#pragma once
#include "FBuildPromotionTestSettings.hpp"
#include "FMaterialEditorPromotionSettings.hpp"
#include "FParticleEditorPromotionSettings.hpp"
#include "FBlueprintEditorPromotionSettings.hpp"
#include "FIntPoint.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UAutomationTestSettings // Size: 0x328
	: public UObject // Size: 0x30
{
private:
	typedef UAutomationTestSettings t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(283); // id32("Class Engine.AutomationTestSettings")
		return ptr;
	}
	TArray<struct FString> EngineTestModules; /* Ofs: 0x30 Size: 0x10 - ArrayProperty Engine.AutomationTestSettings.EngineTestModules */
	TArray<struct FString> EditorTestModules; /* Ofs: 0x40 Size: 0x10 - ArrayProperty Engine.AutomationTestSettings.EditorTestModules */
	FStringAssetReference AutomationTestmap; /* Ofs: 0x50 Size: 0x10 - StructProperty Engine.AutomationTestSettings.AutomationTestmap */
	TArray<struct FEditorMapPerformanceTestDefinition> EditorPerformanceTestMaps; /* Ofs: 0x60 Size: 0x10 - ArrayProperty Engine.AutomationTestSettings.EditorPerformanceTestMaps */
	TArray<struct FStringAssetReference> AssetsToOpen; /* Ofs: 0x70 Size: 0x10 - ArrayProperty Engine.AutomationTestSettings.AssetsToOpen */
	FBuildPromotionTestSettings BuildPromotionTest; /* Ofs: 0x80 Size: 0x1F0 - StructProperty Engine.AutomationTestSettings.BuildPromotionTest */
	FMaterialEditorPromotionSettings MaterialEditorPromotionTest; /* Ofs: 0x270 Size: 0x30 - StructProperty Engine.AutomationTestSettings.MaterialEditorPromotionTest */
	FParticleEditorPromotionSettings ParticleEditorPromotionTest; /* Ofs: 0x2A0 Size: 0x10 - StructProperty Engine.AutomationTestSettings.ParticleEditorPromotionTest */
	FBlueprintEditorPromotionSettings BlueprintEditorPromotionTest; /* Ofs: 0x2B0 Size: 0x30 - StructProperty Engine.AutomationTestSettings.BlueprintEditorPromotionTest */
	TArray<struct FString> TestLevelFolders; /* Ofs: 0x2E0 Size: 0x10 - ArrayProperty Engine.AutomationTestSettings.TestLevelFolders */
	TArray<struct FExternalToolDefinition> ExternalTools; /* Ofs: 0x2F0 Size: 0x10 - ArrayProperty Engine.AutomationTestSettings.ExternalTools */
	TArray<struct FEditorImportExportTestDefinition> ImportExportTestDefinitions; /* Ofs: 0x300 Size: 0x10 - ArrayProperty Engine.AutomationTestSettings.ImportExportTestDefinitions */
	TArray<struct FLaunchOnTestSettings> LaunchOnSettings; /* Ofs: 0x310 Size: 0x10 - ArrayProperty Engine.AutomationTestSettings.LaunchOnSettings */
	FIntPoint DefaultScreenshotResolution; /* Ofs: 0x320 Size: 0x8 - StructProperty Engine.AutomationTestSettings.DefaultScreenshotResolution */


	inline bool SetEngineTestModules(t_structHelper inst, TArray<struct FString> value) { inst.WriteOffset(0x30, value); }
	inline bool SetEditorTestModules(t_structHelper inst, TArray<struct FString> value) { inst.WriteOffset(0x40, value); }
	inline bool SetAutomationTestmap(t_structHelper inst, FStringAssetReference value) { inst.WriteOffset(0x50, value); }
	inline bool SetEditorPerformanceTestMaps(t_structHelper inst, TArray<struct FEditorMapPerformanceTestDefinition> value) { inst.WriteOffset(0x60, value); }
	inline bool SetAssetsToOpen(t_structHelper inst, TArray<struct FStringAssetReference> value) { inst.WriteOffset(0x70, value); }
	inline bool SetBuildPromotionTest(t_structHelper inst, FBuildPromotionTestSettings value) { inst.WriteOffset(0x80, value); }
	inline bool SetMaterialEditorPromotionTest(t_structHelper inst, FMaterialEditorPromotionSettings value) { inst.WriteOffset(0x270, value); }
	inline bool SetParticleEditorPromotionTest(t_structHelper inst, FParticleEditorPromotionSettings value) { inst.WriteOffset(0x2A0, value); }
	inline bool SetBlueprintEditorPromotionTest(t_structHelper inst, FBlueprintEditorPromotionSettings value) { inst.WriteOffset(0x2B0, value); }
	inline bool SetTestLevelFolders(t_structHelper inst, TArray<struct FString> value) { inst.WriteOffset(0x2E0, value); }
	inline bool SetExternalTools(t_structHelper inst, TArray<struct FExternalToolDefinition> value) { inst.WriteOffset(0x2F0, value); }
	inline bool SetImportExportTestDefinitions(t_structHelper inst, TArray<struct FEditorImportExportTestDefinition> value) { inst.WriteOffset(0x300, value); }
	inline bool SetLaunchOnSettings(t_structHelper inst, TArray<struct FLaunchOnTestSettings> value) { inst.WriteOffset(0x310, value); }
	inline bool SetDefaultScreenshotResolution(t_structHelper inst, FIntPoint value) { inst.WriteOffset(0x320, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUAutomationTestSettings = sizeof(UAutomationTestSettings); // 808
    static_assert(sizeof(UAutomationTestSettings) == 0x328, "Size of UAutomationTestSettings is not correct.");
	auto constexpr UAutomationTestSettings_EngineTestModules_Offset = offsetof(UAutomationTestSettings, EngineTestModules);
	static_assert(UAutomationTestSettings_EngineTestModules_Offset == 0x30, "UAutomationTestSettings::EngineTestModules offset is not 30");
	auto constexpr UAutomationTestSettings_EditorTestModules_Offset = offsetof(UAutomationTestSettings, EditorTestModules);
	static_assert(UAutomationTestSettings_EditorTestModules_Offset == 0x40, "UAutomationTestSettings::EditorTestModules offset is not 40");
	auto constexpr UAutomationTestSettings_AutomationTestmap_Offset = offsetof(UAutomationTestSettings, AutomationTestmap);
	static_assert(UAutomationTestSettings_AutomationTestmap_Offset == 0x50, "UAutomationTestSettings::AutomationTestmap offset is not 50");
	auto constexpr UAutomationTestSettings_EditorPerformanceTestMaps_Offset = offsetof(UAutomationTestSettings, EditorPerformanceTestMaps);
	static_assert(UAutomationTestSettings_EditorPerformanceTestMaps_Offset == 0x60, "UAutomationTestSettings::EditorPerformanceTestMaps offset is not 60");
	auto constexpr UAutomationTestSettings_AssetsToOpen_Offset = offsetof(UAutomationTestSettings, AssetsToOpen);
	static_assert(UAutomationTestSettings_AssetsToOpen_Offset == 0x70, "UAutomationTestSettings::AssetsToOpen offset is not 70");
	auto constexpr UAutomationTestSettings_BuildPromotionTest_Offset = offsetof(UAutomationTestSettings, BuildPromotionTest);
	static_assert(UAutomationTestSettings_BuildPromotionTest_Offset == 0x80, "UAutomationTestSettings::BuildPromotionTest offset is not 80");
	auto constexpr UAutomationTestSettings_MaterialEditorPromotionTest_Offset = offsetof(UAutomationTestSettings, MaterialEditorPromotionTest);
	static_assert(UAutomationTestSettings_MaterialEditorPromotionTest_Offset == 0x270, "UAutomationTestSettings::MaterialEditorPromotionTest offset is not 270");
	auto constexpr UAutomationTestSettings_ParticleEditorPromotionTest_Offset = offsetof(UAutomationTestSettings, ParticleEditorPromotionTest);
	static_assert(UAutomationTestSettings_ParticleEditorPromotionTest_Offset == 0x2a0, "UAutomationTestSettings::ParticleEditorPromotionTest offset is not 2a0");
	auto constexpr UAutomationTestSettings_BlueprintEditorPromotionTest_Offset = offsetof(UAutomationTestSettings, BlueprintEditorPromotionTest);
	static_assert(UAutomationTestSettings_BlueprintEditorPromotionTest_Offset == 0x2b0, "UAutomationTestSettings::BlueprintEditorPromotionTest offset is not 2b0");
	auto constexpr UAutomationTestSettings_TestLevelFolders_Offset = offsetof(UAutomationTestSettings, TestLevelFolders);
	static_assert(UAutomationTestSettings_TestLevelFolders_Offset == 0x2e0, "UAutomationTestSettings::TestLevelFolders offset is not 2e0");
	auto constexpr UAutomationTestSettings_ExternalTools_Offset = offsetof(UAutomationTestSettings, ExternalTools);
	static_assert(UAutomationTestSettings_ExternalTools_Offset == 0x2f0, "UAutomationTestSettings::ExternalTools offset is not 2f0");
	auto constexpr UAutomationTestSettings_ImportExportTestDefinitions_Offset = offsetof(UAutomationTestSettings, ImportExportTestDefinitions);
	static_assert(UAutomationTestSettings_ImportExportTestDefinitions_Offset == 0x300, "UAutomationTestSettings::ImportExportTestDefinitions offset is not 300");
	auto constexpr UAutomationTestSettings_LaunchOnSettings_Offset = offsetof(UAutomationTestSettings, LaunchOnSettings);
	static_assert(UAutomationTestSettings_LaunchOnSettings_Offset == 0x310, "UAutomationTestSettings::LaunchOnSettings offset is not 310");
	auto constexpr UAutomationTestSettings_DefaultScreenshotResolution_Offset = offsetof(UAutomationTestSettings, DefaultScreenshotResolution);
	static_assert(UAutomationTestSettings_DefaultScreenshotResolution_Offset == 0x320, "UAutomationTestSettings::DefaultScreenshotResolution offset is not 320");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
