#pragma once
#include "FBoneReference.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FPerBoneInterpolation // Size: 0x20
{
public:
    FBoneReference BoneReference; /* Ofs: 0x0 Size: 0x18 StructProperty Engine.PerBoneInterpolation.BoneReference */
    float InterpolationSpeedPerSec; /* Ofs: 0x18 Size: 0x4 FloatProperty Engine.PerBoneInterpolation.InterpolationSpeedPerSec */
    uint8_t UnknownData1C[0x4];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFPerBoneInterpolation = sizeof(FPerBoneInterpolation); // 32
    static_assert(sizeof(FPerBoneInterpolation) == 0x20, "Size of FPerBoneInterpolation is not correct.");
	auto constexpr FPerBoneInterpolation_BoneReference_Offset = offsetof(FPerBoneInterpolation, BoneReference);
	static_assert(FPerBoneInterpolation_BoneReference_Offset == 0x0, "FPerBoneInterpolation::BoneReference offset is not 0");
	auto constexpr FPerBoneInterpolation_InterpolationSpeedPerSec_Offset = offsetof(FPerBoneInterpolation, InterpolationSpeedPerSec);
	static_assert(FPerBoneInterpolation_InterpolationSpeedPerSec_Offset == 0x18, "FPerBoneInterpolation::InterpolationSpeedPerSec offset is not 18");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
