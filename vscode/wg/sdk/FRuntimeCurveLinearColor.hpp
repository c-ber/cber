#pragma once
#include "FRichCurve.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FRuntimeCurveLinearColor // Size: 0x1C8
{
public:
    FRichCurve ColorCurves[4]; /* Ofs: 0x0 Size: 0x70 StructProperty Engine.RuntimeCurveLinearColor.ColorCurves */
    ExternalPtr<struct UCurveLinearColor> ExternalCurve; /* Ofs: 0x1C0 Size: 0x8 ObjectProperty Engine.RuntimeCurveLinearColor.ExternalCurve */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFRuntimeCurveLinearColor = sizeof(FRuntimeCurveLinearColor); // 456
    static_assert(sizeof(FRuntimeCurveLinearColor) == 0x1C8, "Size of FRuntimeCurveLinearColor is not correct.");
	auto constexpr FRuntimeCurveLinearColor_ColorCurves_Offset = offsetof(FRuntimeCurveLinearColor, ColorCurves);
	static_assert(FRuntimeCurveLinearColor_ColorCurves_Offset == 0x0, "FRuntimeCurveLinearColor::ColorCurves offset is not 0");
	auto constexpr FRuntimeCurveLinearColor_ExternalCurve_Offset = offsetof(FRuntimeCurveLinearColor, ExternalCurve);
	static_assert(FRuntimeCurveLinearColor_ExternalCurve_Offset == 0x1c0, "FRuntimeCurveLinearColor::ExternalCurve offset is not 1c0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
