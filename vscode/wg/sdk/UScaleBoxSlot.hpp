#pragma once
#include "UPanelSlot.hpp"
#include "FMargin.hpp"
#include "EHorizontalAlignment.hpp"
#include "EVerticalAlignment.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UScaleBoxSlot // Size: 0x68
	: public UPanelSlot // Size: 0x40
{
private:
	typedef UScaleBoxSlot t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(472); // id32("Class UMG.ScaleBoxSlot")
		return ptr;
	}
	FMargin Padding; /* Ofs: 0x40 Size: 0x10 - StructProperty UMG.ScaleBoxSlot.Padding */
	TEnumAsByte<enum EHorizontalAlignment> HorizontalAlignment; /* Ofs: 0x50 Size: 0x1 - ByteProperty UMG.ScaleBoxSlot.HorizontalAlignment */
	TEnumAsByte<enum EVerticalAlignment> VerticalAlignment; /* Ofs: 0x51 Size: 0x1 - ByteProperty UMG.ScaleBoxSlot.VerticalAlignment */
	uint8_t UnknownData52[0x16];


	inline bool SetPadding(t_structHelper inst, FMargin value) { inst.WriteOffset(0x40, value); }
	inline bool SetHorizontalAlignment(t_structHelper inst, TEnumAsByte<enum EHorizontalAlignment> value) { inst.WriteOffset(0x50, value); }
	inline bool SetVerticalAlignment(t_structHelper inst, TEnumAsByte<enum EVerticalAlignment> value) { inst.WriteOffset(0x51, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUScaleBoxSlot = sizeof(UScaleBoxSlot); // 104
    static_assert(sizeof(UScaleBoxSlot) == 0x68, "Size of UScaleBoxSlot is not correct.");
	auto constexpr UScaleBoxSlot_Padding_Offset = offsetof(UScaleBoxSlot, Padding);
	static_assert(UScaleBoxSlot_Padding_Offset == 0x40, "UScaleBoxSlot::Padding offset is not 40");
	auto constexpr UScaleBoxSlot_HorizontalAlignment_Offset = offsetof(UScaleBoxSlot, HorizontalAlignment);
	static_assert(UScaleBoxSlot_HorizontalAlignment_Offset == 0x50, "UScaleBoxSlot::HorizontalAlignment offset is not 50");
	auto constexpr UScaleBoxSlot_VerticalAlignment_Offset = offsetof(UScaleBoxSlot, VerticalAlignment);
	static_assert(UScaleBoxSlot_VerticalAlignment_Offset == 0x51, "UScaleBoxSlot::VerticalAlignment offset is not 51");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
