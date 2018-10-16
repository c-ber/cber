#pragma once
#include "UPanelSlot.hpp"
#include "FMargin.hpp"
#include "EHorizontalAlignment.hpp"
#include "EVerticalAlignment.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) USizeBoxSlot // Size: 0x68
	: public UPanelSlot // Size: 0x40
{
private:
	typedef USizeBoxSlot t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(474); // id32("Class UMG.SizeBoxSlot")
		return ptr;
	}
	FMargin Padding; /* Ofs: 0x40 Size: 0x10 - StructProperty UMG.SizeBoxSlot.Padding */
	TEnumAsByte<enum EHorizontalAlignment> HorizontalAlignment; /* Ofs: 0x50 Size: 0x1 - ByteProperty UMG.SizeBoxSlot.HorizontalAlignment */
	TEnumAsByte<enum EVerticalAlignment> VerticalAlignment; /* Ofs: 0x51 Size: 0x1 - ByteProperty UMG.SizeBoxSlot.VerticalAlignment */
	uint8_t UnknownData52[0x16];


	inline bool SetPadding(t_structHelper inst, FMargin value) { inst.WriteOffset(0x40, value); }
	inline bool SetHorizontalAlignment(t_structHelper inst, TEnumAsByte<enum EHorizontalAlignment> value) { inst.WriteOffset(0x50, value); }
	inline bool SetVerticalAlignment(t_structHelper inst, TEnumAsByte<enum EVerticalAlignment> value) { inst.WriteOffset(0x51, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUSizeBoxSlot = sizeof(USizeBoxSlot); // 104
    static_assert(sizeof(USizeBoxSlot) == 0x68, "Size of USizeBoxSlot is not correct.");
	auto constexpr USizeBoxSlot_Padding_Offset = offsetof(USizeBoxSlot, Padding);
	static_assert(USizeBoxSlot_Padding_Offset == 0x40, "USizeBoxSlot::Padding offset is not 40");
	auto constexpr USizeBoxSlot_HorizontalAlignment_Offset = offsetof(USizeBoxSlot, HorizontalAlignment);
	static_assert(USizeBoxSlot_HorizontalAlignment_Offset == 0x50, "USizeBoxSlot::HorizontalAlignment offset is not 50");
	auto constexpr USizeBoxSlot_VerticalAlignment_Offset = offsetof(USizeBoxSlot, VerticalAlignment);
	static_assert(USizeBoxSlot_VerticalAlignment_Offset == 0x51, "USizeBoxSlot::VerticalAlignment offset is not 51");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
