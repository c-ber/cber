#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FCoherentUIGTViewInfo // Size: 0x14
{
public:
    int32_t Width; /* Ofs: 0x0 Size: 0x4 IntProperty CoherentUIGTPlugin.CoherentUIGTViewInfo.Width */
    int32_t Height; /* Ofs: 0x4 Size: 0x4 IntProperty CoherentUIGTPlugin.CoherentUIGTViewInfo.Height */
    bool IsTransparent; /* Ofs: 0x8 Size: 0x1 BitMask: 01 BoolProperty CoherentUIGTPlugin.CoherentUIGTViewInfo.IsTransparent */
    uint8_t UnknownData9[0x3];
    float ClickThroughAlphaThreshold; /* Ofs: 0xC Size: 0x4 FloatProperty CoherentUIGTPlugin.CoherentUIGTViewInfo.ClickThroughAlphaThreshold */
    float AnimationFrameDefer; /* Ofs: 0x10 Size: 0x4 FloatProperty CoherentUIGTPlugin.CoherentUIGTViewInfo.AnimationFrameDefer */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFCoherentUIGTViewInfo = sizeof(FCoherentUIGTViewInfo); // 20
    static_assert(sizeof(FCoherentUIGTViewInfo) == 0x14, "Size of FCoherentUIGTViewInfo is not correct.");
	auto constexpr FCoherentUIGTViewInfo_Width_Offset = offsetof(FCoherentUIGTViewInfo, Width);
	static_assert(FCoherentUIGTViewInfo_Width_Offset == 0x0, "FCoherentUIGTViewInfo::Width offset is not 0");
	auto constexpr FCoherentUIGTViewInfo_Height_Offset = offsetof(FCoherentUIGTViewInfo, Height);
	static_assert(FCoherentUIGTViewInfo_Height_Offset == 0x4, "FCoherentUIGTViewInfo::Height offset is not 4");
	auto constexpr FCoherentUIGTViewInfo_ClickThroughAlphaThreshold_Offset = offsetof(FCoherentUIGTViewInfo, ClickThroughAlphaThreshold);
	static_assert(FCoherentUIGTViewInfo_ClickThroughAlphaThreshold_Offset == 0xc, "FCoherentUIGTViewInfo::ClickThroughAlphaThreshold offset is not c");
	auto constexpr FCoherentUIGTViewInfo_AnimationFrameDefer_Offset = offsetof(FCoherentUIGTViewInfo, AnimationFrameDefer);
	static_assert(FCoherentUIGTViewInfo_AnimationFrameDefer_Offset == 0x10, "FCoherentUIGTViewInfo::AnimationFrameDefer offset is not 10");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
