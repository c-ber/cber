#pragma once
#include "FDistributionLookupTable.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FVector4Distribution // Size: 0x28
{
public:
    FDistributionLookupTable Table; /* Ofs: 0x0 Size: 0x28 StructProperty Engine.Vector4Distribution.Table */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFVector4Distribution = sizeof(FVector4Distribution); // 40
    static_assert(sizeof(FVector4Distribution) == 0x28, "Size of FVector4Distribution is not correct.");
	auto constexpr FVector4Distribution_Table_Offset = offsetof(FVector4Distribution, Table);
	static_assert(FVector4Distribution_Table_Offset == 0x0, "FVector4Distribution::Table offset is not 0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
