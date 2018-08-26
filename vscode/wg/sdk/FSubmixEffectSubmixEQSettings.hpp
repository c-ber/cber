#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FSubmixEffectSubmixEQSettings // Size: 0x10
{
public:
    TArray<struct FSubmixEffectEQBand> EQBands; /* Ofs: 0x0 Size: 0x10 ArrayProperty AudioMixer.SubmixEffectSubmixEQSettings.EQBands */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFSubmixEffectSubmixEQSettings = sizeof(FSubmixEffectSubmixEQSettings); // 16
    static_assert(sizeof(FSubmixEffectSubmixEQSettings) == 0x10, "Size of FSubmixEffectSubmixEQSettings is not correct.");
	auto constexpr FSubmixEffectSubmixEQSettings_EQBands_Offset = offsetof(FSubmixEffectSubmixEQSettings, EQBands);
	static_assert(FSubmixEffectSubmixEQSettings_EQBands_Offset == 0x0, "FSubmixEffectSubmixEQSettings::EQBands offset is not 0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
