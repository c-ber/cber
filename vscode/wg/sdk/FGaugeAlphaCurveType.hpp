#pragma once
#include "FFloatInterval.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FGaugeAlphaCurveType // Size: 0x10
{
public:
    FFloatInterval DamageRange; /* Ofs: 0x0 Size: 0x8 StructProperty TslGame.GaugeAlphaCurveType.DamageRange */
    ExternalPtr<struct UCurveVector> ColorCurve; /* Ofs: 0x8 Size: 0x8 ObjectProperty TslGame.GaugeAlphaCurveType.ColorCurve */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFGaugeAlphaCurveType = sizeof(FGaugeAlphaCurveType); // 16
    static_assert(sizeof(FGaugeAlphaCurveType) == 0x10, "Size of FGaugeAlphaCurveType is not correct.");
	auto constexpr FGaugeAlphaCurveType_DamageRange_Offset = offsetof(FGaugeAlphaCurveType, DamageRange);
	static_assert(FGaugeAlphaCurveType_DamageRange_Offset == 0x0, "FGaugeAlphaCurveType::DamageRange offset is not 0");
	auto constexpr FGaugeAlphaCurveType_ColorCurve_Offset = offsetof(FGaugeAlphaCurveType, ColorCurve);
	static_assert(FGaugeAlphaCurveType_ColorCurve_Offset == 0x8, "FGaugeAlphaCurveType::ColorCurve offset is not 8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
