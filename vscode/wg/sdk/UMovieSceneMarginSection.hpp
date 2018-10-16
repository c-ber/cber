#pragma once
#include "UMovieSceneSection.hpp"
#include "FRichCurve.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMovieSceneMarginSection // Size: 0x2A0
	: public UMovieSceneSection // Size: 0xD0
{
private:
	typedef UMovieSceneMarginSection t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1630); // id32("Class UMG.MovieSceneMarginSection")
		return ptr;
	}
	uint8_t UnknownDataD0[0x8];
	FRichCurve TopCurve; /* Ofs: 0xD8 Size: 0x70 - StructProperty UMG.MovieSceneMarginSection.TopCurve */
	FRichCurve LeftCurve; /* Ofs: 0x148 Size: 0x70 - StructProperty UMG.MovieSceneMarginSection.LeftCurve */
	FRichCurve RightCurve; /* Ofs: 0x1B8 Size: 0x70 - StructProperty UMG.MovieSceneMarginSection.RightCurve */
	FRichCurve BottomCurve; /* Ofs: 0x228 Size: 0x70 - StructProperty UMG.MovieSceneMarginSection.BottomCurve */
	uint8_t UnknownData298[0x8];


	inline bool SetTopCurve(t_structHelper inst, FRichCurve value) { inst.WriteOffset(0xD8, value); }
	inline bool SetLeftCurve(t_structHelper inst, FRichCurve value) { inst.WriteOffset(0x148, value); }
	inline bool SetRightCurve(t_structHelper inst, FRichCurve value) { inst.WriteOffset(0x1B8, value); }
	inline bool SetBottomCurve(t_structHelper inst, FRichCurve value) { inst.WriteOffset(0x228, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMovieSceneMarginSection = sizeof(UMovieSceneMarginSection); // 672
    static_assert(sizeof(UMovieSceneMarginSection) == 0x2A0, "Size of UMovieSceneMarginSection is not correct.");
	auto constexpr UMovieSceneMarginSection_TopCurve_Offset = offsetof(UMovieSceneMarginSection, TopCurve);
	static_assert(UMovieSceneMarginSection_TopCurve_Offset == 0xd8, "UMovieSceneMarginSection::TopCurve offset is not d8");
	auto constexpr UMovieSceneMarginSection_LeftCurve_Offset = offsetof(UMovieSceneMarginSection, LeftCurve);
	static_assert(UMovieSceneMarginSection_LeftCurve_Offset == 0x148, "UMovieSceneMarginSection::LeftCurve offset is not 148");
	auto constexpr UMovieSceneMarginSection_RightCurve_Offset = offsetof(UMovieSceneMarginSection, RightCurve);
	static_assert(UMovieSceneMarginSection_RightCurve_Offset == 0x1b8, "UMovieSceneMarginSection::RightCurve offset is not 1b8");
	auto constexpr UMovieSceneMarginSection_BottomCurve_Offset = offsetof(UMovieSceneMarginSection, BottomCurve);
	static_assert(UMovieSceneMarginSection_BottomCurve_Offset == 0x228, "UMovieSceneMarginSection::BottomCurve offset is not 228");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
