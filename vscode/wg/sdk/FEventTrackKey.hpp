#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FEventTrackKey // Size: 0x10
{
public:
    float Time; /* Ofs: 0x0 Size: 0x4 FloatProperty Engine.EventTrackKey.Time */
    uint8_t UnknownData4[0x4];
    FName EventName; /* Ofs: 0x8 Size: 0x8 NameProperty Engine.EventTrackKey.EventName */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFEventTrackKey = sizeof(FEventTrackKey); // 16
    static_assert(sizeof(FEventTrackKey) == 0x10, "Size of FEventTrackKey is not correct.");
	auto constexpr FEventTrackKey_Time_Offset = offsetof(FEventTrackKey, Time);
	static_assert(FEventTrackKey_Time_Offset == 0x0, "FEventTrackKey::Time offset is not 0");
	auto constexpr FEventTrackKey_EventName_Offset = offsetof(FEventTrackKey, EventName);
	static_assert(FEventTrackKey_EventName_Offset == 0x8, "FEventTrackKey::EventName offset is not 8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
