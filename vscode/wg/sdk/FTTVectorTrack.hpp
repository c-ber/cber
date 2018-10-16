#pragma once
#include "FTTTrackBase.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FTTVectorTrack // Size: 0x18
 : public FTTTrackBase // Size: 0x10
{
public:
    ExternalPtr<struct UCurveVector> CurveVector; /* Ofs: 0x10 Size: 0x8 ObjectProperty Engine.TTVectorTrack.CurveVector */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFTTVectorTrack = sizeof(FTTVectorTrack); // 24
    static_assert(sizeof(FTTVectorTrack) == 0x18, "Size of FTTVectorTrack is not correct.");
	auto constexpr FTTVectorTrack_CurveVector_Offset = offsetof(FTTVectorTrack, CurveVector);
	static_assert(FTTVectorTrack_CurveVector_Offset == 0x10, "FTTVectorTrack::CurveVector offset is not 10");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
