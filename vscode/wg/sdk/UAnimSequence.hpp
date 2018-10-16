#pragma once
#include "UAnimSequenceBase.hpp"
#include "EAdditiveAnimationType.hpp"
#include "EAdditiveBasePoseType.hpp"
#include "EAnimInterpolationType.hpp"
#include "ERootMotionRootLock.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UAnimSequence // Size: 0x1A0
	: public UAnimSequenceBase // Size: 0xA8
{
private:
	typedef UAnimSequence t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(250); // id32("Class Engine.AnimSequence")
		return ptr;
	}
	int32_t NumFrames; /* Ofs: 0xA8 Size: 0x4 - IntProperty Engine.AnimSequence.NumFrames */
	uint8_t UnknownDataAC[0x4];
	TArray<struct FTrackToSkeletonMap> TrackToSkeletonMapTable; /* Ofs: 0xB0 Size: 0x10 - ArrayProperty Engine.AnimSequence.TrackToSkeletonMapTable */
	uint8_t UnknownDataC0[0x90];
	TEnumAsByte<enum EAdditiveAnimationType> AdditiveAnimType; /* Ofs: 0x150 Size: 0x1 - ByteProperty Engine.AnimSequence.AdditiveAnimType */
	TEnumAsByte<enum EAdditiveBasePoseType> RefPoseType; /* Ofs: 0x151 Size: 0x1 - ByteProperty Engine.AnimSequence.RefPoseType */
	uint8_t UnknownData152[0x6];
	ExternalPtr<struct UAnimSequence> RefPoseSeq; /* Ofs: 0x158 Size: 0x8 - ObjectProperty Engine.AnimSequence.RefPoseSeq */
	int32_t RefFrameIndex; /* Ofs: 0x160 Size: 0x4 - IntProperty Engine.AnimSequence.RefFrameIndex */
	int32_t EncodingPkgVersion; /* Ofs: 0x164 Size: 0x4 - IntProperty Engine.AnimSequence.EncodingPkgVersion */
	FName RetargetSource; /* Ofs: 0x168 Size: 0x8 - NameProperty Engine.AnimSequence.RetargetSource */
	TEnumAsByte<enum EAnimInterpolationType> Interpolation; /* Ofs: 0x170 Size: 0x1 - EnumProperty Engine.AnimSequence.Interpolation */
	uint8_t boolField171;
	TEnumAsByte<enum ERootMotionRootLock> RootMotionRootLock; /* Ofs: 0x172 Size: 0x1 - ByteProperty Engine.AnimSequence.RootMotionRootLock */
	uint8_t boolField173;
	uint8_t boolField174;
	uint8_t UnknownData175[0x3];
	TArray<struct FAnimSyncMarker> AuthoredSyncMarkers; /* Ofs: 0x178 Size: 0x10 - ArrayProperty Engine.AnimSequence.AuthoredSyncMarkers */
	uint8_t UnknownData188[0x18];


	inline bool SetNumFrames(t_structHelper inst, int32_t value) { inst.WriteOffset(0xA8, value); }
	inline bool SetTrackToSkeletonMapTable(t_structHelper inst, TArray<struct FTrackToSkeletonMap> value) { inst.WriteOffset(0xB0, value); }
	inline bool SetAdditiveAnimType(t_structHelper inst, TEnumAsByte<enum EAdditiveAnimationType> value) { inst.WriteOffset(0x150, value); }
	inline bool SetRefPoseType(t_structHelper inst, TEnumAsByte<enum EAdditiveBasePoseType> value) { inst.WriteOffset(0x151, value); }
	inline bool SetRefPoseSeq(t_structHelper inst, ExternalPtr<struct UAnimSequence> value) { inst.WriteOffset(0x158, value); }
	inline bool SetRefFrameIndex(t_structHelper inst, int32_t value) { inst.WriteOffset(0x160, value); }
	inline bool SetEncodingPkgVersion(t_structHelper inst, int32_t value) { inst.WriteOffset(0x164, value); }
	inline bool SetRetargetSource(t_structHelper inst, FName value) { inst.WriteOffset(0x168, value); }
	inline bool SetInterpolation(t_structHelper inst, TEnumAsByte<enum EAnimInterpolationType> value) { inst.WriteOffset(0x170, value); }
	inline bool bEnableRootMotion()
	{
		return boolField171& 0x1;
	}
	inline bool SetbEnableRootMotion(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x171, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetRootMotionRootLock(t_structHelper inst, TEnumAsByte<enum ERootMotionRootLock> value) { inst.WriteOffset(0x172, value); }
	inline bool bForceRootLock()
	{
		return boolField173& 0x1;
	}
	inline bool SetbForceRootLock(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x173, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bRootMotionSettingsCopiedFromMontage()
	{
		return boolField174& 0x1;
	}
	inline bool SetbRootMotionSettingsCopiedFromMontage(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x174, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetAuthoredSyncMarkers(t_structHelper inst, TArray<struct FAnimSyncMarker> value) { inst.WriteOffset(0x178, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUAnimSequence = sizeof(UAnimSequence); // 416
    static_assert(sizeof(UAnimSequence) == 0x1A0, "Size of UAnimSequence is not correct.");
	auto constexpr UAnimSequence_NumFrames_Offset = offsetof(UAnimSequence, NumFrames);
	static_assert(UAnimSequence_NumFrames_Offset == 0xa8, "UAnimSequence::NumFrames offset is not a8");
	auto constexpr UAnimSequence_TrackToSkeletonMapTable_Offset = offsetof(UAnimSequence, TrackToSkeletonMapTable);
	static_assert(UAnimSequence_TrackToSkeletonMapTable_Offset == 0xb0, "UAnimSequence::TrackToSkeletonMapTable offset is not b0");
	auto constexpr UAnimSequence_AdditiveAnimType_Offset = offsetof(UAnimSequence, AdditiveAnimType);
	static_assert(UAnimSequence_AdditiveAnimType_Offset == 0x150, "UAnimSequence::AdditiveAnimType offset is not 150");
	auto constexpr UAnimSequence_RefPoseType_Offset = offsetof(UAnimSequence, RefPoseType);
	static_assert(UAnimSequence_RefPoseType_Offset == 0x151, "UAnimSequence::RefPoseType offset is not 151");
	auto constexpr UAnimSequence_RefPoseSeq_Offset = offsetof(UAnimSequence, RefPoseSeq);
	static_assert(UAnimSequence_RefPoseSeq_Offset == 0x158, "UAnimSequence::RefPoseSeq offset is not 158");
	auto constexpr UAnimSequence_RefFrameIndex_Offset = offsetof(UAnimSequence, RefFrameIndex);
	static_assert(UAnimSequence_RefFrameIndex_Offset == 0x160, "UAnimSequence::RefFrameIndex offset is not 160");
	auto constexpr UAnimSequence_EncodingPkgVersion_Offset = offsetof(UAnimSequence, EncodingPkgVersion);
	static_assert(UAnimSequence_EncodingPkgVersion_Offset == 0x164, "UAnimSequence::EncodingPkgVersion offset is not 164");
	auto constexpr UAnimSequence_RetargetSource_Offset = offsetof(UAnimSequence, RetargetSource);
	static_assert(UAnimSequence_RetargetSource_Offset == 0x168, "UAnimSequence::RetargetSource offset is not 168");
	auto constexpr UAnimSequence_Interpolation_Offset = offsetof(UAnimSequence, Interpolation);
	static_assert(UAnimSequence_Interpolation_Offset == 0x170, "UAnimSequence::Interpolation offset is not 170");
	auto constexpr UAnimSequence_boolField171_Offset = offsetof(UAnimSequence, boolField171);
	static_assert(UAnimSequence_boolField171_Offset == 0x171, "UAnimSequence::boolField171 offset is not 171");
	auto constexpr UAnimSequence_RootMotionRootLock_Offset = offsetof(UAnimSequence, RootMotionRootLock);
	static_assert(UAnimSequence_RootMotionRootLock_Offset == 0x172, "UAnimSequence::RootMotionRootLock offset is not 172");
	auto constexpr UAnimSequence_boolField173_Offset = offsetof(UAnimSequence, boolField173);
	static_assert(UAnimSequence_boolField173_Offset == 0x173, "UAnimSequence::boolField173 offset is not 173");
	auto constexpr UAnimSequence_boolField174_Offset = offsetof(UAnimSequence, boolField174);
	static_assert(UAnimSequence_boolField174_Offset == 0x174, "UAnimSequence::boolField174 offset is not 174");
	auto constexpr UAnimSequence_AuthoredSyncMarkers_Offset = offsetof(UAnimSequence, AuthoredSyncMarkers);
	static_assert(UAnimSequence_AuthoredSyncMarkers_Offset == 0x178, "UAnimSequence::AuthoredSyncMarkers offset is not 178");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
