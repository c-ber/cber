#pragma once
#include "UPanelSlot.hpp"
#include "FMargin.hpp"
#include "EHorizontalAlignment.hpp"
#include "EVerticalAlignment.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UWidgetSwitcherSlot // Size: 0x60
	: public UPanelSlot // Size: 0x40
{
private:
	typedef UWidgetSwitcherSlot t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(477); // id32("Class UMG.WidgetSwitcherSlot")
		return ptr;
	}
	FMargin Padding; /* Ofs: 0x40 Size: 0x10 - StructProperty UMG.WidgetSwitcherSlot.Padding */
	TEnumAsByte<enum EHorizontalAlignment> HorizontalAlignment; /* Ofs: 0x50 Size: 0x1 - ByteProperty UMG.WidgetSwitcherSlot.HorizontalAlignment */
	TEnumAsByte<enum EVerticalAlignment> VerticalAlignment; /* Ofs: 0x51 Size: 0x1 - ByteProperty UMG.WidgetSwitcherSlot.VerticalAlignment */
	uint8_t UnknownData52[0xE];


	inline bool SetPadding(t_structHelper inst, FMargin value) { inst.WriteOffset(0x40, value); }
	inline bool SetHorizontalAlignment(t_structHelper inst, TEnumAsByte<enum EHorizontalAlignment> value) { inst.WriteOffset(0x50, value); }
	inline bool SetVerticalAlignment(t_structHelper inst, TEnumAsByte<enum EVerticalAlignment> value) { inst.WriteOffset(0x51, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUWidgetSwitcherSlot = sizeof(UWidgetSwitcherSlot); // 96
    static_assert(sizeof(UWidgetSwitcherSlot) == 0x60, "Size of UWidgetSwitcherSlot is not correct.");
	auto constexpr UWidgetSwitcherSlot_Padding_Offset = offsetof(UWidgetSwitcherSlot, Padding);
	static_assert(UWidgetSwitcherSlot_Padding_Offset == 0x40, "UWidgetSwitcherSlot::Padding offset is not 40");
	auto constexpr UWidgetSwitcherSlot_HorizontalAlignment_Offset = offsetof(UWidgetSwitcherSlot, HorizontalAlignment);
	static_assert(UWidgetSwitcherSlot_HorizontalAlignment_Offset == 0x50, "UWidgetSwitcherSlot::HorizontalAlignment offset is not 50");
	auto constexpr UWidgetSwitcherSlot_VerticalAlignment_Offset = offsetof(UWidgetSwitcherSlot, VerticalAlignment);
	static_assert(UWidgetSwitcherSlot_VerticalAlignment_Offset == 0x51, "UWidgetSwitcherSlot::VerticalAlignment offset is not 51");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
