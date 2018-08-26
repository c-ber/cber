#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FTslFriendPresence // Size: 0x5
{
public:
    bool IsOnline; /* Ofs: 0x0 Size: 0x1 BitMask: 01 BoolProperty TslGame.TslFriendPresence.IsOnline */
    bool IsPlaying; /* Ofs: 0x1 Size: 0x1 BitMask: 01 BoolProperty TslGame.TslFriendPresence.IsPlaying */
    bool IsPlayingThisGame; /* Ofs: 0x2 Size: 0x1 BitMask: 01 BoolProperty TslGame.TslFriendPresence.IsPlayingThisGame */
    bool IsJoinable; /* Ofs: 0x3 Size: 0x1 BitMask: 01 BoolProperty TslGame.TslFriendPresence.IsJoinable */
    uint8_t Status; /* Ofs: 0x4 Size: 0x1 ByteProperty TslGame.TslFriendPresence.Status */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFTslFriendPresence = sizeof(FTslFriendPresence); // 5
    static_assert(sizeof(FTslFriendPresence) == 0x5, "Size of FTslFriendPresence is not correct.");
	auto constexpr FTslFriendPresence_Status_Offset = offsetof(FTslFriendPresence, Status);
	static_assert(FTslFriendPresence_Status_Offset == 0x4, "FTslFriendPresence::Status offset is not 4");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
