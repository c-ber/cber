#pragma once
#include "EFilterInterpolationType.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FInterpolationParameter // Size: 0x8
{
public:
    float InterpolationTime; /* Ofs: 0x0 Size: 0x4 FloatProperty Engine.InterpolationParameter.InterpolationTime */
    TEnumAsByte<enum EFilterInterpolationType> InterpolationType; /* Ofs: 0x4 Size: 0x1 ByteProperty Engine.InterpolationParameter.InterpolationType */
    uint8_t UnknownData5[0x3];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFInterpolationParameter = sizeof(FInterpolationParameter); // 8
    static_assert(sizeof(FInterpolationParameter) == 0x8, "Size of FInterpolationParameter is not correct.");
	auto constexpr FInterpolationParameter_InterpolationTime_Offset = offsetof(FInterpolationParameter, InterpolationTime);
	static_assert(FInterpolationParameter_InterpolationTime_Offset == 0x0, "FInterpolationParameter::InterpolationTime offset is not 0");
	auto constexpr FInterpolationParameter_InterpolationType_Offset = offsetof(FInterpolationParameter, InterpolationType);
	static_assert(FInterpolationParameter_InterpolationType_Offset == 0x4, "FInterpolationParameter::InterpolationType offset is not 4");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
