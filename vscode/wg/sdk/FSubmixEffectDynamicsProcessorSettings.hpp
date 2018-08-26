#pragma once
#include "ESubmixEffectDynamicsProcessorType.hpp"
#include "ESubmixEffectDynamicsPeakMode.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FSubmixEffectDynamicsProcessorSettings // Size: 0x28
{
public:
    TEnumAsByte<enum ESubmixEffectDynamicsProcessorType> DynamicsProcessorType; /* Ofs: 0x0 Size: 0x1 EnumProperty AudioMixer.SubmixEffectDynamicsProcessorSettings.DynamicsProcessorType */
    TEnumAsByte<enum ESubmixEffectDynamicsPeakMode> PeakMode; /* Ofs: 0x1 Size: 0x1 EnumProperty AudioMixer.SubmixEffectDynamicsProcessorSettings.PeakMode */
    uint8_t UnknownData2[0x2];
    float LookAheadMsec; /* Ofs: 0x4 Size: 0x4 FloatProperty AudioMixer.SubmixEffectDynamicsProcessorSettings.LookAheadMsec */
    float AttackTimeMsec; /* Ofs: 0x8 Size: 0x4 FloatProperty AudioMixer.SubmixEffectDynamicsProcessorSettings.AttackTimeMsec */
    float ReleaseTimeMsec; /* Ofs: 0xC Size: 0x4 FloatProperty AudioMixer.SubmixEffectDynamicsProcessorSettings.ReleaseTimeMsec */
    float ThresholdDb; /* Ofs: 0x10 Size: 0x4 FloatProperty AudioMixer.SubmixEffectDynamicsProcessorSettings.ThresholdDb */
    float Ratio; /* Ofs: 0x14 Size: 0x4 FloatProperty AudioMixer.SubmixEffectDynamicsProcessorSettings.Ratio */
    float KneeBandwidthDb; /* Ofs: 0x18 Size: 0x4 FloatProperty AudioMixer.SubmixEffectDynamicsProcessorSettings.KneeBandwidthDb */
    float InputGainDb; /* Ofs: 0x1C Size: 0x4 FloatProperty AudioMixer.SubmixEffectDynamicsProcessorSettings.InputGainDb */
    float OutputGainDb; /* Ofs: 0x20 Size: 0x4 FloatProperty AudioMixer.SubmixEffectDynamicsProcessorSettings.OutputGainDb */
    bool bChannelLinked : 1; /* Ofs: 0x24 Size: 0x1 BitMask: 01 BoolProperty AudioMixer.SubmixEffectDynamicsProcessorSettings.bChannelLinked */
    bool bAnalogMode : 1; /* Ofs: 0x24 Size: 0x1 BitMask: 02 BoolProperty AudioMixer.SubmixEffectDynamicsProcessorSettings.bAnalogMode */
    uint8_t UnknownData25[0x3];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFSubmixEffectDynamicsProcessorSettings = sizeof(FSubmixEffectDynamicsProcessorSettings); // 40
    static_assert(sizeof(FSubmixEffectDynamicsProcessorSettings) == 0x28, "Size of FSubmixEffectDynamicsProcessorSettings is not correct.");
	auto constexpr FSubmixEffectDynamicsProcessorSettings_DynamicsProcessorType_Offset = offsetof(FSubmixEffectDynamicsProcessorSettings, DynamicsProcessorType);
	static_assert(FSubmixEffectDynamicsProcessorSettings_DynamicsProcessorType_Offset == 0x0, "FSubmixEffectDynamicsProcessorSettings::DynamicsProcessorType offset is not 0");
	auto constexpr FSubmixEffectDynamicsProcessorSettings_PeakMode_Offset = offsetof(FSubmixEffectDynamicsProcessorSettings, PeakMode);
	static_assert(FSubmixEffectDynamicsProcessorSettings_PeakMode_Offset == 0x1, "FSubmixEffectDynamicsProcessorSettings::PeakMode offset is not 1");
	auto constexpr FSubmixEffectDynamicsProcessorSettings_LookAheadMsec_Offset = offsetof(FSubmixEffectDynamicsProcessorSettings, LookAheadMsec);
	static_assert(FSubmixEffectDynamicsProcessorSettings_LookAheadMsec_Offset == 0x4, "FSubmixEffectDynamicsProcessorSettings::LookAheadMsec offset is not 4");
	auto constexpr FSubmixEffectDynamicsProcessorSettings_AttackTimeMsec_Offset = offsetof(FSubmixEffectDynamicsProcessorSettings, AttackTimeMsec);
	static_assert(FSubmixEffectDynamicsProcessorSettings_AttackTimeMsec_Offset == 0x8, "FSubmixEffectDynamicsProcessorSettings::AttackTimeMsec offset is not 8");
	auto constexpr FSubmixEffectDynamicsProcessorSettings_ReleaseTimeMsec_Offset = offsetof(FSubmixEffectDynamicsProcessorSettings, ReleaseTimeMsec);
	static_assert(FSubmixEffectDynamicsProcessorSettings_ReleaseTimeMsec_Offset == 0xc, "FSubmixEffectDynamicsProcessorSettings::ReleaseTimeMsec offset is not c");
	auto constexpr FSubmixEffectDynamicsProcessorSettings_ThresholdDb_Offset = offsetof(FSubmixEffectDynamicsProcessorSettings, ThresholdDb);
	static_assert(FSubmixEffectDynamicsProcessorSettings_ThresholdDb_Offset == 0x10, "FSubmixEffectDynamicsProcessorSettings::ThresholdDb offset is not 10");
	auto constexpr FSubmixEffectDynamicsProcessorSettings_Ratio_Offset = offsetof(FSubmixEffectDynamicsProcessorSettings, Ratio);
	static_assert(FSubmixEffectDynamicsProcessorSettings_Ratio_Offset == 0x14, "FSubmixEffectDynamicsProcessorSettings::Ratio offset is not 14");
	auto constexpr FSubmixEffectDynamicsProcessorSettings_KneeBandwidthDb_Offset = offsetof(FSubmixEffectDynamicsProcessorSettings, KneeBandwidthDb);
	static_assert(FSubmixEffectDynamicsProcessorSettings_KneeBandwidthDb_Offset == 0x18, "FSubmixEffectDynamicsProcessorSettings::KneeBandwidthDb offset is not 18");
	auto constexpr FSubmixEffectDynamicsProcessorSettings_InputGainDb_Offset = offsetof(FSubmixEffectDynamicsProcessorSettings, InputGainDb);
	static_assert(FSubmixEffectDynamicsProcessorSettings_InputGainDb_Offset == 0x1c, "FSubmixEffectDynamicsProcessorSettings::InputGainDb offset is not 1c");
	auto constexpr FSubmixEffectDynamicsProcessorSettings_OutputGainDb_Offset = offsetof(FSubmixEffectDynamicsProcessorSettings, OutputGainDb);
	static_assert(FSubmixEffectDynamicsProcessorSettings_OutputGainDb_Offset == 0x20, "FSubmixEffectDynamicsProcessorSettings::OutputGainDb offset is not 20");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
