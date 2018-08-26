#pragma once
#include "UMovieScenePropertyTrack.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMovieSceneColorTrack // Size: 0xF0
	: public UMovieScenePropertyTrack // Size: 0xE0
{
private:
	typedef UMovieSceneColorTrack t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(124); // id32("Class MovieSceneTracks.MovieSceneColorTrack")
		return ptr;
	}
	uint8_t boolFieldE0;
	uint8_t UnknownDataE1[0xF];


	inline bool bIsSlateColor()
	{
		return boolFieldE0& 0x1;
	}
	inline bool SetbIsSlateColor(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xE0, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMovieSceneColorTrack = sizeof(UMovieSceneColorTrack); // 240
    static_assert(sizeof(UMovieSceneColorTrack) == 0xF0, "Size of UMovieSceneColorTrack is not correct.");
	auto constexpr UMovieSceneColorTrack_boolFieldE0_Offset = offsetof(UMovieSceneColorTrack, boolFieldE0);
	static_assert(UMovieSceneColorTrack_boolFieldE0_Offset == 0xe0, "UMovieSceneColorTrack::boolFieldE0 offset is not e0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
