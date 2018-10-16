#pragma once
#include "UMovieSceneSection.hpp"
#include "FRichCurve.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMovieScene2DTransformSection // Size: 0x3F0
	: public UMovieSceneSection // Size: 0xD0
{
private:
	typedef UMovieScene2DTransformSection t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1628); // id32("Class UMG.MovieScene2DTransformSection")
		return ptr;
	}
	uint8_t UnknownDataD0[0x8];
	FRichCurve Translation[2]; /* Ofs: 0x2 Size: 0x70 - StructProperty UMG.MovieScene2DTransformSection.Translation */
	FRichCurve Rotation; /* Ofs: 0x1B8 Size: 0x70 - StructProperty UMG.MovieScene2DTransformSection.Rotation */
	FRichCurve Scale[2]; /* Ofs: 0x2 Size: 0x70 - StructProperty UMG.MovieScene2DTransformSection.Scale */
	FRichCurve Shear[2]; /* Ofs: 0x2 Size: 0x70 - StructProperty UMG.MovieScene2DTransformSection.Shear */
	uint8_t UnknownData3E8[0x8];


	inline bool SetRotation(t_structHelper inst, FRichCurve value) { inst.WriteOffset(0x1B8, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMovieScene2DTransformSection = sizeof(UMovieScene2DTransformSection); // 1008
    static_assert(sizeof(UMovieScene2DTransformSection) == 0x3F0, "Size of UMovieScene2DTransformSection is not correct.");
	auto constexpr UMovieScene2DTransformSection_Translation_Offset = offsetof(UMovieScene2DTransformSection, Translation);
	static_assert(UMovieScene2DTransformSection_Translation_Offset == 0xd8, "UMovieScene2DTransformSection::Translation offset is not d8");
	auto constexpr UMovieScene2DTransformSection_Rotation_Offset = offsetof(UMovieScene2DTransformSection, Rotation);
	static_assert(UMovieScene2DTransformSection_Rotation_Offset == 0x1b8, "UMovieScene2DTransformSection::Rotation offset is not 1b8");
	auto constexpr UMovieScene2DTransformSection_Scale_Offset = offsetof(UMovieScene2DTransformSection, Scale);
	static_assert(UMovieScene2DTransformSection_Scale_Offset == 0x228, "UMovieScene2DTransformSection::Scale offset is not 228");
	auto constexpr UMovieScene2DTransformSection_Shear_Offset = offsetof(UMovieScene2DTransformSection, Shear);
	static_assert(UMovieScene2DTransformSection_Shear_Offset == 0x308, "UMovieScene2DTransformSection::Shear offset is not 308");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
