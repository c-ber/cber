#pragma once
#include "FLogBase.hpp"
#include "FWuLogCharacter.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FWuLogBodyPenetrationDamageInfo // Size: 0xC0
 : public FLogBase // Size: 0x58
{
public:
    int32_t AttackId; /* Ofs: 0x58 Size: 0x4 IntProperty TslGame.WuLogBodyPenetrationDamageInfo.AttackId */
    uint8_t UnknownData5C[0x4];
    FWuLogCharacter Attacker; /* Ofs: 0x60 Size: 0x48 StructProperty TslGame.WuLogBodyPenetrationDamageInfo.Attacker */
    float DamageDiff; /* Ofs: 0xA8 Size: 0x4 FloatProperty TslGame.WuLogBodyPenetrationDamageInfo.DamageDiff */
    uint8_t UnknownDataAC[0x4];
    FString DamageZone; /* Ofs: 0xB0 Size: 0x10 StrProperty TslGame.WuLogBodyPenetrationDamageInfo.DamageZone */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFWuLogBodyPenetrationDamageInfo = sizeof(FWuLogBodyPenetrationDamageInfo); // 192
    static_assert(sizeof(FWuLogBodyPenetrationDamageInfo) == 0xC0, "Size of FWuLogBodyPenetrationDamageInfo is not correct.");
	auto constexpr FWuLogBodyPenetrationDamageInfo_AttackId_Offset = offsetof(FWuLogBodyPenetrationDamageInfo, AttackId);
	static_assert(FWuLogBodyPenetrationDamageInfo_AttackId_Offset == 0x58, "FWuLogBodyPenetrationDamageInfo::AttackId offset is not 58");
	auto constexpr FWuLogBodyPenetrationDamageInfo_Attacker_Offset = offsetof(FWuLogBodyPenetrationDamageInfo, Attacker);
	static_assert(FWuLogBodyPenetrationDamageInfo_Attacker_Offset == 0x60, "FWuLogBodyPenetrationDamageInfo::Attacker offset is not 60");
	auto constexpr FWuLogBodyPenetrationDamageInfo_DamageDiff_Offset = offsetof(FWuLogBodyPenetrationDamageInfo, DamageDiff);
	static_assert(FWuLogBodyPenetrationDamageInfo_DamageDiff_Offset == 0xa8, "FWuLogBodyPenetrationDamageInfo::DamageDiff offset is not a8");
	auto constexpr FWuLogBodyPenetrationDamageInfo_DamageZone_Offset = offsetof(FWuLogBodyPenetrationDamageInfo, DamageZone);
	static_assert(FWuLogBodyPenetrationDamageInfo_DamageZone_Offset == 0xb0, "FWuLogBodyPenetrationDamageInfo::DamageZone offset is not b0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
