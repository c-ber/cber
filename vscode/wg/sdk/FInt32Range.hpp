#pragma once
#include "FInt32RangeBound.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FInt32Range // Size: 0x10
{
public:
    FInt32RangeBound LowerBound; /* Ofs: 0x0 Size: 0x8 StructProperty CoreUObject.Int32Range.LowerBound */
    FInt32RangeBound UpperBound; /* Ofs: 0x8 Size: 0x8 StructProperty CoreUObject.Int32Range.UpperBound */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFInt32Range = sizeof(FInt32Range); // 16
    static_assert(sizeof(FInt32Range) == 0x10, "Size of FInt32Range is not correct.");
	auto constexpr FInt32Range_LowerBound_Offset = offsetof(FInt32Range, LowerBound);
	static_assert(FInt32Range_LowerBound_Offset == 0x0, "FInt32Range::LowerBound offset is not 0");
	auto constexpr FInt32Range_UpperBound_Offset = offsetof(FInt32Range, UpperBound);
	static_assert(FInt32Range_UpperBound_Offset == 0x8, "FInt32Range::UpperBound offset is not 8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
