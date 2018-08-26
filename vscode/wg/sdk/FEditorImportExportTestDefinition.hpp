#pragma once
#include "FFilePath.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FEditorImportExportTestDefinition // Size: 0x38
{
public:
    FFilePath ImportFilePath; /* Ofs: 0x0 Size: 0x10 StructProperty Engine.EditorImportExportTestDefinition.ImportFilePath */
    FString ExportFileExtension; /* Ofs: 0x10 Size: 0x10 StrProperty Engine.EditorImportExportTestDefinition.ExportFileExtension */
    bool bSkipExport; /* Ofs: 0x20 Size: 0x1 BitMask: 01 BoolProperty Engine.EditorImportExportTestDefinition.bSkipExport */
    uint8_t UnknownData21[0x7];
    TArray<struct FImportFactorySettingValues> FactorySettings; /* Ofs: 0x28 Size: 0x10 ArrayProperty Engine.EditorImportExportTestDefinition.FactorySettings */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFEditorImportExportTestDefinition = sizeof(FEditorImportExportTestDefinition); // 56
    static_assert(sizeof(FEditorImportExportTestDefinition) == 0x38, "Size of FEditorImportExportTestDefinition is not correct.");
	auto constexpr FEditorImportExportTestDefinition_ImportFilePath_Offset = offsetof(FEditorImportExportTestDefinition, ImportFilePath);
	static_assert(FEditorImportExportTestDefinition_ImportFilePath_Offset == 0x0, "FEditorImportExportTestDefinition::ImportFilePath offset is not 0");
	auto constexpr FEditorImportExportTestDefinition_ExportFileExtension_Offset = offsetof(FEditorImportExportTestDefinition, ExportFileExtension);
	static_assert(FEditorImportExportTestDefinition_ExportFileExtension_Offset == 0x10, "FEditorImportExportTestDefinition::ExportFileExtension offset is not 10");
	auto constexpr FEditorImportExportTestDefinition_FactorySettings_Offset = offsetof(FEditorImportExportTestDefinition, FactorySettings);
	static_assert(FEditorImportExportTestDefinition_FactorySettings_Offset == 0x28, "FEditorImportExportTestDefinition::FactorySettings offset is not 28");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
