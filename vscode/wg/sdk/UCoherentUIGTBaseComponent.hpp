#pragma once
#include "UActorComponent.hpp"
#include "TextureFilter.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UCoherentUIGTBaseComponent // Size: 0x500
	: public UActorComponent // Size: 0x1F0
{
private:
	typedef UCoherentUIGTBaseComponent t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(2071); // id32("Class CoherentUIGTPlugin.CoherentUIGTBaseComponent")
		return ptr;
	}
//	FScriptMulticastDelegate ReadyForBindings; /* Ofs: 0x1E8 Size: 0x10 - MulticastDelegateProperty CoherentUIGTPlugin.CoherentUIGTBaseComponent.ReadyForBindings */
	uint8_t UnknownData1F0[0x8];
	FScriptMulticastDelegate BindingsReleased; /* Ofs: 0x1F8 Size: 0x10 - MulticastDelegateProperty CoherentUIGTPlugin.CoherentUIGTBaseComponent.BindingsReleased */
	FScriptMulticastDelegate FinishLoad; /* Ofs: 0x208 Size: 0x10 - MulticastDelegateProperty CoherentUIGTPlugin.CoherentUIGTBaseComponent.FinishLoad */
	FScriptMulticastDelegate FailLoad; /* Ofs: 0x218 Size: 0x10 - MulticastDelegateProperty CoherentUIGTPlugin.CoherentUIGTBaseComponent.FailLoad */
	FScriptMulticastDelegate StartLoading; /* Ofs: 0x228 Size: 0x10 - MulticastDelegateProperty CoherentUIGTPlugin.CoherentUIGTBaseComponent.StartLoading */
	FScriptMulticastDelegate NavigateTo; /* Ofs: 0x238 Size: 0x10 - MulticastDelegateProperty CoherentUIGTPlugin.CoherentUIGTBaseComponent.NavigateTo */
	FScriptMulticastDelegate JavaScriptEvent; /* Ofs: 0x248 Size: 0x10 - MulticastDelegateProperty CoherentUIGTPlugin.CoherentUIGTBaseComponent.JavaScriptEvent */
	FScriptMulticastDelegate UIGTScriptingReady; /* Ofs: 0x258 Size: 0x10 - MulticastDelegateProperty CoherentUIGTPlugin.CoherentUIGTBaseComponent.UIGTScriptingReady */
	FScriptDelegate LiveViewSizeRequested; /* Ofs: 0x268 Size: 0x10 - DelegateProperty CoherentUIGTPlugin.CoherentUIGTBaseComponent.LiveViewSizeRequested */
	uint8_t UnknownData278[0x78];
	ExternalPtr<struct UTextureRenderTarget2D> Texture; /* Ofs: 0x2F0 Size: 0x8 - ObjectProperty CoherentUIGTPlugin.CoherentUIGTBaseComponent.Texture */
	TEnumAsByte<enum TextureFilter> Filter; /* Ofs: 0x2F8 Size: 0x1 - ByteProperty CoherentUIGTPlugin.CoherentUIGTBaseComponent.Filter */
	uint8_t boolField2F9;
	uint8_t boolField2FA;
	uint8_t boolField2FB;
	float ExecuteJSTimersThresholdMs; /* Ofs: 0x2FC Size: 0x4 - FloatProperty CoherentUIGTPlugin.CoherentUIGTBaseComponent.ExecuteJSTimersThresholdMs */
	float UpdateStylesAndLayoutThresholdMs; /* Ofs: 0x300 Size: 0x4 - FloatProperty CoherentUIGTPlugin.CoherentUIGTBaseComponent.UpdateStylesAndLayoutThresholdMs */
	float RecordRenderingCommandsThresholdMs; /* Ofs: 0x304 Size: 0x4 - FloatProperty CoherentUIGTPlugin.CoherentUIGTBaseComponent.RecordRenderingCommandsThresholdMs */
	float PaintWarningThresholdMs; /* Ofs: 0x308 Size: 0x4 - FloatProperty CoherentUIGTPlugin.CoherentUIGTBaseComponent.PaintWarningThresholdMs */
	int32_t LayersCountThreshold; /* Ofs: 0x30C Size: 0x4 - IntProperty CoherentUIGTPlugin.CoherentUIGTBaseComponent.LayersCountThreshold */
	int32_t LayerWidthThreshold; /* Ofs: 0x310 Size: 0x4 - IntProperty CoherentUIGTPlugin.CoherentUIGTBaseComponent.LayerWidthThreshold */
	int32_t LayerHeightThreshold; /* Ofs: 0x314 Size: 0x4 - IntProperty CoherentUIGTPlugin.CoherentUIGTBaseComponent.LayerHeightThreshold */
	uint8_t boolField318;
	uint8_t boolField319;
	uint8_t UnknownData31A[0x1E6];


//	inline bool SetReadyForBindings(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x1E8, value); }
	inline bool SetBindingsReleased(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x1F8, value); }
	inline bool SetFinishLoad(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x208, value); }
	inline bool SetFailLoad(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x218, value); }
	inline bool SetStartLoading(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x228, value); }
	inline bool SetNavigateTo(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x238, value); }
	inline bool SetJavaScriptEvent(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x248, value); }
	inline bool SetUIGTScriptingReady(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x258, value); }
	inline bool SetLiveViewSizeRequested(t_structHelper inst, FScriptDelegate value) { inst.WriteOffset(0x268, value); }
	inline bool SetTexture(t_structHelper inst, ExternalPtr<struct UTextureRenderTarget2D> value) { inst.WriteOffset(0x2F0, value); }
	inline bool SetFilter(t_structHelper inst, TEnumAsByte<enum TextureFilter> value) { inst.WriteOffset(0x2F8, value); }
	inline bool bReceiveInput()
	{
		return boolField2F9& 0x1;
	}
	inline bool SetbReceiveInput(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x2F9, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bReceiveInputWhenTransparent()
	{
		return boolField2FA& 0x1;
	}
	inline bool SetbReceiveInputWhenTransparent(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x2FA, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool AllowPerformanceWarnings()
	{
		return boolField2FB& 0x1;
	}
	inline bool SetAllowPerformanceWarnings(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x2FB, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetExecuteJSTimersThresholdMs(t_structHelper inst, float value) { inst.WriteOffset(0x2FC, value); }
	inline bool SetUpdateStylesAndLayoutThresholdMs(t_structHelper inst, float value) { inst.WriteOffset(0x300, value); }
	inline bool SetRecordRenderingCommandsThresholdMs(t_structHelper inst, float value) { inst.WriteOffset(0x304, value); }
	inline bool SetPaintWarningThresholdMs(t_structHelper inst, float value) { inst.WriteOffset(0x308, value); }
	inline bool SetLayersCountThreshold(t_structHelper inst, int32_t value) { inst.WriteOffset(0x30C, value); }
	inline bool SetLayerWidthThreshold(t_structHelper inst, int32_t value) { inst.WriteOffset(0x310, value); }
	inline bool SetLayerHeightThreshold(t_structHelper inst, int32_t value) { inst.WriteOffset(0x314, value); }
	inline bool bEnableAdditionalDefaultStyles()
	{
		return boolField318& 0x1;
	}
	inline bool SetbEnableAdditionalDefaultStyles(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x318, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bDelayedUpdate()
	{
		return boolField319& 0x1;
	}
	inline bool SetbDelayedUpdate(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x319, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUCoherentUIGTBaseComponent = sizeof(UCoherentUIGTBaseComponent); // 1280
    static_assert(sizeof(UCoherentUIGTBaseComponent) == 0x500, "Size of UCoherentUIGTBaseComponent is not correct.");
//	auto constexpr UCoherentUIGTBaseComponent_ReadyForBindings_Offset = offsetof(UCoherentUIGTBaseComponent, ReadyForBindings);
//	static_assert(UCoherentUIGTBaseComponent_ReadyForBindings_Offset == 0x1e8, "UCoherentUIGTBaseComponent::ReadyForBindings offset is not 1e8");
	auto constexpr UCoherentUIGTBaseComponent_BindingsReleased_Offset = offsetof(UCoherentUIGTBaseComponent, BindingsReleased);
	static_assert(UCoherentUIGTBaseComponent_BindingsReleased_Offset == 0x1f8, "UCoherentUIGTBaseComponent::BindingsReleased offset is not 1f8");
	auto constexpr UCoherentUIGTBaseComponent_FinishLoad_Offset = offsetof(UCoherentUIGTBaseComponent, FinishLoad);
	static_assert(UCoherentUIGTBaseComponent_FinishLoad_Offset == 0x208, "UCoherentUIGTBaseComponent::FinishLoad offset is not 208");
	auto constexpr UCoherentUIGTBaseComponent_FailLoad_Offset = offsetof(UCoherentUIGTBaseComponent, FailLoad);
	static_assert(UCoherentUIGTBaseComponent_FailLoad_Offset == 0x218, "UCoherentUIGTBaseComponent::FailLoad offset is not 218");
	auto constexpr UCoherentUIGTBaseComponent_StartLoading_Offset = offsetof(UCoherentUIGTBaseComponent, StartLoading);
	static_assert(UCoherentUIGTBaseComponent_StartLoading_Offset == 0x228, "UCoherentUIGTBaseComponent::StartLoading offset is not 228");
	auto constexpr UCoherentUIGTBaseComponent_NavigateTo_Offset = offsetof(UCoherentUIGTBaseComponent, NavigateTo);
	static_assert(UCoherentUIGTBaseComponent_NavigateTo_Offset == 0x238, "UCoherentUIGTBaseComponent::NavigateTo offset is not 238");
	auto constexpr UCoherentUIGTBaseComponent_JavaScriptEvent_Offset = offsetof(UCoherentUIGTBaseComponent, JavaScriptEvent);
	static_assert(UCoherentUIGTBaseComponent_JavaScriptEvent_Offset == 0x248, "UCoherentUIGTBaseComponent::JavaScriptEvent offset is not 248");
	auto constexpr UCoherentUIGTBaseComponent_UIGTScriptingReady_Offset = offsetof(UCoherentUIGTBaseComponent, UIGTScriptingReady);
	static_assert(UCoherentUIGTBaseComponent_UIGTScriptingReady_Offset == 0x258, "UCoherentUIGTBaseComponent::UIGTScriptingReady offset is not 258");
	auto constexpr UCoherentUIGTBaseComponent_LiveViewSizeRequested_Offset = offsetof(UCoherentUIGTBaseComponent, LiveViewSizeRequested);
	static_assert(UCoherentUIGTBaseComponent_LiveViewSizeRequested_Offset == 0x268, "UCoherentUIGTBaseComponent::LiveViewSizeRequested offset is not 268");
	auto constexpr UCoherentUIGTBaseComponent_Texture_Offset = offsetof(UCoherentUIGTBaseComponent, Texture);
	static_assert(UCoherentUIGTBaseComponent_Texture_Offset == 0x2f0, "UCoherentUIGTBaseComponent::Texture offset is not 2f0");
	auto constexpr UCoherentUIGTBaseComponent_Filter_Offset = offsetof(UCoherentUIGTBaseComponent, Filter);
	static_assert(UCoherentUIGTBaseComponent_Filter_Offset == 0x2f8, "UCoherentUIGTBaseComponent::Filter offset is not 2f8");
	auto constexpr UCoherentUIGTBaseComponent_boolField2F9_Offset = offsetof(UCoherentUIGTBaseComponent, boolField2F9);
	static_assert(UCoherentUIGTBaseComponent_boolField2F9_Offset == 0x2f9, "UCoherentUIGTBaseComponent::boolField2F9 offset is not 2f9");
	auto constexpr UCoherentUIGTBaseComponent_boolField2FA_Offset = offsetof(UCoherentUIGTBaseComponent, boolField2FA);
	static_assert(UCoherentUIGTBaseComponent_boolField2FA_Offset == 0x2fa, "UCoherentUIGTBaseComponent::boolField2FA offset is not 2fa");
	auto constexpr UCoherentUIGTBaseComponent_boolField2FB_Offset = offsetof(UCoherentUIGTBaseComponent, boolField2FB);
	static_assert(UCoherentUIGTBaseComponent_boolField2FB_Offset == 0x2fb, "UCoherentUIGTBaseComponent::boolField2FB offset is not 2fb");
	auto constexpr UCoherentUIGTBaseComponent_ExecuteJSTimersThresholdMs_Offset = offsetof(UCoherentUIGTBaseComponent, ExecuteJSTimersThresholdMs);
	static_assert(UCoherentUIGTBaseComponent_ExecuteJSTimersThresholdMs_Offset == 0x2fc, "UCoherentUIGTBaseComponent::ExecuteJSTimersThresholdMs offset is not 2fc");
	auto constexpr UCoherentUIGTBaseComponent_UpdateStylesAndLayoutThresholdMs_Offset = offsetof(UCoherentUIGTBaseComponent, UpdateStylesAndLayoutThresholdMs);
	static_assert(UCoherentUIGTBaseComponent_UpdateStylesAndLayoutThresholdMs_Offset == 0x300, "UCoherentUIGTBaseComponent::UpdateStylesAndLayoutThresholdMs offset is not 300");
	auto constexpr UCoherentUIGTBaseComponent_RecordRenderingCommandsThresholdMs_Offset = offsetof(UCoherentUIGTBaseComponent, RecordRenderingCommandsThresholdMs);
	static_assert(UCoherentUIGTBaseComponent_RecordRenderingCommandsThresholdMs_Offset == 0x304, "UCoherentUIGTBaseComponent::RecordRenderingCommandsThresholdMs offset is not 304");
	auto constexpr UCoherentUIGTBaseComponent_PaintWarningThresholdMs_Offset = offsetof(UCoherentUIGTBaseComponent, PaintWarningThresholdMs);
	static_assert(UCoherentUIGTBaseComponent_PaintWarningThresholdMs_Offset == 0x308, "UCoherentUIGTBaseComponent::PaintWarningThresholdMs offset is not 308");
	auto constexpr UCoherentUIGTBaseComponent_LayersCountThreshold_Offset = offsetof(UCoherentUIGTBaseComponent, LayersCountThreshold);
	static_assert(UCoherentUIGTBaseComponent_LayersCountThreshold_Offset == 0x30c, "UCoherentUIGTBaseComponent::LayersCountThreshold offset is not 30c");
	auto constexpr UCoherentUIGTBaseComponent_LayerWidthThreshold_Offset = offsetof(UCoherentUIGTBaseComponent, LayerWidthThreshold);
	static_assert(UCoherentUIGTBaseComponent_LayerWidthThreshold_Offset == 0x310, "UCoherentUIGTBaseComponent::LayerWidthThreshold offset is not 310");
	auto constexpr UCoherentUIGTBaseComponent_LayerHeightThreshold_Offset = offsetof(UCoherentUIGTBaseComponent, LayerHeightThreshold);
	static_assert(UCoherentUIGTBaseComponent_LayerHeightThreshold_Offset == 0x314, "UCoherentUIGTBaseComponent::LayerHeightThreshold offset is not 314");
	auto constexpr UCoherentUIGTBaseComponent_boolField318_Offset = offsetof(UCoherentUIGTBaseComponent, boolField318);
	static_assert(UCoherentUIGTBaseComponent_boolField318_Offset == 0x318, "UCoherentUIGTBaseComponent::boolField318 offset is not 318");
	auto constexpr UCoherentUIGTBaseComponent_boolField319_Offset = offsetof(UCoherentUIGTBaseComponent, boolField319);
	static_assert(UCoherentUIGTBaseComponent_boolField319_Offset == 0x319, "UCoherentUIGTBaseComponent::boolField319 offset is not 319");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
