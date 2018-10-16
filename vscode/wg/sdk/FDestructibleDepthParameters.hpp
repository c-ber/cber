#pragma once
#include "EImpactDamageOverride.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FDestructibleDepthParameters // Size: 0x1
{
public:
    TEnumAsByte<enum EImpactDamageOverride> ImpactDamageOverride; /* Ofs: 0x0 Size: 0x1 ByteProperty Engine.DestructibleDepthParameters.ImpactDamageOverride */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFDestructibleDepthParameters = sizeof(FDestructibleDepthParameters); // 1
    static_assert(sizeof(FDestructibleDepthParameters) == 0x1, "Size of FDestructibleDepthParameters is not correct.");
	auto constexpr FDestructibleDepthParameters_ImpactDamageOverride_Offset = offsetof(FDestructibleDepthParameters, ImpactDamageOverride);
	static_assert(FDestructibleDepthParameters_ImpactDamageOverride_Offset == 0x0, "FDestructibleDepthParameters::ImpactDamageOverride offset is not 0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
