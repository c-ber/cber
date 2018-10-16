#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FParticleReplayTrackKey // Size: 0xC
{
public:
    float Time; /* Ofs: 0x0 Size: 0x4 FloatProperty Engine.ParticleReplayTrackKey.Time */
    float Duration; /* Ofs: 0x4 Size: 0x4 FloatProperty Engine.ParticleReplayTrackKey.Duration */
    int32_t ClipIDNumber; /* Ofs: 0x8 Size: 0x4 IntProperty Engine.ParticleReplayTrackKey.ClipIDNumber */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFParticleReplayTrackKey = sizeof(FParticleReplayTrackKey); // 12
    static_assert(sizeof(FParticleReplayTrackKey) == 0xC, "Size of FParticleReplayTrackKey is not correct.");
	auto constexpr FParticleReplayTrackKey_Time_Offset = offsetof(FParticleReplayTrackKey, Time);
	static_assert(FParticleReplayTrackKey_Time_Offset == 0x0, "FParticleReplayTrackKey::Time offset is not 0");
	auto constexpr FParticleReplayTrackKey_Duration_Offset = offsetof(FParticleReplayTrackKey, Duration);
	static_assert(FParticleReplayTrackKey_Duration_Offset == 0x4, "FParticleReplayTrackKey::Duration offset is not 4");
	auto constexpr FParticleReplayTrackKey_ClipIDNumber_Offset = offsetof(FParticleReplayTrackKey, ClipIDNumber);
	static_assert(FParticleReplayTrackKey_ClipIDNumber_Offset == 0x8, "FParticleReplayTrackKey::ClipIDNumber offset is not 8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
