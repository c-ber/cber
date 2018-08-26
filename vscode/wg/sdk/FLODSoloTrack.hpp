#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FLODSoloTrack // Size: 0x10
{
public:
    TArray<uint8_t> SoloEnableSetting; /* Ofs: 0x0 Size: 0x10 ArrayProperty Engine.LODSoloTrack.SoloEnableSetting */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFLODSoloTrack = sizeof(FLODSoloTrack); // 16
    static_assert(sizeof(FLODSoloTrack) == 0x10, "Size of FLODSoloTrack is not correct.");
	auto constexpr FLODSoloTrack_SoloEnableSetting_Offset = offsetof(FLODSoloTrack, SoloEnableSetting);
	static_assert(FLODSoloTrack_SoloEnableSetting_Offset == 0x0, "FLODSoloTrack::SoloEnableSetting offset is not 0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
