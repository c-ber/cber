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

struct alignas(1) UHorizontalBoxSlot // Size: 0x68
	: public UPanelSlot // Size: 0x40
{
private:
	typedef UHorizontalBoxSlot t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(469); // id32("Class UMG.HorizontalBoxSlot")
		return ptr;
	}
	FMargin Padding; /* Ofs: 0x40 Size: 0x10 - StructProperty UMG.HorizontalBoxSlot.Padding */
	FSlateChildSize Size; /* Ofs: 0x50 Size: 0x8 - StructProperty UMG.HorizontalBoxSlot.Size */
	TEnumAsByte<enum EHorizontalAlignment> HorizontalAlignment; /* Ofs: 0x58 Size: 0x1 - ByteProperty UMG.HorizontalBoxSlot.HorizontalAlignment */
	TEnumAsByte<enum EVerticalAlignment> VerticalAlignment; /* Ofs: 0x59 Size: 0x1 - ByteProperty UMG.HorizontalBoxSlot.VerticalAlignment */
	uint8_t UnknownData5A[0xE];


	inline bool SetPadding(t_structHelper inst, FMargin value) { inst.WriteOffset(0x40, value); }
	inline bool SetSize(t_structHelper inst, FSlateChildSize value) { inst.WriteOffset(0x50, value); }
	inline bool SetHorizontalAlignment(t_structHelper inst, TEnumAsByte<enum EHorizontalAlignment> value) { inst.WriteOffset(0x58, value); }
	inline bool SetVerticalAlignment(t_structHelper inst, TEnumAsByte<enum EVerticalAlignment> value) { inst.WriteOffset(0x59, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUHorizontalBoxSlot = sizeof(UHorizontalBoxSlot); // 104
    static_assert(sizeof(UHorizontalBoxSlot) == 0x68, "Size of UHorizontalBoxSlot is not correct.");
	auto constexpr UHorizontalBoxSlot_Padding_Offset = offsetof(UHorizontalBoxSlot, Padding);
	static_assert(UHorizontalBoxSlot_Padding_Offset == 0x40, "UHorizontalBoxSlot::Padding offset is not 40");
	auto constexpr UHorizontalBoxSlot_Size_Offset = offsetof(UHorizontalBoxSlot, Size);
	static_assert(UHorizontalBoxSlot_Size_Offset == 0x50, "UHorizontalBoxSlot::Size offset is not 50");
	auto constexpr UHorizontalBoxSlot_HorizontalAlignment_Offset = offsetof(UHorizontalBoxSlot, HorizontalAlignment);
	static_assert(UHorizontalBoxSlot_HorizontalAlignment_Offset == 0x58, "UHorizontalBoxSlot::HorizontalAlignment offset is not 58");
	auto constexpr UHorizontalBoxSlot_VerticalAlignment_Offset = offsetof(UHorizontalBoxSlot, VerticalAlignment);
	static_assert(UHorizontalBoxSlot_VerticalAlignment_Offset == 0x59, "UHorizontalBoxSlot::VerticalAlignment offset is not 59");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
