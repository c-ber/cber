#pragma once
#include "USceneComponent.hpp"
#include "ERadialImpulseFalloff.hpp"
#include "EObjectTypeQuery.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) URadialForceComponent // Size: 0x4C0
	: public USceneComponent // Size: 0x490
{
private:
	typedef URadialForceComponent t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(228); // id32("Class Engine.RadialForceComponent")
		return ptr;
	}
	float Radius; /* Ofs: 0x490 Size: 0x4 - FloatProperty Engine.RadialForceComponent.Radius */
	TEnumAsByte<enum ERadialImpulseFalloff> Falloff; /* Ofs: 0x494 Size: 0x1 - ByteProperty Engine.RadialForceComponent.Falloff */
	uint8_t UnknownData495[0x3];
	float ImpulseStrength; /* Ofs: 0x498 Size: 0x4 - FloatProperty Engine.RadialForceComponent.ImpulseStrength */
	uint8_t boolField49C;
	uint8_t UnknownData49D[0x3];
	float ForceStrength; /* Ofs: 0x4A0 Size: 0x4 - FloatProperty Engine.RadialForceComponent.ForceStrength */
	float DestructibleDamage; /* Ofs: 0x4A4 Size: 0x4 - FloatProperty Engine.RadialForceComponent.DestructibleDamage */
	TArray<EObjectTypeQuery> ObjectTypesToAffect; /* Ofs: 0x4A8 Size: 0x10 - ArrayProperty Engine.RadialForceComponent.ObjectTypesToAffect */
	uint8_t UnknownData4B8[0x8];


	inline bool SetRadius(t_structHelper inst, float value) { inst.WriteOffset(0x490, value); }
	inline bool SetFalloff(t_structHelper inst, TEnumAsByte<enum ERadialImpulseFalloff> value) { inst.WriteOffset(0x494, value); }
	inline bool SetImpulseStrength(t_structHelper inst, float value) { inst.WriteOffset(0x498, value); }
	inline bool bImpulseVelChange()
	{
		return boolField49C& 0x1;
	}
	inline bool SetbImpulseVelChange(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x49C, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bIgnoreOwningActor()
	{
		return boolField49C& 0x2;
	}
	inline bool SetbIgnoreOwningActor(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x49C, (uint8_t)(value ? curVal | (uint8_t)2 : curVal & ~(uint8_t)2));
	}
	inline bool SetForceStrength(t_structHelper inst, float value) { inst.WriteOffset(0x4A0, value); }
	inline bool SetDestructibleDamage(t_structHelper inst, float value) { inst.WriteOffset(0x4A4, value); }
	inline bool SetObjectTypesToAffect(t_structHelper inst, TArray<EObjectTypeQuery> value) { inst.WriteOffset(0x4A8, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofURadialForceComponent = sizeof(URadialForceComponent); // 1216
    static_assert(sizeof(URadialForceComponent) == 0x4C0, "Size of URadialForceComponent is not correct.");
	auto constexpr URadialForceComponent_Radius_Offset = offsetof(URadialForceComponent, Radius);
	static_assert(URadialForceComponent_Radius_Offset == 0x490, "URadialForceComponent::Radius offset is not 490");
	auto constexpr URadialForceComponent_Falloff_Offset = offsetof(URadialForceComponent, Falloff);
	static_assert(URadialForceComponent_Falloff_Offset == 0x494, "URadialForceComponent::Falloff offset is not 494");
	auto constexpr URadialForceComponent_ImpulseStrength_Offset = offsetof(URadialForceComponent, ImpulseStrength);
	static_assert(URadialForceComponent_ImpulseStrength_Offset == 0x498, "URadialForceComponent::ImpulseStrength offset is not 498");
	auto constexpr URadialForceComponent_boolField49C_Offset = offsetof(URadialForceComponent, boolField49C);
	static_assert(URadialForceComponent_boolField49C_Offset == 0x49c, "URadialForceComponent::boolField49C offset is not 49c");
	auto constexpr URadialForceComponent_ForceStrength_Offset = offsetof(URadialForceComponent, ForceStrength);
	static_assert(URadialForceComponent_ForceStrength_Offset == 0x4a0, "URadialForceComponent::ForceStrength offset is not 4a0");
	auto constexpr URadialForceComponent_DestructibleDamage_Offset = offsetof(URadialForceComponent, DestructibleDamage);
	static_assert(URadialForceComponent_DestructibleDamage_Offset == 0x4a4, "URadialForceComponent::DestructibleDamage offset is not 4a4");
	auto constexpr URadialForceComponent_ObjectTypesToAffect_Offset = offsetof(URadialForceComponent, ObjectTypesToAffect);
	static_assert(URadialForceComponent_ObjectTypesToAffect_Offset == 0x4a8, "URadialForceComponent::ObjectTypesToAffect offset is not 4a8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
