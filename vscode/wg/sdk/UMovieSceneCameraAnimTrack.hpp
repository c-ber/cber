#pragma once
#include "UMovieSceneNameableTrack.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMovieSceneCameraAnimTrack // Size: 0xD0
	: public UMovieSceneNameableTrack // Size: 0xC0
{
private:
	typedef UMovieSceneCameraAnimTrack t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(95); // id32("Class MovieSceneTracks.MovieSceneCameraAnimTrack")
		return ptr;
	}
//	TArray<ExternalPtr<struct UMovieSceneSection>> CameraAnimSections; /* Ofs: 0xB8 Size: 0x10 - ArrayProperty MovieSceneTracks.MovieSceneCameraAnimTrack.CameraAnimSections */
	uint8_t UnknownDataC0[0x10];


//	inline bool SetCameraAnimSections(t_structHelper inst, TArray<ExternalPtr<struct UMovieSceneSection>> value) { inst.WriteOffset(0xB8, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMovieSceneCameraAnimTrack = sizeof(UMovieSceneCameraAnimTrack); // 208
    static_assert(sizeof(UMovieSceneCameraAnimTrack) == 0xD0, "Size of UMovieSceneCameraAnimTrack is not correct.");
//	auto constexpr UMovieSceneCameraAnimTrack_CameraAnimSections_Offset = offsetof(UMovieSceneCameraAnimTrack, CameraAnimSections);
//	static_assert(UMovieSceneCameraAnimTrack_CameraAnimSections_Offset == 0xb8, "UMovieSceneCameraAnimTrack::CameraAnimSections offset is not b8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
