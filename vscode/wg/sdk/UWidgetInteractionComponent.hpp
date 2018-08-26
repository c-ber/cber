#pragma once
#include "USceneComponent.hpp"
#include "ECollisionChannel.hpp"
#include "EWidgetInteractionSource.hpp"
#include "FLinearColor.hpp"
#include "FHitResult.hpp"
#include "FVector2D.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UWidgetInteractionComponent // Size: 0x680
	: public USceneComponent // Size: 0x490
{
private:
	typedef UWidgetInteractionComponent t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(531); // id32("Class UMG.WidgetInteractionComponent")
		return ptr;
	}
	FScriptMulticastDelegate OnHoveredWidgetChanged; /* Ofs: 0x490 Size: 0x10 - MulticastDelegateProperty UMG.WidgetInteractionComponent.OnHoveredWidgetChanged */
	uint8_t UnknownData4A0[0x10];
	int32_t VirtualUserIndex; /* Ofs: 0x4B0 Size: 0x4 - IntProperty UMG.WidgetInteractionComponent.VirtualUserIndex */
	float PointerIndex; /* Ofs: 0x4B4 Size: 0x4 - FloatProperty UMG.WidgetInteractionComponent.PointerIndex */
	TEnumAsByte<enum ECollisionChannel> TraceChannel; /* Ofs: 0x4B8 Size: 0x1 - ByteProperty UMG.WidgetInteractionComponent.TraceChannel */
	uint8_t UnknownData4B9[0x3];
	float InteractionDistance; /* Ofs: 0x4BC Size: 0x4 - FloatProperty UMG.WidgetInteractionComponent.InteractionDistance */
	TEnumAsByte<enum EWidgetInteractionSource> InteractionSource; /* Ofs: 0x4C0 Size: 0x1 - EnumProperty UMG.WidgetInteractionComponent.InteractionSource */
	uint8_t boolField4C1;
	uint8_t boolField4C2;
	uint8_t UnknownData4C3[0x1];
	FLinearColor DebugColor; /* Ofs: 0x4C4 Size: 0x10 - StructProperty UMG.WidgetInteractionComponent.DebugColor */
	uint8_t UnknownData4D4[0x7C];
	FHitResult CustomHitResult; /* Ofs: 0x550 Size: 0x88 - StructProperty UMG.WidgetInteractionComponent.CustomHitResult */
	FVector2D LocalHitLocation; /* Ofs: 0x5D8 Size: 0x8 - StructProperty UMG.WidgetInteractionComponent.LocalHitLocation */
	FVector2D LastLocalHitLocation; /* Ofs: 0x5E0 Size: 0x8 - StructProperty UMG.WidgetInteractionComponent.LastLocalHitLocation */
	ExternalPtr<struct UWidgetComponent> HoveredWidgetComponent; /* Ofs: 0x5E8 Size: 0x8 - ObjectProperty UMG.WidgetInteractionComponent.HoveredWidgetComponent */
	FHitResult LastHitResult; /* Ofs: 0x5F0 Size: 0x88 - StructProperty UMG.WidgetInteractionComponent.LastHitResult */
	uint8_t boolField678;
	uint8_t boolField679;
	uint8_t boolField67A;
	uint8_t UnknownData67B[0x5];


	inline bool SetOnHoveredWidgetChanged(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x490, value); }
	inline bool SetVirtualUserIndex(t_structHelper inst, int32_t value) { inst.WriteOffset(0x4B0, value); }
	inline bool SetPointerIndex(t_structHelper inst, float value) { inst.WriteOffset(0x4B4, value); }
	inline bool SetTraceChannel(t_structHelper inst, TEnumAsByte<enum ECollisionChannel> value) { inst.WriteOffset(0x4B8, value); }
	inline bool SetInteractionDistance(t_structHelper inst, float value) { inst.WriteOffset(0x4BC, value); }
	inline bool SetInteractionSource(t_structHelper inst, TEnumAsByte<enum EWidgetInteractionSource> value) { inst.WriteOffset(0x4C0, value); }
	inline bool bEnableHitTesting()
	{
		return boolField4C1& 0x1;
	}
	inline bool SetbEnableHitTesting(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x4C1, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bShowDebug()
	{
		return boolField4C2& 0x1;
	}
	inline bool SetbShowDebug(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x4C2, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetDebugColor(t_structHelper inst, FLinearColor value) { inst.WriteOffset(0x4C4, value); }
	inline bool SetCustomHitResult(t_structHelper inst, FHitResult value) { inst.WriteOffset(0x550, value); }
	inline bool SetLocalHitLocation(t_structHelper inst, FVector2D value) { inst.WriteOffset(0x5D8, value); }
	inline bool SetLastLocalHitLocation(t_structHelper inst, FVector2D value) { inst.WriteOffset(0x5E0, value); }
	inline bool SetHoveredWidgetComponent(t_structHelper inst, ExternalPtr<struct UWidgetComponent> value) { inst.WriteOffset(0x5E8, value); }
	inline bool SetLastHitResult(t_structHelper inst, FHitResult value) { inst.WriteOffset(0x5F0, value); }
	inline bool bIsHoveredWidgetInteractable()
	{
		return boolField678& 0x1;
	}
	inline bool SetbIsHoveredWidgetInteractable(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x678, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bIsHoveredWidgetFocusable()
	{
		return boolField679& 0x1;
	}
	inline bool SetbIsHoveredWidgetFocusable(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x679, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bIsHoveredWidgetHitTestVisible()
	{
		return boolField67A& 0x1;
	}
	inline bool SetbIsHoveredWidgetHitTestVisible(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x67A, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUWidgetInteractionComponent = sizeof(UWidgetInteractionComponent); // 1664
    static_assert(sizeof(UWidgetInteractionComponent) == 0x680, "Size of UWidgetInteractionComponent is not correct.");
	auto constexpr UWidgetInteractionComponent_OnHoveredWidgetChanged_Offset = offsetof(UWidgetInteractionComponent, OnHoveredWidgetChanged);
	static_assert(UWidgetInteractionComponent_OnHoveredWidgetChanged_Offset == 0x490, "UWidgetInteractionComponent::OnHoveredWidgetChanged offset is not 490");
	auto constexpr UWidgetInteractionComponent_VirtualUserIndex_Offset = offsetof(UWidgetInteractionComponent, VirtualUserIndex);
	static_assert(UWidgetInteractionComponent_VirtualUserIndex_Offset == 0x4b0, "UWidgetInteractionComponent::VirtualUserIndex offset is not 4b0");
	auto constexpr UWidgetInteractionComponent_PointerIndex_Offset = offsetof(UWidgetInteractionComponent, PointerIndex);
	static_assert(UWidgetInteractionComponent_PointerIndex_Offset == 0x4b4, "UWidgetInteractionComponent::PointerIndex offset is not 4b4");
	auto constexpr UWidgetInteractionComponent_TraceChannel_Offset = offsetof(UWidgetInteractionComponent, TraceChannel);
	static_assert(UWidgetInteractionComponent_TraceChannel_Offset == 0x4b8, "UWidgetInteractionComponent::TraceChannel offset is not 4b8");
	auto constexpr UWidgetInteractionComponent_InteractionDistance_Offset = offsetof(UWidgetInteractionComponent, InteractionDistance);
	static_assert(UWidgetInteractionComponent_InteractionDistance_Offset == 0x4bc, "UWidgetInteractionComponent::InteractionDistance offset is not 4bc");
	auto constexpr UWidgetInteractionComponent_InteractionSource_Offset = offsetof(UWidgetInteractionComponent, InteractionSource);
	static_assert(UWidgetInteractionComponent_InteractionSource_Offset == 0x4c0, "UWidgetInteractionComponent::InteractionSource offset is not 4c0");
	auto constexpr UWidgetInteractionComponent_boolField4C1_Offset = offsetof(UWidgetInteractionComponent, boolField4C1);
	static_assert(UWidgetInteractionComponent_boolField4C1_Offset == 0x4c1, "UWidgetInteractionComponent::boolField4C1 offset is not 4c1");
	auto constexpr UWidgetInteractionComponent_boolField4C2_Offset = offsetof(UWidgetInteractionComponent, boolField4C2);
	static_assert(UWidgetInteractionComponent_boolField4C2_Offset == 0x4c2, "UWidgetInteractionComponent::boolField4C2 offset is not 4c2");
	auto constexpr UWidgetInteractionComponent_DebugColor_Offset = offsetof(UWidgetInteractionComponent, DebugColor);
	static_assert(UWidgetInteractionComponent_DebugColor_Offset == 0x4c4, "UWidgetInteractionComponent::DebugColor offset is not 4c4");
	auto constexpr UWidgetInteractionComponent_CustomHitResult_Offset = offsetof(UWidgetInteractionComponent, CustomHitResult);
	static_assert(UWidgetInteractionComponent_CustomHitResult_Offset == 0x550, "UWidgetInteractionComponent::CustomHitResult offset is not 550");
	auto constexpr UWidgetInteractionComponent_LocalHitLocation_Offset = offsetof(UWidgetInteractionComponent, LocalHitLocation);
	static_assert(UWidgetInteractionComponent_LocalHitLocation_Offset == 0x5d8, "UWidgetInteractionComponent::LocalHitLocation offset is not 5d8");
	auto constexpr UWidgetInteractionComponent_LastLocalHitLocation_Offset = offsetof(UWidgetInteractionComponent, LastLocalHitLocation);
	static_assert(UWidgetInteractionComponent_LastLocalHitLocation_Offset == 0x5e0, "UWidgetInteractionComponent::LastLocalHitLocation offset is not 5e0");
	auto constexpr UWidgetInteractionComponent_HoveredWidgetComponent_Offset = offsetof(UWidgetInteractionComponent, HoveredWidgetComponent);
	static_assert(UWidgetInteractionComponent_HoveredWidgetComponent_Offset == 0x5e8, "UWidgetInteractionComponent::HoveredWidgetComponent offset is not 5e8");
	auto constexpr UWidgetInteractionComponent_LastHitResult_Offset = offsetof(UWidgetInteractionComponent, LastHitResult);
	static_assert(UWidgetInteractionComponent_LastHitResult_Offset == 0x5f0, "UWidgetInteractionComponent::LastHitResult offset is not 5f0");
	auto constexpr UWidgetInteractionComponent_boolField678_Offset = offsetof(UWidgetInteractionComponent, boolField678);
	static_assert(UWidgetInteractionComponent_boolField678_Offset == 0x678, "UWidgetInteractionComponent::boolField678 offset is not 678");
	auto constexpr UWidgetInteractionComponent_boolField679_Offset = offsetof(UWidgetInteractionComponent, boolField679);
	static_assert(UWidgetInteractionComponent_boolField679_Offset == 0x679, "UWidgetInteractionComponent::boolField679 offset is not 679");
	auto constexpr UWidgetInteractionComponent_boolField67A_Offset = offsetof(UWidgetInteractionComponent, boolField67A);
	static_assert(UWidgetInteractionComponent_boolField67A_Offset == 0x67a, "UWidgetInteractionComponent::boolField67A offset is not 67a");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
