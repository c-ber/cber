#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FWeatherLevelInfo // Size: 0x20
{
public:
    FString WeatherId; /* Ofs: 0x0 Size: 0x10 StrProperty TslGame.WeatherLevelInfo.WeatherId */
    int32_t Weight; /* Ofs: 0x10 Size: 0x4 IntProperty TslGame.WeatherLevelInfo.Weight */
    uint8_t UnknownData14[0x4];
    FName WeatherLevel; /* Ofs: 0x18 Size: 0x8 NameProperty TslGame.WeatherLevelInfo.WeatherLevel */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFWeatherLevelInfo = sizeof(FWeatherLevelInfo); // 32
    static_assert(sizeof(FWeatherLevelInfo) == 0x20, "Size of FWeatherLevelInfo is not correct.");
	auto constexpr FWeatherLevelInfo_WeatherId_Offset = offsetof(FWeatherLevelInfo, WeatherId);
	static_assert(FWeatherLevelInfo_WeatherId_Offset == 0x0, "FWeatherLevelInfo::WeatherId offset is not 0");
	auto constexpr FWeatherLevelInfo_Weight_Offset = offsetof(FWeatherLevelInfo, Weight);
	static_assert(FWeatherLevelInfo_Weight_Offset == 0x10, "FWeatherLevelInfo::Weight offset is not 10");
	auto constexpr FWeatherLevelInfo_WeatherLevel_Offset = offsetof(FWeatherLevelInfo, WeatherLevel);
	static_assert(FWeatherLevelInfo_WeatherLevel_Offset == 0x18, "FWeatherLevelInfo::WeatherLevel offset is not 18");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
