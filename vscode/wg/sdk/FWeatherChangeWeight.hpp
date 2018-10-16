#pragma once
#include "EWeatherChange.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FWeatherChangeWeight // Size: 0x8
{
public:
    TEnumAsByte<enum EWeatherChange> newWeather; /* Ofs: 0x0 Size: 0x1 EnumProperty TslGame.WeatherChangeWeight.newWeather */
    uint8_t UnknownData1[0x3];
    float Weight; /* Ofs: 0x4 Size: 0x4 FloatProperty TslGame.WeatherChangeWeight.Weight */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFWeatherChangeWeight = sizeof(FWeatherChangeWeight); // 8
    static_assert(sizeof(FWeatherChangeWeight) == 0x8, "Size of FWeatherChangeWeight is not correct.");
	auto constexpr FWeatherChangeWeight_newWeather_Offset = offsetof(FWeatherChangeWeight, newWeather);
	static_assert(FWeatherChangeWeight_newWeather_Offset == 0x0, "FWeatherChangeWeight::newWeather offset is not 0");
	auto constexpr FWeatherChangeWeight_Weight_Offset = offsetof(FWeatherChangeWeight, Weight);
	static_assert(FWeatherChangeWeight_Weight_Offset == 0x4, "FWeatherChangeWeight::Weight offset is not 4");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
