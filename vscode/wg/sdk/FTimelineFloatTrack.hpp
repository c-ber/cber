#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FTimelineFloatTrack // Size: 0x70
{
public:
    ExternalPtr<struct UCurveFloat> FloatCurve; /* Ofs: 0x0 Size: 0x8 ObjectProperty Engine.TimelineFloatTrack.FloatCurve */
    FScriptDelegate InterpFunc; /* Ofs: 0x8 Size: 0x10 DelegateProperty Engine.TimelineFloatTrack.InterpFunc */
    FName TrackName; /* Ofs: 0x18 Size: 0x8 NameProperty Engine.TimelineFloatTrack.TrackName */
    FName FloatPropertyName; /* Ofs: 0x20 Size: 0x8 NameProperty Engine.TimelineFloatTrack.FloatPropertyName */
    ExternalPtr<struct UFloatProperty> FloatProperty; /* Ofs: 0x28 Size: 0x8 ObjectProperty Engine.TimelineFloatTrack.FloatProperty */
    uint8_t UnknownData30[0x40];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFTimelineFloatTrack = sizeof(FTimelineFloatTrack); // 112
    static_assert(sizeof(FTimelineFloatTrack) == 0x70, "Size of FTimelineFloatTrack is not correct.");
	auto constexpr FTimelineFloatTrack_FloatCurve_Offset = offsetof(FTimelineFloatTrack, FloatCurve);
	static_assert(FTimelineFloatTrack_FloatCurve_Offset == 0x0, "FTimelineFloatTrack::FloatCurve offset is not 0");
	auto constexpr FTimelineFloatTrack_InterpFunc_Offset = offsetof(FTimelineFloatTrack, InterpFunc);
	static_assert(FTimelineFloatTrack_InterpFunc_Offset == 0x8, "FTimelineFloatTrack::InterpFunc offset is not 8");
	auto constexpr FTimelineFloatTrack_TrackName_Offset = offsetof(FTimelineFloatTrack, TrackName);
	static_assert(FTimelineFloatTrack_TrackName_Offset == 0x18, "FTimelineFloatTrack::TrackName offset is not 18");
	auto constexpr FTimelineFloatTrack_FloatPropertyName_Offset = offsetof(FTimelineFloatTrack, FloatPropertyName);
	static_assert(FTimelineFloatTrack_FloatPropertyName_Offset == 0x20, "FTimelineFloatTrack::FloatPropertyName offset is not 20");
	auto constexpr FTimelineFloatTrack_FloatProperty_Offset = offsetof(FTimelineFloatTrack, FloatProperty);
	static_assert(FTimelineFloatTrack_FloatProperty_Offset == 0x28, "FTimelineFloatTrack::FloatProperty offset is not 28");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
