#pragma once
#include "ETaskResourceOverlapPolicy.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UGameplayTask // Size: 0x70
	: public UObject // Size: 0x30
{
private:
	typedef UGameplayTask t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(541); // id32("Class GameplayTasks.GameplayTask")
		return ptr;
	}
	uint8_t UnknownData30[0x8];
	FName InstanceName; /* Ofs: 0x38 Size: 0x8 - NameProperty GameplayTasks.GameplayTask.InstanceName */
	uint8_t UnknownData40[0x2];
	TEnumAsByte<enum ETaskResourceOverlapPolicy> ResourceOverlapPolicy; /* Ofs: 0x42 Size: 0x1 - EnumProperty GameplayTasks.GameplayTask.ResourceOverlapPolicy */
	uint8_t UnknownData43[0x25];
	ExternalPtr<struct UGameplayTask> ChildTask; /* Ofs: 0x68 Size: 0x8 - ObjectProperty GameplayTasks.GameplayTask.ChildTask */


	inline bool SetInstanceName(t_structHelper inst, FName value) { inst.WriteOffset(0x38, value); }
	inline bool SetResourceOverlapPolicy(t_structHelper inst, TEnumAsByte<enum ETaskResourceOverlapPolicy> value) { inst.WriteOffset(0x42, value); }
	inline bool SetChildTask(t_structHelper inst, ExternalPtr<struct UGameplayTask> value) { inst.WriteOffset(0x68, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUGameplayTask = sizeof(UGameplayTask); // 112
    static_assert(sizeof(UGameplayTask) == 0x70, "Size of UGameplayTask is not correct.");
	auto constexpr UGameplayTask_InstanceName_Offset = offsetof(UGameplayTask, InstanceName);
	static_assert(UGameplayTask_InstanceName_Offset == 0x38, "UGameplayTask::InstanceName offset is not 38");
	auto constexpr UGameplayTask_ResourceOverlapPolicy_Offset = offsetof(UGameplayTask, ResourceOverlapPolicy);
	static_assert(UGameplayTask_ResourceOverlapPolicy_Offset == 0x42, "UGameplayTask::ResourceOverlapPolicy offset is not 42");
	auto constexpr UGameplayTask_ChildTask_Offset = offsetof(UGameplayTask, ChildTask);
	static_assert(UGameplayTask_ChildTask_Offset == 0x68, "UGameplayTask::ChildTask offset is not 68");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
