#pragma once
#include "UMovieSceneSignedObject.hpp"
#include "FFloatRange.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMovieScene // Size: 0x130
	: public UMovieSceneSignedObject // Size: 0xB0
{
private:
	typedef UMovieScene t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(318); // id32("Class MovieScene.MovieScene")
		return ptr;
	}
	TArray<struct FMovieSceneSpawnable> Spawnables; /* Ofs: 0xB0 Size: 0x10 - ArrayProperty MovieScene.MovieScene.Spawnables */
	TArray<struct FMovieScenePossessable> Possessables; /* Ofs: 0xC0 Size: 0x10 - ArrayProperty MovieScene.MovieScene.Possessables */
	TArray<struct FMovieSceneBinding> ObjectBindings; /* Ofs: 0xD0 Size: 0x10 - ArrayProperty MovieScene.MovieScene.ObjectBindings */
	TArray<ExternalPtr<struct UMovieSceneTrack>> MasterTracks; /* Ofs: 0xE0 Size: 0x10 - ArrayProperty MovieScene.MovieScene.MasterTracks */
	ExternalPtr<struct UMovieSceneTrack> CameraCutTrack; /* Ofs: 0xF0 Size: 0x8 - ObjectProperty MovieScene.MovieScene.CameraCutTrack */
	FFloatRange SelectionRange; /* Ofs: 0xF8 Size: 0x10 - StructProperty MovieScene.MovieScene.SelectionRange */
	FFloatRange PlaybackRange; /* Ofs: 0x108 Size: 0x10 - StructProperty MovieScene.MovieScene.PlaybackRange */
	uint8_t boolField118;
	uint8_t UnknownData119[0x3];
	float FixedFrameInterval; /* Ofs: 0x11C Size: 0x4 - FloatProperty MovieScene.MovieScene.FixedFrameInterval */
	float InTime; /* Ofs: 0x120 Size: 0x4 - FloatProperty MovieScene.MovieScene.InTime */
	float OutTime; /* Ofs: 0x124 Size: 0x4 - FloatProperty MovieScene.MovieScene.OutTime */
	float StartTime; /* Ofs: 0x128 Size: 0x4 - FloatProperty MovieScene.MovieScene.StartTime */
	float EndTime; /* Ofs: 0x12C Size: 0x4 - FloatProperty MovieScene.MovieScene.EndTime */


	inline bool SetSpawnables(t_structHelper inst, TArray<struct FMovieSceneSpawnable> value) { inst.WriteOffset(0xB0, value); }
	inline bool SetPossessables(t_structHelper inst, TArray<struct FMovieScenePossessable> value) { inst.WriteOffset(0xC0, value); }
	inline bool SetObjectBindings(t_structHelper inst, TArray<struct FMovieSceneBinding> value) { inst.WriteOffset(0xD0, value); }
	inline bool SetMasterTracks(t_structHelper inst, TArray<ExternalPtr<struct UMovieSceneTrack>> value) { inst.WriteOffset(0xE0, value); }
	inline bool SetCameraCutTrack(t_structHelper inst, ExternalPtr<struct UMovieSceneTrack> value) { inst.WriteOffset(0xF0, value); }
	inline bool SetSelectionRange(t_structHelper inst, FFloatRange value) { inst.WriteOffset(0xF8, value); }
	inline bool SetPlaybackRange(t_structHelper inst, FFloatRange value) { inst.WriteOffset(0x108, value); }
	inline bool bForceFixedFrameIntervalPlayback()
	{
		return boolField118& 0x1;
	}
	inline bool SetbForceFixedFrameIntervalPlayback(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x118, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetFixedFrameInterval(t_structHelper inst, float value) { inst.WriteOffset(0x11C, value); }
	inline bool SetInTime(t_structHelper inst, float value) { inst.WriteOffset(0x120, value); }
	inline bool SetOutTime(t_structHelper inst, float value) { inst.WriteOffset(0x124, value); }
	inline bool SetStartTime(t_structHelper inst, float value) { inst.WriteOffset(0x128, value); }
	inline bool SetEndTime(t_structHelper inst, float value) { inst.WriteOffset(0x12C, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMovieScene = sizeof(UMovieScene); // 304
    static_assert(sizeof(UMovieScene) == 0x130, "Size of UMovieScene is not correct.");
	auto constexpr UMovieScene_Spawnables_Offset = offsetof(UMovieScene, Spawnables);
	static_assert(UMovieScene_Spawnables_Offset == 0xb0, "UMovieScene::Spawnables offset is not b0");
	auto constexpr UMovieScene_Possessables_Offset = offsetof(UMovieScene, Possessables);
	static_assert(UMovieScene_Possessables_Offset == 0xc0, "UMovieScene::Possessables offset is not c0");
	auto constexpr UMovieScene_ObjectBindings_Offset = offsetof(UMovieScene, ObjectBindings);
	static_assert(UMovieScene_ObjectBindings_Offset == 0xd0, "UMovieScene::ObjectBindings offset is not d0");
	auto constexpr UMovieScene_MasterTracks_Offset = offsetof(UMovieScene, MasterTracks);
	static_assert(UMovieScene_MasterTracks_Offset == 0xe0, "UMovieScene::MasterTracks offset is not e0");
	auto constexpr UMovieScene_CameraCutTrack_Offset = offsetof(UMovieScene, CameraCutTrack);
	static_assert(UMovieScene_CameraCutTrack_Offset == 0xf0, "UMovieScene::CameraCutTrack offset is not f0");
	auto constexpr UMovieScene_SelectionRange_Offset = offsetof(UMovieScene, SelectionRange);
	static_assert(UMovieScene_SelectionRange_Offset == 0xf8, "UMovieScene::SelectionRange offset is not f8");
	auto constexpr UMovieScene_PlaybackRange_Offset = offsetof(UMovieScene, PlaybackRange);
	static_assert(UMovieScene_PlaybackRange_Offset == 0x108, "UMovieScene::PlaybackRange offset is not 108");
	auto constexpr UMovieScene_boolField118_Offset = offsetof(UMovieScene, boolField118);
	static_assert(UMovieScene_boolField118_Offset == 0x118, "UMovieScene::boolField118 offset is not 118");
	auto constexpr UMovieScene_FixedFrameInterval_Offset = offsetof(UMovieScene, FixedFrameInterval);
	static_assert(UMovieScene_FixedFrameInterval_Offset == 0x11c, "UMovieScene::FixedFrameInterval offset is not 11c");
	auto constexpr UMovieScene_InTime_Offset = offsetof(UMovieScene, InTime);
	static_assert(UMovieScene_InTime_Offset == 0x120, "UMovieScene::InTime offset is not 120");
	auto constexpr UMovieScene_OutTime_Offset = offsetof(UMovieScene, OutTime);
	static_assert(UMovieScene_OutTime_Offset == 0x124, "UMovieScene::OutTime offset is not 124");
	auto constexpr UMovieScene_StartTime_Offset = offsetof(UMovieScene, StartTime);
	static_assert(UMovieScene_StartTime_Offset == 0x128, "UMovieScene::StartTime offset is not 128");
	auto constexpr UMovieScene_EndTime_Offset = offsetof(UMovieScene, EndTime);
	static_assert(UMovieScene_EndTime_Offset == 0x12c, "UMovieScene::EndTime offset is not 12c");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
