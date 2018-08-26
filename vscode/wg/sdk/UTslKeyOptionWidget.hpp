#pragma once
#include "UTslBaseOptionWidget.hpp"
#include "FUmgWidgetBinder_Gerneral.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTslKeyOptionWidget // Size: 0x440
	: public UTslBaseOptionWidget // Size: 0x3D0
{
private:
	typedef UTslKeyOptionWidget t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1555); // id32("Class TslGame.TslKeyOptionWidget")
		return ptr;
	}
	FUmgWidgetBinder_Gerneral ScrollBox_Binder; /* Ofs: 0x3D0 Size: 0x20 - StructProperty TslGame.TslKeyOptionWidget.ScrollBox_Binder */
	TArray<ExternalPtr<struct UTslKeySettingWidget>> KeySettingWidgets; /* Ofs: 0x3F0 Size: 0x10 - ArrayProperty TslGame.TslKeyOptionWidget.KeySettingWidgets */
	ExternalPtr<struct UClass> MouseSettingWidgetClass; /* Ofs: 0x400 Size: 0x8 - ClassProperty TslGame.TslKeyOptionWidget.MouseSettingWidgetClass */
	ExternalPtr<struct UTslBaseOptionWidget> MouseSettingWidget; /* Ofs: 0x408 Size: 0x8 - ObjectProperty TslGame.TslKeyOptionWidget.MouseSettingWidget */
	ExternalPtr<struct UClass> KeySettingWidgetClass; /* Ofs: 0x410 Size: 0x8 - ClassProperty TslGame.TslKeyOptionWidget.KeySettingWidgetClass */
	ExternalPtr<struct UClass> GamePadSettingWidgetClass; /* Ofs: 0x418 Size: 0x8 - ClassProperty TslGame.TslKeyOptionWidget.GamePadSettingWidgetClass */
	ExternalPtr<struct UTslBaseOptionWidget> GamePadSettingWidget; /* Ofs: 0x420 Size: 0x8 - ObjectProperty TslGame.TslKeyOptionWidget.GamePadSettingWidget */
	TArray<struct FName> CategoryOrder; /* Ofs: 0x428 Size: 0x10 - ArrayProperty TslGame.TslKeyOptionWidget.CategoryOrder */
	uint8_t UnknownData438[0x8];


	inline bool SetScrollBox_Binder(t_structHelper inst, FUmgWidgetBinder_Gerneral value) { inst.WriteOffset(0x3D0, value); }
	inline bool SetKeySettingWidgets(t_structHelper inst, TArray<ExternalPtr<struct UTslKeySettingWidget>> value) { inst.WriteOffset(0x3F0, value); }
	inline bool SetMouseSettingWidgetClass(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0x400, value); }
	inline bool SetMouseSettingWidget(t_structHelper inst, ExternalPtr<struct UTslBaseOptionWidget> value) { inst.WriteOffset(0x408, value); }
	inline bool SetKeySettingWidgetClass(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0x410, value); }
	inline bool SetGamePadSettingWidgetClass(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0x418, value); }
	inline bool SetGamePadSettingWidget(t_structHelper inst, ExternalPtr<struct UTslBaseOptionWidget> value) { inst.WriteOffset(0x420, value); }
	inline bool SetCategoryOrder(t_structHelper inst, TArray<struct FName> value) { inst.WriteOffset(0x428, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTslKeyOptionWidget = sizeof(UTslKeyOptionWidget); // 1088
    static_assert(sizeof(UTslKeyOptionWidget) == 0x440, "Size of UTslKeyOptionWidget is not correct.");
	auto constexpr UTslKeyOptionWidget_ScrollBox_Binder_Offset = offsetof(UTslKeyOptionWidget, ScrollBox_Binder);
	static_assert(UTslKeyOptionWidget_ScrollBox_Binder_Offset == 0x3d0, "UTslKeyOptionWidget::ScrollBox_Binder offset is not 3d0");
	auto constexpr UTslKeyOptionWidget_KeySettingWidgets_Offset = offsetof(UTslKeyOptionWidget, KeySettingWidgets);
	static_assert(UTslKeyOptionWidget_KeySettingWidgets_Offset == 0x3f0, "UTslKeyOptionWidget::KeySettingWidgets offset is not 3f0");
	auto constexpr UTslKeyOptionWidget_MouseSettingWidgetClass_Offset = offsetof(UTslKeyOptionWidget, MouseSettingWidgetClass);
	static_assert(UTslKeyOptionWidget_MouseSettingWidgetClass_Offset == 0x400, "UTslKeyOptionWidget::MouseSettingWidgetClass offset is not 400");
	auto constexpr UTslKeyOptionWidget_MouseSettingWidget_Offset = offsetof(UTslKeyOptionWidget, MouseSettingWidget);
	static_assert(UTslKeyOptionWidget_MouseSettingWidget_Offset == 0x408, "UTslKeyOptionWidget::MouseSettingWidget offset is not 408");
	auto constexpr UTslKeyOptionWidget_KeySettingWidgetClass_Offset = offsetof(UTslKeyOptionWidget, KeySettingWidgetClass);
	static_assert(UTslKeyOptionWidget_KeySettingWidgetClass_Offset == 0x410, "UTslKeyOptionWidget::KeySettingWidgetClass offset is not 410");
	auto constexpr UTslKeyOptionWidget_GamePadSettingWidgetClass_Offset = offsetof(UTslKeyOptionWidget, GamePadSettingWidgetClass);
	static_assert(UTslKeyOptionWidget_GamePadSettingWidgetClass_Offset == 0x418, "UTslKeyOptionWidget::GamePadSettingWidgetClass offset is not 418");
	auto constexpr UTslKeyOptionWidget_GamePadSettingWidget_Offset = offsetof(UTslKeyOptionWidget, GamePadSettingWidget);
	static_assert(UTslKeyOptionWidget_GamePadSettingWidget_Offset == 0x420, "UTslKeyOptionWidget::GamePadSettingWidget offset is not 420");
	auto constexpr UTslKeyOptionWidget_CategoryOrder_Offset = offsetof(UTslKeyOptionWidget, CategoryOrder);
	static_assert(UTslKeyOptionWidget_CategoryOrder_Offset == 0x428, "UTslKeyOptionWidget::CategoryOrder offset is not 428");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
