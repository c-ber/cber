#pragma once
#include "UTslUserWidget.hpp"
#include "FUmgWidgetBinder_Animation.hpp"
#include "ESlateVisibility.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UUmgBaseWidget // Size: 0x300
	: public UTslUserWidget // Size: 0x288
{
private:
	typedef UUmgBaseWidget t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1421); // id32("Class TslGame.UmgBaseWidget")
		return ptr;
	}
	uint8_t boolField288;
	uint8_t UnknownData289[0x7];
	FUmgWidgetBinder_Animation EmergingAnimationBinder; /* Ofs: 0x290 Size: 0x20 - StructProperty TslGame.UmgBaseWidget.EmergingAnimationBinder */
	FUmgWidgetBinder_Animation VanishingAnimationBinder; /* Ofs: 0x2B0 Size: 0x20 - StructProperty TslGame.UmgBaseWidget.VanishingAnimationBinder */
	uint8_t UnknownData2D0[0x18];
	TEnumAsByte<enum ESlateVisibility> PendingVisibility; /* Ofs: 0x2E8 Size: 0x1 - EnumProperty TslGame.UmgBaseWidget.PendingVisibility */
	uint8_t UnknownData2E9[0x3];
	float VanishingStartTime; /* Ofs: 0x2EC Size: 0x4 - FloatProperty TslGame.UmgBaseWidget.VanishingStartTime */
	uint8_t UnknownData2F0[0x4];
	int32_t Phase; /* Ofs: 0x2F4 Size: 0x4 - IntProperty TslGame.UmgBaseWidget.Phase */
	int32_t PhaseCount; /* Ofs: 0x2F8 Size: 0x4 - IntProperty TslGame.UmgBaseWidget.PhaseCount */
	uint8_t UnknownData2FC[0x4];


	inline bool bUseEmergingAnimation()
	{
		return boolField288& 0x1;
	}
	inline bool SetbUseEmergingAnimation(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x288, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bUseVanishingAnimation()
	{
		return boolField288& 0x2;
	}
	inline bool SetbUseVanishingAnimation(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x288, (uint8_t)(value ? curVal | (uint8_t)2 : curVal & ~(uint8_t)2));
	}
	inline bool SetEmergingAnimationBinder(t_structHelper inst, FUmgWidgetBinder_Animation value) { inst.WriteOffset(0x290, value); }
	inline bool SetVanishingAnimationBinder(t_structHelper inst, FUmgWidgetBinder_Animation value) { inst.WriteOffset(0x2B0, value); }
	inline bool SetPendingVisibility(t_structHelper inst, TEnumAsByte<enum ESlateVisibility> value) { inst.WriteOffset(0x2E8, value); }
	inline bool SetVanishingStartTime(t_structHelper inst, float value) { inst.WriteOffset(0x2EC, value); }
	inline bool SetPhase(t_structHelper inst, int32_t value) { inst.WriteOffset(0x2F4, value); }
	inline bool SetPhaseCount(t_structHelper inst, int32_t value) { inst.WriteOffset(0x2F8, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUUmgBaseWidget = sizeof(UUmgBaseWidget); // 768
    static_assert(sizeof(UUmgBaseWidget) == 0x300, "Size of UUmgBaseWidget is not correct.");
	auto constexpr UUmgBaseWidget_boolField288_Offset = offsetof(UUmgBaseWidget, boolField288);
	static_assert(UUmgBaseWidget_boolField288_Offset == 0x288, "UUmgBaseWidget::boolField288 offset is not 288");
	auto constexpr UUmgBaseWidget_EmergingAnimationBinder_Offset = offsetof(UUmgBaseWidget, EmergingAnimationBinder);
	static_assert(UUmgBaseWidget_EmergingAnimationBinder_Offset == 0x290, "UUmgBaseWidget::EmergingAnimationBinder offset is not 290");
	auto constexpr UUmgBaseWidget_VanishingAnimationBinder_Offset = offsetof(UUmgBaseWidget, VanishingAnimationBinder);
	static_assert(UUmgBaseWidget_VanishingAnimationBinder_Offset == 0x2b0, "UUmgBaseWidget::VanishingAnimationBinder offset is not 2b0");
	auto constexpr UUmgBaseWidget_PendingVisibility_Offset = offsetof(UUmgBaseWidget, PendingVisibility);
	static_assert(UUmgBaseWidget_PendingVisibility_Offset == 0x2e8, "UUmgBaseWidget::PendingVisibility offset is not 2e8");
	auto constexpr UUmgBaseWidget_VanishingStartTime_Offset = offsetof(UUmgBaseWidget, VanishingStartTime);
	static_assert(UUmgBaseWidget_VanishingStartTime_Offset == 0x2ec, "UUmgBaseWidget::VanishingStartTime offset is not 2ec");
	auto constexpr UUmgBaseWidget_Phase_Offset = offsetof(UUmgBaseWidget, Phase);
	static_assert(UUmgBaseWidget_Phase_Offset == 0x2f4, "UUmgBaseWidget::Phase offset is not 2f4");
	auto constexpr UUmgBaseWidget_PhaseCount_Offset = offsetof(UUmgBaseWidget, PhaseCount);
	static_assert(UUmgBaseWidget_PhaseCount_Offset == 0x2f8, "UUmgBaseWidget::PhaseCount offset is not 2f8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
