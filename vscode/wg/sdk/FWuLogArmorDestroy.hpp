#pragma once
#include "FLogBase.hpp"
#include "FWuLogCharacter.hpp"
#include "FWuLogItem.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FWuLogArmorDestroy // Size: 0x170
 : public FLogBase // Size: 0x58
{
public:
    int32_t AttackId; /* Ofs: 0x58 Size: 0x4 IntProperty TslGame.WuLogArmorDestroy.AttackId */
    uint8_t UnknownData5C[0x4];
    FWuLogCharacter Attacker; /* Ofs: 0x60 Size: 0x48 StructProperty TslGame.WuLogArmorDestroy.Attacker */
    FWuLogCharacter Victim; /* Ofs: 0xA8 Size: 0x48 StructProperty TslGame.WuLogArmorDestroy.Victim */
    FString DamageTypeCategory; /* Ofs: 0xF0 Size: 0x10 StrProperty TslGame.WuLogArmorDestroy.DamageTypeCategory */
    FString DamageReason; /* Ofs: 0x100 Size: 0x10 StrProperty TslGame.WuLogArmorDestroy.DamageReason */
    FString DamageCauserName; /* Ofs: 0x110 Size: 0x10 StrProperty TslGame.WuLogArmorDestroy.DamageCauserName */
    FWuLogItem Item; /* Ofs: 0x120 Size: 0x48 StructProperty TslGame.WuLogArmorDestroy.Item */
    float Distance; /* Ofs: 0x168 Size: 0x4 FloatProperty TslGame.WuLogArmorDestroy.Distance */
    uint8_t UnknownData16C[0x4];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFWuLogArmorDestroy = sizeof(FWuLogArmorDestroy); // 368
    static_assert(sizeof(FWuLogArmorDestroy) == 0x170, "Size of FWuLogArmorDestroy is not correct.");
	auto constexpr FWuLogArmorDestroy_AttackId_Offset = offsetof(FWuLogArmorDestroy, AttackId);
	static_assert(FWuLogArmorDestroy_AttackId_Offset == 0x58, "FWuLogArmorDestroy::AttackId offset is not 58");
	auto constexpr FWuLogArmorDestroy_Attacker_Offset = offsetof(FWuLogArmorDestroy, Attacker);
	static_assert(FWuLogArmorDestroy_Attacker_Offset == 0x60, "FWuLogArmorDestroy::Attacker offset is not 60");
	auto constexpr FWuLogArmorDestroy_Victim_Offset = offsetof(FWuLogArmorDestroy, Victim);
	static_assert(FWuLogArmorDestroy_Victim_Offset == 0xa8, "FWuLogArmorDestroy::Victim offset is not a8");
	auto constexpr FWuLogArmorDestroy_DamageTypeCategory_Offset = offsetof(FWuLogArmorDestroy, DamageTypeCategory);
	static_assert(FWuLogArmorDestroy_DamageTypeCategory_Offset == 0xf0, "FWuLogArmorDestroy::DamageTypeCategory offset is not f0");
	auto constexpr FWuLogArmorDestroy_DamageReason_Offset = offsetof(FWuLogArmorDestroy, DamageReason);
	static_assert(FWuLogArmorDestroy_DamageReason_Offset == 0x100, "FWuLogArmorDestroy::DamageReason offset is not 100");
	auto constexpr FWuLogArmorDestroy_DamageCauserName_Offset = offsetof(FWuLogArmorDestroy, DamageCauserName);
	static_assert(FWuLogArmorDestroy_DamageCauserName_Offset == 0x110, "FWuLogArmorDestroy::DamageCauserName offset is not 110");
	auto constexpr FWuLogArmorDestroy_Item_Offset = offsetof(FWuLogArmorDestroy, Item);
	static_assert(FWuLogArmorDestroy_Item_Offset == 0x120, "FWuLogArmorDestroy::Item offset is not 120");
	auto constexpr FWuLogArmorDestroy_Distance_Offset = offsetof(FWuLogArmorDestroy, Distance);
	static_assert(FWuLogArmorDestroy_Distance_Offset == 0x168, "FWuLogArmorDestroy::Distance offset is not 168");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
