#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMediaPlayer // Size: 0x170
	: public UObject // Size: 0x30
{
private:
	typedef UMediaPlayer t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(346); // id32("Class MediaAssets.MediaPlayer")
		return ptr;
	}
	uint8_t UnknownData30[0x18];
	FScriptMulticastDelegate OnEndReached; /* Ofs: 0x48 Size: 0x10 - MulticastDelegateProperty MediaAssets.MediaPlayer.OnEndReached */
	FScriptMulticastDelegate OnMediaClosed; /* Ofs: 0x58 Size: 0x10 - MulticastDelegateProperty MediaAssets.MediaPlayer.OnMediaClosed */
	FScriptMulticastDelegate OnMediaOpened; /* Ofs: 0x68 Size: 0x10 - MulticastDelegateProperty MediaAssets.MediaPlayer.OnMediaOpened */
	FScriptMulticastDelegate OnMediaOpenFailed; /* Ofs: 0x78 Size: 0x10 - MulticastDelegateProperty MediaAssets.MediaPlayer.OnMediaOpenFailed */
	FScriptMulticastDelegate OnPlaybackResumed; /* Ofs: 0x88 Size: 0x10 - MulticastDelegateProperty MediaAssets.MediaPlayer.OnPlaybackResumed */
	FScriptMulticastDelegate OnPlaybackSuspended; /* Ofs: 0x98 Size: 0x10 - MulticastDelegateProperty MediaAssets.MediaPlayer.OnPlaybackSuspended */
	uint8_t boolFieldA8;
	uint8_t UnknownDataA9[0x3];
	uint8_t boolFieldAC;
	uint8_t UnknownDataAD[0x3];
	ExternalPtr<struct UMediaOverlays> Overlays; /* Ofs: 0xB0 Size: 0x8 - ObjectProperty MediaAssets.MediaPlayer.Overlays */
	ExternalPtr<struct UMediaPlaylist> Playlist; /* Ofs: 0xB8 Size: 0x8 - ObjectProperty MediaAssets.MediaPlayer.Playlist */
	int32_t PlaylistIndex; /* Ofs: 0xC0 Size: 0x4 - IntProperty MediaAssets.MediaPlayer.PlaylistIndex */
	uint8_t UnknownDataC4[0x4];
	ExternalPtr<struct UMediaSoundWave> SoundWave; /* Ofs: 0xC8 Size: 0x8 - ObjectProperty MediaAssets.MediaPlayer.SoundWave */
	ExternalPtr<struct UMediaTexture> VideoTexture; /* Ofs: 0xD0 Size: 0x8 - ObjectProperty MediaAssets.MediaPlayer.VideoTexture */
	uint8_t UnknownDataD8[0x98];


	inline bool SetOnEndReached(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x48, value); }
	inline bool SetOnMediaClosed(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x58, value); }
	inline bool SetOnMediaOpened(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x68, value); }
	inline bool SetOnMediaOpenFailed(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x78, value); }
	inline bool SetOnPlaybackResumed(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x88, value); }
	inline bool SetOnPlaybackSuspended(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x98, value); }
	inline bool PlayOnOpen()
	{
		return boolFieldA8& 0x1;
	}
	inline bool SetPlayOnOpen(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xA8, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool Shuffle()
	{
		return boolFieldAC& 0x1;
	}
	inline bool SetShuffle(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xAC, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool Loop()
	{
		return boolFieldAC& 0x2;
	}
	inline bool SetLoop(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xAC, (uint8_t)(value ? curVal | (uint8_t)2 : curVal & ~(uint8_t)2));
	}
	inline bool SetOverlays(t_structHelper inst, ExternalPtr<struct UMediaOverlays> value) { inst.WriteOffset(0xB0, value); }
	inline bool SetPlaylist(t_structHelper inst, ExternalPtr<struct UMediaPlaylist> value) { inst.WriteOffset(0xB8, value); }
	inline bool SetPlaylistIndex(t_structHelper inst, int32_t value) { inst.WriteOffset(0xC0, value); }
	inline bool SetSoundWave(t_structHelper inst, ExternalPtr<struct UMediaSoundWave> value) { inst.WriteOffset(0xC8, value); }
	inline bool SetVideoTexture(t_structHelper inst, ExternalPtr<struct UMediaTexture> value) { inst.WriteOffset(0xD0, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMediaPlayer = sizeof(UMediaPlayer); // 368
    static_assert(sizeof(UMediaPlayer) == 0x170, "Size of UMediaPlayer is not correct.");
	auto constexpr UMediaPlayer_OnEndReached_Offset = offsetof(UMediaPlayer, OnEndReached);
	static_assert(UMediaPlayer_OnEndReached_Offset == 0x48, "UMediaPlayer::OnEndReached offset is not 48");
	auto constexpr UMediaPlayer_OnMediaClosed_Offset = offsetof(UMediaPlayer, OnMediaClosed);
	static_assert(UMediaPlayer_OnMediaClosed_Offset == 0x58, "UMediaPlayer::OnMediaClosed offset is not 58");
	auto constexpr UMediaPlayer_OnMediaOpened_Offset = offsetof(UMediaPlayer, OnMediaOpened);
	static_assert(UMediaPlayer_OnMediaOpened_Offset == 0x68, "UMediaPlayer::OnMediaOpened offset is not 68");
	auto constexpr UMediaPlayer_OnMediaOpenFailed_Offset = offsetof(UMediaPlayer, OnMediaOpenFailed);
	static_assert(UMediaPlayer_OnMediaOpenFailed_Offset == 0x78, "UMediaPlayer::OnMediaOpenFailed offset is not 78");
	auto constexpr UMediaPlayer_OnPlaybackResumed_Offset = offsetof(UMediaPlayer, OnPlaybackResumed);
	static_assert(UMediaPlayer_OnPlaybackResumed_Offset == 0x88, "UMediaPlayer::OnPlaybackResumed offset is not 88");
	auto constexpr UMediaPlayer_OnPlaybackSuspended_Offset = offsetof(UMediaPlayer, OnPlaybackSuspended);
	static_assert(UMediaPlayer_OnPlaybackSuspended_Offset == 0x98, "UMediaPlayer::OnPlaybackSuspended offset is not 98");
	auto constexpr UMediaPlayer_boolFieldA8_Offset = offsetof(UMediaPlayer, boolFieldA8);
	static_assert(UMediaPlayer_boolFieldA8_Offset == 0xa8, "UMediaPlayer::boolFieldA8 offset is not a8");
	auto constexpr UMediaPlayer_boolFieldAC_Offset = offsetof(UMediaPlayer, boolFieldAC);
	static_assert(UMediaPlayer_boolFieldAC_Offset == 0xac, "UMediaPlayer::boolFieldAC offset is not ac");
	auto constexpr UMediaPlayer_Overlays_Offset = offsetof(UMediaPlayer, Overlays);
	static_assert(UMediaPlayer_Overlays_Offset == 0xb0, "UMediaPlayer::Overlays offset is not b0");
	auto constexpr UMediaPlayer_Playlist_Offset = offsetof(UMediaPlayer, Playlist);
	static_assert(UMediaPlayer_Playlist_Offset == 0xb8, "UMediaPlayer::Playlist offset is not b8");
	auto constexpr UMediaPlayer_PlaylistIndex_Offset = offsetof(UMediaPlayer, PlaylistIndex);
	static_assert(UMediaPlayer_PlaylistIndex_Offset == 0xc0, "UMediaPlayer::PlaylistIndex offset is not c0");
	auto constexpr UMediaPlayer_SoundWave_Offset = offsetof(UMediaPlayer, SoundWave);
	static_assert(UMediaPlayer_SoundWave_Offset == 0xc8, "UMediaPlayer::SoundWave offset is not c8");
	auto constexpr UMediaPlayer_VideoTexture_Offset = offsetof(UMediaPlayer, VideoTexture);
	static_assert(UMediaPlayer_VideoTexture_Offset == 0xd0, "UMediaPlayer::VideoTexture offset is not d0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
