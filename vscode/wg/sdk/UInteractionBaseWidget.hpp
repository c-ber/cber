#pragma once
#include "UUmgBaseWidget.hpp"
#include "FUmgWidgetBinder_Border.hpp"
#include "FUmgWidgetBinder_TextBlock.hpp"
#include "FUmgWidgetBinder_Image.hpp"
#include "FUmgWidgetBinder_Animation.hpp"
#include "FUmgWidgetBinder_WidgetSwitcher.hpp"
#include "FLinearColor.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UInteractionBaseWidget // Size: 0x590
	: public UUmgBaseWidget // Size: 0x300
{
private:
	typedef UInteractionBaseWidget t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1528); // id32("Class TslGame.InteractionBaseWidget")
		return ptr;
	}
	FUmgWidgetBinder_Border MainLayer; /* Ofs: 0x300 Size: 0x20 - StructProperty TslGame.InteractionBaseWidget.MainLayer */
	FUmgWidgetBinder_TextBlock InteractionMessageTextBinder; /* Ofs: 0x320 Size: 0x20 - StructProperty TslGame.InteractionBaseWidget.InteractionMessageTextBinder */
	FUmgWidgetBinder_Border InteractionMessageTextBgBinder; /* Ofs: 0x340 Size: 0x20 - StructProperty TslGame.InteractionBaseWidget.InteractionMessageTextBgBinder */
	FUmgWidgetBinder_TextBlock AdditionalTextBinder; /* Ofs: 0x360 Size: 0x20 - StructProperty TslGame.InteractionBaseWidget.AdditionalTextBinder */
	FUmgWidgetBinder_Image SuitableWeaponImageBinder; /* Ofs: 0x380 Size: 0x28 - StructProperty TslGame.InteractionBaseWidget.SuitableWeaponImageBinder */
	float SuitableWeaponImageHeight; /* Ofs: 0x3A8 Size: 0x4 - FloatProperty TslGame.InteractionBaseWidget.SuitableWeaponImageHeight */
	uint8_t UnknownData3AC[0x4];
	FUmgWidgetBinder_Image KeyImageBinder; /* Ofs: 0x3B0 Size: 0x28 - StructProperty TslGame.InteractionBaseWidget.KeyImageBinder */
	FUmgWidgetBinder_TextBlock InteractionKeyTextBinder; /* Ofs: 0x3D8 Size: 0x20 - StructProperty TslGame.InteractionBaseWidget.InteractionKeyTextBinder */
	FUmgWidgetBinder_Border InteractionKeyTextBorder_Binder; /* Ofs: 0x3F8 Size: 0x20 - StructProperty TslGame.InteractionBaseWidget.InteractionKeyTextBorder_Binder */
	FUmgWidgetBinder_Image InteractionKeyImage_Left_Binder; /* Ofs: 0x418 Size: 0x28 - StructProperty TslGame.InteractionBaseWidget.InteractionKeyImage_Left_Binder */
	FUmgWidgetBinder_Image InteractionKeyImage_Right_Binder; /* Ofs: 0x440 Size: 0x28 - StructProperty TslGame.InteractionBaseWidget.InteractionKeyImage_Right_Binder */
	FUmgWidgetBinder_Animation AdditionalMessageBlinkingBinder; /* Ofs: 0x468 Size: 0x20 - StructProperty TslGame.InteractionBaseWidget.AdditionalMessageBlinkingBinder */
	FUmgWidgetBinder_Animation AdditionalMessageNormalBinder; /* Ofs: 0x488 Size: 0x20 - StructProperty TslGame.InteractionBaseWidget.AdditionalMessageNormalBinder */
	FUmgWidgetBinder_Animation ShowAnimationBinder; /* Ofs: 0x4A8 Size: 0x20 - StructProperty TslGame.InteractionBaseWidget.ShowAnimationBinder */
	FUmgWidgetBinder_Animation HiddenAnimationBinder; /* Ofs: 0x4C8 Size: 0x20 - StructProperty TslGame.InteractionBaseWidget.HiddenAnimationBinder */
	FUmgWidgetBinder_WidgetSwitcher InteractionInputMethodSwitcherBinder; /* Ofs: 0x4E8 Size: 0x20 - StructProperty TslGame.InteractionBaseWidget.InteractionInputMethodSwitcherBinder */
	FName InteractionKeyName; /* Ofs: 0x508 Size: 0x8 - NameProperty TslGame.InteractionBaseWidget.InteractionKeyName */
	FUmgWidgetBinder_Image ProgressCircle_Binder; /* Ofs: 0x510 Size: 0x28 - StructProperty TslGame.InteractionBaseWidget.ProgressCircle_Binder */
	FLinearColor InteractionTextColor_Interactable; /* Ofs: 0x538 Size: 0x10 - StructProperty TslGame.InteractionBaseWidget.InteractionTextColor_Interactable */
	FLinearColor InteractionTextShadowColor_Interactable; /* Ofs: 0x548 Size: 0x10 - StructProperty TslGame.InteractionBaseWidget.InteractionTextShadowColor_Interactable */
	FLinearColor InteractionTextColor_NotInteractable; /* Ofs: 0x558 Size: 0x10 - StructProperty TslGame.InteractionBaseWidget.InteractionTextColor_NotInteractable */
	FLinearColor InteractionTextShadowColor_NotInteractable; /* Ofs: 0x568 Size: 0x10 - StructProperty TslGame.InteractionBaseWidget.InteractionTextShadowColor_NotInteractable */
	uint8_t UnknownData578[0x18];


	inline bool SetMainLayer(t_structHelper inst, FUmgWidgetBinder_Border value) { inst.WriteOffset(0x300, value); }
	inline bool SetInteractionMessageTextBinder(t_structHelper inst, FUmgWidgetBinder_TextBlock value) { inst.WriteOffset(0x320, value); }
	inline bool SetInteractionMessageTextBgBinder(t_structHelper inst, FUmgWidgetBinder_Border value) { inst.WriteOffset(0x340, value); }
	inline bool SetAdditionalTextBinder(t_structHelper inst, FUmgWidgetBinder_TextBlock value) { inst.WriteOffset(0x360, value); }
	inline bool SetSuitableWeaponImageBinder(t_structHelper inst, FUmgWidgetBinder_Image value) { inst.WriteOffset(0x380, value); }
	inline bool SetSuitableWeaponImageHeight(t_structHelper inst, float value) { inst.WriteOffset(0x3A8, value); }
	inline bool SetKeyImageBinder(t_structHelper inst, FUmgWidgetBinder_Image value) { inst.WriteOffset(0x3B0, value); }
	inline bool SetInteractionKeyTextBinder(t_structHelper inst, FUmgWidgetBinder_TextBlock value) { inst.WriteOffset(0x3D8, value); }
	inline bool SetInteractionKeyTextBorder_Binder(t_structHelper inst, FUmgWidgetBinder_Border value) { inst.WriteOffset(0x3F8, value); }
	inline bool SetInteractionKeyImage_Left_Binder(t_structHelper inst, FUmgWidgetBinder_Image value) { inst.WriteOffset(0x418, value); }
	inline bool SetInteractionKeyImage_Right_Binder(t_structHelper inst, FUmgWidgetBinder_Image value) { inst.WriteOffset(0x440, value); }
	inline bool SetAdditionalMessageBlinkingBinder(t_structHelper inst, FUmgWidgetBinder_Animation value) { inst.WriteOffset(0x468, value); }
	inline bool SetAdditionalMessageNormalBinder(t_structHelper inst, FUmgWidgetBinder_Animation value) { inst.WriteOffset(0x488, value); }
	inline bool SetShowAnimationBinder(t_structHelper inst, FUmgWidgetBinder_Animation value) { inst.WriteOffset(0x4A8, value); }
	inline bool SetHiddenAnimationBinder(t_structHelper inst, FUmgWidgetBinder_Animation value) { inst.WriteOffset(0x4C8, value); }
	inline bool SetInteractionInputMethodSwitcherBinder(t_structHelper inst, FUmgWidgetBinder_WidgetSwitcher value) { inst.WriteOffset(0x4E8, value); }
	inline bool SetInteractionKeyName(t_structHelper inst, FName value) { inst.WriteOffset(0x508, value); }
	inline bool SetProgressCircle_Binder(t_structHelper inst, FUmgWidgetBinder_Image value) { inst.WriteOffset(0x510, value); }
	inline bool SetInteractionTextColor_Interactable(t_structHelper inst, FLinearColor value) { inst.WriteOffset(0x538, value); }
	inline bool SetInteractionTextShadowColor_Interactable(t_structHelper inst, FLinearColor value) { inst.WriteOffset(0x548, value); }
	inline bool SetInteractionTextColor_NotInteractable(t_structHelper inst, FLinearColor value) { inst.WriteOffset(0x558, value); }
	inline bool SetInteractionTextShadowColor_NotInteractable(t_structHelper inst, FLinearColor value) { inst.WriteOffset(0x568, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUInteractionBaseWidget = sizeof(UInteractionBaseWidget); // 1424
    static_assert(sizeof(UInteractionBaseWidget) == 0x590, "Size of UInteractionBaseWidget is not correct.");
	auto constexpr UInteractionBaseWidget_MainLayer_Offset = offsetof(UInteractionBaseWidget, MainLayer);
	static_assert(UInteractionBaseWidget_MainLayer_Offset == 0x300, "UInteractionBaseWidget::MainLayer offset is not 300");
	auto constexpr UInteractionBaseWidget_InteractionMessageTextBinder_Offset = offsetof(UInteractionBaseWidget, InteractionMessageTextBinder);
	static_assert(UInteractionBaseWidget_InteractionMessageTextBinder_Offset == 0x320, "UInteractionBaseWidget::InteractionMessageTextBinder offset is not 320");
	auto constexpr UInteractionBaseWidget_InteractionMessageTextBgBinder_Offset = offsetof(UInteractionBaseWidget, InteractionMessageTextBgBinder);
	static_assert(UInteractionBaseWidget_InteractionMessageTextBgBinder_Offset == 0x340, "UInteractionBaseWidget::InteractionMessageTextBgBinder offset is not 340");
	auto constexpr UInteractionBaseWidget_AdditionalTextBinder_Offset = offsetof(UInteractionBaseWidget, AdditionalTextBinder);
	static_assert(UInteractionBaseWidget_AdditionalTextBinder_Offset == 0x360, "UInteractionBaseWidget::AdditionalTextBinder offset is not 360");
	auto constexpr UInteractionBaseWidget_SuitableWeaponImageBinder_Offset = offsetof(UInteractionBaseWidget, SuitableWeaponImageBinder);
	static_assert(UInteractionBaseWidget_SuitableWeaponImageBinder_Offset == 0x380, "UInteractionBaseWidget::SuitableWeaponImageBinder offset is not 380");
	auto constexpr UInteractionBaseWidget_SuitableWeaponImageHeight_Offset = offsetof(UInteractionBaseWidget, SuitableWeaponImageHeight);
	static_assert(UInteractionBaseWidget_SuitableWeaponImageHeight_Offset == 0x3a8, "UInteractionBaseWidget::SuitableWeaponImageHeight offset is not 3a8");
	auto constexpr UInteractionBaseWidget_KeyImageBinder_Offset = offsetof(UInteractionBaseWidget, KeyImageBinder);
	static_assert(UInteractionBaseWidget_KeyImageBinder_Offset == 0x3b0, "UInteractionBaseWidget::KeyImageBinder offset is not 3b0");
	auto constexpr UInteractionBaseWidget_InteractionKeyTextBinder_Offset = offsetof(UInteractionBaseWidget, InteractionKeyTextBinder);
	static_assert(UInteractionBaseWidget_InteractionKeyTextBinder_Offset == 0x3d8, "UInteractionBaseWidget::InteractionKeyTextBinder offset is not 3d8");
	auto constexpr UInteractionBaseWidget_InteractionKeyTextBorder_Binder_Offset = offsetof(UInteractionBaseWidget, InteractionKeyTextBorder_Binder);
	static_assert(UInteractionBaseWidget_InteractionKeyTextBorder_Binder_Offset == 0x3f8, "UInteractionBaseWidget::InteractionKeyTextBorder_Binder offset is not 3f8");
	auto constexpr UInteractionBaseWidget_InteractionKeyImage_Left_Binder_Offset = offsetof(UInteractionBaseWidget, InteractionKeyImage_Left_Binder);
	static_assert(UInteractionBaseWidget_InteractionKeyImage_Left_Binder_Offset == 0x418, "UInteractionBaseWidget::InteractionKeyImage_Left_Binder offset is not 418");
	auto constexpr UInteractionBaseWidget_InteractionKeyImage_Right_Binder_Offset = offsetof(UInteractionBaseWidget, InteractionKeyImage_Right_Binder);
	static_assert(UInteractionBaseWidget_InteractionKeyImage_Right_Binder_Offset == 0x440, "UInteractionBaseWidget::InteractionKeyImage_Right_Binder offset is not 440");
	auto constexpr UInteractionBaseWidget_AdditionalMessageBlinkingBinder_Offset = offsetof(UInteractionBaseWidget, AdditionalMessageBlinkingBinder);
	static_assert(UInteractionBaseWidget_AdditionalMessageBlinkingBinder_Offset == 0x468, "UInteractionBaseWidget::AdditionalMessageBlinkingBinder offset is not 468");
	auto constexpr UInteractionBaseWidget_AdditionalMessageNormalBinder_Offset = offsetof(UInteractionBaseWidget, AdditionalMessageNormalBinder);
	static_assert(UInteractionBaseWidget_AdditionalMessageNormalBinder_Offset == 0x488, "UInteractionBaseWidget::AdditionalMessageNormalBinder offset is not 488");
	auto constexpr UInteractionBaseWidget_ShowAnimationBinder_Offset = offsetof(UInteractionBaseWidget, ShowAnimationBinder);
	static_assert(UInteractionBaseWidget_ShowAnimationBinder_Offset == 0x4a8, "UInteractionBaseWidget::ShowAnimationBinder offset is not 4a8");
	auto constexpr UInteractionBaseWidget_HiddenAnimationBinder_Offset = offsetof(UInteractionBaseWidget, HiddenAnimationBinder);
	static_assert(UInteractionBaseWidget_HiddenAnimationBinder_Offset == 0x4c8, "UInteractionBaseWidget::HiddenAnimationBinder offset is not 4c8");
	auto constexpr UInteractionBaseWidget_InteractionInputMethodSwitcherBinder_Offset = offsetof(UInteractionBaseWidget, InteractionInputMethodSwitcherBinder);
	static_assert(UInteractionBaseWidget_InteractionInputMethodSwitcherBinder_Offset == 0x4e8, "UInteractionBaseWidget::InteractionInputMethodSwitcherBinder offset is not 4e8");
	auto constexpr UInteractionBaseWidget_InteractionKeyName_Offset = offsetof(UInteractionBaseWidget, InteractionKeyName);
	static_assert(UInteractionBaseWidget_InteractionKeyName_Offset == 0x508, "UInteractionBaseWidget::InteractionKeyName offset is not 508");
	auto constexpr UInteractionBaseWidget_ProgressCircle_Binder_Offset = offsetof(UInteractionBaseWidget, ProgressCircle_Binder);
	static_assert(UInteractionBaseWidget_ProgressCircle_Binder_Offset == 0x510, "UInteractionBaseWidget::ProgressCircle_Binder offset is not 510");
	auto constexpr UInteractionBaseWidget_InteractionTextColor_Interactable_Offset = offsetof(UInteractionBaseWidget, InteractionTextColor_Interactable);
	static_assert(UInteractionBaseWidget_InteractionTextColor_Interactable_Offset == 0x538, "UInteractionBaseWidget::InteractionTextColor_Interactable offset is not 538");
	auto constexpr UInteractionBaseWidget_InteractionTextShadowColor_Interactable_Offset = offsetof(UInteractionBaseWidget, InteractionTextShadowColor_Interactable);
	static_assert(UInteractionBaseWidget_InteractionTextShadowColor_Interactable_Offset == 0x548, "UInteractionBaseWidget::InteractionTextShadowColor_Interactable offset is not 548");
	auto constexpr UInteractionBaseWidget_InteractionTextColor_NotInteractable_Offset = offsetof(UInteractionBaseWidget, InteractionTextColor_NotInteractable);
	static_assert(UInteractionBaseWidget_InteractionTextColor_NotInteractable_Offset == 0x558, "UInteractionBaseWidget::InteractionTextColor_NotInteractable offset is not 558");
	auto constexpr UInteractionBaseWidget_InteractionTextShadowColor_NotInteractable_Offset = offsetof(UInteractionBaseWidget, InteractionTextShadowColor_NotInteractable);
	static_assert(UInteractionBaseWidget_InteractionTextShadowColor_NotInteractable_Offset == 0x568, "UInteractionBaseWidget::InteractionTextShadowColor_NotInteractable offset is not 568");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
