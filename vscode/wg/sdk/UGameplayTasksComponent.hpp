#pragma once
#include "UActorComponent.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UGameplayTasksComponent // Size: 0x250
	: public UActorComponent // Size: 0x1F0
{
private:
	typedef UGameplayTasksComponent t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(2010); // id32("Class GameplayTasks.GameplayTasksComponent")
		return ptr;
	}
	TArray<ExternalPtr<struct UGameplayTask>> SimulatedTasks; /* Ofs: 0x1F0 Size: 0x10 - ArrayProperty GameplayTasks.GameplayTasksComponent.SimulatedTasks */
	TArray<ExternalPtr<struct UGameplayTask>> TaskPriorityQueue; /* Ofs: 0x200 Size: 0x10 - ArrayProperty GameplayTasks.GameplayTasksComponent.TaskPriorityQueue */
	uint8_t UnknownData210[0x10];
	TArray<ExternalPtr<struct UGameplayTask>> TickingTasks; /* Ofs: 0x220 Size: 0x10 - ArrayProperty GameplayTasks.GameplayTasksComponent.TickingTasks */
	uint8_t UnknownData230[0x8];
	FScriptMulticastDelegate OnClaimedResourcesChange; /* Ofs: 0x238 Size: 0x10 - MulticastDelegateProperty GameplayTasks.GameplayTasksComponent.OnClaimedResourcesChange */
	uint8_t UnknownData248[0x8];


	inline bool SetSimulatedTasks(t_structHelper inst, TArray<ExternalPtr<struct UGameplayTask>> value) { inst.WriteOffset(0x1F0, value); }
	inline bool SetTaskPriorityQueue(t_structHelper inst, TArray<ExternalPtr<struct UGameplayTask>> value) { inst.WriteOffset(0x200, value); }
	inline bool SetTickingTasks(t_structHelper inst, TArray<ExternalPtr<struct UGameplayTask>> value) { inst.WriteOffset(0x220, value); }
	inline bool SetOnClaimedResourcesChange(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x238, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUGameplayTasksComponent = sizeof(UGameplayTasksComponent); // 592
    static_assert(sizeof(UGameplayTasksComponent) == 0x250, "Size of UGameplayTasksComponent is not correct.");
	auto constexpr UGameplayTasksComponent_SimulatedTasks_Offset = offsetof(UGameplayTasksComponent, SimulatedTasks);
	static_assert(UGameplayTasksComponent_SimulatedTasks_Offset == 0x1f0, "UGameplayTasksComponent::SimulatedTasks offset is not 1f0");
	auto constexpr UGameplayTasksComponent_TaskPriorityQueue_Offset = offsetof(UGameplayTasksComponent, TaskPriorityQueue);
	static_assert(UGameplayTasksComponent_TaskPriorityQueue_Offset == 0x200, "UGameplayTasksComponent::TaskPriorityQueue offset is not 200");
	auto constexpr UGameplayTasksComponent_TickingTasks_Offset = offsetof(UGameplayTasksComponent, TickingTasks);
	static_assert(UGameplayTasksComponent_TickingTasks_Offset == 0x220, "UGameplayTasksComponent::TickingTasks offset is not 220");
	auto constexpr UGameplayTasksComponent_OnClaimedResourcesChange_Offset = offsetof(UGameplayTasksComponent, OnClaimedResourcesChange);
	static_assert(UGameplayTasksComponent_OnClaimedResourcesChange_Offset == 0x238, "UGameplayTasksComponent::OnClaimedResourcesChange offset is not 238");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
