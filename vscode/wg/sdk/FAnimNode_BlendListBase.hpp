#pragma once
#include "FAnimNode_Base.hpp"
#include "EAlphaBlendOption.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FAnimNode_BlendListBase // Size: 0xC8
 : public FAnimNode_Base // Size: 0x30
{
public:
    TArray<struct FPoseLink> BlendPose; /* Ofs: 0x30 Size: 0x10 ArrayProperty AnimGraphRuntime.AnimNode_BlendListBase.BlendPose */
    TArray<float> BlendTime; /* Ofs: 0x40 Size: 0x10 ArrayProperty AnimGraphRuntime.AnimNode_BlendListBase.BlendTime */
    TEnumAsByte<enum EAlphaBlendOption> BlendType; /* Ofs: 0x50 Size: 0x1 EnumProperty AnimGraphRuntime.AnimNode_BlendListBase.BlendType */
    uint8_t UnknownData51[0x7];
    ExternalPtr<struct UCurveFloat> CustomBlendCurve; /* Ofs: 0x58 Size: 0x8 ObjectProperty AnimGraphRuntime.AnimNode_BlendListBase.CustomBlendCurve */
    ExternalPtr<struct UBlendProfile> BlendProfile; /* Ofs: 0x60 Size: 0x8 ObjectProperty AnimGraphRuntime.AnimNode_BlendListBase.BlendProfile */
    TArray<struct FAlphaBlend> Blends; /* Ofs: 0x68 Size: 0x10 ArrayProperty AnimGraphRuntime.AnimNode_BlendListBase.Blends */
    TArray<float> BlendWeights; /* Ofs: 0x78 Size: 0x10 ArrayProperty AnimGraphRuntime.AnimNode_BlendListBase.BlendWeights */
    TArray<float> RemainingBlendTimes; /* Ofs: 0x88 Size: 0x10 ArrayProperty AnimGraphRuntime.AnimNode_BlendListBase.RemainingBlendTimes */
    int32_t LastActiveChildIndex; /* Ofs: 0x98 Size: 0x4 IntProperty AnimGraphRuntime.AnimNode_BlendListBase.LastActiveChildIndex */
    uint8_t UnknownData9C[0x4];
    TArray<struct FBlendSampleData> PerBoneSampleData; /* Ofs: 0xA0 Size: 0x10 ArrayProperty AnimGraphRuntime.AnimNode_BlendListBase.PerBoneSampleData */
    uint8_t UnknownDataB0[0x10];
    bool bResetChildOnActivation; /* Ofs: 0xC0 Size: 0x1 BitMask: 01 BoolProperty AnimGraphRuntime.AnimNode_BlendListBase.bResetChildOnActivation */
    uint8_t UnknownDataC1[0x7];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFAnimNode_BlendListBase = sizeof(FAnimNode_BlendListBase); // 200
    static_assert(sizeof(FAnimNode_BlendListBase) == 0xC8, "Size of FAnimNode_BlendListBase is not correct.");
	auto constexpr FAnimNode_BlendListBase_BlendPose_Offset = offsetof(FAnimNode_BlendListBase, BlendPose);
	static_assert(FAnimNode_BlendListBase_BlendPose_Offset == 0x30, "FAnimNode_BlendListBase::BlendPose offset is not 30");
	auto constexpr FAnimNode_BlendListBase_BlendTime_Offset = offsetof(FAnimNode_BlendListBase, BlendTime);
	static_assert(FAnimNode_BlendListBase_BlendTime_Offset == 0x40, "FAnimNode_BlendListBase::BlendTime offset is not 40");
	auto constexpr FAnimNode_BlendListBase_BlendType_Offset = offsetof(FAnimNode_BlendListBase, BlendType);
	static_assert(FAnimNode_BlendListBase_BlendType_Offset == 0x50, "FAnimNode_BlendListBase::BlendType offset is not 50");
	auto constexpr FAnimNode_BlendListBase_CustomBlendCurve_Offset = offsetof(FAnimNode_BlendListBase, CustomBlendCurve);
	static_assert(FAnimNode_BlendListBase_CustomBlendCurve_Offset == 0x58, "FAnimNode_BlendListBase::CustomBlendCurve offset is not 58");
	auto constexpr FAnimNode_BlendListBase_BlendProfile_Offset = offsetof(FAnimNode_BlendListBase, BlendProfile);
	static_assert(FAnimNode_BlendListBase_BlendProfile_Offset == 0x60, "FAnimNode_BlendListBase::BlendProfile offset is not 60");
	auto constexpr FAnimNode_BlendListBase_Blends_Offset = offsetof(FAnimNode_BlendListBase, Blends);
	static_assert(FAnimNode_BlendListBase_Blends_Offset == 0x68, "FAnimNode_BlendListBase::Blends offset is not 68");
	auto constexpr FAnimNode_BlendListBase_BlendWeights_Offset = offsetof(FAnimNode_BlendListBase, BlendWeights);
	static_assert(FAnimNode_BlendListBase_BlendWeights_Offset == 0x78, "FAnimNode_BlendListBase::BlendWeights offset is not 78");
	auto constexpr FAnimNode_BlendListBase_RemainingBlendTimes_Offset = offsetof(FAnimNode_BlendListBase, RemainingBlendTimes);
	static_assert(FAnimNode_BlendListBase_RemainingBlendTimes_Offset == 0x88, "FAnimNode_BlendListBase::RemainingBlendTimes offset is not 88");
	auto constexpr FAnimNode_BlendListBase_LastActiveChildIndex_Offset = offsetof(FAnimNode_BlendListBase, LastActiveChildIndex);
	static_assert(FAnimNode_BlendListBase_LastActiveChildIndex_Offset == 0x98, "FAnimNode_BlendListBase::LastActiveChildIndex offset is not 98");
	auto constexpr FAnimNode_BlendListBase_PerBoneSampleData_Offset = offsetof(FAnimNode_BlendListBase, PerBoneSampleData);
	static_assert(FAnimNode_BlendListBase_PerBoneSampleData_Offset == 0xa0, "FAnimNode_BlendListBase::PerBoneSampleData offset is not a0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
