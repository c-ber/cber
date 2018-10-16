#pragma once
#include "FRichCurve.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FScalarParameterNameAndCurve // Size: 0x80
{
public:
    FName ParameterName; /* Ofs: 0x0 Size: 0x8 NameProperty MovieSceneTracks.ScalarParameterNameAndCurve.ParameterName */
    int32_t Index; /* Ofs: 0x8 Size: 0x4 IntProperty MovieSceneTracks.ScalarParameterNameAndCurve.Index */
    uint8_t UnknownDataC[0x4];
    FRichCurve ParameterCurve; /* Ofs: 0x10 Size: 0x70 StructProperty MovieSceneTracks.ScalarParameterNameAndCurve.ParameterCurve */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFScalarParameterNameAndCurve = sizeof(FScalarParameterNameAndCurve); // 128
    static_assert(sizeof(FScalarParameterNameAndCurve) == 0x80, "Size of FScalarParameterNameAndCurve is not correct.");
	auto constexpr FScalarParameterNameAndCurve_ParameterName_Offset = offsetof(FScalarParameterNameAndCurve, ParameterName);
	static_assert(FScalarParameterNameAndCurve_ParameterName_Offset == 0x0, "FScalarParameterNameAndCurve::ParameterName offset is not 0");
	auto constexpr FScalarParameterNameAndCurve_Index_Offset = offsetof(FScalarParameterNameAndCurve, Index);
	static_assert(FScalarParameterNameAndCurve_Index_Offset == 0x8, "FScalarParameterNameAndCurve::Index offset is not 8");
	auto constexpr FScalarParameterNameAndCurve_ParameterCurve_Offset = offsetof(FScalarParameterNameAndCurve, ParameterCurve);
	static_assert(FScalarParameterNameAndCurve_ParameterCurve_Offset == 0x10, "FScalarParameterNameAndCurve::ParameterCurve offset is not 10");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
