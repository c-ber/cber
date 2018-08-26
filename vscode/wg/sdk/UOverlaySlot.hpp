#pragma once
#include "UPanelSlot.hpp"
#include "FMargin.hpp"
#include "EHorizontalAlignment.hpp"
#include "EVerticalAlignment.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UOverlaySlot // Size: 0x60
	: public UPanelSlot // Size: 0x40
{
private:
	typedef UOverlaySlot t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(470); // id32("Class UMG.OverlaySlot")
		return ptr;
	}
	FMargin Padding; /* Ofs: 0x40 Size: 0x10 - StructProperty UMG.OverlaySlot.Padding */
	TEnumAsByte<enum EHorizontalAlignment> HorizontalAlignment; /* Ofs: 0x50 Size: 0x1 - ByteProperty UMG.OverlaySlot.HorizontalAlignment */
	TEnumAsByte<enum EVerticalAlignment> VerticalAlignment; /* Ofs: 0x51 Size: 0x1 - ByteProperty UMG.OverlaySlot.VerticalAlignment */
	uint8_t UnknownData52[0xE];


	inline bool SetPadding(t_structHelper inst, FMargin value) { inst.WriteOffset(0x40, value); }
	inline bool SetHorizontalAlignment(t_structHelper inst, TEnumAsByte<enum EHorizontalAlignment> value) { inst.WriteOffset(0x50, value); }
	inline bool SetVerticalAlignment(t_structHelper inst, TEnumAsByte<enum EVerticalAlignment> value) { inst.WriteOffset(0x51, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUOverlaySlot = sizeof(UOverlaySlot); // 96
    static_assert(sizeof(UOverlaySlot) == 0x60, "Size of UOverlaySlot is not correct.");
	auto constexpr UOverlaySlot_Padding_Offset = offsetof(UOverlaySlot, Padding);
	static_assert(UOverlaySlot_Padding_Offset == 0x40, "UOverlaySlot::Padding offset is not 40");
	auto constexpr UOverlaySlot_HorizontalAlignment_Offset = offsetof(UOverlaySlot, HorizontalAlignment);
	static_assert(UOverlaySlot_HorizontalAlignment_Offset == 0x50, "UOverlaySlot::HorizontalAlignment offset is not 50");
	auto constexpr UOverlaySlot_VerticalAlignment_Offset = offsetof(UOverlaySlot, VerticalAlignment);
	static_assert(UOverlaySlot_VerticalAlignment_Offset == 0x51, "UOverlaySlot::VerticalAlignment offset is not 51");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
