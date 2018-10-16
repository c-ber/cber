#pragma once
#include "FLogBase.hpp"
#include "FWuLogCharacter.hpp"
#include "FWuLogItem.hpp"
#include "FWuLogVehicle.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FWuLogPlayerAttack // Size: 0x128
 : public FLogBase // Size: 0x58
{
public:
    int32_t AttackId; /* Ofs: 0x58 Size: 0x4 IntProperty TslGame.WuLogPlayerAttack.AttackId */
    uint8_t UnknownData5C[0x4];
    FWuLogCharacter Attacker; /* Ofs: 0x60 Size: 0x48 StructProperty TslGame.WuLogPlayerAttack.Attacker */
    FString AttackType; /* Ofs: 0xA8 Size: 0x10 StrProperty TslGame.WuLogPlayerAttack.AttackType */
    FWuLogItem Weapon; /* Ofs: 0xB8 Size: 0x48 StructProperty TslGame.WuLogPlayerAttack.Weapon */
    FWuLogVehicle Vehicle; /* Ofs: 0x100 Size: 0x28 StructProperty TslGame.WuLogPlayerAttack.Vehicle */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFWuLogPlayerAttack = sizeof(FWuLogPlayerAttack); // 296
    static_assert(sizeof(FWuLogPlayerAttack) == 0x128, "Size of FWuLogPlayerAttack is not correct.");
	auto constexpr FWuLogPlayerAttack_AttackId_Offset = offsetof(FWuLogPlayerAttack, AttackId);
	static_assert(FWuLogPlayerAttack_AttackId_Offset == 0x58, "FWuLogPlayerAttack::AttackId offset is not 58");
	auto constexpr FWuLogPlayerAttack_Attacker_Offset = offsetof(FWuLogPlayerAttack, Attacker);
	static_assert(FWuLogPlayerAttack_Attacker_Offset == 0x60, "FWuLogPlayerAttack::Attacker offset is not 60");
	auto constexpr FWuLogPlayerAttack_AttackType_Offset = offsetof(FWuLogPlayerAttack, AttackType);
	static_assert(FWuLogPlayerAttack_AttackType_Offset == 0xa8, "FWuLogPlayerAttack::AttackType offset is not a8");
	auto constexpr FWuLogPlayerAttack_Weapon_Offset = offsetof(FWuLogPlayerAttack, Weapon);
	static_assert(FWuLogPlayerAttack_Weapon_Offset == 0xb8, "FWuLogPlayerAttack::Weapon offset is not b8");
	auto constexpr FWuLogPlayerAttack_Vehicle_Offset = offsetof(FWuLogPlayerAttack, Vehicle);
	static_assert(FWuLogPlayerAttack_Vehicle_Offset == 0x100, "FWuLogPlayerAttack::Vehicle offset is not 100");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
