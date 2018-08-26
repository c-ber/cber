#pragma once
#include "UScriptViewportClient.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UGameViewportClient // Size: 0x660
	: public UScriptViewportClient // Size: 0x38
{
private:
	typedef UGameViewportClient t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(236); // id32("Class Engine.GameViewportClient")
		return ptr;
	}
	uint8_t UnknownData38[0x8];
	TArray<struct FDebugDisplayProperty> DebugProperties; /* Ofs: 0x40 Size: 0x10 - ArrayProperty Engine.GameViewportClient.DebugProperties */
	uint8_t UnknownData50[0x350];
	EncryptedExternalPtr<struct UGameInstance> GameInstance; /* Ofs: 0x3A0 Size: 0x10 - EncryptedObjectProperty Engine.GameViewportClient.GameInstance */
	uint8_t UnknownData3B0[0xF8];
	ExternalPtr<struct UConsole> ViewportConsole; /* Ofs: 0x4A8 Size: 0x8 - ObjectProperty Engine.GameViewportClient.ViewportConsole */
	uint8_t UnknownData4B0[0x1B0];


	inline bool SetDebugProperties(t_structHelper inst, TArray<struct FDebugDisplayProperty> value) { inst.WriteOffset(0x40, value); }
	inline bool SetGameInstance(t_structHelper inst, EncryptedExternalPtr<struct UGameInstance> value) { inst.WriteOffset(0x3A0, value); }
	inline bool SetViewportConsole(t_structHelper inst, ExternalPtr<struct UConsole> value) { inst.WriteOffset(0x4A8, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUGameViewportClient = sizeof(UGameViewportClient); // 1632
    static_assert(sizeof(UGameViewportClient) == 0x660, "Size of UGameViewportClient is not correct.");
	auto constexpr UGameViewportClient_DebugProperties_Offset = offsetof(UGameViewportClient, DebugProperties);
	static_assert(UGameViewportClient_DebugProperties_Offset == 0x40, "UGameViewportClient::DebugProperties offset is not 40");
	auto constexpr UGameViewportClient_GameInstance_Offset = offsetof(UGameViewportClient, GameInstance);
	static_assert(UGameViewportClient_GameInstance_Offset == 0x3a0, "UGameViewportClient::GameInstance offset is not 3a0");
	auto constexpr UGameViewportClient_ViewportConsole_Offset = offsetof(UGameViewportClient, ViewportConsole);
	static_assert(UGameViewportClient_ViewportConsole_Offset == 0x4a8, "UGameViewportClient::ViewportConsole offset is not 4a8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
