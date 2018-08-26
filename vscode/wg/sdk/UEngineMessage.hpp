#pragma once
#include "ULocalMessage.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UEngineMessage // Size: 0xB0
	: public ULocalMessage // Size: 0x30
{
private:
	typedef UEngineMessage t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(855); // id32("Class Engine.EngineMessage")
		return ptr;
	}
	FString FailedPlaceMessage; /* Ofs: 0x30 Size: 0x10 - StrProperty Engine.EngineMessage.FailedPlaceMessage */
	FString MaxedOutMessage; /* Ofs: 0x40 Size: 0x10 - StrProperty Engine.EngineMessage.MaxedOutMessage */
	FString EnteredMessage; /* Ofs: 0x50 Size: 0x10 - StrProperty Engine.EngineMessage.EnteredMessage */
	FString LeftMessage; /* Ofs: 0x60 Size: 0x10 - StrProperty Engine.EngineMessage.LeftMessage */
	FString GlobalNameChange; /* Ofs: 0x70 Size: 0x10 - StrProperty Engine.EngineMessage.GlobalNameChange */
	FString SpecEnteredMessage; /* Ofs: 0x80 Size: 0x10 - StrProperty Engine.EngineMessage.SpecEnteredMessage */
	FString NewPlayerMessage; /* Ofs: 0x90 Size: 0x10 - StrProperty Engine.EngineMessage.NewPlayerMessage */
	FString NewSpecMessage; /* Ofs: 0xA0 Size: 0x10 - StrProperty Engine.EngineMessage.NewSpecMessage */


	inline bool SetFailedPlaceMessage(t_structHelper inst, FString value) { inst.WriteOffset(0x30, value); }
	inline bool SetMaxedOutMessage(t_structHelper inst, FString value) { inst.WriteOffset(0x40, value); }
	inline bool SetEnteredMessage(t_structHelper inst, FString value) { inst.WriteOffset(0x50, value); }
	inline bool SetLeftMessage(t_structHelper inst, FString value) { inst.WriteOffset(0x60, value); }
	inline bool SetGlobalNameChange(t_structHelper inst, FString value) { inst.WriteOffset(0x70, value); }
	inline bool SetSpecEnteredMessage(t_structHelper inst, FString value) { inst.WriteOffset(0x80, value); }
	inline bool SetNewPlayerMessage(t_structHelper inst, FString value) { inst.WriteOffset(0x90, value); }
	inline bool SetNewSpecMessage(t_structHelper inst, FString value) { inst.WriteOffset(0xA0, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUEngineMessage = sizeof(UEngineMessage); // 176
    static_assert(sizeof(UEngineMessage) == 0xB0, "Size of UEngineMessage is not correct.");
	auto constexpr UEngineMessage_FailedPlaceMessage_Offset = offsetof(UEngineMessage, FailedPlaceMessage);
	static_assert(UEngineMessage_FailedPlaceMessage_Offset == 0x30, "UEngineMessage::FailedPlaceMessage offset is not 30");
	auto constexpr UEngineMessage_MaxedOutMessage_Offset = offsetof(UEngineMessage, MaxedOutMessage);
	static_assert(UEngineMessage_MaxedOutMessage_Offset == 0x40, "UEngineMessage::MaxedOutMessage offset is not 40");
	auto constexpr UEngineMessage_EnteredMessage_Offset = offsetof(UEngineMessage, EnteredMessage);
	static_assert(UEngineMessage_EnteredMessage_Offset == 0x50, "UEngineMessage::EnteredMessage offset is not 50");
	auto constexpr UEngineMessage_LeftMessage_Offset = offsetof(UEngineMessage, LeftMessage);
	static_assert(UEngineMessage_LeftMessage_Offset == 0x60, "UEngineMessage::LeftMessage offset is not 60");
	auto constexpr UEngineMessage_GlobalNameChange_Offset = offsetof(UEngineMessage, GlobalNameChange);
	static_assert(UEngineMessage_GlobalNameChange_Offset == 0x70, "UEngineMessage::GlobalNameChange offset is not 70");
	auto constexpr UEngineMessage_SpecEnteredMessage_Offset = offsetof(UEngineMessage, SpecEnteredMessage);
	static_assert(UEngineMessage_SpecEnteredMessage_Offset == 0x80, "UEngineMessage::SpecEnteredMessage offset is not 80");
	auto constexpr UEngineMessage_NewPlayerMessage_Offset = offsetof(UEngineMessage, NewPlayerMessage);
	static_assert(UEngineMessage_NewPlayerMessage_Offset == 0x90, "UEngineMessage::NewPlayerMessage offset is not 90");
	auto constexpr UEngineMessage_NewSpecMessage_Offset = offsetof(UEngineMessage, NewSpecMessage);
	static_assert(UEngineMessage_NewSpecMessage_Offset == 0xa0, "UEngineMessage::NewSpecMessage offset is not a0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
