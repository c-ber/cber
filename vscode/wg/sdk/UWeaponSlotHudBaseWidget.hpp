#pragma once
#include "UUmgBaseWidget.hpp"
#include "FUmgWidgetBinder_UserWidget.hpp"
#include "FUmgWidgetBinder_Border.hpp"
#include "FUmgWidgetBinder_Animation.hpp"
#include "FSequence_Float.hpp"
#include "FTimerHandle.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UWeaponSlotHudBaseWidget // Size: 0x478
	: public UUmgBaseWidget // Size: 0x300
{
private:
	typedef UWeaponSlotHudBaseWidget t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1601); // id32("Class TslGame.WeaponSlotHudBaseWidget")
		return ptr;
	}
	FUmgWidgetBinder_UserWidget CurrentWeaponSlotWidgetBinder; /* Ofs: 0x300 Size: 0x20 - StructProperty TslGame.WeaponSlotHudBaseWidget.CurrentWeaponSlotWidgetBinder */
	TArray<struct FUmgWidgetBinder_UserWidget> WeaponSlotWidgetBinderList; /* Ofs: 0x320 Size: 0x10 - ArrayProperty TslGame.WeaponSlotHudBaseWidget.WeaponSlotWidgetBinderList */
	FUmgWidgetBinder_Border WeaponSlotListBorderBinder; /* Ofs: 0x330 Size: 0x20 - StructProperty TslGame.WeaponSlotHudBaseWidget.WeaponSlotListBorderBinder */
	FUmgWidgetBinder_Animation FadeInSlotListAminBinder; /* Ofs: 0x350 Size: 0x20 - StructProperty TslGame.WeaponSlotHudBaseWidget.FadeInSlotListAminBinder */
	FUmgWidgetBinder_Animation FadeOutSlotListAminBinder; /* Ofs: 0x370 Size: 0x20 - StructProperty TslGame.WeaponSlotHudBaseWidget.FadeOutSlotListAminBinder */
	float SlotOffsetMultiply; /* Ofs: 0x390 Size: 0x4 - FloatProperty TslGame.WeaponSlotHudBaseWidget.SlotOffsetMultiply */
	float SlotPadding; /* Ofs: 0x394 Size: 0x4 - FloatProperty TslGame.WeaponSlotHudBaseWidget.SlotPadding */
	FSequence_Float MovingSequence; /* Ofs: 0x398 Size: 0xA0 - StructProperty TslGame.WeaponSlotHudBaseWidget.MovingSequence */
	uint8_t UnknownData438[0x30];
	FTimerHandle FinishTimer; /* Ofs: 0x468 Size: 0x8 - StructProperty TslGame.WeaponSlotHudBaseWidget.FinishTimer */
	ExternalPtr<struct UWeaponProcessor> CachedWeaponProcessor; /* Ofs: 0x470 Size: 0x8 - ObjectProperty TslGame.WeaponSlotHudBaseWidget.CachedWeaponProcessor */


	inline bool SetCurrentWeaponSlotWidgetBinder(t_structHelper inst, FUmgWidgetBinder_UserWidget value) { inst.WriteOffset(0x300, value); }
	inline bool SetWeaponSlotWidgetBinderList(t_structHelper inst, TArray<struct FUmgWidgetBinder_UserWidget> value) { inst.WriteOffset(0x320, value); }
	inline bool SetWeaponSlotListBorderBinder(t_structHelper inst, FUmgWidgetBinder_Border value) { inst.WriteOffset(0x330, value); }
	inline bool SetFadeInSlotListAminBinder(t_structHelper inst, FUmgWidgetBinder_Animation value) { inst.WriteOffset(0x350, value); }
	inline bool SetFadeOutSlotListAminBinder(t_structHelper inst, FUmgWidgetBinder_Animation value) { inst.WriteOffset(0x370, value); }
	inline bool SetSlotOffsetMultiply(t_structHelper inst, float value) { inst.WriteOffset(0x390, value); }
	inline bool SetSlotPadding(t_structHelper inst, float value) { inst.WriteOffset(0x394, value); }
	inline bool SetMovingSequence(t_structHelper inst, FSequence_Float value) { inst.WriteOffset(0x398, value); }
	inline bool SetFinishTimer(t_structHelper inst, FTimerHandle value) { inst.WriteOffset(0x468, value); }
	inline bool SetCachedWeaponProcessor(t_structHelper inst, ExternalPtr<struct UWeaponProcessor> value) { inst.WriteOffset(0x470, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUWeaponSlotHudBaseWidget = sizeof(UWeaponSlotHudBaseWidget); // 1144
    static_assert(sizeof(UWeaponSlotHudBaseWidget) == 0x478, "Size of UWeaponSlotHudBaseWidget is not correct.");
	auto constexpr UWeaponSlotHudBaseWidget_CurrentWeaponSlotWidgetBinder_Offset = offsetof(UWeaponSlotHudBaseWidget, CurrentWeaponSlotWidgetBinder);
	static_assert(UWeaponSlotHudBaseWidget_CurrentWeaponSlotWidgetBinder_Offset == 0x300, "UWeaponSlotHudBaseWidget::CurrentWeaponSlotWidgetBinder offset is not 300");
	auto constexpr UWeaponSlotHudBaseWidget_WeaponSlotWidgetBinderList_Offset = offsetof(UWeaponSlotHudBaseWidget, WeaponSlotWidgetBinderList);
	static_assert(UWeaponSlotHudBaseWidget_WeaponSlotWidgetBinderList_Offset == 0x320, "UWeaponSlotHudBaseWidget::WeaponSlotWidgetBinderList offset is not 320");
	auto constexpr UWeaponSlotHudBaseWidget_WeaponSlotListBorderBinder_Offset = offsetof(UWeaponSlotHudBaseWidget, WeaponSlotListBorderBinder);
	static_assert(UWeaponSlotHudBaseWidget_WeaponSlotListBorderBinder_Offset == 0x330, "UWeaponSlotHudBaseWidget::WeaponSlotListBorderBinder offset is not 330");
	auto constexpr UWeaponSlotHudBaseWidget_FadeInSlotListAminBinder_Offset = offsetof(UWeaponSlotHudBaseWidget, FadeInSlotListAminBinder);
	static_assert(UWeaponSlotHudBaseWidget_FadeInSlotListAminBinder_Offset == 0x350, "UWeaponSlotHudBaseWidget::FadeInSlotListAminBinder offset is not 350");
	auto constexpr UWeaponSlotHudBaseWidget_FadeOutSlotListAminBinder_Offset = offsetof(UWeaponSlotHudBaseWidget, FadeOutSlotListAminBinder);
	static_assert(UWeaponSlotHudBaseWidget_FadeOutSlotListAminBinder_Offset == 0x370, "UWeaponSlotHudBaseWidget::FadeOutSlotListAminBinder offset is not 370");
	auto constexpr UWeaponSlotHudBaseWidget_SlotOffsetMultiply_Offset = offsetof(UWeaponSlotHudBaseWidget, SlotOffsetMultiply);
	static_assert(UWeaponSlotHudBaseWidget_SlotOffsetMultiply_Offset == 0x390, "UWeaponSlotHudBaseWidget::SlotOffsetMultiply offset is not 390");
	auto constexpr UWeaponSlotHudBaseWidget_SlotPadding_Offset = offsetof(UWeaponSlotHudBaseWidget, SlotPadding);
	static_assert(UWeaponSlotHudBaseWidget_SlotPadding_Offset == 0x394, "UWeaponSlotHudBaseWidget::SlotPadding offset is not 394");
	auto constexpr UWeaponSlotHudBaseWidget_MovingSequence_Offset = offsetof(UWeaponSlotHudBaseWidget, MovingSequence);
	static_assert(UWeaponSlotHudBaseWidget_MovingSequence_Offset == 0x398, "UWeaponSlotHudBaseWidget::MovingSequence offset is not 398");
	auto constexpr UWeaponSlotHudBaseWidget_FinishTimer_Offset = offsetof(UWeaponSlotHudBaseWidget, FinishTimer);
	static_assert(UWeaponSlotHudBaseWidget_FinishTimer_Offset == 0x468, "UWeaponSlotHudBaseWidget::FinishTimer offset is not 468");
	auto constexpr UWeaponSlotHudBaseWidget_CachedWeaponProcessor_Offset = offsetof(UWeaponSlotHudBaseWidget, CachedWeaponProcessor);
	static_assert(UWeaponSlotHudBaseWidget_CachedWeaponProcessor_Offset == 0x470, "UWeaponSlotHudBaseWidget::CachedWeaponProcessor offset is not 470");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
