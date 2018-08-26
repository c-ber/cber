#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FSubmixEffectEQBand // Size: 0x10
{
public:
    float Frequency; /* Ofs: 0x0 Size: 0x4 FloatProperty AudioMixer.SubmixEffectEQBand.Frequency */
    float Bandwidth; /* Ofs: 0x4 Size: 0x4 FloatProperty AudioMixer.SubmixEffectEQBand.Bandwidth */
    float GainDb; /* Ofs: 0x8 Size: 0x4 FloatProperty AudioMixer.SubmixEffectEQBand.GainDb */
    bool bEnabled; /* Ofs: 0xC Size: 0x1 BitMask: 01 BoolProperty AudioMixer.SubmixEffectEQBand.bEnabled */
    uint8_t UnknownDataD[0x3];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFSubmixEffectEQBand = sizeof(FSubmixEffectEQBand); // 16
    static_assert(sizeof(FSubmixEffectEQBand) == 0x10, "Size of FSubmixEffectEQBand is not correct.");
	auto constexpr FSubmixEffectEQBand_Frequency_Offset = offsetof(FSubmixEffectEQBand, Frequency);
	static_assert(FSubmixEffectEQBand_Frequency_Offset == 0x0, "FSubmixEffectEQBand::Frequency offset is not 0");
	auto constexpr FSubmixEffectEQBand_Bandwidth_Offset = offsetof(FSubmixEffectEQBand, Bandwidth);
	static_assert(FSubmixEffectEQBand_Bandwidth_Offset == 0x4, "FSubmixEffectEQBand::Bandwidth offset is not 4");
	auto constexpr FSubmixEffectEQBand_GainDb_Offset = offsetof(FSubmixEffectEQBand, GainDb);
	static_assert(FSubmixEffectEQBand_GainDb_Offset == 0x8, "FSubmixEffectEQBand::GainDb offset is not 8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
