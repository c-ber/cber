#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FWuGameStartInfoPerPlayer // Size: 0x20
{
public:
    FString PlayerNetId; /* Ofs: 0x0 Size: 0x10 StrProperty TslGame.WuGameStartInfoPerPlayer.PlayerNetId */
    FString AccountId; /* Ofs: 0x10 Size: 0x10 StrProperty TslGame.WuGameStartInfoPerPlayer.AccountId */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFWuGameStartInfoPerPlayer = sizeof(FWuGameStartInfoPerPlayer); // 32
    static_assert(sizeof(FWuGameStartInfoPerPlayer) == 0x20, "Size of FWuGameStartInfoPerPlayer is not correct.");
	auto constexpr FWuGameStartInfoPerPlayer_PlayerNetId_Offset = offsetof(FWuGameStartInfoPerPlayer, PlayerNetId);
	static_assert(FWuGameStartInfoPerPlayer_PlayerNetId_Offset == 0x0, "FWuGameStartInfoPerPlayer::PlayerNetId offset is not 0");
	auto constexpr FWuGameStartInfoPerPlayer_AccountId_Offset = offsetof(FWuGameStartInfoPerPlayer, AccountId);
	static_assert(FWuGameStartInfoPerPlayer_AccountId_Offset == 0x10, "FWuGameStartInfoPerPlayer::AccountId offset is not 10");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
