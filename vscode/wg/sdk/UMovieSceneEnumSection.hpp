#pragma once
#include "UMovieSceneSection.hpp"
#include "FIntegralCurve.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMovieSceneEnumSection // Size: 0x150
	: public UMovieSceneSection // Size: 0xD0
{
private:
	typedef UMovieSceneEnumSection t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(101); // id32("Class MovieSceneTracks.MovieSceneEnumSection")
		return ptr;
	}
	uint8_t UnknownDataD0[0x8];
	FIntegralCurve EnumCurve; /* Ofs: 0xD8 Size: 0x70 - StructProperty MovieSceneTracks.MovieSceneEnumSection.EnumCurve */
	uint8_t UnknownData148[0x8];


	inline bool SetEnumCurve(t_structHelper inst, FIntegralCurve value) { inst.WriteOffset(0xD8, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMovieSceneEnumSection = sizeof(UMovieSceneEnumSection); // 336
    static_assert(sizeof(UMovieSceneEnumSection) == 0x150, "Size of UMovieSceneEnumSection is not correct.");
	auto constexpr UMovieSceneEnumSection_EnumCurve_Offset = offsetof(UMovieSceneEnumSection, EnumCurve);
	static_assert(UMovieSceneEnumSection_EnumCurve_Offset == 0xd8, "UMovieSceneEnumSection::EnumCurve offset is not d8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
