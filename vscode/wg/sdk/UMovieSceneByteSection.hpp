#pragma once
#include "UMovieSceneSection.hpp"
#include "FIntegralCurve.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMovieSceneByteSection // Size: 0x150
	: public UMovieSceneSection // Size: 0xD0
{
private:
	typedef UMovieSceneByteSection t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(93); // id32("Class MovieSceneTracks.MovieSceneByteSection")
		return ptr;
	}
	uint8_t UnknownDataD0[0x8];
	FIntegralCurve ByteCurve; /* Ofs: 0xD8 Size: 0x70 - StructProperty MovieSceneTracks.MovieSceneByteSection.ByteCurve */
	uint8_t UnknownData148[0x8];


	inline bool SetByteCurve(t_structHelper inst, FIntegralCurve value) { inst.WriteOffset(0xD8, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMovieSceneByteSection = sizeof(UMovieSceneByteSection); // 336
    static_assert(sizeof(UMovieSceneByteSection) == 0x150, "Size of UMovieSceneByteSection is not correct.");
	auto constexpr UMovieSceneByteSection_ByteCurve_Offset = offsetof(UMovieSceneByteSection, ByteCurve);
	static_assert(UMovieSceneByteSection_ByteCurve_Offset == 0xd8, "UMovieSceneByteSection::ByteCurve offset is not d8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
