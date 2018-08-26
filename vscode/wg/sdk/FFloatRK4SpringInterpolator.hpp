#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FFloatRK4SpringInterpolator // Size: 0x8
{
public:
    float StiffnessConstant; /* Ofs: 0x0 Size: 0x4 FloatProperty Engine.FloatRK4SpringInterpolator.StiffnessConstant */
    float DampeningRatio; /* Ofs: 0x4 Size: 0x4 FloatProperty Engine.FloatRK4SpringInterpolator.DampeningRatio */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFFloatRK4SpringInterpolator = sizeof(FFloatRK4SpringInterpolator); // 8
    static_assert(sizeof(FFloatRK4SpringInterpolator) == 0x8, "Size of FFloatRK4SpringInterpolator is not correct.");
	auto constexpr FFloatRK4SpringInterpolator_StiffnessConstant_Offset = offsetof(FFloatRK4SpringInterpolator, StiffnessConstant);
	static_assert(FFloatRK4SpringInterpolator_StiffnessConstant_Offset == 0x0, "FFloatRK4SpringInterpolator::StiffnessConstant offset is not 0");
	auto constexpr FFloatRK4SpringInterpolator_DampeningRatio_Offset = offsetof(FFloatRK4SpringInterpolator, DampeningRatio);
	static_assert(FFloatRK4SpringInterpolator_DampeningRatio_Offset == 0x4, "FFloatRK4SpringInterpolator::DampeningRatio offset is not 4");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
