#pragma once
#include "USpringArmComponent.hpp"
#include "FVector.hpp"
#include "FVector2D.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTslCharacterSpringArmComponent // Size: 0x6C0
	: public USpringArmComponent // Size: 0x520
{
private:
	typedef UTslCharacterSpringArmComponent t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1346); // id32("Class TslGame.TslCharacterSpringArmComponent")
		return ptr;
	}
//	float IndoorCheckDistance; /* Ofs: 0x518 Size: 0x4 - FloatProperty TslGame.TslCharacterSpringArmComponent.IndoorCheckDistance */
//	float IndoorCheckTime; /* Ofs: 0x51C Size: 0x4 - FloatProperty TslGame.TslCharacterSpringArmComponent.IndoorCheckTime */
	uint8_t UnknownData520[0x4];
	FVector DefaultSocketOffset; /* Ofs: 0x524 Size: 0xC - StructProperty TslGame.TslCharacterSpringArmComponent.DefaultSocketOffset */
	FVector IndoorSocketOffset; /* Ofs: 0x530 Size: 0xC - StructProperty TslGame.TslCharacterSpringArmComponent.IndoorSocketOffset */
	FVector LeanLeftDefaultSocketOffsetAddition; /* Ofs: 0x53C Size: 0xC - StructProperty TslGame.TslCharacterSpringArmComponent.LeanLeftDefaultSocketOffsetAddition */
	FVector LeanRightDefaultSocketOffsetAddition; /* Ofs: 0x548 Size: 0xC - StructProperty TslGame.TslCharacterSpringArmComponent.LeanRightDefaultSocketOffsetAddition */
	FVector LeftShoulderAimingSocketOffset; /* Ofs: 0x554 Size: 0xC - StructProperty TslGame.TslCharacterSpringArmComponent.LeftShoulderAimingSocketOffset */
	FVector RightShoulderAimingSocketOffset; /* Ofs: 0x560 Size: 0xC - StructProperty TslGame.TslCharacterSpringArmComponent.RightShoulderAimingSocketOffset */
	FVector LeanLeftAimedSocketOffsetAddition; /* Ofs: 0x56C Size: 0xC - StructProperty TslGame.TslCharacterSpringArmComponent.LeanLeftAimedSocketOffsetAddition */
	FVector LeanRightAimedSocketOffsetAddition; /* Ofs: 0x578 Size: 0xC - StructProperty TslGame.TslCharacterSpringArmComponent.LeanRightAimedSocketOffsetAddition */
	FVector SprintSocketOffsetAddition; /* Ofs: 0x584 Size: 0xC - StructProperty TslGame.TslCharacterSpringArmComponent.SprintSocketOffsetAddition */
	float CrouchSocketOffsetZAddition; /* Ofs: 0x590 Size: 0x4 - FloatProperty TslGame.TslCharacterSpringArmComponent.CrouchSocketOffsetZAddition */
	float CrouchSocketOffsetMovementZAddition; /* Ofs: 0x594 Size: 0x4 - FloatProperty TslGame.TslCharacterSpringArmComponent.CrouchSocketOffsetMovementZAddition */
	float ProneScoketOffsetZAddition; /* Ofs: 0x598 Size: 0x4 - FloatProperty TslGame.TslCharacterSpringArmComponent.ProneScoketOffsetZAddition */
	float SocketOffsetInterpSpeed; /* Ofs: 0x59C Size: 0x4 - FloatProperty TslGame.TslCharacterSpringArmComponent.SocketOffsetInterpSpeed */
	FVector DefaultTargetOffset; /* Ofs: 0x5A0 Size: 0xC - StructProperty TslGame.TslCharacterSpringArmComponent.DefaultTargetOffset */
	FVector IndoorTargetOffset; /* Ofs: 0x5AC Size: 0xC - StructProperty TslGame.TslCharacterSpringArmComponent.IndoorTargetOffset */
	FVector AimingTargetOffset; /* Ofs: 0x5B8 Size: 0xC - StructProperty TslGame.TslCharacterSpringArmComponent.AimingTargetOffset */
	float TargetOffsetInterpSpeed; /* Ofs: 0x5C4 Size: 0x4 - FloatProperty TslGame.TslCharacterSpringArmComponent.TargetOffsetInterpSpeed */
	float TargetOffsetInterpSpeed_Vaulting; /* Ofs: 0x5C8 Size: 0x4 - FloatProperty TslGame.TslCharacterSpringArmComponent.TargetOffsetInterpSpeed_Vaulting */
	float DefaultSpringArmLength; /* Ofs: 0x5CC Size: 0x4 - FloatProperty TslGame.TslCharacterSpringArmComponent.DefaultSpringArmLength */
	float IndoorSpringArmLength; /* Ofs: 0x5D0 Size: 0x4 - FloatProperty TslGame.TslCharacterSpringArmComponent.IndoorSpringArmLength */
	float AimingSpringArmLength; /* Ofs: 0x5D4 Size: 0x4 - FloatProperty TslGame.TslCharacterSpringArmComponent.AimingSpringArmLength */
	float SpringArmLengthInterpSpeed; /* Ofs: 0x5D8 Size: 0x4 - FloatProperty TslGame.TslCharacterSpringArmComponent.SpringArmLengthInterpSpeed */
	float AimingSpringArmLengthInterpSpeed; /* Ofs: 0x5DC Size: 0x4 - FloatProperty TslGame.TslCharacterSpringArmComponent.AimingSpringArmLengthInterpSpeed */
	float VaultingSpringArmLengthInterpSpeed; /* Ofs: 0x5E0 Size: 0x4 - FloatProperty TslGame.TslCharacterSpringArmComponent.VaultingSpringArmLengthInterpSpeed */
	FVector2D RightBlockInMap; /* Ofs: 0x5E4 Size: 0x8 - StructProperty TslGame.TslCharacterSpringArmComponent.RightBlockInMap */
	FVector2D RightBlockOutMap; /* Ofs: 0x5EC Size: 0x8 - StructProperty TslGame.TslCharacterSpringArmComponent.RightBlockOutMap */
	FVector RightBlockVectorStand; /* Ofs: 0x5F4 Size: 0xC - StructProperty TslGame.TslCharacterSpringArmComponent.RightBlockVectorStand */
	FVector RightBlockVectorCrouch; /* Ofs: 0x600 Size: 0xC - StructProperty TslGame.TslCharacterSpringArmComponent.RightBlockVectorCrouch */
	FVector RightBlockVectorCrouchMove; /* Ofs: 0x60C Size: 0xC - StructProperty TslGame.TslCharacterSpringArmComponent.RightBlockVectorCrouchMove */
	FVector2D LeftBlockInMap; /* Ofs: 0x618 Size: 0x8 - StructProperty TslGame.TslCharacterSpringArmComponent.LeftBlockInMap */
	FVector2D LeftBlockOutMap; /* Ofs: 0x620 Size: 0x8 - StructProperty TslGame.TslCharacterSpringArmComponent.LeftBlockOutMap */
	FVector LeftBlockVectorStand; /* Ofs: 0x628 Size: 0xC - StructProperty TslGame.TslCharacterSpringArmComponent.LeftBlockVectorStand */
	FVector LeftBlockVectorCrouch; /* Ofs: 0x634 Size: 0xC - StructProperty TslGame.TslCharacterSpringArmComponent.LeftBlockVectorCrouch */
	FVector LeftBlockVectorCrouchMove; /* Ofs: 0x640 Size: 0xC - StructProperty TslGame.TslCharacterSpringArmComponent.LeftBlockVectorCrouchMove */
	FVector2D TargetBlockInMap; /* Ofs: 0x64C Size: 0x8 - StructProperty TslGame.TslCharacterSpringArmComponent.TargetBlockInMap */
	FVector2D TargetBlockOutMap; /* Ofs: 0x654 Size: 0x8 - StructProperty TslGame.TslCharacterSpringArmComponent.TargetBlockOutMap */
	FVector TargetBlockVectorStand; /* Ofs: 0x65C Size: 0xC - StructProperty TslGame.TslCharacterSpringArmComponent.TargetBlockVectorStand */
	FVector TargetBlockVectorCrouch; /* Ofs: 0x668 Size: 0xC - StructProperty TslGame.TslCharacterSpringArmComponent.TargetBlockVectorCrouch */
	FVector TargetBlockVectorCrouchMove; /* Ofs: 0x674 Size: 0xC - StructProperty TslGame.TslCharacterSpringArmComponent.TargetBlockVectorCrouchMove */
	FVector2D SocketOffsetPitchHipMapIn; /* Ofs: 0x680 Size: 0x8 - StructProperty TslGame.TslCharacterSpringArmComponent.SocketOffsetPitchHipMapIn */
	FVector2D SocketOffsetPitchHipMapOut; /* Ofs: 0x688 Size: 0x8 - StructProperty TslGame.TslCharacterSpringArmComponent.SocketOffsetPitchHipMapOut */
	FVector2D SocketOffsetPitchAimMapIn; /* Ofs: 0x690 Size: 0x8 - StructProperty TslGame.TslCharacterSpringArmComponent.SocketOffsetPitchAimMapIn */
	FVector2D SocketOffsetPitchAimMapOut; /* Ofs: 0x698 Size: 0x8 - StructProperty TslGame.TslCharacterSpringArmComponent.SocketOffsetPitchAimMapOut */
	uint8_t UnknownData6A0[0x10];
	float SpringArmRestoreInterpSpeed; /* Ofs: 0x6B0 Size: 0x4 - FloatProperty TslGame.TslCharacterSpringArmComponent.SpringArmRestoreInterpSpeed */
	uint8_t UnknownData6B4[0xC];


//	inline bool SetIndoorCheckDistance(t_structHelper inst, float value) { inst.WriteOffset(0x518, value); }
//	inline bool SetIndoorCheckTime(t_structHelper inst, float value) { inst.WriteOffset(0x51C, value); }
	inline bool SetDefaultSocketOffset(t_structHelper inst, FVector value) { inst.WriteOffset(0x524, value); }
	inline bool SetIndoorSocketOffset(t_structHelper inst, FVector value) { inst.WriteOffset(0x530, value); }
	inline bool SetLeanLeftDefaultSocketOffsetAddition(t_structHelper inst, FVector value) { inst.WriteOffset(0x53C, value); }
	inline bool SetLeanRightDefaultSocketOffsetAddition(t_structHelper inst, FVector value) { inst.WriteOffset(0x548, value); }
	inline bool SetLeftShoulderAimingSocketOffset(t_structHelper inst, FVector value) { inst.WriteOffset(0x554, value); }
	inline bool SetRightShoulderAimingSocketOffset(t_structHelper inst, FVector value) { inst.WriteOffset(0x560, value); }
	inline bool SetLeanLeftAimedSocketOffsetAddition(t_structHelper inst, FVector value) { inst.WriteOffset(0x56C, value); }
	inline bool SetLeanRightAimedSocketOffsetAddition(t_structHelper inst, FVector value) { inst.WriteOffset(0x578, value); }
	inline bool SetSprintSocketOffsetAddition(t_structHelper inst, FVector value) { inst.WriteOffset(0x584, value); }
	inline bool SetCrouchSocketOffsetZAddition(t_structHelper inst, float value) { inst.WriteOffset(0x590, value); }
	inline bool SetCrouchSocketOffsetMovementZAddition(t_structHelper inst, float value) { inst.WriteOffset(0x594, value); }
	inline bool SetProneScoketOffsetZAddition(t_structHelper inst, float value) { inst.WriteOffset(0x598, value); }
	inline bool SetSocketOffsetInterpSpeed(t_structHelper inst, float value) { inst.WriteOffset(0x59C, value); }
	inline bool SetDefaultTargetOffset(t_structHelper inst, FVector value) { inst.WriteOffset(0x5A0, value); }
	inline bool SetIndoorTargetOffset(t_structHelper inst, FVector value) { inst.WriteOffset(0x5AC, value); }
	inline bool SetAimingTargetOffset(t_structHelper inst, FVector value) { inst.WriteOffset(0x5B8, value); }
	inline bool SetTargetOffsetInterpSpeed(t_structHelper inst, float value) { inst.WriteOffset(0x5C4, value); }
	inline bool SetTargetOffsetInterpSpeed_Vaulting(t_structHelper inst, float value) { inst.WriteOffset(0x5C8, value); }
	inline bool SetDefaultSpringArmLength(t_structHelper inst, float value) { inst.WriteOffset(0x5CC, value); }
	inline bool SetIndoorSpringArmLength(t_structHelper inst, float value) { inst.WriteOffset(0x5D0, value); }
	inline bool SetAimingSpringArmLength(t_structHelper inst, float value) { inst.WriteOffset(0x5D4, value); }
	inline bool SetSpringArmLengthInterpSpeed(t_structHelper inst, float value) { inst.WriteOffset(0x5D8, value); }
	inline bool SetAimingSpringArmLengthInterpSpeed(t_structHelper inst, float value) { inst.WriteOffset(0x5DC, value); }
	inline bool SetVaultingSpringArmLengthInterpSpeed(t_structHelper inst, float value) { inst.WriteOffset(0x5E0, value); }
	inline bool SetRightBlockInMap(t_structHelper inst, FVector2D value) { inst.WriteOffset(0x5E4, value); }
	inline bool SetRightBlockOutMap(t_structHelper inst, FVector2D value) { inst.WriteOffset(0x5EC, value); }
	inline bool SetRightBlockVectorStand(t_structHelper inst, FVector value) { inst.WriteOffset(0x5F4, value); }
	inline bool SetRightBlockVectorCrouch(t_structHelper inst, FVector value) { inst.WriteOffset(0x600, value); }
	inline bool SetRightBlockVectorCrouchMove(t_structHelper inst, FVector value) { inst.WriteOffset(0x60C, value); }
	inline bool SetLeftBlockInMap(t_structHelper inst, FVector2D value) { inst.WriteOffset(0x618, value); }
	inline bool SetLeftBlockOutMap(t_structHelper inst, FVector2D value) { inst.WriteOffset(0x620, value); }
	inline bool SetLeftBlockVectorStand(t_structHelper inst, FVector value) { inst.WriteOffset(0x628, value); }
	inline bool SetLeftBlockVectorCrouch(t_structHelper inst, FVector value) { inst.WriteOffset(0x634, value); }
	inline bool SetLeftBlockVectorCrouchMove(t_structHelper inst, FVector value) { inst.WriteOffset(0x640, value); }
	inline bool SetTargetBlockInMap(t_structHelper inst, FVector2D value) { inst.WriteOffset(0x64C, value); }
	inline bool SetTargetBlockOutMap(t_structHelper inst, FVector2D value) { inst.WriteOffset(0x654, value); }
	inline bool SetTargetBlockVectorStand(t_structHelper inst, FVector value) { inst.WriteOffset(0x65C, value); }
	inline bool SetTargetBlockVectorCrouch(t_structHelper inst, FVector value) { inst.WriteOffset(0x668, value); }
	inline bool SetTargetBlockVectorCrouchMove(t_structHelper inst, FVector value) { inst.WriteOffset(0x674, value); }
	inline bool SetSocketOffsetPitchHipMapIn(t_structHelper inst, FVector2D value) { inst.WriteOffset(0x680, value); }
	inline bool SetSocketOffsetPitchHipMapOut(t_structHelper inst, FVector2D value) { inst.WriteOffset(0x688, value); }
	inline bool SetSocketOffsetPitchAimMapIn(t_structHelper inst, FVector2D value) { inst.WriteOffset(0x690, value); }
	inline bool SetSocketOffsetPitchAimMapOut(t_structHelper inst, FVector2D value) { inst.WriteOffset(0x698, value); }
	inline bool SetSpringArmRestoreInterpSpeed(t_structHelper inst, float value) { inst.WriteOffset(0x6B0, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTslCharacterSpringArmComponent = sizeof(UTslCharacterSpringArmComponent); // 1728
    static_assert(sizeof(UTslCharacterSpringArmComponent) == 0x6C0, "Size of UTslCharacterSpringArmComponent is not correct.");
//	auto constexpr UTslCharacterSpringArmComponent_IndoorCheckDistance_Offset = offsetof(UTslCharacterSpringArmComponent, IndoorCheckDistance);
//	static_assert(UTslCharacterSpringArmComponent_IndoorCheckDistance_Offset == 0x518, "UTslCharacterSpringArmComponent::IndoorCheckDistance offset is not 518");
//	auto constexpr UTslCharacterSpringArmComponent_IndoorCheckTime_Offset = offsetof(UTslCharacterSpringArmComponent, IndoorCheckTime);
//	static_assert(UTslCharacterSpringArmComponent_IndoorCheckTime_Offset == 0x51c, "UTslCharacterSpringArmComponent::IndoorCheckTime offset is not 51c");
	auto constexpr UTslCharacterSpringArmComponent_DefaultSocketOffset_Offset = offsetof(UTslCharacterSpringArmComponent, DefaultSocketOffset);
	static_assert(UTslCharacterSpringArmComponent_DefaultSocketOffset_Offset == 0x524, "UTslCharacterSpringArmComponent::DefaultSocketOffset offset is not 524");
	auto constexpr UTslCharacterSpringArmComponent_IndoorSocketOffset_Offset = offsetof(UTslCharacterSpringArmComponent, IndoorSocketOffset);
	static_assert(UTslCharacterSpringArmComponent_IndoorSocketOffset_Offset == 0x530, "UTslCharacterSpringArmComponent::IndoorSocketOffset offset is not 530");
	auto constexpr UTslCharacterSpringArmComponent_LeanLeftDefaultSocketOffsetAddition_Offset = offsetof(UTslCharacterSpringArmComponent, LeanLeftDefaultSocketOffsetAddition);
	static_assert(UTslCharacterSpringArmComponent_LeanLeftDefaultSocketOffsetAddition_Offset == 0x53c, "UTslCharacterSpringArmComponent::LeanLeftDefaultSocketOffsetAddition offset is not 53c");
	auto constexpr UTslCharacterSpringArmComponent_LeanRightDefaultSocketOffsetAddition_Offset = offsetof(UTslCharacterSpringArmComponent, LeanRightDefaultSocketOffsetAddition);
	static_assert(UTslCharacterSpringArmComponent_LeanRightDefaultSocketOffsetAddition_Offset == 0x548, "UTslCharacterSpringArmComponent::LeanRightDefaultSocketOffsetAddition offset is not 548");
	auto constexpr UTslCharacterSpringArmComponent_LeftShoulderAimingSocketOffset_Offset = offsetof(UTslCharacterSpringArmComponent, LeftShoulderAimingSocketOffset);
	static_assert(UTslCharacterSpringArmComponent_LeftShoulderAimingSocketOffset_Offset == 0x554, "UTslCharacterSpringArmComponent::LeftShoulderAimingSocketOffset offset is not 554");
	auto constexpr UTslCharacterSpringArmComponent_RightShoulderAimingSocketOffset_Offset = offsetof(UTslCharacterSpringArmComponent, RightShoulderAimingSocketOffset);
	static_assert(UTslCharacterSpringArmComponent_RightShoulderAimingSocketOffset_Offset == 0x560, "UTslCharacterSpringArmComponent::RightShoulderAimingSocketOffset offset is not 560");
	auto constexpr UTslCharacterSpringArmComponent_LeanLeftAimedSocketOffsetAddition_Offset = offsetof(UTslCharacterSpringArmComponent, LeanLeftAimedSocketOffsetAddition);
	static_assert(UTslCharacterSpringArmComponent_LeanLeftAimedSocketOffsetAddition_Offset == 0x56c, "UTslCharacterSpringArmComponent::LeanLeftAimedSocketOffsetAddition offset is not 56c");
	auto constexpr UTslCharacterSpringArmComponent_LeanRightAimedSocketOffsetAddition_Offset = offsetof(UTslCharacterSpringArmComponent, LeanRightAimedSocketOffsetAddition);
	static_assert(UTslCharacterSpringArmComponent_LeanRightAimedSocketOffsetAddition_Offset == 0x578, "UTslCharacterSpringArmComponent::LeanRightAimedSocketOffsetAddition offset is not 578");
	auto constexpr UTslCharacterSpringArmComponent_SprintSocketOffsetAddition_Offset = offsetof(UTslCharacterSpringArmComponent, SprintSocketOffsetAddition);
	static_assert(UTslCharacterSpringArmComponent_SprintSocketOffsetAddition_Offset == 0x584, "UTslCharacterSpringArmComponent::SprintSocketOffsetAddition offset is not 584");
	auto constexpr UTslCharacterSpringArmComponent_CrouchSocketOffsetZAddition_Offset = offsetof(UTslCharacterSpringArmComponent, CrouchSocketOffsetZAddition);
	static_assert(UTslCharacterSpringArmComponent_CrouchSocketOffsetZAddition_Offset == 0x590, "UTslCharacterSpringArmComponent::CrouchSocketOffsetZAddition offset is not 590");
	auto constexpr UTslCharacterSpringArmComponent_CrouchSocketOffsetMovementZAddition_Offset = offsetof(UTslCharacterSpringArmComponent, CrouchSocketOffsetMovementZAddition);
	static_assert(UTslCharacterSpringArmComponent_CrouchSocketOffsetMovementZAddition_Offset == 0x594, "UTslCharacterSpringArmComponent::CrouchSocketOffsetMovementZAddition offset is not 594");
	auto constexpr UTslCharacterSpringArmComponent_ProneScoketOffsetZAddition_Offset = offsetof(UTslCharacterSpringArmComponent, ProneScoketOffsetZAddition);
	static_assert(UTslCharacterSpringArmComponent_ProneScoketOffsetZAddition_Offset == 0x598, "UTslCharacterSpringArmComponent::ProneScoketOffsetZAddition offset is not 598");
	auto constexpr UTslCharacterSpringArmComponent_SocketOffsetInterpSpeed_Offset = offsetof(UTslCharacterSpringArmComponent, SocketOffsetInterpSpeed);
	static_assert(UTslCharacterSpringArmComponent_SocketOffsetInterpSpeed_Offset == 0x59c, "UTslCharacterSpringArmComponent::SocketOffsetInterpSpeed offset is not 59c");
	auto constexpr UTslCharacterSpringArmComponent_DefaultTargetOffset_Offset = offsetof(UTslCharacterSpringArmComponent, DefaultTargetOffset);
	static_assert(UTslCharacterSpringArmComponent_DefaultTargetOffset_Offset == 0x5a0, "UTslCharacterSpringArmComponent::DefaultTargetOffset offset is not 5a0");
	auto constexpr UTslCharacterSpringArmComponent_IndoorTargetOffset_Offset = offsetof(UTslCharacterSpringArmComponent, IndoorTargetOffset);
	static_assert(UTslCharacterSpringArmComponent_IndoorTargetOffset_Offset == 0x5ac, "UTslCharacterSpringArmComponent::IndoorTargetOffset offset is not 5ac");
	auto constexpr UTslCharacterSpringArmComponent_AimingTargetOffset_Offset = offsetof(UTslCharacterSpringArmComponent, AimingTargetOffset);
	static_assert(UTslCharacterSpringArmComponent_AimingTargetOffset_Offset == 0x5b8, "UTslCharacterSpringArmComponent::AimingTargetOffset offset is not 5b8");
	auto constexpr UTslCharacterSpringArmComponent_TargetOffsetInterpSpeed_Offset = offsetof(UTslCharacterSpringArmComponent, TargetOffsetInterpSpeed);
	static_assert(UTslCharacterSpringArmComponent_TargetOffsetInterpSpeed_Offset == 0x5c4, "UTslCharacterSpringArmComponent::TargetOffsetInterpSpeed offset is not 5c4");
	auto constexpr UTslCharacterSpringArmComponent_TargetOffsetInterpSpeed_Vaulting_Offset = offsetof(UTslCharacterSpringArmComponent, TargetOffsetInterpSpeed_Vaulting);
	static_assert(UTslCharacterSpringArmComponent_TargetOffsetInterpSpeed_Vaulting_Offset == 0x5c8, "UTslCharacterSpringArmComponent::TargetOffsetInterpSpeed_Vaulting offset is not 5c8");
	auto constexpr UTslCharacterSpringArmComponent_DefaultSpringArmLength_Offset = offsetof(UTslCharacterSpringArmComponent, DefaultSpringArmLength);
	static_assert(UTslCharacterSpringArmComponent_DefaultSpringArmLength_Offset == 0x5cc, "UTslCharacterSpringArmComponent::DefaultSpringArmLength offset is not 5cc");
	auto constexpr UTslCharacterSpringArmComponent_IndoorSpringArmLength_Offset = offsetof(UTslCharacterSpringArmComponent, IndoorSpringArmLength);
	static_assert(UTslCharacterSpringArmComponent_IndoorSpringArmLength_Offset == 0x5d0, "UTslCharacterSpringArmComponent::IndoorSpringArmLength offset is not 5d0");
	auto constexpr UTslCharacterSpringArmComponent_AimingSpringArmLength_Offset = offsetof(UTslCharacterSpringArmComponent, AimingSpringArmLength);
	static_assert(UTslCharacterSpringArmComponent_AimingSpringArmLength_Offset == 0x5d4, "UTslCharacterSpringArmComponent::AimingSpringArmLength offset is not 5d4");
	auto constexpr UTslCharacterSpringArmComponent_SpringArmLengthInterpSpeed_Offset = offsetof(UTslCharacterSpringArmComponent, SpringArmLengthInterpSpeed);
	static_assert(UTslCharacterSpringArmComponent_SpringArmLengthInterpSpeed_Offset == 0x5d8, "UTslCharacterSpringArmComponent::SpringArmLengthInterpSpeed offset is not 5d8");
	auto constexpr UTslCharacterSpringArmComponent_AimingSpringArmLengthInterpSpeed_Offset = offsetof(UTslCharacterSpringArmComponent, AimingSpringArmLengthInterpSpeed);
	static_assert(UTslCharacterSpringArmComponent_AimingSpringArmLengthInterpSpeed_Offset == 0x5dc, "UTslCharacterSpringArmComponent::AimingSpringArmLengthInterpSpeed offset is not 5dc");
	auto constexpr UTslCharacterSpringArmComponent_VaultingSpringArmLengthInterpSpeed_Offset = offsetof(UTslCharacterSpringArmComponent, VaultingSpringArmLengthInterpSpeed);
	static_assert(UTslCharacterSpringArmComponent_VaultingSpringArmLengthInterpSpeed_Offset == 0x5e0, "UTslCharacterSpringArmComponent::VaultingSpringArmLengthInterpSpeed offset is not 5e0");
	auto constexpr UTslCharacterSpringArmComponent_RightBlockInMap_Offset = offsetof(UTslCharacterSpringArmComponent, RightBlockInMap);
	static_assert(UTslCharacterSpringArmComponent_RightBlockInMap_Offset == 0x5e4, "UTslCharacterSpringArmComponent::RightBlockInMap offset is not 5e4");
	auto constexpr UTslCharacterSpringArmComponent_RightBlockOutMap_Offset = offsetof(UTslCharacterSpringArmComponent, RightBlockOutMap);
	static_assert(UTslCharacterSpringArmComponent_RightBlockOutMap_Offset == 0x5ec, "UTslCharacterSpringArmComponent::RightBlockOutMap offset is not 5ec");
	auto constexpr UTslCharacterSpringArmComponent_RightBlockVectorStand_Offset = offsetof(UTslCharacterSpringArmComponent, RightBlockVectorStand);
	static_assert(UTslCharacterSpringArmComponent_RightBlockVectorStand_Offset == 0x5f4, "UTslCharacterSpringArmComponent::RightBlockVectorStand offset is not 5f4");
	auto constexpr UTslCharacterSpringArmComponent_RightBlockVectorCrouch_Offset = offsetof(UTslCharacterSpringArmComponent, RightBlockVectorCrouch);
	static_assert(UTslCharacterSpringArmComponent_RightBlockVectorCrouch_Offset == 0x600, "UTslCharacterSpringArmComponent::RightBlockVectorCrouch offset is not 600");
	auto constexpr UTslCharacterSpringArmComponent_RightBlockVectorCrouchMove_Offset = offsetof(UTslCharacterSpringArmComponent, RightBlockVectorCrouchMove);
	static_assert(UTslCharacterSpringArmComponent_RightBlockVectorCrouchMove_Offset == 0x60c, "UTslCharacterSpringArmComponent::RightBlockVectorCrouchMove offset is not 60c");
	auto constexpr UTslCharacterSpringArmComponent_LeftBlockInMap_Offset = offsetof(UTslCharacterSpringArmComponent, LeftBlockInMap);
	static_assert(UTslCharacterSpringArmComponent_LeftBlockInMap_Offset == 0x618, "UTslCharacterSpringArmComponent::LeftBlockInMap offset is not 618");
	auto constexpr UTslCharacterSpringArmComponent_LeftBlockOutMap_Offset = offsetof(UTslCharacterSpringArmComponent, LeftBlockOutMap);
	static_assert(UTslCharacterSpringArmComponent_LeftBlockOutMap_Offset == 0x620, "UTslCharacterSpringArmComponent::LeftBlockOutMap offset is not 620");
	auto constexpr UTslCharacterSpringArmComponent_LeftBlockVectorStand_Offset = offsetof(UTslCharacterSpringArmComponent, LeftBlockVectorStand);
	static_assert(UTslCharacterSpringArmComponent_LeftBlockVectorStand_Offset == 0x628, "UTslCharacterSpringArmComponent::LeftBlockVectorStand offset is not 628");
	auto constexpr UTslCharacterSpringArmComponent_LeftBlockVectorCrouch_Offset = offsetof(UTslCharacterSpringArmComponent, LeftBlockVectorCrouch);
	static_assert(UTslCharacterSpringArmComponent_LeftBlockVectorCrouch_Offset == 0x634, "UTslCharacterSpringArmComponent::LeftBlockVectorCrouch offset is not 634");
	auto constexpr UTslCharacterSpringArmComponent_LeftBlockVectorCrouchMove_Offset = offsetof(UTslCharacterSpringArmComponent, LeftBlockVectorCrouchMove);
	static_assert(UTslCharacterSpringArmComponent_LeftBlockVectorCrouchMove_Offset == 0x640, "UTslCharacterSpringArmComponent::LeftBlockVectorCrouchMove offset is not 640");
	auto constexpr UTslCharacterSpringArmComponent_TargetBlockInMap_Offset = offsetof(UTslCharacterSpringArmComponent, TargetBlockInMap);
	static_assert(UTslCharacterSpringArmComponent_TargetBlockInMap_Offset == 0x64c, "UTslCharacterSpringArmComponent::TargetBlockInMap offset is not 64c");
	auto constexpr UTslCharacterSpringArmComponent_TargetBlockOutMap_Offset = offsetof(UTslCharacterSpringArmComponent, TargetBlockOutMap);
	static_assert(UTslCharacterSpringArmComponent_TargetBlockOutMap_Offset == 0x654, "UTslCharacterSpringArmComponent::TargetBlockOutMap offset is not 654");
	auto constexpr UTslCharacterSpringArmComponent_TargetBlockVectorStand_Offset = offsetof(UTslCharacterSpringArmComponent, TargetBlockVectorStand);
	static_assert(UTslCharacterSpringArmComponent_TargetBlockVectorStand_Offset == 0x65c, "UTslCharacterSpringArmComponent::TargetBlockVectorStand offset is not 65c");
	auto constexpr UTslCharacterSpringArmComponent_TargetBlockVectorCrouch_Offset = offsetof(UTslCharacterSpringArmComponent, TargetBlockVectorCrouch);
	static_assert(UTslCharacterSpringArmComponent_TargetBlockVectorCrouch_Offset == 0x668, "UTslCharacterSpringArmComponent::TargetBlockVectorCrouch offset is not 668");
	auto constexpr UTslCharacterSpringArmComponent_TargetBlockVectorCrouchMove_Offset = offsetof(UTslCharacterSpringArmComponent, TargetBlockVectorCrouchMove);
	static_assert(UTslCharacterSpringArmComponent_TargetBlockVectorCrouchMove_Offset == 0x674, "UTslCharacterSpringArmComponent::TargetBlockVectorCrouchMove offset is not 674");
	auto constexpr UTslCharacterSpringArmComponent_SocketOffsetPitchHipMapIn_Offset = offsetof(UTslCharacterSpringArmComponent, SocketOffsetPitchHipMapIn);
	static_assert(UTslCharacterSpringArmComponent_SocketOffsetPitchHipMapIn_Offset == 0x680, "UTslCharacterSpringArmComponent::SocketOffsetPitchHipMapIn offset is not 680");
	auto constexpr UTslCharacterSpringArmComponent_SocketOffsetPitchHipMapOut_Offset = offsetof(UTslCharacterSpringArmComponent, SocketOffsetPitchHipMapOut);
	static_assert(UTslCharacterSpringArmComponent_SocketOffsetPitchHipMapOut_Offset == 0x688, "UTslCharacterSpringArmComponent::SocketOffsetPitchHipMapOut offset is not 688");
	auto constexpr UTslCharacterSpringArmComponent_SocketOffsetPitchAimMapIn_Offset = offsetof(UTslCharacterSpringArmComponent, SocketOffsetPitchAimMapIn);
	static_assert(UTslCharacterSpringArmComponent_SocketOffsetPitchAimMapIn_Offset == 0x690, "UTslCharacterSpringArmComponent::SocketOffsetPitchAimMapIn offset is not 690");
	auto constexpr UTslCharacterSpringArmComponent_SocketOffsetPitchAimMapOut_Offset = offsetof(UTslCharacterSpringArmComponent, SocketOffsetPitchAimMapOut);
	static_assert(UTslCharacterSpringArmComponent_SocketOffsetPitchAimMapOut_Offset == 0x698, "UTslCharacterSpringArmComponent::SocketOffsetPitchAimMapOut offset is not 698");
	auto constexpr UTslCharacterSpringArmComponent_SpringArmRestoreInterpSpeed_Offset = offsetof(UTslCharacterSpringArmComponent, SpringArmRestoreInterpSpeed);
	static_assert(UTslCharacterSpringArmComponent_SpringArmRestoreInterpSpeed_Offset == 0x6b0, "UTslCharacterSpringArmComponent::SpringArmRestoreInterpSpeed offset is not 6b0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
