#pragma once
#include "FDistributionLookupTable.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FRawDistribution // Size: 0x28
{
public:
    FDistributionLookupTable Table; /* Ofs: 0x0 Size: 0x28 StructProperty Engine.RawDistribution.Table */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFRawDistribution = sizeof(FRawDistribution); // 40
    static_assert(sizeof(FRawDistribution) == 0x28, "Size of FRawDistribution is not correct.");
	auto constexpr FRawDistribution_Table_Offset = offsetof(FRawDistribution, Table);
	static_assert(FRawDistribution_Table_Offset == 0x0, "FRawDistribution::Table offset is not 0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
