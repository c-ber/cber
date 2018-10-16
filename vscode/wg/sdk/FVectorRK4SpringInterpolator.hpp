#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FVectorRK4SpringInterpolator // Size: 0x8
{
public:
    float StiffnessConstant; /* Ofs: 0x0 Size: 0x4 FloatProperty Engine.VectorRK4SpringInterpolator.StiffnessConstant */
    float DampeningRatio; /* Ofs: 0x4 Size: 0x4 FloatProperty Engine.VectorRK4SpringInterpolator.DampeningRatio */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFVectorRK4SpringInterpolator = sizeof(FVectorRK4SpringInterpolator); // 8
    static_assert(sizeof(FVectorRK4SpringInterpolator) == 0x8, "Size of FVectorRK4SpringInterpolator is not correct.");
	auto constexpr FVectorRK4SpringInterpolator_StiffnessConstant_Offset = offsetof(FVectorRK4SpringInterpolator, StiffnessConstant);
	static_assert(FVectorRK4SpringInterpolator_StiffnessConstant_Offset == 0x0, "FVectorRK4SpringInterpolator::StiffnessConstant offset is not 0");
	auto constexpr FVectorRK4SpringInterpolator_DampeningRatio_Offset = offsetof(FVectorRK4SpringInterpolator, DampeningRatio);
	static_assert(FVectorRK4SpringInterpolator_DampeningRatio_Offset == 0x4, "FVectorRK4SpringInterpolator::DampeningRatio offset is not 4");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
