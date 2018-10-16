#pragma once
#include "FVector.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FVaultingHandleInput // Size: 0x38
{
public:
    FVector ImpactLocation; /* Ofs: 0x0 Size: 0xC StructProperty TslGame.VaultingHandleInput.ImpactLocation */
    FVector CapsulePredictedLocation; /* Ofs: 0xC Size: 0xC StructProperty TslGame.VaultingHandleInput.CapsulePredictedLocation */
    FVector Normal2D; /* Ofs: 0x18 Size: 0xC StructProperty TslGame.VaultingHandleInput.Normal2D */
    FVector DirectionVector; /* Ofs: 0x24 Size: 0xC StructProperty TslGame.VaultingHandleInput.DirectionVector */
    float JumpDistance; /* Ofs: 0x30 Size: 0x4 FloatProperty TslGame.VaultingHandleInput.JumpDistance */
    bool bIsForceVault : 1; /* Ofs: 0x34 Size: 0x1 BitMask: 01 BoolProperty TslGame.VaultingHandleInput.bIsForceVault */
    bool bIsBlockVault : 1; /* Ofs: 0x34 Size: 0x1 BitMask: 02 BoolProperty TslGame.VaultingHandleInput.bIsBlockVault */
    bool bIsBlockClimb : 1; /* Ofs: 0x34 Size: 0x1 BitMask: 04 BoolProperty TslGame.VaultingHandleInput.bIsBlockClimb */
    uint8_t UnknownData35[0x3];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFVaultingHandleInput = sizeof(FVaultingHandleInput); // 56
    static_assert(sizeof(FVaultingHandleInput) == 0x38, "Size of FVaultingHandleInput is not correct.");
	auto constexpr FVaultingHandleInput_ImpactLocation_Offset = offsetof(FVaultingHandleInput, ImpactLocation);
	static_assert(FVaultingHandleInput_ImpactLocation_Offset == 0x0, "FVaultingHandleInput::ImpactLocation offset is not 0");
	auto constexpr FVaultingHandleInput_CapsulePredictedLocation_Offset = offsetof(FVaultingHandleInput, CapsulePredictedLocation);
	static_assert(FVaultingHandleInput_CapsulePredictedLocation_Offset == 0xc, "FVaultingHandleInput::CapsulePredictedLocation offset is not c");
	auto constexpr FVaultingHandleInput_Normal2D_Offset = offsetof(FVaultingHandleInput, Normal2D);
	static_assert(FVaultingHandleInput_Normal2D_Offset == 0x18, "FVaultingHandleInput::Normal2D offset is not 18");
	auto constexpr FVaultingHandleInput_DirectionVector_Offset = offsetof(FVaultingHandleInput, DirectionVector);
	static_assert(FVaultingHandleInput_DirectionVector_Offset == 0x24, "FVaultingHandleInput::DirectionVector offset is not 24");
	auto constexpr FVaultingHandleInput_JumpDistance_Offset = offsetof(FVaultingHandleInput, JumpDistance);
	static_assert(FVaultingHandleInput_JumpDistance_Offset == 0x30, "FVaultingHandleInput::JumpDistance offset is not 30");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
