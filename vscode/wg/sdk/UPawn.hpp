#pragma once
#include "UActor.hpp"
#include "EAutoReceiveInput.hpp"
#include "EAutoPossessAI.hpp"
#include "FVector.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UPawn // Size: 0x470
	: public UActor // Size: 0x410
{
private:
	typedef UPawn t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(42); // id32("Class Engine.Pawn")
		return ptr;
	}
	uint8_t boolField410;
	uint8_t UnknownData411[0x3];
	float BaseEyeHeight; /* Ofs: 0x414 Size: 0x4 - FloatProperty Engine.Pawn.BaseEyeHeight */
	TEnumAsByte<enum EAutoReceiveInput> AutoPossessPlayer; /* Ofs: 0x418 Size: 0x1 - ByteProperty Engine.Pawn.AutoPossessPlayer */
	TEnumAsByte<enum EAutoPossessAI> AutoPossessAI; /* Ofs: 0x419 Size: 0x1 - EnumProperty Engine.Pawn.AutoPossessAI */
	uint8_t UnknownData41A[0x6];
	ExternalPtr<struct UClass> AIControllerClass; /* Ofs: 0x420 Size: 0x8 - ClassProperty Engine.Pawn.AIControllerClass */
	ExternalPtr<struct UController> Controller; /* Ofs: 0x428 Size: 0x8 - ObjectProperty Engine.Pawn.Controller */
	EncryptedExternalPtr<struct UPlayerState> PlayerState; /* Ofs: 0x430 Size: 0x10 - EncryptedObjectProperty Engine.Pawn.PlayerState */
	uint8_t UnknownData440[0x8];
	ExternalPtr<struct UController> LastHitBy; /* Ofs: 0x448 Size: 0x8 - ObjectProperty Engine.Pawn.LastHitBy */
	uint16_t RemoteViewPitch; /* Ofs: 0x450 Size: 0x2 - UInt16Property Engine.Pawn.RemoteViewPitch */
	uint8_t UnknownData452[0x6];
	FVector ControlInputVector; /* Ofs: 0x458 Size: 0xC - StructProperty Engine.Pawn.ControlInputVector */
	FVector LastControlInputVector; /* Ofs: 0x464 Size: 0xC - StructProperty Engine.Pawn.LastControlInputVector */


	inline bool bUseControllerRotationPitch()
	{
		return boolField410& 0x1;
	}
	inline bool SetbUseControllerRotationPitch(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x410, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bUseControllerRotationYaw()
	{
		return boolField410& 0x2;
	}
	inline bool SetbUseControllerRotationYaw(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x410, (uint8_t)(value ? curVal | (uint8_t)2 : curVal & ~(uint8_t)2));
	}
	inline bool bUseControllerRotationRoll()
	{
		return boolField410& 0x4;
	}
	inline bool SetbUseControllerRotationRoll(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x410, (uint8_t)(value ? curVal | (uint8_t)4 : curVal & ~(uint8_t)4));
	}
	inline bool bCanAffectNavigationGeneration()
	{
		return boolField410& 0x8;
	}
	inline bool SetbCanAffectNavigationGeneration(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x410, (uint8_t)(value ? curVal | (uint8_t)8 : curVal & ~(uint8_t)8));
	}
	inline bool SetBaseEyeHeight(t_structHelper inst, float value) { inst.WriteOffset(0x414, value); }
	inline bool SetAutoPossessPlayer(t_structHelper inst, TEnumAsByte<enum EAutoReceiveInput> value) { inst.WriteOffset(0x418, value); }
	inline bool SetAutoPossessAI(t_structHelper inst, TEnumAsByte<enum EAutoPossessAI> value) { inst.WriteOffset(0x419, value); }
	inline bool SetAIControllerClass(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0x420, value); }
	inline bool SetController(t_structHelper inst, ExternalPtr<struct UController> value) { inst.WriteOffset(0x428, value); }
	inline bool SetPlayerState(t_structHelper inst, EncryptedExternalPtr<struct UPlayerState> value) { inst.WriteOffset(0x430, value); }
	inline bool SetLastHitBy(t_structHelper inst, ExternalPtr<struct UController> value) { inst.WriteOffset(0x448, value); }
	inline bool SetRemoteViewPitch(t_structHelper inst, uint16_t value) { inst.WriteOffset(0x450, value); }
	inline bool SetControlInputVector(t_structHelper inst, FVector value) { inst.WriteOffset(0x458, value); }
	inline bool SetLastControlInputVector(t_structHelper inst, FVector value) { inst.WriteOffset(0x464, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUPawn = sizeof(UPawn); // 1136
    static_assert(sizeof(UPawn) == 0x470, "Size of UPawn is not correct.");
	auto constexpr UPawn_boolField410_Offset = offsetof(UPawn, boolField410);
	static_assert(UPawn_boolField410_Offset == 0x410, "UPawn::boolField410 offset is not 410");
	auto constexpr UPawn_BaseEyeHeight_Offset = offsetof(UPawn, BaseEyeHeight);
	static_assert(UPawn_BaseEyeHeight_Offset == 0x414, "UPawn::BaseEyeHeight offset is not 414");
	auto constexpr UPawn_AutoPossessPlayer_Offset = offsetof(UPawn, AutoPossessPlayer);
	static_assert(UPawn_AutoPossessPlayer_Offset == 0x418, "UPawn::AutoPossessPlayer offset is not 418");
	auto constexpr UPawn_AutoPossessAI_Offset = offsetof(UPawn, AutoPossessAI);
	static_assert(UPawn_AutoPossessAI_Offset == 0x419, "UPawn::AutoPossessAI offset is not 419");
	auto constexpr UPawn_AIControllerClass_Offset = offsetof(UPawn, AIControllerClass);
	static_assert(UPawn_AIControllerClass_Offset == 0x420, "UPawn::AIControllerClass offset is not 420");
	auto constexpr UPawn_Controller_Offset = offsetof(UPawn, Controller);
	static_assert(UPawn_Controller_Offset == 0x428, "UPawn::Controller offset is not 428");
	auto constexpr UPawn_PlayerState_Offset = offsetof(UPawn, PlayerState);
	static_assert(UPawn_PlayerState_Offset == 0x430, "UPawn::PlayerState offset is not 430");
	auto constexpr UPawn_LastHitBy_Offset = offsetof(UPawn, LastHitBy);
	static_assert(UPawn_LastHitBy_Offset == 0x448, "UPawn::LastHitBy offset is not 448");
	auto constexpr UPawn_RemoteViewPitch_Offset = offsetof(UPawn, RemoteViewPitch);
	static_assert(UPawn_RemoteViewPitch_Offset == 0x450, "UPawn::RemoteViewPitch offset is not 450");
	auto constexpr UPawn_ControlInputVector_Offset = offsetof(UPawn, ControlInputVector);
	static_assert(UPawn_ControlInputVector_Offset == 0x458, "UPawn::ControlInputVector offset is not 458");
	auto constexpr UPawn_LastControlInputVector_Offset = offsetof(UPawn, LastControlInputVector);
	static_assert(UPawn_LastControlInputVector_Offset == 0x464, "UPawn::LastControlInputVector offset is not 464");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
