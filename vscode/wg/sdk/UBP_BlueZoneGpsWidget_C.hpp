#pragma once
#include "UBluezoneGpsBaseWidget.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBP_BlueZoneGpsWidget_C // Size: 0x6B8
	: public UBluezoneGpsBaseWidget // Size: 0x670
{
private:
	typedef UBP_BlueZoneGpsWidget_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(190166); // id32("WidgetBlueprintGeneratedClass BP_BlueZoneGpsWidget.BP_BlueZoneGpsWidget_C")
		return ptr;
	}
	ExternalPtr<struct UWidgetAnimation> MovingAnimation; /* Ofs: 0x670 Size: 0x8 - ObjectProperty BP_BlueZoneGpsWidget.BP_BlueZoneGpsWidget_C.MovingAnimation */
	ExternalPtr<struct UWidgetAnimation> Warning_Tritanopia; /* Ofs: 0x678 Size: 0x8 - ObjectProperty BP_BlueZoneGpsWidget.BP_BlueZoneGpsWidget_C.Warning_Tritanopia */
	ExternalPtr<struct UWidgetAnimation> Warning_Protanopia; /* Ofs: 0x680 Size: 0x8 - ObjectProperty BP_BlueZoneGpsWidget.BP_BlueZoneGpsWidget_C.Warning_Protanopia */
	ExternalPtr<struct UWidgetAnimation> Warning_Deuteranopia; /* Ofs: 0x688 Size: 0x8 - ObjectProperty BP_BlueZoneGpsWidget.BP_BlueZoneGpsWidget_C.Warning_Deuteranopia */
	ExternalPtr<struct UWidgetAnimation> WidgetVanishing; /* Ofs: 0x690 Size: 0x8 - ObjectProperty BP_BlueZoneGpsWidget.BP_BlueZoneGpsWidget_C.WidgetVanishing */
	ExternalPtr<struct UWidgetAnimation> WidgetEmerging; /* Ofs: 0x698 Size: 0x8 - ObjectProperty BP_BlueZoneGpsWidget.BP_BlueZoneGpsWidget_C.WidgetEmerging */
	ExternalPtr<struct UWidgetAnimation> LeaveNextPlayzone; /* Ofs: 0x6A0 Size: 0x8 - ObjectProperty BP_BlueZoneGpsWidget.BP_BlueZoneGpsWidget_C.LeaveNextPlayzone */
	ExternalPtr<struct UWidgetAnimation> EnterNextPlayzone; /* Ofs: 0x6A8 Size: 0x8 - ObjectProperty BP_BlueZoneGpsWidget.BP_BlueZoneGpsWidget_C.EnterNextPlayzone */
	ExternalPtr<struct UWidgetAnimation> Warning_Normal; /* Ofs: 0x6B0 Size: 0x8 - ObjectProperty BP_BlueZoneGpsWidget.BP_BlueZoneGpsWidget_C.Warning_Normal */


	inline bool SetMovingAnimation(t_structHelper inst, ExternalPtr<struct UWidgetAnimation> value) { inst.WriteOffset(0x670, value); }
	inline bool SetWarning_Tritanopia(t_structHelper inst, ExternalPtr<struct UWidgetAnimation> value) { inst.WriteOffset(0x678, value); }
	inline bool SetWarning_Protanopia(t_structHelper inst, ExternalPtr<struct UWidgetAnimation> value) { inst.WriteOffset(0x680, value); }
	inline bool SetWarning_Deuteranopia(t_structHelper inst, ExternalPtr<struct UWidgetAnimation> value) { inst.WriteOffset(0x688, value); }
	inline bool SetWidgetVanishing(t_structHelper inst, ExternalPtr<struct UWidgetAnimation> value) { inst.WriteOffset(0x690, value); }
	inline bool SetWidgetEmerging(t_structHelper inst, ExternalPtr<struct UWidgetAnimation> value) { inst.WriteOffset(0x698, value); }
	inline bool SetLeaveNextPlayzone(t_structHelper inst, ExternalPtr<struct UWidgetAnimation> value) { inst.WriteOffset(0x6A0, value); }
	inline bool SetEnterNextPlayzone(t_structHelper inst, ExternalPtr<struct UWidgetAnimation> value) { inst.WriteOffset(0x6A8, value); }
	inline bool SetWarning_Normal(t_structHelper inst, ExternalPtr<struct UWidgetAnimation> value) { inst.WriteOffset(0x6B0, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBP_BlueZoneGpsWidget_C = sizeof(UBP_BlueZoneGpsWidget_C); // 1720
    static_assert(sizeof(UBP_BlueZoneGpsWidget_C) == 0x6B8, "Size of UBP_BlueZoneGpsWidget_C is not correct.");
	auto constexpr UBP_BlueZoneGpsWidget_C_MovingAnimation_Offset = offsetof(UBP_BlueZoneGpsWidget_C, MovingAnimation);
	static_assert(UBP_BlueZoneGpsWidget_C_MovingAnimation_Offset == 0x670, "UBP_BlueZoneGpsWidget_C::MovingAnimation offset is not 670");
	auto constexpr UBP_BlueZoneGpsWidget_C_Warning_Tritanopia_Offset = offsetof(UBP_BlueZoneGpsWidget_C, Warning_Tritanopia);
	static_assert(UBP_BlueZoneGpsWidget_C_Warning_Tritanopia_Offset == 0x678, "UBP_BlueZoneGpsWidget_C::Warning_Tritanopia offset is not 678");
	auto constexpr UBP_BlueZoneGpsWidget_C_Warning_Protanopia_Offset = offsetof(UBP_BlueZoneGpsWidget_C, Warning_Protanopia);
	static_assert(UBP_BlueZoneGpsWidget_C_Warning_Protanopia_Offset == 0x680, "UBP_BlueZoneGpsWidget_C::Warning_Protanopia offset is not 680");
	auto constexpr UBP_BlueZoneGpsWidget_C_Warning_Deuteranopia_Offset = offsetof(UBP_BlueZoneGpsWidget_C, Warning_Deuteranopia);
	static_assert(UBP_BlueZoneGpsWidget_C_Warning_Deuteranopia_Offset == 0x688, "UBP_BlueZoneGpsWidget_C::Warning_Deuteranopia offset is not 688");
	auto constexpr UBP_BlueZoneGpsWidget_C_WidgetVanishing_Offset = offsetof(UBP_BlueZoneGpsWidget_C, WidgetVanishing);
	static_assert(UBP_BlueZoneGpsWidget_C_WidgetVanishing_Offset == 0x690, "UBP_BlueZoneGpsWidget_C::WidgetVanishing offset is not 690");
	auto constexpr UBP_BlueZoneGpsWidget_C_WidgetEmerging_Offset = offsetof(UBP_BlueZoneGpsWidget_C, WidgetEmerging);
	static_assert(UBP_BlueZoneGpsWidget_C_WidgetEmerging_Offset == 0x698, "UBP_BlueZoneGpsWidget_C::WidgetEmerging offset is not 698");
	auto constexpr UBP_BlueZoneGpsWidget_C_LeaveNextPlayzone_Offset = offsetof(UBP_BlueZoneGpsWidget_C, LeaveNextPlayzone);
	static_assert(UBP_BlueZoneGpsWidget_C_LeaveNextPlayzone_Offset == 0x6a0, "UBP_BlueZoneGpsWidget_C::LeaveNextPlayzone offset is not 6a0");
	auto constexpr UBP_BlueZoneGpsWidget_C_EnterNextPlayzone_Offset = offsetof(UBP_BlueZoneGpsWidget_C, EnterNextPlayzone);
	static_assert(UBP_BlueZoneGpsWidget_C_EnterNextPlayzone_Offset == 0x6a8, "UBP_BlueZoneGpsWidget_C::EnterNextPlayzone offset is not 6a8");
	auto constexpr UBP_BlueZoneGpsWidget_C_Warning_Normal_Offset = offsetof(UBP_BlueZoneGpsWidget_C, Warning_Normal);
	static_assert(UBP_BlueZoneGpsWidget_C_Warning_Normal_Offset == 0x6b0, "UBP_BlueZoneGpsWidget_C::Warning_Normal offset is not 6b0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
