#pragma once
#include "FDestructibleDamageParameters.hpp"
#include "FDestructibleDebrisParameters.hpp"
#include "FDestructibleAdvancedParameters.hpp"
#include "FDestructibleSpecialHierarchyDepths.hpp"
#include "FDestructibleParametersFlag.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FDestructibleParameters // Size: 0x88
{
public:
    FDestructibleDamageParameters DamageParameters; /* Ofs: 0x0 Size: 0x1C StructProperty Engine.DestructibleParameters.DamageParameters */
    FDestructibleDebrisParameters DebrisParameters; /* Ofs: 0x1C Size: 0x2C StructProperty Engine.DestructibleParameters.DebrisParameters */
    FDestructibleAdvancedParameters AdvancedParameters; /* Ofs: 0x48 Size: 0x10 StructProperty Engine.DestructibleParameters.AdvancedParameters */
    FDestructibleSpecialHierarchyDepths SpecialHierarchyDepths; /* Ofs: 0x58 Size: 0x14 StructProperty Engine.DestructibleParameters.SpecialHierarchyDepths */
    uint8_t UnknownData6C[0x4];
    TArray<struct FDestructibleDepthParameters> DepthParameters; /* Ofs: 0x70 Size: 0x10 ArrayProperty Engine.DestructibleParameters.DepthParameters */
    FDestructibleParametersFlag Flags; /* Ofs: 0x80 Size: 0x4 StructProperty Engine.DestructibleParameters.Flags */
    uint8_t UnknownData84[0x4];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFDestructibleParameters = sizeof(FDestructibleParameters); // 136
    static_assert(sizeof(FDestructibleParameters) == 0x88, "Size of FDestructibleParameters is not correct.");
	auto constexpr FDestructibleParameters_DamageParameters_Offset = offsetof(FDestructibleParameters, DamageParameters);
	static_assert(FDestructibleParameters_DamageParameters_Offset == 0x0, "FDestructibleParameters::DamageParameters offset is not 0");
	auto constexpr FDestructibleParameters_DebrisParameters_Offset = offsetof(FDestructibleParameters, DebrisParameters);
	static_assert(FDestructibleParameters_DebrisParameters_Offset == 0x1c, "FDestructibleParameters::DebrisParameters offset is not 1c");
	auto constexpr FDestructibleParameters_AdvancedParameters_Offset = offsetof(FDestructibleParameters, AdvancedParameters);
	static_assert(FDestructibleParameters_AdvancedParameters_Offset == 0x48, "FDestructibleParameters::AdvancedParameters offset is not 48");
	auto constexpr FDestructibleParameters_SpecialHierarchyDepths_Offset = offsetof(FDestructibleParameters, SpecialHierarchyDepths);
	static_assert(FDestructibleParameters_SpecialHierarchyDepths_Offset == 0x58, "FDestructibleParameters::SpecialHierarchyDepths offset is not 58");
	auto constexpr FDestructibleParameters_DepthParameters_Offset = offsetof(FDestructibleParameters, DepthParameters);
	static_assert(FDestructibleParameters_DepthParameters_Offset == 0x70, "FDestructibleParameters::DepthParameters offset is not 70");
	auto constexpr FDestructibleParameters_Flags_Offset = offsetof(FDestructibleParameters, Flags);
	static_assert(FDestructibleParameters_Flags_Offset == 0x80, "FDestructibleParameters::Flags offset is not 80");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
