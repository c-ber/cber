#pragma once
#include "UMovieSceneTrack.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMovieScene3DConstraintTrack // Size: 0xD0
	: public UMovieSceneTrack // Size: 0xC0
{
private:
	typedef UMovieScene3DConstraintTrack t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(83); // id32("Class MovieSceneTracks.MovieScene3DConstraintTrack")
		return ptr;
	}
//	TArray<ExternalPtr<struct UMovieSceneSection>> ConstraintSections; /* Ofs: 0xB8 Size: 0x10 - ArrayProperty MovieSceneTracks.MovieScene3DConstraintTrack.ConstraintSections */
	uint8_t UnknownDataC0[0x10];


//	inline bool SetConstraintSections(t_structHelper inst, TArray<ExternalPtr<struct UMovieSceneSection>> value) { inst.WriteOffset(0xB8, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMovieScene3DConstraintTrack = sizeof(UMovieScene3DConstraintTrack); // 208
    static_assert(sizeof(UMovieScene3DConstraintTrack) == 0xD0, "Size of UMovieScene3DConstraintTrack is not correct.");
//	auto constexpr UMovieScene3DConstraintTrack_ConstraintSections_Offset = offsetof(UMovieScene3DConstraintTrack, ConstraintSections);
//	static_assert(UMovieScene3DConstraintTrack_ConstraintSections_Offset == 0xb8, "UMovieScene3DConstraintTrack::ConstraintSections offset is not b8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
