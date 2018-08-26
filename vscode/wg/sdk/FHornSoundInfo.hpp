#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FHornSoundInfo // Size: 0x10
{
public:
    ExternalPtr<struct UAkAudioEvent> HornOnSound; /* Ofs: 0x0 Size: 0x8 ObjectProperty TslGame.HornSoundInfo.HornOnSound */
    ExternalPtr<struct UAkAudioEvent> HornOffSound; /* Ofs: 0x8 Size: 0x8 ObjectProperty TslGame.HornSoundInfo.HornOffSound */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFHornSoundInfo = sizeof(FHornSoundInfo); // 16
    static_assert(sizeof(FHornSoundInfo) == 0x10, "Size of FHornSoundInfo is not correct.");
	auto constexpr FHornSoundInfo_HornOnSound_Offset = offsetof(FHornSoundInfo, HornOnSound);
	static_assert(FHornSoundInfo_HornOnSound_Offset == 0x0, "FHornSoundInfo::HornOnSound offset is not 0");
	auto constexpr FHornSoundInfo_HornOffSound_Offset = offsetof(FHornSoundInfo, HornOffSound);
	static_assert(FHornSoundInfo_HornOffSound_Offset == 0x8, "FHornSoundInfo::HornOffSound offset is not 8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
