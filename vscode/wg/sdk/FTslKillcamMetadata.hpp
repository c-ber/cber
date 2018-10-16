#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FTslKillcamMetadata // Size: 0x70
{
public:
    float LastUpdateTime; /* Ofs: 0x0 Size: 0x4 FloatProperty TslGame.TslKillcamMetadata.LastUpdateTime */
    uint8_t UnknownData4[0x4];
    FString KillerUniqueId; /* Ofs: 0x8 Size: 0x10 StrProperty TslGame.TslKillcamMetadata.KillerUniqueId */
    FString KillerName; /* Ofs: 0x18 Size: 0x10 StrProperty TslGame.TslKillcamMetadata.KillerName */
    FString PlayerUniqueId; /* Ofs: 0x28 Size: 0x10 StrProperty TslGame.TslKillcamMetadata.PlayerUniqueId */
    FString PlayerName; /* Ofs: 0x38 Size: 0x10 StrProperty TslGame.TslKillcamMetadata.PlayerName */
    uint8_t UnknownData48[0x28];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFTslKillcamMetadata = sizeof(FTslKillcamMetadata); // 112
    static_assert(sizeof(FTslKillcamMetadata) == 0x70, "Size of FTslKillcamMetadata is not correct.");
	auto constexpr FTslKillcamMetadata_LastUpdateTime_Offset = offsetof(FTslKillcamMetadata, LastUpdateTime);
	static_assert(FTslKillcamMetadata_LastUpdateTime_Offset == 0x0, "FTslKillcamMetadata::LastUpdateTime offset is not 0");
	auto constexpr FTslKillcamMetadata_KillerUniqueId_Offset = offsetof(FTslKillcamMetadata, KillerUniqueId);
	static_assert(FTslKillcamMetadata_KillerUniqueId_Offset == 0x8, "FTslKillcamMetadata::KillerUniqueId offset is not 8");
	auto constexpr FTslKillcamMetadata_KillerName_Offset = offsetof(FTslKillcamMetadata, KillerName);
	static_assert(FTslKillcamMetadata_KillerName_Offset == 0x18, "FTslKillcamMetadata::KillerName offset is not 18");
	auto constexpr FTslKillcamMetadata_PlayerUniqueId_Offset = offsetof(FTslKillcamMetadata, PlayerUniqueId);
	static_assert(FTslKillcamMetadata_PlayerUniqueId_Offset == 0x28, "FTslKillcamMetadata::PlayerUniqueId offset is not 28");
	auto constexpr FTslKillcamMetadata_PlayerName_Offset = offsetof(FTslKillcamMetadata, PlayerName);
	static_assert(FTslKillcamMetadata_PlayerName_Offset == 0x38, "FTslKillcamMetadata::PlayerName offset is not 38");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
