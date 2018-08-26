#pragma once
#include "UUserWidget.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UStepperHelp_C // Size: 0x260
	: public UUserWidget // Size: 0x248
{
private:
	typedef UStepperHelp_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(177886); // id32("WidgetBlueprintGeneratedClass StepperHelp.StepperHelp_C")
		return ptr;
	}
	ExternalPtr<struct UHorizontalBox> ApplyBackDefault; /* Ofs: 0x248 Size: 0x8 - ObjectProperty StepperHelp.StepperHelp_C.ApplyBackDefault */
	ExternalPtr<struct UHorizontalBox> BackDefault; /* Ofs: 0x250 Size: 0x8 - ObjectProperty StepperHelp.StepperHelp_C.BackDefault */
	ExternalPtr<struct UWidgetSwitcher> WidgetSwitcher_1; /* Ofs: 0x258 Size: 0x8 - ObjectProperty StepperHelp.StepperHelp_C.WidgetSwitcher_1 */


	inline bool SetApplyBackDefault(t_structHelper inst, ExternalPtr<struct UHorizontalBox> value) { inst.WriteOffset(0x248, value); }
	inline bool SetBackDefault(t_structHelper inst, ExternalPtr<struct UHorizontalBox> value) { inst.WriteOffset(0x250, value); }
	inline bool SetWidgetSwitcher_1(t_structHelper inst, ExternalPtr<struct UWidgetSwitcher> value) { inst.WriteOffset(0x258, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUStepperHelp_C = sizeof(UStepperHelp_C); // 608
    static_assert(sizeof(UStepperHelp_C) == 0x260, "Size of UStepperHelp_C is not correct.");
	auto constexpr UStepperHelp_C_ApplyBackDefault_Offset = offsetof(UStepperHelp_C, ApplyBackDefault);
	static_assert(UStepperHelp_C_ApplyBackDefault_Offset == 0x248, "UStepperHelp_C::ApplyBackDefault offset is not 248");
	auto constexpr UStepperHelp_C_BackDefault_Offset = offsetof(UStepperHelp_C, BackDefault);
	static_assert(UStepperHelp_C_BackDefault_Offset == 0x250, "UStepperHelp_C::BackDefault offset is not 250");
	auto constexpr UStepperHelp_C_WidgetSwitcher_1_Offset = offsetof(UStepperHelp_C, WidgetSwitcher_1);
	static_assert(UStepperHelp_C_WidgetSwitcher_1_Offset == 0x258, "UStepperHelp_C::WidgetSwitcher_1 offset is not 258");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
