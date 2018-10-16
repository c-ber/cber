#pragma once
#include "FVector.hpp"
#include "EVaultAnimType.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FVaultingTask // Size: 0x40
{
public:
    FVector V_Start; /* Ofs: 0x0 Size: 0xC StructProperty TslGame.VaultingTask.V_Start */
    FVector V_Apex; /* Ofs: 0xC Size: 0xC StructProperty TslGame.VaultingTask.V_Apex */
    FVector V_ApexAdditive; /* Ofs: 0x18 Size: 0xC StructProperty TslGame.VaultingTask.V_ApexAdditive */
    FVector V_End; /* Ofs: 0x24 Size: 0xC StructProperty TslGame.VaultingTask.V_End */
    TEnumAsByte<enum EVaultAnimType> InVaultType; /* Ofs: 0x30 Size: 0x1 EnumProperty TslGame.VaultingTask.InVaultType */
    bool bEndToFall; /* Ofs: 0x31 Size: 0x1 BitMask: 01 BoolProperty TslGame.VaultingTask.bEndToFall */
    uint8_t UnknownData32[0x2];
    float Direction; /* Ofs: 0x34 Size: 0x4 FloatProperty TslGame.VaultingTask.Direction */
    float PlayerSpeed; /* Ofs: 0x38 Size: 0x4 FloatProperty TslGame.VaultingTask.PlayerSpeed */
    float DistanceFromObject; /* Ofs: 0x3C Size: 0x4 FloatProperty TslGame.VaultingTask.DistanceFromObject */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFVaultingTask = sizeof(FVaultingTask); // 64
    static_assert(sizeof(FVaultingTask) == 0x40, "Size of FVaultingTask is not correct.");
	auto constexpr FVaultingTask_V_Start_Offset = offsetof(FVaultingTask, V_Start);
	static_assert(FVaultingTask_V_Start_Offset == 0x0, "FVaultingTask::V_Start offset is not 0");
	auto constexpr FVaultingTask_V_Apex_Offset = offsetof(FVaultingTask, V_Apex);
	static_assert(FVaultingTask_V_Apex_Offset == 0xc, "FVaultingTask::V_Apex offset is not c");
	auto constexpr FVaultingTask_V_ApexAdditive_Offset = offsetof(FVaultingTask, V_ApexAdditive);
	static_assert(FVaultingTask_V_ApexAdditive_Offset == 0x18, "FVaultingTask::V_ApexAdditive offset is not 18");
	auto constexpr FVaultingTask_V_End_Offset = offsetof(FVaultingTask, V_End);
	static_assert(FVaultingTask_V_End_Offset == 0x24, "FVaultingTask::V_End offset is not 24");
	auto constexpr FVaultingTask_InVaultType_Offset = offsetof(FVaultingTask, InVaultType);
	static_assert(FVaultingTask_InVaultType_Offset == 0x30, "FVaultingTask::InVaultType offset is not 30");
	auto constexpr FVaultingTask_Direction_Offset = offsetof(FVaultingTask, Direction);
	static_assert(FVaultingTask_Direction_Offset == 0x34, "FVaultingTask::Direction offset is not 34");
	auto constexpr FVaultingTask_PlayerSpeed_Offset = offsetof(FVaultingTask, PlayerSpeed);
	static_assert(FVaultingTask_PlayerSpeed_Offset == 0x38, "FVaultingTask::PlayerSpeed offset is not 38");
	auto constexpr FVaultingTask_DistanceFromObject_Offset = offsetof(FVaultingTask, DistanceFromObject);
	static_assert(FVaultingTask_DistanceFromObject_Offset == 0x3c, "FVaultingTask::DistanceFromObject offset is not 3c");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
