#pragma once
#include "UMovieSceneSection.hpp"
#include "FRichCurve.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMovieSceneColorSection // Size: 0x2A0
	: public UMovieSceneSection // Size: 0xD0
{
private:
	typedef UMovieSceneColorSection t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(100); // id32("Class MovieSceneTracks.MovieSceneColorSection")
		return ptr;
	}
	uint8_t UnknownDataD0[0x8];
	FRichCurve RedCurve; /* Ofs: 0xD8 Size: 0x70 - StructProperty MovieSceneTracks.MovieSceneColorSection.RedCurve */
	FRichCurve GreenCurve; /* Ofs: 0x148 Size: 0x70 - StructProperty MovieSceneTracks.MovieSceneColorSection.GreenCurve */
	FRichCurve BlueCurve; /* Ofs: 0x1B8 Size: 0x70 - StructProperty MovieSceneTracks.MovieSceneColorSection.BlueCurve */
	FRichCurve AlphaCurve; /* Ofs: 0x228 Size: 0x70 - StructProperty MovieSceneTracks.MovieSceneColorSection.AlphaCurve */
	uint8_t UnknownData298[0x8];


	inline bool SetRedCurve(t_structHelper inst, FRichCurve value) { inst.WriteOffset(0xD8, value); }
	inline bool SetGreenCurve(t_structHelper inst, FRichCurve value) { inst.WriteOffset(0x148, value); }
	inline bool SetBlueCurve(t_structHelper inst, FRichCurve value) { inst.WriteOffset(0x1B8, value); }
	inline bool SetAlphaCurve(t_structHelper inst, FRichCurve value) { inst.WriteOffset(0x228, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMovieSceneColorSection = sizeof(UMovieSceneColorSection); // 672
    static_assert(sizeof(UMovieSceneColorSection) == 0x2A0, "Size of UMovieSceneColorSection is not correct.");
	auto constexpr UMovieSceneColorSection_RedCurve_Offset = offsetof(UMovieSceneColorSection, RedCurve);
	static_assert(UMovieSceneColorSection_RedCurve_Offset == 0xd8, "UMovieSceneColorSection::RedCurve offset is not d8");
	auto constexpr UMovieSceneColorSection_GreenCurve_Offset = offsetof(UMovieSceneColorSection, GreenCurve);
	static_assert(UMovieSceneColorSection_GreenCurve_Offset == 0x148, "UMovieSceneColorSection::GreenCurve offset is not 148");
	auto constexpr UMovieSceneColorSection_BlueCurve_Offset = offsetof(UMovieSceneColorSection, BlueCurve);
	static_assert(UMovieSceneColorSection_BlueCurve_Offset == 0x1b8, "UMovieSceneColorSection::BlueCurve offset is not 1b8");
	auto constexpr UMovieSceneColorSection_AlphaCurve_Offset = offsetof(UMovieSceneColorSection, AlphaCurve);
	static_assert(UMovieSceneColorSection_AlphaCurve_Offset == 0x228, "UMovieSceneColorSection::AlphaCurve offset is not 228");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
