#pragma once
#include "FBoxSphereBounds.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FStreamingTexturePrimitiveInfo // Size: 0x30
{
public:
    ExternalPtr<struct UTexture2D> Texture; /* Ofs: 0x0 Size: 0x8 ObjectProperty Engine.StreamingTexturePrimitiveInfo.Texture */
    FBoxSphereBounds Bounds; /* Ofs: 0x8 Size: 0x1C StructProperty Engine.StreamingTexturePrimitiveInfo.Bounds */
    float TexelFactor; /* Ofs: 0x24 Size: 0x4 FloatProperty Engine.StreamingTexturePrimitiveInfo.TexelFactor */
    uint32_t PackedRelativeBox; /* Ofs: 0x28 Size: 0x4 UInt32Property Engine.StreamingTexturePrimitiveInfo.PackedRelativeBox */
    uint8_t UnknownData2C[0x4];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFStreamingTexturePrimitiveInfo = sizeof(FStreamingTexturePrimitiveInfo); // 48
    static_assert(sizeof(FStreamingTexturePrimitiveInfo) == 0x30, "Size of FStreamingTexturePrimitiveInfo is not correct.");
	auto constexpr FStreamingTexturePrimitiveInfo_Texture_Offset = offsetof(FStreamingTexturePrimitiveInfo, Texture);
	static_assert(FStreamingTexturePrimitiveInfo_Texture_Offset == 0x0, "FStreamingTexturePrimitiveInfo::Texture offset is not 0");
	auto constexpr FStreamingTexturePrimitiveInfo_Bounds_Offset = offsetof(FStreamingTexturePrimitiveInfo, Bounds);
	static_assert(FStreamingTexturePrimitiveInfo_Bounds_Offset == 0x8, "FStreamingTexturePrimitiveInfo::Bounds offset is not 8");
	auto constexpr FStreamingTexturePrimitiveInfo_TexelFactor_Offset = offsetof(FStreamingTexturePrimitiveInfo, TexelFactor);
	static_assert(FStreamingTexturePrimitiveInfo_TexelFactor_Offset == 0x24, "FStreamingTexturePrimitiveInfo::TexelFactor offset is not 24");
	auto constexpr FStreamingTexturePrimitiveInfo_PackedRelativeBox_Offset = offsetof(FStreamingTexturePrimitiveInfo, PackedRelativeBox);
	static_assert(FStreamingTexturePrimitiveInfo_PackedRelativeBox_Offset == 0x28, "FStreamingTexturePrimitiveInfo::PackedRelativeBox offset is not 28");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
