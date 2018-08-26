#pragma once
#include "FFloatInterval.hpp"
#include "FLinearColor.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FHealthColorData // Size: 0x18
{
public:
    FFloatInterval HealthPercentRange; /* Ofs: 0x0 Size: 0x8 StructProperty TslGame.HealthColorData.HealthPercentRange */
    FLinearColor Color; /* Ofs: 0x8 Size: 0x10 StructProperty TslGame.HealthColorData.Color */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFHealthColorData = sizeof(FHealthColorData); // 24
    static_assert(sizeof(FHealthColorData) == 0x18, "Size of FHealthColorData is not correct.");
	auto constexpr FHealthColorData_HealthPercentRange_Offset = offsetof(FHealthColorData, HealthPercentRange);
	static_assert(FHealthColorData_HealthPercentRange_Offset == 0x0, "FHealthColorData::HealthPercentRange offset is not 0");
	auto constexpr FHealthColorData_Color_Offset = offsetof(FHealthColorData, Color);
	static_assert(FHealthColorData_Color_Offset == 0x8, "FHealthColorData::Color offset is not 8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
