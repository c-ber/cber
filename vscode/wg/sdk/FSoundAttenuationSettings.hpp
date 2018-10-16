#pragma once
#include "FBaseAttenuationSettings.hpp"
#include "ESoundDistanceCalc.hpp"
#include "ESoundSpatializationAlgorithm.hpp"
#include "ECollisionChannel.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FSoundAttenuationSettings // Size: 0x130
 : public FBaseAttenuationSettings // Size: 0xA8
{
public:
    bool bAttenuate : 1; /* Ofs: 0xA8 Size: 0x1 BitMask: 01 BoolProperty Engine.SoundAttenuationSettings.bAttenuate */
    bool bSpatialize : 1; /* Ofs: 0xA8 Size: 0x1 BitMask: 02 BoolProperty Engine.SoundAttenuationSettings.bSpatialize */
    bool bAttenuateWithLPF : 1; /* Ofs: 0xA8 Size: 0x1 BitMask: 04 BoolProperty Engine.SoundAttenuationSettings.bAttenuateWithLPF */
    bool bEnableListenerFocus : 1; /* Ofs: 0xA8 Size: 0x1 BitMask: 08 BoolProperty Engine.SoundAttenuationSettings.bEnableListenerFocus */
    bool bEnableOcclusion : 1; /* Ofs: 0xA8 Size: 0x1 BitMask: 10 BoolProperty Engine.SoundAttenuationSettings.bEnableOcclusion */
    bool bUseComplexCollisionForOcclusion : 1; /* Ofs: 0xA8 Size: 0x1 BitMask: 20 BoolProperty Engine.SoundAttenuationSettings.bUseComplexCollisionForOcclusion */
    uint8_t UnknownDataA9[0x3];
    TEnumAsByte<enum ESoundDistanceCalc> DistanceType; /* Ofs: 0xAC Size: 0x1 ByteProperty Engine.SoundAttenuationSettings.DistanceType */
    uint8_t UnknownDataAD[0x3];
    float OmniRadius; /* Ofs: 0xB0 Size: 0x4 FloatProperty Engine.SoundAttenuationSettings.OmniRadius */
    float StereoSpread; /* Ofs: 0xB4 Size: 0x4 FloatProperty Engine.SoundAttenuationSettings.StereoSpread */
    TEnumAsByte<enum ESoundSpatializationAlgorithm> SpatializationAlgorithm; /* Ofs: 0xB8 Size: 0x1 ByteProperty Engine.SoundAttenuationSettings.SpatializationAlgorithm */
    uint8_t UnknownDataB9[0x7];
    ExternalPtr<struct USpatializationPluginSourceSettingsBase> SpatializationPluginSettings; /* Ofs: 0xC0 Size: 0x8 ObjectProperty Engine.SoundAttenuationSettings.SpatializationPluginSettings */
    float RadiusMin; /* Ofs: 0xC8 Size: 0x4 FloatProperty Engine.SoundAttenuationSettings.RadiusMin */
    float RadiusMax; /* Ofs: 0xCC Size: 0x4 FloatProperty Engine.SoundAttenuationSettings.RadiusMax */
    float LPFRadiusMin; /* Ofs: 0xD0 Size: 0x4 FloatProperty Engine.SoundAttenuationSettings.LPFRadiusMin */
    float LPFRadiusMax; /* Ofs: 0xD4 Size: 0x4 FloatProperty Engine.SoundAttenuationSettings.LPFRadiusMax */
    float LPFFrequencyAtMin; /* Ofs: 0xD8 Size: 0x4 FloatProperty Engine.SoundAttenuationSettings.LPFFrequencyAtMin */
    float LPFFrequencyAtMax; /* Ofs: 0xDC Size: 0x4 FloatProperty Engine.SoundAttenuationSettings.LPFFrequencyAtMax */
    float FocusAzimuth; /* Ofs: 0xE0 Size: 0x4 FloatProperty Engine.SoundAttenuationSettings.FocusAzimuth */
    float NonFocusAzimuth; /* Ofs: 0xE4 Size: 0x4 FloatProperty Engine.SoundAttenuationSettings.NonFocusAzimuth */
    float FocusDistanceScale; /* Ofs: 0xE8 Size: 0x4 FloatProperty Engine.SoundAttenuationSettings.FocusDistanceScale */
    float NonFocusDistanceScale; /* Ofs: 0xEC Size: 0x4 FloatProperty Engine.SoundAttenuationSettings.NonFocusDistanceScale */
    float FocusPriorityScale; /* Ofs: 0xF0 Size: 0x4 FloatProperty Engine.SoundAttenuationSettings.FocusPriorityScale */
    float NonFocusPriorityScale; /* Ofs: 0xF4 Size: 0x4 FloatProperty Engine.SoundAttenuationSettings.NonFocusPriorityScale */
    float FocusVolumeAttenuation; /* Ofs: 0xF8 Size: 0x4 FloatProperty Engine.SoundAttenuationSettings.FocusVolumeAttenuation */
    float NonFocusVolumeAttenuation; /* Ofs: 0xFC Size: 0x4 FloatProperty Engine.SoundAttenuationSettings.NonFocusVolumeAttenuation */
    TEnumAsByte<enum ECollisionChannel> OcclusionTraceChannel; /* Ofs: 0x100 Size: 0x1 ByteProperty Engine.SoundAttenuationSettings.OcclusionTraceChannel */
    uint8_t UnknownData101[0x3];
    float OcclusionLowPassFilterFrequency; /* Ofs: 0x104 Size: 0x4 FloatProperty Engine.SoundAttenuationSettings.OcclusionLowPassFilterFrequency */
    float OcclusionVolumeAttenuation; /* Ofs: 0x108 Size: 0x4 FloatProperty Engine.SoundAttenuationSettings.OcclusionVolumeAttenuation */
    float OcclusionInterpolationTime; /* Ofs: 0x10C Size: 0x4 FloatProperty Engine.SoundAttenuationSettings.OcclusionInterpolationTime */
    ExternalPtr<struct UOcclusionPluginSourceSettingsBase> OcclusionPluginSettings; /* Ofs: 0x110 Size: 0x8 ObjectProperty Engine.SoundAttenuationSettings.OcclusionPluginSettings */
    ExternalPtr<struct UReverbPluginSourceSettingsBase> ReverbPluginSettings; /* Ofs: 0x118 Size: 0x8 ObjectProperty Engine.SoundAttenuationSettings.ReverbPluginSettings */
    float ReverbWetLevelMin; /* Ofs: 0x120 Size: 0x4 FloatProperty Engine.SoundAttenuationSettings.ReverbWetLevelMin */
    float ReverbWetLevelMax; /* Ofs: 0x124 Size: 0x4 FloatProperty Engine.SoundAttenuationSettings.ReverbWetLevelMax */
    float ReverbDistanceMin; /* Ofs: 0x128 Size: 0x4 FloatProperty Engine.SoundAttenuationSettings.ReverbDistanceMin */
    float ReverbDistanceMax; /* Ofs: 0x12C Size: 0x4 FloatProperty Engine.SoundAttenuationSettings.ReverbDistanceMax */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFSoundAttenuationSettings = sizeof(FSoundAttenuationSettings); // 304
    static_assert(sizeof(FSoundAttenuationSettings) == 0x130, "Size of FSoundAttenuationSettings is not correct.");
	auto constexpr FSoundAttenuationSettings_DistanceType_Offset = offsetof(FSoundAttenuationSettings, DistanceType);
	static_assert(FSoundAttenuationSettings_DistanceType_Offset == 0xac, "FSoundAttenuationSettings::DistanceType offset is not ac");
	auto constexpr FSoundAttenuationSettings_OmniRadius_Offset = offsetof(FSoundAttenuationSettings, OmniRadius);
	static_assert(FSoundAttenuationSettings_OmniRadius_Offset == 0xb0, "FSoundAttenuationSettings::OmniRadius offset is not b0");
	auto constexpr FSoundAttenuationSettings_StereoSpread_Offset = offsetof(FSoundAttenuationSettings, StereoSpread);
	static_assert(FSoundAttenuationSettings_StereoSpread_Offset == 0xb4, "FSoundAttenuationSettings::StereoSpread offset is not b4");
	auto constexpr FSoundAttenuationSettings_SpatializationAlgorithm_Offset = offsetof(FSoundAttenuationSettings, SpatializationAlgorithm);
	static_assert(FSoundAttenuationSettings_SpatializationAlgorithm_Offset == 0xb8, "FSoundAttenuationSettings::SpatializationAlgorithm offset is not b8");
	auto constexpr FSoundAttenuationSettings_SpatializationPluginSettings_Offset = offsetof(FSoundAttenuationSettings, SpatializationPluginSettings);
	static_assert(FSoundAttenuationSettings_SpatializationPluginSettings_Offset == 0xc0, "FSoundAttenuationSettings::SpatializationPluginSettings offset is not c0");
	auto constexpr FSoundAttenuationSettings_RadiusMin_Offset = offsetof(FSoundAttenuationSettings, RadiusMin);
	static_assert(FSoundAttenuationSettings_RadiusMin_Offset == 0xc8, "FSoundAttenuationSettings::RadiusMin offset is not c8");
	auto constexpr FSoundAttenuationSettings_RadiusMax_Offset = offsetof(FSoundAttenuationSettings, RadiusMax);
	static_assert(FSoundAttenuationSettings_RadiusMax_Offset == 0xcc, "FSoundAttenuationSettings::RadiusMax offset is not cc");
	auto constexpr FSoundAttenuationSettings_LPFRadiusMin_Offset = offsetof(FSoundAttenuationSettings, LPFRadiusMin);
	static_assert(FSoundAttenuationSettings_LPFRadiusMin_Offset == 0xd0, "FSoundAttenuationSettings::LPFRadiusMin offset is not d0");
	auto constexpr FSoundAttenuationSettings_LPFRadiusMax_Offset = offsetof(FSoundAttenuationSettings, LPFRadiusMax);
	static_assert(FSoundAttenuationSettings_LPFRadiusMax_Offset == 0xd4, "FSoundAttenuationSettings::LPFRadiusMax offset is not d4");
	auto constexpr FSoundAttenuationSettings_LPFFrequencyAtMin_Offset = offsetof(FSoundAttenuationSettings, LPFFrequencyAtMin);
	static_assert(FSoundAttenuationSettings_LPFFrequencyAtMin_Offset == 0xd8, "FSoundAttenuationSettings::LPFFrequencyAtMin offset is not d8");
	auto constexpr FSoundAttenuationSettings_LPFFrequencyAtMax_Offset = offsetof(FSoundAttenuationSettings, LPFFrequencyAtMax);
	static_assert(FSoundAttenuationSettings_LPFFrequencyAtMax_Offset == 0xdc, "FSoundAttenuationSettings::LPFFrequencyAtMax offset is not dc");
	auto constexpr FSoundAttenuationSettings_FocusAzimuth_Offset = offsetof(FSoundAttenuationSettings, FocusAzimuth);
	static_assert(FSoundAttenuationSettings_FocusAzimuth_Offset == 0xe0, "FSoundAttenuationSettings::FocusAzimuth offset is not e0");
	auto constexpr FSoundAttenuationSettings_NonFocusAzimuth_Offset = offsetof(FSoundAttenuationSettings, NonFocusAzimuth);
	static_assert(FSoundAttenuationSettings_NonFocusAzimuth_Offset == 0xe4, "FSoundAttenuationSettings::NonFocusAzimuth offset is not e4");
	auto constexpr FSoundAttenuationSettings_FocusDistanceScale_Offset = offsetof(FSoundAttenuationSettings, FocusDistanceScale);
	static_assert(FSoundAttenuationSettings_FocusDistanceScale_Offset == 0xe8, "FSoundAttenuationSettings::FocusDistanceScale offset is not e8");
	auto constexpr FSoundAttenuationSettings_NonFocusDistanceScale_Offset = offsetof(FSoundAttenuationSettings, NonFocusDistanceScale);
	static_assert(FSoundAttenuationSettings_NonFocusDistanceScale_Offset == 0xec, "FSoundAttenuationSettings::NonFocusDistanceScale offset is not ec");
	auto constexpr FSoundAttenuationSettings_FocusPriorityScale_Offset = offsetof(FSoundAttenuationSettings, FocusPriorityScale);
	static_assert(FSoundAttenuationSettings_FocusPriorityScale_Offset == 0xf0, "FSoundAttenuationSettings::FocusPriorityScale offset is not f0");
	auto constexpr FSoundAttenuationSettings_NonFocusPriorityScale_Offset = offsetof(FSoundAttenuationSettings, NonFocusPriorityScale);
	static_assert(FSoundAttenuationSettings_NonFocusPriorityScale_Offset == 0xf4, "FSoundAttenuationSettings::NonFocusPriorityScale offset is not f4");
	auto constexpr FSoundAttenuationSettings_FocusVolumeAttenuation_Offset = offsetof(FSoundAttenuationSettings, FocusVolumeAttenuation);
	static_assert(FSoundAttenuationSettings_FocusVolumeAttenuation_Offset == 0xf8, "FSoundAttenuationSettings::FocusVolumeAttenuation offset is not f8");
	auto constexpr FSoundAttenuationSettings_NonFocusVolumeAttenuation_Offset = offsetof(FSoundAttenuationSettings, NonFocusVolumeAttenuation);
	static_assert(FSoundAttenuationSettings_NonFocusVolumeAttenuation_Offset == 0xfc, "FSoundAttenuationSettings::NonFocusVolumeAttenuation offset is not fc");
	auto constexpr FSoundAttenuationSettings_OcclusionTraceChannel_Offset = offsetof(FSoundAttenuationSettings, OcclusionTraceChannel);
	static_assert(FSoundAttenuationSettings_OcclusionTraceChannel_Offset == 0x100, "FSoundAttenuationSettings::OcclusionTraceChannel offset is not 100");
	auto constexpr FSoundAttenuationSettings_OcclusionLowPassFilterFrequency_Offset = offsetof(FSoundAttenuationSettings, OcclusionLowPassFilterFrequency);
	static_assert(FSoundAttenuationSettings_OcclusionLowPassFilterFrequency_Offset == 0x104, "FSoundAttenuationSettings::OcclusionLowPassFilterFrequency offset is not 104");
	auto constexpr FSoundAttenuationSettings_OcclusionVolumeAttenuation_Offset = offsetof(FSoundAttenuationSettings, OcclusionVolumeAttenuation);
	static_assert(FSoundAttenuationSettings_OcclusionVolumeAttenuation_Offset == 0x108, "FSoundAttenuationSettings::OcclusionVolumeAttenuation offset is not 108");
	auto constexpr FSoundAttenuationSettings_OcclusionInterpolationTime_Offset = offsetof(FSoundAttenuationSettings, OcclusionInterpolationTime);
	static_assert(FSoundAttenuationSettings_OcclusionInterpolationTime_Offset == 0x10c, "FSoundAttenuationSettings::OcclusionInterpolationTime offset is not 10c");
	auto constexpr FSoundAttenuationSettings_OcclusionPluginSettings_Offset = offsetof(FSoundAttenuationSettings, OcclusionPluginSettings);
	static_assert(FSoundAttenuationSettings_OcclusionPluginSettings_Offset == 0x110, "FSoundAttenuationSettings::OcclusionPluginSettings offset is not 110");
	auto constexpr FSoundAttenuationSettings_ReverbPluginSettings_Offset = offsetof(FSoundAttenuationSettings, ReverbPluginSettings);
	static_assert(FSoundAttenuationSettings_ReverbPluginSettings_Offset == 0x118, "FSoundAttenuationSettings::ReverbPluginSettings offset is not 118");
	auto constexpr FSoundAttenuationSettings_ReverbWetLevelMin_Offset = offsetof(FSoundAttenuationSettings, ReverbWetLevelMin);
	static_assert(FSoundAttenuationSettings_ReverbWetLevelMin_Offset == 0x120, "FSoundAttenuationSettings::ReverbWetLevelMin offset is not 120");
	auto constexpr FSoundAttenuationSettings_ReverbWetLevelMax_Offset = offsetof(FSoundAttenuationSettings, ReverbWetLevelMax);
	static_assert(FSoundAttenuationSettings_ReverbWetLevelMax_Offset == 0x124, "FSoundAttenuationSettings::ReverbWetLevelMax offset is not 124");
	auto constexpr FSoundAttenuationSettings_ReverbDistanceMin_Offset = offsetof(FSoundAttenuationSettings, ReverbDistanceMin);
	static_assert(FSoundAttenuationSettings_ReverbDistanceMin_Offset == 0x128, "FSoundAttenuationSettings::ReverbDistanceMin offset is not 128");
	auto constexpr FSoundAttenuationSettings_ReverbDistanceMax_Offset = offsetof(FSoundAttenuationSettings, ReverbDistanceMax);
	static_assert(FSoundAttenuationSettings_ReverbDistanceMax_Offset == 0x12c, "FSoundAttenuationSettings::ReverbDistanceMax offset is not 12c");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
