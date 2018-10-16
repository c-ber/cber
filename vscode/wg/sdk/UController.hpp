#pragma once
#include "UActor.hpp"
#include "FRotator.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UController // Size: 0x490
	: public UActor // Size: 0x410
{
private:
	typedef UController t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(696); // id32("Class Engine.Controller")
		return ptr;
	}
	uint8_t UnknownData410[0x8];
	ExternalPtr<struct USceneComponent> TransformComponent; /* Ofs: 0x418 Size: 0x8 - ObjectProperty Engine.Controller.TransformComponent */
	EncryptedExternalPtr<struct UCharacter> Character; /* Ofs: 0x420 Size: 0x10 - EncryptedObjectProperty Engine.Controller.Character */
	FRotator ControlRotation; /* Ofs: 0x430 Size: 0xC - StructProperty Engine.Controller.ControlRotation */
	uint8_t UnknownData43C[0x4];
	FName StateName; /* Ofs: 0x440 Size: 0x8 - NameProperty Engine.Controller.StateName */
	uint8_t boolField448;
	uint8_t UnknownData449[0x17];
	EncryptedExternalPtr<struct UPawn> Pawn; /* Ofs: 0x460 Size: 0x10 - EncryptedObjectProperty Engine.Controller.Pawn */
	ExternalPtr<struct UPlayerState> PlayerState; /* Ofs: 0x470 Size: 0x8 - ObjectProperty Engine.Controller.PlayerState */
	FScriptMulticastDelegate OnInstigatedAnyDamage; /* Ofs: 0x478 Size: 0x10 - MulticastDelegateProperty Engine.Controller.OnInstigatedAnyDamage */
	uint8_t UnknownData488[0x8];


	inline bool SetTransformComponent(t_structHelper inst, ExternalPtr<struct USceneComponent> value) { inst.WriteOffset(0x418, value); }
	inline bool SetCharacter(t_structHelper inst, EncryptedExternalPtr<struct UCharacter> value) { inst.WriteOffset(0x420, value); }
	inline bool SetControlRotation(t_structHelper inst, FRotator value) { inst.WriteOffset(0x430, value); }
	inline bool SetStateName(t_structHelper inst, FName value) { inst.WriteOffset(0x440, value); }
	inline bool bAttachToPawn()
	{
		return boolField448& 0x1;
	}
	inline bool SetbAttachToPawn(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x448, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bIsPlayerController()
	{
		return boolField448& 0x2;
	}
	inline bool SetbIsPlayerController(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x448, (uint8_t)(value ? curVal | (uint8_t)2 : curVal & ~(uint8_t)2));
	}
	inline bool SetPawn(t_structHelper inst, EncryptedExternalPtr<struct UPawn> value) { inst.WriteOffset(0x460, value); }
	inline bool SetPlayerState(t_structHelper inst, ExternalPtr<struct UPlayerState> value) { inst.WriteOffset(0x470, value); }
	inline bool SetOnInstigatedAnyDamage(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x478, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUController = sizeof(UController); // 1168
    static_assert(sizeof(UController) == 0x490, "Size of UController is not correct.");
	auto constexpr UController_TransformComponent_Offset = offsetof(UController, TransformComponent);
	static_assert(UController_TransformComponent_Offset == 0x418, "UController::TransformComponent offset is not 418");
	auto constexpr UController_Character_Offset = offsetof(UController, Character);
	static_assert(UController_Character_Offset == 0x420, "UController::Character offset is not 420");
	auto constexpr UController_ControlRotation_Offset = offsetof(UController, ControlRotation);
	static_assert(UController_ControlRotation_Offset == 0x430, "UController::ControlRotation offset is not 430");
	auto constexpr UController_StateName_Offset = offsetof(UController, StateName);
	static_assert(UController_StateName_Offset == 0x440, "UController::StateName offset is not 440");
	auto constexpr UController_boolField448_Offset = offsetof(UController, boolField448);
	static_assert(UController_boolField448_Offset == 0x448, "UController::boolField448 offset is not 448");
	auto constexpr UController_Pawn_Offset = offsetof(UController, Pawn);
	static_assert(UController_Pawn_Offset == 0x460, "UController::Pawn offset is not 460");
	auto constexpr UController_PlayerState_Offset = offsetof(UController, PlayerState);
	static_assert(UController_PlayerState_Offset == 0x470, "UController::PlayerState offset is not 470");
	auto constexpr UController_OnInstigatedAnyDamage_Offset = offsetof(UController, OnInstigatedAnyDamage);
	static_assert(UController_OnInstigatedAnyDamage_Offset == 0x478, "UController::OnInstigatedAnyDamage offset is not 478");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
