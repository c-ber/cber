#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FTslPlayerStatisticsForOwner // Size: 0x10
{
public:
    float TotalMovedDistanceMeter; /* Ofs: 0x0 Size: 0x4 FloatProperty TslGame.TslPlayerStatisticsForOwner.TotalMovedDistanceMeter */
    float TotalGivenDamages; /* Ofs: 0x4 Size: 0x4 FloatProperty TslGame.TslPlayerStatisticsForOwner.TotalGivenDamages */
    float LongestDistanceKill; /* Ofs: 0x8 Size: 0x4 FloatProperty TslGame.TslPlayerStatisticsForOwner.LongestDistanceKill */
    int32_t HeadShots; /* Ofs: 0xC Size: 0x4 IntProperty TslGame.TslPlayerStatisticsForOwner.HeadShots */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFTslPlayerStatisticsForOwner = sizeof(FTslPlayerStatisticsForOwner); // 16
    static_assert(sizeof(FTslPlayerStatisticsForOwner) == 0x10, "Size of FTslPlayerStatisticsForOwner is not correct.");
	auto constexpr FTslPlayerStatisticsForOwner_TotalMovedDistanceMeter_Offset = offsetof(FTslPlayerStatisticsForOwner, TotalMovedDistanceMeter);
	static_assert(FTslPlayerStatisticsForOwner_TotalMovedDistanceMeter_Offset == 0x0, "FTslPlayerStatisticsForOwner::TotalMovedDistanceMeter offset is not 0");
	auto constexpr FTslPlayerStatisticsForOwner_TotalGivenDamages_Offset = offsetof(FTslPlayerStatisticsForOwner, TotalGivenDamages);
	static_assert(FTslPlayerStatisticsForOwner_TotalGivenDamages_Offset == 0x4, "FTslPlayerStatisticsForOwner::TotalGivenDamages offset is not 4");
	auto constexpr FTslPlayerStatisticsForOwner_LongestDistanceKill_Offset = offsetof(FTslPlayerStatisticsForOwner, LongestDistanceKill);
	static_assert(FTslPlayerStatisticsForOwner_LongestDistanceKill_Offset == 0x8, "FTslPlayerStatisticsForOwner::LongestDistanceKill offset is not 8");
	auto constexpr FTslPlayerStatisticsForOwner_HeadShots_Offset = offsetof(FTslPlayerStatisticsForOwner, HeadShots);
	static_assert(FTslPlayerStatisticsForOwner_HeadShots_Offset == 0xc, "FTslPlayerStatisticsForOwner::HeadShots offset is not c");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
