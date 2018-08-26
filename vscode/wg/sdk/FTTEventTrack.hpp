#pragma once
#include "FTTTrackBase.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FTTEventTrack // Size: 0x18
 : public FTTTrackBase // Size: 0x10
{
public:
    ExternalPtr<struct UCurveFloat> CurveKeys; /* Ofs: 0x10 Size: 0x8 ObjectProperty Engine.TTEventTrack.CurveKeys */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFTTEventTrack = sizeof(FTTEventTrack); // 24
    static_assert(sizeof(FTTEventTrack) == 0x18, "Size of FTTEventTrack is not correct.");
	auto constexpr FTTEventTrack_CurveKeys_Offset = offsetof(FTTEventTrack, CurveKeys);
	static_assert(FTTEventTrack_CurveKeys_Offset == 0x10, "FTTEventTrack::CurveKeys offset is not 10");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
