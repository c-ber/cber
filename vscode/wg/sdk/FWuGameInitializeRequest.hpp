#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FWuGameInitializeRequest // Size: 0x38
{
public:
    bool IsCustomGame; /* Ofs: 0x0 Size: 0x1 BitMask: 01 BoolProperty TslGame.WuGameInitializeRequest.IsCustomGame */
    uint8_t UnknownData1[0x7];
    FString MapName; /* Ofs: 0x8 Size: 0x10 StrProperty TslGame.WuGameInitializeRequest.MapName */
    int32_t TeamCount; /* Ofs: 0x18 Size: 0x4 IntProperty TslGame.WuGameInitializeRequest.TeamCount */
    int32_t MinPlayerCount; /* Ofs: 0x1C Size: 0x4 IntProperty TslGame.WuGameInitializeRequest.MinPlayerCount */
    int32_t MaxPlayerCount; /* Ofs: 0x20 Size: 0x4 IntProperty TslGame.WuGameInitializeRequest.MaxPlayerCount */
    uint8_t UnknownData24[0x4];
    TArray<struct FWuStringStringPair> StringParameters; /* Ofs: 0x28 Size: 0x10 ArrayProperty TslGame.WuGameInitializeRequest.StringParameters */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFWuGameInitializeRequest = sizeof(FWuGameInitializeRequest); // 56
    static_assert(sizeof(FWuGameInitializeRequest) == 0x38, "Size of FWuGameInitializeRequest is not correct.");
	auto constexpr FWuGameInitializeRequest_MapName_Offset = offsetof(FWuGameInitializeRequest, MapName);
	static_assert(FWuGameInitializeRequest_MapName_Offset == 0x8, "FWuGameInitializeRequest::MapName offset is not 8");
	auto constexpr FWuGameInitializeRequest_TeamCount_Offset = offsetof(FWuGameInitializeRequest, TeamCount);
	static_assert(FWuGameInitializeRequest_TeamCount_Offset == 0x18, "FWuGameInitializeRequest::TeamCount offset is not 18");
	auto constexpr FWuGameInitializeRequest_MinPlayerCount_Offset = offsetof(FWuGameInitializeRequest, MinPlayerCount);
	static_assert(FWuGameInitializeRequest_MinPlayerCount_Offset == 0x1c, "FWuGameInitializeRequest::MinPlayerCount offset is not 1c");
	auto constexpr FWuGameInitializeRequest_MaxPlayerCount_Offset = offsetof(FWuGameInitializeRequest, MaxPlayerCount);
	static_assert(FWuGameInitializeRequest_MaxPlayerCount_Offset == 0x20, "FWuGameInitializeRequest::MaxPlayerCount offset is not 20");
	auto constexpr FWuGameInitializeRequest_StringParameters_Offset = offsetof(FWuGameInitializeRequest, StringParameters);
	static_assert(FWuGameInitializeRequest_StringParameters_Offset == 0x28, "FWuGameInitializeRequest::StringParameters offset is not 28");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
