#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FActiveHapticFeedbackEffect // Size: 0x18
{
public:
    ExternalPtr<struct UHapticFeedbackEffect_Base> HapticEffect; /* Ofs: 0x0 Size: 0x8 ObjectProperty Engine.ActiveHapticFeedbackEffect.HapticEffect */
    uint8_t UnknownData8[0x10];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFActiveHapticFeedbackEffect = sizeof(FActiveHapticFeedbackEffect); // 24
    static_assert(sizeof(FActiveHapticFeedbackEffect) == 0x18, "Size of FActiveHapticFeedbackEffect is not correct.");
	auto constexpr FActiveHapticFeedbackEffect_HapticEffect_Offset = offsetof(FActiveHapticFeedbackEffect, HapticEffect);
	static_assert(FActiveHapticFeedbackEffect_HapticEffect_Offset == 0x0, "FActiveHapticFeedbackEffect::HapticEffect offset is not 0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
