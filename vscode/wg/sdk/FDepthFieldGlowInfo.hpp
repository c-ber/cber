#pragma once
#include "FLinearColor.hpp"
#include "FVector2D.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FDepthFieldGlowInfo // Size: 0x24
{
public:
    bool bEnableGlow; /* Ofs: 0x0 Size: 0x1 BitMask: 01 BoolProperty Engine.DepthFieldGlowInfo.bEnableGlow */
    uint8_t UnknownData1[0x3];
    FLinearColor GlowColor; /* Ofs: 0x4 Size: 0x10 StructProperty Engine.DepthFieldGlowInfo.GlowColor */
    FVector2D GlowOuterRadius; /* Ofs: 0x14 Size: 0x8 StructProperty Engine.DepthFieldGlowInfo.GlowOuterRadius */
    FVector2D GlowInnerRadius; /* Ofs: 0x1C Size: 0x8 StructProperty Engine.DepthFieldGlowInfo.GlowInnerRadius */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFDepthFieldGlowInfo = sizeof(FDepthFieldGlowInfo); // 36
    static_assert(sizeof(FDepthFieldGlowInfo) == 0x24, "Size of FDepthFieldGlowInfo is not correct.");
	auto constexpr FDepthFieldGlowInfo_GlowColor_Offset = offsetof(FDepthFieldGlowInfo, GlowColor);
	static_assert(FDepthFieldGlowInfo_GlowColor_Offset == 0x4, "FDepthFieldGlowInfo::GlowColor offset is not 4");
	auto constexpr FDepthFieldGlowInfo_GlowOuterRadius_Offset = offsetof(FDepthFieldGlowInfo, GlowOuterRadius);
	static_assert(FDepthFieldGlowInfo_GlowOuterRadius_Offset == 0x14, "FDepthFieldGlowInfo::GlowOuterRadius offset is not 14");
	auto constexpr FDepthFieldGlowInfo_GlowInnerRadius_Offset = offsetof(FDepthFieldGlowInfo, GlowInnerRadius);
	static_assert(FDepthFieldGlowInfo_GlowInnerRadius_Offset == 0x1c, "FDepthFieldGlowInfo::GlowInnerRadius offset is not 1c");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
