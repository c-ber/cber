#pragma once
#include "EInitialOscillatorOffset.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FFOscillator // Size: 0xC
{
public:
    float Amplitude; /* Ofs: 0x0 Size: 0x4 FloatProperty Engine.FOscillator.Amplitude */
    float Frequency; /* Ofs: 0x4 Size: 0x4 FloatProperty Engine.FOscillator.Frequency */
    TEnumAsByte<enum EInitialOscillatorOffset> InitialOffset; /* Ofs: 0x8 Size: 0x1 ByteProperty Engine.FOscillator.InitialOffset */
    uint8_t UnknownData9[0x3];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFFOscillator = sizeof(FFOscillator); // 12
    static_assert(sizeof(FFOscillator) == 0xC, "Size of FFOscillator is not correct.");
	auto constexpr FFOscillator_Amplitude_Offset = offsetof(FFOscillator, Amplitude);
	static_assert(FFOscillator_Amplitude_Offset == 0x0, "FFOscillator::Amplitude offset is not 0");
	auto constexpr FFOscillator_Frequency_Offset = offsetof(FFOscillator, Frequency);
	static_assert(FFOscillator_Frequency_Offset == 0x4, "FFOscillator::Frequency offset is not 4");
	auto constexpr FFOscillator_InitialOffset_Offset = offsetof(FFOscillator, InitialOffset);
	static_assert(FFOscillator_InitialOffset_Offset == 0x8, "FFOscillator::InitialOffset offset is not 8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
