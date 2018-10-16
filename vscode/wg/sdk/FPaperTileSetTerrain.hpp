#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FPaperTileSetTerrain // Size: 0x18
{
public:
    FString TerrainName; /* Ofs: 0x0 Size: 0x10 StrProperty Paper2D.PaperTileSetTerrain.TerrainName */
    int32_t CenterTileIndex; /* Ofs: 0x10 Size: 0x4 IntProperty Paper2D.PaperTileSetTerrain.CenterTileIndex */
    uint8_t UnknownData14[0x4];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFPaperTileSetTerrain = sizeof(FPaperTileSetTerrain); // 24
    static_assert(sizeof(FPaperTileSetTerrain) == 0x18, "Size of FPaperTileSetTerrain is not correct.");
	auto constexpr FPaperTileSetTerrain_TerrainName_Offset = offsetof(FPaperTileSetTerrain, TerrainName);
	static_assert(FPaperTileSetTerrain_TerrainName_Offset == 0x0, "FPaperTileSetTerrain::TerrainName offset is not 0");
	auto constexpr FPaperTileSetTerrain_CenterTileIndex_Offset = offsetof(FPaperTileSetTerrain, CenterTileIndex);
	static_assert(FPaperTileSetTerrain_CenterTileIndex_Offset == 0x10, "FPaperTileSetTerrain::CenterTileIndex offset is not 10");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
