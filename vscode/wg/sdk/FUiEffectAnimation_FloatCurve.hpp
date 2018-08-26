#pragma once
#include "FSequence_Float.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FUiEffectAnimation_FloatCurve // Size: 0xB0
{
public:
    FSequence_Float FloatCurve; /* Ofs: 0x0 Size: 0xA0 StructProperty TslGame.UiEffectAnimation_FloatCurve.FloatCurve */
    TArray<struct FName> ParamNames; /* Ofs: 0xA0 Size: 0x10 ArrayProperty TslGame.UiEffectAnimation_FloatCurve.ParamNames */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFUiEffectAnimation_FloatCurve = sizeof(FUiEffectAnimation_FloatCurve); // 176
    static_assert(sizeof(FUiEffectAnimation_FloatCurve) == 0xB0, "Size of FUiEffectAnimation_FloatCurve is not correct.");
	auto constexpr FUiEffectAnimation_FloatCurve_FloatCurve_Offset = offsetof(FUiEffectAnimation_FloatCurve, FloatCurve);
	static_assert(FUiEffectAnimation_FloatCurve_FloatCurve_Offset == 0x0, "FUiEffectAnimation_FloatCurve::FloatCurve offset is not 0");
	auto constexpr FUiEffectAnimation_FloatCurve_ParamNames_Offset = offsetof(FUiEffectAnimation_FloatCurve, ParamNames);
	static_assert(FUiEffectAnimation_FloatCurve_ParamNames_Offset == 0xa0, "FUiEffectAnimation_FloatCurve::ParamNames offset is not a0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
