#pragma once
#include "UActorComponent.hpp"
#include "EDamageTypeCategory.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTslVehicleCommonComponent // Size: 0x2A0
	: public UActorComponent // Size: 0x1F0
{
private:
	typedef UTslVehicleCommonComponent t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1605); // id32("Class TslGame.TslVehicleCommonComponent")
		return ptr;
	}
//	FScriptMulticastDelegate OnBreak; /* Ofs: 0x1E8 Size: 0x10 - MulticastDelegateProperty TslGame.TslVehicleCommonComponent.OnBreak */
	uint8_t UnknownData1F0[0x8];
	FScriptMulticastDelegate OnRepair; /* Ofs: 0x1F8 Size: 0x10 - MulticastDelegateProperty TslGame.TslVehicleCommonComponent.OnRepair */
	FScriptMulticastDelegate OnDeath; /* Ofs: 0x208 Size: 0x10 - MulticastDelegateProperty TslGame.TslVehicleCommonComponent.OnDeath */
	FScriptMulticastDelegate OnHealthChange; /* Ofs: 0x218 Size: 0x10 - MulticastDelegateProperty TslGame.TslVehicleCommonComponent.OnHealthChange */
	FScriptMulticastDelegate OnFuelChange; /* Ofs: 0x228 Size: 0x10 - MulticastDelegateProperty TslGame.TslVehicleCommonComponent.OnFuelChange */
	FName SimpleBodyBoneName; /* Ofs: 0x238 Size: 0x8 - NameProperty TslGame.TslVehicleCommonComponent.SimpleBodyBoneName */
	TArray<struct FName> ComplexBodyBoneNames; /* Ofs: 0x240 Size: 0x10 - ArrayProperty TslGame.TslVehicleCommonComponent.ComplexBodyBoneNames */
	FName MainComplexBodyBoneName; /* Ofs: 0x250 Size: 0x8 - NameProperty TslGame.TslVehicleCommonComponent.MainComplexBodyBoneName */
	FName ComplexCollisionProfileName; /* Ofs: 0x258 Size: 0x8 - NameProperty TslGame.TslVehicleCommonComponent.ComplexCollisionProfileName */
	uint8_t boolField260;
	uint8_t UnknownData261[0x3];
	float Health; /* Ofs: 0x264 Size: 0x4 - FloatProperty TslGame.TslVehicleCommonComponent.Health */
	float HealthMax; /* Ofs: 0x268 Size: 0x4 - FloatProperty TslGame.TslVehicleCommonComponent.HealthMax */
	float Fuel; /* Ofs: 0x26C Size: 0x4 - FloatProperty TslGame.TslVehicleCommonComponent.Fuel */
	float FuelMax; /* Ofs: 0x270 Size: 0x4 - FloatProperty TslGame.TslVehicleCommonComponent.FuelMax */
	uint8_t UnknownData274[0x4];
	ExternalPtr<struct UClass> VehicleExplosionDamageType; /* Ofs: 0x278 Size: 0x8 - ClassProperty TslGame.TslVehicleCommonComponent.VehicleExplosionDamageType */
	TArray<EDamageTypeCategory> CharacterDamageIgnores; /* Ofs: 0x280 Size: 0x10 - ArrayProperty TslGame.TslVehicleCommonComponent.CharacterDamageIgnores */
	ExternalPtr<struct UClass> VehicleUI; /* Ofs: 0x290 Size: 0x8 - ClassProperty TslGame.TslVehicleCommonComponent.VehicleUI */
	uint8_t UnknownData298[0x8];


//	inline bool SetOnBreak(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x1E8, value); }
	inline bool SetOnRepair(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x1F8, value); }
	inline bool SetOnDeath(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x208, value); }
	inline bool SetOnHealthChange(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x218, value); }
	inline bool SetOnFuelChange(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x228, value); }
	inline bool SetSimpleBodyBoneName(t_structHelper inst, FName value) { inst.WriteOffset(0x238, value); }
	inline bool SetComplexBodyBoneNames(t_structHelper inst, TArray<struct FName> value) { inst.WriteOffset(0x240, value); }
	inline bool SetMainComplexBodyBoneName(t_structHelper inst, FName value) { inst.WriteOffset(0x250, value); }
	inline bool SetComplexCollisionProfileName(t_structHelper inst, FName value) { inst.WriteOffset(0x258, value); }
	inline bool bIsDying()
	{
		return boolField260& 0x1;
	}
	inline bool SetbIsDying(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x260, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bIsBroken()
	{
		return boolField260& 0x2;
	}
	inline bool SetbIsBroken(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x260, (uint8_t)(value ? curVal | (uint8_t)2 : curVal & ~(uint8_t)2));
	}
	inline bool SetHealth(t_structHelper inst, float value) { inst.WriteOffset(0x264, value); }
	inline bool SetHealthMax(t_structHelper inst, float value) { inst.WriteOffset(0x268, value); }
	inline bool SetFuel(t_structHelper inst, float value) { inst.WriteOffset(0x26C, value); }
	inline bool SetFuelMax(t_structHelper inst, float value) { inst.WriteOffset(0x270, value); }
	inline bool SetVehicleExplosionDamageType(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0x278, value); }
	inline bool SetCharacterDamageIgnores(t_structHelper inst, TArray<EDamageTypeCategory> value) { inst.WriteOffset(0x280, value); }
	inline bool SetVehicleUI(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0x290, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTslVehicleCommonComponent = sizeof(UTslVehicleCommonComponent); // 672
    static_assert(sizeof(UTslVehicleCommonComponent) == 0x2A0, "Size of UTslVehicleCommonComponent is not correct.");
//	auto constexpr UTslVehicleCommonComponent_OnBreak_Offset = offsetof(UTslVehicleCommonComponent, OnBreak);
//	static_assert(UTslVehicleCommonComponent_OnBreak_Offset == 0x1e8, "UTslVehicleCommonComponent::OnBreak offset is not 1e8");
	auto constexpr UTslVehicleCommonComponent_OnRepair_Offset = offsetof(UTslVehicleCommonComponent, OnRepair);
	static_assert(UTslVehicleCommonComponent_OnRepair_Offset == 0x1f8, "UTslVehicleCommonComponent::OnRepair offset is not 1f8");
	auto constexpr UTslVehicleCommonComponent_OnDeath_Offset = offsetof(UTslVehicleCommonComponent, OnDeath);
	static_assert(UTslVehicleCommonComponent_OnDeath_Offset == 0x208, "UTslVehicleCommonComponent::OnDeath offset is not 208");
	auto constexpr UTslVehicleCommonComponent_OnHealthChange_Offset = offsetof(UTslVehicleCommonComponent, OnHealthChange);
	static_assert(UTslVehicleCommonComponent_OnHealthChange_Offset == 0x218, "UTslVehicleCommonComponent::OnHealthChange offset is not 218");
	auto constexpr UTslVehicleCommonComponent_OnFuelChange_Offset = offsetof(UTslVehicleCommonComponent, OnFuelChange);
	static_assert(UTslVehicleCommonComponent_OnFuelChange_Offset == 0x228, "UTslVehicleCommonComponent::OnFuelChange offset is not 228");
	auto constexpr UTslVehicleCommonComponent_SimpleBodyBoneName_Offset = offsetof(UTslVehicleCommonComponent, SimpleBodyBoneName);
	static_assert(UTslVehicleCommonComponent_SimpleBodyBoneName_Offset == 0x238, "UTslVehicleCommonComponent::SimpleBodyBoneName offset is not 238");
	auto constexpr UTslVehicleCommonComponent_ComplexBodyBoneNames_Offset = offsetof(UTslVehicleCommonComponent, ComplexBodyBoneNames);
	static_assert(UTslVehicleCommonComponent_ComplexBodyBoneNames_Offset == 0x240, "UTslVehicleCommonComponent::ComplexBodyBoneNames offset is not 240");
	auto constexpr UTslVehicleCommonComponent_MainComplexBodyBoneName_Offset = offsetof(UTslVehicleCommonComponent, MainComplexBodyBoneName);
	static_assert(UTslVehicleCommonComponent_MainComplexBodyBoneName_Offset == 0x250, "UTslVehicleCommonComponent::MainComplexBodyBoneName offset is not 250");
	auto constexpr UTslVehicleCommonComponent_ComplexCollisionProfileName_Offset = offsetof(UTslVehicleCommonComponent, ComplexCollisionProfileName);
	static_assert(UTslVehicleCommonComponent_ComplexCollisionProfileName_Offset == 0x258, "UTslVehicleCommonComponent::ComplexCollisionProfileName offset is not 258");
	auto constexpr UTslVehicleCommonComponent_boolField260_Offset = offsetof(UTslVehicleCommonComponent, boolField260);
	static_assert(UTslVehicleCommonComponent_boolField260_Offset == 0x260, "UTslVehicleCommonComponent::boolField260 offset is not 260");
	auto constexpr UTslVehicleCommonComponent_Health_Offset = offsetof(UTslVehicleCommonComponent, Health);
	static_assert(UTslVehicleCommonComponent_Health_Offset == 0x264, "UTslVehicleCommonComponent::Health offset is not 264");
	auto constexpr UTslVehicleCommonComponent_HealthMax_Offset = offsetof(UTslVehicleCommonComponent, HealthMax);
	static_assert(UTslVehicleCommonComponent_HealthMax_Offset == 0x268, "UTslVehicleCommonComponent::HealthMax offset is not 268");
	auto constexpr UTslVehicleCommonComponent_Fuel_Offset = offsetof(UTslVehicleCommonComponent, Fuel);
	static_assert(UTslVehicleCommonComponent_Fuel_Offset == 0x26c, "UTslVehicleCommonComponent::Fuel offset is not 26c");
	auto constexpr UTslVehicleCommonComponent_FuelMax_Offset = offsetof(UTslVehicleCommonComponent, FuelMax);
	static_assert(UTslVehicleCommonComponent_FuelMax_Offset == 0x270, "UTslVehicleCommonComponent::FuelMax offset is not 270");
	auto constexpr UTslVehicleCommonComponent_VehicleExplosionDamageType_Offset = offsetof(UTslVehicleCommonComponent, VehicleExplosionDamageType);
	static_assert(UTslVehicleCommonComponent_VehicleExplosionDamageType_Offset == 0x278, "UTslVehicleCommonComponent::VehicleExplosionDamageType offset is not 278");
	auto constexpr UTslVehicleCommonComponent_CharacterDamageIgnores_Offset = offsetof(UTslVehicleCommonComponent, CharacterDamageIgnores);
	static_assert(UTslVehicleCommonComponent_CharacterDamageIgnores_Offset == 0x280, "UTslVehicleCommonComponent::CharacterDamageIgnores offset is not 280");
	auto constexpr UTslVehicleCommonComponent_VehicleUI_Offset = offsetof(UTslVehicleCommonComponent, VehicleUI);
	static_assert(UTslVehicleCommonComponent_VehicleUI_Offset == 0x290, "UTslVehicleCommonComponent::VehicleUI offset is not 290");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
