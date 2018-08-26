#pragma once
#include "UPanelSlot.hpp"
#include "FMargin.hpp"
#include "EHorizontalAlignment.hpp"
#include "EVerticalAlignment.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) USafeZoneSlot // Size: 0x68
	: public UPanelSlot // Size: 0x40
{
private:
	typedef USafeZoneSlot t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(471); // id32("Class UMG.SafeZoneSlot")
		return ptr;
	}
	uint8_t boolField40;
	uint8_t UnknownData41[0x3];
	FMargin SafeAreaScale; /* Ofs: 0x44 Size: 0x10 - StructProperty UMG.SafeZoneSlot.SafeAreaScale */
	TEnumAsByte<enum EHorizontalAlignment> HAlign; /* Ofs: 0x54 Size: 0x1 - ByteProperty UMG.SafeZoneSlot.HAlign */
	TEnumAsByte<enum EVerticalAlignment> VAlign; /* Ofs: 0x55 Size: 0x1 - ByteProperty UMG.SafeZoneSlot.VAlign */
	uint8_t UnknownData56[0x2];
	FMargin Padding; /* Ofs: 0x58 Size: 0x10 - StructProperty UMG.SafeZoneSlot.Padding */


	inline bool bIsTitleSafe()
	{
		return boolField40& 0x1;
	}
	inline bool SetbIsTitleSafe(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x40, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetSafeAreaScale(t_structHelper inst, FMargin value) { inst.WriteOffset(0x44, value); }
	inline bool SetHAlign(t_structHelper inst, TEnumAsByte<enum EHorizontalAlignment> value) { inst.WriteOffset(0x54, value); }
	inline bool SetVAlign(t_structHelper inst, TEnumAsByte<enum EVerticalAlignment> value) { inst.WriteOffset(0x55, value); }
	inline bool SetPadding(t_structHelper inst, FMargin value) { inst.WriteOffset(0x58, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUSafeZoneSlot = sizeof(USafeZoneSlot); // 104
    static_assert(sizeof(USafeZoneSlot) == 0x68, "Size of USafeZoneSlot is not correct.");
	auto constexpr USafeZoneSlot_boolField40_Offset = offsetof(USafeZoneSlot, boolField40);
	static_assert(USafeZoneSlot_boolField40_Offset == 0x40, "USafeZoneSlot::boolField40 offset is not 40");
	auto constexpr USafeZoneSlot_SafeAreaScale_Offset = offsetof(USafeZoneSlot, SafeAreaScale);
	static_assert(USafeZoneSlot_SafeAreaScale_Offset == 0x44, "USafeZoneSlot::SafeAreaScale offset is not 44");
	auto constexpr USafeZoneSlot_HAlign_Offset = offsetof(USafeZoneSlot, HAlign);
	static_assert(USafeZoneSlot_HAlign_Offset == 0x54, "USafeZoneSlot::HAlign offset is not 54");
	auto constexpr USafeZoneSlot_VAlign_Offset = offsetof(USafeZoneSlot, VAlign);
	static_assert(USafeZoneSlot_VAlign_Offset == 0x55, "USafeZoneSlot::VAlign offset is not 55");
	auto constexpr USafeZoneSlot_Padding_Offset = offsetof(USafeZoneSlot, Padding);
	static_assert(USafeZoneSlot_Padding_Offset == 0x58, "USafeZoneSlot::Padding offset is not 58");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
