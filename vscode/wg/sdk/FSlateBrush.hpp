#pragma once
#include "FVector2D.hpp"
#include "ESlateBrushDrawType.hpp"
#include "FMargin.hpp"
#include "FLinearColor.hpp"
#include "FSlateColor.hpp"
#include "ESlateBrushTileType.hpp"
#include "ESlateBrushMirrorType.hpp"
#include "ESlateBrushImageType.hpp"
#include "FBox2D.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FSlateBrush // Size: 0x90
{
public:
    uint8_t UnknownData0[0x8];
    FVector2D ImageSize; /* Ofs: 0x8 Size: 0x8 StructProperty SlateCore.SlateBrush.ImageSize */
    TEnumAsByte<enum ESlateBrushDrawType> DrawAs; /* Ofs: 0x10 Size: 0x1 ByteProperty SlateCore.SlateBrush.DrawAs */
    uint8_t UnknownData11[0x3];
    FMargin Margin; /* Ofs: 0x14 Size: 0x10 StructProperty SlateCore.SlateBrush.Margin */
    FLinearColor Tint; /* Ofs: 0x24 Size: 0x10 StructProperty SlateCore.SlateBrush.Tint */
    uint8_t UnknownData34[0x4];
    FSlateColor TintColor; /* Ofs: 0x38 Size: 0x28 StructProperty SlateCore.SlateBrush.TintColor */
    TEnumAsByte<enum ESlateBrushTileType> Tiling; /* Ofs: 0x60 Size: 0x1 ByteProperty SlateCore.SlateBrush.Tiling */
    TEnumAsByte<enum ESlateBrushMirrorType> Mirroring; /* Ofs: 0x61 Size: 0x1 ByteProperty SlateCore.SlateBrush.Mirroring */
    TEnumAsByte<enum ESlateBrushImageType> ImageType; /* Ofs: 0x62 Size: 0x1 ByteProperty SlateCore.SlateBrush.ImageType */
    uint8_t UnknownData63[0x5];
    ExternalPtr<struct UObject> ResourceObject; /* Ofs: 0x68 Size: 0x8 ObjectProperty SlateCore.SlateBrush.ResourceObject */
    FName ResourceName; /* Ofs: 0x70 Size: 0x8 NameProperty SlateCore.SlateBrush.ResourceName */
    bool bIsDynamicallyLoaded; /* Ofs: 0x78 Size: 0x1 BitMask: 01 BoolProperty SlateCore.SlateBrush.bIsDynamicallyLoaded */
    bool bHasUObject; /* Ofs: 0x79 Size: 0x1 BitMask: 01 BoolProperty SlateCore.SlateBrush.bHasUObject */
    uint8_t UnknownData7A[0x2];
    FBox2D UVRegion; /* Ofs: 0x7C Size: 0x14 StructProperty SlateCore.SlateBrush.UVRegion */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFSlateBrush = sizeof(FSlateBrush); // 144
    static_assert(sizeof(FSlateBrush) == 0x90, "Size of FSlateBrush is not correct.");
	auto constexpr FSlateBrush_ImageSize_Offset = offsetof(FSlateBrush, ImageSize);
	static_assert(FSlateBrush_ImageSize_Offset == 0x8, "FSlateBrush::ImageSize offset is not 8");
	auto constexpr FSlateBrush_DrawAs_Offset = offsetof(FSlateBrush, DrawAs);
	static_assert(FSlateBrush_DrawAs_Offset == 0x10, "FSlateBrush::DrawAs offset is not 10");
	auto constexpr FSlateBrush_Margin_Offset = offsetof(FSlateBrush, Margin);
	static_assert(FSlateBrush_Margin_Offset == 0x14, "FSlateBrush::Margin offset is not 14");
	auto constexpr FSlateBrush_Tint_Offset = offsetof(FSlateBrush, Tint);
	static_assert(FSlateBrush_Tint_Offset == 0x24, "FSlateBrush::Tint offset is not 24");
	auto constexpr FSlateBrush_TintColor_Offset = offsetof(FSlateBrush, TintColor);
	static_assert(FSlateBrush_TintColor_Offset == 0x38, "FSlateBrush::TintColor offset is not 38");
	auto constexpr FSlateBrush_Tiling_Offset = offsetof(FSlateBrush, Tiling);
	static_assert(FSlateBrush_Tiling_Offset == 0x60, "FSlateBrush::Tiling offset is not 60");
	auto constexpr FSlateBrush_Mirroring_Offset = offsetof(FSlateBrush, Mirroring);
	static_assert(FSlateBrush_Mirroring_Offset == 0x61, "FSlateBrush::Mirroring offset is not 61");
	auto constexpr FSlateBrush_ImageType_Offset = offsetof(FSlateBrush, ImageType);
	static_assert(FSlateBrush_ImageType_Offset == 0x62, "FSlateBrush::ImageType offset is not 62");
	auto constexpr FSlateBrush_ResourceObject_Offset = offsetof(FSlateBrush, ResourceObject);
	static_assert(FSlateBrush_ResourceObject_Offset == 0x68, "FSlateBrush::ResourceObject offset is not 68");
	auto constexpr FSlateBrush_ResourceName_Offset = offsetof(FSlateBrush, ResourceName);
	static_assert(FSlateBrush_ResourceName_Offset == 0x70, "FSlateBrush::ResourceName offset is not 70");
	auto constexpr FSlateBrush_UVRegion_Offset = offsetof(FSlateBrush, UVRegion);
	static_assert(FSlateBrush_UVRegion_Offset == 0x7c, "FSlateBrush::UVRegion offset is not 7c");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
