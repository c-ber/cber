#pragma once
#include "UWidget.hpp"
#include "TextureFilter.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UCoherentUIGTWidget // Size: 0x490
	: public UWidget // Size: 0x130
{
private:
	typedef UCoherentUIGTWidget t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1351); // id32("Class CoherentUIGTPlugin.CoherentUIGTWidget")
		return ptr;
	}
	uint8_t UnknownData130[0x18];
	ExternalPtr<struct UActor> Owner; /* Ofs: 0x148 Size: 0x8 - ObjectProperty CoherentUIGTPlugin.CoherentUIGTWidget.Owner */
	FScriptMulticastDelegate ReadyForBindings; /* Ofs: 0x150 Size: 0x10 - MulticastDelegateProperty CoherentUIGTPlugin.CoherentUIGTWidget.ReadyForBindings */
	FScriptMulticastDelegate BindingsReleased; /* Ofs: 0x160 Size: 0x10 - MulticastDelegateProperty CoherentUIGTPlugin.CoherentUIGTWidget.BindingsReleased */
	FScriptMulticastDelegate FinishLoad; /* Ofs: 0x170 Size: 0x10 - MulticastDelegateProperty CoherentUIGTPlugin.CoherentUIGTWidget.FinishLoad */
	FScriptMulticastDelegate FailLoad; /* Ofs: 0x180 Size: 0x10 - MulticastDelegateProperty CoherentUIGTPlugin.CoherentUIGTWidget.FailLoad */
	FScriptMulticastDelegate StartLoading; /* Ofs: 0x190 Size: 0x10 - MulticastDelegateProperty CoherentUIGTPlugin.CoherentUIGTWidget.StartLoading */
	FScriptMulticastDelegate NavigateTo; /* Ofs: 0x1A0 Size: 0x10 - MulticastDelegateProperty CoherentUIGTPlugin.CoherentUIGTWidget.NavigateTo */
	FScriptMulticastDelegate JavaScriptEvent; /* Ofs: 0x1B0 Size: 0x10 - MulticastDelegateProperty CoherentUIGTPlugin.CoherentUIGTWidget.JavaScriptEvent */
	FScriptMulticastDelegate UIGTScriptingReady; /* Ofs: 0x1C0 Size: 0x10 - MulticastDelegateProperty CoherentUIGTPlugin.CoherentUIGTWidget.UIGTScriptingReady */
	uint8_t UnknownData1D0[0x70];
	ExternalPtr<struct UTextureRenderTarget2D> Texture; /* Ofs: 0x240 Size: 0x8 - ObjectProperty CoherentUIGTPlugin.CoherentUIGTWidget.Texture */
	TEnumAsByte<enum TextureFilter> Filter; /* Ofs: 0x248 Size: 0x1 - ByteProperty CoherentUIGTPlugin.CoherentUIGTWidget.Filter */
	uint8_t boolField249;
	uint8_t boolField24A;
	uint8_t boolField24B;
	uint8_t boolField24C;
	uint8_t UnknownData24D[0x3];
	float ExecuteJSTimersThresholdMs; /* Ofs: 0x250 Size: 0x4 - FloatProperty CoherentUIGTPlugin.CoherentUIGTWidget.ExecuteJSTimersThresholdMs */
	float UpdateStylesAndLayoutThresholdMs; /* Ofs: 0x254 Size: 0x4 - FloatProperty CoherentUIGTPlugin.CoherentUIGTWidget.UpdateStylesAndLayoutThresholdMs */
	float RecordRenderingCommandsThresholdMs; /* Ofs: 0x258 Size: 0x4 - FloatProperty CoherentUIGTPlugin.CoherentUIGTWidget.RecordRenderingCommandsThresholdMs */
	float PaintWarningThresholdMs; /* Ofs: 0x25C Size: 0x4 - FloatProperty CoherentUIGTPlugin.CoherentUIGTWidget.PaintWarningThresholdMs */
	int32_t LayersCountThreshold; /* Ofs: 0x260 Size: 0x4 - IntProperty CoherentUIGTPlugin.CoherentUIGTWidget.LayersCountThreshold */
	int32_t LayerWidthThreshold; /* Ofs: 0x264 Size: 0x4 - IntProperty CoherentUIGTPlugin.CoherentUIGTWidget.LayerWidthThreshold */
	int32_t LayerHeightThreshold; /* Ofs: 0x268 Size: 0x4 - IntProperty CoherentUIGTPlugin.CoherentUIGTWidget.LayerHeightThreshold */
	uint8_t boolField26C;
	uint8_t UnknownData26D[0x20B];
	FString URL; /* Ofs: 0x478 Size: 0x10 - StrProperty CoherentUIGTPlugin.CoherentUIGTWidget.URL */
	float ClickThroughAlphaThreshold; /* Ofs: 0x488 Size: 0x4 - FloatProperty CoherentUIGTPlugin.CoherentUIGTWidget.ClickThroughAlphaThreshold */
	uint8_t boolField48C;
	uint8_t UnknownData48D[0x3];


	inline bool SetOwner(t_structHelper inst, ExternalPtr<struct UActor> value) { inst.WriteOffset(0x148, value); }
	inline bool SetReadyForBindings(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x150, value); }
	inline bool SetBindingsReleased(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x160, value); }
	inline bool SetFinishLoad(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x170, value); }
	inline bool SetFailLoad(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x180, value); }
	inline bool SetStartLoading(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x190, value); }
	inline bool SetNavigateTo(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x1A0, value); }
	inline bool SetJavaScriptEvent(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x1B0, value); }
	inline bool SetUIGTScriptingReady(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x1C0, value); }
	inline bool SetTexture(t_structHelper inst, ExternalPtr<struct UTextureRenderTarget2D> value) { inst.WriteOffset(0x240, value); }
	inline bool SetFilter(t_structHelper inst, TEnumAsByte<enum TextureFilter> value) { inst.WriteOffset(0x248, value); }
	inline bool bReceiveInput()
	{
		return boolField249& 0x1;
	}
	inline bool SetbReceiveInput(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x249, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bReceiveInputWhenTransparent()
	{
		return boolField24A& 0x1;
	}
	inline bool SetbReceiveInputWhenTransparent(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x24A, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bGammaCorrectedMaterial()
	{
		return boolField24B& 0x1;
	}
	inline bool SetbGammaCorrectedMaterial(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x24B, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool AllowPerformanceWarnings()
	{
		return boolField24C& 0x1;
	}
	inline bool SetAllowPerformanceWarnings(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x24C, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetExecuteJSTimersThresholdMs(t_structHelper inst, float value) { inst.WriteOffset(0x250, value); }
	inline bool SetUpdateStylesAndLayoutThresholdMs(t_structHelper inst, float value) { inst.WriteOffset(0x254, value); }
	inline bool SetRecordRenderingCommandsThresholdMs(t_structHelper inst, float value) { inst.WriteOffset(0x258, value); }
	inline bool SetPaintWarningThresholdMs(t_structHelper inst, float value) { inst.WriteOffset(0x25C, value); }
	inline bool SetLayersCountThreshold(t_structHelper inst, int32_t value) { inst.WriteOffset(0x260, value); }
	inline bool SetLayerWidthThreshold(t_structHelper inst, int32_t value) { inst.WriteOffset(0x264, value); }
	inline bool SetLayerHeightThreshold(t_structHelper inst, int32_t value) { inst.WriteOffset(0x268, value); }
	inline bool bEnableAdditionalDefaultStyles()
	{
		return boolField26C& 0x1;
	}
	inline bool SetbEnableAdditionalDefaultStyles(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x26C, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetURL(t_structHelper inst, FString value) { inst.WriteOffset(0x478, value); }
	inline bool SetClickThroughAlphaThreshold(t_structHelper inst, float value) { inst.WriteOffset(0x488, value); }
	inline bool Transparent()
	{
		return boolField48C& 0x1;
	}
	inline bool SetTransparent(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x48C, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUCoherentUIGTWidget = sizeof(UCoherentUIGTWidget); // 1168
    static_assert(sizeof(UCoherentUIGTWidget) == 0x490, "Size of UCoherentUIGTWidget is not correct.");
	auto constexpr UCoherentUIGTWidget_Owner_Offset = offsetof(UCoherentUIGTWidget, Owner);
	static_assert(UCoherentUIGTWidget_Owner_Offset == 0x148, "UCoherentUIGTWidget::Owner offset is not 148");
	auto constexpr UCoherentUIGTWidget_ReadyForBindings_Offset = offsetof(UCoherentUIGTWidget, ReadyForBindings);
	static_assert(UCoherentUIGTWidget_ReadyForBindings_Offset == 0x150, "UCoherentUIGTWidget::ReadyForBindings offset is not 150");
	auto constexpr UCoherentUIGTWidget_BindingsReleased_Offset = offsetof(UCoherentUIGTWidget, BindingsReleased);
	static_assert(UCoherentUIGTWidget_BindingsReleased_Offset == 0x160, "UCoherentUIGTWidget::BindingsReleased offset is not 160");
	auto constexpr UCoherentUIGTWidget_FinishLoad_Offset = offsetof(UCoherentUIGTWidget, FinishLoad);
	static_assert(UCoherentUIGTWidget_FinishLoad_Offset == 0x170, "UCoherentUIGTWidget::FinishLoad offset is not 170");
	auto constexpr UCoherentUIGTWidget_FailLoad_Offset = offsetof(UCoherentUIGTWidget, FailLoad);
	static_assert(UCoherentUIGTWidget_FailLoad_Offset == 0x180, "UCoherentUIGTWidget::FailLoad offset is not 180");
	auto constexpr UCoherentUIGTWidget_StartLoading_Offset = offsetof(UCoherentUIGTWidget, StartLoading);
	static_assert(UCoherentUIGTWidget_StartLoading_Offset == 0x190, "UCoherentUIGTWidget::StartLoading offset is not 190");
	auto constexpr UCoherentUIGTWidget_NavigateTo_Offset = offsetof(UCoherentUIGTWidget, NavigateTo);
	static_assert(UCoherentUIGTWidget_NavigateTo_Offset == 0x1a0, "UCoherentUIGTWidget::NavigateTo offset is not 1a0");
	auto constexpr UCoherentUIGTWidget_JavaScriptEvent_Offset = offsetof(UCoherentUIGTWidget, JavaScriptEvent);
	static_assert(UCoherentUIGTWidget_JavaScriptEvent_Offset == 0x1b0, "UCoherentUIGTWidget::JavaScriptEvent offset is not 1b0");
	auto constexpr UCoherentUIGTWidget_UIGTScriptingReady_Offset = offsetof(UCoherentUIGTWidget, UIGTScriptingReady);
	static_assert(UCoherentUIGTWidget_UIGTScriptingReady_Offset == 0x1c0, "UCoherentUIGTWidget::UIGTScriptingReady offset is not 1c0");
	auto constexpr UCoherentUIGTWidget_Texture_Offset = offsetof(UCoherentUIGTWidget, Texture);
	static_assert(UCoherentUIGTWidget_Texture_Offset == 0x240, "UCoherentUIGTWidget::Texture offset is not 240");
	auto constexpr UCoherentUIGTWidget_Filter_Offset = offsetof(UCoherentUIGTWidget, Filter);
	static_assert(UCoherentUIGTWidget_Filter_Offset == 0x248, "UCoherentUIGTWidget::Filter offset is not 248");
	auto constexpr UCoherentUIGTWidget_boolField249_Offset = offsetof(UCoherentUIGTWidget, boolField249);
	static_assert(UCoherentUIGTWidget_boolField249_Offset == 0x249, "UCoherentUIGTWidget::boolField249 offset is not 249");
	auto constexpr UCoherentUIGTWidget_boolField24A_Offset = offsetof(UCoherentUIGTWidget, boolField24A);
	static_assert(UCoherentUIGTWidget_boolField24A_Offset == 0x24a, "UCoherentUIGTWidget::boolField24A offset is not 24a");
	auto constexpr UCoherentUIGTWidget_boolField24B_Offset = offsetof(UCoherentUIGTWidget, boolField24B);
	static_assert(UCoherentUIGTWidget_boolField24B_Offset == 0x24b, "UCoherentUIGTWidget::boolField24B offset is not 24b");
	auto constexpr UCoherentUIGTWidget_boolField24C_Offset = offsetof(UCoherentUIGTWidget, boolField24C);
	static_assert(UCoherentUIGTWidget_boolField24C_Offset == 0x24c, "UCoherentUIGTWidget::boolField24C offset is not 24c");
	auto constexpr UCoherentUIGTWidget_ExecuteJSTimersThresholdMs_Offset = offsetof(UCoherentUIGTWidget, ExecuteJSTimersThresholdMs);
	static_assert(UCoherentUIGTWidget_ExecuteJSTimersThresholdMs_Offset == 0x250, "UCoherentUIGTWidget::ExecuteJSTimersThresholdMs offset is not 250");
	auto constexpr UCoherentUIGTWidget_UpdateStylesAndLayoutThresholdMs_Offset = offsetof(UCoherentUIGTWidget, UpdateStylesAndLayoutThresholdMs);
	static_assert(UCoherentUIGTWidget_UpdateStylesAndLayoutThresholdMs_Offset == 0x254, "UCoherentUIGTWidget::UpdateStylesAndLayoutThresholdMs offset is not 254");
	auto constexpr UCoherentUIGTWidget_RecordRenderingCommandsThresholdMs_Offset = offsetof(UCoherentUIGTWidget, RecordRenderingCommandsThresholdMs);
	static_assert(UCoherentUIGTWidget_RecordRenderingCommandsThresholdMs_Offset == 0x258, "UCoherentUIGTWidget::RecordRenderingCommandsThresholdMs offset is not 258");
	auto constexpr UCoherentUIGTWidget_PaintWarningThresholdMs_Offset = offsetof(UCoherentUIGTWidget, PaintWarningThresholdMs);
	static_assert(UCoherentUIGTWidget_PaintWarningThresholdMs_Offset == 0x25c, "UCoherentUIGTWidget::PaintWarningThresholdMs offset is not 25c");
	auto constexpr UCoherentUIGTWidget_LayersCountThreshold_Offset = offsetof(UCoherentUIGTWidget, LayersCountThreshold);
	static_assert(UCoherentUIGTWidget_LayersCountThreshold_Offset == 0x260, "UCoherentUIGTWidget::LayersCountThreshold offset is not 260");
	auto constexpr UCoherentUIGTWidget_LayerWidthThreshold_Offset = offsetof(UCoherentUIGTWidget, LayerWidthThreshold);
	static_assert(UCoherentUIGTWidget_LayerWidthThreshold_Offset == 0x264, "UCoherentUIGTWidget::LayerWidthThreshold offset is not 264");
	auto constexpr UCoherentUIGTWidget_LayerHeightThreshold_Offset = offsetof(UCoherentUIGTWidget, LayerHeightThreshold);
	static_assert(UCoherentUIGTWidget_LayerHeightThreshold_Offset == 0x268, "UCoherentUIGTWidget::LayerHeightThreshold offset is not 268");
	auto constexpr UCoherentUIGTWidget_boolField26C_Offset = offsetof(UCoherentUIGTWidget, boolField26C);
	static_assert(UCoherentUIGTWidget_boolField26C_Offset == 0x26c, "UCoherentUIGTWidget::boolField26C offset is not 26c");
	auto constexpr UCoherentUIGTWidget_URL_Offset = offsetof(UCoherentUIGTWidget, URL);
	static_assert(UCoherentUIGTWidget_URL_Offset == 0x478, "UCoherentUIGTWidget::URL offset is not 478");
	auto constexpr UCoherentUIGTWidget_ClickThroughAlphaThreshold_Offset = offsetof(UCoherentUIGTWidget, ClickThroughAlphaThreshold);
	static_assert(UCoherentUIGTWidget_ClickThroughAlphaThreshold_Offset == 0x488, "UCoherentUIGTWidget::ClickThroughAlphaThreshold offset is not 488");
	auto constexpr UCoherentUIGTWidget_boolField48C_Offset = offsetof(UCoherentUIGTWidget, boolField48C);
	static_assert(UCoherentUIGTWidget_boolField48C_Offset == 0x48c, "UCoherentUIGTWidget::boolField48C offset is not 48c");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
