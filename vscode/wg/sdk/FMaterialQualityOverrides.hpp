#pragma once
#include "EMobileCSMQuality.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FMaterialQualityOverrides // Size: 0x6
{
public:
    bool bEnableOverride; /* Ofs: 0x0 Size: 0x1 BitMask: 01 BoolProperty MaterialShaderQualitySettings.MaterialQualityOverrides.bEnableOverride */
    bool bForceFullyRough; /* Ofs: 0x1 Size: 0x1 BitMask: 01 BoolProperty MaterialShaderQualitySettings.MaterialQualityOverrides.bForceFullyRough */
    bool bForceNonMetal; /* Ofs: 0x2 Size: 0x1 BitMask: 01 BoolProperty MaterialShaderQualitySettings.MaterialQualityOverrides.bForceNonMetal */
    bool bForceDisableLMDirectionality; /* Ofs: 0x3 Size: 0x1 BitMask: 01 BoolProperty MaterialShaderQualitySettings.MaterialQualityOverrides.bForceDisableLMDirectionality */
    bool bForceLQReflections; /* Ofs: 0x4 Size: 0x1 BitMask: 01 BoolProperty MaterialShaderQualitySettings.MaterialQualityOverrides.bForceLQReflections */
    TEnumAsByte<enum EMobileCSMQuality> MobileCSMQuality; /* Ofs: 0x5 Size: 0x1 EnumProperty MaterialShaderQualitySettings.MaterialQualityOverrides.MobileCSMQuality */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFMaterialQualityOverrides = sizeof(FMaterialQualityOverrides); // 6
    static_assert(sizeof(FMaterialQualityOverrides) == 0x6, "Size of FMaterialQualityOverrides is not correct.");
	auto constexpr FMaterialQualityOverrides_MobileCSMQuality_Offset = offsetof(FMaterialQualityOverrides, MobileCSMQuality);
	static_assert(FMaterialQualityOverrides_MobileCSMQuality_Offset == 0x5, "FMaterialQualityOverrides::MobileCSMQuality offset is not 5");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
