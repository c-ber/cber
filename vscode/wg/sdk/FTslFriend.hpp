#pragma once
#include "FTslFriendPresence.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FTslFriend // Size: 0x38
{
public:
    FString UserSerial; /* Ofs: 0x0 Size: 0x10 StrProperty TslGame.TslFriend.UserSerial */
    FString UserRealName; /* Ofs: 0x10 Size: 0x10 StrProperty TslGame.TslFriend.UserRealName */
    FString UserDisplayName; /* Ofs: 0x20 Size: 0x10 StrProperty TslGame.TslFriend.UserDisplayName */
    FTslFriendPresence Presence; /* Ofs: 0x30 Size: 0x5 StructProperty TslGame.TslFriend.Presence */
    uint8_t UnknownData35[0x3];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFTslFriend = sizeof(FTslFriend); // 56
    static_assert(sizeof(FTslFriend) == 0x38, "Size of FTslFriend is not correct.");
	auto constexpr FTslFriend_UserSerial_Offset = offsetof(FTslFriend, UserSerial);
	static_assert(FTslFriend_UserSerial_Offset == 0x0, "FTslFriend::UserSerial offset is not 0");
	auto constexpr FTslFriend_UserRealName_Offset = offsetof(FTslFriend, UserRealName);
	static_assert(FTslFriend_UserRealName_Offset == 0x10, "FTslFriend::UserRealName offset is not 10");
	auto constexpr FTslFriend_UserDisplayName_Offset = offsetof(FTslFriend, UserDisplayName);
	static_assert(FTslFriend_UserDisplayName_Offset == 0x20, "FTslFriend::UserDisplayName offset is not 20");
	auto constexpr FTslFriend_Presence_Offset = offsetof(FTslFriend, Presence);
	static_assert(FTslFriend_Presence_Offset == 0x30, "FTslFriend::Presence offset is not 30");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
