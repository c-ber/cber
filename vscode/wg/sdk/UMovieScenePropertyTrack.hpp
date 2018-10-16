#pragma once
#include "UMovieSceneNameableTrack.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMovieScenePropertyTrack // Size: 0xE0
	: public UMovieSceneNameableTrack // Size: 0xC0
{
private:
	typedef UMovieScenePropertyTrack t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(110); // id32("Class MovieSceneTracks.MovieScenePropertyTrack")
		return ptr;
	}
//	FName PropertyName; /* Ofs: 0xB8 Size: 0x8 - NameProperty MovieSceneTracks.MovieScenePropertyTrack.PropertyName */
	FString PropertyPath; /* Ofs: 0xC0 Size: 0x10 - StrProperty MovieSceneTracks.MovieScenePropertyTrack.PropertyPath */
	TArray<ExternalPtr<struct UMovieSceneSection>> Sections; /* Ofs: 0xD0 Size: 0x10 - ArrayProperty MovieSceneTracks.MovieScenePropertyTrack.Sections */


//	inline bool SetPropertyName(t_structHelper inst, FName value) { inst.WriteOffset(0xB8, value); }
	inline bool SetPropertyPath(t_structHelper inst, FString value) { inst.WriteOffset(0xC0, value); }
	inline bool SetSections(t_structHelper inst, TArray<ExternalPtr<struct UMovieSceneSection>> value) { inst.WriteOffset(0xD0, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMovieScenePropertyTrack = sizeof(UMovieScenePropertyTrack); // 224
    static_assert(sizeof(UMovieScenePropertyTrack) == 0xE0, "Size of UMovieScenePropertyTrack is not correct.");
//	auto constexpr UMovieScenePropertyTrack_PropertyName_Offset = offsetof(UMovieScenePropertyTrack, PropertyName);
//	static_assert(UMovieScenePropertyTrack_PropertyName_Offset == 0xb8, "UMovieScenePropertyTrack::PropertyName offset is not b8");
	auto constexpr UMovieScenePropertyTrack_PropertyPath_Offset = offsetof(UMovieScenePropertyTrack, PropertyPath);
	static_assert(UMovieScenePropertyTrack_PropertyPath_Offset == 0xc0, "UMovieScenePropertyTrack::PropertyPath offset is not c0");
	auto constexpr UMovieScenePropertyTrack_Sections_Offset = offsetof(UMovieScenePropertyTrack, Sections);
	static_assert(UMovieScenePropertyTrack_Sections_Offset == 0xd0, "UMovieScenePropertyTrack::Sections offset is not d0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
