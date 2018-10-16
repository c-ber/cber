#pragma once
#include "UMovieSceneFloatSection.hpp"
#include "FLinearColor.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMovieSceneFadeSection // Size: 0x160
	: public UMovieSceneFloatSection // Size: 0x150
{
private:
	typedef UMovieSceneFadeSection t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(106); // id32("Class MovieSceneTracks.MovieSceneFadeSection")
		return ptr;
	}
//	FLinearColor FadeColor; /* Ofs: 0x148 Size: 0x10 - StructProperty MovieSceneTracks.MovieSceneFadeSection.FadeColor */
	uint8_t UnknownData150[0x8];
	uint8_t boolField158;
	uint8_t UnknownData159[0x7];


//	inline bool SetFadeColor(t_structHelper inst, FLinearColor value) { inst.WriteOffset(0x148, value); }
	inline bool bFadeAudio()
	{
		return boolField158& 0x1;
	}
	inline bool SetbFadeAudio(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x158, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMovieSceneFadeSection = sizeof(UMovieSceneFadeSection); // 352
    static_assert(sizeof(UMovieSceneFadeSection) == 0x160, "Size of UMovieSceneFadeSection is not correct.");
//	auto constexpr UMovieSceneFadeSection_FadeColor_Offset = offsetof(UMovieSceneFadeSection, FadeColor);
//	static_assert(UMovieSceneFadeSection_FadeColor_Offset == 0x148, "UMovieSceneFadeSection::FadeColor offset is not 148");
	auto constexpr UMovieSceneFadeSection_boolField158_Offset = offsetof(UMovieSceneFadeSection, boolField158);
	static_assert(UMovieSceneFadeSection_boolField158_Offset == 0x158, "UMovieSceneFadeSection::boolField158 offset is not 158");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
