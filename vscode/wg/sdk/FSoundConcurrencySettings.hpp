#pragma once
#include "EMaxConcurrentResolutionRule.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FSoundConcurrencySettings // Size: 0x10
{
public:
    int32_t MaxCount; /* Ofs: 0x0 Size: 0x4 IntProperty Engine.SoundConcurrencySettings.MaxCount */
    bool bLimitToOwner; /* Ofs: 0x4 Size: 0x1 BitMask: 01 BoolProperty Engine.SoundConcurrencySettings.bLimitToOwner */
    uint8_t UnknownData5[0x3];
    TEnumAsByte<enum EMaxConcurrentResolutionRule> ResolutionRule; /* Ofs: 0x8 Size: 0x1 ByteProperty Engine.SoundConcurrencySettings.ResolutionRule */
    uint8_t UnknownData9[0x3];
    float VolumeScale; /* Ofs: 0xC Size: 0x4 FloatProperty Engine.SoundConcurrencySettings.VolumeScale */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFSoundConcurrencySettings = sizeof(FSoundConcurrencySettings); // 16
    static_assert(sizeof(FSoundConcurrencySettings) == 0x10, "Size of FSoundConcurrencySettings is not correct.");
	auto constexpr FSoundConcurrencySettings_MaxCount_Offset = offsetof(FSoundConcurrencySettings, MaxCount);
	static_assert(FSoundConcurrencySettings_MaxCount_Offset == 0x0, "FSoundConcurrencySettings::MaxCount offset is not 0");
	auto constexpr FSoundConcurrencySettings_ResolutionRule_Offset = offsetof(FSoundConcurrencySettings, ResolutionRule);
	static_assert(FSoundConcurrencySettings_ResolutionRule_Offset == 0x8, "FSoundConcurrencySettings::ResolutionRule offset is not 8");
	auto constexpr FSoundConcurrencySettings_VolumeScale_Offset = offsetof(FSoundConcurrencySettings, VolumeScale);
	static_assert(FSoundConcurrencySettings_VolumeScale_Offset == 0xc, "FSoundConcurrencySettings::VolumeScale offset is not c");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
