#pragma once
#include "FRootMotionSource.hpp"
#include "FVector.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FRootMotionSource_ConstantForce // Size: 0xB0
 : public FRootMotionSource // Size: 0xA0
{
public:
//    FVector Force; /* Ofs: 0x98 Size: 0xC StructProperty Engine.RootMotionSource_ConstantForce.Force */
    uint8_t UnknownDataA0[0x8];
    ExternalPtr<struct UCurveFloat> StrengthOverTime; /* Ofs: 0xA8 Size: 0x8 ObjectProperty Engine.RootMotionSource_ConstantForce.StrengthOverTime */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFRootMotionSource_ConstantForce = sizeof(FRootMotionSource_ConstantForce); // 176
    static_assert(sizeof(FRootMotionSource_ConstantForce) == 0xB0, "Size of FRootMotionSource_ConstantForce is not correct.");
//	auto constexpr FRootMotionSource_ConstantForce_Force_Offset = offsetof(FRootMotionSource_ConstantForce, Force);
//	static_assert(FRootMotionSource_ConstantForce_Force_Offset == 0x98, "FRootMotionSource_ConstantForce::Force offset is not 98");
	auto constexpr FRootMotionSource_ConstantForce_StrengthOverTime_Offset = offsetof(FRootMotionSource_ConstantForce, StrengthOverTime);
	static_assert(FRootMotionSource_ConstantForce_StrengthOverTime_Offset == 0xa8, "FRootMotionSource_ConstantForce::StrengthOverTime offset is not a8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
