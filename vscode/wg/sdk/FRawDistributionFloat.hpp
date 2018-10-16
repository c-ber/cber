#pragma once
#include "FRawDistribution.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FRawDistributionFloat // Size: 0x38
 : public FRawDistribution // Size: 0x28
{
public:
    float MinValue; /* Ofs: 0x28 Size: 0x4 FloatProperty Engine.RawDistributionFloat.MinValue */
    float MaxValue; /* Ofs: 0x2C Size: 0x4 FloatProperty Engine.RawDistributionFloat.MaxValue */
    ExternalPtr<struct UDistributionFloat> Distribution; /* Ofs: 0x30 Size: 0x8 ObjectProperty Engine.RawDistributionFloat.Distribution */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFRawDistributionFloat = sizeof(FRawDistributionFloat); // 56
    static_assert(sizeof(FRawDistributionFloat) == 0x38, "Size of FRawDistributionFloat is not correct.");
	auto constexpr FRawDistributionFloat_MinValue_Offset = offsetof(FRawDistributionFloat, MinValue);
	static_assert(FRawDistributionFloat_MinValue_Offset == 0x28, "FRawDistributionFloat::MinValue offset is not 28");
	auto constexpr FRawDistributionFloat_MaxValue_Offset = offsetof(FRawDistributionFloat, MaxValue);
	static_assert(FRawDistributionFloat_MaxValue_Offset == 0x2c, "FRawDistributionFloat::MaxValue offset is not 2c");
	auto constexpr FRawDistributionFloat_Distribution_Offset = offsetof(FRawDistributionFloat, Distribution);
	static_assert(FRawDistributionFloat_Distribution_Offset == 0x30, "FRawDistributionFloat::Distribution offset is not 30");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
