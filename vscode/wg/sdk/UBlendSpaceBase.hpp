#pragma once
#include "UAnimationAsset.hpp"
#include "FInterpolationParameter.hpp"
#include "ENotifyTriggerMode.hpp"
#include "FBlendParameter.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBlendSpaceBase // Size: 0x148
	: public UAnimationAsset // Size: 0x80
{
private:
	typedef UBlendSpaceBase t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(251); // id32("Class Engine.BlendSpaceBase")
		return ptr;
	}
	uint8_t UnknownData80[0x8];
	uint8_t boolField88;
	uint8_t UnknownData89[0x3];
	float AnimLength; /* Ofs: 0x8C Size: 0x4 - FloatProperty Engine.BlendSpaceBase.AnimLength */
	TArray<struct FPerBoneInterpolation> PerBoneBlend; /* Ofs: 0x90 Size: 0x10 - ArrayProperty Engine.BlendSpaceBase.PerBoneBlend */
	FInterpolationParameter InterpolationParam[3]; /* Ofs: 0x3 Size: 0x8 - StructProperty Engine.BlendSpaceBase.InterpolationParam */
	float TargetWeightInterpolationSpeedPerSec; /* Ofs: 0xB8 Size: 0x4 - FloatProperty Engine.BlendSpaceBase.TargetWeightInterpolationSpeedPerSec */
	TEnumAsByte<enum ENotifyTriggerMode> NotifyTriggerMode; /* Ofs: 0xBC Size: 0x1 - ByteProperty Engine.BlendSpaceBase.NotifyTriggerMode */
	uint8_t UnknownDataBD[0x3];
	int32_t SampleIndexWithMarkers; /* Ofs: 0xC0 Size: 0x4 - IntProperty Engine.BlendSpaceBase.SampleIndexWithMarkers */
	uint8_t UnknownDataC4[0x4];
	TArray<struct FBlendSample> SampleData; /* Ofs: 0xC8 Size: 0x10 - ArrayProperty Engine.BlendSpaceBase.SampleData */
	TArray<struct FEditorElement> GridSamples; /* Ofs: 0xD8 Size: 0x10 - ArrayProperty Engine.BlendSpaceBase.GridSamples */
	FBlendParameter BlendParameters[3]; /* Ofs: 0x3 Size: 0x20 - StructProperty Engine.BlendSpaceBase.BlendParameters */


	inline bool bRotationBlendInMeshSpace()
	{
		return boolField88& 0x1;
	}
	inline bool SetbRotationBlendInMeshSpace(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x88, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetAnimLength(t_structHelper inst, float value) { inst.WriteOffset(0x8C, value); }
	inline bool SetPerBoneBlend(t_structHelper inst, TArray<struct FPerBoneInterpolation> value) { inst.WriteOffset(0x90, value); }
	inline bool SetTargetWeightInterpolationSpeedPerSec(t_structHelper inst, float value) { inst.WriteOffset(0xB8, value); }
	inline bool SetNotifyTriggerMode(t_structHelper inst, TEnumAsByte<enum ENotifyTriggerMode> value) { inst.WriteOffset(0xBC, value); }
	inline bool SetSampleIndexWithMarkers(t_structHelper inst, int32_t value) { inst.WriteOffset(0xC0, value); }
	inline bool SetSampleData(t_structHelper inst, TArray<struct FBlendSample> value) { inst.WriteOffset(0xC8, value); }
	inline bool SetGridSamples(t_structHelper inst, TArray<struct FEditorElement> value) { inst.WriteOffset(0xD8, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBlendSpaceBase = sizeof(UBlendSpaceBase); // 328
    static_assert(sizeof(UBlendSpaceBase) == 0x148, "Size of UBlendSpaceBase is not correct.");
	auto constexpr UBlendSpaceBase_boolField88_Offset = offsetof(UBlendSpaceBase, boolField88);
	static_assert(UBlendSpaceBase_boolField88_Offset == 0x88, "UBlendSpaceBase::boolField88 offset is not 88");
	auto constexpr UBlendSpaceBase_AnimLength_Offset = offsetof(UBlendSpaceBase, AnimLength);
	static_assert(UBlendSpaceBase_AnimLength_Offset == 0x8c, "UBlendSpaceBase::AnimLength offset is not 8c");
	auto constexpr UBlendSpaceBase_PerBoneBlend_Offset = offsetof(UBlendSpaceBase, PerBoneBlend);
	static_assert(UBlendSpaceBase_PerBoneBlend_Offset == 0x90, "UBlendSpaceBase::PerBoneBlend offset is not 90");
	auto constexpr UBlendSpaceBase_InterpolationParam_Offset = offsetof(UBlendSpaceBase, InterpolationParam);
	static_assert(UBlendSpaceBase_InterpolationParam_Offset == 0xa0, "UBlendSpaceBase::InterpolationParam offset is not a0");
	auto constexpr UBlendSpaceBase_TargetWeightInterpolationSpeedPerSec_Offset = offsetof(UBlendSpaceBase, TargetWeightInterpolationSpeedPerSec);
	static_assert(UBlendSpaceBase_TargetWeightInterpolationSpeedPerSec_Offset == 0xb8, "UBlendSpaceBase::TargetWeightInterpolationSpeedPerSec offset is not b8");
	auto constexpr UBlendSpaceBase_NotifyTriggerMode_Offset = offsetof(UBlendSpaceBase, NotifyTriggerMode);
	static_assert(UBlendSpaceBase_NotifyTriggerMode_Offset == 0xbc, "UBlendSpaceBase::NotifyTriggerMode offset is not bc");
	auto constexpr UBlendSpaceBase_SampleIndexWithMarkers_Offset = offsetof(UBlendSpaceBase, SampleIndexWithMarkers);
	static_assert(UBlendSpaceBase_SampleIndexWithMarkers_Offset == 0xc0, "UBlendSpaceBase::SampleIndexWithMarkers offset is not c0");
	auto constexpr UBlendSpaceBase_SampleData_Offset = offsetof(UBlendSpaceBase, SampleData);
	static_assert(UBlendSpaceBase_SampleData_Offset == 0xc8, "UBlendSpaceBase::SampleData offset is not c8");
	auto constexpr UBlendSpaceBase_GridSamples_Offset = offsetof(UBlendSpaceBase, GridSamples);
	static_assert(UBlendSpaceBase_GridSamples_Offset == 0xd8, "UBlendSpaceBase::GridSamples offset is not d8");
	auto constexpr UBlendSpaceBase_BlendParameters_Offset = offsetof(UBlendSpaceBase, BlendParameters);
	static_assert(UBlendSpaceBase_BlendParameters_Offset == 0xe8, "UBlendSpaceBase::BlendParameters offset is not e8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
