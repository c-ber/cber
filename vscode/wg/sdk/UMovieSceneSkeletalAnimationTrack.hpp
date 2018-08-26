#pragma once
#include "UMovieSceneNameableTrack.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMovieSceneSkeletalAnimationTrack // Size: 0xD0
	: public UMovieSceneNameableTrack // Size: 0xC0
{
private:
	typedef UMovieSceneSkeletalAnimationTrack t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(134); // id32("Class MovieSceneTracks.MovieSceneSkeletalAnimationTrack")
		return ptr;
	}
//	TArray<ExternalPtr<struct UMovieSceneSection>> AnimationSections; /* Ofs: 0xB8 Size: 0x10 - ArrayProperty MovieSceneTracks.MovieSceneSkeletalAnimationTrack.AnimationSections */
	uint8_t UnknownDataC0[0x10];


//	inline bool SetAnimationSections(t_structHelper inst, TArray<ExternalPtr<struct UMovieSceneSection>> value) { inst.WriteOffset(0xB8, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMovieSceneSkeletalAnimationTrack = sizeof(UMovieSceneSkeletalAnimationTrack); // 208
    static_assert(sizeof(UMovieSceneSkeletalAnimationTrack) == 0xD0, "Size of UMovieSceneSkeletalAnimationTrack is not correct.");
//	auto constexpr UMovieSceneSkeletalAnimationTrack_AnimationSections_Offset = offsetof(UMovieSceneSkeletalAnimationTrack, AnimationSections);
//	static_assert(UMovieSceneSkeletalAnimationTrack_AnimationSections_Offset == 0xb8, "UMovieSceneSkeletalAnimationTrack::AnimationSections offset is not b8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
