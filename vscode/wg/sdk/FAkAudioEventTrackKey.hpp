#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FAkAudioEventTrackKey // Size: 0x20
{
public:
    float Time; /* Ofs: 0x0 Size: 0x4 FloatProperty AkAudio.AkAudioEventTrackKey.Time */
    uint8_t UnknownData4[0x4];
    ExternalPtr<struct UAkAudioEvent> AkAudioEvent; /* Ofs: 0x8 Size: 0x8 ObjectProperty AkAudio.AkAudioEventTrackKey.AkAudioEvent */
    FString EventName; /* Ofs: 0x10 Size: 0x10 StrProperty AkAudio.AkAudioEventTrackKey.EventName */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFAkAudioEventTrackKey = sizeof(FAkAudioEventTrackKey); // 32
    static_assert(sizeof(FAkAudioEventTrackKey) == 0x20, "Size of FAkAudioEventTrackKey is not correct.");
	auto constexpr FAkAudioEventTrackKey_Time_Offset = offsetof(FAkAudioEventTrackKey, Time);
	static_assert(FAkAudioEventTrackKey_Time_Offset == 0x0, "FAkAudioEventTrackKey::Time offset is not 0");
	auto constexpr FAkAudioEventTrackKey_AkAudioEvent_Offset = offsetof(FAkAudioEventTrackKey, AkAudioEvent);
	static_assert(FAkAudioEventTrackKey_AkAudioEvent_Offset == 0x8, "FAkAudioEventTrackKey::AkAudioEvent offset is not 8");
	auto constexpr FAkAudioEventTrackKey_EventName_Offset = offsetof(FAkAudioEventTrackKey, EventName);
	static_assert(FAkAudioEventTrackKey_EventName_Offset == 0x10, "FAkAudioEventTrackKey::EventName offset is not 10");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
