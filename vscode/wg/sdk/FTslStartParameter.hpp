#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FTslStartParameter // Size: 0x80
{
public:
    bool bIsCustomGame; /* Ofs: 0x0 Size: 0x1 BitMask: 01 BoolProperty TslGame.TslStartParameter.bIsCustomGame */
    uint8_t UnknownData1[0x7];
    FString MapName; /* Ofs: 0x8 Size: 0x10 StrProperty TslGame.TslStartParameter.MapName */
    FString MatchId; /* Ofs: 0x18 Size: 0x10 StrProperty TslGame.TslStartParameter.MatchId */
    int32_t MinPlayerCount; /* Ofs: 0x28 Size: 0x4 IntProperty TslGame.TslStartParameter.MinPlayerCount */
    int32_t MaxPlayerCount; /* Ofs: 0x2C Size: 0x4 IntProperty TslGame.TslStartParameter.MaxPlayerCount */
    TMap<struct FString, struct FString> StringParameter; /* Ofs: 0x30 Size: 0x50 MapProperty TslGame.TslStartParameter.StringParameter */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFTslStartParameter = sizeof(FTslStartParameter); // 128
    static_assert(sizeof(FTslStartParameter) == 0x80, "Size of FTslStartParameter is not correct.");
	auto constexpr FTslStartParameter_MapName_Offset = offsetof(FTslStartParameter, MapName);
	static_assert(FTslStartParameter_MapName_Offset == 0x8, "FTslStartParameter::MapName offset is not 8");
	auto constexpr FTslStartParameter_MatchId_Offset = offsetof(FTslStartParameter, MatchId);
	static_assert(FTslStartParameter_MatchId_Offset == 0x18, "FTslStartParameter::MatchId offset is not 18");
	auto constexpr FTslStartParameter_MinPlayerCount_Offset = offsetof(FTslStartParameter, MinPlayerCount);
	static_assert(FTslStartParameter_MinPlayerCount_Offset == 0x28, "FTslStartParameter::MinPlayerCount offset is not 28");
	auto constexpr FTslStartParameter_MaxPlayerCount_Offset = offsetof(FTslStartParameter, MaxPlayerCount);
	static_assert(FTslStartParameter_MaxPlayerCount_Offset == 0x2c, "FTslStartParameter::MaxPlayerCount offset is not 2c");
	auto constexpr FTslStartParameter_StringParameter_Offset = offsetof(FTslStartParameter, StringParameter);
	static_assert(FTslStartParameter_StringParameter_Offset == 0x30, "FTslStartParameter::StringParameter offset is not 30");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
