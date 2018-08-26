#pragma once
#include "EReactionType.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FRadialDamageReactionData // Size: 0xC
{
public:
    TEnumAsByte<enum EReactionType> ReactionType; /* Ofs: 0x0 Size: 0x1 EnumProperty TslGame.RadialDamageReactionData.ReactionType */
    uint8_t UnknownData1[0x3];
    float ReactionForceFactor; /* Ofs: 0x4 Size: 0x4 FloatProperty TslGame.RadialDamageReactionData.ReactionForceFactor */
    float ReactionMinDamage; /* Ofs: 0x8 Size: 0x4 FloatProperty TslGame.RadialDamageReactionData.ReactionMinDamage */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFRadialDamageReactionData = sizeof(FRadialDamageReactionData); // 12
    static_assert(sizeof(FRadialDamageReactionData) == 0xC, "Size of FRadialDamageReactionData is not correct.");
	auto constexpr FRadialDamageReactionData_ReactionType_Offset = offsetof(FRadialDamageReactionData, ReactionType);
	static_assert(FRadialDamageReactionData_ReactionType_Offset == 0x0, "FRadialDamageReactionData::ReactionType offset is not 0");
	auto constexpr FRadialDamageReactionData_ReactionForceFactor_Offset = offsetof(FRadialDamageReactionData, ReactionForceFactor);
	static_assert(FRadialDamageReactionData_ReactionForceFactor_Offset == 0x4, "FRadialDamageReactionData::ReactionForceFactor offset is not 4");
	auto constexpr FRadialDamageReactionData_ReactionMinDamage_Offset = offsetof(FRadialDamageReactionData, ReactionMinDamage);
	static_assert(FRadialDamageReactionData_ReactionMinDamage_Offset == 0x8, "FRadialDamageReactionData::ReactionMinDamage offset is not 8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
