#pragma once
#include "FDistributionLookupTable.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FVectorDistribution // Size: 0x28
{
public:
    FDistributionLookupTable Table; /* Ofs: 0x0 Size: 0x28 StructProperty Engine.VectorDistribution.Table */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFVectorDistribution = sizeof(FVectorDistribution); // 40
    static_assert(sizeof(FVectorDistribution) == 0x28, "Size of FVectorDistribution is not correct.");
	auto constexpr FVectorDistribution_Table_Offset = offsetof(FVectorDistribution, Table);
	static_assert(FVectorDistribution_Table_Offset == 0x0, "FVectorDistribution::Table offset is not 0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
