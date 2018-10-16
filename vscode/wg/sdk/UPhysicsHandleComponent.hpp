#pragma once
#include "UActorComponent.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UPhysicsHandleComponent // Size: 0x290
	: public UActorComponent // Size: 0x1F0
{
private:
	typedef UPhysicsHandleComponent t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1811); // id32("Class Engine.PhysicsHandleComponent")
		return ptr;
	}
//	ExternalPtr<struct UPrimitiveComponent> GrabbedComponent; /* Ofs: 0x1E8 Size: 0x8 - ObjectProperty Engine.PhysicsHandleComponent.GrabbedComponent */
	uint8_t UnknownData1F0[0xC];
	uint8_t boolField1FC;
	uint8_t UnknownData1FD[0x3];
	float LinearDamping; /* Ofs: 0x200 Size: 0x4 - FloatProperty Engine.PhysicsHandleComponent.LinearDamping */
	float LinearStiffness; /* Ofs: 0x204 Size: 0x4 - FloatProperty Engine.PhysicsHandleComponent.LinearStiffness */
	float AngularDamping; /* Ofs: 0x208 Size: 0x4 - FloatProperty Engine.PhysicsHandleComponent.AngularDamping */
	float AngularStiffness; /* Ofs: 0x20C Size: 0x4 - FloatProperty Engine.PhysicsHandleComponent.AngularStiffness */
	uint8_t UnknownData210[0x60];
	float InterpolationSpeed; /* Ofs: 0x270 Size: 0x4 - FloatProperty Engine.PhysicsHandleComponent.InterpolationSpeed */
	uint8_t UnknownData274[0x1C];


//	inline bool SetGrabbedComponent(t_structHelper inst, ExternalPtr<struct UPrimitiveComponent> value) { inst.WriteOffset(0x1E8, value); }
	inline bool bSoftAngularConstraint()
	{
		return boolField1FC& 0x2;
	}
	inline bool SetbSoftAngularConstraint(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x1FC, (uint8_t)(value ? curVal | (uint8_t)2 : curVal & ~(uint8_t)2));
	}
	inline bool bSoftLinearConstraint()
	{
		return boolField1FC& 0x4;
	}
	inline bool SetbSoftLinearConstraint(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x1FC, (uint8_t)(value ? curVal | (uint8_t)4 : curVal & ~(uint8_t)4));
	}
	inline bool bInterpolateTarget()
	{
		return boolField1FC& 0x8;
	}
	inline bool SetbInterpolateTarget(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x1FC, (uint8_t)(value ? curVal | (uint8_t)8 : curVal & ~(uint8_t)8));
	}
	inline bool SetLinearDamping(t_structHelper inst, float value) { inst.WriteOffset(0x200, value); }
	inline bool SetLinearStiffness(t_structHelper inst, float value) { inst.WriteOffset(0x204, value); }
	inline bool SetAngularDamping(t_structHelper inst, float value) { inst.WriteOffset(0x208, value); }
	inline bool SetAngularStiffness(t_structHelper inst, float value) { inst.WriteOffset(0x20C, value); }
	inline bool SetInterpolationSpeed(t_structHelper inst, float value) { inst.WriteOffset(0x270, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUPhysicsHandleComponent = sizeof(UPhysicsHandleComponent); // 656
    static_assert(sizeof(UPhysicsHandleComponent) == 0x290, "Size of UPhysicsHandleComponent is not correct.");
//	auto constexpr UPhysicsHandleComponent_GrabbedComponent_Offset = offsetof(UPhysicsHandleComponent, GrabbedComponent);
//	static_assert(UPhysicsHandleComponent_GrabbedComponent_Offset == 0x1e8, "UPhysicsHandleComponent::GrabbedComponent offset is not 1e8");
	auto constexpr UPhysicsHandleComponent_boolField1FC_Offset = offsetof(UPhysicsHandleComponent, boolField1FC);
	static_assert(UPhysicsHandleComponent_boolField1FC_Offset == 0x1fc, "UPhysicsHandleComponent::boolField1FC offset is not 1fc");
	auto constexpr UPhysicsHandleComponent_LinearDamping_Offset = offsetof(UPhysicsHandleComponent, LinearDamping);
	static_assert(UPhysicsHandleComponent_LinearDamping_Offset == 0x200, "UPhysicsHandleComponent::LinearDamping offset is not 200");
	auto constexpr UPhysicsHandleComponent_LinearStiffness_Offset = offsetof(UPhysicsHandleComponent, LinearStiffness);
	static_assert(UPhysicsHandleComponent_LinearStiffness_Offset == 0x204, "UPhysicsHandleComponent::LinearStiffness offset is not 204");
	auto constexpr UPhysicsHandleComponent_AngularDamping_Offset = offsetof(UPhysicsHandleComponent, AngularDamping);
	static_assert(UPhysicsHandleComponent_AngularDamping_Offset == 0x208, "UPhysicsHandleComponent::AngularDamping offset is not 208");
	auto constexpr UPhysicsHandleComponent_AngularStiffness_Offset = offsetof(UPhysicsHandleComponent, AngularStiffness);
	static_assert(UPhysicsHandleComponent_AngularStiffness_Offset == 0x20c, "UPhysicsHandleComponent::AngularStiffness offset is not 20c");
	auto constexpr UPhysicsHandleComponent_InterpolationSpeed_Offset = offsetof(UPhysicsHandleComponent, InterpolationSpeed);
	static_assert(UPhysicsHandleComponent_InterpolationSpeed_Offset == 0x270, "UPhysicsHandleComponent::InterpolationSpeed offset is not 270");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
