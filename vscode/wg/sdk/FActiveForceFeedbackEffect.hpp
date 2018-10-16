#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FActiveForceFeedbackEffect // Size: 0x18
{
public:
    ExternalPtr<struct UForceFeedbackEffect> ForceFeedbackEffect; /* Ofs: 0x0 Size: 0x8 ObjectProperty Engine.ActiveForceFeedbackEffect.ForceFeedbackEffect */
    uint8_t UnknownData8[0x10];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFActiveForceFeedbackEffect = sizeof(FActiveForceFeedbackEffect); // 24
    static_assert(sizeof(FActiveForceFeedbackEffect) == 0x18, "Size of FActiveForceFeedbackEffect is not correct.");
	auto constexpr FActiveForceFeedbackEffect_ForceFeedbackEffect_Offset = offsetof(FActiveForceFeedbackEffect, ForceFeedbackEffect);
	static_assert(FActiveForceFeedbackEffect_ForceFeedbackEffect_Offset == 0x0, "FActiveForceFeedbackEffect::ForceFeedbackEffect offset is not 0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
