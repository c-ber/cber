#pragma once
#include "FFloatRangeBound.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FFloatRange // Size: 0x10
{
public:
    FFloatRangeBound LowerBound; /* Ofs: 0x0 Size: 0x8 StructProperty CoreUObject.FloatRange.LowerBound */
    FFloatRangeBound UpperBound; /* Ofs: 0x8 Size: 0x8 StructProperty CoreUObject.FloatRange.UpperBound */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFFloatRange = sizeof(FFloatRange); // 16
    static_assert(sizeof(FFloatRange) == 0x10, "Size of FFloatRange is not correct.");
	auto constexpr FFloatRange_LowerBound_Offset = offsetof(FFloatRange, LowerBound);
	static_assert(FFloatRange_LowerBound_Offset == 0x0, "FFloatRange::LowerBound offset is not 0");
	auto constexpr FFloatRange_UpperBound_Offset = offsetof(FFloatRange, UpperBound);
	static_assert(FFloatRange_UpperBound_Offset == 0x8, "FFloatRange::UpperBound offset is not 8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
