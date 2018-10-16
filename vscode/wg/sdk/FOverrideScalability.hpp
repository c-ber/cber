#pragma once
#include "EQualityType.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FOverrideScalability // Size: 0x18
{
public:
    TEnumAsByte<enum EQualityType> QualityType; /* Ofs: 0x0 Size: 0x1 EnumProperty TslGame.OverrideScalability.QualityType */
    uint8_t UnknownData1[0x7];
    TArray<struct FOverrideScalabilityValue> OverrideScalabilityValues; /* Ofs: 0x8 Size: 0x10 ArrayProperty TslGame.OverrideScalability.OverrideScalabilityValues */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFOverrideScalability = sizeof(FOverrideScalability); // 24
    static_assert(sizeof(FOverrideScalability) == 0x18, "Size of FOverrideScalability is not correct.");
	auto constexpr FOverrideScalability_QualityType_Offset = offsetof(FOverrideScalability, QualityType);
	static_assert(FOverrideScalability_QualityType_Offset == 0x0, "FOverrideScalability::QualityType offset is not 0");
	auto constexpr FOverrideScalability_OverrideScalabilityValues_Offset = offsetof(FOverrideScalability, OverrideScalabilityValues);
	static_assert(FOverrideScalability_OverrideScalabilityValues_Offset == 0x8, "FOverrideScalability::OverrideScalabilityValues offset is not 8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
