#pragma once
#include "FExpressionInput.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FTerrainLayerDesert // Size: 0x128
{
public:
    FString LayerName; /* Ofs: 0x0 Size: 0x10 StrProperty Engine.TerrainLayerDesert.LayerName */
    FExpressionInput Weight; /* Ofs: 0x10 Size: 0x38 StructProperty Engine.TerrainLayerDesert.Weight */
    FExpressionInput UV; /* Ofs: 0x48 Size: 0x38 StructProperty Engine.TerrainLayerDesert.UV */
    FExpressionInput DiffuseTexture; /* Ofs: 0x80 Size: 0x38 StructProperty Engine.TerrainLayerDesert.DiffuseTexture */
    FExpressionInput NormalTexture; /* Ofs: 0xB8 Size: 0x38 StructProperty Engine.TerrainLayerDesert.NormalTexture */
    FExpressionInput Specular; /* Ofs: 0xF0 Size: 0x38 StructProperty Engine.TerrainLayerDesert.Specular */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFTerrainLayerDesert = sizeof(FTerrainLayerDesert); // 296
    static_assert(sizeof(FTerrainLayerDesert) == 0x128, "Size of FTerrainLayerDesert is not correct.");
	auto constexpr FTerrainLayerDesert_LayerName_Offset = offsetof(FTerrainLayerDesert, LayerName);
	static_assert(FTerrainLayerDesert_LayerName_Offset == 0x0, "FTerrainLayerDesert::LayerName offset is not 0");
	auto constexpr FTerrainLayerDesert_Weight_Offset = offsetof(FTerrainLayerDesert, Weight);
	static_assert(FTerrainLayerDesert_Weight_Offset == 0x10, "FTerrainLayerDesert::Weight offset is not 10");
	auto constexpr FTerrainLayerDesert_UV_Offset = offsetof(FTerrainLayerDesert, UV);
	static_assert(FTerrainLayerDesert_UV_Offset == 0x48, "FTerrainLayerDesert::UV offset is not 48");
	auto constexpr FTerrainLayerDesert_DiffuseTexture_Offset = offsetof(FTerrainLayerDesert, DiffuseTexture);
	static_assert(FTerrainLayerDesert_DiffuseTexture_Offset == 0x80, "FTerrainLayerDesert::DiffuseTexture offset is not 80");
	auto constexpr FTerrainLayerDesert_NormalTexture_Offset = offsetof(FTerrainLayerDesert, NormalTexture);
	static_assert(FTerrainLayerDesert_NormalTexture_Offset == 0xb8, "FTerrainLayerDesert::NormalTexture offset is not b8");
	auto constexpr FTerrainLayerDesert_Specular_Offset = offsetof(FTerrainLayerDesert, Specular);
	static_assert(FTerrainLayerDesert_Specular_Offset == 0xf0, "FTerrainLayerDesert::Specular offset is not f0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
