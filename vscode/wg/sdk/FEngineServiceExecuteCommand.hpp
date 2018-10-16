#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FEngineServiceExecuteCommand // Size: 0x20
{
public:
    FString Command; /* Ofs: 0x0 Size: 0x10 StrProperty EngineMessages.EngineServiceExecuteCommand.Command */
    FString UserName; /* Ofs: 0x10 Size: 0x10 StrProperty EngineMessages.EngineServiceExecuteCommand.UserName */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFEngineServiceExecuteCommand = sizeof(FEngineServiceExecuteCommand); // 32
    static_assert(sizeof(FEngineServiceExecuteCommand) == 0x20, "Size of FEngineServiceExecuteCommand is not correct.");
	auto constexpr FEngineServiceExecuteCommand_Command_Offset = offsetof(FEngineServiceExecuteCommand, Command);
	static_assert(FEngineServiceExecuteCommand_Command_Offset == 0x0, "FEngineServiceExecuteCommand::Command offset is not 0");
	auto constexpr FEngineServiceExecuteCommand_UserName_Offset = offsetof(FEngineServiceExecuteCommand, UserName);
	static_assert(FEngineServiceExecuteCommand_UserName_Offset == 0x10, "FEngineServiceExecuteCommand::UserName offset is not 10");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
