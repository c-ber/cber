#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FPackageSpawnProb // Size: 0x18
{
public:
    float ProbabilityPercent; /* Ofs: 0x0 Size: 0x4 FloatProperty TslGame.PackageSpawnProb.ProbabilityPercent */
    uint8_t UnknownData4[0x4];
    FName ValueFilter; /* Ofs: 0x8 Size: 0x8 NameProperty TslGame.PackageSpawnProb.ValueFilter */
    FName CategoryFilter; /* Ofs: 0x10 Size: 0x8 NameProperty TslGame.PackageSpawnProb.CategoryFilter */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFPackageSpawnProb = sizeof(FPackageSpawnProb); // 24
    static_assert(sizeof(FPackageSpawnProb) == 0x18, "Size of FPackageSpawnProb is not correct.");
	auto constexpr FPackageSpawnProb_ProbabilityPercent_Offset = offsetof(FPackageSpawnProb, ProbabilityPercent);
	static_assert(FPackageSpawnProb_ProbabilityPercent_Offset == 0x0, "FPackageSpawnProb::ProbabilityPercent offset is not 0");
	auto constexpr FPackageSpawnProb_ValueFilter_Offset = offsetof(FPackageSpawnProb, ValueFilter);
	static_assert(FPackageSpawnProb_ValueFilter_Offset == 0x8, "FPackageSpawnProb::ValueFilter offset is not 8");
	auto constexpr FPackageSpawnProb_CategoryFilter_Offset = offsetof(FPackageSpawnProb, CategoryFilter);
	static_assert(FPackageSpawnProb_CategoryFilter_Offset == 0x10, "FPackageSpawnProb::CategoryFilter offset is not 10");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
