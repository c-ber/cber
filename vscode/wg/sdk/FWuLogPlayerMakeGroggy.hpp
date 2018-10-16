#pragma once
#include "FLogBase.hpp"
#include "FWuLogCharacter.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FWuLogPlayerMakeGroggy // Size: 0x120
 : public FLogBase // Size: 0x58
{
public:
    int32_t AttackId; /* Ofs: 0x58 Size: 0x4 IntProperty TslGame.WuLogPlayerMakeGroggy.AttackId */
    uint8_t UnknownData5C[0x4];
    FWuLogCharacter Attacker; /* Ofs: 0x60 Size: 0x48 StructProperty TslGame.WuLogPlayerMakeGroggy.Attacker */
    FWuLogCharacter Victim; /* Ofs: 0xA8 Size: 0x48 StructProperty TslGame.WuLogPlayerMakeGroggy.Victim */
    FString DamageTypeCategory; /* Ofs: 0xF0 Size: 0x10 StrProperty TslGame.WuLogPlayerMakeGroggy.DamageTypeCategory */
    FString DamageCauserName; /* Ofs: 0x100 Size: 0x10 StrProperty TslGame.WuLogPlayerMakeGroggy.DamageCauserName */
    float Distance; /* Ofs: 0x110 Size: 0x4 FloatProperty TslGame.WuLogPlayerMakeGroggy.Distance */
    bool IsAttackerInVehicle; /* Ofs: 0x114 Size: 0x1 BitMask: 01 BoolProperty TslGame.WuLogPlayerMakeGroggy.IsAttackerInVehicle */
    uint8_t UnknownData115[0x3];
    int32_t DBNOId; /* Ofs: 0x118 Size: 0x4 IntProperty TslGame.WuLogPlayerMakeGroggy.DBNOId */
    uint8_t UnknownData11C[0x4];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFWuLogPlayerMakeGroggy = sizeof(FWuLogPlayerMakeGroggy); // 288
    static_assert(sizeof(FWuLogPlayerMakeGroggy) == 0x120, "Size of FWuLogPlayerMakeGroggy is not correct.");
	auto constexpr FWuLogPlayerMakeGroggy_AttackId_Offset = offsetof(FWuLogPlayerMakeGroggy, AttackId);
	static_assert(FWuLogPlayerMakeGroggy_AttackId_Offset == 0x58, "FWuLogPlayerMakeGroggy::AttackId offset is not 58");
	auto constexpr FWuLogPlayerMakeGroggy_Attacker_Offset = offsetof(FWuLogPlayerMakeGroggy, Attacker);
	static_assert(FWuLogPlayerMakeGroggy_Attacker_Offset == 0x60, "FWuLogPlayerMakeGroggy::Attacker offset is not 60");
	auto constexpr FWuLogPlayerMakeGroggy_Victim_Offset = offsetof(FWuLogPlayerMakeGroggy, Victim);
	static_assert(FWuLogPlayerMakeGroggy_Victim_Offset == 0xa8, "FWuLogPlayerMakeGroggy::Victim offset is not a8");
	auto constexpr FWuLogPlayerMakeGroggy_DamageTypeCategory_Offset = offsetof(FWuLogPlayerMakeGroggy, DamageTypeCategory);
	static_assert(FWuLogPlayerMakeGroggy_DamageTypeCategory_Offset == 0xf0, "FWuLogPlayerMakeGroggy::DamageTypeCategory offset is not f0");
	auto constexpr FWuLogPlayerMakeGroggy_DamageCauserName_Offset = offsetof(FWuLogPlayerMakeGroggy, DamageCauserName);
	static_assert(FWuLogPlayerMakeGroggy_DamageCauserName_Offset == 0x100, "FWuLogPlayerMakeGroggy::DamageCauserName offset is not 100");
	auto constexpr FWuLogPlayerMakeGroggy_Distance_Offset = offsetof(FWuLogPlayerMakeGroggy, Distance);
	static_assert(FWuLogPlayerMakeGroggy_Distance_Offset == 0x110, "FWuLogPlayerMakeGroggy::Distance offset is not 110");
	auto constexpr FWuLogPlayerMakeGroggy_DBNOId_Offset = offsetof(FWuLogPlayerMakeGroggy, DBNOId);
	static_assert(FWuLogPlayerMakeGroggy_DBNOId_Offset == 0x118, "FWuLogPlayerMakeGroggy::DBNOId offset is not 118");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
