#pragma once
#include "UBluezoneGuideWidget.hpp"
#include "FUmgWidgetBinder_Image.hpp"
#include "FUmgWidgetBinder_Animation.hpp"
#include "FLinearColor.hpp"
#include "FSequence_Float.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBluezoneGpsBaseWidget // Size: 0x670
	: public UBluezoneGuideWidget // Size: 0x300
{
private:
	typedef UBluezoneGpsBaseWidget t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1516); // id32("Class TslGame.BluezoneGpsBaseWidget")
		return ptr;
	}
	FUmgWidgetBinder_Image BluezoneGaugeImageBinder; /* Ofs: 0x300 Size: 0x28 - StructProperty TslGame.BluezoneGpsBaseWidget.BluezoneGaugeImageBinder */
	FUmgWidgetBinder_Image PlayerIconImageBinder; /* Ofs: 0x328 Size: 0x28 - StructProperty TslGame.BluezoneGpsBaseWidget.PlayerIconImageBinder */
	FUmgWidgetBinder_Animation MovingAnimationBinder; /* Ofs: 0x350 Size: 0x20 - StructProperty TslGame.BluezoneGpsBaseWidget.MovingAnimationBinder */
	TArray<struct FUmgWidgetBinder_Animation> WarningAnimationList; /* Ofs: 0x370 Size: 0x10 - ArrayProperty TslGame.BluezoneGpsBaseWidget.WarningAnimationList */
	TArray<struct FUmgWidgetBinder_Animation> ReleasingTextAnimationList; /* Ofs: 0x380 Size: 0x10 - ArrayProperty TslGame.BluezoneGpsBaseWidget.ReleasingTextAnimationList */
	FUmgWidgetBinder_Animation EnterNextPlayzoneAnimBinder; /* Ofs: 0x390 Size: 0x20 - StructProperty TslGame.BluezoneGpsBaseWidget.EnterNextPlayzoneAnimBinder */
	FUmgWidgetBinder_Animation LeaveNextPlayzoneAnimBinder; /* Ofs: 0x3B0 Size: 0x20 - StructProperty TslGame.BluezoneGpsBaseWidget.LeaveNextPlayzoneAnimBinder */
	FUmgWidgetBinder_Animation WidgetEmergingAnimBinder; /* Ofs: 0x3D0 Size: 0x20 - StructProperty TslGame.BluezoneGpsBaseWidget.WidgetEmergingAnimBinder */
	FUmgWidgetBinder_Animation WidgetVanishingAminBinder; /* Ofs: 0x3F0 Size: 0x20 - StructProperty TslGame.BluezoneGpsBaseWidget.WidgetVanishingAminBinder */
	FName PlayZoneStartParmName; /* Ofs: 0x410 Size: 0x8 - NameProperty TslGame.BluezoneGpsBaseWidget.PlayZoneStartParmName */
	FName BluezoneEndParamName; /* Ofs: 0x418 Size: 0x8 - NameProperty TslGame.BluezoneGpsBaseWidget.BluezoneEndParamName */
	FName ColorMultiplyParmName; /* Ofs: 0x420 Size: 0x8 - NameProperty TslGame.BluezoneGpsBaseWidget.ColorMultiplyParmName */
	FLinearColor InNextPlayzoneColorMultiply; /* Ofs: 0x428 Size: 0x10 - StructProperty TslGame.BluezoneGpsBaseWidget.InNextPlayzoneColorMultiply */
	FSequence_Float BluezoneResetSequence; /* Ofs: 0x438 Size: 0xA0 - StructProperty TslGame.BluezoneGpsBaseWidget.BluezoneResetSequence */
	FSequence_Float PlayzoneResetSequence; /* Ofs: 0x4D8 Size: 0xA0 - StructProperty TslGame.BluezoneGpsBaseWidget.PlayzoneResetSequence */
	FSequence_Float PlayerIconResetSequence; /* Ofs: 0x578 Size: 0xA0 - StructProperty TslGame.BluezoneGpsBaseWidget.PlayerIconResetSequence */
	float PlayerIconPositionX_Start; /* Ofs: 0x618 Size: 0x4 - FloatProperty TslGame.BluezoneGpsBaseWidget.PlayerIconPositionX_Start */
	float PlayerIconPositionX_End; /* Ofs: 0x61C Size: 0x4 - FloatProperty TslGame.BluezoneGpsBaseWidget.PlayerIconPositionX_End */
	uint8_t UnknownData620[0x8];
	uint8_t boolField628;
	uint8_t UnknownData629[0x47];


	inline bool SetBluezoneGaugeImageBinder(t_structHelper inst, FUmgWidgetBinder_Image value) { inst.WriteOffset(0x300, value); }
	inline bool SetPlayerIconImageBinder(t_structHelper inst, FUmgWidgetBinder_Image value) { inst.WriteOffset(0x328, value); }
	inline bool SetMovingAnimationBinder(t_structHelper inst, FUmgWidgetBinder_Animation value) { inst.WriteOffset(0x350, value); }
	inline bool SetWarningAnimationList(t_structHelper inst, TArray<struct FUmgWidgetBinder_Animation> value) { inst.WriteOffset(0x370, value); }
	inline bool SetReleasingTextAnimationList(t_structHelper inst, TArray<struct FUmgWidgetBinder_Animation> value) { inst.WriteOffset(0x380, value); }
	inline bool SetEnterNextPlayzoneAnimBinder(t_structHelper inst, FUmgWidgetBinder_Animation value) { inst.WriteOffset(0x390, value); }
	inline bool SetLeaveNextPlayzoneAnimBinder(t_structHelper inst, FUmgWidgetBinder_Animation value) { inst.WriteOffset(0x3B0, value); }
	inline bool SetWidgetEmergingAnimBinder(t_structHelper inst, FUmgWidgetBinder_Animation value) { inst.WriteOffset(0x3D0, value); }
	inline bool SetWidgetVanishingAminBinder(t_structHelper inst, FUmgWidgetBinder_Animation value) { inst.WriteOffset(0x3F0, value); }
	inline bool SetPlayZoneStartParmName(t_structHelper inst, FName value) { inst.WriteOffset(0x410, value); }
	inline bool SetBluezoneEndParamName(t_structHelper inst, FName value) { inst.WriteOffset(0x418, value); }
	inline bool SetColorMultiplyParmName(t_structHelper inst, FName value) { inst.WriteOffset(0x420, value); }
	inline bool SetInNextPlayzoneColorMultiply(t_structHelper inst, FLinearColor value) { inst.WriteOffset(0x428, value); }
	inline bool SetBluezoneResetSequence(t_structHelper inst, FSequence_Float value) { inst.WriteOffset(0x438, value); }
	inline bool SetPlayzoneResetSequence(t_structHelper inst, FSequence_Float value) { inst.WriteOffset(0x4D8, value); }
	inline bool SetPlayerIconResetSequence(t_structHelper inst, FSequence_Float value) { inst.WriteOffset(0x578, value); }
	inline bool SetPlayerIconPositionX_Start(t_structHelper inst, float value) { inst.WriteOffset(0x618, value); }
	inline bool SetPlayerIconPositionX_End(t_structHelper inst, float value) { inst.WriteOffset(0x61C, value); }
	inline bool bSaveWantShow()
	{
		return boolField628& 0x1;
	}
	inline bool SetbSaveWantShow(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x628, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBluezoneGpsBaseWidget = sizeof(UBluezoneGpsBaseWidget); // 1648
    static_assert(sizeof(UBluezoneGpsBaseWidget) == 0x670, "Size of UBluezoneGpsBaseWidget is not correct.");
	auto constexpr UBluezoneGpsBaseWidget_BluezoneGaugeImageBinder_Offset = offsetof(UBluezoneGpsBaseWidget, BluezoneGaugeImageBinder);
	static_assert(UBluezoneGpsBaseWidget_BluezoneGaugeImageBinder_Offset == 0x300, "UBluezoneGpsBaseWidget::BluezoneGaugeImageBinder offset is not 300");
	auto constexpr UBluezoneGpsBaseWidget_PlayerIconImageBinder_Offset = offsetof(UBluezoneGpsBaseWidget, PlayerIconImageBinder);
	static_assert(UBluezoneGpsBaseWidget_PlayerIconImageBinder_Offset == 0x328, "UBluezoneGpsBaseWidget::PlayerIconImageBinder offset is not 328");
	auto constexpr UBluezoneGpsBaseWidget_MovingAnimationBinder_Offset = offsetof(UBluezoneGpsBaseWidget, MovingAnimationBinder);
	static_assert(UBluezoneGpsBaseWidget_MovingAnimationBinder_Offset == 0x350, "UBluezoneGpsBaseWidget::MovingAnimationBinder offset is not 350");
	auto constexpr UBluezoneGpsBaseWidget_WarningAnimationList_Offset = offsetof(UBluezoneGpsBaseWidget, WarningAnimationList);
	static_assert(UBluezoneGpsBaseWidget_WarningAnimationList_Offset == 0x370, "UBluezoneGpsBaseWidget::WarningAnimationList offset is not 370");
	auto constexpr UBluezoneGpsBaseWidget_ReleasingTextAnimationList_Offset = offsetof(UBluezoneGpsBaseWidget, ReleasingTextAnimationList);
	static_assert(UBluezoneGpsBaseWidget_ReleasingTextAnimationList_Offset == 0x380, "UBluezoneGpsBaseWidget::ReleasingTextAnimationList offset is not 380");
	auto constexpr UBluezoneGpsBaseWidget_EnterNextPlayzoneAnimBinder_Offset = offsetof(UBluezoneGpsBaseWidget, EnterNextPlayzoneAnimBinder);
	static_assert(UBluezoneGpsBaseWidget_EnterNextPlayzoneAnimBinder_Offset == 0x390, "UBluezoneGpsBaseWidget::EnterNextPlayzoneAnimBinder offset is not 390");
	auto constexpr UBluezoneGpsBaseWidget_LeaveNextPlayzoneAnimBinder_Offset = offsetof(UBluezoneGpsBaseWidget, LeaveNextPlayzoneAnimBinder);
	static_assert(UBluezoneGpsBaseWidget_LeaveNextPlayzoneAnimBinder_Offset == 0x3b0, "UBluezoneGpsBaseWidget::LeaveNextPlayzoneAnimBinder offset is not 3b0");
	auto constexpr UBluezoneGpsBaseWidget_WidgetEmergingAnimBinder_Offset = offsetof(UBluezoneGpsBaseWidget, WidgetEmergingAnimBinder);
	static_assert(UBluezoneGpsBaseWidget_WidgetEmergingAnimBinder_Offset == 0x3d0, "UBluezoneGpsBaseWidget::WidgetEmergingAnimBinder offset is not 3d0");
	auto constexpr UBluezoneGpsBaseWidget_WidgetVanishingAminBinder_Offset = offsetof(UBluezoneGpsBaseWidget, WidgetVanishingAminBinder);
	static_assert(UBluezoneGpsBaseWidget_WidgetVanishingAminBinder_Offset == 0x3f0, "UBluezoneGpsBaseWidget::WidgetVanishingAminBinder offset is not 3f0");
	auto constexpr UBluezoneGpsBaseWidget_PlayZoneStartParmName_Offset = offsetof(UBluezoneGpsBaseWidget, PlayZoneStartParmName);
	static_assert(UBluezoneGpsBaseWidget_PlayZoneStartParmName_Offset == 0x410, "UBluezoneGpsBaseWidget::PlayZoneStartParmName offset is not 410");
	auto constexpr UBluezoneGpsBaseWidget_BluezoneEndParamName_Offset = offsetof(UBluezoneGpsBaseWidget, BluezoneEndParamName);
	static_assert(UBluezoneGpsBaseWidget_BluezoneEndParamName_Offset == 0x418, "UBluezoneGpsBaseWidget::BluezoneEndParamName offset is not 418");
	auto constexpr UBluezoneGpsBaseWidget_ColorMultiplyParmName_Offset = offsetof(UBluezoneGpsBaseWidget, ColorMultiplyParmName);
	static_assert(UBluezoneGpsBaseWidget_ColorMultiplyParmName_Offset == 0x420, "UBluezoneGpsBaseWidget::ColorMultiplyParmName offset is not 420");
	auto constexpr UBluezoneGpsBaseWidget_InNextPlayzoneColorMultiply_Offset = offsetof(UBluezoneGpsBaseWidget, InNextPlayzoneColorMultiply);
	static_assert(UBluezoneGpsBaseWidget_InNextPlayzoneColorMultiply_Offset == 0x428, "UBluezoneGpsBaseWidget::InNextPlayzoneColorMultiply offset is not 428");
	auto constexpr UBluezoneGpsBaseWidget_BluezoneResetSequence_Offset = offsetof(UBluezoneGpsBaseWidget, BluezoneResetSequence);
	static_assert(UBluezoneGpsBaseWidget_BluezoneResetSequence_Offset == 0x438, "UBluezoneGpsBaseWidget::BluezoneResetSequence offset is not 438");
	auto constexpr UBluezoneGpsBaseWidget_PlayzoneResetSequence_Offset = offsetof(UBluezoneGpsBaseWidget, PlayzoneResetSequence);
	static_assert(UBluezoneGpsBaseWidget_PlayzoneResetSequence_Offset == 0x4d8, "UBluezoneGpsBaseWidget::PlayzoneResetSequence offset is not 4d8");
	auto constexpr UBluezoneGpsBaseWidget_PlayerIconResetSequence_Offset = offsetof(UBluezoneGpsBaseWidget, PlayerIconResetSequence);
	static_assert(UBluezoneGpsBaseWidget_PlayerIconResetSequence_Offset == 0x578, "UBluezoneGpsBaseWidget::PlayerIconResetSequence offset is not 578");
	auto constexpr UBluezoneGpsBaseWidget_PlayerIconPositionX_Start_Offset = offsetof(UBluezoneGpsBaseWidget, PlayerIconPositionX_Start);
	static_assert(UBluezoneGpsBaseWidget_PlayerIconPositionX_Start_Offset == 0x618, "UBluezoneGpsBaseWidget::PlayerIconPositionX_Start offset is not 618");
	auto constexpr UBluezoneGpsBaseWidget_PlayerIconPositionX_End_Offset = offsetof(UBluezoneGpsBaseWidget, PlayerIconPositionX_End);
	static_assert(UBluezoneGpsBaseWidget_PlayerIconPositionX_End_Offset == 0x61c, "UBluezoneGpsBaseWidget::PlayerIconPositionX_End offset is not 61c");
	auto constexpr UBluezoneGpsBaseWidget_boolField628_Offset = offsetof(UBluezoneGpsBaseWidget, boolField628);
	static_assert(UBluezoneGpsBaseWidget_boolField628_Offset == 0x628, "UBluezoneGpsBaseWidget::boolField628 offset is not 628");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
