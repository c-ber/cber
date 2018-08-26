#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FSoundSubmixSendInfo // Size: 0x10
{
public:
    float SendLevel; /* Ofs: 0x0 Size: 0x4 FloatProperty Engine.SoundSubmixSendInfo.SendLevel */
    uint8_t UnknownData4[0x4];
    ExternalPtr<struct USoundSubmix> SoundSubmix; /* Ofs: 0x8 Size: 0x8 ObjectProperty Engine.SoundSubmixSendInfo.SoundSubmix */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFSoundSubmixSendInfo = sizeof(FSoundSubmixSendInfo); // 16
    static_assert(sizeof(FSoundSubmixSendInfo) == 0x10, "Size of FSoundSubmixSendInfo is not correct.");
	auto constexpr FSoundSubmixSendInfo_SendLevel_Offset = offsetof(FSoundSubmixSendInfo, SendLevel);
	static_assert(FSoundSubmixSendInfo_SendLevel_Offset == 0x0, "FSoundSubmixSendInfo::SendLevel offset is not 0");
	auto constexpr FSoundSubmixSendInfo_SoundSubmix_Offset = offsetof(FSoundSubmixSendInfo, SoundSubmix);
	static_assert(FSoundSubmixSendInfo_SoundSubmix_Offset == 0x8, "FSoundSubmixSendInfo::SoundSubmix offset is not 8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
