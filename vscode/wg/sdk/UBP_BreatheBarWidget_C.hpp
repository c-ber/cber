#pragma once
#include "UTslBreatheBarWidget.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBP_BreatheBarWidget_C // Size: 0x4B8
	: public UTslBreatheBarWidget // Size: 0x480
{
private:
	typedef UBP_BreatheBarWidget_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(68897); // id32("WidgetBlueprintGeneratedClass BP_BreatheBarWidget.BP_BreatheBarWidget_C")
		return ptr;
	}
	ExternalPtr<struct UWidgetAnimation> Cooldown; /* Ofs: 0x480 Size: 0x8 - ObjectProperty BP_BreatheBarWidget.BP_BreatheBarWidget_C.Cooldown */
	ExternalPtr<struct UWidgetAnimation> Emerging; /* Ofs: 0x488 Size: 0x8 - ObjectProperty BP_BreatheBarWidget.BP_BreatheBarWidget_C.Emerging */
	ExternalPtr<struct UWidgetAnimation> Vanishing; /* Ofs: 0x490 Size: 0x8 - ObjectProperty BP_BreatheBarWidget.BP_BreatheBarWidget_C.Vanishing */
	ExternalPtr<struct UWidgetAnimation> Drowning; /* Ofs: 0x498 Size: 0x8 - ObjectProperty BP_BreatheBarWidget.BP_BreatheBarWidget_C.Drowning */
	ExternalPtr<struct UWidgetAnimation> Breathing; /* Ofs: 0x4A0 Size: 0x8 - ObjectProperty BP_BreatheBarWidget.BP_BreatheBarWidget_C.Breathing */
	ExternalPtr<struct UImage> BreathGaugeBG; /* Ofs: 0x4A8 Size: 0x8 - ObjectProperty BP_BreatheBarWidget.BP_BreatheBarWidget_C.BreathGaugeBG */
	ExternalPtr<struct UInvalidationBox> BreathGaugeInvalidationBox; /* Ofs: 0x4B0 Size: 0x8 - ObjectProperty BP_BreatheBarWidget.BP_BreatheBarWidget_C.BreathGaugeInvalidationBox */


	inline bool SetCooldown(t_structHelper inst, ExternalPtr<struct UWidgetAnimation> value) { inst.WriteOffset(0x480, value); }
	inline bool SetEmerging(t_structHelper inst, ExternalPtr<struct UWidgetAnimation> value) { inst.WriteOffset(0x488, value); }
	inline bool SetVanishing(t_structHelper inst, ExternalPtr<struct UWidgetAnimation> value) { inst.WriteOffset(0x490, value); }
	inline bool SetDrowning(t_structHelper inst, ExternalPtr<struct UWidgetAnimation> value) { inst.WriteOffset(0x498, value); }
	inline bool SetBreathing(t_structHelper inst, ExternalPtr<struct UWidgetAnimation> value) { inst.WriteOffset(0x4A0, value); }
	inline bool SetBreathGaugeBG(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x4A8, value); }
	inline bool SetBreathGaugeInvalidationBox(t_structHelper inst, ExternalPtr<struct UInvalidationBox> value) { inst.WriteOffset(0x4B0, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBP_BreatheBarWidget_C = sizeof(UBP_BreatheBarWidget_C); // 1208
    static_assert(sizeof(UBP_BreatheBarWidget_C) == 0x4B8, "Size of UBP_BreatheBarWidget_C is not correct.");
	auto constexpr UBP_BreatheBarWidget_C_Cooldown_Offset = offsetof(UBP_BreatheBarWidget_C, Cooldown);
	static_assert(UBP_BreatheBarWidget_C_Cooldown_Offset == 0x480, "UBP_BreatheBarWidget_C::Cooldown offset is not 480");
	auto constexpr UBP_BreatheBarWidget_C_Emerging_Offset = offsetof(UBP_BreatheBarWidget_C, Emerging);
	static_assert(UBP_BreatheBarWidget_C_Emerging_Offset == 0x488, "UBP_BreatheBarWidget_C::Emerging offset is not 488");
	auto constexpr UBP_BreatheBarWidget_C_Vanishing_Offset = offsetof(UBP_BreatheBarWidget_C, Vanishing);
	static_assert(UBP_BreatheBarWidget_C_Vanishing_Offset == 0x490, "UBP_BreatheBarWidget_C::Vanishing offset is not 490");
	auto constexpr UBP_BreatheBarWidget_C_Drowning_Offset = offsetof(UBP_BreatheBarWidget_C, Drowning);
	static_assert(UBP_BreatheBarWidget_C_Drowning_Offset == 0x498, "UBP_BreatheBarWidget_C::Drowning offset is not 498");
	auto constexpr UBP_BreatheBarWidget_C_Breathing_Offset = offsetof(UBP_BreatheBarWidget_C, Breathing);
	static_assert(UBP_BreatheBarWidget_C_Breathing_Offset == 0x4a0, "UBP_BreatheBarWidget_C::Breathing offset is not 4a0");
	auto constexpr UBP_BreatheBarWidget_C_BreathGaugeBG_Offset = offsetof(UBP_BreatheBarWidget_C, BreathGaugeBG);
	static_assert(UBP_BreatheBarWidget_C_BreathGaugeBG_Offset == 0x4a8, "UBP_BreatheBarWidget_C::BreathGaugeBG offset is not 4a8");
	auto constexpr UBP_BreatheBarWidget_C_BreathGaugeInvalidationBox_Offset = offsetof(UBP_BreatheBarWidget_C, BreathGaugeInvalidationBox);
	static_assert(UBP_BreatheBarWidget_C_BreathGaugeInvalidationBox_Offset == 0x4b0, "UBP_BreatheBarWidget_C::BreathGaugeInvalidationBox offset is not 4b0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
