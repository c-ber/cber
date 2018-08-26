#pragma once
#include "UMovementComponent.hpp"
#include "EInterpToBehaviourType.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UInterpToMovementComponent // Size: 0x2D0
	: public UMovementComponent // Size: 0x230
{
private:
	typedef UInterpToMovementComponent t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1797); // id32("Class Engine.InterpToMovementComponent")
		return ptr;
	}
	float Duration; /* Ofs: 0x230 Size: 0x4 - FloatProperty Engine.InterpToMovementComponent.Duration */
	uint8_t boolField234;
	uint8_t UnknownData235[0x3];
	TEnumAsByte<enum EInterpToBehaviourType> BehaviourType; /* Ofs: 0x238 Size: 0x1 - EnumProperty Engine.InterpToMovementComponent.BehaviourType */
	uint8_t UnknownData239[0x3];
	uint8_t boolField23C;
	uint8_t UnknownData23D[0x3];
	FScriptMulticastDelegate OnInterpToReverse; /* Ofs: 0x240 Size: 0x10 - MulticastDelegateProperty Engine.InterpToMovementComponent.OnInterpToReverse */
	FScriptMulticastDelegate OnInterpToStop; /* Ofs: 0x250 Size: 0x10 - MulticastDelegateProperty Engine.InterpToMovementComponent.OnInterpToStop */
	FScriptMulticastDelegate OnWaitBeginDelegate; /* Ofs: 0x260 Size: 0x10 - MulticastDelegateProperty Engine.InterpToMovementComponent.OnWaitBeginDelegate */
	FScriptMulticastDelegate OnWaitEndDelegate; /* Ofs: 0x270 Size: 0x10 - MulticastDelegateProperty Engine.InterpToMovementComponent.OnWaitEndDelegate */
	FScriptMulticastDelegate OnResetDelegate; /* Ofs: 0x280 Size: 0x10 - MulticastDelegateProperty Engine.InterpToMovementComponent.OnResetDelegate */
	float MaxSimulationTimeStep; /* Ofs: 0x290 Size: 0x4 - FloatProperty Engine.InterpToMovementComponent.MaxSimulationTimeStep */
	int32_t MaxSimulationIterations; /* Ofs: 0x294 Size: 0x4 - IntProperty Engine.InterpToMovementComponent.MaxSimulationIterations */
	TArray<struct FInterpControlPoint> ControlPoints; /* Ofs: 0x298 Size: 0x10 - ArrayProperty Engine.InterpToMovementComponent.ControlPoints */
	uint8_t UnknownData2A8[0x28];


	inline bool SetDuration(t_structHelper inst, float value) { inst.WriteOffset(0x230, value); }
	inline bool bPauseOnImpact()
	{
		return boolField234& 0x1;
	}
	inline bool SetbPauseOnImpact(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x234, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetBehaviourType(t_structHelper inst, TEnumAsByte<enum EInterpToBehaviourType> value) { inst.WriteOffset(0x238, value); }
	inline bool bForceSubStepping()
	{
		return boolField23C& 0x1;
	}
	inline bool SetbForceSubStepping(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x23C, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetOnInterpToReverse(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x240, value); }
	inline bool SetOnInterpToStop(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x250, value); }
	inline bool SetOnWaitBeginDelegate(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x260, value); }
	inline bool SetOnWaitEndDelegate(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x270, value); }
	inline bool SetOnResetDelegate(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x280, value); }
	inline bool SetMaxSimulationTimeStep(t_structHelper inst, float value) { inst.WriteOffset(0x290, value); }
	inline bool SetMaxSimulationIterations(t_structHelper inst, int32_t value) { inst.WriteOffset(0x294, value); }
	inline bool SetControlPoints(t_structHelper inst, TArray<struct FInterpControlPoint> value) { inst.WriteOffset(0x298, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUInterpToMovementComponent = sizeof(UInterpToMovementComponent); // 720
    static_assert(sizeof(UInterpToMovementComponent) == 0x2D0, "Size of UInterpToMovementComponent is not correct.");
	auto constexpr UInterpToMovementComponent_Duration_Offset = offsetof(UInterpToMovementComponent, Duration);
	static_assert(UInterpToMovementComponent_Duration_Offset == 0x230, "UInterpToMovementComponent::Duration offset is not 230");
	auto constexpr UInterpToMovementComponent_boolField234_Offset = offsetof(UInterpToMovementComponent, boolField234);
	static_assert(UInterpToMovementComponent_boolField234_Offset == 0x234, "UInterpToMovementComponent::boolField234 offset is not 234");
	auto constexpr UInterpToMovementComponent_BehaviourType_Offset = offsetof(UInterpToMovementComponent, BehaviourType);
	static_assert(UInterpToMovementComponent_BehaviourType_Offset == 0x238, "UInterpToMovementComponent::BehaviourType offset is not 238");
	auto constexpr UInterpToMovementComponent_boolField23C_Offset = offsetof(UInterpToMovementComponent, boolField23C);
	static_assert(UInterpToMovementComponent_boolField23C_Offset == 0x23c, "UInterpToMovementComponent::boolField23C offset is not 23c");
	auto constexpr UInterpToMovementComponent_OnInterpToReverse_Offset = offsetof(UInterpToMovementComponent, OnInterpToReverse);
	static_assert(UInterpToMovementComponent_OnInterpToReverse_Offset == 0x240, "UInterpToMovementComponent::OnInterpToReverse offset is not 240");
	auto constexpr UInterpToMovementComponent_OnInterpToStop_Offset = offsetof(UInterpToMovementComponent, OnInterpToStop);
	static_assert(UInterpToMovementComponent_OnInterpToStop_Offset == 0x250, "UInterpToMovementComponent::OnInterpToStop offset is not 250");
	auto constexpr UInterpToMovementComponent_OnWaitBeginDelegate_Offset = offsetof(UInterpToMovementComponent, OnWaitBeginDelegate);
	static_assert(UInterpToMovementComponent_OnWaitBeginDelegate_Offset == 0x260, "UInterpToMovementComponent::OnWaitBeginDelegate offset is not 260");
	auto constexpr UInterpToMovementComponent_OnWaitEndDelegate_Offset = offsetof(UInterpToMovementComponent, OnWaitEndDelegate);
	static_assert(UInterpToMovementComponent_OnWaitEndDelegate_Offset == 0x270, "UInterpToMovementComponent::OnWaitEndDelegate offset is not 270");
	auto constexpr UInterpToMovementComponent_OnResetDelegate_Offset = offsetof(UInterpToMovementComponent, OnResetDelegate);
	static_assert(UInterpToMovementComponent_OnResetDelegate_Offset == 0x280, "UInterpToMovementComponent::OnResetDelegate offset is not 280");
	auto constexpr UInterpToMovementComponent_MaxSimulationTimeStep_Offset = offsetof(UInterpToMovementComponent, MaxSimulationTimeStep);
	static_assert(UInterpToMovementComponent_MaxSimulationTimeStep_Offset == 0x290, "UInterpToMovementComponent::MaxSimulationTimeStep offset is not 290");
	auto constexpr UInterpToMovementComponent_MaxSimulationIterations_Offset = offsetof(UInterpToMovementComponent, MaxSimulationIterations);
	static_assert(UInterpToMovementComponent_MaxSimulationIterations_Offset == 0x294, "UInterpToMovementComponent::MaxSimulationIterations offset is not 294");
	auto constexpr UInterpToMovementComponent_ControlPoints_Offset = offsetof(UInterpToMovementComponent, ControlPoints);
	static_assert(UInterpToMovementComponent_ControlPoints_Offset == 0x298, "UInterpToMovementComponent::ControlPoints offset is not 298");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
