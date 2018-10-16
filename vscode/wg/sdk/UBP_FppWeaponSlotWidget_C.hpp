#pragma once
#include "UWeaponSlotBaseWidget.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBP_FppWeaponSlotWidget_C // Size: 0x698
	: public UWeaponSlotBaseWidget // Size: 0x618
{
private:
	typedef UBP_FppWeaponSlotWidget_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(68395); // id32("WidgetBlueprintGeneratedClass BP_FppWeaponSlotWidget.BP_FppWeaponSlotWidget_C")
		return ptr;
	}
	ExternalPtr<struct UWidgetAnimation> UnloadedAmmoIncreasing; /* Ofs: 0x618 Size: 0x8 - ObjectProperty BP_FppWeaponSlotWidget.BP_FppWeaponSlotWidget_C.UnloadedAmmoIncreasing */
	ExternalPtr<struct UWidgetAnimation> UnloadedAmmoDecreasing; /* Ofs: 0x620 Size: 0x8 - ObjectProperty BP_FppWeaponSlotWidget.BP_FppWeaponSlotWidget_C.UnloadedAmmoDecreasing */
	ExternalPtr<struct UWidgetAnimation> AmmoIncreasing; /* Ofs: 0x628 Size: 0x8 - ObjectProperty BP_FppWeaponSlotWidget.BP_FppWeaponSlotWidget_C.AmmoIncreasing */
	ExternalPtr<struct UWidgetAnimation> AmmoDecreasing; /* Ofs: 0x630 Size: 0x8 - ObjectProperty BP_FppWeaponSlotWidget.BP_FppWeaponSlotWidget_C.AmmoDecreasing */
	ExternalPtr<struct UWidgetAnimation> ScaleDown; /* Ofs: 0x638 Size: 0x8 - ObjectProperty BP_FppWeaponSlotWidget.BP_FppWeaponSlotWidget_C.ScaleDown */
	ExternalPtr<struct UWidgetAnimation> ScaleUp; /* Ofs: 0x640 Size: 0x8 - ObjectProperty BP_FppWeaponSlotWidget.BP_FppWeaponSlotWidget_C.ScaleUp */
	ExternalPtr<struct UWidgetAnimation> Hidden; /* Ofs: 0x648 Size: 0x8 - ObjectProperty BP_FppWeaponSlotWidget.BP_FppWeaponSlotWidget_C.Hidden */
	ExternalPtr<struct UWidgetAnimation> show; /* Ofs: 0x650 Size: 0x8 - ObjectProperty BP_FppWeaponSlotWidget.BP_FppWeaponSlotWidget_C.show */
	FScriptMulticastDelegate ShowStart; /* Ofs: 0x658 Size: 0x10 - MulticastDelegateProperty BP_FppWeaponSlotWidget.BP_FppWeaponSlotWidget_C.ShowStart */
	FScriptMulticastDelegate ShowEnd; /* Ofs: 0x668 Size: 0x10 - MulticastDelegateProperty BP_FppWeaponSlotWidget.BP_FppWeaponSlotWidget_C.ShowEnd */
	FScriptMulticastDelegate HIddenStart; /* Ofs: 0x678 Size: 0x10 - MulticastDelegateProperty BP_FppWeaponSlotWidget.BP_FppWeaponSlotWidget_C.HIddenStart */
	FScriptMulticastDelegate HIddenEnd; /* Ofs: 0x688 Size: 0x10 - MulticastDelegateProperty BP_FppWeaponSlotWidget.BP_FppWeaponSlotWidget_C.HIddenEnd */


	inline bool SetUnloadedAmmoIncreasing(t_structHelper inst, ExternalPtr<struct UWidgetAnimation> value) { inst.WriteOffset(0x618, value); }
	inline bool SetUnloadedAmmoDecreasing(t_structHelper inst, ExternalPtr<struct UWidgetAnimation> value) { inst.WriteOffset(0x620, value); }
	inline bool SetAmmoIncreasing(t_structHelper inst, ExternalPtr<struct UWidgetAnimation> value) { inst.WriteOffset(0x628, value); }
	inline bool SetAmmoDecreasing(t_structHelper inst, ExternalPtr<struct UWidgetAnimation> value) { inst.WriteOffset(0x630, value); }
	inline bool SetScaleDown(t_structHelper inst, ExternalPtr<struct UWidgetAnimation> value) { inst.WriteOffset(0x638, value); }
	inline bool SetScaleUp(t_structHelper inst, ExternalPtr<struct UWidgetAnimation> value) { inst.WriteOffset(0x640, value); }
	inline bool SetHidden(t_structHelper inst, ExternalPtr<struct UWidgetAnimation> value) { inst.WriteOffset(0x648, value); }
	inline bool Setshow(t_structHelper inst, ExternalPtr<struct UWidgetAnimation> value) { inst.WriteOffset(0x650, value); }
	inline bool SetShowStart(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x658, value); }
	inline bool SetShowEnd(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x668, value); }
	inline bool SetHIddenStart(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x678, value); }
	inline bool SetHIddenEnd(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x688, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBP_FppWeaponSlotWidget_C = sizeof(UBP_FppWeaponSlotWidget_C); // 1688
    static_assert(sizeof(UBP_FppWeaponSlotWidget_C) == 0x698, "Size of UBP_FppWeaponSlotWidget_C is not correct.");
	auto constexpr UBP_FppWeaponSlotWidget_C_UnloadedAmmoIncreasing_Offset = offsetof(UBP_FppWeaponSlotWidget_C, UnloadedAmmoIncreasing);
	static_assert(UBP_FppWeaponSlotWidget_C_UnloadedAmmoIncreasing_Offset == 0x618, "UBP_FppWeaponSlotWidget_C::UnloadedAmmoIncreasing offset is not 618");
	auto constexpr UBP_FppWeaponSlotWidget_C_UnloadedAmmoDecreasing_Offset = offsetof(UBP_FppWeaponSlotWidget_C, UnloadedAmmoDecreasing);
	static_assert(UBP_FppWeaponSlotWidget_C_UnloadedAmmoDecreasing_Offset == 0x620, "UBP_FppWeaponSlotWidget_C::UnloadedAmmoDecreasing offset is not 620");
	auto constexpr UBP_FppWeaponSlotWidget_C_AmmoIncreasing_Offset = offsetof(UBP_FppWeaponSlotWidget_C, AmmoIncreasing);
	static_assert(UBP_FppWeaponSlotWidget_C_AmmoIncreasing_Offset == 0x628, "UBP_FppWeaponSlotWidget_C::AmmoIncreasing offset is not 628");
	auto constexpr UBP_FppWeaponSlotWidget_C_AmmoDecreasing_Offset = offsetof(UBP_FppWeaponSlotWidget_C, AmmoDecreasing);
	static_assert(UBP_FppWeaponSlotWidget_C_AmmoDecreasing_Offset == 0x630, "UBP_FppWeaponSlotWidget_C::AmmoDecreasing offset is not 630");
	auto constexpr UBP_FppWeaponSlotWidget_C_ScaleDown_Offset = offsetof(UBP_FppWeaponSlotWidget_C, ScaleDown);
	static_assert(UBP_FppWeaponSlotWidget_C_ScaleDown_Offset == 0x638, "UBP_FppWeaponSlotWidget_C::ScaleDown offset is not 638");
	auto constexpr UBP_FppWeaponSlotWidget_C_ScaleUp_Offset = offsetof(UBP_FppWeaponSlotWidget_C, ScaleUp);
	static_assert(UBP_FppWeaponSlotWidget_C_ScaleUp_Offset == 0x640, "UBP_FppWeaponSlotWidget_C::ScaleUp offset is not 640");
	auto constexpr UBP_FppWeaponSlotWidget_C_Hidden_Offset = offsetof(UBP_FppWeaponSlotWidget_C, Hidden);
	static_assert(UBP_FppWeaponSlotWidget_C_Hidden_Offset == 0x648, "UBP_FppWeaponSlotWidget_C::Hidden offset is not 648");
	auto constexpr UBP_FppWeaponSlotWidget_C_show_Offset = offsetof(UBP_FppWeaponSlotWidget_C, show);
	static_assert(UBP_FppWeaponSlotWidget_C_show_Offset == 0x650, "UBP_FppWeaponSlotWidget_C::show offset is not 650");
	auto constexpr UBP_FppWeaponSlotWidget_C_ShowStart_Offset = offsetof(UBP_FppWeaponSlotWidget_C, ShowStart);
	static_assert(UBP_FppWeaponSlotWidget_C_ShowStart_Offset == 0x658, "UBP_FppWeaponSlotWidget_C::ShowStart offset is not 658");
	auto constexpr UBP_FppWeaponSlotWidget_C_ShowEnd_Offset = offsetof(UBP_FppWeaponSlotWidget_C, ShowEnd);
	static_assert(UBP_FppWeaponSlotWidget_C_ShowEnd_Offset == 0x668, "UBP_FppWeaponSlotWidget_C::ShowEnd offset is not 668");
	auto constexpr UBP_FppWeaponSlotWidget_C_HIddenStart_Offset = offsetof(UBP_FppWeaponSlotWidget_C, HIddenStart);
	static_assert(UBP_FppWeaponSlotWidget_C_HIddenStart_Offset == 0x678, "UBP_FppWeaponSlotWidget_C::HIddenStart offset is not 678");
	auto constexpr UBP_FppWeaponSlotWidget_C_HIddenEnd_Offset = offsetof(UBP_FppWeaponSlotWidget_C, HIddenEnd);
	static_assert(UBP_FppWeaponSlotWidget_C_HIddenEnd_Offset == 0x688, "UBP_FppWeaponSlotWidget_C::HIddenEnd offset is not 688");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
