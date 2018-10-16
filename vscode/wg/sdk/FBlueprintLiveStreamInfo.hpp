#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FBlueprintLiveStreamInfo // Size: 0x30
{
public:
    FString GameName; /* Ofs: 0x0 Size: 0x10 StrProperty GameLiveStreaming.BlueprintLiveStreamInfo.GameName */
    FString StreamName; /* Ofs: 0x10 Size: 0x10 StrProperty GameLiveStreaming.BlueprintLiveStreamInfo.StreamName */
    FString URL; /* Ofs: 0x20 Size: 0x10 StrProperty GameLiveStreaming.BlueprintLiveStreamInfo.URL */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFBlueprintLiveStreamInfo = sizeof(FBlueprintLiveStreamInfo); // 48
    static_assert(sizeof(FBlueprintLiveStreamInfo) == 0x30, "Size of FBlueprintLiveStreamInfo is not correct.");
	auto constexpr FBlueprintLiveStreamInfo_GameName_Offset = offsetof(FBlueprintLiveStreamInfo, GameName);
	static_assert(FBlueprintLiveStreamInfo_GameName_Offset == 0x0, "FBlueprintLiveStreamInfo::GameName offset is not 0");
	auto constexpr FBlueprintLiveStreamInfo_StreamName_Offset = offsetof(FBlueprintLiveStreamInfo, StreamName);
	static_assert(FBlueprintLiveStreamInfo_StreamName_Offset == 0x10, "FBlueprintLiveStreamInfo::StreamName offset is not 10");
	auto constexpr FBlueprintLiveStreamInfo_URL_Offset = offsetof(FBlueprintLiveStreamInfo, URL);
	static_assert(FBlueprintLiveStreamInfo_URL_Offset == 0x20, "FBlueprintLiveStreamInfo::URL offset is not 20");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
