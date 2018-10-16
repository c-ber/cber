#pragma once
#include "FTTTrackBase.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FTTFloatTrack // Size: 0x18
 : public FTTTrackBase // Size: 0x10
{
public:
    ExternalPtr<struct UCurveFloat> CurveFloat; /* Ofs: 0x10 Size: 0x8 ObjectProperty Engine.TTFloatTrack.CurveFloat */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFTTFloatTrack = sizeof(FTTFloatTrack); // 24
    static_assert(sizeof(FTTFloatTrack) == 0x18, "Size of FTTFloatTrack is not correct.");
	auto constexpr FTTFloatTrack_CurveFloat_Offset = offsetof(FTTFloatTrack, CurveFloat);
	static_assert(FTTFloatTrack_CurveFloat_Offset == 0x10, "FTTFloatTrack::CurveFloat offset is not 10");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
