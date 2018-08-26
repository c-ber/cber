#pragma once
#include "UHudMainBaseWidget.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FColorBlindColorSet.hpp"
#include "FTimerHandle.hpp"
#include "FWidgetTransform.hpp"
#include "FHudUiConfig.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UHudMain_C // Size: 0x3C4
	: public UHudMainBaseWidget // Size: 0x310
{
private:
	typedef UHudMain_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(69752); // id32("WidgetBlueprintGeneratedClass HudMain.HudMain_C")
		return ptr;
	}
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0x310 Size: 0x8 - StructProperty HudMain.HudMain_C.UberGraphFrame */
	ExternalPtr<struct UCanvasPanel> HideOnObserverSpectating; /* Ofs: 0x318 Size: 0x8 - ObjectProperty HudMain.HudMain_C.HideOnObserverSpectating */
	FScriptMulticastDelegate ButtonClickedDispatcher; /* Ofs: 0x320 Size: 0x10 - MulticastDelegateProperty HudMain.HudMain_C.ButtonClickedDispatcher */
	ExternalPtr<struct UHitNotifyWidget_C> HitNotify; /* Ofs: 0x330 Size: 0x8 - ObjectProperty HudMain.HudMain_C.HitNotify */
	FColorBlindColorSet ColorBlindColorSet_SpetatingName; /* Ofs: 0x338 Size: 0x10 - StructProperty HudMain.HudMain_C.ColorBlindColorSet_SpetatingName */
	FTimerHandle ReplayGetTimeHandler; /* Ofs: 0x348 Size: 0x8 - StructProperty HudMain.HudMain_C.ReplayGetTimeHandler */
	FWidgetTransform ObserverSpectatingDownPos; /* Ofs: 0x350 Size: 0x1C - StructProperty HudMain.HudMain_C.ObserverSpectatingDownPos */
	FWidgetTransform ObserverSpectatingUpPos; /* Ofs: 0x36C Size: 0x1C - StructProperty HudMain.HudMain_C.ObserverSpectatingUpPos */
	float LastOptionToggleTime; /* Ofs: 0x388 Size: 0x4 - FloatProperty HudMain.HudMain_C.LastOptionToggleTime */
	uint8_t UnknownData38C[0x4];
	FHudUiConfig BattleList_Config; /* Ofs: 0x390 Size: 0x30 - StructProperty HudMain.HudMain_C.BattleList_Config */
	float SholderPressedTime; /* Ofs: 0x3C0 Size: 0x4 - FloatProperty HudMain.HudMain_C.SholderPressedTime */


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0x310, value); }
	inline bool SetHideOnObserverSpectating(t_structHelper inst, ExternalPtr<struct UCanvasPanel> value) { inst.WriteOffset(0x318, value); }
	inline bool SetButtonClickedDispatcher(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x320, value); }
	inline bool SetHitNotify(t_structHelper inst, ExternalPtr<struct UHitNotifyWidget_C> value) { inst.WriteOffset(0x330, value); }
	inline bool SetColorBlindColorSet_SpetatingName(t_structHelper inst, FColorBlindColorSet value) { inst.WriteOffset(0x338, value); }
	inline bool SetReplayGetTimeHandler(t_structHelper inst, FTimerHandle value) { inst.WriteOffset(0x348, value); }
	inline bool SetObserverSpectatingDownPos(t_structHelper inst, FWidgetTransform value) { inst.WriteOffset(0x350, value); }
	inline bool SetObserverSpectatingUpPos(t_structHelper inst, FWidgetTransform value) { inst.WriteOffset(0x36C, value); }
	inline bool SetLastOptionToggleTime(t_structHelper inst, float value) { inst.WriteOffset(0x388, value); }
	inline bool SetBattleList_Config(t_structHelper inst, FHudUiConfig value) { inst.WriteOffset(0x390, value); }
	inline bool SetSholderPressedTime(t_structHelper inst, float value) { inst.WriteOffset(0x3C0, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUHudMain_C = sizeof(UHudMain_C); // 964
    static_assert(sizeof(UHudMain_C) == 0x3C4, "Size of UHudMain_C is not correct.");
	auto constexpr UHudMain_C_UberGraphFrame_Offset = offsetof(UHudMain_C, UberGraphFrame);
	static_assert(UHudMain_C_UberGraphFrame_Offset == 0x310, "UHudMain_C::UberGraphFrame offset is not 310");
	auto constexpr UHudMain_C_HideOnObserverSpectating_Offset = offsetof(UHudMain_C, HideOnObserverSpectating);
	static_assert(UHudMain_C_HideOnObserverSpectating_Offset == 0x318, "UHudMain_C::HideOnObserverSpectating offset is not 318");
	auto constexpr UHudMain_C_ButtonClickedDispatcher_Offset = offsetof(UHudMain_C, ButtonClickedDispatcher);
	static_assert(UHudMain_C_ButtonClickedDispatcher_Offset == 0x320, "UHudMain_C::ButtonClickedDispatcher offset is not 320");
	auto constexpr UHudMain_C_HitNotify_Offset = offsetof(UHudMain_C, HitNotify);
	static_assert(UHudMain_C_HitNotify_Offset == 0x330, "UHudMain_C::HitNotify offset is not 330");
	auto constexpr UHudMain_C_ColorBlindColorSet_SpetatingName_Offset = offsetof(UHudMain_C, ColorBlindColorSet_SpetatingName);
	static_assert(UHudMain_C_ColorBlindColorSet_SpetatingName_Offset == 0x338, "UHudMain_C::ColorBlindColorSet_SpetatingName offset is not 338");
	auto constexpr UHudMain_C_ReplayGetTimeHandler_Offset = offsetof(UHudMain_C, ReplayGetTimeHandler);
	static_assert(UHudMain_C_ReplayGetTimeHandler_Offset == 0x348, "UHudMain_C::ReplayGetTimeHandler offset is not 348");
	auto constexpr UHudMain_C_ObserverSpectatingDownPos_Offset = offsetof(UHudMain_C, ObserverSpectatingDownPos);
	static_assert(UHudMain_C_ObserverSpectatingDownPos_Offset == 0x350, "UHudMain_C::ObserverSpectatingDownPos offset is not 350");
	auto constexpr UHudMain_C_ObserverSpectatingUpPos_Offset = offsetof(UHudMain_C, ObserverSpectatingUpPos);
	static_assert(UHudMain_C_ObserverSpectatingUpPos_Offset == 0x36c, "UHudMain_C::ObserverSpectatingUpPos offset is not 36c");
	auto constexpr UHudMain_C_LastOptionToggleTime_Offset = offsetof(UHudMain_C, LastOptionToggleTime);
	static_assert(UHudMain_C_LastOptionToggleTime_Offset == 0x388, "UHudMain_C::LastOptionToggleTime offset is not 388");
	auto constexpr UHudMain_C_BattleList_Config_Offset = offsetof(UHudMain_C, BattleList_Config);
	static_assert(UHudMain_C_BattleList_Config_Offset == 0x390, "UHudMain_C::BattleList_Config offset is not 390");
	auto constexpr UHudMain_C_SholderPressedTime_Offset = offsetof(UHudMain_C, SholderPressedTime);
	static_assert(UHudMain_C_SholderPressedTime_Offset == 0x3c0, "UHudMain_C::SholderPressedTime offset is not 3c0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
