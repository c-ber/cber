#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FJoinabilitySettings // Size: 0x18
{
public:
    FName SessionName; /* Ofs: 0x0 Size: 0x8 NameProperty CoreUObject.JoinabilitySettings.SessionName */
    bool bPublicSearchable; /* Ofs: 0x8 Size: 0x1 BitMask: 01 BoolProperty CoreUObject.JoinabilitySettings.bPublicSearchable */
    bool bAllowInvites; /* Ofs: 0x9 Size: 0x1 BitMask: 01 BoolProperty CoreUObject.JoinabilitySettings.bAllowInvites */
    bool bJoinViaPresence; /* Ofs: 0xA Size: 0x1 BitMask: 01 BoolProperty CoreUObject.JoinabilitySettings.bJoinViaPresence */
    bool bJoinViaPresenceFriendsOnly; /* Ofs: 0xB Size: 0x1 BitMask: 01 BoolProperty CoreUObject.JoinabilitySettings.bJoinViaPresenceFriendsOnly */
    int32_t MaxPlayers; /* Ofs: 0xC Size: 0x4 IntProperty CoreUObject.JoinabilitySettings.MaxPlayers */
    int32_t MaxPartySize; /* Ofs: 0x10 Size: 0x4 IntProperty CoreUObject.JoinabilitySettings.MaxPartySize */
    uint8_t UnknownData14[0x4];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFJoinabilitySettings = sizeof(FJoinabilitySettings); // 24
    static_assert(sizeof(FJoinabilitySettings) == 0x18, "Size of FJoinabilitySettings is not correct.");
	auto constexpr FJoinabilitySettings_SessionName_Offset = offsetof(FJoinabilitySettings, SessionName);
	static_assert(FJoinabilitySettings_SessionName_Offset == 0x0, "FJoinabilitySettings::SessionName offset is not 0");
	auto constexpr FJoinabilitySettings_MaxPlayers_Offset = offsetof(FJoinabilitySettings, MaxPlayers);
	static_assert(FJoinabilitySettings_MaxPlayers_Offset == 0xc, "FJoinabilitySettings::MaxPlayers offset is not c");
	auto constexpr FJoinabilitySettings_MaxPartySize_Offset = offsetof(FJoinabilitySettings, MaxPartySize);
	static_assert(FJoinabilitySettings_MaxPartySize_Offset == 0x10, "FJoinabilitySettings::MaxPartySize offset is not 10");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
