#pragma once
#include "UMovieSceneSection.hpp"
#include "FIntegralCurve.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMovieSceneIntegerSection // Size: 0x150
	: public UMovieSceneSection // Size: 0xD0
{
private:
	typedef UMovieSceneIntegerSection t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(108); // id32("Class MovieSceneTracks.MovieSceneIntegerSection")
		return ptr;
	}
	uint8_t UnknownDataD0[0x8];
	FIntegralCurve IntegerCurve; /* Ofs: 0xD8 Size: 0x70 - StructProperty MovieSceneTracks.MovieSceneIntegerSection.IntegerCurve */
	uint8_t UnknownData148[0x8];


	inline bool SetIntegerCurve(t_structHelper inst, FIntegralCurve value) { inst.WriteOffset(0xD8, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMovieSceneIntegerSection = sizeof(UMovieSceneIntegerSection); // 336
    static_assert(sizeof(UMovieSceneIntegerSection) == 0x150, "Size of UMovieSceneIntegerSection is not correct.");
	auto constexpr UMovieSceneIntegerSection_IntegerCurve_Offset = offsetof(UMovieSceneIntegerSection, IntegerCurve);
	static_assert(UMovieSceneIntegerSection_IntegerCurve_Offset == 0xd8, "UMovieSceneIntegerSection::IntegerCurve offset is not d8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
