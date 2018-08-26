#pragma once
#include "FIntPoint.hpp"
#include "FIntMargin.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UPaperTileSet // Size: 0xA0
	: public UObject // Size: 0x30
{
private:
	typedef UPaperTileSet t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(2043); // id32("Class Paper2D.PaperTileSet")
		return ptr;
	}
	FIntPoint TileSize; /* Ofs: 0x30 Size: 0x8 - StructProperty Paper2D.PaperTileSet.TileSize */
	ExternalPtr<struct UTexture2D> TileSheet; /* Ofs: 0x38 Size: 0x8 - ObjectProperty Paper2D.PaperTileSet.TileSheet */
	FIntMargin BorderMargin; /* Ofs: 0x40 Size: 0x10 - StructProperty Paper2D.PaperTileSet.BorderMargin */
	FIntPoint PerTileSpacing; /* Ofs: 0x50 Size: 0x8 - StructProperty Paper2D.PaperTileSet.PerTileSpacing */
	FIntPoint DrawingOffset; /* Ofs: 0x58 Size: 0x8 - StructProperty Paper2D.PaperTileSet.DrawingOffset */
	int32_t WidthInTiles; /* Ofs: 0x60 Size: 0x4 - IntProperty Paper2D.PaperTileSet.WidthInTiles */
	int32_t HeightInTiles; /* Ofs: 0x64 Size: 0x4 - IntProperty Paper2D.PaperTileSet.HeightInTiles */
	int32_t AllocatedWidth; /* Ofs: 0x68 Size: 0x4 - IntProperty Paper2D.PaperTileSet.AllocatedWidth */
	int32_t AllocatedHeight; /* Ofs: 0x6C Size: 0x4 - IntProperty Paper2D.PaperTileSet.AllocatedHeight */
	TArray<struct FPaperTileMetadata> PerTileData; /* Ofs: 0x70 Size: 0x10 - ArrayProperty Paper2D.PaperTileSet.PerTileData */
	TArray<struct FPaperTileSetTerrain> Terrains; /* Ofs: 0x80 Size: 0x10 - ArrayProperty Paper2D.PaperTileSet.Terrains */
	int32_t TileWidth; /* Ofs: 0x90 Size: 0x4 - IntProperty Paper2D.PaperTileSet.TileWidth */
	int32_t TileHeight; /* Ofs: 0x94 Size: 0x4 - IntProperty Paper2D.PaperTileSet.TileHeight */
	int32_t Margin; /* Ofs: 0x98 Size: 0x4 - IntProperty Paper2D.PaperTileSet.Margin */
	int32_t Spacing; /* Ofs: 0x9C Size: 0x4 - IntProperty Paper2D.PaperTileSet.Spacing */


	inline bool SetTileSize(t_structHelper inst, FIntPoint value) { inst.WriteOffset(0x30, value); }
	inline bool SetTileSheet(t_structHelper inst, ExternalPtr<struct UTexture2D> value) { inst.WriteOffset(0x38, value); }
	inline bool SetBorderMargin(t_structHelper inst, FIntMargin value) { inst.WriteOffset(0x40, value); }
	inline bool SetPerTileSpacing(t_structHelper inst, FIntPoint value) { inst.WriteOffset(0x50, value); }
	inline bool SetDrawingOffset(t_structHelper inst, FIntPoint value) { inst.WriteOffset(0x58, value); }
	inline bool SetWidthInTiles(t_structHelper inst, int32_t value) { inst.WriteOffset(0x60, value); }
	inline bool SetHeightInTiles(t_structHelper inst, int32_t value) { inst.WriteOffset(0x64, value); }
	inline bool SetAllocatedWidth(t_structHelper inst, int32_t value) { inst.WriteOffset(0x68, value); }
	inline bool SetAllocatedHeight(t_structHelper inst, int32_t value) { inst.WriteOffset(0x6C, value); }
	inline bool SetPerTileData(t_structHelper inst, TArray<struct FPaperTileMetadata> value) { inst.WriteOffset(0x70, value); }
	inline bool SetTerrains(t_structHelper inst, TArray<struct FPaperTileSetTerrain> value) { inst.WriteOffset(0x80, value); }
	inline bool SetTileWidth(t_structHelper inst, int32_t value) { inst.WriteOffset(0x90, value); }
	inline bool SetTileHeight(t_structHelper inst, int32_t value) { inst.WriteOffset(0x94, value); }
	inline bool SetMargin(t_structHelper inst, int32_t value) { inst.WriteOffset(0x98, value); }
	inline bool SetSpacing(t_structHelper inst, int32_t value) { inst.WriteOffset(0x9C, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUPaperTileSet = sizeof(UPaperTileSet); // 160
    static_assert(sizeof(UPaperTileSet) == 0xA0, "Size of UPaperTileSet is not correct.");
	auto constexpr UPaperTileSet_TileSize_Offset = offsetof(UPaperTileSet, TileSize);
	static_assert(UPaperTileSet_TileSize_Offset == 0x30, "UPaperTileSet::TileSize offset is not 30");
	auto constexpr UPaperTileSet_TileSheet_Offset = offsetof(UPaperTileSet, TileSheet);
	static_assert(UPaperTileSet_TileSheet_Offset == 0x38, "UPaperTileSet::TileSheet offset is not 38");
	auto constexpr UPaperTileSet_BorderMargin_Offset = offsetof(UPaperTileSet, BorderMargin);
	static_assert(UPaperTileSet_BorderMargin_Offset == 0x40, "UPaperTileSet::BorderMargin offset is not 40");
	auto constexpr UPaperTileSet_PerTileSpacing_Offset = offsetof(UPaperTileSet, PerTileSpacing);
	static_assert(UPaperTileSet_PerTileSpacing_Offset == 0x50, "UPaperTileSet::PerTileSpacing offset is not 50");
	auto constexpr UPaperTileSet_DrawingOffset_Offset = offsetof(UPaperTileSet, DrawingOffset);
	static_assert(UPaperTileSet_DrawingOffset_Offset == 0x58, "UPaperTileSet::DrawingOffset offset is not 58");
	auto constexpr UPaperTileSet_WidthInTiles_Offset = offsetof(UPaperTileSet, WidthInTiles);
	static_assert(UPaperTileSet_WidthInTiles_Offset == 0x60, "UPaperTileSet::WidthInTiles offset is not 60");
	auto constexpr UPaperTileSet_HeightInTiles_Offset = offsetof(UPaperTileSet, HeightInTiles);
	static_assert(UPaperTileSet_HeightInTiles_Offset == 0x64, "UPaperTileSet::HeightInTiles offset is not 64");
	auto constexpr UPaperTileSet_AllocatedWidth_Offset = offsetof(UPaperTileSet, AllocatedWidth);
	static_assert(UPaperTileSet_AllocatedWidth_Offset == 0x68, "UPaperTileSet::AllocatedWidth offset is not 68");
	auto constexpr UPaperTileSet_AllocatedHeight_Offset = offsetof(UPaperTileSet, AllocatedHeight);
	static_assert(UPaperTileSet_AllocatedHeight_Offset == 0x6c, "UPaperTileSet::AllocatedHeight offset is not 6c");
	auto constexpr UPaperTileSet_PerTileData_Offset = offsetof(UPaperTileSet, PerTileData);
	static_assert(UPaperTileSet_PerTileData_Offset == 0x70, "UPaperTileSet::PerTileData offset is not 70");
	auto constexpr UPaperTileSet_Terrains_Offset = offsetof(UPaperTileSet, Terrains);
	static_assert(UPaperTileSet_Terrains_Offset == 0x80, "UPaperTileSet::Terrains offset is not 80");
	auto constexpr UPaperTileSet_TileWidth_Offset = offsetof(UPaperTileSet, TileWidth);
	static_assert(UPaperTileSet_TileWidth_Offset == 0x90, "UPaperTileSet::TileWidth offset is not 90");
	auto constexpr UPaperTileSet_TileHeight_Offset = offsetof(UPaperTileSet, TileHeight);
	static_assert(UPaperTileSet_TileHeight_Offset == 0x94, "UPaperTileSet::TileHeight offset is not 94");
	auto constexpr UPaperTileSet_Margin_Offset = offsetof(UPaperTileSet, Margin);
	static_assert(UPaperTileSet_Margin_Offset == 0x98, "UPaperTileSet::Margin offset is not 98");
	auto constexpr UPaperTileSet_Spacing_Offset = offsetof(UPaperTileSet, Spacing);
	static_assert(UPaperTileSet_Spacing_Offset == 0x9c, "UPaperTileSet::Spacing offset is not 9c");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
