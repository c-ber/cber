#pragma once
#include "ETriangleSortOption.hpp"
#include "ETriangleSortAxis.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FTriangleSortSettings // Size: 0x10
{
public:
    TEnumAsByte<enum ETriangleSortOption> TriangleSorting; /* Ofs: 0x0 Size: 0x1 ByteProperty Engine.TriangleSortSettings.TriangleSorting */
    TEnumAsByte<enum ETriangleSortAxis> CustomLeftRightAxis; /* Ofs: 0x1 Size: 0x1 ByteProperty Engine.TriangleSortSettings.CustomLeftRightAxis */
    uint8_t UnknownData2[0x6];
    FName CustomLeftRightBoneName; /* Ofs: 0x8 Size: 0x8 NameProperty Engine.TriangleSortSettings.CustomLeftRightBoneName */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFTriangleSortSettings = sizeof(FTriangleSortSettings); // 16
    static_assert(sizeof(FTriangleSortSettings) == 0x10, "Size of FTriangleSortSettings is not correct.");
	auto constexpr FTriangleSortSettings_TriangleSorting_Offset = offsetof(FTriangleSortSettings, TriangleSorting);
	static_assert(FTriangleSortSettings_TriangleSorting_Offset == 0x0, "FTriangleSortSettings::TriangleSorting offset is not 0");
	auto constexpr FTriangleSortSettings_CustomLeftRightAxis_Offset = offsetof(FTriangleSortSettings, CustomLeftRightAxis);
	static_assert(FTriangleSortSettings_CustomLeftRightAxis_Offset == 0x1, "FTriangleSortSettings::CustomLeftRightAxis offset is not 1");
	auto constexpr FTriangleSortSettings_CustomLeftRightBoneName_Offset = offsetof(FTriangleSortSettings, CustomLeftRightBoneName);
	static_assert(FTriangleSortSettings_CustomLeftRightBoneName_Offset == 0x8, "FTriangleSortSettings::CustomLeftRightBoneName offset is not 8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
