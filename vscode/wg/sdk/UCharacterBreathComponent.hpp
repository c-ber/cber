#pragma once
#include "UActorComponent.hpp"
#include "FVector.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UCharacterBreathComponent // Size: 0x280
	: public UActorComponent // Size: 0x1F0
{
private:
	typedef UCharacterBreathComponent t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1830); // id32("Class TslGame.CharacterBreathComponent")
		return ptr;
	}
	uint8_t UnknownData1F0[0x8];
	float Breath; /* Ofs: 0x1F8 Size: 0x4 - FloatProperty TslGame.CharacterBreathComponent.Breath */
	float BreathMax; /* Ofs: 0x1FC Size: 0x4 - FloatProperty TslGame.CharacterBreathComponent.BreathMax */
	FVector BreathPointOffsetAtStand; /* Ofs: 0x200 Size: 0xC - StructProperty TslGame.CharacterBreathComponent.BreathPointOffsetAtStand */
	FVector BreathPointOffsetAtCrouch; /* Ofs: 0x20C Size: 0xC - StructProperty TslGame.CharacterBreathComponent.BreathPointOffsetAtCrouch */
	FVector BreathPointOffsetAtProne; /* Ofs: 0x218 Size: 0xC - StructProperty TslGame.CharacterBreathComponent.BreathPointOffsetAtProne */
	FVector BreathPointOffsetAtGroggy; /* Ofs: 0x224 Size: 0xC - StructProperty TslGame.CharacterBreathComponent.BreathPointOffsetAtGroggy */
	ExternalPtr<struct UClass> RestorationBuff; /* Ofs: 0x230 Size: 0x8 - ClassProperty TslGame.CharacterBreathComponent.RestorationBuff */
	ExternalPtr<struct UClass> ApneaDebuff; /* Ofs: 0x238 Size: 0x8 - ClassProperty TslGame.CharacterBreathComponent.ApneaDebuff */
	ExternalPtr<struct UClass> HoldBreathDebuff; /* Ofs: 0x240 Size: 0x8 - ClassProperty TslGame.CharacterBreathComponent.HoldBreathDebuff */
	float MinimumBreathStartHoldingBreath; /* Ofs: 0x248 Size: 0x4 - FloatProperty TslGame.CharacterBreathComponent.MinimumBreathStartHoldingBreath */
	uint8_t UnknownData24C[0x4];
	ExternalPtr<struct UClass> SprintDebuff; /* Ofs: 0x250 Size: 0x8 - ClassProperty TslGame.CharacterBreathComponent.SprintDebuff */
	float MinimumBreathStartSprinting; /* Ofs: 0x258 Size: 0x4 - FloatProperty TslGame.CharacterBreathComponent.MinimumBreathStartSprinting */
	uint8_t UnknownData25C[0x24];


	inline bool SetBreath(t_structHelper inst, float value) { inst.WriteOffset(0x1F8, value); }
	inline bool SetBreathMax(t_structHelper inst, float value) { inst.WriteOffset(0x1FC, value); }
	inline bool SetBreathPointOffsetAtStand(t_structHelper inst, FVector value) { inst.WriteOffset(0x200, value); }
	inline bool SetBreathPointOffsetAtCrouch(t_structHelper inst, FVector value) { inst.WriteOffset(0x20C, value); }
	inline bool SetBreathPointOffsetAtProne(t_structHelper inst, FVector value) { inst.WriteOffset(0x218, value); }
	inline bool SetBreathPointOffsetAtGroggy(t_structHelper inst, FVector value) { inst.WriteOffset(0x224, value); }
	inline bool SetRestorationBuff(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0x230, value); }
	inline bool SetApneaDebuff(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0x238, value); }
	inline bool SetHoldBreathDebuff(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0x240, value); }
	inline bool SetMinimumBreathStartHoldingBreath(t_structHelper inst, float value) { inst.WriteOffset(0x248, value); }
	inline bool SetSprintDebuff(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0x250, value); }
	inline bool SetMinimumBreathStartSprinting(t_structHelper inst, float value) { inst.WriteOffset(0x258, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUCharacterBreathComponent = sizeof(UCharacterBreathComponent); // 640
    static_assert(sizeof(UCharacterBreathComponent) == 0x280, "Size of UCharacterBreathComponent is not correct.");
	auto constexpr UCharacterBreathComponent_Breath_Offset = offsetof(UCharacterBreathComponent, Breath);
	static_assert(UCharacterBreathComponent_Breath_Offset == 0x1f8, "UCharacterBreathComponent::Breath offset is not 1f8");
	auto constexpr UCharacterBreathComponent_BreathMax_Offset = offsetof(UCharacterBreathComponent, BreathMax);
	static_assert(UCharacterBreathComponent_BreathMax_Offset == 0x1fc, "UCharacterBreathComponent::BreathMax offset is not 1fc");
	auto constexpr UCharacterBreathComponent_BreathPointOffsetAtStand_Offset = offsetof(UCharacterBreathComponent, BreathPointOffsetAtStand);
	static_assert(UCharacterBreathComponent_BreathPointOffsetAtStand_Offset == 0x200, "UCharacterBreathComponent::BreathPointOffsetAtStand offset is not 200");
	auto constexpr UCharacterBreathComponent_BreathPointOffsetAtCrouch_Offset = offsetof(UCharacterBreathComponent, BreathPointOffsetAtCrouch);
	static_assert(UCharacterBreathComponent_BreathPointOffsetAtCrouch_Offset == 0x20c, "UCharacterBreathComponent::BreathPointOffsetAtCrouch offset is not 20c");
	auto constexpr UCharacterBreathComponent_BreathPointOffsetAtProne_Offset = offsetof(UCharacterBreathComponent, BreathPointOffsetAtProne);
	static_assert(UCharacterBreathComponent_BreathPointOffsetAtProne_Offset == 0x218, "UCharacterBreathComponent::BreathPointOffsetAtProne offset is not 218");
	auto constexpr UCharacterBreathComponent_BreathPointOffsetAtGroggy_Offset = offsetof(UCharacterBreathComponent, BreathPointOffsetAtGroggy);
	static_assert(UCharacterBreathComponent_BreathPointOffsetAtGroggy_Offset == 0x224, "UCharacterBreathComponent::BreathPointOffsetAtGroggy offset is not 224");
	auto constexpr UCharacterBreathComponent_RestorationBuff_Offset = offsetof(UCharacterBreathComponent, RestorationBuff);
	static_assert(UCharacterBreathComponent_RestorationBuff_Offset == 0x230, "UCharacterBreathComponent::RestorationBuff offset is not 230");
	auto constexpr UCharacterBreathComponent_ApneaDebuff_Offset = offsetof(UCharacterBreathComponent, ApneaDebuff);
	static_assert(UCharacterBreathComponent_ApneaDebuff_Offset == 0x238, "UCharacterBreathComponent::ApneaDebuff offset is not 238");
	auto constexpr UCharacterBreathComponent_HoldBreathDebuff_Offset = offsetof(UCharacterBreathComponent, HoldBreathDebuff);
	static_assert(UCharacterBreathComponent_HoldBreathDebuff_Offset == 0x240, "UCharacterBreathComponent::HoldBreathDebuff offset is not 240");
	auto constexpr UCharacterBreathComponent_MinimumBreathStartHoldingBreath_Offset = offsetof(UCharacterBreathComponent, MinimumBreathStartHoldingBreath);
	static_assert(UCharacterBreathComponent_MinimumBreathStartHoldingBreath_Offset == 0x248, "UCharacterBreathComponent::MinimumBreathStartHoldingBreath offset is not 248");
	auto constexpr UCharacterBreathComponent_SprintDebuff_Offset = offsetof(UCharacterBreathComponent, SprintDebuff);
	static_assert(UCharacterBreathComponent_SprintDebuff_Offset == 0x250, "UCharacterBreathComponent::SprintDebuff offset is not 250");
	auto constexpr UCharacterBreathComponent_MinimumBreathStartSprinting_Offset = offsetof(UCharacterBreathComponent, MinimumBreathStartSprinting);
	static_assert(UCharacterBreathComponent_MinimumBreathStartSprinting_Offset == 0x258, "UCharacterBreathComponent::MinimumBreathStartSprinting offset is not 258");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
