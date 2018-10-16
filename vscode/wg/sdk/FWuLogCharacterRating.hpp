#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FWuLogCharacterRating // Size: 0x30
{
public:
    FString AccountId; /* Ofs: 0x0 Size: 0x10 StrProperty TslGame.WuLogCharacterRating.AccountId */
    FString NetId; /* Ofs: 0x10 Size: 0x10 StrProperty TslGame.WuLogCharacterRating.NetId */
    int32_t WinPoints; /* Ofs: 0x20 Size: 0x4 IntProperty TslGame.WuLogCharacterRating.WinPoints */
    int32_t KillPoints; /* Ofs: 0x24 Size: 0x4 IntProperty TslGame.WuLogCharacterRating.KillPoints */
    int32_t MMR; /* Ofs: 0x28 Size: 0x4 IntProperty TslGame.WuLogCharacterRating.MMR */
    int32_t Ping; /* Ofs: 0x2C Size: 0x4 IntProperty TslGame.WuLogCharacterRating.Ping */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFWuLogCharacterRating = sizeof(FWuLogCharacterRating); // 48
    static_assert(sizeof(FWuLogCharacterRating) == 0x30, "Size of FWuLogCharacterRating is not correct.");
	auto constexpr FWuLogCharacterRating_AccountId_Offset = offsetof(FWuLogCharacterRating, AccountId);
	static_assert(FWuLogCharacterRating_AccountId_Offset == 0x0, "FWuLogCharacterRating::AccountId offset is not 0");
	auto constexpr FWuLogCharacterRating_NetId_Offset = offsetof(FWuLogCharacterRating, NetId);
	static_assert(FWuLogCharacterRating_NetId_Offset == 0x10, "FWuLogCharacterRating::NetId offset is not 10");
	auto constexpr FWuLogCharacterRating_WinPoints_Offset = offsetof(FWuLogCharacterRating, WinPoints);
	static_assert(FWuLogCharacterRating_WinPoints_Offset == 0x20, "FWuLogCharacterRating::WinPoints offset is not 20");
	auto constexpr FWuLogCharacterRating_KillPoints_Offset = offsetof(FWuLogCharacterRating, KillPoints);
	static_assert(FWuLogCharacterRating_KillPoints_Offset == 0x24, "FWuLogCharacterRating::KillPoints offset is not 24");
	auto constexpr FWuLogCharacterRating_MMR_Offset = offsetof(FWuLogCharacterRating, MMR);
	static_assert(FWuLogCharacterRating_MMR_Offset == 0x28, "FWuLogCharacterRating::MMR offset is not 28");
	auto constexpr FWuLogCharacterRating_Ping_Offset = offsetof(FWuLogCharacterRating, Ping);
	static_assert(FWuLogCharacterRating_Ping_Offset == 0x2c, "FWuLogCharacterRating::Ping offset is not 2c");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
