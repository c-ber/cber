#pragma once
#include "FVector.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FBlendSample // Size: 0x18
{
public:
    ExternalPtr<struct UAnimSequence> Animation; /* Ofs: 0x0 Size: 0x8 ObjectProperty Engine.BlendSample.Animation */
    FVector SampleValue; /* Ofs: 0x8 Size: 0xC StructProperty Engine.BlendSample.SampleValue */
    float RateScale; /* Ofs: 0x14 Size: 0x4 FloatProperty Engine.BlendSample.RateScale */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFBlendSample = sizeof(FBlendSample); // 24
    static_assert(sizeof(FBlendSample) == 0x18, "Size of FBlendSample is not correct.");
	auto constexpr FBlendSample_Animation_Offset = offsetof(FBlendSample, Animation);
	static_assert(FBlendSample_Animation_Offset == 0x0, "FBlendSample::Animation offset is not 0");
	auto constexpr FBlendSample_SampleValue_Offset = offsetof(FBlendSample, SampleValue);
	static_assert(FBlendSample_SampleValue_Offset == 0x8, "FBlendSample::SampleValue offset is not 8");
	auto constexpr FBlendSample_RateScale_Offset = offsetof(FBlendSample, RateScale);
	static_assert(FBlendSample_RateScale_Offset == 0x14, "FBlendSample::RateScale offset is not 14");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
