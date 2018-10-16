#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FPaperTileInfo // Size: 0x10
{
public:
    ExternalPtr<struct UPaperTileSet> TileSet; /* Ofs: 0x0 Size: 0x8 ObjectProperty Paper2D.PaperTileInfo.TileSet */
    int32_t PackedTileIndex; /* Ofs: 0x8 Size: 0x4 IntProperty Paper2D.PaperTileInfo.PackedTileIndex */
    uint8_t UnknownDataC[0x4];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFPaperTileInfo = sizeof(FPaperTileInfo); // 16
    static_assert(sizeof(FPaperTileInfo) == 0x10, "Size of FPaperTileInfo is not correct.");
	auto constexpr FPaperTileInfo_TileSet_Offset = offsetof(FPaperTileInfo, TileSet);
	static_assert(FPaperTileInfo_TileSet_Offset == 0x0, "FPaperTileInfo::TileSet offset is not 0");
	auto constexpr FPaperTileInfo_PackedTileIndex_Offset = offsetof(FPaperTileInfo, PackedTileIndex);
	static_assert(FPaperTileInfo_PackedTileIndex_Offset == 0x8, "FPaperTileInfo::PackedTileIndex offset is not 8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
