#pragma once
#include "UTslGamepadStepperWidget.hpp"
#include "FPointerToUberGraphFrame.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBP_GamepadStepperWidget_C // Size: 0x518
	: public UTslGamepadStepperWidget // Size: 0x4E0
{
private:
	typedef UBP_GamepadStepperWidget_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(177846); // id32("WidgetBlueprintGeneratedClass BP_GamepadStepperWidget.BP_GamepadStepperWidget_C")
		return ptr;
	}
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0x4E0 Size: 0x8 - StructProperty BP_GamepadStepperWidget.BP_GamepadStepperWidget_C.UberGraphFrame */
	ExternalPtr<struct UBorder> Border_5; /* Ofs: 0x4E8 Size: 0x8 - ObjectProperty BP_GamepadStepperWidget.BP_GamepadStepperWidget_C.Border_5 */
	ExternalPtr<struct UImage> LeftArrow; /* Ofs: 0x4F0 Size: 0x8 - ObjectProperty BP_GamepadStepperWidget.BP_GamepadStepperWidget_C.LeftArrow */
	ExternalPtr<struct UImage> RightArrow; /* Ofs: 0x4F8 Size: 0x8 - ObjectProperty BP_GamepadStepperWidget.BP_GamepadStepperWidget_C.RightArrow */
	ExternalPtr<struct UBP_StepperCounterWidget_C> StepperCounter; /* Ofs: 0x500 Size: 0x8 - ObjectProperty BP_GamepadStepperWidget.BP_GamepadStepperWidget_C.StepperCounter */
	ExternalPtr<struct UTextBlock> StepperTextBox; /* Ofs: 0x508 Size: 0x8 - ObjectProperty BP_GamepadStepperWidget.BP_GamepadStepperWidget_C.StepperTextBox */
	ExternalPtr<struct UTextBlock> TitleTextBox; /* Ofs: 0x510 Size: 0x8 - ObjectProperty BP_GamepadStepperWidget.BP_GamepadStepperWidget_C.TitleTextBox */


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0x4E0, value); }
	inline bool SetBorder_5(t_structHelper inst, ExternalPtr<struct UBorder> value) { inst.WriteOffset(0x4E8, value); }
	inline bool SetLeftArrow(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x4F0, value); }
	inline bool SetRightArrow(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x4F8, value); }
	inline bool SetStepperCounter(t_structHelper inst, ExternalPtr<struct UBP_StepperCounterWidget_C> value) { inst.WriteOffset(0x500, value); }
	inline bool SetStepperTextBox(t_structHelper inst, ExternalPtr<struct UTextBlock> value) { inst.WriteOffset(0x508, value); }
	inline bool SetTitleTextBox(t_structHelper inst, ExternalPtr<struct UTextBlock> value) { inst.WriteOffset(0x510, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBP_GamepadStepperWidget_C = sizeof(UBP_GamepadStepperWidget_C); // 1304
    static_assert(sizeof(UBP_GamepadStepperWidget_C) == 0x518, "Size of UBP_GamepadStepperWidget_C is not correct.");
	auto constexpr UBP_GamepadStepperWidget_C_UberGraphFrame_Offset = offsetof(UBP_GamepadStepperWidget_C, UberGraphFrame);
	static_assert(UBP_GamepadStepperWidget_C_UberGraphFrame_Offset == 0x4e0, "UBP_GamepadStepperWidget_C::UberGraphFrame offset is not 4e0");
	auto constexpr UBP_GamepadStepperWidget_C_Border_5_Offset = offsetof(UBP_GamepadStepperWidget_C, Border_5);
	static_assert(UBP_GamepadStepperWidget_C_Border_5_Offset == 0x4e8, "UBP_GamepadStepperWidget_C::Border_5 offset is not 4e8");
	auto constexpr UBP_GamepadStepperWidget_C_LeftArrow_Offset = offsetof(UBP_GamepadStepperWidget_C, LeftArrow);
	static_assert(UBP_GamepadStepperWidget_C_LeftArrow_Offset == 0x4f0, "UBP_GamepadStepperWidget_C::LeftArrow offset is not 4f0");
	auto constexpr UBP_GamepadStepperWidget_C_RightArrow_Offset = offsetof(UBP_GamepadStepperWidget_C, RightArrow);
	static_assert(UBP_GamepadStepperWidget_C_RightArrow_Offset == 0x4f8, "UBP_GamepadStepperWidget_C::RightArrow offset is not 4f8");
	auto constexpr UBP_GamepadStepperWidget_C_StepperCounter_Offset = offsetof(UBP_GamepadStepperWidget_C, StepperCounter);
	static_assert(UBP_GamepadStepperWidget_C_StepperCounter_Offset == 0x500, "UBP_GamepadStepperWidget_C::StepperCounter offset is not 500");
	auto constexpr UBP_GamepadStepperWidget_C_StepperTextBox_Offset = offsetof(UBP_GamepadStepperWidget_C, StepperTextBox);
	static_assert(UBP_GamepadStepperWidget_C_StepperTextBox_Offset == 0x508, "UBP_GamepadStepperWidget_C::StepperTextBox offset is not 508");
	auto constexpr UBP_GamepadStepperWidget_C_TitleTextBox_Offset = offsetof(UBP_GamepadStepperWidget_C, TitleTextBox);
	static_assert(UBP_GamepadStepperWidget_C_TitleTextBox_Offset == 0x510, "UBP_GamepadStepperWidget_C::TitleTextBox offset is not 510");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
