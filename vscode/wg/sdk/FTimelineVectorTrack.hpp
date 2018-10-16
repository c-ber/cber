#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FTimelineVectorTrack // Size: 0x70
{
public:
    ExternalPtr<struct UCurveVector> VectorCurve; /* Ofs: 0x0 Size: 0x8 ObjectProperty Engine.TimelineVectorTrack.VectorCurve */
    FScriptDelegate InterpFunc; /* Ofs: 0x8 Size: 0x10 DelegateProperty Engine.TimelineVectorTrack.InterpFunc */
    FName TrackName; /* Ofs: 0x18 Size: 0x8 NameProperty Engine.TimelineVectorTrack.TrackName */
    FName VectorPropertyName; /* Ofs: 0x20 Size: 0x8 NameProperty Engine.TimelineVectorTrack.VectorPropertyName */
    ExternalPtr<struct UStructProperty> VectorProperty; /* Ofs: 0x28 Size: 0x8 ObjectProperty Engine.TimelineVectorTrack.VectorProperty */
    uint8_t UnknownData30[0x40];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFTimelineVectorTrack = sizeof(FTimelineVectorTrack); // 112
    static_assert(sizeof(FTimelineVectorTrack) == 0x70, "Size of FTimelineVectorTrack is not correct.");
	auto constexpr FTimelineVectorTrack_VectorCurve_Offset = offsetof(FTimelineVectorTrack, VectorCurve);
	static_assert(FTimelineVectorTrack_VectorCurve_Offset == 0x0, "FTimelineVectorTrack::VectorCurve offset is not 0");
	auto constexpr FTimelineVectorTrack_InterpFunc_Offset = offsetof(FTimelineVectorTrack, InterpFunc);
	static_assert(FTimelineVectorTrack_InterpFunc_Offset == 0x8, "FTimelineVectorTrack::InterpFunc offset is not 8");
	auto constexpr FTimelineVectorTrack_TrackName_Offset = offsetof(FTimelineVectorTrack, TrackName);
	static_assert(FTimelineVectorTrack_TrackName_Offset == 0x18, "FTimelineVectorTrack::TrackName offset is not 18");
	auto constexpr FTimelineVectorTrack_VectorPropertyName_Offset = offsetof(FTimelineVectorTrack, VectorPropertyName);
	static_assert(FTimelineVectorTrack_VectorPropertyName_Offset == 0x20, "FTimelineVectorTrack::VectorPropertyName offset is not 20");
	auto constexpr FTimelineVectorTrack_VectorProperty_Offset = offsetof(FTimelineVectorTrack, VectorProperty);
	static_assert(FTimelineVectorTrack_VectorProperty_Offset == 0x28, "FTimelineVectorTrack::VectorProperty offset is not 28");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
