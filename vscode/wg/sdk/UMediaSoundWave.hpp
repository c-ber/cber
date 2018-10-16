#pragma once
#include "USoundWave.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMediaSoundWave // Size: 0x360
	: public USoundWave // Size: 0x288
{
private:
	typedef UMediaSoundWave t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(350); // id32("Class MediaAssets.MediaSoundWave")
		return ptr;
	}
	uint8_t UnknownData288[0x8];
	int32_t AudioTrackIndex; /* Ofs: 0x290 Size: 0x4 - IntProperty MediaAssets.MediaSoundWave.AudioTrackIndex */
	uint8_t UnknownData294[0x4];
	ExternalPtr<struct UMediaPlayer> MediaPlayer; /* Ofs: 0x298 Size: 0x8 - ObjectProperty MediaAssets.MediaSoundWave.MediaPlayer */
	uint8_t UnknownData2A0[0xC0];


	inline bool SetAudioTrackIndex(t_structHelper inst, int32_t value) { inst.WriteOffset(0x290, value); }
	inline bool SetMediaPlayer(t_structHelper inst, ExternalPtr<struct UMediaPlayer> value) { inst.WriteOffset(0x298, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMediaSoundWave = sizeof(UMediaSoundWave); // 864
    static_assert(sizeof(UMediaSoundWave) == 0x360, "Size of UMediaSoundWave is not correct.");
	auto constexpr UMediaSoundWave_AudioTrackIndex_Offset = offsetof(UMediaSoundWave, AudioTrackIndex);
	static_assert(UMediaSoundWave_AudioTrackIndex_Offset == 0x290, "UMediaSoundWave::AudioTrackIndex offset is not 290");
	auto constexpr UMediaSoundWave_MediaPlayer_Offset = offsetof(UMediaSoundWave, MediaPlayer);
	static_assert(UMediaSoundWave_MediaPlayer_Offset == 0x298, "UMediaSoundWave::MediaPlayer offset is not 298");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
