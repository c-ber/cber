#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FPlayerMuteList // Size: 0x38
{
public:
    uint8_t UnknownData0[0x30];
    bool bHasVoiceHandshakeCompleted; /* Ofs: 0x30 Size: 0x1 BitMask: 01 BoolProperty Engine.PlayerMuteList.bHasVoiceHandshakeCompleted */
    uint8_t UnknownData31[0x3];
    int32_t VoiceChannelIdx; /* Ofs: 0x34 Size: 0x4 IntProperty Engine.PlayerMuteList.VoiceChannelIdx */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFPlayerMuteList = sizeof(FPlayerMuteList); // 56
    static_assert(sizeof(FPlayerMuteList) == 0x38, "Size of FPlayerMuteList is not correct.");
	auto constexpr FPlayerMuteList_VoiceChannelIdx_Offset = offsetof(FPlayerMuteList, VoiceChannelIdx);
	static_assert(FPlayerMuteList_VoiceChannelIdx_Offset == 0x34, "FPlayerMuteList::VoiceChannelIdx offset is not 34");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
