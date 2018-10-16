#pragma once
#include "UPanelSlot.hpp"
#include "FMargin.hpp"
#include "EHorizontalAlignment.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UScrollBoxSlot // Size: 0x60
	: public UPanelSlot // Size: 0x40
{
private:
	typedef UScrollBoxSlot t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(473); // id32("Class UMG.ScrollBoxSlot")
		return ptr;
	}
	FMargin Padding; /* Ofs: 0x40 Size: 0x10 - StructProperty UMG.ScrollBoxSlot.Padding */
	TEnumAsByte<enum EHorizontalAlignment> HorizontalAlignment; /* Ofs: 0x50 Size: 0x1 - ByteProperty UMG.ScrollBoxSlot.HorizontalAlignment */
	uint8_t UnknownData51[0xF];


	inline bool SetPadding(t_structHelper inst, FMargin value) { inst.WriteOffset(0x40, value); }
	inline bool SetHorizontalAlignment(t_structHelper inst, TEnumAsByte<enum EHorizontalAlignment> value) { inst.WriteOffset(0x50, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUScrollBoxSlot = sizeof(UScrollBoxSlot); // 96
    static_assert(sizeof(UScrollBoxSlot) == 0x60, "Size of UScrollBoxSlot is not correct.");
	auto constexpr UScrollBoxSlot_Padding_Offset = offsetof(UScrollBoxSlot, Padding);
	static_assert(UScrollBoxSlot_Padding_Offset == 0x40, "UScrollBoxSlot::Padding offset is not 40");
	auto constexpr UScrollBoxSlot_HorizontalAlignment_Offset = offsetof(UScrollBoxSlot, HorizontalAlignment);
	static_assert(UScrollBoxSlot_HorizontalAlignment_Offset == 0x50, "UScrollBoxSlot::HorizontalAlignment offset is not 50");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
