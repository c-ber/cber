#pragma once
#include "UUmgBaseWidget.hpp"
#include "FUmgWidgetBinder_Gerneral.hpp"
#include "FUmgWidgetBinder_Image.hpp"
#include "FUmgWidgetBinder_Animation.hpp"
#include "FLinearColor.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTslBreatheBarWidget // Size: 0x480
	: public UUmgBaseWidget // Size: 0x300
{
private:
	typedef UTslBreatheBarWidget t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1558); // id32("Class TslGame.TslBreatheBarWidget")
		return ptr;
	}
	ExternalPtr<struct UTslHUD> TslHudCached; /* Ofs: 0x300 Size: 0x8 - ObjectProperty TslGame.TslBreatheBarWidget.TslHudCached */
	ExternalPtr<struct UTslPlayerController> TslPlayerControllerCached; /* Ofs: 0x308 Size: 0x8 - ObjectProperty TslGame.TslBreatheBarWidget.TslPlayerControllerCached */
	ExternalPtr<struct UCharacterBreathComponent> BreathComponentCached; /* Ofs: 0x310 Size: 0x8 - ObjectProperty TslGame.TslBreatheBarWidget.BreathComponentCached */
	FUmgWidgetBinder_Gerneral BreathGaugeLayer_Binder; /* Ofs: 0x318 Size: 0x20 - StructProperty TslGame.TslBreatheBarWidget.BreathGaugeLayer_Binder */
	FUmgWidgetBinder_Image BreathGaugeBG_Binder; /* Ofs: 0x338 Size: 0x28 - StructProperty TslGame.TslBreatheBarWidget.BreathGaugeBG_Binder */
	FUmgWidgetBinder_Animation Breathing_Binder; /* Ofs: 0x360 Size: 0x20 - StructProperty TslGame.TslBreatheBarWidget.Breathing_Binder */
	FUmgWidgetBinder_Animation Drowning_Binder; /* Ofs: 0x380 Size: 0x20 - StructProperty TslGame.TslBreatheBarWidget.Drowning_Binder */
	FUmgWidgetBinder_Animation Vanishing_Binder; /* Ofs: 0x3A0 Size: 0x20 - StructProperty TslGame.TslBreatheBarWidget.Vanishing_Binder */
	FUmgWidgetBinder_Animation Emerging_Binder; /* Ofs: 0x3C0 Size: 0x20 - StructProperty TslGame.TslBreatheBarWidget.Emerging_Binder */
	FUmgWidgetBinder_Animation Cooldown_Binder; /* Ofs: 0x3E0 Size: 0x20 - StructProperty TslGame.TslBreatheBarWidget.Cooldown_Binder */
	FUmgWidgetBinder_Animation OutOfBreath_Binder; /* Ofs: 0x400 Size: 0x20 - StructProperty TslGame.TslBreatheBarWidget.OutOfBreath_Binder */
	FName BreathComponentTag; /* Ofs: 0x420 Size: 0x8 - NameProperty TslGame.TslBreatheBarWidget.BreathComponentTag */
	FName CooldownBuffName; /* Ofs: 0x428 Size: 0x8 - NameProperty TslGame.TslBreatheBarWidget.CooldownBuffName */
	float BreathRatioDisplay; /* Ofs: 0x430 Size: 0x4 - FloatProperty TslGame.TslBreatheBarWidget.BreathRatioDisplay */
	float BreathRatio; /* Ofs: 0x434 Size: 0x4 - FloatProperty TslGame.TslBreatheBarWidget.BreathRatio */
	float LerpTolerance; /* Ofs: 0x438 Size: 0x4 - FloatProperty TslGame.TslBreatheBarWidget.LerpTolerance */
	float LerpTime; /* Ofs: 0x43C Size: 0x4 - FloatProperty TslGame.TslBreatheBarWidget.LerpTime */
	FLinearColor BreathImgColor_Less_101; /* Ofs: 0x440 Size: 0x10 - StructProperty TslGame.TslBreatheBarWidget.BreathImgColor_Less_101 */
	FLinearColor BreathImgColor_Less_51; /* Ofs: 0x450 Size: 0x10 - StructProperty TslGame.TslBreatheBarWidget.BreathImgColor_Less_51 */
	FLinearColor BreathImgColor_Less_11; /* Ofs: 0x460 Size: 0x10 - StructProperty TslGame.TslBreatheBarWidget.BreathImgColor_Less_11 */
	ExternalPtr<struct UAkAudioEvent> OutOfBreathSound; /* Ofs: 0x470 Size: 0x8 - ObjectProperty TslGame.TslBreatheBarWidget.OutOfBreathSound */
	uint8_t boolField478;
	uint8_t boolField479;
	uint8_t boolField47A;
	uint8_t UnknownData47B[0x5];


	inline bool SetTslHudCached(t_structHelper inst, ExternalPtr<struct UTslHUD> value) { inst.WriteOffset(0x300, value); }
	inline bool SetTslPlayerControllerCached(t_structHelper inst, ExternalPtr<struct UTslPlayerController> value) { inst.WriteOffset(0x308, value); }
	inline bool SetBreathComponentCached(t_structHelper inst, ExternalPtr<struct UCharacterBreathComponent> value) { inst.WriteOffset(0x310, value); }
	inline bool SetBreathGaugeLayer_Binder(t_structHelper inst, FUmgWidgetBinder_Gerneral value) { inst.WriteOffset(0x318, value); }
	inline bool SetBreathGaugeBG_Binder(t_structHelper inst, FUmgWidgetBinder_Image value) { inst.WriteOffset(0x338, value); }
	inline bool SetBreathing_Binder(t_structHelper inst, FUmgWidgetBinder_Animation value) { inst.WriteOffset(0x360, value); }
	inline bool SetDrowning_Binder(t_structHelper inst, FUmgWidgetBinder_Animation value) { inst.WriteOffset(0x380, value); }
	inline bool SetVanishing_Binder(t_structHelper inst, FUmgWidgetBinder_Animation value) { inst.WriteOffset(0x3A0, value); }
	inline bool SetEmerging_Binder(t_structHelper inst, FUmgWidgetBinder_Animation value) { inst.WriteOffset(0x3C0, value); }
	inline bool SetCooldown_Binder(t_structHelper inst, FUmgWidgetBinder_Animation value) { inst.WriteOffset(0x3E0, value); }
	inline bool SetOutOfBreath_Binder(t_structHelper inst, FUmgWidgetBinder_Animation value) { inst.WriteOffset(0x400, value); }
	inline bool SetBreathComponentTag(t_structHelper inst, FName value) { inst.WriteOffset(0x420, value); }
	inline bool SetCooldownBuffName(t_structHelper inst, FName value) { inst.WriteOffset(0x428, value); }
	inline bool SetBreathRatioDisplay(t_structHelper inst, float value) { inst.WriteOffset(0x430, value); }
	inline bool SetBreathRatio(t_structHelper inst, float value) { inst.WriteOffset(0x434, value); }
	inline bool SetLerpTolerance(t_structHelper inst, float value) { inst.WriteOffset(0x438, value); }
	inline bool SetLerpTime(t_structHelper inst, float value) { inst.WriteOffset(0x43C, value); }
	inline bool SetBreathImgColor_Less_101(t_structHelper inst, FLinearColor value) { inst.WriteOffset(0x440, value); }
	inline bool SetBreathImgColor_Less_51(t_structHelper inst, FLinearColor value) { inst.WriteOffset(0x450, value); }
	inline bool SetBreathImgColor_Less_11(t_structHelper inst, FLinearColor value) { inst.WriteOffset(0x460, value); }
	inline bool SetOutOfBreathSound(t_structHelper inst, ExternalPtr<struct UAkAudioEvent> value) { inst.WriteOffset(0x470, value); }
	inline bool bIsVanishing()
	{
		return boolField478& 0x1;
	}
	inline bool SetbIsVanishing(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x478, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bEventBound()
	{
		return boolField479& 0x1;
	}
	inline bool SetbEventBound(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x479, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bIsCooldown()
	{
		return boolField47A& 0x1;
	}
	inline bool SetbIsCooldown(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x47A, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTslBreatheBarWidget = sizeof(UTslBreatheBarWidget); // 1152
    static_assert(sizeof(UTslBreatheBarWidget) == 0x480, "Size of UTslBreatheBarWidget is not correct.");
	auto constexpr UTslBreatheBarWidget_TslHudCached_Offset = offsetof(UTslBreatheBarWidget, TslHudCached);
	static_assert(UTslBreatheBarWidget_TslHudCached_Offset == 0x300, "UTslBreatheBarWidget::TslHudCached offset is not 300");
	auto constexpr UTslBreatheBarWidget_TslPlayerControllerCached_Offset = offsetof(UTslBreatheBarWidget, TslPlayerControllerCached);
	static_assert(UTslBreatheBarWidget_TslPlayerControllerCached_Offset == 0x308, "UTslBreatheBarWidget::TslPlayerControllerCached offset is not 308");
	auto constexpr UTslBreatheBarWidget_BreathComponentCached_Offset = offsetof(UTslBreatheBarWidget, BreathComponentCached);
	static_assert(UTslBreatheBarWidget_BreathComponentCached_Offset == 0x310, "UTslBreatheBarWidget::BreathComponentCached offset is not 310");
	auto constexpr UTslBreatheBarWidget_BreathGaugeLayer_Binder_Offset = offsetof(UTslBreatheBarWidget, BreathGaugeLayer_Binder);
	static_assert(UTslBreatheBarWidget_BreathGaugeLayer_Binder_Offset == 0x318, "UTslBreatheBarWidget::BreathGaugeLayer_Binder offset is not 318");
	auto constexpr UTslBreatheBarWidget_BreathGaugeBG_Binder_Offset = offsetof(UTslBreatheBarWidget, BreathGaugeBG_Binder);
	static_assert(UTslBreatheBarWidget_BreathGaugeBG_Binder_Offset == 0x338, "UTslBreatheBarWidget::BreathGaugeBG_Binder offset is not 338");
	auto constexpr UTslBreatheBarWidget_Breathing_Binder_Offset = offsetof(UTslBreatheBarWidget, Breathing_Binder);
	static_assert(UTslBreatheBarWidget_Breathing_Binder_Offset == 0x360, "UTslBreatheBarWidget::Breathing_Binder offset is not 360");
	auto constexpr UTslBreatheBarWidget_Drowning_Binder_Offset = offsetof(UTslBreatheBarWidget, Drowning_Binder);
	static_assert(UTslBreatheBarWidget_Drowning_Binder_Offset == 0x380, "UTslBreatheBarWidget::Drowning_Binder offset is not 380");
	auto constexpr UTslBreatheBarWidget_Vanishing_Binder_Offset = offsetof(UTslBreatheBarWidget, Vanishing_Binder);
	static_assert(UTslBreatheBarWidget_Vanishing_Binder_Offset == 0x3a0, "UTslBreatheBarWidget::Vanishing_Binder offset is not 3a0");
	auto constexpr UTslBreatheBarWidget_Emerging_Binder_Offset = offsetof(UTslBreatheBarWidget, Emerging_Binder);
	static_assert(UTslBreatheBarWidget_Emerging_Binder_Offset == 0x3c0, "UTslBreatheBarWidget::Emerging_Binder offset is not 3c0");
	auto constexpr UTslBreatheBarWidget_Cooldown_Binder_Offset = offsetof(UTslBreatheBarWidget, Cooldown_Binder);
	static_assert(UTslBreatheBarWidget_Cooldown_Binder_Offset == 0x3e0, "UTslBreatheBarWidget::Cooldown_Binder offset is not 3e0");
	auto constexpr UTslBreatheBarWidget_OutOfBreath_Binder_Offset = offsetof(UTslBreatheBarWidget, OutOfBreath_Binder);
	static_assert(UTslBreatheBarWidget_OutOfBreath_Binder_Offset == 0x400, "UTslBreatheBarWidget::OutOfBreath_Binder offset is not 400");
	auto constexpr UTslBreatheBarWidget_BreathComponentTag_Offset = offsetof(UTslBreatheBarWidget, BreathComponentTag);
	static_assert(UTslBreatheBarWidget_BreathComponentTag_Offset == 0x420, "UTslBreatheBarWidget::BreathComponentTag offset is not 420");
	auto constexpr UTslBreatheBarWidget_CooldownBuffName_Offset = offsetof(UTslBreatheBarWidget, CooldownBuffName);
	static_assert(UTslBreatheBarWidget_CooldownBuffName_Offset == 0x428, "UTslBreatheBarWidget::CooldownBuffName offset is not 428");
	auto constexpr UTslBreatheBarWidget_BreathRatioDisplay_Offset = offsetof(UTslBreatheBarWidget, BreathRatioDisplay);
	static_assert(UTslBreatheBarWidget_BreathRatioDisplay_Offset == 0x430, "UTslBreatheBarWidget::BreathRatioDisplay offset is not 430");
	auto constexpr UTslBreatheBarWidget_BreathRatio_Offset = offsetof(UTslBreatheBarWidget, BreathRatio);
	static_assert(UTslBreatheBarWidget_BreathRatio_Offset == 0x434, "UTslBreatheBarWidget::BreathRatio offset is not 434");
	auto constexpr UTslBreatheBarWidget_LerpTolerance_Offset = offsetof(UTslBreatheBarWidget, LerpTolerance);
	static_assert(UTslBreatheBarWidget_LerpTolerance_Offset == 0x438, "UTslBreatheBarWidget::LerpTolerance offset is not 438");
	auto constexpr UTslBreatheBarWidget_LerpTime_Offset = offsetof(UTslBreatheBarWidget, LerpTime);
	static_assert(UTslBreatheBarWidget_LerpTime_Offset == 0x43c, "UTslBreatheBarWidget::LerpTime offset is not 43c");
	auto constexpr UTslBreatheBarWidget_BreathImgColor_Less_101_Offset = offsetof(UTslBreatheBarWidget, BreathImgColor_Less_101);
	static_assert(UTslBreatheBarWidget_BreathImgColor_Less_101_Offset == 0x440, "UTslBreatheBarWidget::BreathImgColor_Less_101 offset is not 440");
	auto constexpr UTslBreatheBarWidget_BreathImgColor_Less_51_Offset = offsetof(UTslBreatheBarWidget, BreathImgColor_Less_51);
	static_assert(UTslBreatheBarWidget_BreathImgColor_Less_51_Offset == 0x450, "UTslBreatheBarWidget::BreathImgColor_Less_51 offset is not 450");
	auto constexpr UTslBreatheBarWidget_BreathImgColor_Less_11_Offset = offsetof(UTslBreatheBarWidget, BreathImgColor_Less_11);
	static_assert(UTslBreatheBarWidget_BreathImgColor_Less_11_Offset == 0x460, "UTslBreatheBarWidget::BreathImgColor_Less_11 offset is not 460");
	auto constexpr UTslBreatheBarWidget_OutOfBreathSound_Offset = offsetof(UTslBreatheBarWidget, OutOfBreathSound);
	static_assert(UTslBreatheBarWidget_OutOfBreathSound_Offset == 0x470, "UTslBreatheBarWidget::OutOfBreathSound offset is not 470");
	auto constexpr UTslBreatheBarWidget_boolField478_Offset = offsetof(UTslBreatheBarWidget, boolField478);
	static_assert(UTslBreatheBarWidget_boolField478_Offset == 0x478, "UTslBreatheBarWidget::boolField478 offset is not 478");
	auto constexpr UTslBreatheBarWidget_boolField479_Offset = offsetof(UTslBreatheBarWidget, boolField479);
	static_assert(UTslBreatheBarWidget_boolField479_Offset == 0x479, "UTslBreatheBarWidget::boolField479 offset is not 479");
	auto constexpr UTslBreatheBarWidget_boolField47A_Offset = offsetof(UTslBreatheBarWidget, boolField47A);
	static_assert(UTslBreatheBarWidget_boolField47A_Offset == 0x47a, "UTslBreatheBarWidget::boolField47A offset is not 47a");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
