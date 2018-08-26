#pragma once
#include "UActorComponent.hpp"
#include "FVector.hpp"
#include "EPlaneConstraintAxisSetting.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMovementComponent // Size: 0x230
	: public UActorComponent // Size: 0x1F0
{
private:
	typedef UMovementComponent t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1308); // id32("Class Engine.MovementComponent")
		return ptr;
	}
//	ExternalPtr<struct USceneComponent> UpdatedComponent; /* Ofs: 0x1E8 Size: 0x8 - ObjectProperty Engine.MovementComponent.UpdatedComponent */
	ExternalPtr<struct UPrimitiveComponent> UpdatedPrimitive; /* Ofs: 0x1F0 Size: 0x8 - ObjectProperty Engine.MovementComponent.UpdatedPrimitive */
	uint8_t UnknownData1F8[0x4];
	FVector Velocity; /* Ofs: 0x1FC Size: 0xC - StructProperty Engine.MovementComponent.Velocity */
	uint8_t boolField208;
	uint8_t UnknownData209[0x3];
	TEnumAsByte<enum EPlaneConstraintAxisSetting> PlaneConstraintAxisSetting; /* Ofs: 0x20C Size: 0x1 - EnumProperty Engine.MovementComponent.PlaneConstraintAxisSetting */
	uint8_t UnknownData20D[0x3];
	FVector PlaneConstraintNormal; /* Ofs: 0x210 Size: 0xC - StructProperty Engine.MovementComponent.PlaneConstraintNormal */
	FVector PlaneConstraintOrigin; /* Ofs: 0x21C Size: 0xC - StructProperty Engine.MovementComponent.PlaneConstraintOrigin */
	uint8_t boolField228;
	uint8_t UnknownData229[0x7];


//	inline bool SetUpdatedComponent(t_structHelper inst, ExternalPtr<struct USceneComponent> value) { inst.WriteOffset(0x1E8, value); }
	inline bool SetUpdatedPrimitive(t_structHelper inst, ExternalPtr<struct UPrimitiveComponent> value) { inst.WriteOffset(0x1F0, value); }
	inline bool SetVelocity(t_structHelper inst, FVector value) { inst.WriteOffset(0x1FC, value); }
	inline bool bConstrainToPlane()
	{
		return boolField208& 0x1;
	}
	inline bool SetbConstrainToPlane(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x208, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bSnapToPlaneAtStart()
	{
		return boolField208& 0x2;
	}
	inline bool SetbSnapToPlaneAtStart(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x208, (uint8_t)(value ? curVal | (uint8_t)2 : curVal & ~(uint8_t)2));
	}
	inline bool SetPlaneConstraintAxisSetting(t_structHelper inst, TEnumAsByte<enum EPlaneConstraintAxisSetting> value) { inst.WriteOffset(0x20C, value); }
	inline bool SetPlaneConstraintNormal(t_structHelper inst, FVector value) { inst.WriteOffset(0x210, value); }
	inline bool SetPlaneConstraintOrigin(t_structHelper inst, FVector value) { inst.WriteOffset(0x21C, value); }
	inline bool bUpdateOnlyIfRendered()
	{
		return boolField228& 0x1;
	}
	inline bool SetbUpdateOnlyIfRendered(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x228, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bAutoUpdateTickRegistration()
	{
		return boolField228& 0x2;
	}
	inline bool SetbAutoUpdateTickRegistration(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x228, (uint8_t)(value ? curVal | (uint8_t)2 : curVal & ~(uint8_t)2));
	}
	inline bool bTickBeforeOwner()
	{
		return boolField228& 0x4;
	}
	inline bool SetbTickBeforeOwner(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x228, (uint8_t)(value ? curVal | (uint8_t)4 : curVal & ~(uint8_t)4));
	}
	inline bool bAutoRegisterUpdatedComponent()
	{
		return boolField228& 0x8;
	}
	inline bool SetbAutoRegisterUpdatedComponent(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x228, (uint8_t)(value ? curVal | (uint8_t)8 : curVal & ~(uint8_t)8));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMovementComponent = sizeof(UMovementComponent); // 560
    static_assert(sizeof(UMovementComponent) == 0x230, "Size of UMovementComponent is not correct.");
//	auto constexpr UMovementComponent_UpdatedComponent_Offset = offsetof(UMovementComponent, UpdatedComponent);
//	static_assert(UMovementComponent_UpdatedComponent_Offset == 0x1e8, "UMovementComponent::UpdatedComponent offset is not 1e8");
	auto constexpr UMovementComponent_UpdatedPrimitive_Offset = offsetof(UMovementComponent, UpdatedPrimitive);
	static_assert(UMovementComponent_UpdatedPrimitive_Offset == 0x1f0, "UMovementComponent::UpdatedPrimitive offset is not 1f0");
	auto constexpr UMovementComponent_Velocity_Offset = offsetof(UMovementComponent, Velocity);
	static_assert(UMovementComponent_Velocity_Offset == 0x1fc, "UMovementComponent::Velocity offset is not 1fc");
	auto constexpr UMovementComponent_boolField208_Offset = offsetof(UMovementComponent, boolField208);
	static_assert(UMovementComponent_boolField208_Offset == 0x208, "UMovementComponent::boolField208 offset is not 208");
	auto constexpr UMovementComponent_PlaneConstraintAxisSetting_Offset = offsetof(UMovementComponent, PlaneConstraintAxisSetting);
	static_assert(UMovementComponent_PlaneConstraintAxisSetting_Offset == 0x20c, "UMovementComponent::PlaneConstraintAxisSetting offset is not 20c");
	auto constexpr UMovementComponent_PlaneConstraintNormal_Offset = offsetof(UMovementComponent, PlaneConstraintNormal);
	static_assert(UMovementComponent_PlaneConstraintNormal_Offset == 0x210, "UMovementComponent::PlaneConstraintNormal offset is not 210");
	auto constexpr UMovementComponent_PlaneConstraintOrigin_Offset = offsetof(UMovementComponent, PlaneConstraintOrigin);
	static_assert(UMovementComponent_PlaneConstraintOrigin_Offset == 0x21c, "UMovementComponent::PlaneConstraintOrigin offset is not 21c");
	auto constexpr UMovementComponent_boolField228_Offset = offsetof(UMovementComponent, boolField228);
	static_assert(UMovementComponent_boolField228_Offset == 0x228, "UMovementComponent::boolField228 offset is not 228");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
