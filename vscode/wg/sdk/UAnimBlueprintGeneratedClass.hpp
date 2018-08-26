#pragma once
#include "UBlueprintGeneratedClass.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UAnimBlueprintGeneratedClass // Size: 0x450
	: public UBlueprintGeneratedClass // Size: 0x3E0
{
private:
	typedef UAnimBlueprintGeneratedClass t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(675); // id32("Class Engine.AnimBlueprintGeneratedClass")
		return ptr;
	}
	TArray<struct FBakedAnimationStateMachine> BakedStateMachines; /* Ofs: 0x3E0 Size: 0x10 - ArrayProperty Engine.AnimBlueprintGeneratedClass.BakedStateMachines */
	ExternalPtr<struct USkeleton> TargetSkeleton; /* Ofs: 0x3F0 Size: 0x8 - ObjectProperty Engine.AnimBlueprintGeneratedClass.TargetSkeleton */
	TArray<struct FAnimNotifyEvent> AnimNotifies; /* Ofs: 0x3F8 Size: 0x10 - ArrayProperty Engine.AnimBlueprintGeneratedClass.AnimNotifies */
	int32_t RootAnimNodeIndex; /* Ofs: 0x408 Size: 0x4 - IntProperty Engine.AnimBlueprintGeneratedClass.RootAnimNodeIndex */
	uint8_t UnknownData40C[0x4];
	TArray<int32_t> OrderedSavedPoseIndices; /* Ofs: 0x410 Size: 0x10 - ArrayProperty Engine.AnimBlueprintGeneratedClass.OrderedSavedPoseIndices */
	uint8_t UnknownData420[0x18];
	TArray<struct FName> SyncGroupNames; /* Ofs: 0x438 Size: 0x10 - ArrayProperty Engine.AnimBlueprintGeneratedClass.SyncGroupNames */
	uint8_t UnknownData448[0x8];


	inline bool SetBakedStateMachines(t_structHelper inst, TArray<struct FBakedAnimationStateMachine> value) { inst.WriteOffset(0x3E0, value); }
	inline bool SetTargetSkeleton(t_structHelper inst, ExternalPtr<struct USkeleton> value) { inst.WriteOffset(0x3F0, value); }
	inline bool SetAnimNotifies(t_structHelper inst, TArray<struct FAnimNotifyEvent> value) { inst.WriteOffset(0x3F8, value); }
	inline bool SetRootAnimNodeIndex(t_structHelper inst, int32_t value) { inst.WriteOffset(0x408, value); }
	inline bool SetOrderedSavedPoseIndices(t_structHelper inst, TArray<int32_t> value) { inst.WriteOffset(0x410, value); }
	inline bool SetSyncGroupNames(t_structHelper inst, TArray<struct FName> value) { inst.WriteOffset(0x438, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUAnimBlueprintGeneratedClass = sizeof(UAnimBlueprintGeneratedClass); // 1104
    static_assert(sizeof(UAnimBlueprintGeneratedClass) == 0x450, "Size of UAnimBlueprintGeneratedClass is not correct.");
	auto constexpr UAnimBlueprintGeneratedClass_BakedStateMachines_Offset = offsetof(UAnimBlueprintGeneratedClass, BakedStateMachines);
	static_assert(UAnimBlueprintGeneratedClass_BakedStateMachines_Offset == 0x3e0, "UAnimBlueprintGeneratedClass::BakedStateMachines offset is not 3e0");
	auto constexpr UAnimBlueprintGeneratedClass_TargetSkeleton_Offset = offsetof(UAnimBlueprintGeneratedClass, TargetSkeleton);
	static_assert(UAnimBlueprintGeneratedClass_TargetSkeleton_Offset == 0x3f0, "UAnimBlueprintGeneratedClass::TargetSkeleton offset is not 3f0");
	auto constexpr UAnimBlueprintGeneratedClass_AnimNotifies_Offset = offsetof(UAnimBlueprintGeneratedClass, AnimNotifies);
	static_assert(UAnimBlueprintGeneratedClass_AnimNotifies_Offset == 0x3f8, "UAnimBlueprintGeneratedClass::AnimNotifies offset is not 3f8");
	auto constexpr UAnimBlueprintGeneratedClass_RootAnimNodeIndex_Offset = offsetof(UAnimBlueprintGeneratedClass, RootAnimNodeIndex);
	static_assert(UAnimBlueprintGeneratedClass_RootAnimNodeIndex_Offset == 0x408, "UAnimBlueprintGeneratedClass::RootAnimNodeIndex offset is not 408");
	auto constexpr UAnimBlueprintGeneratedClass_OrderedSavedPoseIndices_Offset = offsetof(UAnimBlueprintGeneratedClass, OrderedSavedPoseIndices);
	static_assert(UAnimBlueprintGeneratedClass_OrderedSavedPoseIndices_Offset == 0x410, "UAnimBlueprintGeneratedClass::OrderedSavedPoseIndices offset is not 410");
	auto constexpr UAnimBlueprintGeneratedClass_SyncGroupNames_Offset = offsetof(UAnimBlueprintGeneratedClass, SyncGroupNames);
	static_assert(UAnimBlueprintGeneratedClass_SyncGroupNames_Offset == 0x438, "UAnimBlueprintGeneratedClass::SyncGroupNames offset is not 438");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
