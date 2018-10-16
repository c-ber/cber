#pragma once
#include "UConsoleCommandExecutor.hpp"
#include "FPointerToUberGraphFrame.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UConsoleCommandExecutor_C // Size: 0x431
	: public UConsoleCommandExecutor // Size: 0x410
{
private:
	typedef UConsoleCommandExecutor_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(162255); // id32("BlueprintGeneratedClass ConsoleCommandExecutor.ConsoleCommandExecutor_C")
		return ptr;
	}
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0x410 Size: 0x8 - StructProperty ConsoleCommandExecutor.ConsoleCommandExecutor_C.UberGraphFrame */
	ExternalPtr<struct USceneComponent> DefaultSceneRoot; /* Ofs: 0x418 Size: 0x8 - ObjectProperty ConsoleCommandExecutor.ConsoleCommandExecutor_C.DefaultSceneRoot */
	TArray<struct FString> ConsoleCommands; /* Ofs: 0x420 Size: 0x10 - ArrayProperty ConsoleCommandExecutor.ConsoleCommandExecutor_C.ConsoleCommands */
	uint8_t boolField430;


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0x410, value); }
	inline bool SetDefaultSceneRoot(t_structHelper inst, ExternalPtr<struct USceneComponent> value) { inst.WriteOffset(0x418, value); }
	inline bool SetConsoleCommands(t_structHelper inst, TArray<struct FString> value) { inst.WriteOffset(0x420, value); }
	inline bool ExecuteCommandsInEditor()
	{
		return boolField430& 0x1;
	}
	inline bool SetExecuteCommandsInEditor(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x430, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUConsoleCommandExecutor_C = sizeof(UConsoleCommandExecutor_C); // 1073
    static_assert(sizeof(UConsoleCommandExecutor_C) == 0x431, "Size of UConsoleCommandExecutor_C is not correct.");
	auto constexpr UConsoleCommandExecutor_C_UberGraphFrame_Offset = offsetof(UConsoleCommandExecutor_C, UberGraphFrame);
	static_assert(UConsoleCommandExecutor_C_UberGraphFrame_Offset == 0x410, "UConsoleCommandExecutor_C::UberGraphFrame offset is not 410");
	auto constexpr UConsoleCommandExecutor_C_DefaultSceneRoot_Offset = offsetof(UConsoleCommandExecutor_C, DefaultSceneRoot);
	static_assert(UConsoleCommandExecutor_C_DefaultSceneRoot_Offset == 0x418, "UConsoleCommandExecutor_C::DefaultSceneRoot offset is not 418");
	auto constexpr UConsoleCommandExecutor_C_ConsoleCommands_Offset = offsetof(UConsoleCommandExecutor_C, ConsoleCommands);
	static_assert(UConsoleCommandExecutor_C_ConsoleCommands_Offset == 0x420, "UConsoleCommandExecutor_C::ConsoleCommands offset is not 420");
	auto constexpr UConsoleCommandExecutor_C_boolField430_Offset = offsetof(UConsoleCommandExecutor_C, boolField430);
	static_assert(UConsoleCommandExecutor_C_boolField430_Offset == 0x430, "UConsoleCommandExecutor_C::boolField430 offset is not 430");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
