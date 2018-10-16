#pragma once
#include "UMovieSceneTrack.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMovieSceneSegmentCompilerTestTrack // Size: 0xD0
	: public UMovieSceneTrack // Size: 0xC0
{
private:
	typedef UMovieSceneSegmentCompilerTestTrack t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(324); // id32("Class MovieScene.MovieSceneSegmentCompilerTestTrack")
		return ptr;
	}
//	uint8_t boolFieldB8;
	TArray<ExternalPtr<struct UMovieSceneSection>> SectionArray; /* Ofs: 0xC0 Size: 0x10 - ArrayProperty MovieScene.MovieSceneSegmentCompilerTestTrack.SectionArray */


	inline bool SetSectionArray(t_structHelper inst, TArray<ExternalPtr<struct UMovieSceneSection>> value) { inst.WriteOffset(0xC0, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMovieSceneSegmentCompilerTestTrack = sizeof(UMovieSceneSegmentCompilerTestTrack); // 208
    static_assert(sizeof(UMovieSceneSegmentCompilerTestTrack) == 0xD0, "Size of UMovieSceneSegmentCompilerTestTrack is not correct.");
//	auto constexpr UMovieSceneSegmentCompilerTestTrack_boolFieldB8_Offset = offsetof(UMovieSceneSegmentCompilerTestTrack, boolFieldB8);
//	static_assert(UMovieSceneSegmentCompilerTestTrack_boolFieldB8_Offset == 0xb8, "UMovieSceneSegmentCompilerTestTrack::boolFieldB8 offset is not b8");
	auto constexpr UMovieSceneSegmentCompilerTestTrack_SectionArray_Offset = offsetof(UMovieSceneSegmentCompilerTestTrack, SectionArray);
	static_assert(UMovieSceneSegmentCompilerTestTrack_SectionArray_Offset == 0xc0, "UMovieSceneSegmentCompilerTestTrack::SectionArray offset is not c0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
