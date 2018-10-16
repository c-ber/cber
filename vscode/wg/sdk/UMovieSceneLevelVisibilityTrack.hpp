#pragma once
#include "UMovieSceneNameableTrack.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMovieSceneLevelVisibilityTrack // Size: 0xD0
	: public UMovieSceneNameableTrack // Size: 0xC0
{
private:
	typedef UMovieSceneLevelVisibilityTrack t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(111); // id32("Class MovieSceneTracks.MovieSceneLevelVisibilityTrack")
		return ptr;
	}
//	TArray<ExternalPtr<struct UMovieSceneSection>> Sections; /* Ofs: 0xB8 Size: 0x10 - ArrayProperty MovieSceneTracks.MovieSceneLevelVisibilityTrack.Sections */
	uint8_t UnknownDataC0[0x10];


//	inline bool SetSections(t_structHelper inst, TArray<ExternalPtr<struct UMovieSceneSection>> value) { inst.WriteOffset(0xB8, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMovieSceneLevelVisibilityTrack = sizeof(UMovieSceneLevelVisibilityTrack); // 208
    static_assert(sizeof(UMovieSceneLevelVisibilityTrack) == 0xD0, "Size of UMovieSceneLevelVisibilityTrack is not correct.");
//	auto constexpr UMovieSceneLevelVisibilityTrack_Sections_Offset = offsetof(UMovieSceneLevelVisibilityTrack, Sections);
//	static_assert(UMovieSceneLevelVisibilityTrack_Sections_Offset == 0xb8, "UMovieSceneLevelVisibilityTrack::Sections offset is not b8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
