#pragma once
#include "FFloatInterval.hpp"
#include "FLinearColor.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FDurabilityColor // Size: 0x18
{
public:
    FFloatInterval DurabilityRatioRange; /* Ofs: 0x0 Size: 0x8 StructProperty TslGame.DurabilityColor.DurabilityRatioRange */
    FLinearColor Color; /* Ofs: 0x8 Size: 0x10 StructProperty TslGame.DurabilityColor.Color */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFDurabilityColor = sizeof(FDurabilityColor); // 24
    static_assert(sizeof(FDurabilityColor) == 0x18, "Size of FDurabilityColor is not correct.");
	auto constexpr FDurabilityColor_DurabilityRatioRange_Offset = offsetof(FDurabilityColor, DurabilityRatioRange);
	static_assert(FDurabilityColor_DurabilityRatioRange_Offset == 0x0, "FDurabilityColor::DurabilityRatioRange offset is not 0");
	auto constexpr FDurabilityColor_Color_Offset = offsetof(FDurabilityColor, Color);
	static_assert(FDurabilityColor_Color_Offset == 0x8, "FDurabilityColor::Color offset is not 8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
