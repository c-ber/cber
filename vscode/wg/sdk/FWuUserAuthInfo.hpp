#pragma once
#include "FWuMatchRating.hpp"
#include "FWuCharacterInfo.hpp"
#include "FWuUdpEncryptionKey.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FWuUserAuthInfo // Size: 0xE8
{
public:
    FString PlayerNetId; /* Ofs: 0x0 Size: 0x10 StrProperty TslGame.WuUserAuthInfo.PlayerNetId */
    int32_t TeamId; /* Ofs: 0x10 Size: 0x4 IntProperty TslGame.WuUserAuthInfo.TeamId */
    FWuMatchRating Rating; /* Ofs: 0x14 Size: 0x10 StructProperty TslGame.WuUserAuthInfo.Rating */
    bool IsZombie; /* Ofs: 0x24 Size: 0x1 BitMask: 01 BoolProperty TslGame.WuUserAuthInfo.IsZombie */
    uint8_t UnknownData25[0x3];
    FWuCharacterInfo CharacterInfo; /* Ofs: 0x28 Size: 0x58 StructProperty TslGame.WuUserAuthInfo.CharacterInfo */
    int32_t ObserverAuthorityType; /* Ofs: 0x80 Size: 0x4 IntProperty TslGame.WuUserAuthInfo.ObserverAuthorityType */
    bool BattlEyeDisabled; /* Ofs: 0x84 Size: 0x1 BitMask: 01 BoolProperty TslGame.WuUserAuthInfo.BattlEyeDisabled */
    bool TPAntibotDisabled; /* Ofs: 0x85 Size: 0x1 BitMask: 01 BoolProperty TslGame.WuUserAuthInfo.TPAntibotDisabled */
    uint8_t UnknownData86[0x2];
    FString AccountId; /* Ofs: 0x88 Size: 0x10 StrProperty TslGame.WuUserAuthInfo.AccountId */
    int32_t v1; /* Ofs: 0x98 Size: 0x4 IntProperty TslGame.WuUserAuthInfo.v1 */
    int32_t v2; /* Ofs: 0x9C Size: 0x4 IntProperty TslGame.WuUserAuthInfo.v2 */
    int32_t V3; /* Ofs: 0xA0 Size: 0x4 IntProperty TslGame.WuUserAuthInfo.V3 */
    int32_t V4; /* Ofs: 0xA4 Size: 0x4 IntProperty TslGame.WuUserAuthInfo.V4 */
    FWuUdpEncryptionKey UdpEncryptionKey; /* Ofs: 0xA8 Size: 0x30 StructProperty TslGame.WuUserAuthInfo.UdpEncryptionKey */
    TArray<struct FWuStringStringPair> CustomParameters; /* Ofs: 0xD8 Size: 0x10 ArrayProperty TslGame.WuUserAuthInfo.CustomParameters */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFWuUserAuthInfo = sizeof(FWuUserAuthInfo); // 232
    static_assert(sizeof(FWuUserAuthInfo) == 0xE8, "Size of FWuUserAuthInfo is not correct.");
	auto constexpr FWuUserAuthInfo_PlayerNetId_Offset = offsetof(FWuUserAuthInfo, PlayerNetId);
	static_assert(FWuUserAuthInfo_PlayerNetId_Offset == 0x0, "FWuUserAuthInfo::PlayerNetId offset is not 0");
	auto constexpr FWuUserAuthInfo_TeamId_Offset = offsetof(FWuUserAuthInfo, TeamId);
	static_assert(FWuUserAuthInfo_TeamId_Offset == 0x10, "FWuUserAuthInfo::TeamId offset is not 10");
	auto constexpr FWuUserAuthInfo_Rating_Offset = offsetof(FWuUserAuthInfo, Rating);
	static_assert(FWuUserAuthInfo_Rating_Offset == 0x14, "FWuUserAuthInfo::Rating offset is not 14");
	auto constexpr FWuUserAuthInfo_CharacterInfo_Offset = offsetof(FWuUserAuthInfo, CharacterInfo);
	static_assert(FWuUserAuthInfo_CharacterInfo_Offset == 0x28, "FWuUserAuthInfo::CharacterInfo offset is not 28");
	auto constexpr FWuUserAuthInfo_ObserverAuthorityType_Offset = offsetof(FWuUserAuthInfo, ObserverAuthorityType);
	static_assert(FWuUserAuthInfo_ObserverAuthorityType_Offset == 0x80, "FWuUserAuthInfo::ObserverAuthorityType offset is not 80");
	auto constexpr FWuUserAuthInfo_AccountId_Offset = offsetof(FWuUserAuthInfo, AccountId);
	static_assert(FWuUserAuthInfo_AccountId_Offset == 0x88, "FWuUserAuthInfo::AccountId offset is not 88");
	auto constexpr FWuUserAuthInfo_v1_Offset = offsetof(FWuUserAuthInfo, v1);
	static_assert(FWuUserAuthInfo_v1_Offset == 0x98, "FWuUserAuthInfo::v1 offset is not 98");
	auto constexpr FWuUserAuthInfo_v2_Offset = offsetof(FWuUserAuthInfo, v2);
	static_assert(FWuUserAuthInfo_v2_Offset == 0x9c, "FWuUserAuthInfo::v2 offset is not 9c");
	auto constexpr FWuUserAuthInfo_V3_Offset = offsetof(FWuUserAuthInfo, V3);
	static_assert(FWuUserAuthInfo_V3_Offset == 0xa0, "FWuUserAuthInfo::V3 offset is not a0");
	auto constexpr FWuUserAuthInfo_V4_Offset = offsetof(FWuUserAuthInfo, V4);
	static_assert(FWuUserAuthInfo_V4_Offset == 0xa4, "FWuUserAuthInfo::V4 offset is not a4");
	auto constexpr FWuUserAuthInfo_UdpEncryptionKey_Offset = offsetof(FWuUserAuthInfo, UdpEncryptionKey);
	static_assert(FWuUserAuthInfo_UdpEncryptionKey_Offset == 0xa8, "FWuUserAuthInfo::UdpEncryptionKey offset is not a8");
	auto constexpr FWuUserAuthInfo_CustomParameters_Offset = offsetof(FWuUserAuthInfo, CustomParameters);
	static_assert(FWuUserAuthInfo_CustomParameters_Offset == 0xd8, "FWuUserAuthInfo::CustomParameters offset is not d8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
