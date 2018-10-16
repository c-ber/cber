#pragma once
#include "UMovieScenePropertyTrack.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMovieSceneEnumTrack // Size: 0xF0
	: public UMovieScenePropertyTrack // Size: 0xE0
{
private:
	typedef UMovieSceneEnumTrack t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(125); // id32("Class MovieSceneTracks.MovieSceneEnumTrack")
		return ptr;
	}
	ExternalPtr<struct UEnum> Enum; /* Ofs: 0xE0 Size: 0x8 - ObjectProperty MovieSceneTracks.MovieSceneEnumTrack.Enum */
	uint8_t UnknownDataE8[0x8];


	inline bool SetEnum(t_structHelper inst, ExternalPtr<struct UEnum> value) { inst.WriteOffset(0xE0, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMovieSceneEnumTrack = sizeof(UMovieSceneEnumTrack); // 240
    static_assert(sizeof(UMovieSceneEnumTrack) == 0xF0, "Size of UMovieSceneEnumTrack is not correct.");
	auto constexpr UMovieSceneEnumTrack_Enum_Offset = offsetof(UMovieSceneEnumTrack, Enum);
	static_assert(UMovieSceneEnumTrack_Enum_Offset == 0xe0, "UMovieSceneEnumTrack::Enum offset is not e0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
