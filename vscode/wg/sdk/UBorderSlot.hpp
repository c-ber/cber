#pragma once
#include "UPanelSlot.hpp"
#include "FMargin.hpp"
#include "EHorizontalAlignment.hpp"
#include "EVerticalAlignment.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBorderSlot // Size: 0x68
	: public UPanelSlot // Size: 0x40
{
private:
	typedef UBorderSlot t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(465); // id32("Class UMG.BorderSlot")
		return ptr;
	}
	FMargin Padding; /* Ofs: 0x40 Size: 0x10 - StructProperty UMG.BorderSlot.Padding */
	TEnumAsByte<enum EHorizontalAlignment> HorizontalAlignment; /* Ofs: 0x50 Size: 0x1 - ByteProperty UMG.BorderSlot.HorizontalAlignment */
	TEnumAsByte<enum EVerticalAlignment> VerticalAlignment; /* Ofs: 0x51 Size: 0x1 - ByteProperty UMG.BorderSlot.VerticalAlignment */
	uint8_t UnknownData52[0x16];


	inline bool SetPadding(t_structHelper inst, FMargin value) { inst.WriteOffset(0x40, value); }
	inline bool SetHorizontalAlignment(t_structHelper inst, TEnumAsByte<enum EHorizontalAlignment> value) { inst.WriteOffset(0x50, value); }
	inline bool SetVerticalAlignment(t_structHelper inst, TEnumAsByte<enum EVerticalAlignment> value) { inst.WriteOffset(0x51, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBorderSlot = sizeof(UBorderSlot); // 104
    static_assert(sizeof(UBorderSlot) == 0x68, "Size of UBorderSlot is not correct.");
	auto constexpr UBorderSlot_Padding_Offset = offsetof(UBorderSlot, Padding);
	static_assert(UBorderSlot_Padding_Offset == 0x40, "UBorderSlot::Padding offset is not 40");
	auto constexpr UBorderSlot_HorizontalAlignment_Offset = offsetof(UBorderSlot, HorizontalAlignment);
	static_assert(UBorderSlot_HorizontalAlignment_Offset == 0x50, "UBorderSlot::HorizontalAlignment offset is not 50");
	auto constexpr UBorderSlot_VerticalAlignment_Offset = offsetof(UBorderSlot, VerticalAlignment);
	static_assert(UBorderSlot_VerticalAlignment_Offset == 0x51, "UBorderSlot::VerticalAlignment offset is not 51");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
