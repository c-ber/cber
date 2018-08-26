#pragma once
#include "UAnimCompositeBase.hpp"
#include "FAlphaBlend.hpp"
#include "FMarkerSyncData.hpp"
#include "ERootMotionRootLock.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UAnimMontage // Size: 0x1B0
	: public UAnimCompositeBase // Size: 0xA8
{
private:
	typedef UAnimMontage t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1799); // id32("Class Engine.AnimMontage")
		return ptr;
	}
	FAlphaBlend BlendIn; /* Ofs: 0xA8 Size: 0x38 - StructProperty Engine.AnimMontage.BlendIn */
	float BlendInTime; /* Ofs: 0xE0 Size: 0x4 - FloatProperty Engine.AnimMontage.BlendInTime */
	uint8_t UnknownDataE4[0x4];
	FAlphaBlend BlendOut; /* Ofs: 0xE8 Size: 0x38 - StructProperty Engine.AnimMontage.BlendOut */
	float BlendOutTime; /* Ofs: 0x120 Size: 0x4 - FloatProperty Engine.AnimMontage.BlendOutTime */
	float BlendOutTriggerTime; /* Ofs: 0x124 Size: 0x4 - FloatProperty Engine.AnimMontage.BlendOutTriggerTime */
	FName SyncGroup; /* Ofs: 0x128 Size: 0x8 - NameProperty Engine.AnimMontage.SyncGroup */
	int32_t SyncSlotIndex; /* Ofs: 0x130 Size: 0x4 - IntProperty Engine.AnimMontage.SyncSlotIndex */
	uint8_t UnknownData134[0x4];
	FMarkerSyncData MarkerData; /* Ofs: 0x138 Size: 0x20 - StructProperty Engine.AnimMontage.MarkerData */
	TArray<struct FCompositeSection> CompositeSections; /* Ofs: 0x158 Size: 0x10 - ArrayProperty Engine.AnimMontage.CompositeSections */
	TArray<struct FSlotAnimationTrack> SlotAnimTracks; /* Ofs: 0x168 Size: 0x10 - ArrayProperty Engine.AnimMontage.SlotAnimTracks */
	TArray<struct FBranchingPoint> BranchingPoints; /* Ofs: 0x178 Size: 0x10 - ArrayProperty Engine.AnimMontage.BranchingPoints */
	uint8_t boolField188;
	uint8_t boolField189;
	TEnumAsByte<enum ERootMotionRootLock> RootMotionRootLock; /* Ofs: 0x18A Size: 0x1 - ByteProperty Engine.AnimMontage.RootMotionRootLock */
	uint8_t UnknownData18B[0x5];
	TArray<struct FBranchingPointMarker> BranchingPointMarkers; /* Ofs: 0x190 Size: 0x10 - ArrayProperty Engine.AnimMontage.BranchingPointMarkers */
	TArray<int32_t> BranchingPointStateNotifyIndices; /* Ofs: 0x1A0 Size: 0x10 - ArrayProperty Engine.AnimMontage.BranchingPointStateNotifyIndices */


	inline bool SetBlendIn(t_structHelper inst, FAlphaBlend value) { inst.WriteOffset(0xA8, value); }
	inline bool SetBlendInTime(t_structHelper inst, float value) { inst.WriteOffset(0xE0, value); }
	inline bool SetBlendOut(t_structHelper inst, FAlphaBlend value) { inst.WriteOffset(0xE8, value); }
	inline bool SetBlendOutTime(t_structHelper inst, float value) { inst.WriteOffset(0x120, value); }
	inline bool SetBlendOutTriggerTime(t_structHelper inst, float value) { inst.WriteOffset(0x124, value); }
	inline bool SetSyncGroup(t_structHelper inst, FName value) { inst.WriteOffset(0x128, value); }
	inline bool SetSyncSlotIndex(t_structHelper inst, int32_t value) { inst.WriteOffset(0x130, value); }
	inline bool SetMarkerData(t_structHelper inst, FMarkerSyncData value) { inst.WriteOffset(0x138, value); }
	inline bool SetCompositeSections(t_structHelper inst, TArray<struct FCompositeSection> value) { inst.WriteOffset(0x158, value); }
	inline bool SetSlotAnimTracks(t_structHelper inst, TArray<struct FSlotAnimationTrack> value) { inst.WriteOffset(0x168, value); }
	inline bool SetBranchingPoints(t_structHelper inst, TArray<struct FBranchingPoint> value) { inst.WriteOffset(0x178, value); }
	inline bool bEnableRootMotionTranslation()
	{
		return boolField188& 0x1;
	}
	inline bool SetbEnableRootMotionTranslation(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x188, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bEnableRootMotionRotation()
	{
		return boolField189& 0x1;
	}
	inline bool SetbEnableRootMotionRotation(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x189, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetRootMotionRootLock(t_structHelper inst, TEnumAsByte<enum ERootMotionRootLock> value) { inst.WriteOffset(0x18A, value); }
	inline bool SetBranchingPointMarkers(t_structHelper inst, TArray<struct FBranchingPointMarker> value) { inst.WriteOffset(0x190, value); }
	inline bool SetBranchingPointStateNotifyIndices(t_structHelper inst, TArray<int32_t> value) { inst.WriteOffset(0x1A0, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUAnimMontage = sizeof(UAnimMontage); // 432
    static_assert(sizeof(UAnimMontage) == 0x1B0, "Size of UAnimMontage is not correct.");
	auto constexpr UAnimMontage_BlendIn_Offset = offsetof(UAnimMontage, BlendIn);
	static_assert(UAnimMontage_BlendIn_Offset == 0xa8, "UAnimMontage::BlendIn offset is not a8");
	auto constexpr UAnimMontage_BlendInTime_Offset = offsetof(UAnimMontage, BlendInTime);
	static_assert(UAnimMontage_BlendInTime_Offset == 0xe0, "UAnimMontage::BlendInTime offset is not e0");
	auto constexpr UAnimMontage_BlendOut_Offset = offsetof(UAnimMontage, BlendOut);
	static_assert(UAnimMontage_BlendOut_Offset == 0xe8, "UAnimMontage::BlendOut offset is not e8");
	auto constexpr UAnimMontage_BlendOutTime_Offset = offsetof(UAnimMontage, BlendOutTime);
	static_assert(UAnimMontage_BlendOutTime_Offset == 0x120, "UAnimMontage::BlendOutTime offset is not 120");
	auto constexpr UAnimMontage_BlendOutTriggerTime_Offset = offsetof(UAnimMontage, BlendOutTriggerTime);
	static_assert(UAnimMontage_BlendOutTriggerTime_Offset == 0x124, "UAnimMontage::BlendOutTriggerTime offset is not 124");
	auto constexpr UAnimMontage_SyncGroup_Offset = offsetof(UAnimMontage, SyncGroup);
	static_assert(UAnimMontage_SyncGroup_Offset == 0x128, "UAnimMontage::SyncGroup offset is not 128");
	auto constexpr UAnimMontage_SyncSlotIndex_Offset = offsetof(UAnimMontage, SyncSlotIndex);
	static_assert(UAnimMontage_SyncSlotIndex_Offset == 0x130, "UAnimMontage::SyncSlotIndex offset is not 130");
	auto constexpr UAnimMontage_MarkerData_Offset = offsetof(UAnimMontage, MarkerData);
	static_assert(UAnimMontage_MarkerData_Offset == 0x138, "UAnimMontage::MarkerData offset is not 138");
	auto constexpr UAnimMontage_CompositeSections_Offset = offsetof(UAnimMontage, CompositeSections);
	static_assert(UAnimMontage_CompositeSections_Offset == 0x158, "UAnimMontage::CompositeSections offset is not 158");
	auto constexpr UAnimMontage_SlotAnimTracks_Offset = offsetof(UAnimMontage, SlotAnimTracks);
	static_assert(UAnimMontage_SlotAnimTracks_Offset == 0x168, "UAnimMontage::SlotAnimTracks offset is not 168");
	auto constexpr UAnimMontage_BranchingPoints_Offset = offsetof(UAnimMontage, BranchingPoints);
	static_assert(UAnimMontage_BranchingPoints_Offset == 0x178, "UAnimMontage::BranchingPoints offset is not 178");
	auto constexpr UAnimMontage_boolField188_Offset = offsetof(UAnimMontage, boolField188);
	static_assert(UAnimMontage_boolField188_Offset == 0x188, "UAnimMontage::boolField188 offset is not 188");
	auto constexpr UAnimMontage_boolField189_Offset = offsetof(UAnimMontage, boolField189);
	static_assert(UAnimMontage_boolField189_Offset == 0x189, "UAnimMontage::boolField189 offset is not 189");
	auto constexpr UAnimMontage_RootMotionRootLock_Offset = offsetof(UAnimMontage, RootMotionRootLock);
	static_assert(UAnimMontage_RootMotionRootLock_Offset == 0x18a, "UAnimMontage::RootMotionRootLock offset is not 18a");
	auto constexpr UAnimMontage_BranchingPointMarkers_Offset = offsetof(UAnimMontage, BranchingPointMarkers);
	static_assert(UAnimMontage_BranchingPointMarkers_Offset == 0x190, "UAnimMontage::BranchingPointMarkers offset is not 190");
	auto constexpr UAnimMontage_BranchingPointStateNotifyIndices_Offset = offsetof(UAnimMontage, BranchingPointStateNotifyIndices);
	static_assert(UAnimMontage_BranchingPointStateNotifyIndices_Offset == 0x1a0, "UAnimMontage::BranchingPointStateNotifyIndices offset is not 1a0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
