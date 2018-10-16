#pragma once
#include "FRawDistribution.hpp"
#include "FVector.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FRawDistributionVector // Size: 0x50
 : public FRawDistribution // Size: 0x28
{
public:
    float MinValue; /* Ofs: 0x28 Size: 0x4 FloatProperty Engine.RawDistributionVector.MinValue */
    float MaxValue; /* Ofs: 0x2C Size: 0x4 FloatProperty Engine.RawDistributionVector.MaxValue */
    FVector MinValueVec; /* Ofs: 0x30 Size: 0xC StructProperty Engine.RawDistributionVector.MinValueVec */
    FVector MaxValueVec; /* Ofs: 0x3C Size: 0xC StructProperty Engine.RawDistributionVector.MaxValueVec */
    ExternalPtr<struct UDistributionVector> Distribution; /* Ofs: 0x48 Size: 0x8 ObjectProperty Engine.RawDistributionVector.Distribution */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFRawDistributionVector = sizeof(FRawDistributionVector); // 80
    static_assert(sizeof(FRawDistributionVector) == 0x50, "Size of FRawDistributionVector is not correct.");
	auto constexpr FRawDistributionVector_MinValue_Offset = offsetof(FRawDistributionVector, MinValue);
	static_assert(FRawDistributionVector_MinValue_Offset == 0x28, "FRawDistributionVector::MinValue offset is not 28");
	auto constexpr FRawDistributionVector_MaxValue_Offset = offsetof(FRawDistributionVector, MaxValue);
	static_assert(FRawDistributionVector_MaxValue_Offset == 0x2c, "FRawDistributionVector::MaxValue offset is not 2c");
	auto constexpr FRawDistributionVector_MinValueVec_Offset = offsetof(FRawDistributionVector, MinValueVec);
	static_assert(FRawDistributionVector_MinValueVec_Offset == 0x30, "FRawDistributionVector::MinValueVec offset is not 30");
	auto constexpr FRawDistributionVector_MaxValueVec_Offset = offsetof(FRawDistributionVector, MaxValueVec);
	static_assert(FRawDistributionVector_MaxValueVec_Offset == 0x3c, "FRawDistributionVector::MaxValueVec offset is not 3c");
	auto constexpr FRawDistributionVector_Distribution_Offset = offsetof(FRawDistributionVector, Distribution);
	static_assert(FRawDistributionVector_Distribution_Offset == 0x48, "FRawDistributionVector::Distribution offset is not 48");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
