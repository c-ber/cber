#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FTTTrackBase // Size: 0x10
{
public:
    FName TrackName; /* Ofs: 0x0 Size: 0x8 NameProperty Engine.TTTrackBase.TrackName */
    bool bIsExternalCurve; /* Ofs: 0x8 Size: 0x1 BitMask: 01 BoolProperty Engine.TTTrackBase.bIsExternalCurve */
    uint8_t UnknownData9[0x7];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFTTTrackBase = sizeof(FTTTrackBase); // 16
    static_assert(sizeof(FTTTrackBase) == 0x10, "Size of FTTTrackBase is not correct.");
	auto constexpr FTTTrackBase_TrackName_Offset = offsetof(FTTTrackBase, TrackName);
	static_assert(FTTTrackBase_TrackName_Offset == 0x0, "FTTTrackBase::TrackName offset is not 0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
