#pragma once
#include "UTslStepperCounterWidget.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBP_StepperCounterWidget_C // Size: 0x360
	: public UTslStepperCounterWidget // Size: 0x348
{
private:
	typedef UBP_StepperCounterWidget_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(177823); // id32("WidgetBlueprintGeneratedClass BP_StepperCounterWidget.BP_StepperCounterWidget_C")
		return ptr;
	}
	ExternalPtr<struct UBP_StepperCounterContentWidget_C> BP_StepperCounterContentWidget; /* Ofs: 0x348 Size: 0x8 - ObjectProperty BP_StepperCounterWidget.BP_StepperCounterWidget_C.BP_StepperCounterContentWidget */
	ExternalPtr<struct UBP_StepperCounterContentWidget_C> BP_StepperCounterContentWidget_1; /* Ofs: 0x350 Size: 0x8 - ObjectProperty BP_StepperCounterWidget.BP_StepperCounterWidget_C.BP_StepperCounterContentWidget_1 */
	ExternalPtr<struct UHorizontalBox> ContentsHorizontalBox; /* Ofs: 0x358 Size: 0x8 - ObjectProperty BP_StepperCounterWidget.BP_StepperCounterWidget_C.ContentsHorizontalBox */


	inline bool SetBP_StepperCounterContentWidget(t_structHelper inst, ExternalPtr<struct UBP_StepperCounterContentWidget_C> value) { inst.WriteOffset(0x348, value); }
	inline bool SetBP_StepperCounterContentWidget_1(t_structHelper inst, ExternalPtr<struct UBP_StepperCounterContentWidget_C> value) { inst.WriteOffset(0x350, value); }
	inline bool SetContentsHorizontalBox(t_structHelper inst, ExternalPtr<struct UHorizontalBox> value) { inst.WriteOffset(0x358, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBP_StepperCounterWidget_C = sizeof(UBP_StepperCounterWidget_C); // 864
    static_assert(sizeof(UBP_StepperCounterWidget_C) == 0x360, "Size of UBP_StepperCounterWidget_C is not correct.");
	auto constexpr UBP_StepperCounterWidget_C_BP_StepperCounterContentWidget_Offset = offsetof(UBP_StepperCounterWidget_C, BP_StepperCounterContentWidget);
	static_assert(UBP_StepperCounterWidget_C_BP_StepperCounterContentWidget_Offset == 0x348, "UBP_StepperCounterWidget_C::BP_StepperCounterContentWidget offset is not 348");
	auto constexpr UBP_StepperCounterWidget_C_BP_StepperCounterContentWidget_1_Offset = offsetof(UBP_StepperCounterWidget_C, BP_StepperCounterContentWidget_1);
	static_assert(UBP_StepperCounterWidget_C_BP_StepperCounterContentWidget_1_Offset == 0x350, "UBP_StepperCounterWidget_C::BP_StepperCounterContentWidget_1 offset is not 350");
	auto constexpr UBP_StepperCounterWidget_C_ContentsHorizontalBox_Offset = offsetof(UBP_StepperCounterWidget_C, ContentsHorizontalBox);
	static_assert(UBP_StepperCounterWidget_C_ContentsHorizontalBox_Offset == 0x358, "UBP_StepperCounterWidget_C::ContentsHorizontalBox offset is not 358");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
