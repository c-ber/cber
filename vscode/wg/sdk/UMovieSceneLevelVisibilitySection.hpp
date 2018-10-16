#pragma once
#include "UMovieSceneSection.hpp"
#include "ELevelVisibility.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMovieSceneLevelVisibilitySection // Size: 0xF0
	: public UMovieSceneSection // Size: 0xD0
{
private:
	typedef UMovieSceneLevelVisibilitySection t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(109); // id32("Class MovieSceneTracks.MovieSceneLevelVisibilitySection")
		return ptr;
	}
	TEnumAsByte<enum ELevelVisibility> Visibility; /* Ofs: 0xD0 Size: 0x1 - EnumProperty MovieSceneTracks.MovieSceneLevelVisibilitySection.Visibility */
	uint8_t UnknownDataD1[0x7];
	TArray<struct FName> LevelNames; /* Ofs: 0xD8 Size: 0x10 - ArrayProperty MovieSceneTracks.MovieSceneLevelVisibilitySection.LevelNames */
	uint8_t UnknownDataE8[0x8];


	inline bool SetVisibility(t_structHelper inst, TEnumAsByte<enum ELevelVisibility> value) { inst.WriteOffset(0xD0, value); }
	inline bool SetLevelNames(t_structHelper inst, TArray<struct FName> value) { inst.WriteOffset(0xD8, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMovieSceneLevelVisibilitySection = sizeof(UMovieSceneLevelVisibilitySection); // 240
    static_assert(sizeof(UMovieSceneLevelVisibilitySection) == 0xF0, "Size of UMovieSceneLevelVisibilitySection is not correct.");
	auto constexpr UMovieSceneLevelVisibilitySection_Visibility_Offset = offsetof(UMovieSceneLevelVisibilitySection, Visibility);
	static_assert(UMovieSceneLevelVisibilitySection_Visibility_Offset == 0xd0, "UMovieSceneLevelVisibilitySection::Visibility offset is not d0");
	auto constexpr UMovieSceneLevelVisibilitySection_LevelNames_Offset = offsetof(UMovieSceneLevelVisibilitySection, LevelNames);
	static_assert(UMovieSceneLevelVisibilitySection_LevelNames_Offset == 0xd8, "UMovieSceneLevelVisibilitySection::LevelNames offset is not d8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
