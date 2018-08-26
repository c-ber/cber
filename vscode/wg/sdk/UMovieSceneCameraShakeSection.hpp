#pragma once
#include "UMovieSceneSection.hpp"
#include "FMovieSceneCameraShakeSectionData.hpp"
#include "ECameraAnimPlaySpace.hpp"
#include "FRotator.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMovieSceneCameraShakeSection // Size: 0x110
	: public UMovieSceneSection // Size: 0xD0
{
private:
	typedef UMovieSceneCameraShakeSection t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(98); // id32("Class MovieSceneTracks.MovieSceneCameraShakeSection")
		return ptr;
	}
	FMovieSceneCameraShakeSectionData ShakeData; /* Ofs: 0xD0 Size: 0x20 - StructProperty MovieSceneTracks.MovieSceneCameraShakeSection.ShakeData */
	ExternalPtr<struct UClass> ShakeClass; /* Ofs: 0xF0 Size: 0x8 - ClassProperty MovieSceneTracks.MovieSceneCameraShakeSection.ShakeClass */
	float PlayScale; /* Ofs: 0xF8 Size: 0x4 - FloatProperty MovieSceneTracks.MovieSceneCameraShakeSection.PlayScale */
	TEnumAsByte<enum ECameraAnimPlaySpace> PlaySpace; /* Ofs: 0xFC Size: 0x1 - ByteProperty MovieSceneTracks.MovieSceneCameraShakeSection.PlaySpace */
	uint8_t UnknownDataFD[0x3];
	FRotator UserDefinedPlaySpace; /* Ofs: 0x100 Size: 0xC - StructProperty MovieSceneTracks.MovieSceneCameraShakeSection.UserDefinedPlaySpace */
	uint8_t UnknownData10C[0x4];


	inline bool SetShakeData(t_structHelper inst, FMovieSceneCameraShakeSectionData value) { inst.WriteOffset(0xD0, value); }
	inline bool SetShakeClass(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0xF0, value); }
	inline bool SetPlayScale(t_structHelper inst, float value) { inst.WriteOffset(0xF8, value); }
	inline bool SetPlaySpace(t_structHelper inst, TEnumAsByte<enum ECameraAnimPlaySpace> value) { inst.WriteOffset(0xFC, value); }
	inline bool SetUserDefinedPlaySpace(t_structHelper inst, FRotator value) { inst.WriteOffset(0x100, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMovieSceneCameraShakeSection = sizeof(UMovieSceneCameraShakeSection); // 272
    static_assert(sizeof(UMovieSceneCameraShakeSection) == 0x110, "Size of UMovieSceneCameraShakeSection is not correct.");
	auto constexpr UMovieSceneCameraShakeSection_ShakeData_Offset = offsetof(UMovieSceneCameraShakeSection, ShakeData);
	static_assert(UMovieSceneCameraShakeSection_ShakeData_Offset == 0xd0, "UMovieSceneCameraShakeSection::ShakeData offset is not d0");
	auto constexpr UMovieSceneCameraShakeSection_ShakeClass_Offset = offsetof(UMovieSceneCameraShakeSection, ShakeClass);
	static_assert(UMovieSceneCameraShakeSection_ShakeClass_Offset == 0xf0, "UMovieSceneCameraShakeSection::ShakeClass offset is not f0");
	auto constexpr UMovieSceneCameraShakeSection_PlayScale_Offset = offsetof(UMovieSceneCameraShakeSection, PlayScale);
	static_assert(UMovieSceneCameraShakeSection_PlayScale_Offset == 0xf8, "UMovieSceneCameraShakeSection::PlayScale offset is not f8");
	auto constexpr UMovieSceneCameraShakeSection_PlaySpace_Offset = offsetof(UMovieSceneCameraShakeSection, PlaySpace);
	static_assert(UMovieSceneCameraShakeSection_PlaySpace_Offset == 0xfc, "UMovieSceneCameraShakeSection::PlaySpace offset is not fc");
	auto constexpr UMovieSceneCameraShakeSection_UserDefinedPlaySpace_Offset = offsetof(UMovieSceneCameraShakeSection, UserDefinedPlaySpace);
	static_assert(UMovieSceneCameraShakeSection_UserDefinedPlaySpace_Offset == 0x100, "UMovieSceneCameraShakeSection::UserDefinedPlaySpace offset is not 100");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
