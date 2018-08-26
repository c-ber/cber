#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FPaperSpriteAtlasSlot // Size: 0x38
{
public:
    TAssetPtr<ExternalPtr<struct UPaperSprite>> SpriteRef; /* Ofs: 0x0 Size: 0x1C AssetObjectProperty Paper2D.PaperSpriteAtlasSlot.SpriteRef */
    uint8_t UnknownData1C[0x4];
    int32_t AtlasIndex; /* Ofs: 0x20 Size: 0x4 IntProperty Paper2D.PaperSpriteAtlasSlot.AtlasIndex */
    int32_t X; /* Ofs: 0x24 Size: 0x4 IntProperty Paper2D.PaperSpriteAtlasSlot.X */
    int32_t Y; /* Ofs: 0x28 Size: 0x4 IntProperty Paper2D.PaperSpriteAtlasSlot.Y */
    int32_t Width; /* Ofs: 0x2C Size: 0x4 IntProperty Paper2D.PaperSpriteAtlasSlot.Width */
    int32_t Height; /* Ofs: 0x30 Size: 0x4 IntProperty Paper2D.PaperSpriteAtlasSlot.Height */
    uint8_t UnknownData34[0x4];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFPaperSpriteAtlasSlot = sizeof(FPaperSpriteAtlasSlot); // 56
    static_assert(sizeof(FPaperSpriteAtlasSlot) == 0x38, "Size of FPaperSpriteAtlasSlot is not correct.");
	auto constexpr FPaperSpriteAtlasSlot_SpriteRef_Offset = offsetof(FPaperSpriteAtlasSlot, SpriteRef);
	static_assert(FPaperSpriteAtlasSlot_SpriteRef_Offset == 0x0, "FPaperSpriteAtlasSlot::SpriteRef offset is not 0");
	auto constexpr FPaperSpriteAtlasSlot_AtlasIndex_Offset = offsetof(FPaperSpriteAtlasSlot, AtlasIndex);
	static_assert(FPaperSpriteAtlasSlot_AtlasIndex_Offset == 0x20, "FPaperSpriteAtlasSlot::AtlasIndex offset is not 20");
	auto constexpr FPaperSpriteAtlasSlot_X_Offset = offsetof(FPaperSpriteAtlasSlot, X);
	static_assert(FPaperSpriteAtlasSlot_X_Offset == 0x24, "FPaperSpriteAtlasSlot::X offset is not 24");
	auto constexpr FPaperSpriteAtlasSlot_Y_Offset = offsetof(FPaperSpriteAtlasSlot, Y);
	static_assert(FPaperSpriteAtlasSlot_Y_Offset == 0x28, "FPaperSpriteAtlasSlot::Y offset is not 28");
	auto constexpr FPaperSpriteAtlasSlot_Width_Offset = offsetof(FPaperSpriteAtlasSlot, Width);
	static_assert(FPaperSpriteAtlasSlot_Width_Offset == 0x2c, "FPaperSpriteAtlasSlot::Width offset is not 2c");
	auto constexpr FPaperSpriteAtlasSlot_Height_Offset = offsetof(FPaperSpriteAtlasSlot, Height);
	static_assert(FPaperSpriteAtlasSlot_Height_Offset == 0x30, "FPaperSpriteAtlasSlot::Height offset is not 30");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
