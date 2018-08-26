#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FSoundTrackKey // Size: 0x18
{
public:
    float Time; /* Ofs: 0x0 Size: 0x4 FloatProperty Engine.SoundTrackKey.Time */
    float Volume; /* Ofs: 0x4 Size: 0x4 FloatProperty Engine.SoundTrackKey.Volume */
    float Pitch; /* Ofs: 0x8 Size: 0x4 FloatProperty Engine.SoundTrackKey.Pitch */
    uint8_t UnknownDataC[0x4];
    ExternalPtr<struct USoundBase> Sound; /* Ofs: 0x10 Size: 0x8 ObjectProperty Engine.SoundTrackKey.Sound */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFSoundTrackKey = sizeof(FSoundTrackKey); // 24
    static_assert(sizeof(FSoundTrackKey) == 0x18, "Size of FSoundTrackKey is not correct.");
	auto constexpr FSoundTrackKey_Time_Offset = offsetof(FSoundTrackKey, Time);
	static_assert(FSoundTrackKey_Time_Offset == 0x0, "FSoundTrackKey::Time offset is not 0");
	auto constexpr FSoundTrackKey_Volume_Offset = offsetof(FSoundTrackKey, Volume);
	static_assert(FSoundTrackKey_Volume_Offset == 0x4, "FSoundTrackKey::Volume offset is not 4");
	auto constexpr FSoundTrackKey_Pitch_Offset = offsetof(FSoundTrackKey, Pitch);
	static_assert(FSoundTrackKey_Pitch_Offset == 0x8, "FSoundTrackKey::Pitch offset is not 8");
	auto constexpr FSoundTrackKey_Sound_Offset = offsetof(FSoundTrackKey, Sound);
	static_assert(FSoundTrackKey_Sound_Offset == 0x10, "FSoundTrackKey::Sound offset is not 10");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
