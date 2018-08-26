#pragma once
#include "UBlockInputUserWidget.hpp"
#include "FPointerToUberGraphFrame.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBP_GamepadKeyGuideWidget_C // Size: 0x380
	: public UBlockInputUserWidget // Size: 0x330
{
private:
	typedef UBP_GamepadKeyGuideWidget_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(180315); // id32("WidgetBlueprintGeneratedClass BP_GamepadKeyGuideWidget.BP_GamepadKeyGuideWidget_C")
		return ptr;
	}
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0x330 Size: 0x8 - StructProperty BP_GamepadKeyGuideWidget.BP_GamepadKeyGuideWidget_C.UberGraphFrame */
	ExternalPtr<struct UBP_GamepadKeyGuideAim_C> BP_GamepadKeyGuideAim; /* Ofs: 0x338 Size: 0x8 - ObjectProperty BP_GamepadKeyGuideWidget.BP_GamepadKeyGuideWidget_C.BP_GamepadKeyGuideAim */
	ExternalPtr<struct UBP_GamepadKeyGuideBasic_C> BP_GamepadKeyGuideBasic; /* Ofs: 0x340 Size: 0x8 - ObjectProperty BP_GamepadKeyGuideWidget.BP_GamepadKeyGuideWidget_C.BP_GamepadKeyGuideBasic */
	ExternalPtr<struct UBP_GamepadKeyGuideLegend_C> BP_GamepadKeyGuideLegend_118; /* Ofs: 0x348 Size: 0x8 - ObjectProperty BP_GamepadKeyGuideWidget.BP_GamepadKeyGuideWidget_C.BP_GamepadKeyGuideLegend_118 */
	ExternalPtr<struct UBP_GamepadKeyGuideMap_C> BP_GamepadKeyGuideMap; /* Ofs: 0x350 Size: 0x8 - ObjectProperty BP_GamepadKeyGuideWidget.BP_GamepadKeyGuideWidget_C.BP_GamepadKeyGuideMap */
	ExternalPtr<struct UBP_GamepadKeyGuideSwim_C> BP_GamepadKeyGuideSwim; /* Ofs: 0x358 Size: 0x8 - ObjectProperty BP_GamepadKeyGuideWidget.BP_GamepadKeyGuideWidget_C.BP_GamepadKeyGuideSwim */
	ExternalPtr<struct UBP_GamepadKeyGuideVehicle_C> BP_GamepadKeyGuideVehicle; /* Ofs: 0x360 Size: 0x8 - ObjectProperty BP_GamepadKeyGuideWidget.BP_GamepadKeyGuideWidget_C.BP_GamepadKeyGuideVehicle */
	ExternalPtr<struct UWidgetSwitcher> ContentsSwitcher; /* Ofs: 0x368 Size: 0x8 - ObjectProperty BP_GamepadKeyGuideWidget.BP_GamepadKeyGuideWidget_C.ContentsSwitcher */
	ExternalPtr<struct UImage> ControllerImage; /* Ofs: 0x370 Size: 0x8 - ObjectProperty BP_GamepadKeyGuideWidget.BP_GamepadKeyGuideWidget_C.ControllerImage */
	ExternalPtr<struct UBP_GamepadKeyGuideTabSelectorWidget_C> TabSelector; /* Ofs: 0x378 Size: 0x8 - ObjectProperty BP_GamepadKeyGuideWidget.BP_GamepadKeyGuideWidget_C.TabSelector */


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0x330, value); }
	inline bool SetBP_GamepadKeyGuideAim(t_structHelper inst, ExternalPtr<struct UBP_GamepadKeyGuideAim_C> value) { inst.WriteOffset(0x338, value); }
	inline bool SetBP_GamepadKeyGuideBasic(t_structHelper inst, ExternalPtr<struct UBP_GamepadKeyGuideBasic_C> value) { inst.WriteOffset(0x340, value); }
	inline bool SetBP_GamepadKeyGuideLegend_118(t_structHelper inst, ExternalPtr<struct UBP_GamepadKeyGuideLegend_C> value) { inst.WriteOffset(0x348, value); }
	inline bool SetBP_GamepadKeyGuideMap(t_structHelper inst, ExternalPtr<struct UBP_GamepadKeyGuideMap_C> value) { inst.WriteOffset(0x350, value); }
	inline bool SetBP_GamepadKeyGuideSwim(t_structHelper inst, ExternalPtr<struct UBP_GamepadKeyGuideSwim_C> value) { inst.WriteOffset(0x358, value); }
	inline bool SetBP_GamepadKeyGuideVehicle(t_structHelper inst, ExternalPtr<struct UBP_GamepadKeyGuideVehicle_C> value) { inst.WriteOffset(0x360, value); }
	inline bool SetContentsSwitcher(t_structHelper inst, ExternalPtr<struct UWidgetSwitcher> value) { inst.WriteOffset(0x368, value); }
	inline bool SetControllerImage(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x370, value); }
	inline bool SetTabSelector(t_structHelper inst, ExternalPtr<struct UBP_GamepadKeyGuideTabSelectorWidget_C> value) { inst.WriteOffset(0x378, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBP_GamepadKeyGuideWidget_C = sizeof(UBP_GamepadKeyGuideWidget_C); // 896
    static_assert(sizeof(UBP_GamepadKeyGuideWidget_C) == 0x380, "Size of UBP_GamepadKeyGuideWidget_C is not correct.");
	auto constexpr UBP_GamepadKeyGuideWidget_C_UberGraphFrame_Offset = offsetof(UBP_GamepadKeyGuideWidget_C, UberGraphFrame);
	static_assert(UBP_GamepadKeyGuideWidget_C_UberGraphFrame_Offset == 0x330, "UBP_GamepadKeyGuideWidget_C::UberGraphFrame offset is not 330");
	auto constexpr UBP_GamepadKeyGuideWidget_C_BP_GamepadKeyGuideAim_Offset = offsetof(UBP_GamepadKeyGuideWidget_C, BP_GamepadKeyGuideAim);
	static_assert(UBP_GamepadKeyGuideWidget_C_BP_GamepadKeyGuideAim_Offset == 0x338, "UBP_GamepadKeyGuideWidget_C::BP_GamepadKeyGuideAim offset is not 338");
	auto constexpr UBP_GamepadKeyGuideWidget_C_BP_GamepadKeyGuideBasic_Offset = offsetof(UBP_GamepadKeyGuideWidget_C, BP_GamepadKeyGuideBasic);
	static_assert(UBP_GamepadKeyGuideWidget_C_BP_GamepadKeyGuideBasic_Offset == 0x340, "UBP_GamepadKeyGuideWidget_C::BP_GamepadKeyGuideBasic offset is not 340");
	auto constexpr UBP_GamepadKeyGuideWidget_C_BP_GamepadKeyGuideLegend_118_Offset = offsetof(UBP_GamepadKeyGuideWidget_C, BP_GamepadKeyGuideLegend_118);
	static_assert(UBP_GamepadKeyGuideWidget_C_BP_GamepadKeyGuideLegend_118_Offset == 0x348, "UBP_GamepadKeyGuideWidget_C::BP_GamepadKeyGuideLegend_118 offset is not 348");
	auto constexpr UBP_GamepadKeyGuideWidget_C_BP_GamepadKeyGuideMap_Offset = offsetof(UBP_GamepadKeyGuideWidget_C, BP_GamepadKeyGuideMap);
	static_assert(UBP_GamepadKeyGuideWidget_C_BP_GamepadKeyGuideMap_Offset == 0x350, "UBP_GamepadKeyGuideWidget_C::BP_GamepadKeyGuideMap offset is not 350");
	auto constexpr UBP_GamepadKeyGuideWidget_C_BP_GamepadKeyGuideSwim_Offset = offsetof(UBP_GamepadKeyGuideWidget_C, BP_GamepadKeyGuideSwim);
	static_assert(UBP_GamepadKeyGuideWidget_C_BP_GamepadKeyGuideSwim_Offset == 0x358, "UBP_GamepadKeyGuideWidget_C::BP_GamepadKeyGuideSwim offset is not 358");
	auto constexpr UBP_GamepadKeyGuideWidget_C_BP_GamepadKeyGuideVehicle_Offset = offsetof(UBP_GamepadKeyGuideWidget_C, BP_GamepadKeyGuideVehicle);
	static_assert(UBP_GamepadKeyGuideWidget_C_BP_GamepadKeyGuideVehicle_Offset == 0x360, "UBP_GamepadKeyGuideWidget_C::BP_GamepadKeyGuideVehicle offset is not 360");
	auto constexpr UBP_GamepadKeyGuideWidget_C_ContentsSwitcher_Offset = offsetof(UBP_GamepadKeyGuideWidget_C, ContentsSwitcher);
	static_assert(UBP_GamepadKeyGuideWidget_C_ContentsSwitcher_Offset == 0x368, "UBP_GamepadKeyGuideWidget_C::ContentsSwitcher offset is not 368");
	auto constexpr UBP_GamepadKeyGuideWidget_C_ControllerImage_Offset = offsetof(UBP_GamepadKeyGuideWidget_C, ControllerImage);
	static_assert(UBP_GamepadKeyGuideWidget_C_ControllerImage_Offset == 0x370, "UBP_GamepadKeyGuideWidget_C::ControllerImage offset is not 370");
	auto constexpr UBP_GamepadKeyGuideWidget_C_TabSelector_Offset = offsetof(UBP_GamepadKeyGuideWidget_C, TabSelector);
	static_assert(UBP_GamepadKeyGuideWidget_C_TabSelector_Offset == 0x378, "UBP_GamepadKeyGuideWidget_C::TabSelector offset is not 378");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
