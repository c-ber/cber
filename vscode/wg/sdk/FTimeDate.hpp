#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FTimeDate // Size: 0x1C
{
public:
    int32_t Millisecond; /* Ofs: 0x0 Size: 0x4 IntProperty OceanPlugin.TimeDate.Millisecond */
    int32_t second; /* Ofs: 0x4 Size: 0x4 IntProperty OceanPlugin.TimeDate.second */
    int32_t Minute; /* Ofs: 0x8 Size: 0x4 IntProperty OceanPlugin.TimeDate.Minute */
    int32_t Hour; /* Ofs: 0xC Size: 0x4 IntProperty OceanPlugin.TimeDate.Hour */
    int32_t Day; /* Ofs: 0x10 Size: 0x4 IntProperty OceanPlugin.TimeDate.Day */
    int32_t Month; /* Ofs: 0x14 Size: 0x4 IntProperty OceanPlugin.TimeDate.Month */
    int32_t Year; /* Ofs: 0x18 Size: 0x4 IntProperty OceanPlugin.TimeDate.Year */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFTimeDate = sizeof(FTimeDate); // 28
    static_assert(sizeof(FTimeDate) == 0x1C, "Size of FTimeDate is not correct.");
	auto constexpr FTimeDate_Millisecond_Offset = offsetof(FTimeDate, Millisecond);
	static_assert(FTimeDate_Millisecond_Offset == 0x0, "FTimeDate::Millisecond offset is not 0");
	auto constexpr FTimeDate_second_Offset = offsetof(FTimeDate, second);
	static_assert(FTimeDate_second_Offset == 0x4, "FTimeDate::second offset is not 4");
	auto constexpr FTimeDate_Minute_Offset = offsetof(FTimeDate, Minute);
	static_assert(FTimeDate_Minute_Offset == 0x8, "FTimeDate::Minute offset is not 8");
	auto constexpr FTimeDate_Hour_Offset = offsetof(FTimeDate, Hour);
	static_assert(FTimeDate_Hour_Offset == 0xc, "FTimeDate::Hour offset is not c");
	auto constexpr FTimeDate_Day_Offset = offsetof(FTimeDate, Day);
	static_assert(FTimeDate_Day_Offset == 0x10, "FTimeDate::Day offset is not 10");
	auto constexpr FTimeDate_Month_Offset = offsetof(FTimeDate, Month);
	static_assert(FTimeDate_Month_Offset == 0x14, "FTimeDate::Month offset is not 14");
	auto constexpr FTimeDate_Year_Offset = offsetof(FTimeDate, Year);
	static_assert(FTimeDate_Year_Offset == 0x18, "FTimeDate::Year offset is not 18");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
