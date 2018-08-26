#pragma once
#include "FVector.hpp"
#include "EVaultAnimType.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FVaultingHandleResult // Size: 0x40
{
public:
    FVector Start; /* Ofs: 0x0 Size: 0xC StructProperty TslGame.VaultingHandleResult.Start */
    FVector End; /* Ofs: 0xC Size: 0xC StructProperty TslGame.VaultingHandleResult.End */
    FVector Apex; /* Ofs: 0x18 Size: 0xC StructProperty TslGame.VaultingHandleResult.Apex */
    FVector ApexAdditive; /* Ofs: 0x24 Size: 0xC StructProperty TslGame.VaultingHandleResult.ApexAdditive */
    float Direction; /* Ofs: 0x30 Size: 0x4 FloatProperty TslGame.VaultingHandleResult.Direction */
    float PlayerSpeed2D; /* Ofs: 0x34 Size: 0x4 FloatProperty TslGame.VaultingHandleResult.PlayerSpeed2D */
    float DistanceFromObject; /* Ofs: 0x38 Size: 0x4 FloatProperty TslGame.VaultingHandleResult.DistanceFromObject */
    TEnumAsByte<enum EVaultAnimType> VaultType; /* Ofs: 0x3C Size: 0x1 EnumProperty TslGame.VaultingHandleResult.VaultType */
    bool bIsPassed : 1; /* Ofs: 0x3D Size: 0x1 BitMask: 01 BoolProperty TslGame.VaultingHandleResult.bIsPassed */
    bool bIsClimbing : 1; /* Ofs: 0x3D Size: 0x1 BitMask: 02 BoolProperty TslGame.VaultingHandleResult.bIsClimbing */
    bool bIsEndToFall : 1; /* Ofs: 0x3D Size: 0x1 BitMask: 04 BoolProperty TslGame.VaultingHandleResult.bIsEndToFall */
    uint8_t UnknownData3E[0x2];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFVaultingHandleResult = sizeof(FVaultingHandleResult); // 64
    static_assert(sizeof(FVaultingHandleResult) == 0x40, "Size of FVaultingHandleResult is not correct.");
	auto constexpr FVaultingHandleResult_Start_Offset = offsetof(FVaultingHandleResult, Start);
	static_assert(FVaultingHandleResult_Start_Offset == 0x0, "FVaultingHandleResult::Start offset is not 0");
	auto constexpr FVaultingHandleResult_End_Offset = offsetof(FVaultingHandleResult, End);
	static_assert(FVaultingHandleResult_End_Offset == 0xc, "FVaultingHandleResult::End offset is not c");
	auto constexpr FVaultingHandleResult_Apex_Offset = offsetof(FVaultingHandleResult, Apex);
	static_assert(FVaultingHandleResult_Apex_Offset == 0x18, "FVaultingHandleResult::Apex offset is not 18");
	auto constexpr FVaultingHandleResult_ApexAdditive_Offset = offsetof(FVaultingHandleResult, ApexAdditive);
	static_assert(FVaultingHandleResult_ApexAdditive_Offset == 0x24, "FVaultingHandleResult::ApexAdditive offset is not 24");
	auto constexpr FVaultingHandleResult_Direction_Offset = offsetof(FVaultingHandleResult, Direction);
	static_assert(FVaultingHandleResult_Direction_Offset == 0x30, "FVaultingHandleResult::Direction offset is not 30");
	auto constexpr FVaultingHandleResult_PlayerSpeed2D_Offset = offsetof(FVaultingHandleResult, PlayerSpeed2D);
	static_assert(FVaultingHandleResult_PlayerSpeed2D_Offset == 0x34, "FVaultingHandleResult::PlayerSpeed2D offset is not 34");
	auto constexpr FVaultingHandleResult_DistanceFromObject_Offset = offsetof(FVaultingHandleResult, DistanceFromObject);
	static_assert(FVaultingHandleResult_DistanceFromObject_Offset == 0x38, "FVaultingHandleResult::DistanceFromObject offset is not 38");
	auto constexpr FVaultingHandleResult_VaultType_Offset = offsetof(FVaultingHandleResult, VaultType);
	static_assert(FVaultingHandleResult_VaultType_Offset == 0x3c, "FVaultingHandleResult::VaultType offset is not 3c");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
