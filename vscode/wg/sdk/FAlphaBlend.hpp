#pragma once
#include "EAlphaBlendOption.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FAlphaBlend // Size: 0x38
{
public:
    TEnumAsByte<enum EAlphaBlendOption> BlendOption; /* Ofs: 0x0 Size: 0x1 EnumProperty Engine.AlphaBlend.BlendOption */
    uint8_t UnknownData1[0x7];
    ExternalPtr<struct UCurveFloat> CustomCurve; /* Ofs: 0x8 Size: 0x8 ObjectProperty Engine.AlphaBlend.CustomCurve */
    float BlendTime; /* Ofs: 0x10 Size: 0x4 FloatProperty Engine.AlphaBlend.BlendTime */
    uint8_t UnknownData14[0x24];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFAlphaBlend = sizeof(FAlphaBlend); // 56
    static_assert(sizeof(FAlphaBlend) == 0x38, "Size of FAlphaBlend is not correct.");
	auto constexpr FAlphaBlend_BlendOption_Offset = offsetof(FAlphaBlend, BlendOption);
	static_assert(FAlphaBlend_BlendOption_Offset == 0x0, "FAlphaBlend::BlendOption offset is not 0");
	auto constexpr FAlphaBlend_CustomCurve_Offset = offsetof(FAlphaBlend, CustomCurve);
	static_assert(FAlphaBlend_CustomCurve_Offset == 0x8, "FAlphaBlend::CustomCurve offset is not 8");
	auto constexpr FAlphaBlend_BlendTime_Offset = offsetof(FAlphaBlend, BlendTime);
	static_assert(FAlphaBlend_BlendTime_Offset == 0x10, "FAlphaBlend::BlendTime offset is not 10");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
