#pragma once
#include "USceneInteractionComponent.hpp"
#include "EDoorState.hpp"
#include "FVector.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UDoorInteractionComponent // Size: 0x7A0
	: public USceneInteractionComponent // Size: 0x5A0
{
private:
	typedef UDoorInteractionComponent t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1948); // id32("Class TslGame.DoorInteractionComponent")
		return ptr;
	}
	uint8_t UnknownData5A0[0x10];
	TEnumAsByte<enum EDoorState> DoorState; /* Ofs: 0x5B0 Size: 0x1 - EnumProperty TslGame.DoorInteractionComponent.DoorState */
	uint8_t boolField5B1;
	uint8_t UnknownData5B2[0x2];
	FVector SoundOffset; /* Ofs: 0x5B4 Size: 0xC - StructProperty TslGame.DoorInteractionComponent.SoundOffset */
	ExternalPtr<struct UDoorDataAsset> DoorDataAsset; /* Ofs: 0x5C0 Size: 0x8 - ObjectProperty TslGame.DoorInteractionComponent.DoorDataAsset */
	uint8_t UnknownData5C8[0x1C8];
	ExternalPtr<struct UAkComponent> AkAudioComponent; /* Ofs: 0x790 Size: 0x8 - ObjectProperty TslGame.DoorInteractionComponent.AkAudioComponent */
	uint8_t UnknownData798[0x8];


	inline bool SetDoorState(t_structHelper inst, TEnumAsByte<enum EDoorState> value) { inst.WriteOffset(0x5B0, value); }
	inline bool bReverseRotation()
	{
		return boolField5B1& 0x1;
	}
	inline bool SetbReverseRotation(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x5B1, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bIgnoreParentValidityCheck()
	{
		return boolField5B1& 0x2;
	}
	inline bool SetbIgnoreParentValidityCheck(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x5B1, (uint8_t)(value ? curVal | (uint8_t)2 : curVal & ~(uint8_t)2));
	}
	inline bool SetSoundOffset(t_structHelper inst, FVector value) { inst.WriteOffset(0x5B4, value); }
	inline bool SetDoorDataAsset(t_structHelper inst, ExternalPtr<struct UDoorDataAsset> value) { inst.WriteOffset(0x5C0, value); }
	inline bool SetAkAudioComponent(t_structHelper inst, ExternalPtr<struct UAkComponent> value) { inst.WriteOffset(0x790, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUDoorInteractionComponent = sizeof(UDoorInteractionComponent); // 1952
    static_assert(sizeof(UDoorInteractionComponent) == 0x7A0, "Size of UDoorInteractionComponent is not correct.");
	auto constexpr UDoorInteractionComponent_DoorState_Offset = offsetof(UDoorInteractionComponent, DoorState);
	static_assert(UDoorInteractionComponent_DoorState_Offset == 0x5b0, "UDoorInteractionComponent::DoorState offset is not 5b0");
	auto constexpr UDoorInteractionComponent_boolField5B1_Offset = offsetof(UDoorInteractionComponent, boolField5B1);
	static_assert(UDoorInteractionComponent_boolField5B1_Offset == 0x5b1, "UDoorInteractionComponent::boolField5B1 offset is not 5b1");
	auto constexpr UDoorInteractionComponent_SoundOffset_Offset = offsetof(UDoorInteractionComponent, SoundOffset);
	static_assert(UDoorInteractionComponent_SoundOffset_Offset == 0x5b4, "UDoorInteractionComponent::SoundOffset offset is not 5b4");
	auto constexpr UDoorInteractionComponent_DoorDataAsset_Offset = offsetof(UDoorInteractionComponent, DoorDataAsset);
	static_assert(UDoorInteractionComponent_DoorDataAsset_Offset == 0x5c0, "UDoorInteractionComponent::DoorDataAsset offset is not 5c0");
	auto constexpr UDoorInteractionComponent_AkAudioComponent_Offset = offsetof(UDoorInteractionComponent, AkAudioComponent);
	static_assert(UDoorInteractionComponent_AkAudioComponent_Offset == 0x790, "UDoorInteractionComponent::AkAudioComponent offset is not 790");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
