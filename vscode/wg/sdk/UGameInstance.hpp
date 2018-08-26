#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UGameInstance // Size: 0x110
	: public UObject // Size: 0x30
{
private:
	typedef UGameInstance t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(293); // id32("Class Engine.GameInstance")
		return ptr;
	}
	uint8_t UnknownData30[0x8];
	ExternalPtr<struct UOnlineSession> OnlineSession; /* Ofs: 0x38 Size: 0x8 - ObjectProperty Engine.GameInstance.OnlineSession */
	uint8_t UnknownData40[0x80];
	TArray<EncryptedExternalPtr<struct ULocalPlayer>> LocalPlayers; /* Ofs: 0xC0 Size: 0x10 - CUSTOM FIELD */
	uint8_t UnknownDataD0[0x40];


	inline bool SetOnlineSession(t_structHelper inst, ExternalPtr<struct UOnlineSession> value) { inst.WriteOffset(0x38, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUGameInstance = sizeof(UGameInstance); // 272
    static_assert(sizeof(UGameInstance) == 0x110, "Size of UGameInstance is not correct.");
	auto constexpr UGameInstance_OnlineSession_Offset = offsetof(UGameInstance, OnlineSession);
	static_assert(UGameInstance_OnlineSession_Offset == 0x38, "UGameInstance::OnlineSession offset is not 38");
	auto constexpr UGameInstance_LocalPlayers_Offset = offsetof(UGameInstance, LocalPlayers);
	static_assert(UGameInstance_LocalPlayers_Offset == 0xc0, "UGameInstance::LocalPlayers offset is not c0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
