#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FGeneralItemSpawnProb // Size: 0x18
{
public:
    float ProbabilityPercent; /* Ofs: 0x0 Size: 0x4 FloatProperty TslGame.GeneralItemSpawnProb.ProbabilityPercent */
    uint8_t UnknownData4[0x4];
    FName ValueFilter; /* Ofs: 0x8 Size: 0x8 NameProperty TslGame.GeneralItemSpawnProb.ValueFilter */
    FName CategoryFilter; /* Ofs: 0x10 Size: 0x8 NameProperty TslGame.GeneralItemSpawnProb.CategoryFilter */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFGeneralItemSpawnProb = sizeof(FGeneralItemSpawnProb); // 24
    static_assert(sizeof(FGeneralItemSpawnProb) == 0x18, "Size of FGeneralItemSpawnProb is not correct.");
	auto constexpr FGeneralItemSpawnProb_ProbabilityPercent_Offset = offsetof(FGeneralItemSpawnProb, ProbabilityPercent);
	static_assert(FGeneralItemSpawnProb_ProbabilityPercent_Offset == 0x0, "FGeneralItemSpawnProb::ProbabilityPercent offset is not 0");
	auto constexpr FGeneralItemSpawnProb_ValueFilter_Offset = offsetof(FGeneralItemSpawnProb, ValueFilter);
	static_assert(FGeneralItemSpawnProb_ValueFilter_Offset == 0x8, "FGeneralItemSpawnProb::ValueFilter offset is not 8");
	auto constexpr FGeneralItemSpawnProb_CategoryFilter_Offset = offsetof(FGeneralItemSpawnProb, CategoryFilter);
	static_assert(FGeneralItemSpawnProb_CategoryFilter_Offset == 0x10, "FGeneralItemSpawnProb::CategoryFilter offset is not 10");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
