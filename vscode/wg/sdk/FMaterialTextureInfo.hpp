#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FMaterialTextureInfo // Size: 0x10
{
public:
    float SamplingScale; /* Ofs: 0x0 Size: 0x4 FloatProperty Engine.MaterialTextureInfo.SamplingScale */
    int32_t UVChannelIndex; /* Ofs: 0x4 Size: 0x4 IntProperty Engine.MaterialTextureInfo.UVChannelIndex */
    FName TextureName; /* Ofs: 0x8 Size: 0x8 NameProperty Engine.MaterialTextureInfo.TextureName */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFMaterialTextureInfo = sizeof(FMaterialTextureInfo); // 16
    static_assert(sizeof(FMaterialTextureInfo) == 0x10, "Size of FMaterialTextureInfo is not correct.");
	auto constexpr FMaterialTextureInfo_SamplingScale_Offset = offsetof(FMaterialTextureInfo, SamplingScale);
	static_assert(FMaterialTextureInfo_SamplingScale_Offset == 0x0, "FMaterialTextureInfo::SamplingScale offset is not 0");
	auto constexpr FMaterialTextureInfo_UVChannelIndex_Offset = offsetof(FMaterialTextureInfo, UVChannelIndex);
	static_assert(FMaterialTextureInfo_UVChannelIndex_Offset == 0x4, "FMaterialTextureInfo::UVChannelIndex offset is not 4");
	auto constexpr FMaterialTextureInfo_TextureName_Offset = offsetof(FMaterialTextureInfo, TextureName);
	static_assert(FMaterialTextureInfo_TextureName_Offset == 0x8, "FMaterialTextureInfo::TextureName offset is not 8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
