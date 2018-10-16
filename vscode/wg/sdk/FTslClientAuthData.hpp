#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FTslClientAuthData // Size: 0x70
{
public:
    FString PlatformType; /* Ofs: 0x0 Size: 0x10 StrProperty TslGame.TslClientAuthData.PlatformType */
    FString AppID; /* Ofs: 0x10 Size: 0x10 StrProperty TslGame.TslClientAuthData.AppID */
    FString FullGameVersion; /* Ofs: 0x20 Size: 0x10 StrProperty TslGame.TslClientAuthData.FullGameVersion */
    FString UserSerial; /* Ofs: 0x30 Size: 0x10 StrProperty TslGame.TslClientAuthData.UserSerial */
    FString AccessToken; /* Ofs: 0x40 Size: 0x10 StrProperty TslGame.TslClientAuthData.AccessToken */
    FString UserDisplayName; /* Ofs: 0x50 Size: 0x10 StrProperty TslGame.TslClientAuthData.UserDisplayName */
    FString PlayerNetId; /* Ofs: 0x60 Size: 0x10 StrProperty TslGame.TslClientAuthData.PlayerNetId */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFTslClientAuthData = sizeof(FTslClientAuthData); // 112
    static_assert(sizeof(FTslClientAuthData) == 0x70, "Size of FTslClientAuthData is not correct.");
	auto constexpr FTslClientAuthData_PlatformType_Offset = offsetof(FTslClientAuthData, PlatformType);
	static_assert(FTslClientAuthData_PlatformType_Offset == 0x0, "FTslClientAuthData::PlatformType offset is not 0");
	auto constexpr FTslClientAuthData_AppID_Offset = offsetof(FTslClientAuthData, AppID);
	static_assert(FTslClientAuthData_AppID_Offset == 0x10, "FTslClientAuthData::AppID offset is not 10");
	auto constexpr FTslClientAuthData_FullGameVersion_Offset = offsetof(FTslClientAuthData, FullGameVersion);
	static_assert(FTslClientAuthData_FullGameVersion_Offset == 0x20, "FTslClientAuthData::FullGameVersion offset is not 20");
	auto constexpr FTslClientAuthData_UserSerial_Offset = offsetof(FTslClientAuthData, UserSerial);
	static_assert(FTslClientAuthData_UserSerial_Offset == 0x30, "FTslClientAuthData::UserSerial offset is not 30");
	auto constexpr FTslClientAuthData_AccessToken_Offset = offsetof(FTslClientAuthData, AccessToken);
	static_assert(FTslClientAuthData_AccessToken_Offset == 0x40, "FTslClientAuthData::AccessToken offset is not 40");
	auto constexpr FTslClientAuthData_UserDisplayName_Offset = offsetof(FTslClientAuthData, UserDisplayName);
	static_assert(FTslClientAuthData_UserDisplayName_Offset == 0x50, "FTslClientAuthData::UserDisplayName offset is not 50");
	auto constexpr FTslClientAuthData_PlayerNetId_Offset = offsetof(FTslClientAuthData, PlayerNetId);
	static_assert(FTslClientAuthData_PlayerNetId_Offset == 0x60, "FTslClientAuthData::PlayerNetId offset is not 60");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
