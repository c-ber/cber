#pragma once
#include "UMovieSceneSubSection.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMovieSceneCinematicShotSection // Size: 0x150
	: public UMovieSceneSubSection // Size: 0x140
{
private:
	typedef UMovieSceneCinematicShotSection t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(137); // id32("Class MovieSceneTracks.MovieSceneCinematicShotSection")
		return ptr;
	}
//	FText DisplayName; /* Ofs: 0x138 Size: 0x18 - TextProperty MovieSceneTracks.MovieSceneCinematicShotSection.DisplayName */
	uint8_t UnknownData140[0x10];


//	inline bool SetDisplayName(t_structHelper inst, FText value) { inst.WriteOffset(0x138, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMovieSceneCinematicShotSection = sizeof(UMovieSceneCinematicShotSection); // 336
    static_assert(sizeof(UMovieSceneCinematicShotSection) == 0x150, "Size of UMovieSceneCinematicShotSection is not correct.");
//	auto constexpr UMovieSceneCinematicShotSection_DisplayName_Offset = offsetof(UMovieSceneCinematicShotSection, DisplayName);
//	static_assert(UMovieSceneCinematicShotSection_DisplayName_Offset == 0x138, "UMovieSceneCinematicShotSection::DisplayName offset is not 138");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
