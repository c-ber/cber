#pragma once
#include "UInteractionCanvasBaseWidget.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UInteractionCanvasWidget_C // Size: 0x350
	: public UInteractionCanvasBaseWidget // Size: 0x340
{
private:
	typedef UInteractionCanvasWidget_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(185023); // id32("WidgetBlueprintGeneratedClass InteractionCanvasWidget.InteractionCanvasWidget_C")
		return ptr;
	}
	ExternalPtr<struct URetainerBox> InteractionRetainerBox; /* Ofs: 0x340 Size: 0x8 - ObjectProperty InteractionCanvasWidget.InteractionCanvasWidget_C.InteractionRetainerBox */
	ExternalPtr<struct UBP_InteractionWidget_C> InteractionWidget; /* Ofs: 0x348 Size: 0x8 - ObjectProperty InteractionCanvasWidget.InteractionCanvasWidget_C.InteractionWidget */


	inline bool SetInteractionRetainerBox(t_structHelper inst, ExternalPtr<struct URetainerBox> value) { inst.WriteOffset(0x340, value); }
	inline bool SetInteractionWidget(t_structHelper inst, ExternalPtr<struct UBP_InteractionWidget_C> value) { inst.WriteOffset(0x348, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUInteractionCanvasWidget_C = sizeof(UInteractionCanvasWidget_C); // 848
    static_assert(sizeof(UInteractionCanvasWidget_C) == 0x350, "Size of UInteractionCanvasWidget_C is not correct.");
	auto constexpr UInteractionCanvasWidget_C_InteractionRetainerBox_Offset = offsetof(UInteractionCanvasWidget_C, InteractionRetainerBox);
	static_assert(UInteractionCanvasWidget_C_InteractionRetainerBox_Offset == 0x340, "UInteractionCanvasWidget_C::InteractionRetainerBox offset is not 340");
	auto constexpr UInteractionCanvasWidget_C_InteractionWidget_Offset = offsetof(UInteractionCanvasWidget_C, InteractionWidget);
	static_assert(UInteractionCanvasWidget_C_InteractionWidget_Offset == 0x348, "UInteractionCanvasWidget_C::InteractionWidget offset is not 348");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
