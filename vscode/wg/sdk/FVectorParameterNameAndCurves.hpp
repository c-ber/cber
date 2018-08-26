#pragma once
#include "FRichCurve.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FVectorParameterNameAndCurves // Size: 0x160
{
public:
    FName ParameterName; /* Ofs: 0x0 Size: 0x8 NameProperty MovieSceneTracks.VectorParameterNameAndCurves.ParameterName */
    int32_t Index; /* Ofs: 0x8 Size: 0x4 IntProperty MovieSceneTracks.VectorParameterNameAndCurves.Index */
    uint8_t UnknownDataC[0x4];
    FRichCurve XCurve; /* Ofs: 0x10 Size: 0x70 StructProperty MovieSceneTracks.VectorParameterNameAndCurves.XCurve */
    FRichCurve YCurve; /* Ofs: 0x80 Size: 0x70 StructProperty MovieSceneTracks.VectorParameterNameAndCurves.YCurve */
    FRichCurve ZCurve; /* Ofs: 0xF0 Size: 0x70 StructProperty MovieSceneTracks.VectorParameterNameAndCurves.ZCurve */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFVectorParameterNameAndCurves = sizeof(FVectorParameterNameAndCurves); // 352
    static_assert(sizeof(FVectorParameterNameAndCurves) == 0x160, "Size of FVectorParameterNameAndCurves is not correct.");
	auto constexpr FVectorParameterNameAndCurves_ParameterName_Offset = offsetof(FVectorParameterNameAndCurves, ParameterName);
	static_assert(FVectorParameterNameAndCurves_ParameterName_Offset == 0x0, "FVectorParameterNameAndCurves::ParameterName offset is not 0");
	auto constexpr FVectorParameterNameAndCurves_Index_Offset = offsetof(FVectorParameterNameAndCurves, Index);
	static_assert(FVectorParameterNameAndCurves_Index_Offset == 0x8, "FVectorParameterNameAndCurves::Index offset is not 8");
	auto constexpr FVectorParameterNameAndCurves_XCurve_Offset = offsetof(FVectorParameterNameAndCurves, XCurve);
	static_assert(FVectorParameterNameAndCurves_XCurve_Offset == 0x10, "FVectorParameterNameAndCurves::XCurve offset is not 10");
	auto constexpr FVectorParameterNameAndCurves_YCurve_Offset = offsetof(FVectorParameterNameAndCurves, YCurve);
	static_assert(FVectorParameterNameAndCurves_YCurve_Offset == 0x80, "FVectorParameterNameAndCurves::YCurve offset is not 80");
	auto constexpr FVectorParameterNameAndCurves_ZCurve_Offset = offsetof(FVectorParameterNameAndCurves, ZCurve);
	static_assert(FVectorParameterNameAndCurves_ZCurve_Offset == 0xf0, "FVectorParameterNameAndCurves::ZCurve offset is not f0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
