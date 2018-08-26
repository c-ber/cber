#pragma once
#include "UPanelSlot.hpp"
#include "FMargin.hpp"
#include "EHorizontalAlignment.hpp"
#include "EVerticalAlignment.hpp"
#include "FVector2D.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UGridSlot // Size: 0x78
	: public UPanelSlot // Size: 0x40
{
private:
	typedef UGridSlot t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(468); // id32("Class UMG.GridSlot")
		return ptr;
	}
	FMargin Padding; /* Ofs: 0x40 Size: 0x10 - StructProperty UMG.GridSlot.Padding */
	TEnumAsByte<enum EHorizontalAlignment> HorizontalAlignment; /* Ofs: 0x50 Size: 0x1 - ByteProperty UMG.GridSlot.HorizontalAlignment */
	TEnumAsByte<enum EVerticalAlignment> VerticalAlignment; /* Ofs: 0x51 Size: 0x1 - ByteProperty UMG.GridSlot.VerticalAlignment */
	uint8_t UnknownData52[0x2];
	int32_t Row; /* Ofs: 0x54 Size: 0x4 - IntProperty UMG.GridSlot.Row */
	int32_t RowSpan; /* Ofs: 0x58 Size: 0x4 - IntProperty UMG.GridSlot.RowSpan */
	int32_t Column; /* Ofs: 0x5C Size: 0x4 - IntProperty UMG.GridSlot.Column */
	int32_t ColumnSpan; /* Ofs: 0x60 Size: 0x4 - IntProperty UMG.GridSlot.ColumnSpan */
	int32_t Layer; /* Ofs: 0x64 Size: 0x4 - IntProperty UMG.GridSlot.Layer */
	FVector2D Nudge; /* Ofs: 0x68 Size: 0x8 - StructProperty UMG.GridSlot.Nudge */
	uint8_t UnknownData70[0x8];


	inline bool SetPadding(t_structHelper inst, FMargin value) { inst.WriteOffset(0x40, value); }
	inline bool SetHorizontalAlignment(t_structHelper inst, TEnumAsByte<enum EHorizontalAlignment> value) { inst.WriteOffset(0x50, value); }
	inline bool SetVerticalAlignment(t_structHelper inst, TEnumAsByte<enum EVerticalAlignment> value) { inst.WriteOffset(0x51, value); }
	inline bool SetRow(t_structHelper inst, int32_t value) { inst.WriteOffset(0x54, value); }
	inline bool SetRowSpan(t_structHelper inst, int32_t value) { inst.WriteOffset(0x58, value); }
	inline bool SetColumn(t_structHelper inst, int32_t value) { inst.WriteOffset(0x5C, value); }
	inline bool SetColumnSpan(t_structHelper inst, int32_t value) { inst.WriteOffset(0x60, value); }
	inline bool SetLayer(t_structHelper inst, int32_t value) { inst.WriteOffset(0x64, value); }
	inline bool SetNudge(t_structHelper inst, FVector2D value) { inst.WriteOffset(0x68, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUGridSlot = sizeof(UGridSlot); // 120
    static_assert(sizeof(UGridSlot) == 0x78, "Size of UGridSlot is not correct.");
	auto constexpr UGridSlot_Padding_Offset = offsetof(UGridSlot, Padding);
	static_assert(UGridSlot_Padding_Offset == 0x40, "UGridSlot::Padding offset is not 40");
	auto constexpr UGridSlot_HorizontalAlignment_Offset = offsetof(UGridSlot, HorizontalAlignment);
	static_assert(UGridSlot_HorizontalAlignment_Offset == 0x50, "UGridSlot::HorizontalAlignment offset is not 50");
	auto constexpr UGridSlot_VerticalAlignment_Offset = offsetof(UGridSlot, VerticalAlignment);
	static_assert(UGridSlot_VerticalAlignment_Offset == 0x51, "UGridSlot::VerticalAlignment offset is not 51");
	auto constexpr UGridSlot_Row_Offset = offsetof(UGridSlot, Row);
	static_assert(UGridSlot_Row_Offset == 0x54, "UGridSlot::Row offset is not 54");
	auto constexpr UGridSlot_RowSpan_Offset = offsetof(UGridSlot, RowSpan);
	static_assert(UGridSlot_RowSpan_Offset == 0x58, "UGridSlot::RowSpan offset is not 58");
	auto constexpr UGridSlot_Column_Offset = offsetof(UGridSlot, Column);
	static_assert(UGridSlot_Column_Offset == 0x5c, "UGridSlot::Column offset is not 5c");
	auto constexpr UGridSlot_ColumnSpan_Offset = offsetof(UGridSlot, ColumnSpan);
	static_assert(UGridSlot_ColumnSpan_Offset == 0x60, "UGridSlot::ColumnSpan offset is not 60");
	auto constexpr UGridSlot_Layer_Offset = offsetof(UGridSlot, Layer);
	static_assert(UGridSlot_Layer_Offset == 0x64, "UGridSlot::Layer offset is not 64");
	auto constexpr UGridSlot_Nudge_Offset = offsetof(UGridSlot, Nudge);
	static_assert(UGridSlot_Nudge_Offset == 0x68, "UGridSlot::Nudge offset is not 68");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
