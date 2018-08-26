#pragma once
#include "UMeshComponent.hpp"
#include "FLinearColor.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UPaperTileMapComponent // Size: 0xA40
	: public UMeshComponent // Size: 0x9F0
{
private:
	typedef UPaperTileMapComponent t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(2042); // id32("Class Paper2D.PaperTileMapComponent")
		return ptr;
	}
	int32_t MapWidth; /* Ofs: 0x9F0 Size: 0x4 - IntProperty Paper2D.PaperTileMapComponent.MapWidth */
	int32_t MapHeight; /* Ofs: 0x9F4 Size: 0x4 - IntProperty Paper2D.PaperTileMapComponent.MapHeight */
	int32_t TileWidth; /* Ofs: 0x9F8 Size: 0x4 - IntProperty Paper2D.PaperTileMapComponent.TileWidth */
	int32_t TileHeight; /* Ofs: 0x9FC Size: 0x4 - IntProperty Paper2D.PaperTileMapComponent.TileHeight */
	ExternalPtr<struct UPaperTileSet> DefaultLayerTileSet; /* Ofs: 0xA00 Size: 0x8 - ObjectProperty Paper2D.PaperTileMapComponent.DefaultLayerTileSet */
	ExternalPtr<struct UMaterialInterface> Material; /* Ofs: 0xA08 Size: 0x8 - ObjectProperty Paper2D.PaperTileMapComponent.Material */
	TArray<ExternalPtr<struct UPaperTileLayer>> TileLayers; /* Ofs: 0xA10 Size: 0x10 - ArrayProperty Paper2D.PaperTileMapComponent.TileLayers */
	FLinearColor TileMapColor; /* Ofs: 0xA20 Size: 0x10 - StructProperty Paper2D.PaperTileMapComponent.TileMapColor */
	int32_t UseSingleLayerIndex; /* Ofs: 0xA30 Size: 0x4 - IntProperty Paper2D.PaperTileMapComponent.UseSingleLayerIndex */
	uint8_t boolFieldA34;
	uint8_t UnknownDataA35[0x3];
	ExternalPtr<struct UPaperTileMap> TileMap; /* Ofs: 0xA38 Size: 0x8 - ObjectProperty Paper2D.PaperTileMapComponent.TileMap */


	inline bool SetMapWidth(t_structHelper inst, int32_t value) { inst.WriteOffset(0x9F0, value); }
	inline bool SetMapHeight(t_structHelper inst, int32_t value) { inst.WriteOffset(0x9F4, value); }
	inline bool SetTileWidth(t_structHelper inst, int32_t value) { inst.WriteOffset(0x9F8, value); }
	inline bool SetTileHeight(t_structHelper inst, int32_t value) { inst.WriteOffset(0x9FC, value); }
	inline bool SetDefaultLayerTileSet(t_structHelper inst, ExternalPtr<struct UPaperTileSet> value) { inst.WriteOffset(0xA00, value); }
	inline bool SetMaterial(t_structHelper inst, ExternalPtr<struct UMaterialInterface> value) { inst.WriteOffset(0xA08, value); }
	inline bool SetTileLayers(t_structHelper inst, TArray<ExternalPtr<struct UPaperTileLayer>> value) { inst.WriteOffset(0xA10, value); }
	inline bool SetTileMapColor(t_structHelper inst, FLinearColor value) { inst.WriteOffset(0xA20, value); }
	inline bool SetUseSingleLayerIndex(t_structHelper inst, int32_t value) { inst.WriteOffset(0xA30, value); }
	inline bool bUseSingleLayer()
	{
		return boolFieldA34& 0x1;
	}
	inline bool SetbUseSingleLayer(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xA34, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetTileMap(t_structHelper inst, ExternalPtr<struct UPaperTileMap> value) { inst.WriteOffset(0xA38, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUPaperTileMapComponent = sizeof(UPaperTileMapComponent); // 2624
    static_assert(sizeof(UPaperTileMapComponent) == 0xA40, "Size of UPaperTileMapComponent is not correct.");
	auto constexpr UPaperTileMapComponent_MapWidth_Offset = offsetof(UPaperTileMapComponent, MapWidth);
	static_assert(UPaperTileMapComponent_MapWidth_Offset == 0x9f0, "UPaperTileMapComponent::MapWidth offset is not 9f0");
	auto constexpr UPaperTileMapComponent_MapHeight_Offset = offsetof(UPaperTileMapComponent, MapHeight);
	static_assert(UPaperTileMapComponent_MapHeight_Offset == 0x9f4, "UPaperTileMapComponent::MapHeight offset is not 9f4");
	auto constexpr UPaperTileMapComponent_TileWidth_Offset = offsetof(UPaperTileMapComponent, TileWidth);
	static_assert(UPaperTileMapComponent_TileWidth_Offset == 0x9f8, "UPaperTileMapComponent::TileWidth offset is not 9f8");
	auto constexpr UPaperTileMapComponent_TileHeight_Offset = offsetof(UPaperTileMapComponent, TileHeight);
	static_assert(UPaperTileMapComponent_TileHeight_Offset == 0x9fc, "UPaperTileMapComponent::TileHeight offset is not 9fc");
	auto constexpr UPaperTileMapComponent_DefaultLayerTileSet_Offset = offsetof(UPaperTileMapComponent, DefaultLayerTileSet);
	static_assert(UPaperTileMapComponent_DefaultLayerTileSet_Offset == 0xa00, "UPaperTileMapComponent::DefaultLayerTileSet offset is not a00");
	auto constexpr UPaperTileMapComponent_Material_Offset = offsetof(UPaperTileMapComponent, Material);
	static_assert(UPaperTileMapComponent_Material_Offset == 0xa08, "UPaperTileMapComponent::Material offset is not a08");
	auto constexpr UPaperTileMapComponent_TileLayers_Offset = offsetof(UPaperTileMapComponent, TileLayers);
	static_assert(UPaperTileMapComponent_TileLayers_Offset == 0xa10, "UPaperTileMapComponent::TileLayers offset is not a10");
	auto constexpr UPaperTileMapComponent_TileMapColor_Offset = offsetof(UPaperTileMapComponent, TileMapColor);
	static_assert(UPaperTileMapComponent_TileMapColor_Offset == 0xa20, "UPaperTileMapComponent::TileMapColor offset is not a20");
	auto constexpr UPaperTileMapComponent_UseSingleLayerIndex_Offset = offsetof(UPaperTileMapComponent, UseSingleLayerIndex);
	static_assert(UPaperTileMapComponent_UseSingleLayerIndex_Offset == 0xa30, "UPaperTileMapComponent::UseSingleLayerIndex offset is not a30");
	auto constexpr UPaperTileMapComponent_boolFieldA34_Offset = offsetof(UPaperTileMapComponent, boolFieldA34);
	static_assert(UPaperTileMapComponent_boolFieldA34_Offset == 0xa34, "UPaperTileMapComponent::boolFieldA34 offset is not a34");
	auto constexpr UPaperTileMapComponent_TileMap_Offset = offsetof(UPaperTileMapComponent, TileMap);
	static_assert(UPaperTileMapComponent_TileMap_Offset == 0xa38, "UPaperTileMapComponent::TileMap offset is not a38");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
