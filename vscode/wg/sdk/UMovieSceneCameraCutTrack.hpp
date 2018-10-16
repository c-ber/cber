#pragma once
#include "UMovieSceneNameableTrack.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMovieSceneCameraCutTrack // Size: 0xD0
	: public UMovieSceneNameableTrack // Size: 0xC0
{
private:
	typedef UMovieSceneCameraCutTrack t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(97); // id32("Class MovieSceneTracks.MovieSceneCameraCutTrack")
		return ptr;
	}
//	TArray<ExternalPtr<struct UMovieSceneSection>> Sections; /* Ofs: 0xB8 Size: 0x10 - ArrayProperty MovieSceneTracks.MovieSceneCameraCutTrack.Sections */
	uint8_t UnknownDataC0[0x10];


//	inline bool SetSections(t_structHelper inst, TArray<ExternalPtr<struct UMovieSceneSection>> value) { inst.WriteOffset(0xB8, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMovieSceneCameraCutTrack = sizeof(UMovieSceneCameraCutTrack); // 208
    static_assert(sizeof(UMovieSceneCameraCutTrack) == 0xD0, "Size of UMovieSceneCameraCutTrack is not correct.");
//	auto constexpr UMovieSceneCameraCutTrack_Sections_Offset = offsetof(UMovieSceneCameraCutTrack, Sections);
//	static_assert(UMovieSceneCameraCutTrack_Sections_Offset == 0xb8, "UMovieSceneCameraCutTrack::Sections offset is not b8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
