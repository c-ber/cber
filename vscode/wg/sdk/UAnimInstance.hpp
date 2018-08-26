#pragma once
#include "ERootMotionMode.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UAnimInstance // Size: 0x380
	: public UObject // Size: 0x30
{
private:
	typedef UAnimInstance t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(269); // id32("Class Engine.AnimInstance")
		return ptr;
	}
	float DeltaTime; /* Ofs: 0x30 Size: 0x4 - FloatProperty Engine.AnimInstance.DeltaTime */
	uint8_t UnknownData34[0x4];
	ExternalPtr<struct USkeleton> CurrentSkeleton; /* Ofs: 0x38 Size: 0x8 - ObjectProperty Engine.AnimInstance.CurrentSkeleton */
	TEnumAsByte<enum ERootMotionMode> RootMotionMode; /* Ofs: 0x40 Size: 0x1 - ByteProperty Engine.AnimInstance.RootMotionMode */
	uint8_t boolField41;
	uint8_t boolField42;
	uint8_t boolField43;
	uint8_t boolField44;
	uint8_t UnknownData45[0x3];
	FScriptMulticastDelegate OnMontageBlendingOut; /* Ofs: 0x48 Size: 0x10 - MulticastDelegateProperty Engine.AnimInstance.OnMontageBlendingOut */
	FScriptMulticastDelegate OnMontageStarted; /* Ofs: 0x58 Size: 0x10 - MulticastDelegateProperty Engine.AnimInstance.OnMontageStarted */
	FScriptMulticastDelegate OnMontageEnded; /* Ofs: 0x68 Size: 0x10 - MulticastDelegateProperty Engine.AnimInstance.OnMontageEnded */
	FScriptMulticastDelegate OnAllMontageInstancesEnded; /* Ofs: 0x78 Size: 0x10 - MulticastDelegateProperty Engine.AnimInstance.OnAllMontageInstancesEnded */
	uint8_t UnknownData88[0x60];
	uint8_t boolFieldE8;
	uint8_t UnknownDataE9[0x9F];
	TArray<struct FAnimNotifyEvent> ActiveAnimNotifyState; /* Ofs: 0x188 Size: 0x10 - ArrayProperty Engine.AnimInstance.ActiveAnimNotifyState */
	uint8_t UnknownData198[0x1E8];


	inline bool SetDeltaTime(t_structHelper inst, float value) { inst.WriteOffset(0x30, value); }
	inline bool SetCurrentSkeleton(t_structHelper inst, ExternalPtr<struct USkeleton> value) { inst.WriteOffset(0x38, value); }
	inline bool SetRootMotionMode(t_structHelper inst, TEnumAsByte<enum ERootMotionMode> value) { inst.WriteOffset(0x40, value); }
	inline bool bRunUpdatesInWorkerThreads()
	{
		return boolField41& 0x1;
	}
	inline bool SetbRunUpdatesInWorkerThreads(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x41, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bCanUseParallelUpdateAnimation()
	{
		return boolField42& 0x1;
	}
	inline bool SetbCanUseParallelUpdateAnimation(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x42, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bUseMultiThreadedAnimationUpdate()
	{
		return boolField43& 0x1;
	}
	inline bool SetbUseMultiThreadedAnimationUpdate(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x43, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bWarnAboutBlueprintUsage()
	{
		return boolField44& 0x1;
	}
	inline bool SetbWarnAboutBlueprintUsage(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x44, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetOnMontageBlendingOut(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x48, value); }
	inline bool SetOnMontageStarted(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x58, value); }
	inline bool SetOnMontageEnded(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x68, value); }
	inline bool SetOnAllMontageInstancesEnded(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x78, value); }
	inline bool bQueueMontageEvents()
	{
		return boolFieldE8& 0x1;
	}
	inline bool SetbQueueMontageEvents(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xE8, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetActiveAnimNotifyState(t_structHelper inst, TArray<struct FAnimNotifyEvent> value) { inst.WriteOffset(0x188, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUAnimInstance = sizeof(UAnimInstance); // 896
    static_assert(sizeof(UAnimInstance) == 0x380, "Size of UAnimInstance is not correct.");
	auto constexpr UAnimInstance_DeltaTime_Offset = offsetof(UAnimInstance, DeltaTime);
	static_assert(UAnimInstance_DeltaTime_Offset == 0x30, "UAnimInstance::DeltaTime offset is not 30");
	auto constexpr UAnimInstance_CurrentSkeleton_Offset = offsetof(UAnimInstance, CurrentSkeleton);
	static_assert(UAnimInstance_CurrentSkeleton_Offset == 0x38, "UAnimInstance::CurrentSkeleton offset is not 38");
	auto constexpr UAnimInstance_RootMotionMode_Offset = offsetof(UAnimInstance, RootMotionMode);
	static_assert(UAnimInstance_RootMotionMode_Offset == 0x40, "UAnimInstance::RootMotionMode offset is not 40");
	auto constexpr UAnimInstance_boolField41_Offset = offsetof(UAnimInstance, boolField41);
	static_assert(UAnimInstance_boolField41_Offset == 0x41, "UAnimInstance::boolField41 offset is not 41");
	auto constexpr UAnimInstance_boolField42_Offset = offsetof(UAnimInstance, boolField42);
	static_assert(UAnimInstance_boolField42_Offset == 0x42, "UAnimInstance::boolField42 offset is not 42");
	auto constexpr UAnimInstance_boolField43_Offset = offsetof(UAnimInstance, boolField43);
	static_assert(UAnimInstance_boolField43_Offset == 0x43, "UAnimInstance::boolField43 offset is not 43");
	auto constexpr UAnimInstance_boolField44_Offset = offsetof(UAnimInstance, boolField44);
	static_assert(UAnimInstance_boolField44_Offset == 0x44, "UAnimInstance::boolField44 offset is not 44");
	auto constexpr UAnimInstance_OnMontageBlendingOut_Offset = offsetof(UAnimInstance, OnMontageBlendingOut);
	static_assert(UAnimInstance_OnMontageBlendingOut_Offset == 0x48, "UAnimInstance::OnMontageBlendingOut offset is not 48");
	auto constexpr UAnimInstance_OnMontageStarted_Offset = offsetof(UAnimInstance, OnMontageStarted);
	static_assert(UAnimInstance_OnMontageStarted_Offset == 0x58, "UAnimInstance::OnMontageStarted offset is not 58");
	auto constexpr UAnimInstance_OnMontageEnded_Offset = offsetof(UAnimInstance, OnMontageEnded);
	static_assert(UAnimInstance_OnMontageEnded_Offset == 0x68, "UAnimInstance::OnMontageEnded offset is not 68");
	auto constexpr UAnimInstance_OnAllMontageInstancesEnded_Offset = offsetof(UAnimInstance, OnAllMontageInstancesEnded);
	static_assert(UAnimInstance_OnAllMontageInstancesEnded_Offset == 0x78, "UAnimInstance::OnAllMontageInstancesEnded offset is not 78");
	auto constexpr UAnimInstance_boolFieldE8_Offset = offsetof(UAnimInstance, boolFieldE8);
	static_assert(UAnimInstance_boolFieldE8_Offset == 0xe8, "UAnimInstance::boolFieldE8 offset is not e8");
	auto constexpr UAnimInstance_ActiveAnimNotifyState_Offset = offsetof(UAnimInstance, ActiveAnimNotifyState);
	static_assert(UAnimInstance_ActiveAnimNotifyState_Offset == 0x188, "UAnimInstance::ActiveAnimNotifyState offset is not 188");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
