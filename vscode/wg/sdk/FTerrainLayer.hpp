#pragma once
#include "FExpressionInput.hpp"
#include "ETextureChannel.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FTerrainLayer // Size: 0xF8
{
public:
    FString LayerName; /* Ofs: 0x0 Size: 0x10 StrProperty Engine.TerrainLayer.LayerName */
    FExpressionInput Weight; /* Ofs: 0x10 Size: 0x38 StructProperty Engine.TerrainLayer.Weight */
    FExpressionInput UV; /* Ofs: 0x48 Size: 0x38 StructProperty Engine.TerrainLayer.UV */
    FExpressionInput DiffuseTexture; /* Ofs: 0x80 Size: 0x38 StructProperty Engine.TerrainLayer.DiffuseTexture */
    FExpressionInput NormalTexture; /* Ofs: 0xB8 Size: 0x38 StructProperty Engine.TerrainLayer.NormalTexture */
    TEnumAsByte<enum ETextureChannel> RoughnessTextureChannel; /* Ofs: 0xF0 Size: 0x1 EnumProperty Engine.TerrainLayer.RoughnessTextureChannel */
    uint8_t UnknownDataF1[0x7];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFTerrainLayer = sizeof(FTerrainLayer); // 248
    static_assert(sizeof(FTerrainLayer) == 0xF8, "Size of FTerrainLayer is not correct.");
	auto constexpr FTerrainLayer_LayerName_Offset = offsetof(FTerrainLayer, LayerName);
	static_assert(FTerrainLayer_LayerName_Offset == 0x0, "FTerrainLayer::LayerName offset is not 0");
	auto constexpr FTerrainLayer_Weight_Offset = offsetof(FTerrainLayer, Weight);
	static_assert(FTerrainLayer_Weight_Offset == 0x10, "FTerrainLayer::Weight offset is not 10");
	auto constexpr FTerrainLayer_UV_Offset = offsetof(FTerrainLayer, UV);
	static_assert(FTerrainLayer_UV_Offset == 0x48, "FTerrainLayer::UV offset is not 48");
	auto constexpr FTerrainLayer_DiffuseTexture_Offset = offsetof(FTerrainLayer, DiffuseTexture);
	static_assert(FTerrainLayer_DiffuseTexture_Offset == 0x80, "FTerrainLayer::DiffuseTexture offset is not 80");
	auto constexpr FTerrainLayer_NormalTexture_Offset = offsetof(FTerrainLayer, NormalTexture);
	static_assert(FTerrainLayer_NormalTexture_Offset == 0xb8, "FTerrainLayer::NormalTexture offset is not b8");
	auto constexpr FTerrainLayer_RoughnessTextureChannel_Offset = offsetof(FTerrainLayer, RoughnessTextureChannel);
	static_assert(FTerrainLayer_RoughnessTextureChannel_Offset == 0xf0, "FTerrainLayer::RoughnessTextureChannel offset is not f0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
