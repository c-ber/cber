#pragma once
#include "UPanelSlot.hpp"
#include "FMargin.hpp"
#include "FSlateChildSize.hpp"
#include "EHorizontalAlignment.hpp"
#include "EVerticalAlignment.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UVerticalBoxSlot // Size: 0x68
	: public UPanelSlot // Size: 0x40
{
private:
	typedef UVerticalBoxSlot t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(476); // id32("Class UMG.VerticalBoxSlot")
		return ptr;
	}
	FMargin Padding; /* Ofs: 0x40 Size: 0x10 - StructProperty UMG.VerticalBoxSlot.Padding */
	FSlateChildSize Size; /* Ofs: 0x50 Size: 0x8 - StructProperty UMG.VerticalBoxSlot.Size */
	TEnumAsByte<enum EHorizontalAlignment> HorizontalAlignment; /* Ofs: 0x58 Size: 0x1 - ByteProperty UMG.VerticalBoxSlot.HorizontalAlignment */
	TEnumAsByte<enum EVerticalAlignment> VerticalAlignment; /* Ofs: 0x59 Size: 0x1 - ByteProperty UMG.VerticalBoxSlot.VerticalAlignment */
	uint8_t UnknownData5A[0xE];


	inline bool SetPadding(t_structHelper inst, FMargin value) { inst.WriteOffset(0x40, value); }
	inline bool SetSize(t_structHelper inst, FSlateChildSize value) { inst.WriteOffset(0x50, value); }
	inline bool SetHorizontalAlignment(t_structHelper inst, TEnumAsByte<enum EHorizontalAlignment> value) { inst.WriteOffset(0x58, value); }
	inline bool SetVerticalAlignment(t_structHelper inst, TEnumAsByte<enum EVerticalAlignment> value) { inst.WriteOffset(0x59, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUVerticalBoxSlot = sizeof(UVerticalBoxSlot); // 104
    static_assert(sizeof(UVerticalBoxSlot) == 0x68, "Size of UVerticalBoxSlot is not correct.");
	auto constexpr UVerticalBoxSlot_Padding_Offset = offsetof(UVerticalBoxSlot, Padding);
	static_assert(UVerticalBoxSlot_Padding_Offset == 0x40, "UVerticalBoxSlot::Padding offset is not 40");
	auto constexpr UVerticalBoxSlot_Size_Offset = offsetof(UVerticalBoxSlot, Size);
	static_assert(UVerticalBoxSlot_Size_Offset == 0x50, "UVerticalBoxSlot::Size offset is not 50");
	auto constexpr UVerticalBoxSlot_HorizontalAlignment_Offset = offsetof(UVerticalBoxSlot, HorizontalAlignment);
	static_assert(UVerticalBoxSlot_HorizontalAlignment_Offset == 0x58, "UVerticalBoxSlot::HorizontalAlignment offset is not 58");
	auto constexpr UVerticalBoxSlot_VerticalAlignment_Offset = offsetof(UVerticalBoxSlot, VerticalAlignment);
	static_assert(UVerticalBoxSlot_VerticalAlignment_Offset == 0x59, "UVerticalBoxSlot::VerticalAlignment offset is not 59");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
