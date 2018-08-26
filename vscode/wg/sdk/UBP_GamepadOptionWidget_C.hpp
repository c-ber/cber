#pragma once
#include "UTslGamepadOptionWidget.hpp"
#include "FPointerToUberGraphFrame.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBP_GamepadOptionWidget_C // Size: 0x398
	: public UTslGamepadOptionWidget // Size: 0x350
{
private:
	typedef UBP_GamepadOptionWidget_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(178038); // id32("WidgetBlueprintGeneratedClass BP_GamepadOptionWidget.BP_GamepadOptionWidget_C")
		return ptr;
	}
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0x350 Size: 0x8 - StructProperty BP_GamepadOptionWidget.BP_GamepadOptionWidget_C.UberGraphFrame */
	ExternalPtr<struct UBP_GamepadOptionControl_C> BP_GamepadOptionControl; /* Ofs: 0x358 Size: 0x8 - ObjectProperty BP_GamepadOptionWidget.BP_GamepadOptionWidget_C.BP_GamepadOptionControl */
	ExternalPtr<struct UBP_GamepadOptionGameplay_C> BP_GamepadOptionGameplay; /* Ofs: 0x360 Size: 0x8 - ObjectProperty BP_GamepadOptionWidget.BP_GamepadOptionWidget_C.BP_GamepadOptionGameplay */
	ExternalPtr<struct UBP_GamepadOptionGraphic_C> BP_GamepadOptionGraphic; /* Ofs: 0x368 Size: 0x8 - ObjectProperty BP_GamepadOptionWidget.BP_GamepadOptionWidget_C.BP_GamepadOptionGraphic */
	ExternalPtr<struct UBP_GamepadOptionSound_C> BP_GamepadOptionSound; /* Ofs: 0x370 Size: 0x8 - ObjectProperty BP_GamepadOptionWidget.BP_GamepadOptionWidget_C.BP_GamepadOptionSound */
	ExternalPtr<struct UWidgetSwitcher> ContentsSwitcher; /* Ofs: 0x378 Size: 0x8 - ObjectProperty BP_GamepadOptionWidget.BP_GamepadOptionWidget_C.ContentsSwitcher */
	ExternalPtr<struct UBP_GamepadOptionDescWidget_C> DescWidget; /* Ofs: 0x380 Size: 0x8 - ObjectProperty BP_GamepadOptionWidget.BP_GamepadOptionWidget_C.DescWidget */
	ExternalPtr<struct UStepperHelp_C> OptionHelper; /* Ofs: 0x388 Size: 0x8 - ObjectProperty BP_GamepadOptionWidget.BP_GamepadOptionWidget_C.OptionHelper */
	ExternalPtr<struct UBP_GamepadOptionTabSelectorWidget_C> TabSelector; /* Ofs: 0x390 Size: 0x8 - ObjectProperty BP_GamepadOptionWidget.BP_GamepadOptionWidget_C.TabSelector */


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0x350, value); }
	inline bool SetBP_GamepadOptionControl(t_structHelper inst, ExternalPtr<struct UBP_GamepadOptionControl_C> value) { inst.WriteOffset(0x358, value); }
	inline bool SetBP_GamepadOptionGameplay(t_structHelper inst, ExternalPtr<struct UBP_GamepadOptionGameplay_C> value) { inst.WriteOffset(0x360, value); }
	inline bool SetBP_GamepadOptionGraphic(t_structHelper inst, ExternalPtr<struct UBP_GamepadOptionGraphic_C> value) { inst.WriteOffset(0x368, value); }
	inline bool SetBP_GamepadOptionSound(t_structHelper inst, ExternalPtr<struct UBP_GamepadOptionSound_C> value) { inst.WriteOffset(0x370, value); }
	inline bool SetContentsSwitcher(t_structHelper inst, ExternalPtr<struct UWidgetSwitcher> value) { inst.WriteOffset(0x378, value); }
	inline bool SetDescWidget(t_structHelper inst, ExternalPtr<struct UBP_GamepadOptionDescWidget_C> value) { inst.WriteOffset(0x380, value); }
	inline bool SetOptionHelper(t_structHelper inst, ExternalPtr<struct UStepperHelp_C> value) { inst.WriteOffset(0x388, value); }
	inline bool SetTabSelector(t_structHelper inst, ExternalPtr<struct UBP_GamepadOptionTabSelectorWidget_C> value) { inst.WriteOffset(0x390, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBP_GamepadOptionWidget_C = sizeof(UBP_GamepadOptionWidget_C); // 920
    static_assert(sizeof(UBP_GamepadOptionWidget_C) == 0x398, "Size of UBP_GamepadOptionWidget_C is not correct.");
	auto constexpr UBP_GamepadOptionWidget_C_UberGraphFrame_Offset = offsetof(UBP_GamepadOptionWidget_C, UberGraphFrame);
	static_assert(UBP_GamepadOptionWidget_C_UberGraphFrame_Offset == 0x350, "UBP_GamepadOptionWidget_C::UberGraphFrame offset is not 350");
	auto constexpr UBP_GamepadOptionWidget_C_BP_GamepadOptionControl_Offset = offsetof(UBP_GamepadOptionWidget_C, BP_GamepadOptionControl);
	static_assert(UBP_GamepadOptionWidget_C_BP_GamepadOptionControl_Offset == 0x358, "UBP_GamepadOptionWidget_C::BP_GamepadOptionControl offset is not 358");
	auto constexpr UBP_GamepadOptionWidget_C_BP_GamepadOptionGameplay_Offset = offsetof(UBP_GamepadOptionWidget_C, BP_GamepadOptionGameplay);
	static_assert(UBP_GamepadOptionWidget_C_BP_GamepadOptionGameplay_Offset == 0x360, "UBP_GamepadOptionWidget_C::BP_GamepadOptionGameplay offset is not 360");
	auto constexpr UBP_GamepadOptionWidget_C_BP_GamepadOptionGraphic_Offset = offsetof(UBP_GamepadOptionWidget_C, BP_GamepadOptionGraphic);
	static_assert(UBP_GamepadOptionWidget_C_BP_GamepadOptionGraphic_Offset == 0x368, "UBP_GamepadOptionWidget_C::BP_GamepadOptionGraphic offset is not 368");
	auto constexpr UBP_GamepadOptionWidget_C_BP_GamepadOptionSound_Offset = offsetof(UBP_GamepadOptionWidget_C, BP_GamepadOptionSound);
	static_assert(UBP_GamepadOptionWidget_C_BP_GamepadOptionSound_Offset == 0x370, "UBP_GamepadOptionWidget_C::BP_GamepadOptionSound offset is not 370");
	auto constexpr UBP_GamepadOptionWidget_C_ContentsSwitcher_Offset = offsetof(UBP_GamepadOptionWidget_C, ContentsSwitcher);
	static_assert(UBP_GamepadOptionWidget_C_ContentsSwitcher_Offset == 0x378, "UBP_GamepadOptionWidget_C::ContentsSwitcher offset is not 378");
	auto constexpr UBP_GamepadOptionWidget_C_DescWidget_Offset = offsetof(UBP_GamepadOptionWidget_C, DescWidget);
	static_assert(UBP_GamepadOptionWidget_C_DescWidget_Offset == 0x380, "UBP_GamepadOptionWidget_C::DescWidget offset is not 380");
	auto constexpr UBP_GamepadOptionWidget_C_OptionHelper_Offset = offsetof(UBP_GamepadOptionWidget_C, OptionHelper);
	static_assert(UBP_GamepadOptionWidget_C_OptionHelper_Offset == 0x388, "UBP_GamepadOptionWidget_C::OptionHelper offset is not 388");
	auto constexpr UBP_GamepadOptionWidget_C_TabSelector_Offset = offsetof(UBP_GamepadOptionWidget_C, TabSelector);
	static_assert(UBP_GamepadOptionWidget_C_TabSelector_Offset == 0x390, "UBP_GamepadOptionWidget_C::TabSelector offset is not 390");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
