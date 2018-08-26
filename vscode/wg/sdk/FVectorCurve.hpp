#pragma once
#include "FAnimCurveBase.hpp"
#include "FRichCurve.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FVectorCurve // Size: 0x170
 : public FAnimCurveBase // Size: 0x20
{
public:
    FRichCurve FloatCurves[3]; /* Ofs: 0x20 Size: 0x70 StructProperty Engine.VectorCurve.FloatCurves */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFVectorCurve = sizeof(FVectorCurve); // 368
    static_assert(sizeof(FVectorCurve) == 0x170, "Size of FVectorCurve is not correct.");
	auto constexpr FVectorCurve_FloatCurves_Offset = offsetof(FVectorCurve, FloatCurves);
	static_assert(FVectorCurve_FloatCurves_Offset == 0x20, "FVectorCurve::FloatCurves offset is not 20");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
