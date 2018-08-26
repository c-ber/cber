#pragma once
#include "FLinearColor.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FAnimNotifyTrack // Size: 0x38
{
public:
    FName TrackName; /* Ofs: 0x0 Size: 0x8 NameProperty Engine.AnimNotifyTrack.TrackName */
    FLinearColor TrackColor; /* Ofs: 0x8 Size: 0x10 StructProperty Engine.AnimNotifyTrack.TrackColor */
    uint8_t UnknownData18[0x20];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFAnimNotifyTrack = sizeof(FAnimNotifyTrack); // 56
    static_assert(sizeof(FAnimNotifyTrack) == 0x38, "Size of FAnimNotifyTrack is not correct.");
	auto constexpr FAnimNotifyTrack_TrackName_Offset = offsetof(FAnimNotifyTrack, TrackName);
	static_assert(FAnimNotifyTrack_TrackName_Offset == 0x0, "FAnimNotifyTrack::TrackName offset is not 0");
	auto constexpr FAnimNotifyTrack_TrackColor_Offset = offsetof(FAnimNotifyTrack, TrackColor);
	static_assert(FAnimNotifyTrack_TrackColor_Offset == 0x8, "FAnimNotifyTrack::TrackColor offset is not 8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
