#pragma once
#include "UTslStepperCounterContentWidget.hpp"
#include "FPointerToUberGraphFrame.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBP_StepperCounterContentWidget_C // Size: 0x330
	: public UTslStepperCounterContentWidget // Size: 0x320
{
private:
	typedef UBP_StepperCounterContentWidget_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(177831); // id32("WidgetBlueprintGeneratedClass BP_StepperCounterContentWidget.BP_StepperCounterContentWidget_C")
		return ptr;
	}
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0x320 Size: 0x8 - StructProperty BP_StepperCounterContentWidget.BP_StepperCounterContentWidget_C.UberGraphFrame */
	ExternalPtr<struct UWidgetSwitcher> StateSwitcher; /* Ofs: 0x328 Size: 0x8 - ObjectProperty BP_StepperCounterContentWidget.BP_StepperCounterContentWidget_C.StateSwitcher */


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0x320, value); }
	inline bool SetStateSwitcher(t_structHelper inst, ExternalPtr<struct UWidgetSwitcher> value) { inst.WriteOffset(0x328, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBP_StepperCounterContentWidget_C = sizeof(UBP_StepperCounterContentWidget_C); // 816
    static_assert(sizeof(UBP_StepperCounterContentWidget_C) == 0x330, "Size of UBP_StepperCounterContentWidget_C is not correct.");
	auto constexpr UBP_StepperCounterContentWidget_C_UberGraphFrame_Offset = offsetof(UBP_StepperCounterContentWidget_C, UberGraphFrame);
	static_assert(UBP_StepperCounterContentWidget_C_UberGraphFrame_Offset == 0x320, "UBP_StepperCounterContentWidget_C::UberGraphFrame offset is not 320");
	auto constexpr UBP_StepperCounterContentWidget_C_StateSwitcher_Offset = offsetof(UBP_StepperCounterContentWidget_C, StateSwitcher);
	static_assert(UBP_StepperCounterContentWidget_C_StateSwitcher_Offset == 0x328, "UBP_StepperCounterContentWidget_C::StateSwitcher offset is not 328");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
