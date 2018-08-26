#pragma once
#include "FAnimCurveBase.hpp"
#include "FRichCurve.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FFloatCurve // Size: 0x90
 : public FAnimCurveBase // Size: 0x20
{
public:
    FRichCurve FloatCurve; /* Ofs: 0x20 Size: 0x70 StructProperty Engine.FloatCurve.FloatCurve */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFFloatCurve = sizeof(FFloatCurve); // 144
    static_assert(sizeof(FFloatCurve) == 0x90, "Size of FFloatCurve is not correct.");
	auto constexpr FFloatCurve_FloatCurve_Offset = offsetof(FFloatCurve, FloatCurve);
	static_assert(FFloatCurve_FloatCurve_Offset == 0x20, "FFloatCurve::FloatCurve offset is not 20");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
