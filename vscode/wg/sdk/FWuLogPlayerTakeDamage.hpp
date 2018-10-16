#pragma once
#include "FLogBase.hpp"
#include "FWuLogCharacter.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FWuLogPlayerTakeDamage // Size: 0x128
 : public FLogBase // Size: 0x58
{
public:
    int32_t AttackId; /* Ofs: 0x58 Size: 0x4 IntProperty TslGame.WuLogPlayerTakeDamage.AttackId */
    uint8_t UnknownData5C[0x4];
    FWuLogCharacter Attacker; /* Ofs: 0x60 Size: 0x48 StructProperty TslGame.WuLogPlayerTakeDamage.Attacker */
    FWuLogCharacter Victim; /* Ofs: 0xA8 Size: 0x48 StructProperty TslGame.WuLogPlayerTakeDamage.Victim */
    FString DamageTypeCategory; /* Ofs: 0xF0 Size: 0x10 StrProperty TslGame.WuLogPlayerTakeDamage.DamageTypeCategory */
    FString DamageReason; /* Ofs: 0x100 Size: 0x10 StrProperty TslGame.WuLogPlayerTakeDamage.DamageReason */
    float Damage; /* Ofs: 0x110 Size: 0x4 FloatProperty TslGame.WuLogPlayerTakeDamage.Damage */
    uint8_t UnknownData114[0x4];
    FString DamageCauserName; /* Ofs: 0x118 Size: 0x10 StrProperty TslGame.WuLogPlayerTakeDamage.DamageCauserName */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFWuLogPlayerTakeDamage = sizeof(FWuLogPlayerTakeDamage); // 296
    static_assert(sizeof(FWuLogPlayerTakeDamage) == 0x128, "Size of FWuLogPlayerTakeDamage is not correct.");
	auto constexpr FWuLogPlayerTakeDamage_AttackId_Offset = offsetof(FWuLogPlayerTakeDamage, AttackId);
	static_assert(FWuLogPlayerTakeDamage_AttackId_Offset == 0x58, "FWuLogPlayerTakeDamage::AttackId offset is not 58");
	auto constexpr FWuLogPlayerTakeDamage_Attacker_Offset = offsetof(FWuLogPlayerTakeDamage, Attacker);
	static_assert(FWuLogPlayerTakeDamage_Attacker_Offset == 0x60, "FWuLogPlayerTakeDamage::Attacker offset is not 60");
	auto constexpr FWuLogPlayerTakeDamage_Victim_Offset = offsetof(FWuLogPlayerTakeDamage, Victim);
	static_assert(FWuLogPlayerTakeDamage_Victim_Offset == 0xa8, "FWuLogPlayerTakeDamage::Victim offset is not a8");
	auto constexpr FWuLogPlayerTakeDamage_DamageTypeCategory_Offset = offsetof(FWuLogPlayerTakeDamage, DamageTypeCategory);
	static_assert(FWuLogPlayerTakeDamage_DamageTypeCategory_Offset == 0xf0, "FWuLogPlayerTakeDamage::DamageTypeCategory offset is not f0");
	auto constexpr FWuLogPlayerTakeDamage_DamageReason_Offset = offsetof(FWuLogPlayerTakeDamage, DamageReason);
	static_assert(FWuLogPlayerTakeDamage_DamageReason_Offset == 0x100, "FWuLogPlayerTakeDamage::DamageReason offset is not 100");
	auto constexpr FWuLogPlayerTakeDamage_Damage_Offset = offsetof(FWuLogPlayerTakeDamage, Damage);
	static_assert(FWuLogPlayerTakeDamage_Damage_Offset == 0x110, "FWuLogPlayerTakeDamage::Damage offset is not 110");
	auto constexpr FWuLogPlayerTakeDamage_DamageCauserName_Offset = offsetof(FWuLogPlayerTakeDamage, DamageCauserName);
	static_assert(FWuLogPlayerTakeDamage_DamageCauserName_Offset == 0x118, "FWuLogPlayerTakeDamage::DamageCauserName offset is not 118");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
