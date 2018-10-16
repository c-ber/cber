#pragma once
#include "UMovieSceneSignedObject.hpp"
#include "FMovieSceneTrackEvalOptions.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMovieSceneTrack // Size: 0xC0
	: public UMovieSceneSignedObject // Size: 0xB0
{
private:
	typedef UMovieSceneTrack t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(82); // id32("Class MovieScene.MovieSceneTrack")
		return ptr;
	}
	FMovieSceneTrackEvalOptions EvalOptions; /* Ofs: 0xB0 Size: 0x4 - StructProperty MovieScene.MovieSceneTrack.EvalOptions */
	uint8_t UnknownDataB4[0xC];


	inline bool SetEvalOptions(t_structHelper inst, FMovieSceneTrackEvalOptions value) { inst.WriteOffset(0xB0, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMovieSceneTrack = sizeof(UMovieSceneTrack); // 192
    static_assert(sizeof(UMovieSceneTrack) == 0xC0, "Size of UMovieSceneTrack is not correct.");
	auto constexpr UMovieSceneTrack_EvalOptions_Offset = offsetof(UMovieSceneTrack, EvalOptions);
	static_assert(UMovieSceneTrack_EvalOptions_Offset == 0xb0, "UMovieSceneTrack::EvalOptions offset is not b0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
