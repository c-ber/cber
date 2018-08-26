#pragma once
#include "FVector.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FTwoVectors // Size: 0x18
{
public:
    FVector v1; /* Ofs: 0x0 Size: 0xC StructProperty CoreUObject.TwoVectors.v1 */
    FVector v2; /* Ofs: 0xC Size: 0xC StructProperty CoreUObject.TwoVectors.v2 */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFTwoVectors = sizeof(FTwoVectors); // 24
    static_assert(sizeof(FTwoVectors) == 0x18, "Size of FTwoVectors is not correct.");
	auto constexpr FTwoVectors_v1_Offset = offsetof(FTwoVectors, v1);
	static_assert(FTwoVectors_v1_Offset == 0x0, "FTwoVectors::v1 offset is not 0");
	auto constexpr FTwoVectors_v2_Offset = offsetof(FTwoVectors, v2);
	static_assert(FTwoVectors_v2_Offset == 0xc, "FTwoVectors::v2 offset is not c");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
