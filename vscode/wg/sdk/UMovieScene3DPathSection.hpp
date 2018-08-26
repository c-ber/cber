#pragma once
#include "UMovieScene3DConstraintSection.hpp"
#include "FRichCurve.hpp"
#include "MovieScene3DPathSection_Axis.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMovieScene3DPathSection // Size: 0x160
	: public UMovieScene3DConstraintSection // Size: 0xE0
{
private:
	typedef UMovieScene3DPathSection t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(81); // id32("Class MovieSceneTracks.MovieScene3DPathSection")
		return ptr;
	}
	FRichCurve TimingCurve; /* Ofs: 0xE0 Size: 0x70 - StructProperty MovieSceneTracks.MovieScene3DPathSection.TimingCurve */
	TEnumAsByte<enum MovieScene3DPathSection_Axis> FrontAxisEnum; /* Ofs: 0x150 Size: 0x1 - EnumProperty MovieSceneTracks.MovieScene3DPathSection.FrontAxisEnum */
	TEnumAsByte<enum MovieScene3DPathSection_Axis> UpAxisEnum; /* Ofs: 0x151 Size: 0x1 - EnumProperty MovieSceneTracks.MovieScene3DPathSection.UpAxisEnum */
	uint8_t UnknownData152[0x2];
	uint8_t boolField154;
	uint8_t UnknownData155[0xB];


	inline bool SetTimingCurve(t_structHelper inst, FRichCurve value) { inst.WriteOffset(0xE0, value); }
	inline bool SetFrontAxisEnum(t_structHelper inst, TEnumAsByte<enum MovieScene3DPathSection_Axis> value) { inst.WriteOffset(0x150, value); }
	inline bool SetUpAxisEnum(t_structHelper inst, TEnumAsByte<enum MovieScene3DPathSection_Axis> value) { inst.WriteOffset(0x151, value); }
	inline bool bFollow()
	{
		return boolField154& 0x1;
	}
	inline bool SetbFollow(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x154, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bReverse()
	{
		return boolField154& 0x2;
	}
	inline bool SetbReverse(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x154, (uint8_t)(value ? curVal | (uint8_t)2 : curVal & ~(uint8_t)2));
	}
	inline bool bForceUpright()
	{
		return boolField154& 0x4;
	}
	inline bool SetbForceUpright(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x154, (uint8_t)(value ? curVal | (uint8_t)4 : curVal & ~(uint8_t)4));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMovieScene3DPathSection = sizeof(UMovieScene3DPathSection); // 352
    static_assert(sizeof(UMovieScene3DPathSection) == 0x160, "Size of UMovieScene3DPathSection is not correct.");
	auto constexpr UMovieScene3DPathSection_TimingCurve_Offset = offsetof(UMovieScene3DPathSection, TimingCurve);
	static_assert(UMovieScene3DPathSection_TimingCurve_Offset == 0xe0, "UMovieScene3DPathSection::TimingCurve offset is not e0");
	auto constexpr UMovieScene3DPathSection_FrontAxisEnum_Offset = offsetof(UMovieScene3DPathSection, FrontAxisEnum);
	static_assert(UMovieScene3DPathSection_FrontAxisEnum_Offset == 0x150, "UMovieScene3DPathSection::FrontAxisEnum offset is not 150");
	auto constexpr UMovieScene3DPathSection_UpAxisEnum_Offset = offsetof(UMovieScene3DPathSection, UpAxisEnum);
	static_assert(UMovieScene3DPathSection_UpAxisEnum_Offset == 0x151, "UMovieScene3DPathSection::UpAxisEnum offset is not 151");
	auto constexpr UMovieScene3DPathSection_boolField154_Offset = offsetof(UMovieScene3DPathSection, boolField154);
	static_assert(UMovieScene3DPathSection_boolField154_Offset == 0x154, "UMovieScene3DPathSection::boolField154 offset is not 154");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
