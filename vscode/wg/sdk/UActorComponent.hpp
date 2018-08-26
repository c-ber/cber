#pragma once
#include "FActorComponentTickFunction.hpp"
#include "EComponentCreationMethod.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UActorComponent // Size: 0x1F0
	: public UObject // Size: 0x30
{
private:
	typedef UActorComponent t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(6); // id32("Class Engine.ActorComponent")
		return ptr;
	}
	uint8_t UnknownData30[0xF0];
	FActorComponentTickFunction PrimaryComponentTick; /* Ofs: 0x120 Size: 0x58 - StructProperty Engine.ActorComponent.PrimaryComponentTick */
	TArray<struct FName> ComponentTags; /* Ofs: 0x178 Size: 0x10 - ArrayProperty Engine.ActorComponent.ComponentTags */
	TArray<ExternalPtr<struct UAssetUserData>> AssetUserData; /* Ofs: 0x188 Size: 0x10 - ArrayProperty Engine.ActorComponent.AssetUserData */
	uint8_t boolField198;
	uint8_t boolField199;
	uint8_t boolField19A;
	uint8_t boolField19B;
	uint8_t UnknownData19C[0x5];
	TEnumAsByte<enum EComponentCreationMethod> CreationMethod; /* Ofs: 0x1A1 Size: 0x1 - EnumProperty Engine.ActorComponent.CreationMethod */
	uint8_t UnknownData1A2[0xE];
	TArray<struct FSimpleMemberReference> UCSModifiedProperties; /* Ofs: 0x1B0 Size: 0x10 - ArrayProperty Engine.ActorComponent.UCSModifiedProperties */
	FScriptMulticastDelegate OnComponentActivated; /* Ofs: 0x1C0 Size: 0x10 - MulticastDelegateProperty Engine.ActorComponent.OnComponentActivated */
	FScriptMulticastDelegate OnComponentDeactivated; /* Ofs: 0x1D0 Size: 0x10 - MulticastDelegateProperty Engine.ActorComponent.OnComponentDeactivated */
	uint8_t UnknownData1E0[0x10];


	inline bool SetPrimaryComponentTick(t_structHelper inst, FActorComponentTickFunction value) { inst.WriteOffset(0x120, value); }
	inline bool SetComponentTags(t_structHelper inst, TArray<struct FName> value) { inst.WriteOffset(0x178, value); }
	inline bool SetAssetUserData(t_structHelper inst, TArray<ExternalPtr<struct UAssetUserData>> value) { inst.WriteOffset(0x188, value); }
	inline bool bReplicates()
	{
		return boolField198& 0x8;
	}
	inline bool SetbReplicates(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x198, (uint8_t)(value ? curVal | (uint8_t)8 : curVal & ~(uint8_t)8));
	}
	inline bool bNetAddressable()
	{
		return boolField198& 0x10;
	}
	inline bool SetbNetAddressable(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x198, (uint8_t)(value ? curVal | (uint8_t)16 : curVal & ~(uint8_t)16));
	}
	inline bool bCreatedByConstructionScript()
	{
		return boolField199& 0x80;
	}
	inline bool SetbCreatedByConstructionScript(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x199, (uint8_t)(value ? curVal | (uint8_t)128 : curVal & ~(uint8_t)128));
	}
	inline bool bInstanceComponent()
	{
		return boolField19A& 0x1;
	}
	inline bool SetbInstanceComponent(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x19A, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bAutoActivate()
	{
		return boolField19A& 0x2;
	}
	inline bool SetbAutoActivate(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x19A, (uint8_t)(value ? curVal | (uint8_t)2 : curVal & ~(uint8_t)2));
	}
	inline bool bIsActive()
	{
		return boolField19A& 0x4;
	}
	inline bool SetbIsActive(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x19A, (uint8_t)(value ? curVal | (uint8_t)4 : curVal & ~(uint8_t)4));
	}
	inline bool bEditableWhenInherited()
	{
		return boolField19A& 0x8;
	}
	inline bool SetbEditableWhenInherited(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x19A, (uint8_t)(value ? curVal | (uint8_t)8 : curVal & ~(uint8_t)8));
	}
	inline bool bCanEverAffectNavigation()
	{
		return boolField19A& 0x20;
	}
	inline bool SetbCanEverAffectNavigation(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x19A, (uint8_t)(value ? curVal | (uint8_t)32 : curVal & ~(uint8_t)32));
	}
	inline bool bIsEditorOnly()
	{
		return boolField19B& 0x1;
	}
	inline bool SetbIsEditorOnly(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x19B, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetCreationMethod(t_structHelper inst, TEnumAsByte<enum EComponentCreationMethod> value) { inst.WriteOffset(0x1A1, value); }
	inline bool SetUCSModifiedProperties(t_structHelper inst, TArray<struct FSimpleMemberReference> value) { inst.WriteOffset(0x1B0, value); }
	inline bool SetOnComponentActivated(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x1C0, value); }
	inline bool SetOnComponentDeactivated(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x1D0, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUActorComponent = sizeof(UActorComponent); // 496
    static_assert(sizeof(UActorComponent) == 0x1F0, "Size of UActorComponent is not correct.");
	auto constexpr UActorComponent_PrimaryComponentTick_Offset = offsetof(UActorComponent, PrimaryComponentTick);
	static_assert(UActorComponent_PrimaryComponentTick_Offset == 0x120, "UActorComponent::PrimaryComponentTick offset is not 120");
	auto constexpr UActorComponent_ComponentTags_Offset = offsetof(UActorComponent, ComponentTags);
	static_assert(UActorComponent_ComponentTags_Offset == 0x178, "UActorComponent::ComponentTags offset is not 178");
	auto constexpr UActorComponent_AssetUserData_Offset = offsetof(UActorComponent, AssetUserData);
	static_assert(UActorComponent_AssetUserData_Offset == 0x188, "UActorComponent::AssetUserData offset is not 188");
	auto constexpr UActorComponent_boolField198_Offset = offsetof(UActorComponent, boolField198);
	static_assert(UActorComponent_boolField198_Offset == 0x198, "UActorComponent::boolField198 offset is not 198");
	auto constexpr UActorComponent_boolField199_Offset = offsetof(UActorComponent, boolField199);
	static_assert(UActorComponent_boolField199_Offset == 0x199, "UActorComponent::boolField199 offset is not 199");
	auto constexpr UActorComponent_boolField19A_Offset = offsetof(UActorComponent, boolField19A);
	static_assert(UActorComponent_boolField19A_Offset == 0x19a, "UActorComponent::boolField19A offset is not 19a");
	auto constexpr UActorComponent_boolField19B_Offset = offsetof(UActorComponent, boolField19B);
	static_assert(UActorComponent_boolField19B_Offset == 0x19b, "UActorComponent::boolField19B offset is not 19b");
	auto constexpr UActorComponent_CreationMethod_Offset = offsetof(UActorComponent, CreationMethod);
	static_assert(UActorComponent_CreationMethod_Offset == 0x1a1, "UActorComponent::CreationMethod offset is not 1a1");
	auto constexpr UActorComponent_UCSModifiedProperties_Offset = offsetof(UActorComponent, UCSModifiedProperties);
	static_assert(UActorComponent_UCSModifiedProperties_Offset == 0x1b0, "UActorComponent::UCSModifiedProperties offset is not 1b0");
	auto constexpr UActorComponent_OnComponentActivated_Offset = offsetof(UActorComponent, OnComponentActivated);
	static_assert(UActorComponent_OnComponentActivated_Offset == 0x1c0, "UActorComponent::OnComponentActivated offset is not 1c0");
	auto constexpr UActorComponent_OnComponentDeactivated_Offset = offsetof(UActorComponent, OnComponentDeactivated);
	static_assert(UActorComponent_OnComponentDeactivated_Offset == 0x1d0, "UActorComponent::OnComponentDeactivated offset is not 1d0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
