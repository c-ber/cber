#pragma once
#include "UMovieSceneSection.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMovieSceneParameterSection // Size: 0x100
	: public UMovieSceneSection // Size: 0xD0
{
private:
	typedef UMovieSceneParameterSection t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(112); // id32("Class MovieSceneTracks.MovieSceneParameterSection")
		return ptr;
	}
	TArray<struct FScalarParameterNameAndCurve> ScalarParameterNamesAndCurves; /* Ofs: 0xD0 Size: 0x10 - ArrayProperty MovieSceneTracks.MovieSceneParameterSection.ScalarParameterNamesAndCurves */
	TArray<struct FVectorParameterNameAndCurves> VectorParameterNamesAndCurves; /* Ofs: 0xE0 Size: 0x10 - ArrayProperty MovieSceneTracks.MovieSceneParameterSection.VectorParameterNamesAndCurves */
	TArray<struct FColorParameterNameAndCurves> ColorParameterNamesAndCurves; /* Ofs: 0xF0 Size: 0x10 - ArrayProperty MovieSceneTracks.MovieSceneParameterSection.ColorParameterNamesAndCurves */


	inline bool SetScalarParameterNamesAndCurves(t_structHelper inst, TArray<struct FScalarParameterNameAndCurve> value) { inst.WriteOffset(0xD0, value); }
	inline bool SetVectorParameterNamesAndCurves(t_structHelper inst, TArray<struct FVectorParameterNameAndCurves> value) { inst.WriteOffset(0xE0, value); }
	inline bool SetColorParameterNamesAndCurves(t_structHelper inst, TArray<struct FColorParameterNameAndCurves> value) { inst.WriteOffset(0xF0, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMovieSceneParameterSection = sizeof(UMovieSceneParameterSection); // 256
    static_assert(sizeof(UMovieSceneParameterSection) == 0x100, "Size of UMovieSceneParameterSection is not correct.");
	auto constexpr UMovieSceneParameterSection_ScalarParameterNamesAndCurves_Offset = offsetof(UMovieSceneParameterSection, ScalarParameterNamesAndCurves);
	static_assert(UMovieSceneParameterSection_ScalarParameterNamesAndCurves_Offset == 0xd0, "UMovieSceneParameterSection::ScalarParameterNamesAndCurves offset is not d0");
	auto constexpr UMovieSceneParameterSection_VectorParameterNamesAndCurves_Offset = offsetof(UMovieSceneParameterSection, VectorParameterNamesAndCurves);
	static_assert(UMovieSceneParameterSection_VectorParameterNamesAndCurves_Offset == 0xe0, "UMovieSceneParameterSection::VectorParameterNamesAndCurves offset is not e0");
	auto constexpr UMovieSceneParameterSection_ColorParameterNamesAndCurves_Offset = offsetof(UMovieSceneParameterSection, ColorParameterNamesAndCurves);
	static_assert(UMovieSceneParameterSection_ColorParameterNamesAndCurves_Offset == 0xf0, "UMovieSceneParameterSection::ColorParameterNamesAndCurves offset is not f0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
