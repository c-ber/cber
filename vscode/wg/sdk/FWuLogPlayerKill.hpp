#pragma once
#include "FLogBase.hpp"
#include "FWuLogCharacter.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FWuLogPlayerKill // Size: 0x118
 : public FLogBase // Size: 0x58
{
public:
    int32_t AttackId; /* Ofs: 0x58 Size: 0x4 IntProperty TslGame.WuLogPlayerKill.AttackId */
    uint8_t UnknownData5C[0x4];
    FWuLogCharacter Killer; /* Ofs: 0x60 Size: 0x48 StructProperty TslGame.WuLogPlayerKill.Killer */
    FWuLogCharacter Victim; /* Ofs: 0xA8 Size: 0x48 StructProperty TslGame.WuLogPlayerKill.Victim */
    FString DamageTypeCategory; /* Ofs: 0xF0 Size: 0x10 StrProperty TslGame.WuLogPlayerKill.DamageTypeCategory */
    FString DamageCauserName; /* Ofs: 0x100 Size: 0x10 StrProperty TslGame.WuLogPlayerKill.DamageCauserName */
    float Distance; /* Ofs: 0x110 Size: 0x4 FloatProperty TslGame.WuLogPlayerKill.Distance */
    uint8_t UnknownData114[0x4];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFWuLogPlayerKill = sizeof(FWuLogPlayerKill); // 280
    static_assert(sizeof(FWuLogPlayerKill) == 0x118, "Size of FWuLogPlayerKill is not correct.");
	auto constexpr FWuLogPlayerKill_AttackId_Offset = offsetof(FWuLogPlayerKill, AttackId);
	static_assert(FWuLogPlayerKill_AttackId_Offset == 0x58, "FWuLogPlayerKill::AttackId offset is not 58");
	auto constexpr FWuLogPlayerKill_Killer_Offset = offsetof(FWuLogPlayerKill, Killer);
	static_assert(FWuLogPlayerKill_Killer_Offset == 0x60, "FWuLogPlayerKill::Killer offset is not 60");
	auto constexpr FWuLogPlayerKill_Victim_Offset = offsetof(FWuLogPlayerKill, Victim);
	static_assert(FWuLogPlayerKill_Victim_Offset == 0xa8, "FWuLogPlayerKill::Victim offset is not a8");
	auto constexpr FWuLogPlayerKill_DamageTypeCategory_Offset = offsetof(FWuLogPlayerKill, DamageTypeCategory);
	static_assert(FWuLogPlayerKill_DamageTypeCategory_Offset == 0xf0, "FWuLogPlayerKill::DamageTypeCategory offset is not f0");
	auto constexpr FWuLogPlayerKill_DamageCauserName_Offset = offsetof(FWuLogPlayerKill, DamageCauserName);
	static_assert(FWuLogPlayerKill_DamageCauserName_Offset == 0x100, "FWuLogPlayerKill::DamageCauserName offset is not 100");
	auto constexpr FWuLogPlayerKill_Distance_Offset = offsetof(FWuLogPlayerKill, Distance);
	static_assert(FWuLogPlayerKill_Distance_Offset == 0x110, "FWuLogPlayerKill::Distance offset is not 110");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
