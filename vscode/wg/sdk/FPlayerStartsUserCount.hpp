#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FPlayerStartsUserCount // Size: 0x10
{
public:
    int32_t PlayerCount; /* Ofs: 0x0 Size: 0x4 IntProperty TslGame.PlayerStartsUserCount.PlayerCount */
    uint8_t UnknownData4[0x4];
    ExternalPtr<struct UTslPlayerStart> PlayerStart; /* Ofs: 0x8 Size: 0x8 ObjectProperty TslGame.PlayerStartsUserCount.PlayerStart */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFPlayerStartsUserCount = sizeof(FPlayerStartsUserCount); // 16
    static_assert(sizeof(FPlayerStartsUserCount) == 0x10, "Size of FPlayerStartsUserCount is not correct.");
	auto constexpr FPlayerStartsUserCount_PlayerCount_Offset = offsetof(FPlayerStartsUserCount, PlayerCount);
	static_assert(FPlayerStartsUserCount_PlayerCount_Offset == 0x0, "FPlayerStartsUserCount::PlayerCount offset is not 0");
	auto constexpr FPlayerStartsUserCount_PlayerStart_Offset = offsetof(FPlayerStartsUserCount, PlayerStart);
	static_assert(FPlayerStartsUserCount_PlayerStart_Offset == 0x8, "FPlayerStartsUserCount::PlayerStart offset is not 8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
