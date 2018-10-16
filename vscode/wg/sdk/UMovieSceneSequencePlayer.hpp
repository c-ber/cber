#pragma once
#include "FMovieSceneSequencePlaybackSettings.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMovieSceneSequencePlayer // Size: 0x700
	: public UObject // Size: 0x30
{
private:
	typedef UMovieSceneSequencePlayer t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(323); // id32("Class MovieScene.MovieSceneSequencePlayer")
		return ptr;
	}
	uint8_t UnknownData30[0x348];
	FScriptMulticastDelegate OnPlay; /* Ofs: 0x378 Size: 0x10 - MulticastDelegateProperty MovieScene.MovieSceneSequencePlayer.OnPlay */
	FScriptMulticastDelegate OnStop; /* Ofs: 0x388 Size: 0x10 - MulticastDelegateProperty MovieScene.MovieSceneSequencePlayer.OnStop */
	FScriptMulticastDelegate OnPause; /* Ofs: 0x398 Size: 0x10 - MulticastDelegateProperty MovieScene.MovieSceneSequencePlayer.OnPause */
	uint8_t boolField3A8;
	uint8_t UnknownData3A9[0x7];
	ExternalPtr<struct UMovieSceneSequence> Sequence; /* Ofs: 0x3B0 Size: 0x8 - ObjectProperty MovieScene.MovieSceneSequencePlayer.Sequence */
	float TimeCursorPosition; /* Ofs: 0x3B8 Size: 0x4 - FloatProperty MovieScene.MovieSceneSequencePlayer.TimeCursorPosition */
	float StartTime; /* Ofs: 0x3BC Size: 0x4 - FloatProperty MovieScene.MovieSceneSequencePlayer.StartTime */
	float EndTime; /* Ofs: 0x3C0 Size: 0x4 - FloatProperty MovieScene.MovieSceneSequencePlayer.EndTime */
	int32_t CurrentNumLoops; /* Ofs: 0x3C4 Size: 0x4 - IntProperty MovieScene.MovieSceneSequencePlayer.CurrentNumLoops */
	uint8_t UnknownData3C8[0x10];
	FMovieSceneSequencePlaybackSettings PlaybackSettings; /* Ofs: 0x3D8 Size: 0x28 - StructProperty MovieScene.MovieSceneSequencePlayer.PlaybackSettings */
	uint8_t UnknownData400[0x300];


	inline bool SetOnPlay(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x378, value); }
	inline bool SetOnStop(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x388, value); }
	inline bool SetOnPause(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x398, value); }
	inline bool bIsPlaying()
	{
		return boolField3A8& 0x1;
	}
	inline bool SetbIsPlaying(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x3A8, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bReversePlayback()
	{
		return boolField3A8& 0x2;
	}
	inline bool SetbReversePlayback(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x3A8, (uint8_t)(value ? curVal | (uint8_t)2 : curVal & ~(uint8_t)2));
	}
	inline bool bPendingFirstUpdate()
	{
		return boolField3A8& 0x4;
	}
	inline bool SetbPendingFirstUpdate(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x3A8, (uint8_t)(value ? curVal | (uint8_t)4 : curVal & ~(uint8_t)4));
	}
	inline bool SetSequence(t_structHelper inst, ExternalPtr<struct UMovieSceneSequence> value) { inst.WriteOffset(0x3B0, value); }
	inline bool SetTimeCursorPosition(t_structHelper inst, float value) { inst.WriteOffset(0x3B8, value); }
	inline bool SetStartTime(t_structHelper inst, float value) { inst.WriteOffset(0x3BC, value); }
	inline bool SetEndTime(t_structHelper inst, float value) { inst.WriteOffset(0x3C0, value); }
	inline bool SetCurrentNumLoops(t_structHelper inst, int32_t value) { inst.WriteOffset(0x3C4, value); }
	inline bool SetPlaybackSettings(t_structHelper inst, FMovieSceneSequencePlaybackSettings value) { inst.WriteOffset(0x3D8, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMovieSceneSequencePlayer = sizeof(UMovieSceneSequencePlayer); // 1792
    static_assert(sizeof(UMovieSceneSequencePlayer) == 0x700, "Size of UMovieSceneSequencePlayer is not correct.");
	auto constexpr UMovieSceneSequencePlayer_OnPlay_Offset = offsetof(UMovieSceneSequencePlayer, OnPlay);
	static_assert(UMovieSceneSequencePlayer_OnPlay_Offset == 0x378, "UMovieSceneSequencePlayer::OnPlay offset is not 378");
	auto constexpr UMovieSceneSequencePlayer_OnStop_Offset = offsetof(UMovieSceneSequencePlayer, OnStop);
	static_assert(UMovieSceneSequencePlayer_OnStop_Offset == 0x388, "UMovieSceneSequencePlayer::OnStop offset is not 388");
	auto constexpr UMovieSceneSequencePlayer_OnPause_Offset = offsetof(UMovieSceneSequencePlayer, OnPause);
	static_assert(UMovieSceneSequencePlayer_OnPause_Offset == 0x398, "UMovieSceneSequencePlayer::OnPause offset is not 398");
	auto constexpr UMovieSceneSequencePlayer_boolField3A8_Offset = offsetof(UMovieSceneSequencePlayer, boolField3A8);
	static_assert(UMovieSceneSequencePlayer_boolField3A8_Offset == 0x3a8, "UMovieSceneSequencePlayer::boolField3A8 offset is not 3a8");
	auto constexpr UMovieSceneSequencePlayer_Sequence_Offset = offsetof(UMovieSceneSequencePlayer, Sequence);
	static_assert(UMovieSceneSequencePlayer_Sequence_Offset == 0x3b0, "UMovieSceneSequencePlayer::Sequence offset is not 3b0");
	auto constexpr UMovieSceneSequencePlayer_TimeCursorPosition_Offset = offsetof(UMovieSceneSequencePlayer, TimeCursorPosition);
	static_assert(UMovieSceneSequencePlayer_TimeCursorPosition_Offset == 0x3b8, "UMovieSceneSequencePlayer::TimeCursorPosition offset is not 3b8");
	auto constexpr UMovieSceneSequencePlayer_StartTime_Offset = offsetof(UMovieSceneSequencePlayer, StartTime);
	static_assert(UMovieSceneSequencePlayer_StartTime_Offset == 0x3bc, "UMovieSceneSequencePlayer::StartTime offset is not 3bc");
	auto constexpr UMovieSceneSequencePlayer_EndTime_Offset = offsetof(UMovieSceneSequencePlayer, EndTime);
	static_assert(UMovieSceneSequencePlayer_EndTime_Offset == 0x3c0, "UMovieSceneSequencePlayer::EndTime offset is not 3c0");
	auto constexpr UMovieSceneSequencePlayer_CurrentNumLoops_Offset = offsetof(UMovieSceneSequencePlayer, CurrentNumLoops);
	static_assert(UMovieSceneSequencePlayer_CurrentNumLoops_Offset == 0x3c4, "UMovieSceneSequencePlayer::CurrentNumLoops offset is not 3c4");
	auto constexpr UMovieSceneSequencePlayer_PlaybackSettings_Offset = offsetof(UMovieSceneSequencePlayer, PlaybackSettings);
	static_assert(UMovieSceneSequencePlayer_PlaybackSettings_Offset == 0x3d8, "UMovieSceneSequencePlayer::PlaybackSettings offset is not 3d8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
