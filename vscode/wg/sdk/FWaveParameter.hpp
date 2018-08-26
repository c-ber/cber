#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FWaveParameter // Size: 0x14
{
public:
    float Rotation; /* Ofs: 0x0 Size: 0x4 FloatProperty OceanPlugin.WaveParameter.Rotation */
    float Length; /* Ofs: 0x4 Size: 0x4 FloatProperty OceanPlugin.WaveParameter.Length */
    float Amplitude; /* Ofs: 0x8 Size: 0x4 FloatProperty OceanPlugin.WaveParameter.Amplitude */
    float Steepness; /* Ofs: 0xC Size: 0x4 FloatProperty OceanPlugin.WaveParameter.Steepness */
    float TimeScale; /* Ofs: 0x10 Size: 0x4 FloatProperty OceanPlugin.WaveParameter.TimeScale */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFWaveParameter = sizeof(FWaveParameter); // 20
    static_assert(sizeof(FWaveParameter) == 0x14, "Size of FWaveParameter is not correct.");
	auto constexpr FWaveParameter_Rotation_Offset = offsetof(FWaveParameter, Rotation);
	static_assert(FWaveParameter_Rotation_Offset == 0x0, "FWaveParameter::Rotation offset is not 0");
	auto constexpr FWaveParameter_Length_Offset = offsetof(FWaveParameter, Length);
	static_assert(FWaveParameter_Length_Offset == 0x4, "FWaveParameter::Length offset is not 4");
	auto constexpr FWaveParameter_Amplitude_Offset = offsetof(FWaveParameter, Amplitude);
	static_assert(FWaveParameter_Amplitude_Offset == 0x8, "FWaveParameter::Amplitude offset is not 8");
	auto constexpr FWaveParameter_Steepness_Offset = offsetof(FWaveParameter, Steepness);
	static_assert(FWaveParameter_Steepness_Offset == 0xc, "FWaveParameter::Steepness offset is not c");
	auto constexpr FWaveParameter_TimeScale_Offset = offsetof(FWaveParameter, TimeScale);
	static_assert(FWaveParameter_TimeScale_Offset == 0x10, "FWaveParameter::TimeScale offset is not 10");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
