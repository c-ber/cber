#pragma once
#include "FRichCurve.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FColorParameterNameAndCurves // Size: 0x1D0
{
public:
    FName ParameterName; /* Ofs: 0x0 Size: 0x8 NameProperty MovieSceneTracks.ColorParameterNameAndCurves.ParameterName */
    int32_t Index; /* Ofs: 0x8 Size: 0x4 IntProperty MovieSceneTracks.ColorParameterNameAndCurves.Index */
    uint8_t UnknownDataC[0x4];
    FRichCurve RedCurve; /* Ofs: 0x10 Size: 0x70 StructProperty MovieSceneTracks.ColorParameterNameAndCurves.RedCurve */
    FRichCurve GreenCurve; /* Ofs: 0x80 Size: 0x70 StructProperty MovieSceneTracks.ColorParameterNameAndCurves.GreenCurve */
    FRichCurve BlueCurve; /* Ofs: 0xF0 Size: 0x70 StructProperty MovieSceneTracks.ColorParameterNameAndCurves.BlueCurve */
    FRichCurve AlphaCurve; /* Ofs: 0x160 Size: 0x70 StructProperty MovieSceneTracks.ColorParameterNameAndCurves.AlphaCurve */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFColorParameterNameAndCurves = sizeof(FColorParameterNameAndCurves); // 464
    static_assert(sizeof(FColorParameterNameAndCurves) == 0x1D0, "Size of FColorParameterNameAndCurves is not correct.");
	auto constexpr FColorParameterNameAndCurves_ParameterName_Offset = offsetof(FColorParameterNameAndCurves, ParameterName);
	static_assert(FColorParameterNameAndCurves_ParameterName_Offset == 0x0, "FColorParameterNameAndCurves::ParameterName offset is not 0");
	auto constexpr FColorParameterNameAndCurves_Index_Offset = offsetof(FColorParameterNameAndCurves, Index);
	static_assert(FColorParameterNameAndCurves_Index_Offset == 0x8, "FColorParameterNameAndCurves::Index offset is not 8");
	auto constexpr FColorParameterNameAndCurves_RedCurve_Offset = offsetof(FColorParameterNameAndCurves, RedCurve);
	static_assert(FColorParameterNameAndCurves_RedCurve_Offset == 0x10, "FColorParameterNameAndCurves::RedCurve offset is not 10");
	auto constexpr FColorParameterNameAndCurves_GreenCurve_Offset = offsetof(FColorParameterNameAndCurves, GreenCurve);
	static_assert(FColorParameterNameAndCurves_GreenCurve_Offset == 0x80, "FColorParameterNameAndCurves::GreenCurve offset is not 80");
	auto constexpr FColorParameterNameAndCurves_BlueCurve_Offset = offsetof(FColorParameterNameAndCurves, BlueCurve);
	static_assert(FColorParameterNameAndCurves_BlueCurve_Offset == 0xf0, "FColorParameterNameAndCurves::BlueCurve offset is not f0");
	auto constexpr FColorParameterNameAndCurves_AlphaCurve_Offset = offsetof(FColorParameterNameAndCurves, AlphaCurve);
	static_assert(FColorParameterNameAndCurves_AlphaCurve_Offset == 0x160, "FColorParameterNameAndCurves::AlphaCurve offset is not 160");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
