#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FDistanceDatum // Size: 0x14
{
public:
    float FadeInDistanceStart; /* Ofs: 0x0 Size: 0x4 FloatProperty Engine.DistanceDatum.FadeInDistanceStart */
    float FadeInDistanceEnd; /* Ofs: 0x4 Size: 0x4 FloatProperty Engine.DistanceDatum.FadeInDistanceEnd */
    float FadeOutDistanceStart; /* Ofs: 0x8 Size: 0x4 FloatProperty Engine.DistanceDatum.FadeOutDistanceStart */
    float FadeOutDistanceEnd; /* Ofs: 0xC Size: 0x4 FloatProperty Engine.DistanceDatum.FadeOutDistanceEnd */
    float Volume; /* Ofs: 0x10 Size: 0x4 FloatProperty Engine.DistanceDatum.Volume */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFDistanceDatum = sizeof(FDistanceDatum); // 20
    static_assert(sizeof(FDistanceDatum) == 0x14, "Size of FDistanceDatum is not correct.");
	auto constexpr FDistanceDatum_FadeInDistanceStart_Offset = offsetof(FDistanceDatum, FadeInDistanceStart);
	static_assert(FDistanceDatum_FadeInDistanceStart_Offset == 0x0, "FDistanceDatum::FadeInDistanceStart offset is not 0");
	auto constexpr FDistanceDatum_FadeInDistanceEnd_Offset = offsetof(FDistanceDatum, FadeInDistanceEnd);
	static_assert(FDistanceDatum_FadeInDistanceEnd_Offset == 0x4, "FDistanceDatum::FadeInDistanceEnd offset is not 4");
	auto constexpr FDistanceDatum_FadeOutDistanceStart_Offset = offsetof(FDistanceDatum, FadeOutDistanceStart);
	static_assert(FDistanceDatum_FadeOutDistanceStart_Offset == 0x8, "FDistanceDatum::FadeOutDistanceStart offset is not 8");
	auto constexpr FDistanceDatum_FadeOutDistanceEnd_Offset = offsetof(FDistanceDatum, FadeOutDistanceEnd);
	static_assert(FDistanceDatum_FadeOutDistanceEnd_Offset == 0xc, "FDistanceDatum::FadeOutDistanceEnd offset is not c");
	auto constexpr FDistanceDatum_Volume_Offset = offsetof(FDistanceDatum, Volume);
	static_assert(FDistanceDatum_Volume_Offset == 0x10, "FDistanceDatum::Volume offset is not 10");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
