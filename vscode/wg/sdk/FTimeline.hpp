#pragma once
#include "ETimelineLengthMode.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FTimeline // Size: 0xE0
{
public:
    TEnumAsByte<enum ETimelineLengthMode> LengthMode; /* Ofs: 0x0 Size: 0x1 ByteProperty Engine.Timeline.LengthMode */
    uint8_t UnknownData1[0x3];
    float Length; /* Ofs: 0x4 Size: 0x4 FloatProperty Engine.Timeline.Length */
    bool bLooping : 1; /* Ofs: 0x8 Size: 0x1 BitMask: 01 BoolProperty Engine.Timeline.bLooping */
    bool bReversePlayback : 1; /* Ofs: 0x8 Size: 0x1 BitMask: 02 BoolProperty Engine.Timeline.bReversePlayback */
    bool bPlaying : 1; /* Ofs: 0x8 Size: 0x1 BitMask: 04 BoolProperty Engine.Timeline.bPlaying */
    uint8_t UnknownData9[0x3];
    float PlayRate; /* Ofs: 0xC Size: 0x4 FloatProperty Engine.Timeline.PlayRate */
    float Position; /* Ofs: 0x10 Size: 0x4 FloatProperty Engine.Timeline.Position */
    uint8_t UnknownData14[0x4];
    TArray<struct FTimelineEventEntry> Events; /* Ofs: 0x18 Size: 0x10 ArrayProperty Engine.Timeline.Events */
    TArray<struct FTimelineVectorTrack> InterpVectors; /* Ofs: 0x28 Size: 0x10 ArrayProperty Engine.Timeline.InterpVectors */
    TArray<struct FTimelineFloatTrack> InterpFloats; /* Ofs: 0x38 Size: 0x10 ArrayProperty Engine.Timeline.InterpFloats */
    TArray<struct FTimelineLinearColorTrack> InterpLinearColors; /* Ofs: 0x48 Size: 0x10 ArrayProperty Engine.Timeline.InterpLinearColors */
    FScriptDelegate TimelinePostUpdateFunc; /* Ofs: 0x58 Size: 0x10 DelegateProperty Engine.Timeline.TimelinePostUpdateFunc */
    FScriptDelegate TimelineFinishedFunc; /* Ofs: 0x68 Size: 0x10 DelegateProperty Engine.Timeline.TimelineFinishedFunc */
    uint8_t UnknownData78[0x48];
    TWeakObjectPtr<ExternalPtr<struct UObject>> PropertySetObject; /* Ofs: 0xC0 Size: 0x8 WeakObjectProperty Engine.Timeline.PropertySetObject */
    FName DirectionPropertyName; /* Ofs: 0xC8 Size: 0x8 NameProperty Engine.Timeline.DirectionPropertyName */
    ExternalPtr<struct UProperty> DirectionProperty; /* Ofs: 0xD0 Size: 0x8 ObjectProperty Engine.Timeline.DirectionProperty */
    uint8_t UnknownDataD8[0x8];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFTimeline = sizeof(FTimeline); // 224
    static_assert(sizeof(FTimeline) == 0xE0, "Size of FTimeline is not correct.");
	auto constexpr FTimeline_LengthMode_Offset = offsetof(FTimeline, LengthMode);
	static_assert(FTimeline_LengthMode_Offset == 0x0, "FTimeline::LengthMode offset is not 0");
	auto constexpr FTimeline_Length_Offset = offsetof(FTimeline, Length);
	static_assert(FTimeline_Length_Offset == 0x4, "FTimeline::Length offset is not 4");
	auto constexpr FTimeline_PlayRate_Offset = offsetof(FTimeline, PlayRate);
	static_assert(FTimeline_PlayRate_Offset == 0xc, "FTimeline::PlayRate offset is not c");
	auto constexpr FTimeline_Position_Offset = offsetof(FTimeline, Position);
	static_assert(FTimeline_Position_Offset == 0x10, "FTimeline::Position offset is not 10");
	auto constexpr FTimeline_Events_Offset = offsetof(FTimeline, Events);
	static_assert(FTimeline_Events_Offset == 0x18, "FTimeline::Events offset is not 18");
	auto constexpr FTimeline_InterpVectors_Offset = offsetof(FTimeline, InterpVectors);
	static_assert(FTimeline_InterpVectors_Offset == 0x28, "FTimeline::InterpVectors offset is not 28");
	auto constexpr FTimeline_InterpFloats_Offset = offsetof(FTimeline, InterpFloats);
	static_assert(FTimeline_InterpFloats_Offset == 0x38, "FTimeline::InterpFloats offset is not 38");
	auto constexpr FTimeline_InterpLinearColors_Offset = offsetof(FTimeline, InterpLinearColors);
	static_assert(FTimeline_InterpLinearColors_Offset == 0x48, "FTimeline::InterpLinearColors offset is not 48");
	auto constexpr FTimeline_TimelinePostUpdateFunc_Offset = offsetof(FTimeline, TimelinePostUpdateFunc);
	static_assert(FTimeline_TimelinePostUpdateFunc_Offset == 0x58, "FTimeline::TimelinePostUpdateFunc offset is not 58");
	auto constexpr FTimeline_TimelineFinishedFunc_Offset = offsetof(FTimeline, TimelineFinishedFunc);
	static_assert(FTimeline_TimelineFinishedFunc_Offset == 0x68, "FTimeline::TimelineFinishedFunc offset is not 68");
	auto constexpr FTimeline_PropertySetObject_Offset = offsetof(FTimeline, PropertySetObject);
	static_assert(FTimeline_PropertySetObject_Offset == 0xc0, "FTimeline::PropertySetObject offset is not c0");
	auto constexpr FTimeline_DirectionPropertyName_Offset = offsetof(FTimeline, DirectionPropertyName);
	static_assert(FTimeline_DirectionPropertyName_Offset == 0xc8, "FTimeline::DirectionPropertyName offset is not c8");
	auto constexpr FTimeline_DirectionProperty_Offset = offsetof(FTimeline, DirectionProperty);
	static_assert(FTimeline_DirectionProperty_Offset == 0xd0, "FTimeline::DirectionProperty offset is not d0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
