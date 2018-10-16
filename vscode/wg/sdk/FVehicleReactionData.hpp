#pragma once
#include "EReactionType.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FVehicleReactionData // Size: 0xC
{
public:
    TEnumAsByte<enum EReactionType> ReactionType; /* Ofs: 0x0 Size: 0x1 EnumProperty TslGame.VehicleReactionData.ReactionType */
    uint8_t UnknownData1[0x3];
    float ReactionForceFactor; /* Ofs: 0x4 Size: 0x4 FloatProperty TslGame.VehicleReactionData.ReactionForceFactor */
    float ReactionMinSpeed; /* Ofs: 0x8 Size: 0x4 FloatProperty TslGame.VehicleReactionData.ReactionMinSpeed */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFVehicleReactionData = sizeof(FVehicleReactionData); // 12
    static_assert(sizeof(FVehicleReactionData) == 0xC, "Size of FVehicleReactionData is not correct.");
	auto constexpr FVehicleReactionData_ReactionType_Offset = offsetof(FVehicleReactionData, ReactionType);
	static_assert(FVehicleReactionData_ReactionType_Offset == 0x0, "FVehicleReactionData::ReactionType offset is not 0");
	auto constexpr FVehicleReactionData_ReactionForceFactor_Offset = offsetof(FVehicleReactionData, ReactionForceFactor);
	static_assert(FVehicleReactionData_ReactionForceFactor_Offset == 0x4, "FVehicleReactionData::ReactionForceFactor offset is not 4");
	auto constexpr FVehicleReactionData_ReactionMinSpeed_Offset = offsetof(FVehicleReactionData, ReactionMinSpeed);
	static_assert(FVehicleReactionData_ReactionMinSpeed_Offset == 0x8, "FVehicleReactionData::ReactionMinSpeed offset is not 8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
