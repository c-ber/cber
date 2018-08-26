#pragma once
#include "FTTTrackBase.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FTTLinearColorTrack // Size: 0x18
 : public FTTTrackBase // Size: 0x10
{
public:
    ExternalPtr<struct UCurveLinearColor> CurveLinearColor; /* Ofs: 0x10 Size: 0x8 ObjectProperty Engine.TTLinearColorTrack.CurveLinearColor */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFTTLinearColorTrack = sizeof(FTTLinearColorTrack); // 24
    static_assert(sizeof(FTTLinearColorTrack) == 0x18, "Size of FTTLinearColorTrack is not correct.");
	auto constexpr FTTLinearColorTrack_CurveLinearColor_Offset = offsetof(FTTLinearColorTrack, CurveLinearColor);
	static_assert(FTTLinearColorTrack_CurveLinearColor_Offset == 0x10, "FTTLinearColorTrack::CurveLinearColor offset is not 10");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
