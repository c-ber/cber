#pragma once
#include "UWeaponSlotBaseWidget.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBP_WeaponSlotWidget_C // Size: 0x6D0
	: public UWeaponSlotBaseWidget // Size: 0x618
{
private:
	typedef UBP_WeaponSlotWidget_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(68520); // id32("WidgetBlueprintGeneratedClass BP_WeaponSlotWidget.BP_WeaponSlotWidget_C")
		return ptr;
	}
	ExternalPtr<struct UWidgetAnimation> UnarmFadeOut; /* Ofs: 0x618 Size: 0x8 - ObjectProperty BP_WeaponSlotWidget.BP_WeaponSlotWidget_C.UnarmFadeOut */
	ExternalPtr<struct UWidgetAnimation> UnarmFadeIn; /* Ofs: 0x620 Size: 0x8 - ObjectProperty BP_WeaponSlotWidget.BP_WeaponSlotWidget_C.UnarmFadeIn */
	ExternalPtr<struct UWidgetAnimation> FadeOut; /* Ofs: 0x628 Size: 0x8 - ObjectProperty BP_WeaponSlotWidget.BP_WeaponSlotWidget_C.FadeOut */
	ExternalPtr<struct UWidgetAnimation> FadeIn; /* Ofs: 0x630 Size: 0x8 - ObjectProperty BP_WeaponSlotWidget.BP_WeaponSlotWidget_C.FadeIn */
	ExternalPtr<struct UWidgetAnimation> NewScaleDown; /* Ofs: 0x638 Size: 0x8 - ObjectProperty BP_WeaponSlotWidget.BP_WeaponSlotWidget_C.NewScaleDown */
	ExternalPtr<struct UWidgetAnimation> NewScaleUp; /* Ofs: 0x640 Size: 0x8 - ObjectProperty BP_WeaponSlotWidget.BP_WeaponSlotWidget_C.NewScaleUp */
	ExternalPtr<struct UWidgetAnimation> UnloadedAmmoIncreasing; /* Ofs: 0x648 Size: 0x8 - ObjectProperty BP_WeaponSlotWidget.BP_WeaponSlotWidget_C.UnloadedAmmoIncreasing */
	ExternalPtr<struct UWidgetAnimation> UnloadedAmmoDecreasing; /* Ofs: 0x650 Size: 0x8 - ObjectProperty BP_WeaponSlotWidget.BP_WeaponSlotWidget_C.UnloadedAmmoDecreasing */
	ExternalPtr<struct UWidgetAnimation> AmmoIncreasing; /* Ofs: 0x658 Size: 0x8 - ObjectProperty BP_WeaponSlotWidget.BP_WeaponSlotWidget_C.AmmoIncreasing */
	ExternalPtr<struct UWidgetAnimation> AmmoDecreasing; /* Ofs: 0x660 Size: 0x8 - ObjectProperty BP_WeaponSlotWidget.BP_WeaponSlotWidget_C.AmmoDecreasing */
	ExternalPtr<struct UWidgetAnimation> ScaleDown; /* Ofs: 0x668 Size: 0x8 - ObjectProperty BP_WeaponSlotWidget.BP_WeaponSlotWidget_C.ScaleDown */
	ExternalPtr<struct UWidgetAnimation> ScaleUp; /* Ofs: 0x670 Size: 0x8 - ObjectProperty BP_WeaponSlotWidget.BP_WeaponSlotWidget_C.ScaleUp */
	ExternalPtr<struct UWidgetAnimation> Hidden; /* Ofs: 0x678 Size: 0x8 - ObjectProperty BP_WeaponSlotWidget.BP_WeaponSlotWidget_C.Hidden */
	ExternalPtr<struct UWidgetAnimation> show; /* Ofs: 0x680 Size: 0x8 - ObjectProperty BP_WeaponSlotWidget.BP_WeaponSlotWidget_C.show */
	ExternalPtr<struct UInvalidationBox> WeaponInvalidationBox; /* Ofs: 0x688 Size: 0x8 - ObjectProperty BP_WeaponSlotWidget.BP_WeaponSlotWidget_C.WeaponInvalidationBox */
	FScriptMulticastDelegate ShowStart; /* Ofs: 0x690 Size: 0x10 - MulticastDelegateProperty BP_WeaponSlotWidget.BP_WeaponSlotWidget_C.ShowStart */
	FScriptMulticastDelegate ShowEnd; /* Ofs: 0x6A0 Size: 0x10 - MulticastDelegateProperty BP_WeaponSlotWidget.BP_WeaponSlotWidget_C.ShowEnd */
	FScriptMulticastDelegate HIddenStart; /* Ofs: 0x6B0 Size: 0x10 - MulticastDelegateProperty BP_WeaponSlotWidget.BP_WeaponSlotWidget_C.HIddenStart */
	FScriptMulticastDelegate HIddenEnd; /* Ofs: 0x6C0 Size: 0x10 - MulticastDelegateProperty BP_WeaponSlotWidget.BP_WeaponSlotWidget_C.HIddenEnd */


	inline bool SetUnarmFadeOut(t_structHelper inst, ExternalPtr<struct UWidgetAnimation> value) { inst.WriteOffset(0x618, value); }
	inline bool SetUnarmFadeIn(t_structHelper inst, ExternalPtr<struct UWidgetAnimation> value) { inst.WriteOffset(0x620, value); }
	inline bool SetFadeOut(t_structHelper inst, ExternalPtr<struct UWidgetAnimation> value) { inst.WriteOffset(0x628, value); }
	inline bool SetFadeIn(t_structHelper inst, ExternalPtr<struct UWidgetAnimation> value) { inst.WriteOffset(0x630, value); }
	inline bool SetNewScaleDown(t_structHelper inst, ExternalPtr<struct UWidgetAnimation> value) { inst.WriteOffset(0x638, value); }
	inline bool SetNewScaleUp(t_structHelper inst, ExternalPtr<struct UWidgetAnimation> value) { inst.WriteOffset(0x640, value); }
	inline bool SetUnloadedAmmoIncreasing(t_structHelper inst, ExternalPtr<struct UWidgetAnimation> value) { inst.WriteOffset(0x648, value); }
	inline bool SetUnloadedAmmoDecreasing(t_structHelper inst, ExternalPtr<struct UWidgetAnimation> value) { inst.WriteOffset(0x650, value); }
	inline bool SetAmmoIncreasing(t_structHelper inst, ExternalPtr<struct UWidgetAnimation> value) { inst.WriteOffset(0x658, value); }
	inline bool SetAmmoDecreasing(t_structHelper inst, ExternalPtr<struct UWidgetAnimation> value) { inst.WriteOffset(0x660, value); }
	inline bool SetScaleDown(t_structHelper inst, ExternalPtr<struct UWidgetAnimation> value) { inst.WriteOffset(0x668, value); }
	inline bool SetScaleUp(t_structHelper inst, ExternalPtr<struct UWidgetAnimation> value) { inst.WriteOffset(0x670, value); }
	inline bool SetHidden(t_structHelper inst, ExternalPtr<struct UWidgetAnimation> value) { inst.WriteOffset(0x678, value); }
	inline bool Setshow(t_structHelper inst, ExternalPtr<struct UWidgetAnimation> value) { inst.WriteOffset(0x680, value); }
	inline bool SetWeaponInvalidationBox(t_structHelper inst, ExternalPtr<struct UInvalidationBox> value) { inst.WriteOffset(0x688, value); }
	inline bool SetShowStart(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x690, value); }
	inline bool SetShowEnd(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x6A0, value); }
	inline bool SetHIddenStart(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x6B0, value); }
	inline bool SetHIddenEnd(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x6C0, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBP_WeaponSlotWidget_C = sizeof(UBP_WeaponSlotWidget_C); // 1744
    static_assert(sizeof(UBP_WeaponSlotWidget_C) == 0x6D0, "Size of UBP_WeaponSlotWidget_C is not correct.");
	auto constexpr UBP_WeaponSlotWidget_C_UnarmFadeOut_Offset = offsetof(UBP_WeaponSlotWidget_C, UnarmFadeOut);
	static_assert(UBP_WeaponSlotWidget_C_UnarmFadeOut_Offset == 0x618, "UBP_WeaponSlotWidget_C::UnarmFadeOut offset is not 618");
	auto constexpr UBP_WeaponSlotWidget_C_UnarmFadeIn_Offset = offsetof(UBP_WeaponSlotWidget_C, UnarmFadeIn);
	static_assert(UBP_WeaponSlotWidget_C_UnarmFadeIn_Offset == 0x620, "UBP_WeaponSlotWidget_C::UnarmFadeIn offset is not 620");
	auto constexpr UBP_WeaponSlotWidget_C_FadeOut_Offset = offsetof(UBP_WeaponSlotWidget_C, FadeOut);
	static_assert(UBP_WeaponSlotWidget_C_FadeOut_Offset == 0x628, "UBP_WeaponSlotWidget_C::FadeOut offset is not 628");
	auto constexpr UBP_WeaponSlotWidget_C_FadeIn_Offset = offsetof(UBP_WeaponSlotWidget_C, FadeIn);
	static_assert(UBP_WeaponSlotWidget_C_FadeIn_Offset == 0x630, "UBP_WeaponSlotWidget_C::FadeIn offset is not 630");
	auto constexpr UBP_WeaponSlotWidget_C_NewScaleDown_Offset = offsetof(UBP_WeaponSlotWidget_C, NewScaleDown);
	static_assert(UBP_WeaponSlotWidget_C_NewScaleDown_Offset == 0x638, "UBP_WeaponSlotWidget_C::NewScaleDown offset is not 638");
	auto constexpr UBP_WeaponSlotWidget_C_NewScaleUp_Offset = offsetof(UBP_WeaponSlotWidget_C, NewScaleUp);
	static_assert(UBP_WeaponSlotWidget_C_NewScaleUp_Offset == 0x640, "UBP_WeaponSlotWidget_C::NewScaleUp offset is not 640");
	auto constexpr UBP_WeaponSlotWidget_C_UnloadedAmmoIncreasing_Offset = offsetof(UBP_WeaponSlotWidget_C, UnloadedAmmoIncreasing);
	static_assert(UBP_WeaponSlotWidget_C_UnloadedAmmoIncreasing_Offset == 0x648, "UBP_WeaponSlotWidget_C::UnloadedAmmoIncreasing offset is not 648");
	auto constexpr UBP_WeaponSlotWidget_C_UnloadedAmmoDecreasing_Offset = offsetof(UBP_WeaponSlotWidget_C, UnloadedAmmoDecreasing);
	static_assert(UBP_WeaponSlotWidget_C_UnloadedAmmoDecreasing_Offset == 0x650, "UBP_WeaponSlotWidget_C::UnloadedAmmoDecreasing offset is not 650");
	auto constexpr UBP_WeaponSlotWidget_C_AmmoIncreasing_Offset = offsetof(UBP_WeaponSlotWidget_C, AmmoIncreasing);
	static_assert(UBP_WeaponSlotWidget_C_AmmoIncreasing_Offset == 0x658, "UBP_WeaponSlotWidget_C::AmmoIncreasing offset is not 658");
	auto constexpr UBP_WeaponSlotWidget_C_AmmoDecreasing_Offset = offsetof(UBP_WeaponSlotWidget_C, AmmoDecreasing);
	static_assert(UBP_WeaponSlotWidget_C_AmmoDecreasing_Offset == 0x660, "UBP_WeaponSlotWidget_C::AmmoDecreasing offset is not 660");
	auto constexpr UBP_WeaponSlotWidget_C_ScaleDown_Offset = offsetof(UBP_WeaponSlotWidget_C, ScaleDown);
	static_assert(UBP_WeaponSlotWidget_C_ScaleDown_Offset == 0x668, "UBP_WeaponSlotWidget_C::ScaleDown offset is not 668");
	auto constexpr UBP_WeaponSlotWidget_C_ScaleUp_Offset = offsetof(UBP_WeaponSlotWidget_C, ScaleUp);
	static_assert(UBP_WeaponSlotWidget_C_ScaleUp_Offset == 0x670, "UBP_WeaponSlotWidget_C::ScaleUp offset is not 670");
	auto constexpr UBP_WeaponSlotWidget_C_Hidden_Offset = offsetof(UBP_WeaponSlotWidget_C, Hidden);
	static_assert(UBP_WeaponSlotWidget_C_Hidden_Offset == 0x678, "UBP_WeaponSlotWidget_C::Hidden offset is not 678");
	auto constexpr UBP_WeaponSlotWidget_C_show_Offset = offsetof(UBP_WeaponSlotWidget_C, show);
	static_assert(UBP_WeaponSlotWidget_C_show_Offset == 0x680, "UBP_WeaponSlotWidget_C::show offset is not 680");
	auto constexpr UBP_WeaponSlotWidget_C_WeaponInvalidationBox_Offset = offsetof(UBP_WeaponSlotWidget_C, WeaponInvalidationBox);
	static_assert(UBP_WeaponSlotWidget_C_WeaponInvalidationBox_Offset == 0x688, "UBP_WeaponSlotWidget_C::WeaponInvalidationBox offset is not 688");
	auto constexpr UBP_WeaponSlotWidget_C_ShowStart_Offset = offsetof(UBP_WeaponSlotWidget_C, ShowStart);
	static_assert(UBP_WeaponSlotWidget_C_ShowStart_Offset == 0x690, "UBP_WeaponSlotWidget_C::ShowStart offset is not 690");
	auto constexpr UBP_WeaponSlotWidget_C_ShowEnd_Offset = offsetof(UBP_WeaponSlotWidget_C, ShowEnd);
	static_assert(UBP_WeaponSlotWidget_C_ShowEnd_Offset == 0x6a0, "UBP_WeaponSlotWidget_C::ShowEnd offset is not 6a0");
	auto constexpr UBP_WeaponSlotWidget_C_HIddenStart_Offset = offsetof(UBP_WeaponSlotWidget_C, HIddenStart);
	static_assert(UBP_WeaponSlotWidget_C_HIddenStart_Offset == 0x6b0, "UBP_WeaponSlotWidget_C::HIddenStart offset is not 6b0");
	auto constexpr UBP_WeaponSlotWidget_C_HIddenEnd_Offset = offsetof(UBP_WeaponSlotWidget_C, HIddenEnd);
	static_assert(UBP_WeaponSlotWidget_C_HIddenEnd_Offset == 0x6c0, "UBP_WeaponSlotWidget_C::HIddenEnd offset is not 6c0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
