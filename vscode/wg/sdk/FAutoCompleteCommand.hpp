#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FAutoCompleteCommand // Size: 0x28
{
public:
    FString Command; /* Ofs: 0x0 Size: 0x10 StrProperty EngineSettings.AutoCompleteCommand.Command */
    FString Desc; /* Ofs: 0x10 Size: 0x10 StrProperty EngineSettings.AutoCompleteCommand.Desc */
    uint8_t UnknownData20[0x8];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFAutoCompleteCommand = sizeof(FAutoCompleteCommand); // 40
    static_assert(sizeof(FAutoCompleteCommand) == 0x28, "Size of FAutoCompleteCommand is not correct.");
	auto constexpr FAutoCompleteCommand_Command_Offset = offsetof(FAutoCompleteCommand, Command);
	static_assert(FAutoCompleteCommand_Command_Offset == 0x0, "FAutoCompleteCommand::Command offset is not 0");
	auto constexpr FAutoCompleteCommand_Desc_Offset = offsetof(FAutoCompleteCommand, Desc);
	static_assert(FAutoCompleteCommand_Desc_Offset == 0x10, "FAutoCompleteCommand::Desc offset is not 10");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
