#pragma once
#include "EReactionType.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FPointDamageReactionData // Size: 0x10
{
public:
    TEnumAsByte<enum EReactionType> ReactionType; /* Ofs: 0x0 Size: 0x1 EnumProperty TslGame.PointDamageReactionData.ReactionType */
    uint8_t UnknownData1[0x3];
    float ReactionForceFactor; /* Ofs: 0x4 Size: 0x4 FloatProperty TslGame.PointDamageReactionData.ReactionForceFactor */
    float ReactionMinDamage; /* Ofs: 0x8 Size: 0x4 FloatProperty TslGame.PointDamageReactionData.ReactionMinDamage */
    float DamageAccumulateTimeout; /* Ofs: 0xC Size: 0x4 FloatProperty TslGame.PointDamageReactionData.DamageAccumulateTimeout */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFPointDamageReactionData = sizeof(FPointDamageReactionData); // 16
    static_assert(sizeof(FPointDamageReactionData) == 0x10, "Size of FPointDamageReactionData is not correct.");
	auto constexpr FPointDamageReactionData_ReactionType_Offset = offsetof(FPointDamageReactionData, ReactionType);
	static_assert(FPointDamageReactionData_ReactionType_Offset == 0x0, "FPointDamageReactionData::ReactionType offset is not 0");
	auto constexpr FPointDamageReactionData_ReactionForceFactor_Offset = offsetof(FPointDamageReactionData, ReactionForceFactor);
	static_assert(FPointDamageReactionData_ReactionForceFactor_Offset == 0x4, "FPointDamageReactionData::ReactionForceFactor offset is not 4");
	auto constexpr FPointDamageReactionData_ReactionMinDamage_Offset = offsetof(FPointDamageReactionData, ReactionMinDamage);
	static_assert(FPointDamageReactionData_ReactionMinDamage_Offset == 0x8, "FPointDamageReactionData::ReactionMinDamage offset is not 8");
	auto constexpr FPointDamageReactionData_DamageAccumulateTimeout_Offset = offsetof(FPointDamageReactionData, DamageAccumulateTimeout);
	static_assert(FPointDamageReactionData_DamageAccumulateTimeout_Offset == 0xc, "FPointDamageReactionData::DamageAccumulateTimeout offset is not c");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
