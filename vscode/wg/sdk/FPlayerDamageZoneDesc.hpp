#pragma once
#include "EWeaponClass.hpp"
#include "EEquipSlotID.hpp"
#include "EDamageReason.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FPlayerDamageZoneDesc // Size: 0xB0
{
public:
    float GlobalMultiplier; /* Ofs: 0x0 Size: 0x4 FloatProperty TslGame.PlayerDamageZoneDesc.GlobalMultiplier */
    uint8_t UnknownData4[0x4];
    TMap<struct FName, float> BonesMultipliers; /* Ofs: 0x8 Size: 0x50 MapProperty TslGame.PlayerDamageZoneDesc.BonesMultipliers */
    TMap<EWeaponClass, float> WeaponClassMultipliers; /* Ofs: 0x58 Size: 0x50 MapProperty TslGame.PlayerDamageZoneDesc.WeaponClassMultipliers */
    float PunchMultiplier; /* Ofs: 0xA8 Size: 0x4 FloatProperty TslGame.PlayerDamageZoneDesc.PunchMultiplier */
    TEnumAsByte<enum EEquipSlotID> ArmorSlot; /* Ofs: 0xAC Size: 0x1 EnumProperty TslGame.PlayerDamageZoneDesc.ArmorSlot */
    TEnumAsByte<enum EDamageReason> DamageReason; /* Ofs: 0xAD Size: 0x1 EnumProperty TslGame.PlayerDamageZoneDesc.DamageReason */
    uint8_t UnknownDataAE[0x2];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFPlayerDamageZoneDesc = sizeof(FPlayerDamageZoneDesc); // 176
    static_assert(sizeof(FPlayerDamageZoneDesc) == 0xB0, "Size of FPlayerDamageZoneDesc is not correct.");
	auto constexpr FPlayerDamageZoneDesc_GlobalMultiplier_Offset = offsetof(FPlayerDamageZoneDesc, GlobalMultiplier);
	static_assert(FPlayerDamageZoneDesc_GlobalMultiplier_Offset == 0x0, "FPlayerDamageZoneDesc::GlobalMultiplier offset is not 0");
	auto constexpr FPlayerDamageZoneDesc_BonesMultipliers_Offset = offsetof(FPlayerDamageZoneDesc, BonesMultipliers);
	static_assert(FPlayerDamageZoneDesc_BonesMultipliers_Offset == 0x8, "FPlayerDamageZoneDesc::BonesMultipliers offset is not 8");
	auto constexpr FPlayerDamageZoneDesc_WeaponClassMultipliers_Offset = offsetof(FPlayerDamageZoneDesc, WeaponClassMultipliers);
	static_assert(FPlayerDamageZoneDesc_WeaponClassMultipliers_Offset == 0x58, "FPlayerDamageZoneDesc::WeaponClassMultipliers offset is not 58");
	auto constexpr FPlayerDamageZoneDesc_PunchMultiplier_Offset = offsetof(FPlayerDamageZoneDesc, PunchMultiplier);
	static_assert(FPlayerDamageZoneDesc_PunchMultiplier_Offset == 0xa8, "FPlayerDamageZoneDesc::PunchMultiplier offset is not a8");
	auto constexpr FPlayerDamageZoneDesc_ArmorSlot_Offset = offsetof(FPlayerDamageZoneDesc, ArmorSlot);
	static_assert(FPlayerDamageZoneDesc_ArmorSlot_Offset == 0xac, "FPlayerDamageZoneDesc::ArmorSlot offset is not ac");
	auto constexpr FPlayerDamageZoneDesc_DamageReason_Offset = offsetof(FPlayerDamageZoneDesc, DamageReason);
	static_assert(FPlayerDamageZoneDesc_DamageReason_Offset == 0xad, "FPlayerDamageZoneDesc::DamageReason offset is not ad");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
