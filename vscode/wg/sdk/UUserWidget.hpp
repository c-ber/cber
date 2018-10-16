#pragma once
#include "UWidget.hpp"
#include "FLinearColor.hpp"
#include "FSlateColor.hpp"
#include "FMargin.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UUserWidget // Size: 0x248
	: public UWidget // Size: 0x130
{
private:
	typedef UUserWidget t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1419); // id32("Class UMG.UserWidget")
		return ptr;
	}
	uint8_t UnknownData130[0x8];
	FLinearColor ColorAndOpacity; /* Ofs: 0x138 Size: 0x10 - StructProperty UMG.UserWidget.ColorAndOpacity */
	FScriptDelegate ColorAndOpacityDelegate; /* Ofs: 0x148 Size: 0x10 - DelegateProperty UMG.UserWidget.ColorAndOpacityDelegate */
	FSlateColor ForegroundColor; /* Ofs: 0x158 Size: 0x28 - StructProperty UMG.UserWidget.ForegroundColor */
	FScriptDelegate ForegroundColorDelegate; /* Ofs: 0x180 Size: 0x10 - DelegateProperty UMG.UserWidget.ForegroundColorDelegate */
	FMargin Padding; /* Ofs: 0x190 Size: 0x10 - StructProperty UMG.UserWidget.Padding */
	uint8_t boolField1A0;
	uint8_t boolField1A1;
	uint8_t UnknownData1A2[0x6];
	TArray<ExternalPtr<struct UUMGSequencePlayer>> ActiveSequencePlayers; /* Ofs: 0x1A8 Size: 0x10 - ArrayProperty UMG.UserWidget.ActiveSequencePlayers */
	TArray<ExternalPtr<struct UUMGSequencePlayer>> StoppedSequencePlayers; /* Ofs: 0x1B8 Size: 0x10 - ArrayProperty UMG.UserWidget.StoppedSequencePlayers */
	uint8_t boolField1C8;
	uint8_t UnknownData1C9[0x3];
	int32_t Priority; /* Ofs: 0x1CC Size: 0x4 - IntProperty UMG.UserWidget.Priority */
	TArray<struct FNamedSlotBinding> NamedSlotBindings; /* Ofs: 0x1D0 Size: 0x10 - ArrayProperty UMG.UserWidget.NamedSlotBindings */
	ExternalPtr<struct UWidgetTree> WidgetTree; /* Ofs: 0x1E0 Size: 0x8 - ObjectProperty UMG.UserWidget.WidgetTree */
	uint8_t boolField1E8;
	uint8_t UnknownData1E9[0x7];
	ExternalPtr<struct UInputComponent> InputComponent; /* Ofs: 0x1F0 Size: 0x8 - ObjectProperty UMG.UserWidget.InputComponent */
	uint8_t UnknownData1F8[0x50];


	inline bool SetColorAndOpacity(t_structHelper inst, FLinearColor value) { inst.WriteOffset(0x138, value); }
	inline bool SetColorAndOpacityDelegate(t_structHelper inst, FScriptDelegate value) { inst.WriteOffset(0x148, value); }
	inline bool SetForegroundColor(t_structHelper inst, FSlateColor value) { inst.WriteOffset(0x158, value); }
	inline bool SetForegroundColorDelegate(t_structHelper inst, FScriptDelegate value) { inst.WriteOffset(0x180, value); }
	inline bool SetPadding(t_structHelper inst, FMargin value) { inst.WriteOffset(0x190, value); }
	inline bool bSupportsKeyboardFocus()
	{
		return boolField1A0& 0x1;
	}
	inline bool SetbSupportsKeyboardFocus(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x1A0, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bIsFocusable()
	{
		return boolField1A1& 0x1;
	}
	inline bool SetbIsFocusable(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x1A1, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetActiveSequencePlayers(t_structHelper inst, TArray<ExternalPtr<struct UUMGSequencePlayer>> value) { inst.WriteOffset(0x1A8, value); }
	inline bool SetStoppedSequencePlayers(t_structHelper inst, TArray<ExternalPtr<struct UUMGSequencePlayer>> value) { inst.WriteOffset(0x1B8, value); }
	inline bool bStopAction()
	{
		return boolField1C8& 0x1;
	}
	inline bool SetbStopAction(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x1C8, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetPriority(t_structHelper inst, int32_t value) { inst.WriteOffset(0x1CC, value); }
	inline bool SetNamedSlotBindings(t_structHelper inst, TArray<struct FNamedSlotBinding> value) { inst.WriteOffset(0x1D0, value); }
	inline bool SetWidgetTree(t_structHelper inst, ExternalPtr<struct UWidgetTree> value) { inst.WriteOffset(0x1E0, value); }
	inline bool bCanEverTick()
	{
		return boolField1E8& 0x1;
	}
	inline bool SetbCanEverTick(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x1E8, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bCanEverPaint()
	{
		return boolField1E8& 0x2;
	}
	inline bool SetbCanEverPaint(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x1E8, (uint8_t)(value ? curVal | (uint8_t)2 : curVal & ~(uint8_t)2));
	}
	inline bool bCookedWidgetTree()
	{
		return boolField1E8& 0x8;
	}
	inline bool SetbCookedWidgetTree(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x1E8, (uint8_t)(value ? curVal | (uint8_t)8 : curVal & ~(uint8_t)8));
	}
	inline bool SetInputComponent(t_structHelper inst, ExternalPtr<struct UInputComponent> value) { inst.WriteOffset(0x1F0, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUUserWidget = sizeof(UUserWidget); // 584
    static_assert(sizeof(UUserWidget) == 0x248, "Size of UUserWidget is not correct.");
	auto constexpr UUserWidget_ColorAndOpacity_Offset = offsetof(UUserWidget, ColorAndOpacity);
	static_assert(UUserWidget_ColorAndOpacity_Offset == 0x138, "UUserWidget::ColorAndOpacity offset is not 138");
	auto constexpr UUserWidget_ColorAndOpacityDelegate_Offset = offsetof(UUserWidget, ColorAndOpacityDelegate);
	static_assert(UUserWidget_ColorAndOpacityDelegate_Offset == 0x148, "UUserWidget::ColorAndOpacityDelegate offset is not 148");
	auto constexpr UUserWidget_ForegroundColor_Offset = offsetof(UUserWidget, ForegroundColor);
	static_assert(UUserWidget_ForegroundColor_Offset == 0x158, "UUserWidget::ForegroundColor offset is not 158");
	auto constexpr UUserWidget_ForegroundColorDelegate_Offset = offsetof(UUserWidget, ForegroundColorDelegate);
	static_assert(UUserWidget_ForegroundColorDelegate_Offset == 0x180, "UUserWidget::ForegroundColorDelegate offset is not 180");
	auto constexpr UUserWidget_Padding_Offset = offsetof(UUserWidget, Padding);
	static_assert(UUserWidget_Padding_Offset == 0x190, "UUserWidget::Padding offset is not 190");
	auto constexpr UUserWidget_boolField1A0_Offset = offsetof(UUserWidget, boolField1A0);
	static_assert(UUserWidget_boolField1A0_Offset == 0x1a0, "UUserWidget::boolField1A0 offset is not 1a0");
	auto constexpr UUserWidget_boolField1A1_Offset = offsetof(UUserWidget, boolField1A1);
	static_assert(UUserWidget_boolField1A1_Offset == 0x1a1, "UUserWidget::boolField1A1 offset is not 1a1");
	auto constexpr UUserWidget_ActiveSequencePlayers_Offset = offsetof(UUserWidget, ActiveSequencePlayers);
	static_assert(UUserWidget_ActiveSequencePlayers_Offset == 0x1a8, "UUserWidget::ActiveSequencePlayers offset is not 1a8");
	auto constexpr UUserWidget_StoppedSequencePlayers_Offset = offsetof(UUserWidget, StoppedSequencePlayers);
	static_assert(UUserWidget_StoppedSequencePlayers_Offset == 0x1b8, "UUserWidget::StoppedSequencePlayers offset is not 1b8");
	auto constexpr UUserWidget_boolField1C8_Offset = offsetof(UUserWidget, boolField1C8);
	static_assert(UUserWidget_boolField1C8_Offset == 0x1c8, "UUserWidget::boolField1C8 offset is not 1c8");
	auto constexpr UUserWidget_Priority_Offset = offsetof(UUserWidget, Priority);
	static_assert(UUserWidget_Priority_Offset == 0x1cc, "UUserWidget::Priority offset is not 1cc");
	auto constexpr UUserWidget_NamedSlotBindings_Offset = offsetof(UUserWidget, NamedSlotBindings);
	static_assert(UUserWidget_NamedSlotBindings_Offset == 0x1d0, "UUserWidget::NamedSlotBindings offset is not 1d0");
	auto constexpr UUserWidget_WidgetTree_Offset = offsetof(UUserWidget, WidgetTree);
	static_assert(UUserWidget_WidgetTree_Offset == 0x1e0, "UUserWidget::WidgetTree offset is not 1e0");
	auto constexpr UUserWidget_boolField1E8_Offset = offsetof(UUserWidget, boolField1E8);
	static_assert(UUserWidget_boolField1E8_Offset == 0x1e8, "UUserWidget::boolField1E8 offset is not 1e8");
	auto constexpr UUserWidget_InputComponent_Offset = offsetof(UUserWidget, InputComponent);
	static_assert(UUserWidget_InputComponent_Offset == 0x1f0, "UUserWidget::InputComponent offset is not 1f0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
