#pragma once
#include "UPanelSlot.hpp"
#include "FMargin.hpp"
#include "EHorizontalAlignment.hpp"
#include "EVerticalAlignment.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UWrapBoxSlot // Size: 0x68
	: public UPanelSlot // Size: 0x40
{
private:
	typedef UWrapBoxSlot t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(483); // id32("Class UMG.WrapBoxSlot")
		return ptr;
	}
	FMargin Padding; /* Ofs: 0x40 Size: 0x10 - StructProperty UMG.WrapBoxSlot.Padding */
	uint8_t boolField50;
	uint8_t UnknownData51[0x3];
	float FillSpanWhenLessThan; /* Ofs: 0x54 Size: 0x4 - FloatProperty UMG.WrapBoxSlot.FillSpanWhenLessThan */
	TEnumAsByte<enum EHorizontalAlignment> HorizontalAlignment; /* Ofs: 0x58 Size: 0x1 - ByteProperty UMG.WrapBoxSlot.HorizontalAlignment */
	TEnumAsByte<enum EVerticalAlignment> VerticalAlignment; /* Ofs: 0x59 Size: 0x1 - ByteProperty UMG.WrapBoxSlot.VerticalAlignment */
	uint8_t UnknownData5A[0xE];


	inline bool SetPadding(t_structHelper inst, FMargin value) { inst.WriteOffset(0x40, value); }
	inline bool bFillEmptySpace()
	{
		return boolField50& 0x1;
	}
	inline bool SetbFillEmptySpace(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x50, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetFillSpanWhenLessThan(t_structHelper inst, float value) { inst.WriteOffset(0x54, value); }
	inline bool SetHorizontalAlignment(t_structHelper inst, TEnumAsByte<enum EHorizontalAlignment> value) { inst.WriteOffset(0x58, value); }
	inline bool SetVerticalAlignment(t_structHelper inst, TEnumAsByte<enum EVerticalAlignment> value) { inst.WriteOffset(0x59, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUWrapBoxSlot = sizeof(UWrapBoxSlot); // 104
    static_assert(sizeof(UWrapBoxSlot) == 0x68, "Size of UWrapBoxSlot is not correct.");
	auto constexpr UWrapBoxSlot_Padding_Offset = offsetof(UWrapBoxSlot, Padding);
	static_assert(UWrapBoxSlot_Padding_Offset == 0x40, "UWrapBoxSlot::Padding offset is not 40");
	auto constexpr UWrapBoxSlot_boolField50_Offset = offsetof(UWrapBoxSlot, boolField50);
	static_assert(UWrapBoxSlot_boolField50_Offset == 0x50, "UWrapBoxSlot::boolField50 offset is not 50");
	auto constexpr UWrapBoxSlot_FillSpanWhenLessThan_Offset = offsetof(UWrapBoxSlot, FillSpanWhenLessThan);
	static_assert(UWrapBoxSlot_FillSpanWhenLessThan_Offset == 0x54, "UWrapBoxSlot::FillSpanWhenLessThan offset is not 54");
	auto constexpr UWrapBoxSlot_HorizontalAlignment_Offset = offsetof(UWrapBoxSlot, HorizontalAlignment);
	static_assert(UWrapBoxSlot_HorizontalAlignment_Offset == 0x58, "UWrapBoxSlot::HorizontalAlignment offset is not 58");
	auto constexpr UWrapBoxSlot_VerticalAlignment_Offset = offsetof(UWrapBoxSlot, VerticalAlignment);
	static_assert(UWrapBoxSlot_VerticalAlignment_Offset == 0x59, "UWrapBoxSlot::VerticalAlignment offset is not 59");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
