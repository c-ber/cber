#pragma once
#include "UUmgBaseWidget.hpp"
#include "FUmgWidgetBinder_Animation.hpp"
#include "FUmgWidgetBinder_Gerneral.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTslBoostGaugeWidget // Size: 0x410
	: public UUmgBaseWidget // Size: 0x300
{
private:
	typedef UTslBoostGaugeWidget t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1557); // id32("Class TslGame.TslBoostGaugeWidget")
		return ptr;
	}
	ExternalPtr<struct UMaterialInstanceDynamic> MID_Gauge0_21; /* Ofs: 0x300 Size: 0x8 - ObjectProperty TslGame.TslBoostGaugeWidget.MID_Gauge0_21 */
	ExternalPtr<struct UMaterialInstanceDynamic> MID_Gauge20_61; /* Ofs: 0x308 Size: 0x8 - ObjectProperty TslGame.TslBoostGaugeWidget.MID_Gauge20_61 */
	ExternalPtr<struct UMaterialInstanceDynamic> MID_Gauge60_91; /* Ofs: 0x310 Size: 0x8 - ObjectProperty TslGame.TslBoostGaugeWidget.MID_Gauge60_91 */
	ExternalPtr<struct UMaterialInstanceDynamic> MID_Gauge90_101; /* Ofs: 0x318 Size: 0x8 - ObjectProperty TslGame.TslBoostGaugeWidget.MID_Gauge90_101 */
	FUmgWidgetBinder_Animation VanishingAnimBinder; /* Ofs: 0x320 Size: 0x20 - StructProperty TslGame.TslBoostGaugeWidget.VanishingAnimBinder */
	FUmgWidgetBinder_Animation WarningAnimBinder; /* Ofs: 0x340 Size: 0x20 - StructProperty TslGame.TslBoostGaugeWidget.WarningAnimBinder */
	FUmgWidgetBinder_Animation EmergingAnimBinder; /* Ofs: 0x360 Size: 0x20 - StructProperty TslGame.TslBoostGaugeWidget.EmergingAnimBinder */
	FUmgWidgetBinder_Gerneral Boost0_20ImageBinder; /* Ofs: 0x380 Size: 0x20 - StructProperty TslGame.TslBoostGaugeWidget.Boost0_20ImageBinder */
	FUmgWidgetBinder_Gerneral Boost20_60ImageBinder; /* Ofs: 0x3A0 Size: 0x20 - StructProperty TslGame.TslBoostGaugeWidget.Boost20_60ImageBinder */
	FUmgWidgetBinder_Gerneral Boost60_90ImageBinder; /* Ofs: 0x3C0 Size: 0x20 - StructProperty TslGame.TslBoostGaugeWidget.Boost60_90ImageBinder */
	FUmgWidgetBinder_Gerneral Boost90_100ImageBinder; /* Ofs: 0x3E0 Size: 0x20 - StructProperty TslGame.TslBoostGaugeWidget.Boost90_100ImageBinder */
	float DisplayingBoost; /* Ofs: 0x400 Size: 0x4 - FloatProperty TslGame.TslBoostGaugeWidget.DisplayingBoost */
	uint8_t boolField404;
	uint8_t boolField405;
	uint8_t UnknownData406[0x2];
	float SaveBoostGauge; /* Ofs: 0x408 Size: 0x4 - FloatProperty TslGame.TslBoostGaugeWidget.SaveBoostGauge */
	float SaveBoostGaugeMax; /* Ofs: 0x40C Size: 0x4 - FloatProperty TslGame.TslBoostGaugeWidget.SaveBoostGaugeMax */


	inline bool SetMID_Gauge0_21(t_structHelper inst, ExternalPtr<struct UMaterialInstanceDynamic> value) { inst.WriteOffset(0x300, value); }
	inline bool SetMID_Gauge20_61(t_structHelper inst, ExternalPtr<struct UMaterialInstanceDynamic> value) { inst.WriteOffset(0x308, value); }
	inline bool SetMID_Gauge60_91(t_structHelper inst, ExternalPtr<struct UMaterialInstanceDynamic> value) { inst.WriteOffset(0x310, value); }
	inline bool SetMID_Gauge90_101(t_structHelper inst, ExternalPtr<struct UMaterialInstanceDynamic> value) { inst.WriteOffset(0x318, value); }
	inline bool SetVanishingAnimBinder(t_structHelper inst, FUmgWidgetBinder_Animation value) { inst.WriteOffset(0x320, value); }
	inline bool SetWarningAnimBinder(t_structHelper inst, FUmgWidgetBinder_Animation value) { inst.WriteOffset(0x340, value); }
	inline bool SetEmergingAnimBinder(t_structHelper inst, FUmgWidgetBinder_Animation value) { inst.WriteOffset(0x360, value); }
	inline bool SetBoost0_20ImageBinder(t_structHelper inst, FUmgWidgetBinder_Gerneral value) { inst.WriteOffset(0x380, value); }
	inline bool SetBoost20_60ImageBinder(t_structHelper inst, FUmgWidgetBinder_Gerneral value) { inst.WriteOffset(0x3A0, value); }
	inline bool SetBoost60_90ImageBinder(t_structHelper inst, FUmgWidgetBinder_Gerneral value) { inst.WriteOffset(0x3C0, value); }
	inline bool SetBoost90_100ImageBinder(t_structHelper inst, FUmgWidgetBinder_Gerneral value) { inst.WriteOffset(0x3E0, value); }
	inline bool SetDisplayingBoost(t_structHelper inst, float value) { inst.WriteOffset(0x400, value); }
	inline bool bIsWarning()
	{
		return boolField404& 0x1;
	}
	inline bool SetbIsWarning(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x404, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bIsVanished()
	{
		return boolField405& 0x1;
	}
	inline bool SetbIsVanished(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x405, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetSaveBoostGauge(t_structHelper inst, float value) { inst.WriteOffset(0x408, value); }
	inline bool SetSaveBoostGaugeMax(t_structHelper inst, float value) { inst.WriteOffset(0x40C, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTslBoostGaugeWidget = sizeof(UTslBoostGaugeWidget); // 1040
    static_assert(sizeof(UTslBoostGaugeWidget) == 0x410, "Size of UTslBoostGaugeWidget is not correct.");
	auto constexpr UTslBoostGaugeWidget_MID_Gauge0_21_Offset = offsetof(UTslBoostGaugeWidget, MID_Gauge0_21);
	static_assert(UTslBoostGaugeWidget_MID_Gauge0_21_Offset == 0x300, "UTslBoostGaugeWidget::MID_Gauge0_21 offset is not 300");
	auto constexpr UTslBoostGaugeWidget_MID_Gauge20_61_Offset = offsetof(UTslBoostGaugeWidget, MID_Gauge20_61);
	static_assert(UTslBoostGaugeWidget_MID_Gauge20_61_Offset == 0x308, "UTslBoostGaugeWidget::MID_Gauge20_61 offset is not 308");
	auto constexpr UTslBoostGaugeWidget_MID_Gauge60_91_Offset = offsetof(UTslBoostGaugeWidget, MID_Gauge60_91);
	static_assert(UTslBoostGaugeWidget_MID_Gauge60_91_Offset == 0x310, "UTslBoostGaugeWidget::MID_Gauge60_91 offset is not 310");
	auto constexpr UTslBoostGaugeWidget_MID_Gauge90_101_Offset = offsetof(UTslBoostGaugeWidget, MID_Gauge90_101);
	static_assert(UTslBoostGaugeWidget_MID_Gauge90_101_Offset == 0x318, "UTslBoostGaugeWidget::MID_Gauge90_101 offset is not 318");
	auto constexpr UTslBoostGaugeWidget_VanishingAnimBinder_Offset = offsetof(UTslBoostGaugeWidget, VanishingAnimBinder);
	static_assert(UTslBoostGaugeWidget_VanishingAnimBinder_Offset == 0x320, "UTslBoostGaugeWidget::VanishingAnimBinder offset is not 320");
	auto constexpr UTslBoostGaugeWidget_WarningAnimBinder_Offset = offsetof(UTslBoostGaugeWidget, WarningAnimBinder);
	static_assert(UTslBoostGaugeWidget_WarningAnimBinder_Offset == 0x340, "UTslBoostGaugeWidget::WarningAnimBinder offset is not 340");
	auto constexpr UTslBoostGaugeWidget_EmergingAnimBinder_Offset = offsetof(UTslBoostGaugeWidget, EmergingAnimBinder);
	static_assert(UTslBoostGaugeWidget_EmergingAnimBinder_Offset == 0x360, "UTslBoostGaugeWidget::EmergingAnimBinder offset is not 360");
	auto constexpr UTslBoostGaugeWidget_Boost0_20ImageBinder_Offset = offsetof(UTslBoostGaugeWidget, Boost0_20ImageBinder);
	static_assert(UTslBoostGaugeWidget_Boost0_20ImageBinder_Offset == 0x380, "UTslBoostGaugeWidget::Boost0_20ImageBinder offset is not 380");
	auto constexpr UTslBoostGaugeWidget_Boost20_60ImageBinder_Offset = offsetof(UTslBoostGaugeWidget, Boost20_60ImageBinder);
	static_assert(UTslBoostGaugeWidget_Boost20_60ImageBinder_Offset == 0x3a0, "UTslBoostGaugeWidget::Boost20_60ImageBinder offset is not 3a0");
	auto constexpr UTslBoostGaugeWidget_Boost60_90ImageBinder_Offset = offsetof(UTslBoostGaugeWidget, Boost60_90ImageBinder);
	static_assert(UTslBoostGaugeWidget_Boost60_90ImageBinder_Offset == 0x3c0, "UTslBoostGaugeWidget::Boost60_90ImageBinder offset is not 3c0");
	auto constexpr UTslBoostGaugeWidget_Boost90_100ImageBinder_Offset = offsetof(UTslBoostGaugeWidget, Boost90_100ImageBinder);
	static_assert(UTslBoostGaugeWidget_Boost90_100ImageBinder_Offset == 0x3e0, "UTslBoostGaugeWidget::Boost90_100ImageBinder offset is not 3e0");
	auto constexpr UTslBoostGaugeWidget_DisplayingBoost_Offset = offsetof(UTslBoostGaugeWidget, DisplayingBoost);
	static_assert(UTslBoostGaugeWidget_DisplayingBoost_Offset == 0x400, "UTslBoostGaugeWidget::DisplayingBoost offset is not 400");
	auto constexpr UTslBoostGaugeWidget_boolField404_Offset = offsetof(UTslBoostGaugeWidget, boolField404);
	static_assert(UTslBoostGaugeWidget_boolField404_Offset == 0x404, "UTslBoostGaugeWidget::boolField404 offset is not 404");
	auto constexpr UTslBoostGaugeWidget_boolField405_Offset = offsetof(UTslBoostGaugeWidget, boolField405);
	static_assert(UTslBoostGaugeWidget_boolField405_Offset == 0x405, "UTslBoostGaugeWidget::boolField405 offset is not 405");
	auto constexpr UTslBoostGaugeWidget_SaveBoostGauge_Offset = offsetof(UTslBoostGaugeWidget, SaveBoostGauge);
	static_assert(UTslBoostGaugeWidget_SaveBoostGauge_Offset == 0x408, "UTslBoostGaugeWidget::SaveBoostGauge offset is not 408");
	auto constexpr UTslBoostGaugeWidget_SaveBoostGaugeMax_Offset = offsetof(UTslBoostGaugeWidget, SaveBoostGaugeMax);
	static_assert(UTslBoostGaugeWidget_SaveBoostGaugeMax_Offset == 0x40c, "UTslBoostGaugeWidget::SaveBoostGaugeMax offset is not 40c");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
