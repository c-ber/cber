#pragma once
#include "FDepthFieldGlowInfo.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FFontRenderInfo // Size: 0x28
{
public:
    bool bClipText : 1; /* Ofs: 0x0 Size: 0x1 BitMask: 01 BoolProperty Engine.FontRenderInfo.bClipText */
    bool bEnableShadow : 1; /* Ofs: 0x0 Size: 0x1 BitMask: 02 BoolProperty Engine.FontRenderInfo.bEnableShadow */
    uint8_t UnknownData1[0x3];
    FDepthFieldGlowInfo GlowInfo; /* Ofs: 0x4 Size: 0x24 StructProperty Engine.FontRenderInfo.GlowInfo */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFFontRenderInfo = sizeof(FFontRenderInfo); // 40
    static_assert(sizeof(FFontRenderInfo) == 0x28, "Size of FFontRenderInfo is not correct.");
	auto constexpr FFontRenderInfo_GlowInfo_Offset = offsetof(FFontRenderInfo, GlowInfo);
	static_assert(FFontRenderInfo_GlowInfo_Offset == 0x4, "FFontRenderInfo::GlowInfo offset is not 4");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
