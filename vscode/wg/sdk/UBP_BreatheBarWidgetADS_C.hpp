#pragma once
#include "UTslBreatheBarWidget.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBP_BreatheBarWidgetADS_C // Size: 0x4C0
	: public UTslBreatheBarWidget // Size: 0x480
{
private:
	typedef UBP_BreatheBarWidgetADS_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(68854); // id32("WidgetBlueprintGeneratedClass BP_BreatheBarWidgetADS.BP_BreatheBarWidgetADS_C")
		return ptr;
	}
	ExternalPtr<struct UWidgetAnimation> OutOfBreath; /* Ofs: 0x480 Size: 0x8 - ObjectProperty BP_BreatheBarWidgetADS.BP_BreatheBarWidgetADS_C.OutOfBreath */
	ExternalPtr<struct UWidgetAnimation> Cooldown; /* Ofs: 0x488 Size: 0x8 - ObjectProperty BP_BreatheBarWidgetADS.BP_BreatheBarWidgetADS_C.Cooldown */
	ExternalPtr<struct UWidgetAnimation> Emerging; /* Ofs: 0x490 Size: 0x8 - ObjectProperty BP_BreatheBarWidgetADS.BP_BreatheBarWidgetADS_C.Emerging */
	ExternalPtr<struct UWidgetAnimation> Vanishing; /* Ofs: 0x498 Size: 0x8 - ObjectProperty BP_BreatheBarWidgetADS.BP_BreatheBarWidgetADS_C.Vanishing */
	ExternalPtr<struct UWidgetAnimation> Drowning; /* Ofs: 0x4A0 Size: 0x8 - ObjectProperty BP_BreatheBarWidgetADS.BP_BreatheBarWidgetADS_C.Drowning */
	ExternalPtr<struct UWidgetAnimation> Breathing; /* Ofs: 0x4A8 Size: 0x8 - ObjectProperty BP_BreatheBarWidgetADS.BP_BreatheBarWidgetADS_C.Breathing */
	ExternalPtr<struct UImage> BreathGaugeBG; /* Ofs: 0x4B0 Size: 0x8 - ObjectProperty BP_BreatheBarWidgetADS.BP_BreatheBarWidgetADS_C.BreathGaugeBG */
	ExternalPtr<struct UInvalidationBox> BreathGaugeInvalidationBox; /* Ofs: 0x4B8 Size: 0x8 - ObjectProperty BP_BreatheBarWidgetADS.BP_BreatheBarWidgetADS_C.BreathGaugeInvalidationBox */


	inline bool SetOutOfBreath(t_structHelper inst, ExternalPtr<struct UWidgetAnimation> value) { inst.WriteOffset(0x480, value); }
	inline bool SetCooldown(t_structHelper inst, ExternalPtr<struct UWidgetAnimation> value) { inst.WriteOffset(0x488, value); }
	inline bool SetEmerging(t_structHelper inst, ExternalPtr<struct UWidgetAnimation> value) { inst.WriteOffset(0x490, value); }
	inline bool SetVanishing(t_structHelper inst, ExternalPtr<struct UWidgetAnimation> value) { inst.WriteOffset(0x498, value); }
	inline bool SetDrowning(t_structHelper inst, ExternalPtr<struct UWidgetAnimation> value) { inst.WriteOffset(0x4A0, value); }
	inline bool SetBreathing(t_structHelper inst, ExternalPtr<struct UWidgetAnimation> value) { inst.WriteOffset(0x4A8, value); }
	inline bool SetBreathGaugeBG(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x4B0, value); }
	inline bool SetBreathGaugeInvalidationBox(t_structHelper inst, ExternalPtr<struct UInvalidationBox> value) { inst.WriteOffset(0x4B8, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBP_BreatheBarWidgetADS_C = sizeof(UBP_BreatheBarWidgetADS_C); // 1216
    static_assert(sizeof(UBP_BreatheBarWidgetADS_C) == 0x4C0, "Size of UBP_BreatheBarWidgetADS_C is not correct.");
	auto constexpr UBP_BreatheBarWidgetADS_C_OutOfBreath_Offset = offsetof(UBP_BreatheBarWidgetADS_C, OutOfBreath);
	static_assert(UBP_BreatheBarWidgetADS_C_OutOfBreath_Offset == 0x480, "UBP_BreatheBarWidgetADS_C::OutOfBreath offset is not 480");
	auto constexpr UBP_BreatheBarWidgetADS_C_Cooldown_Offset = offsetof(UBP_BreatheBarWidgetADS_C, Cooldown);
	static_assert(UBP_BreatheBarWidgetADS_C_Cooldown_Offset == 0x488, "UBP_BreatheBarWidgetADS_C::Cooldown offset is not 488");
	auto constexpr UBP_BreatheBarWidgetADS_C_Emerging_Offset = offsetof(UBP_BreatheBarWidgetADS_C, Emerging);
	static_assert(UBP_BreatheBarWidgetADS_C_Emerging_Offset == 0x490, "UBP_BreatheBarWidgetADS_C::Emerging offset is not 490");
	auto constexpr UBP_BreatheBarWidgetADS_C_Vanishing_Offset = offsetof(UBP_BreatheBarWidgetADS_C, Vanishing);
	static_assert(UBP_BreatheBarWidgetADS_C_Vanishing_Offset == 0x498, "UBP_BreatheBarWidgetADS_C::Vanishing offset is not 498");
	auto constexpr UBP_BreatheBarWidgetADS_C_Drowning_Offset = offsetof(UBP_BreatheBarWidgetADS_C, Drowning);
	static_assert(UBP_BreatheBarWidgetADS_C_Drowning_Offset == 0x4a0, "UBP_BreatheBarWidgetADS_C::Drowning offset is not 4a0");
	auto constexpr UBP_BreatheBarWidgetADS_C_Breathing_Offset = offsetof(UBP_BreatheBarWidgetADS_C, Breathing);
	static_assert(UBP_BreatheBarWidgetADS_C_Breathing_Offset == 0x4a8, "UBP_BreatheBarWidgetADS_C::Breathing offset is not 4a8");
	auto constexpr UBP_BreatheBarWidgetADS_C_BreathGaugeBG_Offset = offsetof(UBP_BreatheBarWidgetADS_C, BreathGaugeBG);
	static_assert(UBP_BreatheBarWidgetADS_C_BreathGaugeBG_Offset == 0x4b0, "UBP_BreatheBarWidgetADS_C::BreathGaugeBG offset is not 4b0");
	auto constexpr UBP_BreatheBarWidgetADS_C_BreathGaugeInvalidationBox_Offset = offsetof(UBP_BreatheBarWidgetADS_C, BreathGaugeInvalidationBox);
	static_assert(UBP_BreatheBarWidgetADS_C_BreathGaugeInvalidationBox_Offset == 0x4b8, "UBP_BreatheBarWidgetADS_C::BreathGaugeInvalidationBox offset is not 4b8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
