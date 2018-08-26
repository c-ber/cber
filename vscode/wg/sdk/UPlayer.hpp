#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UPlayer // Size: 0x60
	: public UObject // Size: 0x30
{
private:
	typedef UPlayer t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(717); // id32("Class Engine.Player")
		return ptr;
	}
	uint8_t UnknownData30[0x10];
	EncryptedExternalPtr<struct UPlayerController> PlayerController; /* Ofs: 0x40 Size: 0x10 - CUSTOM FIELD */
	int32_t CurrentNetSpeed; /* Ofs: 0x50 Size: 0x4 - IntProperty Engine.Player.CurrentNetSpeed */
	int32_t ConfiguredInternetSpeed; /* Ofs: 0x54 Size: 0x4 - IntProperty Engine.Player.ConfiguredInternetSpeed */
	int32_t ConfiguredLanSpeed; /* Ofs: 0x58 Size: 0x4 - IntProperty Engine.Player.ConfiguredLanSpeed */
	uint8_t UnknownData5C[0x4];


	inline bool SetCurrentNetSpeed(t_structHelper inst, int32_t value) { inst.WriteOffset(0x50, value); }
	inline bool SetConfiguredInternetSpeed(t_structHelper inst, int32_t value) { inst.WriteOffset(0x54, value); }
	inline bool SetConfiguredLanSpeed(t_structHelper inst, int32_t value) { inst.WriteOffset(0x58, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUPlayer = sizeof(UPlayer); // 96
    static_assert(sizeof(UPlayer) == 0x60, "Size of UPlayer is not correct.");
	auto constexpr UPlayer_PlayerController_Offset = offsetof(UPlayer, PlayerController);
	static_assert(UPlayer_PlayerController_Offset == 0x40, "UPlayer::PlayerController offset is not 40");
	auto constexpr UPlayer_CurrentNetSpeed_Offset = offsetof(UPlayer, CurrentNetSpeed);
	static_assert(UPlayer_CurrentNetSpeed_Offset == 0x50, "UPlayer::CurrentNetSpeed offset is not 50");
	auto constexpr UPlayer_ConfiguredInternetSpeed_Offset = offsetof(UPlayer, ConfiguredInternetSpeed);
	static_assert(UPlayer_ConfiguredInternetSpeed_Offset == 0x54, "UPlayer::ConfiguredInternetSpeed offset is not 54");
	auto constexpr UPlayer_ConfiguredLanSpeed_Offset = offsetof(UPlayer, ConfiguredLanSpeed);
	static_assert(UPlayer_ConfiguredLanSpeed_Offset == 0x58, "UPlayer::ConfiguredLanSpeed offset is not 58");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
