#pragma once
#include "FLinearColor.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UPaperTileLayer // Size: 0xA0
	: public UObject // Size: 0x30
{
private:
	typedef UPaperTileLayer t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(2039); // id32("Class Paper2D.PaperTileLayer")
		return ptr;
	}
	FText LayerName; /* Ofs: 0x30 Size: 0x18 - TextProperty Paper2D.PaperTileLayer.LayerName */
	int32_t LayerWidth; /* Ofs: 0x48 Size: 0x4 - IntProperty Paper2D.PaperTileLayer.LayerWidth */
	int32_t LayerHeight; /* Ofs: 0x4C Size: 0x4 - IntProperty Paper2D.PaperTileLayer.LayerHeight */
	uint8_t boolField50;
	uint8_t UnknownData51[0x3];
	float CollisionThicknessOverride; /* Ofs: 0x54 Size: 0x4 - FloatProperty Paper2D.PaperTileLayer.CollisionThicknessOverride */
	float CollisionOffsetOverride; /* Ofs: 0x58 Size: 0x4 - FloatProperty Paper2D.PaperTileLayer.CollisionOffsetOverride */
	FLinearColor LayerColor; /* Ofs: 0x5C Size: 0x10 - StructProperty Paper2D.PaperTileLayer.LayerColor */
	int32_t AllocatedWidth; /* Ofs: 0x6C Size: 0x4 - IntProperty Paper2D.PaperTileLayer.AllocatedWidth */
	int32_t AllocatedHeight; /* Ofs: 0x70 Size: 0x4 - IntProperty Paper2D.PaperTileLayer.AllocatedHeight */
	uint8_t UnknownData74[0x4];
	TArray<struct FPaperTileInfo> AllocatedCells; /* Ofs: 0x78 Size: 0x10 - ArrayProperty Paper2D.PaperTileLayer.AllocatedCells */
	ExternalPtr<struct UPaperTileSet> TileSet; /* Ofs: 0x88 Size: 0x8 - ObjectProperty Paper2D.PaperTileLayer.TileSet */
	TArray<int32_t> AllocatedGrid; /* Ofs: 0x90 Size: 0x10 - ArrayProperty Paper2D.PaperTileLayer.AllocatedGrid */


	inline bool SetLayerName(t_structHelper inst, FText value) { inst.WriteOffset(0x30, value); }
	inline bool SetLayerWidth(t_structHelper inst, int32_t value) { inst.WriteOffset(0x48, value); }
	inline bool SetLayerHeight(t_structHelper inst, int32_t value) { inst.WriteOffset(0x4C, value); }
	inline bool bHiddenInGame()
	{
		return boolField50& 0x1;
	}
	inline bool SetbHiddenInGame(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x50, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bLayerCollides()
	{
		return boolField50& 0x2;
	}
	inline bool SetbLayerCollides(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x50, (uint8_t)(value ? curVal | (uint8_t)2 : curVal & ~(uint8_t)2));
	}
	inline bool bOverrideCollisionThickness()
	{
		return boolField50& 0x4;
	}
	inline bool SetbOverrideCollisionThickness(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x50, (uint8_t)(value ? curVal | (uint8_t)4 : curVal & ~(uint8_t)4));
	}
	inline bool bOverrideCollisionOffset()
	{
		return boolField50& 0x8;
	}
	inline bool SetbOverrideCollisionOffset(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x50, (uint8_t)(value ? curVal | (uint8_t)8 : curVal & ~(uint8_t)8));
	}
	inline bool SetCollisionThicknessOverride(t_structHelper inst, float value) { inst.WriteOffset(0x54, value); }
	inline bool SetCollisionOffsetOverride(t_structHelper inst, float value) { inst.WriteOffset(0x58, value); }
	inline bool SetLayerColor(t_structHelper inst, FLinearColor value) { inst.WriteOffset(0x5C, value); }
	inline bool SetAllocatedWidth(t_structHelper inst, int32_t value) { inst.WriteOffset(0x6C, value); }
	inline bool SetAllocatedHeight(t_structHelper inst, int32_t value) { inst.WriteOffset(0x70, value); }
	inline bool SetAllocatedCells(t_structHelper inst, TArray<struct FPaperTileInfo> value) { inst.WriteOffset(0x78, value); }
	inline bool SetTileSet(t_structHelper inst, ExternalPtr<struct UPaperTileSet> value) { inst.WriteOffset(0x88, value); }
	inline bool SetAllocatedGrid(t_structHelper inst, TArray<int32_t> value) { inst.WriteOffset(0x90, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUPaperTileLayer = sizeof(UPaperTileLayer); // 160
    static_assert(sizeof(UPaperTileLayer) == 0xA0, "Size of UPaperTileLayer is not correct.");
	auto constexpr UPaperTileLayer_LayerName_Offset = offsetof(UPaperTileLayer, LayerName);
	static_assert(UPaperTileLayer_LayerName_Offset == 0x30, "UPaperTileLayer::LayerName offset is not 30");
	auto constexpr UPaperTileLayer_LayerWidth_Offset = offsetof(UPaperTileLayer, LayerWidth);
	static_assert(UPaperTileLayer_LayerWidth_Offset == 0x48, "UPaperTileLayer::LayerWidth offset is not 48");
	auto constexpr UPaperTileLayer_LayerHeight_Offset = offsetof(UPaperTileLayer, LayerHeight);
	static_assert(UPaperTileLayer_LayerHeight_Offset == 0x4c, "UPaperTileLayer::LayerHeight offset is not 4c");
	auto constexpr UPaperTileLayer_boolField50_Offset = offsetof(UPaperTileLayer, boolField50);
	static_assert(UPaperTileLayer_boolField50_Offset == 0x50, "UPaperTileLayer::boolField50 offset is not 50");
	auto constexpr UPaperTileLayer_CollisionThicknessOverride_Offset = offsetof(UPaperTileLayer, CollisionThicknessOverride);
	static_assert(UPaperTileLayer_CollisionThicknessOverride_Offset == 0x54, "UPaperTileLayer::CollisionThicknessOverride offset is not 54");
	auto constexpr UPaperTileLayer_CollisionOffsetOverride_Offset = offsetof(UPaperTileLayer, CollisionOffsetOverride);
	static_assert(UPaperTileLayer_CollisionOffsetOverride_Offset == 0x58, "UPaperTileLayer::CollisionOffsetOverride offset is not 58");
	auto constexpr UPaperTileLayer_LayerColor_Offset = offsetof(UPaperTileLayer, LayerColor);
	static_assert(UPaperTileLayer_LayerColor_Offset == 0x5c, "UPaperTileLayer::LayerColor offset is not 5c");
	auto constexpr UPaperTileLayer_AllocatedWidth_Offset = offsetof(UPaperTileLayer, AllocatedWidth);
	static_assert(UPaperTileLayer_AllocatedWidth_Offset == 0x6c, "UPaperTileLayer::AllocatedWidth offset is not 6c");
	auto constexpr UPaperTileLayer_AllocatedHeight_Offset = offsetof(UPaperTileLayer, AllocatedHeight);
	static_assert(UPaperTileLayer_AllocatedHeight_Offset == 0x70, "UPaperTileLayer::AllocatedHeight offset is not 70");
	auto constexpr UPaperTileLayer_AllocatedCells_Offset = offsetof(UPaperTileLayer, AllocatedCells);
	static_assert(UPaperTileLayer_AllocatedCells_Offset == 0x78, "UPaperTileLayer::AllocatedCells offset is not 78");
	auto constexpr UPaperTileLayer_TileSet_Offset = offsetof(UPaperTileLayer, TileSet);
	static_assert(UPaperTileLayer_TileSet_Offset == 0x88, "UPaperTileLayer::TileSet offset is not 88");
	auto constexpr UPaperTileLayer_AllocatedGrid_Offset = offsetof(UPaperTileLayer, AllocatedGrid);
	static_assert(UPaperTileLayer_AllocatedGrid_Offset == 0x90, "UPaperTileLayer::AllocatedGrid offset is not 90");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
