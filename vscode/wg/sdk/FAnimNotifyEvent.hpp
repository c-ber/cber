#pragma once
#include "FAnimLinkableElement.hpp"
#include "FAnimLinkableElement.hpp"
#include "EMontageNotifyTickType.hpp"
#include "ENotifyFilterType.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FAnimNotifyEvent // Size: 0xA8
 : public FAnimLinkableElement // Size: 0x30
{
public:
    float DisplayTime; /* Ofs: 0x30 Size: 0x4 FloatProperty Engine.AnimNotifyEvent.DisplayTime */
    float TriggerTimeOffset; /* Ofs: 0x34 Size: 0x4 FloatProperty Engine.AnimNotifyEvent.TriggerTimeOffset */
    float EndTriggerTimeOffset; /* Ofs: 0x38 Size: 0x4 FloatProperty Engine.AnimNotifyEvent.EndTriggerTimeOffset */
    float TriggerWeightThreshold; /* Ofs: 0x3C Size: 0x4 FloatProperty Engine.AnimNotifyEvent.TriggerWeightThreshold */
    FName NotifyName; /* Ofs: 0x40 Size: 0x8 NameProperty Engine.AnimNotifyEvent.NotifyName */
    ExternalPtr<struct UAnimNotify> Notify; /* Ofs: 0x48 Size: 0x8 ObjectProperty Engine.AnimNotifyEvent.Notify */
    ExternalPtr<struct UAnimNotifyState> NotifyStateClass; /* Ofs: 0x50 Size: 0x8 ObjectProperty Engine.AnimNotifyEvent.NotifyStateClass */
    float Duration; /* Ofs: 0x58 Size: 0x4 FloatProperty Engine.AnimNotifyEvent.Duration */
    uint8_t UnknownData5C[0x4];
    FAnimLinkableElement EndLink; /* Ofs: 0x60 Size: 0x30 StructProperty Engine.AnimNotifyEvent.EndLink */
    bool bConvertedFromBranchingPoint; /* Ofs: 0x90 Size: 0x1 BitMask: 01 BoolProperty Engine.AnimNotifyEvent.bConvertedFromBranchingPoint */
    TEnumAsByte<enum EMontageNotifyTickType> MontageTickType; /* Ofs: 0x91 Size: 0x1 ByteProperty Engine.AnimNotifyEvent.MontageTickType */
    uint8_t UnknownData92[0x2];
    float NotifyTriggerChance; /* Ofs: 0x94 Size: 0x4 FloatProperty Engine.AnimNotifyEvent.NotifyTriggerChance */
    TEnumAsByte<enum ENotifyFilterType> NotifyFilterType; /* Ofs: 0x98 Size: 0x1 ByteProperty Engine.AnimNotifyEvent.NotifyFilterType */
    uint8_t UnknownData99[0x3];
    int32_t NotifyFilterLOD; /* Ofs: 0x9C Size: 0x4 IntProperty Engine.AnimNotifyEvent.NotifyFilterLOD */
    bool bTriggerOnDedicatedServer; /* Ofs: 0xA0 Size: 0x1 BitMask: 01 BoolProperty Engine.AnimNotifyEvent.bTriggerOnDedicatedServer */
    uint8_t UnknownDataA1[0x3];
    int32_t TrackIndex; /* Ofs: 0xA4 Size: 0x4 IntProperty Engine.AnimNotifyEvent.TrackIndex */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFAnimNotifyEvent = sizeof(FAnimNotifyEvent); // 168
    static_assert(sizeof(FAnimNotifyEvent) == 0xA8, "Size of FAnimNotifyEvent is not correct.");
	auto constexpr FAnimNotifyEvent_DisplayTime_Offset = offsetof(FAnimNotifyEvent, DisplayTime);
	static_assert(FAnimNotifyEvent_DisplayTime_Offset == 0x30, "FAnimNotifyEvent::DisplayTime offset is not 30");
	auto constexpr FAnimNotifyEvent_TriggerTimeOffset_Offset = offsetof(FAnimNotifyEvent, TriggerTimeOffset);
	static_assert(FAnimNotifyEvent_TriggerTimeOffset_Offset == 0x34, "FAnimNotifyEvent::TriggerTimeOffset offset is not 34");
	auto constexpr FAnimNotifyEvent_EndTriggerTimeOffset_Offset = offsetof(FAnimNotifyEvent, EndTriggerTimeOffset);
	static_assert(FAnimNotifyEvent_EndTriggerTimeOffset_Offset == 0x38, "FAnimNotifyEvent::EndTriggerTimeOffset offset is not 38");
	auto constexpr FAnimNotifyEvent_TriggerWeightThreshold_Offset = offsetof(FAnimNotifyEvent, TriggerWeightThreshold);
	static_assert(FAnimNotifyEvent_TriggerWeightThreshold_Offset == 0x3c, "FAnimNotifyEvent::TriggerWeightThreshold offset is not 3c");
	auto constexpr FAnimNotifyEvent_NotifyName_Offset = offsetof(FAnimNotifyEvent, NotifyName);
	static_assert(FAnimNotifyEvent_NotifyName_Offset == 0x40, "FAnimNotifyEvent::NotifyName offset is not 40");
	auto constexpr FAnimNotifyEvent_Notify_Offset = offsetof(FAnimNotifyEvent, Notify);
	static_assert(FAnimNotifyEvent_Notify_Offset == 0x48, "FAnimNotifyEvent::Notify offset is not 48");
	auto constexpr FAnimNotifyEvent_NotifyStateClass_Offset = offsetof(FAnimNotifyEvent, NotifyStateClass);
	static_assert(FAnimNotifyEvent_NotifyStateClass_Offset == 0x50, "FAnimNotifyEvent::NotifyStateClass offset is not 50");
	auto constexpr FAnimNotifyEvent_Duration_Offset = offsetof(FAnimNotifyEvent, Duration);
	static_assert(FAnimNotifyEvent_Duration_Offset == 0x58, "FAnimNotifyEvent::Duration offset is not 58");
	auto constexpr FAnimNotifyEvent_EndLink_Offset = offsetof(FAnimNotifyEvent, EndLink);
	static_assert(FAnimNotifyEvent_EndLink_Offset == 0x60, "FAnimNotifyEvent::EndLink offset is not 60");
	auto constexpr FAnimNotifyEvent_MontageTickType_Offset = offsetof(FAnimNotifyEvent, MontageTickType);
	static_assert(FAnimNotifyEvent_MontageTickType_Offset == 0x91, "FAnimNotifyEvent::MontageTickType offset is not 91");
	auto constexpr FAnimNotifyEvent_NotifyTriggerChance_Offset = offsetof(FAnimNotifyEvent, NotifyTriggerChance);
	static_assert(FAnimNotifyEvent_NotifyTriggerChance_Offset == 0x94, "FAnimNotifyEvent::NotifyTriggerChance offset is not 94");
	auto constexpr FAnimNotifyEvent_NotifyFilterType_Offset = offsetof(FAnimNotifyEvent, NotifyFilterType);
	static_assert(FAnimNotifyEvent_NotifyFilterType_Offset == 0x98, "FAnimNotifyEvent::NotifyFilterType offset is not 98");
	auto constexpr FAnimNotifyEvent_NotifyFilterLOD_Offset = offsetof(FAnimNotifyEvent, NotifyFilterLOD);
	static_assert(FAnimNotifyEvent_NotifyFilterLOD_Offset == 0x9c, "FAnimNotifyEvent::NotifyFilterLOD offset is not 9c");
	auto constexpr FAnimNotifyEvent_TrackIndex_Offset = offsetof(FAnimNotifyEvent, TrackIndex);
	static_assert(FAnimNotifyEvent_TrackIndex_Offset == 0xa4, "FAnimNotifyEvent::TrackIndex offset is not a4");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
