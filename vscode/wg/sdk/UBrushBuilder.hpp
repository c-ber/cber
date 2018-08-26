#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBrushBuilder // Size: 0x88
	: public UObject // Size: 0x30
{
private:
	typedef UBrushBuilder t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(684); // id32("Class Engine.BrushBuilder")
		return ptr;
	}
	FString BitmapFilename; /* Ofs: 0x30 Size: 0x10 - StrProperty Engine.BrushBuilder.BitmapFilename */
	FString Tooltip; /* Ofs: 0x40 Size: 0x10 - StrProperty Engine.BrushBuilder.Tooltip */
	uint8_t boolField50;
	uint8_t UnknownData51[0x7];
	TArray<struct FVector> Vertices; /* Ofs: 0x58 Size: 0x10 - ArrayProperty Engine.BrushBuilder.Vertices */
	TArray<struct FBuilderPoly> Polys; /* Ofs: 0x68 Size: 0x10 - ArrayProperty Engine.BrushBuilder.Polys */
	FName Layer; /* Ofs: 0x78 Size: 0x8 - NameProperty Engine.BrushBuilder.Layer */
	uint8_t boolField80;
	uint8_t UnknownData81[0x7];


	inline bool SetBitmapFilename(t_structHelper inst, FString value) { inst.WriteOffset(0x30, value); }
	inline bool SetTooltip(t_structHelper inst, FString value) { inst.WriteOffset(0x40, value); }
	inline bool NotifyBadParams()
	{
		return boolField50& 0x1;
	}
	inline bool SetNotifyBadParams(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x50, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetVertices(t_structHelper inst, TArray<struct FVector> value) { inst.WriteOffset(0x58, value); }
	inline bool SetPolys(t_structHelper inst, TArray<struct FBuilderPoly> value) { inst.WriteOffset(0x68, value); }
	inline bool SetLayer(t_structHelper inst, FName value) { inst.WriteOffset(0x78, value); }
	inline bool MergeCoplanars()
	{
		return boolField80& 0x1;
	}
	inline bool SetMergeCoplanars(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x80, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBrushBuilder = sizeof(UBrushBuilder); // 136
    static_assert(sizeof(UBrushBuilder) == 0x88, "Size of UBrushBuilder is not correct.");
	auto constexpr UBrushBuilder_BitmapFilename_Offset = offsetof(UBrushBuilder, BitmapFilename);
	static_assert(UBrushBuilder_BitmapFilename_Offset == 0x30, "UBrushBuilder::BitmapFilename offset is not 30");
	auto constexpr UBrushBuilder_Tooltip_Offset = offsetof(UBrushBuilder, Tooltip);
	static_assert(UBrushBuilder_Tooltip_Offset == 0x40, "UBrushBuilder::Tooltip offset is not 40");
	auto constexpr UBrushBuilder_boolField50_Offset = offsetof(UBrushBuilder, boolField50);
	static_assert(UBrushBuilder_boolField50_Offset == 0x50, "UBrushBuilder::boolField50 offset is not 50");
	auto constexpr UBrushBuilder_Vertices_Offset = offsetof(UBrushBuilder, Vertices);
	static_assert(UBrushBuilder_Vertices_Offset == 0x58, "UBrushBuilder::Vertices offset is not 58");
	auto constexpr UBrushBuilder_Polys_Offset = offsetof(UBrushBuilder, Polys);
	static_assert(UBrushBuilder_Polys_Offset == 0x68, "UBrushBuilder::Polys offset is not 68");
	auto constexpr UBrushBuilder_Layer_Offset = offsetof(UBrushBuilder, Layer);
	static_assert(UBrushBuilder_Layer_Offset == 0x78, "UBrushBuilder::Layer offset is not 78");
	auto constexpr UBrushBuilder_boolField80_Offset = offsetof(UBrushBuilder, boolField80);
	static_assert(UBrushBuilder_boolField80_Offset == 0x80, "UBrushBuilder::boolField80 offset is not 80");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
