#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FAudioQualitySettings // Size: 0x20
{
public:
    FText DisplayName; /* Ofs: 0x0 Size: 0x18 TextProperty Engine.AudioQualitySettings.DisplayName */
    int32_t MaxChannels; /* Ofs: 0x18 Size: 0x4 IntProperty Engine.AudioQualitySettings.MaxChannels */
    uint8_t UnknownData1C[0x4];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFAudioQualitySettings = sizeof(FAudioQualitySettings); // 32
    static_assert(sizeof(FAudioQualitySettings) == 0x20, "Size of FAudioQualitySettings is not correct.");
	auto constexpr FAudioQualitySettings_DisplayName_Offset = offsetof(FAudioQualitySettings, DisplayName);
	static_assert(FAudioQualitySettings_DisplayName_Offset == 0x0, "FAudioQualitySettings::DisplayName offset is not 0");
	auto constexpr FAudioQualitySettings_MaxChannels_Offset = offsetof(FAudioQualitySettings, MaxChannels);
	static_assert(FAudioQualitySettings_MaxChannels_Offset == 0x18, "FAudioQualitySettings::MaxChannels offset is not 18");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
