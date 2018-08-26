#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FStreamingTextureBuildInfo // Size: 0xC
{
public:
    uint32_t PackedRelativeBox; /* Ofs: 0x0 Size: 0x4 UInt32Property Engine.StreamingTextureBuildInfo.PackedRelativeBox */
    int32_t TextureLevelIndex; /* Ofs: 0x4 Size: 0x4 IntProperty Engine.StreamingTextureBuildInfo.TextureLevelIndex */
    float TexelFactor; /* Ofs: 0x8 Size: 0x4 FloatProperty Engine.StreamingTextureBuildInfo.TexelFactor */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFStreamingTextureBuildInfo = sizeof(FStreamingTextureBuildInfo); // 12
    static_assert(sizeof(FStreamingTextureBuildInfo) == 0xC, "Size of FStreamingTextureBuildInfo is not correct.");
	auto constexpr FStreamingTextureBuildInfo_PackedRelativeBox_Offset = offsetof(FStreamingTextureBuildInfo, PackedRelativeBox);
	static_assert(FStreamingTextureBuildInfo_PackedRelativeBox_Offset == 0x0, "FStreamingTextureBuildInfo::PackedRelativeBox offset is not 0");
	auto constexpr FStreamingTextureBuildInfo_TextureLevelIndex_Offset = offsetof(FStreamingTextureBuildInfo, TextureLevelIndex);
	static_assert(FStreamingTextureBuildInfo_TextureLevelIndex_Offset == 0x4, "FStreamingTextureBuildInfo::TextureLevelIndex offset is not 4");
	auto constexpr FStreamingTextureBuildInfo_TexelFactor_Offset = offsetof(FStreamingTextureBuildInfo, TexelFactor);
	static_assert(FStreamingTextureBuildInfo_TexelFactor_Offset == 0x8, "FStreamingTextureBuildInfo::TexelFactor offset is not 8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
