#pragma once
#include "UMovieSceneNameableTrack.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMovieSceneCameraShakeTrack // Size: 0xD0
	: public UMovieSceneNameableTrack // Size: 0xC0
{
private:
	typedef UMovieSceneCameraShakeTrack t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(99); // id32("Class MovieSceneTracks.MovieSceneCameraShakeTrack")
		return ptr;
	}
//	TArray<ExternalPtr<struct UMovieSceneSection>> CameraShakeSections; /* Ofs: 0xB8 Size: 0x10 - ArrayProperty MovieSceneTracks.MovieSceneCameraShakeTrack.CameraShakeSections */
	uint8_t UnknownDataC0[0x10];


//	inline bool SetCameraShakeSections(t_structHelper inst, TArray<ExternalPtr<struct UMovieSceneSection>> value) { inst.WriteOffset(0xB8, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMovieSceneCameraShakeTrack = sizeof(UMovieSceneCameraShakeTrack); // 208
    static_assert(sizeof(UMovieSceneCameraShakeTrack) == 0xD0, "Size of UMovieSceneCameraShakeTrack is not correct.");
//	auto constexpr UMovieSceneCameraShakeTrack_CameraShakeSections_Offset = offsetof(UMovieSceneCameraShakeTrack, CameraShakeSections);
//	static_assert(UMovieSceneCameraShakeTrack_CameraShakeSections_Offset == 0xb8, "UMovieSceneCameraShakeTrack::CameraShakeSections offset is not b8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
