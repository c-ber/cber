#pragma once
#include "FRuntimeFloatCurve.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FHapticFeedbackDetails_Curve // Size: 0xF0
{
public:
    FRuntimeFloatCurve Frequency; /* Ofs: 0x0 Size: 0x78 StructProperty Engine.HapticFeedbackDetails_Curve.Frequency */
    FRuntimeFloatCurve Amplitude; /* Ofs: 0x78 Size: 0x78 StructProperty Engine.HapticFeedbackDetails_Curve.Amplitude */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFHapticFeedbackDetails_Curve = sizeof(FHapticFeedbackDetails_Curve); // 240
    static_assert(sizeof(FHapticFeedbackDetails_Curve) == 0xF0, "Size of FHapticFeedbackDetails_Curve is not correct.");
	auto constexpr FHapticFeedbackDetails_Curve_Frequency_Offset = offsetof(FHapticFeedbackDetails_Curve, Frequency);
	static_assert(FHapticFeedbackDetails_Curve_Frequency_Offset == 0x0, "FHapticFeedbackDetails_Curve::Frequency offset is not 0");
	auto constexpr FHapticFeedbackDetails_Curve_Amplitude_Offset = offsetof(FHapticFeedbackDetails_Curve, Amplitude);
	static_assert(FHapticFeedbackDetails_Curve_Amplitude_Offset == 0x78, "FHapticFeedbackDetails_Curve::Amplitude offset is not 78");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
