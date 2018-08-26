#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FCurveTrack // Size: 0x18
{
public:
    FName CurveName; /* Ofs: 0x0 Size: 0x8 NameProperty Engine.CurveTrack.CurveName */
    TArray<float> CurveWeights; /* Ofs: 0x8 Size: 0x10 ArrayProperty Engine.CurveTrack.CurveWeights */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFCurveTrack = sizeof(FCurveTrack); // 24
    static_assert(sizeof(FCurveTrack) == 0x18, "Size of FCurveTrack is not correct.");
	auto constexpr FCurveTrack_CurveName_Offset = offsetof(FCurveTrack, CurveName);
	static_assert(FCurveTrack_CurveName_Offset == 0x0, "FCurveTrack::CurveName offset is not 0");
	auto constexpr FCurveTrack_CurveWeights_Offset = offsetof(FCurveTrack, CurveWeights);
	static_assert(FCurveTrack_CurveWeights_Offset == 0x8, "FCurveTrack::CurveWeights offset is not 8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
