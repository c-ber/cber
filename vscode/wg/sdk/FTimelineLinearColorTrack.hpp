#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FTimelineLinearColorTrack // Size: 0x70
{
public:
    ExternalPtr<struct UCurveLinearColor> LinearColorCurve; /* Ofs: 0x0 Size: 0x8 ObjectProperty Engine.TimelineLinearColorTrack.LinearColorCurve */
    FScriptDelegate InterpFunc; /* Ofs: 0x8 Size: 0x10 DelegateProperty Engine.TimelineLinearColorTrack.InterpFunc */
    FName TrackName; /* Ofs: 0x18 Size: 0x8 NameProperty Engine.TimelineLinearColorTrack.TrackName */
    FName LinearColorPropertyName; /* Ofs: 0x20 Size: 0x8 NameProperty Engine.TimelineLinearColorTrack.LinearColorPropertyName */
    ExternalPtr<struct UStructProperty> LinearColorProperty; /* Ofs: 0x28 Size: 0x8 ObjectProperty Engine.TimelineLinearColorTrack.LinearColorProperty */
    uint8_t UnknownData30[0x40];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFTimelineLinearColorTrack = sizeof(FTimelineLinearColorTrack); // 112
    static_assert(sizeof(FTimelineLinearColorTrack) == 0x70, "Size of FTimelineLinearColorTrack is not correct.");
	auto constexpr FTimelineLinearColorTrack_LinearColorCurve_Offset = offsetof(FTimelineLinearColorTrack, LinearColorCurve);
	static_assert(FTimelineLinearColorTrack_LinearColorCurve_Offset == 0x0, "FTimelineLinearColorTrack::LinearColorCurve offset is not 0");
	auto constexpr FTimelineLinearColorTrack_InterpFunc_Offset = offsetof(FTimelineLinearColorTrack, InterpFunc);
	static_assert(FTimelineLinearColorTrack_InterpFunc_Offset == 0x8, "FTimelineLinearColorTrack::InterpFunc offset is not 8");
	auto constexpr FTimelineLinearColorTrack_TrackName_Offset = offsetof(FTimelineLinearColorTrack, TrackName);
	static_assert(FTimelineLinearColorTrack_TrackName_Offset == 0x18, "FTimelineLinearColorTrack::TrackName offset is not 18");
	auto constexpr FTimelineLinearColorTrack_LinearColorPropertyName_Offset = offsetof(FTimelineLinearColorTrack, LinearColorPropertyName);
	static_assert(FTimelineLinearColorTrack_LinearColorPropertyName_Offset == 0x20, "FTimelineLinearColorTrack::LinearColorPropertyName offset is not 20");
	auto constexpr FTimelineLinearColorTrack_LinearColorProperty_Offset = offsetof(FTimelineLinearColorTrack, LinearColorProperty);
	static_assert(FTimelineLinearColorTrack_LinearColorProperty_Offset == 0x28, "FTimelineLinearColorTrack::LinearColorProperty offset is not 28");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
