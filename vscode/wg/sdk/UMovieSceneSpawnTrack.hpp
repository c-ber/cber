#pragma once
#include "UMovieSceneTrack.hpp"
#include "FGuid.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMovieSceneSpawnTrack // Size: 0xE0
	: public UMovieSceneTrack // Size: 0xC0
{
private:
	typedef UMovieSceneSpawnTrack t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(103); // id32("Class MovieSceneTracks.MovieSceneSpawnTrack")
		return ptr;
	}
//	TArray<ExternalPtr<struct UMovieSceneSection>> Sections; /* Ofs: 0xB8 Size: 0x10 - ArrayProperty MovieSceneTracks.MovieSceneSpawnTrack.Sections */
	uint8_t UnknownDataC0[0x8];
	FGuid ObjectGuid; /* Ofs: 0xC8 Size: 0x10 - StructProperty MovieSceneTracks.MovieSceneSpawnTrack.ObjectGuid */
	uint8_t UnknownDataD8[0x8];


//	inline bool SetSections(t_structHelper inst, TArray<ExternalPtr<struct UMovieSceneSection>> value) { inst.WriteOffset(0xB8, value); }
	inline bool SetObjectGuid(t_structHelper inst, FGuid value) { inst.WriteOffset(0xC8, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMovieSceneSpawnTrack = sizeof(UMovieSceneSpawnTrack); // 224
    static_assert(sizeof(UMovieSceneSpawnTrack) == 0xE0, "Size of UMovieSceneSpawnTrack is not correct.");
//	auto constexpr UMovieSceneSpawnTrack_Sections_Offset = offsetof(UMovieSceneSpawnTrack, Sections);
//	static_assert(UMovieSceneSpawnTrack_Sections_Offset == 0xb8, "UMovieSceneSpawnTrack::Sections offset is not b8");
	auto constexpr UMovieSceneSpawnTrack_ObjectGuid_Offset = offsetof(UMovieSceneSpawnTrack, ObjectGuid);
	static_assert(UMovieSceneSpawnTrack_ObjectGuid_Offset == 0xc8, "UMovieSceneSpawnTrack::ObjectGuid offset is not c8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
