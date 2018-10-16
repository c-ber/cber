#pragma once
#include "FFilePath.hpp"
#include "FDirectoryPath.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FExternalToolDefinition // Size: 0x60
{
public:
    FString ToolName; /* Ofs: 0x0 Size: 0x10 StrProperty Engine.ExternalToolDefinition.ToolName */
    FFilePath ExecutablePath; /* Ofs: 0x10 Size: 0x10 StructProperty Engine.ExternalToolDefinition.ExecutablePath */
    FString CommandLineOptions; /* Ofs: 0x20 Size: 0x10 StrProperty Engine.ExternalToolDefinition.CommandLineOptions */
    FDirectoryPath WorkingDirectory; /* Ofs: 0x30 Size: 0x10 StructProperty Engine.ExternalToolDefinition.WorkingDirectory */
    FString ScriptExtension; /* Ofs: 0x40 Size: 0x10 StrProperty Engine.ExternalToolDefinition.ScriptExtension */
    FDirectoryPath ScriptDirectory; /* Ofs: 0x50 Size: 0x10 StructProperty Engine.ExternalToolDefinition.ScriptDirectory */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFExternalToolDefinition = sizeof(FExternalToolDefinition); // 96
    static_assert(sizeof(FExternalToolDefinition) == 0x60, "Size of FExternalToolDefinition is not correct.");
	auto constexpr FExternalToolDefinition_ToolName_Offset = offsetof(FExternalToolDefinition, ToolName);
	static_assert(FExternalToolDefinition_ToolName_Offset == 0x0, "FExternalToolDefinition::ToolName offset is not 0");
	auto constexpr FExternalToolDefinition_ExecutablePath_Offset = offsetof(FExternalToolDefinition, ExecutablePath);
	static_assert(FExternalToolDefinition_ExecutablePath_Offset == 0x10, "FExternalToolDefinition::ExecutablePath offset is not 10");
	auto constexpr FExternalToolDefinition_CommandLineOptions_Offset = offsetof(FExternalToolDefinition, CommandLineOptions);
	static_assert(FExternalToolDefinition_CommandLineOptions_Offset == 0x20, "FExternalToolDefinition::CommandLineOptions offset is not 20");
	auto constexpr FExternalToolDefinition_WorkingDirectory_Offset = offsetof(FExternalToolDefinition, WorkingDirectory);
	static_assert(FExternalToolDefinition_WorkingDirectory_Offset == 0x30, "FExternalToolDefinition::WorkingDirectory offset is not 30");
	auto constexpr FExternalToolDefinition_ScriptExtension_Offset = offsetof(FExternalToolDefinition, ScriptExtension);
	static_assert(FExternalToolDefinition_ScriptExtension_Offset == 0x40, "FExternalToolDefinition::ScriptExtension offset is not 40");
	auto constexpr FExternalToolDefinition_ScriptDirectory_Offset = offsetof(FExternalToolDefinition, ScriptDirectory);
	static_assert(FExternalToolDefinition_ScriptDirectory_Offset == 0x50, "FExternalToolDefinition::ScriptDirectory offset is not 50");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
