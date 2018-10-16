#pragma once
#include "UMovieSceneSection.hpp"
#include "FRichCurve.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMovieSceneFloatSection // Size: 0x150
	: public UMovieSceneSection // Size: 0xD0
{
private:
	typedef UMovieSceneFloatSection t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(105); // id32("Class MovieSceneTracks.MovieSceneFloatSection")
		return ptr;
	}
	uint8_t UnknownDataD0[0x8];
	FRichCurve FloatCurve; /* Ofs: 0xD8 Size: 0x70 - StructProperty MovieSceneTracks.MovieSceneFloatSection.FloatCurve */
	uint8_t UnknownData148[0x8];


	inline bool SetFloatCurve(t_structHelper inst, FRichCurve value) { inst.WriteOffset(0xD8, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMovieSceneFloatSection = sizeof(UMovieSceneFloatSection); // 336
    static_assert(sizeof(UMovieSceneFloatSection) == 0x150, "Size of UMovieSceneFloatSection is not correct.");
	auto constexpr UMovieSceneFloatSection_FloatCurve_Offset = offsetof(UMovieSceneFloatSection, FloatCurve);
	static_assert(UMovieSceneFloatSection_FloatCurve_Offset == 0xd8, "UMovieSceneFloatSection::FloatCurve offset is not d8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
