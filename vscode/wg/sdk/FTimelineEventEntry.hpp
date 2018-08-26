#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FTimelineEventEntry // Size: 0x18
{
public:
    float Time; /* Ofs: 0x0 Size: 0x4 FloatProperty Engine.TimelineEventEntry.Time */
    uint8_t UnknownData4[0x4];
    FScriptDelegate EventFunc; /* Ofs: 0x8 Size: 0x10 DelegateProperty Engine.TimelineEventEntry.EventFunc */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFTimelineEventEntry = sizeof(FTimelineEventEntry); // 24
    static_assert(sizeof(FTimelineEventEntry) == 0x18, "Size of FTimelineEventEntry is not correct.");
	auto constexpr FTimelineEventEntry_Time_Offset = offsetof(FTimelineEventEntry, Time);
	static_assert(FTimelineEventEntry_Time_Offset == 0x0, "FTimelineEventEntry::Time offset is not 0");
	auto constexpr FTimelineEventEntry_EventFunc_Offset = offsetof(FTimelineEventEntry, EventFunc);
	static_assert(FTimelineEventEntry_EventFunc_Offset == 0x8, "FTimelineEventEntry::EventFunc offset is not 8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
