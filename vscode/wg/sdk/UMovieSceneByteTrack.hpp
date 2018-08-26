#pragma once
#include "UMovieScenePropertyTrack.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMovieSceneByteTrack // Size: 0xF0
	: public UMovieScenePropertyTrack // Size: 0xE0
{
private:
	typedef UMovieSceneByteTrack t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(123); // id32("Class MovieSceneTracks.MovieSceneByteTrack")
		return ptr;
	}
	ExternalPtr<struct UEnum> Enum; /* Ofs: 0xE0 Size: 0x8 - ObjectProperty MovieSceneTracks.MovieSceneByteTrack.Enum */
	uint8_t UnknownDataE8[0x8];


	inline bool SetEnum(t_structHelper inst, ExternalPtr<struct UEnum> value) { inst.WriteOffset(0xE0, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMovieSceneByteTrack = sizeof(UMovieSceneByteTrack); // 240
    static_assert(sizeof(UMovieSceneByteTrack) == 0xF0, "Size of UMovieSceneByteTrack is not correct.");
	auto constexpr UMovieSceneByteTrack_Enum_Offset = offsetof(UMovieSceneByteTrack, Enum);
	static_assert(UMovieSceneByteTrack_Enum_Offset == 0xe0, "UMovieSceneByteTrack::Enum offset is not e0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
