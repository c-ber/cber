#pragma once
#include "ESpriteCollisionMode.hpp"
#include "ETileMapProjectionMode.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UPaperTileMap // Size: 0xA8
	: public UObject // Size: 0x30
{
private:
	typedef UPaperTileMap t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(2040); // id32("Class Paper2D.PaperTileMap")
		return ptr;
	}
	int32_t MapWidth; /* Ofs: 0x30 Size: 0x4 - IntProperty Paper2D.PaperTileMap.MapWidth */
	int32_t MapHeight; /* Ofs: 0x34 Size: 0x4 - IntProperty Paper2D.PaperTileMap.MapHeight */
	int32_t TileWidth; /* Ofs: 0x38 Size: 0x4 - IntProperty Paper2D.PaperTileMap.TileWidth */
	int32_t TileHeight; /* Ofs: 0x3C Size: 0x4 - IntProperty Paper2D.PaperTileMap.TileHeight */
	float PixelsPerUnrealUnit; /* Ofs: 0x40 Size: 0x4 - FloatProperty Paper2D.PaperTileMap.PixelsPerUnrealUnit */
	float SeparationPerTileX; /* Ofs: 0x44 Size: 0x4 - FloatProperty Paper2D.PaperTileMap.SeparationPerTileX */
	float SeparationPerTileY; /* Ofs: 0x48 Size: 0x4 - FloatProperty Paper2D.PaperTileMap.SeparationPerTileY */
	float SeparationPerLayer; /* Ofs: 0x4C Size: 0x4 - FloatProperty Paper2D.PaperTileMap.SeparationPerLayer */
	TAssetPtr<ExternalPtr<struct UPaperTileSet>> SelectedTileSet; /* Ofs: 0x50 Size: 0x1C - AssetObjectProperty Paper2D.PaperTileMap.SelectedTileSet */
	uint8_t UnknownData6C[0x4];
	ExternalPtr<struct UMaterialInterface> Material; /* Ofs: 0x70 Size: 0x8 - ObjectProperty Paper2D.PaperTileMap.Material */
	TArray<ExternalPtr<struct UPaperTileLayer>> TileLayers; /* Ofs: 0x78 Size: 0x10 - ArrayProperty Paper2D.PaperTileMap.TileLayers */
	float CollisionThickness; /* Ofs: 0x88 Size: 0x4 - FloatProperty Paper2D.PaperTileMap.CollisionThickness */
	TEnumAsByte<enum ESpriteCollisionMode> SpriteCollisionDomain; /* Ofs: 0x8C Size: 0x1 - ByteProperty Paper2D.PaperTileMap.SpriteCollisionDomain */
	TEnumAsByte<enum ETileMapProjectionMode> ProjectionMode; /* Ofs: 0x8D Size: 0x1 - ByteProperty Paper2D.PaperTileMap.ProjectionMode */
	uint8_t UnknownData8E[0x2];
	int32_t HexSideLength; /* Ofs: 0x90 Size: 0x4 - IntProperty Paper2D.PaperTileMap.HexSideLength */
	uint8_t UnknownData94[0x4];
	ExternalPtr<struct UBodySetup> BodySetup; /* Ofs: 0x98 Size: 0x8 - ObjectProperty Paper2D.PaperTileMap.BodySetup */
	int32_t LayerNameIndex; /* Ofs: 0xA0 Size: 0x4 - IntProperty Paper2D.PaperTileMap.LayerNameIndex */
	uint8_t UnknownDataA4[0x4];


	inline bool SetMapWidth(t_structHelper inst, int32_t value) { inst.WriteOffset(0x30, value); }
	inline bool SetMapHeight(t_structHelper inst, int32_t value) { inst.WriteOffset(0x34, value); }
	inline bool SetTileWidth(t_structHelper inst, int32_t value) { inst.WriteOffset(0x38, value); }
	inline bool SetTileHeight(t_structHelper inst, int32_t value) { inst.WriteOffset(0x3C, value); }
	inline bool SetPixelsPerUnrealUnit(t_structHelper inst, float value) { inst.WriteOffset(0x40, value); }
	inline bool SetSeparationPerTileX(t_structHelper inst, float value) { inst.WriteOffset(0x44, value); }
	inline bool SetSeparationPerTileY(t_structHelper inst, float value) { inst.WriteOffset(0x48, value); }
	inline bool SetSeparationPerLayer(t_structHelper inst, float value) { inst.WriteOffset(0x4C, value); }
	inline bool SetSelectedTileSet(t_structHelper inst, TAssetPtr<ExternalPtr<struct UPaperTileSet>> value) { inst.WriteOffset(0x50, value); }
	inline bool SetMaterial(t_structHelper inst, ExternalPtr<struct UMaterialInterface> value) { inst.WriteOffset(0x70, value); }
	inline bool SetTileLayers(t_structHelper inst, TArray<ExternalPtr<struct UPaperTileLayer>> value) { inst.WriteOffset(0x78, value); }
	inline bool SetCollisionThickness(t_structHelper inst, float value) { inst.WriteOffset(0x88, value); }
	inline bool SetSpriteCollisionDomain(t_structHelper inst, TEnumAsByte<enum ESpriteCollisionMode> value) { inst.WriteOffset(0x8C, value); }
	inline bool SetProjectionMode(t_structHelper inst, TEnumAsByte<enum ETileMapProjectionMode> value) { inst.WriteOffset(0x8D, value); }
	inline bool SetHexSideLength(t_structHelper inst, int32_t value) { inst.WriteOffset(0x90, value); }
	inline bool SetBodySetup(t_structHelper inst, ExternalPtr<struct UBodySetup> value) { inst.WriteOffset(0x98, value); }
	inline bool SetLayerNameIndex(t_structHelper inst, int32_t value) { inst.WriteOffset(0xA0, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUPaperTileMap = sizeof(UPaperTileMap); // 168
    static_assert(sizeof(UPaperTileMap) == 0xA8, "Size of UPaperTileMap is not correct.");
	auto constexpr UPaperTileMap_MapWidth_Offset = offsetof(UPaperTileMap, MapWidth);
	static_assert(UPaperTileMap_MapWidth_Offset == 0x30, "UPaperTileMap::MapWidth offset is not 30");
	auto constexpr UPaperTileMap_MapHeight_Offset = offsetof(UPaperTileMap, MapHeight);
	static_assert(UPaperTileMap_MapHeight_Offset == 0x34, "UPaperTileMap::MapHeight offset is not 34");
	auto constexpr UPaperTileMap_TileWidth_Offset = offsetof(UPaperTileMap, TileWidth);
	static_assert(UPaperTileMap_TileWidth_Offset == 0x38, "UPaperTileMap::TileWidth offset is not 38");
	auto constexpr UPaperTileMap_TileHeight_Offset = offsetof(UPaperTileMap, TileHeight);
	static_assert(UPaperTileMap_TileHeight_Offset == 0x3c, "UPaperTileMap::TileHeight offset is not 3c");
	auto constexpr UPaperTileMap_PixelsPerUnrealUnit_Offset = offsetof(UPaperTileMap, PixelsPerUnrealUnit);
	static_assert(UPaperTileMap_PixelsPerUnrealUnit_Offset == 0x40, "UPaperTileMap::PixelsPerUnrealUnit offset is not 40");
	auto constexpr UPaperTileMap_SeparationPerTileX_Offset = offsetof(UPaperTileMap, SeparationPerTileX);
	static_assert(UPaperTileMap_SeparationPerTileX_Offset == 0x44, "UPaperTileMap::SeparationPerTileX offset is not 44");
	auto constexpr UPaperTileMap_SeparationPerTileY_Offset = offsetof(UPaperTileMap, SeparationPerTileY);
	static_assert(UPaperTileMap_SeparationPerTileY_Offset == 0x48, "UPaperTileMap::SeparationPerTileY offset is not 48");
	auto constexpr UPaperTileMap_SeparationPerLayer_Offset = offsetof(UPaperTileMap, SeparationPerLayer);
	static_assert(UPaperTileMap_SeparationPerLayer_Offset == 0x4c, "UPaperTileMap::SeparationPerLayer offset is not 4c");
	auto constexpr UPaperTileMap_SelectedTileSet_Offset = offsetof(UPaperTileMap, SelectedTileSet);
	static_assert(UPaperTileMap_SelectedTileSet_Offset == 0x50, "UPaperTileMap::SelectedTileSet offset is not 50");
	auto constexpr UPaperTileMap_Material_Offset = offsetof(UPaperTileMap, Material);
	static_assert(UPaperTileMap_Material_Offset == 0x70, "UPaperTileMap::Material offset is not 70");
	auto constexpr UPaperTileMap_TileLayers_Offset = offsetof(UPaperTileMap, TileLayers);
	static_assert(UPaperTileMap_TileLayers_Offset == 0x78, "UPaperTileMap::TileLayers offset is not 78");
	auto constexpr UPaperTileMap_CollisionThickness_Offset = offsetof(UPaperTileMap, CollisionThickness);
	static_assert(UPaperTileMap_CollisionThickness_Offset == 0x88, "UPaperTileMap::CollisionThickness offset is not 88");
	auto constexpr UPaperTileMap_SpriteCollisionDomain_Offset = offsetof(UPaperTileMap, SpriteCollisionDomain);
	static_assert(UPaperTileMap_SpriteCollisionDomain_Offset == 0x8c, "UPaperTileMap::SpriteCollisionDomain offset is not 8c");
	auto constexpr UPaperTileMap_ProjectionMode_Offset = offsetof(UPaperTileMap, ProjectionMode);
	static_assert(UPaperTileMap_ProjectionMode_Offset == 0x8d, "UPaperTileMap::ProjectionMode offset is not 8d");
	auto constexpr UPaperTileMap_HexSideLength_Offset = offsetof(UPaperTileMap, HexSideLength);
	static_assert(UPaperTileMap_HexSideLength_Offset == 0x90, "UPaperTileMap::HexSideLength offset is not 90");
	auto constexpr UPaperTileMap_BodySetup_Offset = offsetof(UPaperTileMap, BodySetup);
	static_assert(UPaperTileMap_BodySetup_Offset == 0x98, "UPaperTileMap::BodySetup offset is not 98");
	auto constexpr UPaperTileMap_LayerNameIndex_Offset = offsetof(UPaperTileMap, LayerNameIndex);
	static_assert(UPaperTileMap_LayerNameIndex_Offset == 0xa0, "UPaperTileMap::LayerNameIndex offset is not a0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
