#pragma once
#include "FDistributionLookupTable.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FFloatDistribution // Size: 0x28
{
public:
    FDistributionLookupTable Table; /* Ofs: 0x0 Size: 0x28 StructProperty Engine.FloatDistribution.Table */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFFloatDistribution = sizeof(FFloatDistribution); // 40
    static_assert(sizeof(FFloatDistribution) == 0x28, "Size of FFloatDistribution is not correct.");
	auto constexpr FFloatDistribution_Table_Offset = offsetof(FFloatDistribution, Table);
	static_assert(FFloatDistribution_Table_Offset == 0x0, "FFloatDistribution::Table offset is not 0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
