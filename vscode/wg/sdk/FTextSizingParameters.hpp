#pragma once
#include "FVector2D.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FTextSizingParameters // Size: 0x28
{
public:
    float DrawX; /* Ofs: 0x0 Size: 0x4 FloatProperty Engine.TextSizingParameters.DrawX */
    float DrawY; /* Ofs: 0x4 Size: 0x4 FloatProperty Engine.TextSizingParameters.DrawY */
    float DrawXL; /* Ofs: 0x8 Size: 0x4 FloatProperty Engine.TextSizingParameters.DrawXL */
    float DrawYL; /* Ofs: 0xC Size: 0x4 FloatProperty Engine.TextSizingParameters.DrawYL */
    FVector2D Scaling; /* Ofs: 0x10 Size: 0x8 StructProperty Engine.TextSizingParameters.Scaling */
    ExternalPtr<struct UFont> DrawFont; /* Ofs: 0x18 Size: 0x8 ObjectProperty Engine.TextSizingParameters.DrawFont */
    FVector2D SpacingAdjust; /* Ofs: 0x20 Size: 0x8 StructProperty Engine.TextSizingParameters.SpacingAdjust */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFTextSizingParameters = sizeof(FTextSizingParameters); // 40
    static_assert(sizeof(FTextSizingParameters) == 0x28, "Size of FTextSizingParameters is not correct.");
	auto constexpr FTextSizingParameters_DrawX_Offset = offsetof(FTextSizingParameters, DrawX);
	static_assert(FTextSizingParameters_DrawX_Offset == 0x0, "FTextSizingParameters::DrawX offset is not 0");
	auto constexpr FTextSizingParameters_DrawY_Offset = offsetof(FTextSizingParameters, DrawY);
	static_assert(FTextSizingParameters_DrawY_Offset == 0x4, "FTextSizingParameters::DrawY offset is not 4");
	auto constexpr FTextSizingParameters_DrawXL_Offset = offsetof(FTextSizingParameters, DrawXL);
	static_assert(FTextSizingParameters_DrawXL_Offset == 0x8, "FTextSizingParameters::DrawXL offset is not 8");
	auto constexpr FTextSizingParameters_DrawYL_Offset = offsetof(FTextSizingParameters, DrawYL);
	static_assert(FTextSizingParameters_DrawYL_Offset == 0xc, "FTextSizingParameters::DrawYL offset is not c");
	auto constexpr FTextSizingParameters_Scaling_Offset = offsetof(FTextSizingParameters, Scaling);
	static_assert(FTextSizingParameters_Scaling_Offset == 0x10, "FTextSizingParameters::Scaling offset is not 10");
	auto constexpr FTextSizingParameters_DrawFont_Offset = offsetof(FTextSizingParameters, DrawFont);
	static_assert(FTextSizingParameters_DrawFont_Offset == 0x18, "FTextSizingParameters::DrawFont offset is not 18");
	auto constexpr FTextSizingParameters_SpacingAdjust_Offset = offsetof(FTextSizingParameters, SpacingAdjust);
	static_assert(FTextSizingParameters_SpacingAdjust_Offset == 0x20, "FTextSizingParameters::SpacingAdjust offset is not 20");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
