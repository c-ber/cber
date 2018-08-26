#pragma once
#include "FFilePath.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FEditorImportWorkflowDefinition // Size: 0x20
{
public:
    FFilePath ImportFilePath; /* Ofs: 0x0 Size: 0x10 StructProperty Engine.EditorImportWorkflowDefinition.ImportFilePath */
    TArray<struct FImportFactorySettingValues> FactorySettings; /* Ofs: 0x10 Size: 0x10 ArrayProperty Engine.EditorImportWorkflowDefinition.FactorySettings */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFEditorImportWorkflowDefinition = sizeof(FEditorImportWorkflowDefinition); // 32
    static_assert(sizeof(FEditorImportWorkflowDefinition) == 0x20, "Size of FEditorImportWorkflowDefinition is not correct.");
	auto constexpr FEditorImportWorkflowDefinition_ImportFilePath_Offset = offsetof(FEditorImportWorkflowDefinition, ImportFilePath);
	static_assert(FEditorImportWorkflowDefinition_ImportFilePath_Offset == 0x0, "FEditorImportWorkflowDefinition::ImportFilePath offset is not 0");
	auto constexpr FEditorImportWorkflowDefinition_FactorySettings_Offset = offsetof(FEditorImportWorkflowDefinition, FactorySettings);
	static_assert(FEditorImportWorkflowDefinition_FactorySettings_Offset == 0x10, "FEditorImportWorkflowDefinition::FactorySettings offset is not 10");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
