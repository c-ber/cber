#pragma once
#include "UPanelSlot.hpp"
#include "FMargin.hpp"
#include "EHorizontalAlignment.hpp"
#include "EVerticalAlignment.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UWindowTitleBarAreaSlot // Size: 0x68
	: public UPanelSlot // Size: 0x40
{
private:
	typedef UWindowTitleBarAreaSlot t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(482); // id32("Class UMG.WindowTitleBarAreaSlot")
		return ptr;
	}
	FMargin Padding; /* Ofs: 0x40 Size: 0x10 - StructProperty UMG.WindowTitleBarAreaSlot.Padding */
	TEnumAsByte<enum EHorizontalAlignment> HorizontalAlignment; /* Ofs: 0x50 Size: 0x1 - ByteProperty UMG.WindowTitleBarAreaSlot.HorizontalAlignment */
	TEnumAsByte<enum EVerticalAlignment> VerticalAlignment; /* Ofs: 0x51 Size: 0x1 - ByteProperty UMG.WindowTitleBarAreaSlot.VerticalAlignment */
	uint8_t UnknownData52[0x16];


	inline bool SetPadding(t_structHelper inst, FMargin value) { inst.WriteOffset(0x40, value); }
	inline bool SetHorizontalAlignment(t_structHelper inst, TEnumAsByte<enum EHorizontalAlignment> value) { inst.WriteOffset(0x50, value); }
	inline bool SetVerticalAlignment(t_structHelper inst, TEnumAsByte<enum EVerticalAlignment> value) { inst.WriteOffset(0x51, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUWindowTitleBarAreaSlot = sizeof(UWindowTitleBarAreaSlot); // 104
    static_assert(sizeof(UWindowTitleBarAreaSlot) == 0x68, "Size of UWindowTitleBarAreaSlot is not correct.");
	auto constexpr UWindowTitleBarAreaSlot_Padding_Offset = offsetof(UWindowTitleBarAreaSlot, Padding);
	static_assert(UWindowTitleBarAreaSlot_Padding_Offset == 0x40, "UWindowTitleBarAreaSlot::Padding offset is not 40");
	auto constexpr UWindowTitleBarAreaSlot_HorizontalAlignment_Offset = offsetof(UWindowTitleBarAreaSlot, HorizontalAlignment);
	static_assert(UWindowTitleBarAreaSlot_HorizontalAlignment_Offset == 0x50, "UWindowTitleBarAreaSlot::HorizontalAlignment offset is not 50");
	auto constexpr UWindowTitleBarAreaSlot_VerticalAlignment_Offset = offsetof(UWindowTitleBarAreaSlot, VerticalAlignment);
	static_assert(UWindowTitleBarAreaSlot_VerticalAlignment_Offset == 0x51, "UWindowTitleBarAreaSlot::VerticalAlignment offset is not 51");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
