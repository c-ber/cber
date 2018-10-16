#pragma once
#include "UUserWidget.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBP_GamepadKeyGuideLegend_C // Size: 0x250
	: public UUserWidget // Size: 0x248
{
private:
	typedef UBP_GamepadKeyGuideLegend_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(179607); // id32("WidgetBlueprintGeneratedClass BP_GamepadKeyGuideLegend.BP_GamepadKeyGuideLegend_C")
		return ptr;
	}
	ExternalPtr<struct UHorizontalBox> Back; /* Ofs: 0x248 Size: 0x8 - ObjectProperty BP_GamepadKeyGuideLegend.BP_GamepadKeyGuideLegend_C.Back */


	inline bool SetBack(t_structHelper inst, ExternalPtr<struct UHorizontalBox> value) { inst.WriteOffset(0x248, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBP_GamepadKeyGuideLegend_C = sizeof(UBP_GamepadKeyGuideLegend_C); // 592
    static_assert(sizeof(UBP_GamepadKeyGuideLegend_C) == 0x250, "Size of UBP_GamepadKeyGuideLegend_C is not correct.");
	auto constexpr UBP_GamepadKeyGuideLegend_C_Back_Offset = offsetof(UBP_GamepadKeyGuideLegend_C, Back);
	static_assert(UBP_GamepadKeyGuideLegend_C_Back_Offset == 0x248, "UBP_GamepadKeyGuideLegend_C::Back offset is not 248");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
