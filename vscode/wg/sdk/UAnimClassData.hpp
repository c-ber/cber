#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UAnimClassData // Size: 0xA0
	: public UObject // Size: 0x30
{
private:
	typedef UAnimClassData t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(259); // id32("Class Engine.AnimClassData")
		return ptr;
	}
	uint8_t UnknownData30[0x8];
	TArray<struct FBakedAnimationStateMachine> BakedStateMachines; /* Ofs: 0x38 Size: 0x10 - ArrayProperty Engine.AnimClassData.BakedStateMachines */
	ExternalPtr<struct USkeleton> TargetSkeleton; /* Ofs: 0x48 Size: 0x8 - ObjectProperty Engine.AnimClassData.TargetSkeleton */
	TArray<struct FAnimNotifyEvent> AnimNotifies; /* Ofs: 0x50 Size: 0x10 - ArrayProperty Engine.AnimClassData.AnimNotifies */
	int32_t RootAnimNodeIndex; /* Ofs: 0x60 Size: 0x4 - IntProperty Engine.AnimClassData.RootAnimNodeIndex */
	uint8_t UnknownData64[0x4];
	TArray<int32_t> OrderedSavedPoseIndices; /* Ofs: 0x68 Size: 0x10 - ArrayProperty Engine.AnimClassData.OrderedSavedPoseIndices */
	ExternalPtr<struct UStructProperty> RootAnimNodeProperty; /* Ofs: 0x78 Size: 0x8 - ObjectProperty Engine.AnimClassData.RootAnimNodeProperty */
	TArray<ExternalPtr<struct UStructProperty>> AnimNodeProperties; /* Ofs: 0x80 Size: 0x10 - ArrayProperty Engine.AnimClassData.AnimNodeProperties */
	TArray<struct FName> SyncGroupNames; /* Ofs: 0x90 Size: 0x10 - ArrayProperty Engine.AnimClassData.SyncGroupNames */


	inline bool SetBakedStateMachines(t_structHelper inst, TArray<struct FBakedAnimationStateMachine> value) { inst.WriteOffset(0x38, value); }
	inline bool SetTargetSkeleton(t_structHelper inst, ExternalPtr<struct USkeleton> value) { inst.WriteOffset(0x48, value); }
	inline bool SetAnimNotifies(t_structHelper inst, TArray<struct FAnimNotifyEvent> value) { inst.WriteOffset(0x50, value); }
	inline bool SetRootAnimNodeIndex(t_structHelper inst, int32_t value) { inst.WriteOffset(0x60, value); }
	inline bool SetOrderedSavedPoseIndices(t_structHelper inst, TArray<int32_t> value) { inst.WriteOffset(0x68, value); }
	inline bool SetRootAnimNodeProperty(t_structHelper inst, ExternalPtr<struct UStructProperty> value) { inst.WriteOffset(0x78, value); }
	inline bool SetAnimNodeProperties(t_structHelper inst, TArray<ExternalPtr<struct UStructProperty>> value) { inst.WriteOffset(0x80, value); }
	inline bool SetSyncGroupNames(t_structHelper inst, TArray<struct FName> value) { inst.WriteOffset(0x90, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUAnimClassData = sizeof(UAnimClassData); // 160
    static_assert(sizeof(UAnimClassData) == 0xA0, "Size of UAnimClassData is not correct.");
	auto constexpr UAnimClassData_BakedStateMachines_Offset = offsetof(UAnimClassData, BakedStateMachines);
	static_assert(UAnimClassData_BakedStateMachines_Offset == 0x38, "UAnimClassData::BakedStateMachines offset is not 38");
	auto constexpr UAnimClassData_TargetSkeleton_Offset = offsetof(UAnimClassData, TargetSkeleton);
	static_assert(UAnimClassData_TargetSkeleton_Offset == 0x48, "UAnimClassData::TargetSkeleton offset is not 48");
	auto constexpr UAnimClassData_AnimNotifies_Offset = offsetof(UAnimClassData, AnimNotifies);
	static_assert(UAnimClassData_AnimNotifies_Offset == 0x50, "UAnimClassData::AnimNotifies offset is not 50");
	auto constexpr UAnimClassData_RootAnimNodeIndex_Offset = offsetof(UAnimClassData, RootAnimNodeIndex);
	static_assert(UAnimClassData_RootAnimNodeIndex_Offset == 0x60, "UAnimClassData::RootAnimNodeIndex offset is not 60");
	auto constexpr UAnimClassData_OrderedSavedPoseIndices_Offset = offsetof(UAnimClassData, OrderedSavedPoseIndices);
	static_assert(UAnimClassData_OrderedSavedPoseIndices_Offset == 0x68, "UAnimClassData::OrderedSavedPoseIndices offset is not 68");
	auto constexpr UAnimClassData_RootAnimNodeProperty_Offset = offsetof(UAnimClassData, RootAnimNodeProperty);
	static_assert(UAnimClassData_RootAnimNodeProperty_Offset == 0x78, "UAnimClassData::RootAnimNodeProperty offset is not 78");
	auto constexpr UAnimClassData_AnimNodeProperties_Offset = offsetof(UAnimClassData, AnimNodeProperties);
	static_assert(UAnimClassData_AnimNodeProperties_Offset == 0x80, "UAnimClassData::AnimNodeProperties offset is not 80");
	auto constexpr UAnimClassData_SyncGroupNames_Offset = offsetof(UAnimClassData, SyncGroupNames);
	static_assert(UAnimClassData_SyncGroupNames_Offset == 0x90, "UAnimClassData::SyncGroupNames offset is not 90");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
