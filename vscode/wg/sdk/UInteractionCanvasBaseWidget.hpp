#pragma once
#include "UUmgBaseWidget.hpp"
#include "FUmgWidgetBinder_UserWidget.hpp"
#include "FUmgWidgetBinder_RetainerBox.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UInteractionCanvasBaseWidget // Size: 0x340
	: public UUmgBaseWidget // Size: 0x300
{
private:
	typedef UInteractionCanvasBaseWidget t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1529); // id32("Class TslGame.InteractionCanvasBaseWidget")
		return ptr;
	}
	FUmgWidgetBinder_UserWidget InteractionWidgetBinder; /* Ofs: 0x300 Size: 0x20 - StructProperty TslGame.InteractionCanvasBaseWidget.InteractionWidgetBinder */
	FUmgWidgetBinder_RetainerBox InteractionRetainerBoxBinder; /* Ofs: 0x320 Size: 0x20 - StructProperty TslGame.InteractionCanvasBaseWidget.InteractionRetainerBoxBinder */


	inline bool SetInteractionWidgetBinder(t_structHelper inst, FUmgWidgetBinder_UserWidget value) { inst.WriteOffset(0x300, value); }
	inline bool SetInteractionRetainerBoxBinder(t_structHelper inst, FUmgWidgetBinder_RetainerBox value) { inst.WriteOffset(0x320, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUInteractionCanvasBaseWidget = sizeof(UInteractionCanvasBaseWidget); // 832
    static_assert(sizeof(UInteractionCanvasBaseWidget) == 0x340, "Size of UInteractionCanvasBaseWidget is not correct.");
	auto constexpr UInteractionCanvasBaseWidget_InteractionWidgetBinder_Offset = offsetof(UInteractionCanvasBaseWidget, InteractionWidgetBinder);
	static_assert(UInteractionCanvasBaseWidget_InteractionWidgetBinder_Offset == 0x300, "UInteractionCanvasBaseWidget::InteractionWidgetBinder offset is not 300");
	auto constexpr UInteractionCanvasBaseWidget_InteractionRetainerBoxBinder_Offset = offsetof(UInteractionCanvasBaseWidget, InteractionRetainerBoxBinder);
	static_assert(UInteractionCanvasBaseWidget_InteractionRetainerBoxBinder_Offset == 0x320, "UInteractionCanvasBaseWidget::InteractionRetainerBoxBinder offset is not 320");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
