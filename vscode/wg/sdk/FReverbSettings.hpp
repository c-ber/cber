#pragma once
#include "ReverbPreset.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FReverbSettings // Size: 0x18
{
public:
    bool bApplyReverb; /* Ofs: 0x0 Size: 0x1 BitMask: 01 BoolProperty Engine.ReverbSettings.bApplyReverb */
    uint8_t UnknownData1[0x3];
    TEnumAsByte<enum ReverbPreset> ReverbType; /* Ofs: 0x4 Size: 0x1 ByteProperty Engine.ReverbSettings.ReverbType */
    uint8_t UnknownData5[0x3];
    ExternalPtr<struct UReverbEffect> ReverbEffect; /* Ofs: 0x8 Size: 0x8 ObjectProperty Engine.ReverbSettings.ReverbEffect */
    float Volume; /* Ofs: 0x10 Size: 0x4 FloatProperty Engine.ReverbSettings.Volume */
    float FadeTime; /* Ofs: 0x14 Size: 0x4 FloatProperty Engine.ReverbSettings.FadeTime */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFReverbSettings = sizeof(FReverbSettings); // 24
    static_assert(sizeof(FReverbSettings) == 0x18, "Size of FReverbSettings is not correct.");
	auto constexpr FReverbSettings_ReverbType_Offset = offsetof(FReverbSettings, ReverbType);
	static_assert(FReverbSettings_ReverbType_Offset == 0x4, "FReverbSettings::ReverbType offset is not 4");
	auto constexpr FReverbSettings_ReverbEffect_Offset = offsetof(FReverbSettings, ReverbEffect);
	static_assert(FReverbSettings_ReverbEffect_Offset == 0x8, "FReverbSettings::ReverbEffect offset is not 8");
	auto constexpr FReverbSettings_Volume_Offset = offsetof(FReverbSettings, Volume);
	static_assert(FReverbSettings_Volume_Offset == 0x10, "FReverbSettings::Volume offset is not 10");
	auto constexpr FReverbSettings_FadeTime_Offset = offsetof(FReverbSettings, FadeTime);
	static_assert(FReverbSettings_FadeTime_Offset == 0x14, "FReverbSettings::FadeTime offset is not 14");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
