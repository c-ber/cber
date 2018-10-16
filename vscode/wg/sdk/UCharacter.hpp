#pragma once
#include "UPawn.hpp"
#include "FBasedMovementInfo.hpp"
#include "FVector.hpp"
#include "FQuat.hpp"
#include "FRootMotionSourceGroup.hpp"
#include "FRootMotionMovementParams.hpp"
#include "FRepRootMotionMontage.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UCharacter // Size: 0x870
	: public UPawn // Size: 0x470
{
private:
	typedef UCharacter t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(651); // id32("Class Engine.Character")
		return ptr;
	}
	FBasedMovementInfo BasedMovement; /* Ofs: 0x470 Size: 0x30 - StructProperty Engine.Character.BasedMovement */
	EncryptedExternalPtr<struct UCharacterMovementComponent> CharacterMovement; /* Ofs: 0x4A0 Size: 0x10 - EncryptedObjectProperty Engine.Character.CharacterMovement */
	float AnimRootMotionTranslationScale; /* Ofs: 0x4B0 Size: 0x4 - FloatProperty Engine.Character.AnimRootMotionTranslationScale */
	uint8_t UnknownData4B4[0x4];
	FBasedMovementInfo ReplicatedBasedMovement; /* Ofs: 0x4B8 Size: 0x30 - StructProperty Engine.Character.ReplicatedBasedMovement */
	uint8_t UnknownData4E8[0x8];
	EncryptedExternalPtr<struct UCapsuleComponent> ProneCapsuleComponent; /* Ofs: 0x4F0 Size: 0x10 - EncryptedObjectProperty Engine.Character.ProneCapsuleComponent */
	int32_t JumpMaxCount; /* Ofs: 0x500 Size: 0x4 - IntProperty Engine.Character.JumpMaxCount */
	uint8_t boolField504;
	uint8_t UnknownData505[0x3];
	int32_t JumpCurrentCount; /* Ofs: 0x508 Size: 0x4 - IntProperty Engine.Character.JumpCurrentCount */
	FVector BaseTranslationOffset; /* Ofs: 0x50C Size: 0xC - StructProperty Engine.Character.BaseTranslationOffset */
	uint8_t UnknownData518[0x8];
	FQuat BaseRotationOffset; /* Ofs: 0x520 Size: 0x10 - StructProperty Engine.Character.BaseRotationOffset */
	float JumpMaxHoldTime; /* Ofs: 0x530 Size: 0x4 - FloatProperty Engine.Character.JumpMaxHoldTime */
	uint8_t boolField534;
	uint8_t boolField535;
	uint8_t UnknownData536[0x2];
	float CrouchedEyeHeight; /* Ofs: 0x538 Size: 0x4 - FloatProperty Engine.Character.CrouchedEyeHeight */
	uint8_t boolField53C;
	uint8_t UnknownData53D[0x3];
	uint8_t ReplicatedMovementMode; /* Ofs: 0x540 Size: 0x1 - ByteProperty Engine.Character.ReplicatedMovementMode */
	uint8_t UnknownData541[0x3];
	float JumpKeyHoldTime; /* Ofs: 0x544 Size: 0x4 - FloatProperty Engine.Character.JumpKeyHoldTime */
	float ReplicatedServerLastTransformUpdateTimeStamp; /* Ofs: 0x548 Size: 0x4 - FloatProperty Engine.Character.ReplicatedServerLastTransformUpdateTimeStamp */
	uint8_t UnknownData54C[0x4];
	ExternalPtr<struct USkeletalMeshComponent> Mesh; /* Ofs: 0x550 Size: 0x8 - ObjectProperty Engine.Character.Mesh */
	uint8_t UnknownData558[0x8];
	EncryptedExternalPtr<struct UCapsuleComponent> CapsuleComponent; /* Ofs: 0x560 Size: 0x10 - EncryptedObjectProperty Engine.Character.CapsuleComponent */
	FScriptMulticastDelegate OnReachedJumpApex; /* Ofs: 0x570 Size: 0x10 - MulticastDelegateProperty Engine.Character.OnReachedJumpApex */
	uint8_t UnknownData580[0x10];
	FScriptMulticastDelegate MovementModeChangedDelegate; /* Ofs: 0x590 Size: 0x10 - MulticastDelegateProperty Engine.Character.MovementModeChangedDelegate */
	FScriptMulticastDelegate OnCharacterMovementUpdated; /* Ofs: 0x5A0 Size: 0x10 - MulticastDelegateProperty Engine.Character.OnCharacterMovementUpdated */
	FRootMotionSourceGroup SavedRootMotion; /* Ofs: 0x5B0 Size: 0x100 - StructProperty Engine.Character.SavedRootMotion */
	FRootMotionMovementParams ClientRootMotionParams; /* Ofs: 0x6B0 Size: 0x40 - StructProperty Engine.Character.ClientRootMotionParams */
	TArray<struct FSimulatedRootMotionReplicatedMove> RootMotionRepMoves; /* Ofs: 0x6F0 Size: 0x10 - ArrayProperty Engine.Character.RootMotionRepMoves */
	FRepRootMotionMontage RepRootMotion; /* Ofs: 0x700 Size: 0x160 - StructProperty Engine.Character.RepRootMotion */
	uint8_t UnknownData860[0x10];


	inline bool SetBasedMovement(t_structHelper inst, FBasedMovementInfo value) { inst.WriteOffset(0x470, value); }
	inline bool SetCharacterMovement(t_structHelper inst, EncryptedExternalPtr<struct UCharacterMovementComponent> value) { inst.WriteOffset(0x4A0, value); }
	inline bool SetAnimRootMotionTranslationScale(t_structHelper inst, float value) { inst.WriteOffset(0x4B0, value); }
	inline bool SetReplicatedBasedMovement(t_structHelper inst, FBasedMovementInfo value) { inst.WriteOffset(0x4B8, value); }
	inline bool SetProneCapsuleComponent(t_structHelper inst, EncryptedExternalPtr<struct UCapsuleComponent> value) { inst.WriteOffset(0x4F0, value); }
	inline bool SetJumpMaxCount(t_structHelper inst, int32_t value) { inst.WriteOffset(0x500, value); }
	inline bool bInBaseReplication()
	{
		return boolField504& 0x1;
	}
	inline bool SetbInBaseReplication(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x504, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetJumpCurrentCount(t_structHelper inst, int32_t value) { inst.WriteOffset(0x508, value); }
	inline bool SetBaseTranslationOffset(t_structHelper inst, FVector value) { inst.WriteOffset(0x50C, value); }
	inline bool SetBaseRotationOffset(t_structHelper inst, FQuat value) { inst.WriteOffset(0x520, value); }
	inline bool SetJumpMaxHoldTime(t_structHelper inst, float value) { inst.WriteOffset(0x530, value); }
	inline bool bPressedJump()
	{
		return boolField534& 0x1;
	}
	inline bool SetbPressedJump(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x534, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bClientUpdating()
	{
		return boolField534& 0x2;
	}
	inline bool SetbClientUpdating(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x534, (uint8_t)(value ? curVal | (uint8_t)2 : curVal & ~(uint8_t)2));
	}
	inline bool bClientWasFalling()
	{
		return boolField534& 0x4;
	}
	inline bool SetbClientWasFalling(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x534, (uint8_t)(value ? curVal | (uint8_t)4 : curVal & ~(uint8_t)4));
	}
	inline bool bClientResimulateRootMotion()
	{
		return boolField534& 0x8;
	}
	inline bool SetbClientResimulateRootMotion(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x534, (uint8_t)(value ? curVal | (uint8_t)8 : curVal & ~(uint8_t)8));
	}
	inline bool bClientResimulateRootMotionSources()
	{
		return boolField534& 0x10;
	}
	inline bool SetbClientResimulateRootMotionSources(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x534, (uint8_t)(value ? curVal | (uint8_t)16 : curVal & ~(uint8_t)16));
	}
	inline bool bSimGravityDisabled()
	{
		return boolField534& 0x20;
	}
	inline bool SetbSimGravityDisabled(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x534, (uint8_t)(value ? curVal | (uint8_t)32 : curVal & ~(uint8_t)32));
	}
	inline bool bClientCheckEncroachmentOnNetUpdate()
	{
		return boolField534& 0x40;
	}
	inline bool SetbClientCheckEncroachmentOnNetUpdate(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x534, (uint8_t)(value ? curVal | (uint8_t)64 : curVal & ~(uint8_t)64));
	}
	inline bool bServerMoveIgnoreRootMotion()
	{
		return boolField534& 0x80;
	}
	inline bool SetbServerMoveIgnoreRootMotion(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x534, (uint8_t)(value ? curVal | (uint8_t)128 : curVal & ~(uint8_t)128));
	}
	inline bool bWasJumping()
	{
		return boolField535& 0x1;
	}
	inline bool SetbWasJumping(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x535, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetCrouchedEyeHeight(t_structHelper inst, float value) { inst.WriteOffset(0x538, value); }
	inline bool bIsCrouched()
	{
		return boolField53C& 0x1;
	}
	inline bool SetbIsCrouched(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x53C, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetReplicatedMovementMode(t_structHelper inst, uint8_t value) { inst.WriteOffset(0x540, value); }
	inline bool SetJumpKeyHoldTime(t_structHelper inst, float value) { inst.WriteOffset(0x544, value); }
	inline bool SetReplicatedServerLastTransformUpdateTimeStamp(t_structHelper inst, float value) { inst.WriteOffset(0x548, value); }
	inline bool SetMesh(t_structHelper inst, ExternalPtr<struct USkeletalMeshComponent> value) { inst.WriteOffset(0x550, value); }
	inline bool SetCapsuleComponent(t_structHelper inst, EncryptedExternalPtr<struct UCapsuleComponent> value) { inst.WriteOffset(0x560, value); }
	inline bool SetOnReachedJumpApex(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x570, value); }
	inline bool SetMovementModeChangedDelegate(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x590, value); }
	inline bool SetOnCharacterMovementUpdated(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x5A0, value); }
	inline bool SetSavedRootMotion(t_structHelper inst, FRootMotionSourceGroup value) { inst.WriteOffset(0x5B0, value); }
	inline bool SetClientRootMotionParams(t_structHelper inst, FRootMotionMovementParams value) { inst.WriteOffset(0x6B0, value); }
	inline bool SetRootMotionRepMoves(t_structHelper inst, TArray<struct FSimulatedRootMotionReplicatedMove> value) { inst.WriteOffset(0x6F0, value); }
	inline bool SetRepRootMotion(t_structHelper inst, FRepRootMotionMontage value) { inst.WriteOffset(0x700, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUCharacter = sizeof(UCharacter); // 2160
    static_assert(sizeof(UCharacter) == 0x870, "Size of UCharacter is not correct.");
	auto constexpr UCharacter_BasedMovement_Offset = offsetof(UCharacter, BasedMovement);
	static_assert(UCharacter_BasedMovement_Offset == 0x470, "UCharacter::BasedMovement offset is not 470");
	auto constexpr UCharacter_CharacterMovement_Offset = offsetof(UCharacter, CharacterMovement);
	static_assert(UCharacter_CharacterMovement_Offset == 0x4a0, "UCharacter::CharacterMovement offset is not 4a0");
	auto constexpr UCharacter_AnimRootMotionTranslationScale_Offset = offsetof(UCharacter, AnimRootMotionTranslationScale);
	static_assert(UCharacter_AnimRootMotionTranslationScale_Offset == 0x4b0, "UCharacter::AnimRootMotionTranslationScale offset is not 4b0");
	auto constexpr UCharacter_ReplicatedBasedMovement_Offset = offsetof(UCharacter, ReplicatedBasedMovement);
	static_assert(UCharacter_ReplicatedBasedMovement_Offset == 0x4b8, "UCharacter::ReplicatedBasedMovement offset is not 4b8");
	auto constexpr UCharacter_ProneCapsuleComponent_Offset = offsetof(UCharacter, ProneCapsuleComponent);
	static_assert(UCharacter_ProneCapsuleComponent_Offset == 0x4f0, "UCharacter::ProneCapsuleComponent offset is not 4f0");
	auto constexpr UCharacter_JumpMaxCount_Offset = offsetof(UCharacter, JumpMaxCount);
	static_assert(UCharacter_JumpMaxCount_Offset == 0x500, "UCharacter::JumpMaxCount offset is not 500");
	auto constexpr UCharacter_boolField504_Offset = offsetof(UCharacter, boolField504);
	static_assert(UCharacter_boolField504_Offset == 0x504, "UCharacter::boolField504 offset is not 504");
	auto constexpr UCharacter_JumpCurrentCount_Offset = offsetof(UCharacter, JumpCurrentCount);
	static_assert(UCharacter_JumpCurrentCount_Offset == 0x508, "UCharacter::JumpCurrentCount offset is not 508");
	auto constexpr UCharacter_BaseTranslationOffset_Offset = offsetof(UCharacter, BaseTranslationOffset);
	static_assert(UCharacter_BaseTranslationOffset_Offset == 0x50c, "UCharacter::BaseTranslationOffset offset is not 50c");
	auto constexpr UCharacter_BaseRotationOffset_Offset = offsetof(UCharacter, BaseRotationOffset);
	static_assert(UCharacter_BaseRotationOffset_Offset == 0x520, "UCharacter::BaseRotationOffset offset is not 520");
	auto constexpr UCharacter_JumpMaxHoldTime_Offset = offsetof(UCharacter, JumpMaxHoldTime);
	static_assert(UCharacter_JumpMaxHoldTime_Offset == 0x530, "UCharacter::JumpMaxHoldTime offset is not 530");
	auto constexpr UCharacter_boolField534_Offset = offsetof(UCharacter, boolField534);
	static_assert(UCharacter_boolField534_Offset == 0x534, "UCharacter::boolField534 offset is not 534");
	auto constexpr UCharacter_boolField535_Offset = offsetof(UCharacter, boolField535);
	static_assert(UCharacter_boolField535_Offset == 0x535, "UCharacter::boolField535 offset is not 535");
	auto constexpr UCharacter_CrouchedEyeHeight_Offset = offsetof(UCharacter, CrouchedEyeHeight);
	static_assert(UCharacter_CrouchedEyeHeight_Offset == 0x538, "UCharacter::CrouchedEyeHeight offset is not 538");
	auto constexpr UCharacter_boolField53C_Offset = offsetof(UCharacter, boolField53C);
	static_assert(UCharacter_boolField53C_Offset == 0x53c, "UCharacter::boolField53C offset is not 53c");
	auto constexpr UCharacter_ReplicatedMovementMode_Offset = offsetof(UCharacter, ReplicatedMovementMode);
	static_assert(UCharacter_ReplicatedMovementMode_Offset == 0x540, "UCharacter::ReplicatedMovementMode offset is not 540");
	auto constexpr UCharacter_JumpKeyHoldTime_Offset = offsetof(UCharacter, JumpKeyHoldTime);
	static_assert(UCharacter_JumpKeyHoldTime_Offset == 0x544, "UCharacter::JumpKeyHoldTime offset is not 544");
	auto constexpr UCharacter_ReplicatedServerLastTransformUpdateTimeStamp_Offset = offsetof(UCharacter, ReplicatedServerLastTransformUpdateTimeStamp);
	static_assert(UCharacter_ReplicatedServerLastTransformUpdateTimeStamp_Offset == 0x548, "UCharacter::ReplicatedServerLastTransformUpdateTimeStamp offset is not 548");
	auto constexpr UCharacter_Mesh_Offset = offsetof(UCharacter, Mesh);
	static_assert(UCharacter_Mesh_Offset == 0x550, "UCharacter::Mesh offset is not 550");
	auto constexpr UCharacter_CapsuleComponent_Offset = offsetof(UCharacter, CapsuleComponent);
	static_assert(UCharacter_CapsuleComponent_Offset == 0x560, "UCharacter::CapsuleComponent offset is not 560");
	auto constexpr UCharacter_OnReachedJumpApex_Offset = offsetof(UCharacter, OnReachedJumpApex);
	static_assert(UCharacter_OnReachedJumpApex_Offset == 0x570, "UCharacter::OnReachedJumpApex offset is not 570");
	auto constexpr UCharacter_MovementModeChangedDelegate_Offset = offsetof(UCharacter, MovementModeChangedDelegate);
	static_assert(UCharacter_MovementModeChangedDelegate_Offset == 0x590, "UCharacter::MovementModeChangedDelegate offset is not 590");
	auto constexpr UCharacter_OnCharacterMovementUpdated_Offset = offsetof(UCharacter, OnCharacterMovementUpdated);
	static_assert(UCharacter_OnCharacterMovementUpdated_Offset == 0x5a0, "UCharacter::OnCharacterMovementUpdated offset is not 5a0");
	auto constexpr UCharacter_SavedRootMotion_Offset = offsetof(UCharacter, SavedRootMotion);
	static_assert(UCharacter_SavedRootMotion_Offset == 0x5b0, "UCharacter::SavedRootMotion offset is not 5b0");
	auto constexpr UCharacter_ClientRootMotionParams_Offset = offsetof(UCharacter, ClientRootMotionParams);
	static_assert(UCharacter_ClientRootMotionParams_Offset == 0x6b0, "UCharacter::ClientRootMotionParams offset is not 6b0");
	auto constexpr UCharacter_RootMotionRepMoves_Offset = offsetof(UCharacter, RootMotionRepMoves);
	static_assert(UCharacter_RootMotionRepMoves_Offset == 0x6f0, "UCharacter::RootMotionRepMoves offset is not 6f0");
	auto constexpr UCharacter_RepRootMotion_Offset = offsetof(UCharacter, RepRootMotion);
	static_assert(UCharacter_RepRootMotion_Offset == 0x700, "UCharacter::RepRootMotion offset is not 700");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
