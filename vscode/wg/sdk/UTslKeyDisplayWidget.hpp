#pragma once
#include "UTslBaseOptionWidget.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTslKeyDisplayWidget // Size: 0x430
	: public UTslBaseOptionWidget // Size: 0x3D0
{
private:
	typedef UTslKeyDisplayWidget t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1554); // id32("Class TslGame.TslKeyDisplayWidget")
		return ptr;
	}
	FScriptMulticastDelegate OnKeyInputed; /* Ofs: 0x3D0 Size: 0x10 - MulticastDelegateProperty TslGame.TslKeyDisplayWidget.OnKeyInputed */
	TArray<ExternalPtr<struct UTslKeyReceiverWidget>> KeyReceiverWidgets; /* Ofs: 0x3E0 Size: 0x10 - ArrayProperty TslGame.TslKeyDisplayWidget.KeyReceiverWidgets */
	TArray<struct FUmgWidgetBinder_UserWidget> KeyReceiverWidgetBinders; /* Ofs: 0x3F0 Size: 0x10 - ArrayProperty TslGame.TslKeyDisplayWidget.KeyReceiverWidgetBinders */
	FName InputName; /* Ofs: 0x400 Size: 0x8 - NameProperty TslGame.TslKeyDisplayWidget.InputName */
	FName CategoryName; /* Ofs: 0x408 Size: 0x8 - NameProperty TslGame.TslKeyDisplayWidget.CategoryName */
	FText DisplayText; /* Ofs: 0x410 Size: 0x18 - TextProperty TslGame.TslKeyDisplayWidget.DisplayText */
	uint8_t boolField428;
	uint8_t boolField429;
	uint8_t UnknownData42A[0x2];
	float AxisScale; /* Ofs: 0x42C Size: 0x4 - FloatProperty TslGame.TslKeyDisplayWidget.AxisScale */


	inline bool SetOnKeyInputed(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x3D0, value); }
	inline bool SetKeyReceiverWidgets(t_structHelper inst, TArray<ExternalPtr<struct UTslKeyReceiverWidget>> value) { inst.WriteOffset(0x3E0, value); }
	inline bool SetKeyReceiverWidgetBinders(t_structHelper inst, TArray<struct FUmgWidgetBinder_UserWidget> value) { inst.WriteOffset(0x3F0, value); }
	inline bool SetInputName(t_structHelper inst, FName value) { inst.WriteOffset(0x400, value); }
	inline bool SetCategoryName(t_structHelper inst, FName value) { inst.WriteOffset(0x408, value); }
	inline bool SetDisplayText(t_structHelper inst, FText value) { inst.WriteOffset(0x410, value); }
	inline bool bGamepad()
	{
		return boolField428& 0x1;
	}
	inline bool SetbGamepad(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x428, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bAxisInput()
	{
		return boolField429& 0x1;
	}
	inline bool SetbAxisInput(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x429, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetAxisScale(t_structHelper inst, float value) { inst.WriteOffset(0x42C, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTslKeyDisplayWidget = sizeof(UTslKeyDisplayWidget); // 1072
    static_assert(sizeof(UTslKeyDisplayWidget) == 0x430, "Size of UTslKeyDisplayWidget is not correct.");
	auto constexpr UTslKeyDisplayWidget_OnKeyInputed_Offset = offsetof(UTslKeyDisplayWidget, OnKeyInputed);
	static_assert(UTslKeyDisplayWidget_OnKeyInputed_Offset == 0x3d0, "UTslKeyDisplayWidget::OnKeyInputed offset is not 3d0");
	auto constexpr UTslKeyDisplayWidget_KeyReceiverWidgets_Offset = offsetof(UTslKeyDisplayWidget, KeyReceiverWidgets);
	static_assert(UTslKeyDisplayWidget_KeyReceiverWidgets_Offset == 0x3e0, "UTslKeyDisplayWidget::KeyReceiverWidgets offset is not 3e0");
	auto constexpr UTslKeyDisplayWidget_KeyReceiverWidgetBinders_Offset = offsetof(UTslKeyDisplayWidget, KeyReceiverWidgetBinders);
	static_assert(UTslKeyDisplayWidget_KeyReceiverWidgetBinders_Offset == 0x3f0, "UTslKeyDisplayWidget::KeyReceiverWidgetBinders offset is not 3f0");
	auto constexpr UTslKeyDisplayWidget_InputName_Offset = offsetof(UTslKeyDisplayWidget, InputName);
	static_assert(UTslKeyDisplayWidget_InputName_Offset == 0x400, "UTslKeyDisplayWidget::InputName offset is not 400");
	auto constexpr UTslKeyDisplayWidget_CategoryName_Offset = offsetof(UTslKeyDisplayWidget, CategoryName);
	static_assert(UTslKeyDisplayWidget_CategoryName_Offset == 0x408, "UTslKeyDisplayWidget::CategoryName offset is not 408");
	auto constexpr UTslKeyDisplayWidget_DisplayText_Offset = offsetof(UTslKeyDisplayWidget, DisplayText);
	static_assert(UTslKeyDisplayWidget_DisplayText_Offset == 0x410, "UTslKeyDisplayWidget::DisplayText offset is not 410");
	auto constexpr UTslKeyDisplayWidget_boolField428_Offset = offsetof(UTslKeyDisplayWidget, boolField428);
	static_assert(UTslKeyDisplayWidget_boolField428_Offset == 0x428, "UTslKeyDisplayWidget::boolField428 offset is not 428");
	auto constexpr UTslKeyDisplayWidget_boolField429_Offset = offsetof(UTslKeyDisplayWidget, boolField429);
	static_assert(UTslKeyDisplayWidget_boolField429_Offset == 0x429, "UTslKeyDisplayWidget::boolField429 offset is not 429");
	auto constexpr UTslKeyDisplayWidget_AxisScale_Offset = offsetof(UTslKeyDisplayWidget, AxisScale);
	static_assert(UTslKeyDisplayWidget_AxisScale_Offset == 0x42c, "UTslKeyDisplayWidget::AxisScale offset is not 42c");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
