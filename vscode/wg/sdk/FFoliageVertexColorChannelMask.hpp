#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FFoliageVertexColorChannelMask // Size: 0xC
{
public:
    bool UseMask; /* Ofs: 0x0 Size: 0x1 BitMask: 01 BoolProperty Foliage.FoliageVertexColorChannelMask.UseMask */
    uint8_t UnknownData1[0x3];
    float MaskThreshold; /* Ofs: 0x4 Size: 0x4 FloatProperty Foliage.FoliageVertexColorChannelMask.MaskThreshold */
    bool InvertMask; /* Ofs: 0x8 Size: 0x1 BitMask: 01 BoolProperty Foliage.FoliageVertexColorChannelMask.InvertMask */
    uint8_t UnknownData9[0x3];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFFoliageVertexColorChannelMask = sizeof(FFoliageVertexColorChannelMask); // 12
    static_assert(sizeof(FFoliageVertexColorChannelMask) == 0xC, "Size of FFoliageVertexColorChannelMask is not correct.");
	auto constexpr FFoliageVertexColorChannelMask_MaskThreshold_Offset = offsetof(FFoliageVertexColorChannelMask, MaskThreshold);
	static_assert(FFoliageVertexColorChannelMask_MaskThreshold_Offset == 0x4, "FFoliageVertexColorChannelMask::MaskThreshold offset is not 4");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
