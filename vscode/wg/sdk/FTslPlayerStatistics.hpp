#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FTslPlayerStatistics // Size: 0x4
{
public:
    int32_t NumKills; /* Ofs: 0x0 Size: 0x4 IntProperty TslGame.TslPlayerStatistics.NumKills */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFTslPlayerStatistics = sizeof(FTslPlayerStatistics); // 4
    static_assert(sizeof(FTslPlayerStatistics) == 0x4, "Size of FTslPlayerStatistics is not correct.");
	auto constexpr FTslPlayerStatistics_NumKills_Offset = offsetof(FTslPlayerStatistics, NumKills);
	static_assert(FTslPlayerStatistics_NumKills_Offset == 0x0, "FTslPlayerStatistics::NumKills offset is not 0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
