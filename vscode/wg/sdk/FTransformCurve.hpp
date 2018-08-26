#pragma once
#include "FAnimCurveBase.hpp"
#include "FVectorCurve.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FTransformCurve // Size: 0x470
 : public FAnimCurveBase // Size: 0x20
{
public:
    FVectorCurve TranslationCurve; /* Ofs: 0x20 Size: 0x170 StructProperty Engine.TransformCurve.TranslationCurve */
    FVectorCurve RotationCurve; /* Ofs: 0x190 Size: 0x170 StructProperty Engine.TransformCurve.RotationCurve */
    FVectorCurve ScaleCurve; /* Ofs: 0x300 Size: 0x170 StructProperty Engine.TransformCurve.ScaleCurve */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFTransformCurve = sizeof(FTransformCurve); // 1136
    static_assert(sizeof(FTransformCurve) == 0x470, "Size of FTransformCurve is not correct.");
	auto constexpr FTransformCurve_TranslationCurve_Offset = offsetof(FTransformCurve, TranslationCurve);
	static_assert(FTransformCurve_TranslationCurve_Offset == 0x20, "FTransformCurve::TranslationCurve offset is not 20");
	auto constexpr FTransformCurve_RotationCurve_Offset = offsetof(FTransformCurve, RotationCurve);
	static_assert(FTransformCurve_RotationCurve_Offset == 0x190, "FTransformCurve::RotationCurve offset is not 190");
	auto constexpr FTransformCurve_ScaleCurve_Offset = offsetof(FTransformCurve, ScaleCurve);
	static_assert(FTransformCurve_ScaleCurve_Offset == 0x300, "FTransformCurve::ScaleCurve offset is not 300");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
