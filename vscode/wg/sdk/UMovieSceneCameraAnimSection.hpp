#pragma once
#include "UMovieSceneSection.hpp"
#include "FMovieSceneCameraAnimSectionData.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMovieSceneCameraAnimSection // Size: 0x110
	: public UMovieSceneSection // Size: 0xD0
{
private:
	typedef UMovieSceneCameraAnimSection t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(94); // id32("Class MovieSceneTracks.MovieSceneCameraAnimSection")
		return ptr;
	}
	FMovieSceneCameraAnimSectionData AnimData; /* Ofs: 0xD0 Size: 0x20 - StructProperty MovieSceneTracks.MovieSceneCameraAnimSection.AnimData */
	ExternalPtr<struct UCameraAnim> CameraAnim; /* Ofs: 0xF0 Size: 0x8 - ObjectProperty MovieSceneTracks.MovieSceneCameraAnimSection.CameraAnim */
	float PlayRate; /* Ofs: 0xF8 Size: 0x4 - FloatProperty MovieSceneTracks.MovieSceneCameraAnimSection.PlayRate */
	float PlayScale; /* Ofs: 0xFC Size: 0x4 - FloatProperty MovieSceneTracks.MovieSceneCameraAnimSection.PlayScale */
	float BlendInTime; /* Ofs: 0x100 Size: 0x4 - FloatProperty MovieSceneTracks.MovieSceneCameraAnimSection.BlendInTime */
	float BlendOutTime; /* Ofs: 0x104 Size: 0x4 - FloatProperty MovieSceneTracks.MovieSceneCameraAnimSection.BlendOutTime */
	uint8_t boolField108;
	uint8_t UnknownData109[0x7];


	inline bool SetAnimData(t_structHelper inst, FMovieSceneCameraAnimSectionData value) { inst.WriteOffset(0xD0, value); }
	inline bool SetCameraAnim(t_structHelper inst, ExternalPtr<struct UCameraAnim> value) { inst.WriteOffset(0xF0, value); }
	inline bool SetPlayRate(t_structHelper inst, float value) { inst.WriteOffset(0xF8, value); }
	inline bool SetPlayScale(t_structHelper inst, float value) { inst.WriteOffset(0xFC, value); }
	inline bool SetBlendInTime(t_structHelper inst, float value) { inst.WriteOffset(0x100, value); }
	inline bool SetBlendOutTime(t_structHelper inst, float value) { inst.WriteOffset(0x104, value); }
	inline bool bLooping()
	{
		return boolField108& 0x1;
	}
	inline bool SetbLooping(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x108, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMovieSceneCameraAnimSection = sizeof(UMovieSceneCameraAnimSection); // 272
    static_assert(sizeof(UMovieSceneCameraAnimSection) == 0x110, "Size of UMovieSceneCameraAnimSection is not correct.");
	auto constexpr UMovieSceneCameraAnimSection_AnimData_Offset = offsetof(UMovieSceneCameraAnimSection, AnimData);
	static_assert(UMovieSceneCameraAnimSection_AnimData_Offset == 0xd0, "UMovieSceneCameraAnimSection::AnimData offset is not d0");
	auto constexpr UMovieSceneCameraAnimSection_CameraAnim_Offset = offsetof(UMovieSceneCameraAnimSection, CameraAnim);
	static_assert(UMovieSceneCameraAnimSection_CameraAnim_Offset == 0xf0, "UMovieSceneCameraAnimSection::CameraAnim offset is not f0");
	auto constexpr UMovieSceneCameraAnimSection_PlayRate_Offset = offsetof(UMovieSceneCameraAnimSection, PlayRate);
	static_assert(UMovieSceneCameraAnimSection_PlayRate_Offset == 0xf8, "UMovieSceneCameraAnimSection::PlayRate offset is not f8");
	auto constexpr UMovieSceneCameraAnimSection_PlayScale_Offset = offsetof(UMovieSceneCameraAnimSection, PlayScale);
	static_assert(UMovieSceneCameraAnimSection_PlayScale_Offset == 0xfc, "UMovieSceneCameraAnimSection::PlayScale offset is not fc");
	auto constexpr UMovieSceneCameraAnimSection_BlendInTime_Offset = offsetof(UMovieSceneCameraAnimSection, BlendInTime);
	static_assert(UMovieSceneCameraAnimSection_BlendInTime_Offset == 0x100, "UMovieSceneCameraAnimSection::BlendInTime offset is not 100");
	auto constexpr UMovieSceneCameraAnimSection_BlendOutTime_Offset = offsetof(UMovieSceneCameraAnimSection, BlendOutTime);
	static_assert(UMovieSceneCameraAnimSection_BlendOutTime_Offset == 0x104, "UMovieSceneCameraAnimSection::BlendOutTime offset is not 104");
	auto constexpr UMovieSceneCameraAnimSection_boolField108_Offset = offsetof(UMovieSceneCameraAnimSection, boolField108);
	static_assert(UMovieSceneCameraAnimSection_boolField108_Offset == 0x108, "UMovieSceneCameraAnimSection::boolField108 offset is not 108");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
