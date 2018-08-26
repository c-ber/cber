#pragma once
#include "UMovieScenePropertyTrack.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMovieSceneVectorTrack // Size: 0xF0
	: public UMovieScenePropertyTrack // Size: 0xE0
{
private:
	typedef UMovieSceneVectorTrack t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(132); // id32("Class MovieSceneTracks.MovieSceneVectorTrack")
		return ptr;
	}
	int32_t NumChannelsUsed; /* Ofs: 0xE0 Size: 0x4 - IntProperty MovieSceneTracks.MovieSceneVectorTrack.NumChannelsUsed */
	uint8_t UnknownDataE4[0xC];


	inline bool SetNumChannelsUsed(t_structHelper inst, int32_t value) { inst.WriteOffset(0xE0, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMovieSceneVectorTrack = sizeof(UMovieSceneVectorTrack); // 240
    static_assert(sizeof(UMovieSceneVectorTrack) == 0xF0, "Size of UMovieSceneVectorTrack is not correct.");
	auto constexpr UMovieSceneVectorTrack_NumChannelsUsed_Offset = offsetof(UMovieSceneVectorTrack, NumChannelsUsed);
	static_assert(UMovieSceneVectorTrack_NumChannelsUsed_Offset == 0xe0, "UMovieSceneVectorTrack::NumChannelsUsed offset is not e0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
