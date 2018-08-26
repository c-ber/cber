#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FLobbyWeaponProcessor // Size: 0x18
{
public:
    int32_t CurrentWeaponIndex; /* Ofs: 0x0 Size: 0x4 IntProperty TslGame.LobbyWeaponProcessor.CurrentWeaponIndex */
    uint8_t UnknownData4[0x4];
    TArray<struct FLobbyWeapon> EquipedWeapons; /* Ofs: 0x8 Size: 0x10 ArrayProperty TslGame.LobbyWeaponProcessor.EquipedWeapons */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFLobbyWeaponProcessor = sizeof(FLobbyWeaponProcessor); // 24
    static_assert(sizeof(FLobbyWeaponProcessor) == 0x18, "Size of FLobbyWeaponProcessor is not correct.");
	auto constexpr FLobbyWeaponProcessor_CurrentWeaponIndex_Offset = offsetof(FLobbyWeaponProcessor, CurrentWeaponIndex);
	static_assert(FLobbyWeaponProcessor_CurrentWeaponIndex_Offset == 0x0, "FLobbyWeaponProcessor::CurrentWeaponIndex offset is not 0");
	auto constexpr FLobbyWeaponProcessor_EquipedWeapons_Offset = offsetof(FLobbyWeaponProcessor, EquipedWeapons);
	static_assert(FLobbyWeaponProcessor_EquipedWeapons_Offset == 0x8, "FLobbyWeaponProcessor::EquipedWeapons offset is not 8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
