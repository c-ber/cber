#pragma once
#include "FSequence_Vector.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FUiEffectAnimation_VectorCurve // Size: 0xB0
{
public:
    FSequence_Vector VectorCurve; /* Ofs: 0x0 Size: 0xA0 StructProperty TslGame.UiEffectAnimation_VectorCurve.VectorCurve */
    TArray<struct FName> ParamNames; /* Ofs: 0xA0 Size: 0x10 ArrayProperty TslGame.UiEffectAnimation_VectorCurve.ParamNames */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFUiEffectAnimation_VectorCurve = sizeof(FUiEffectAnimation_VectorCurve); // 176
    static_assert(sizeof(FUiEffectAnimation_VectorCurve) == 0xB0, "Size of FUiEffectAnimation_VectorCurve is not correct.");
	auto constexpr FUiEffectAnimation_VectorCurve_VectorCurve_Offset = offsetof(FUiEffectAnimation_VectorCurve, VectorCurve);
	static_assert(FUiEffectAnimation_VectorCurve_VectorCurve_Offset == 0x0, "FUiEffectAnimation_VectorCurve::VectorCurve offset is not 0");
	auto constexpr FUiEffectAnimation_VectorCurve_ParamNames_Offset = offsetof(FUiEffectAnimation_VectorCurve, ParamNames);
	static_assert(FUiEffectAnimation_VectorCurve_ParamNames_Offset == 0xa0, "FUiEffectAnimation_VectorCurve::ParamNames offset is not a0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
