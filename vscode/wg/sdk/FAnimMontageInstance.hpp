#pragma once
#include "FAlphaBlend.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FAnimMontageInstance // Size: 0x190
{
public:
    ExternalPtr<struct UAnimMontage> Montage; /* Ofs: 0x0 Size: 0x8 ObjectProperty Engine.AnimMontageInstance.Montage */
    uint8_t UnknownData8[0x88];
    bool bPlaying; /* Ofs: 0x90 Size: 0x1 BitMask: 01 BoolProperty Engine.AnimMontageInstance.bPlaying */
    uint8_t UnknownData91[0x3];
    float DefaultBlendTimeMultiplier; /* Ofs: 0x94 Size: 0x4 FloatProperty Engine.AnimMontageInstance.DefaultBlendTimeMultiplier */
    uint8_t UnknownData98[0x28];
    TArray<int32_t> NextSections; /* Ofs: 0xC0 Size: 0x10 ArrayProperty Engine.AnimMontageInstance.NextSections */
    TArray<int32_t> PrevSections; /* Ofs: 0xD0 Size: 0x10 ArrayProperty Engine.AnimMontageInstance.PrevSections */
    uint8_t UnknownDataE0[0x10];
    TArray<struct FAnimNotifyEvent> ActiveStateBranchingPoints; /* Ofs: 0xF0 Size: 0x10 ArrayProperty Engine.AnimMontageInstance.ActiveStateBranchingPoints */
    float Position; /* Ofs: 0x100 Size: 0x4 FloatProperty Engine.AnimMontageInstance.Position */
    float PlayRate; /* Ofs: 0x104 Size: 0x4 FloatProperty Engine.AnimMontageInstance.PlayRate */
    FAlphaBlend Blend; /* Ofs: 0x108 Size: 0x38 StructProperty Engine.AnimMontageInstance.Blend */
    uint8_t UnknownData140[0x20];
    int32_t DisableRootMotionCount; /* Ofs: 0x160 Size: 0x4 IntProperty Engine.AnimMontageInstance.DisableRootMotionCount */
    uint8_t UnknownData164[0x2C];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFAnimMontageInstance = sizeof(FAnimMontageInstance); // 400
    static_assert(sizeof(FAnimMontageInstance) == 0x190, "Size of FAnimMontageInstance is not correct.");
	auto constexpr FAnimMontageInstance_Montage_Offset = offsetof(FAnimMontageInstance, Montage);
	static_assert(FAnimMontageInstance_Montage_Offset == 0x0, "FAnimMontageInstance::Montage offset is not 0");
	auto constexpr FAnimMontageInstance_DefaultBlendTimeMultiplier_Offset = offsetof(FAnimMontageInstance, DefaultBlendTimeMultiplier);
	static_assert(FAnimMontageInstance_DefaultBlendTimeMultiplier_Offset == 0x94, "FAnimMontageInstance::DefaultBlendTimeMultiplier offset is not 94");
	auto constexpr FAnimMontageInstance_NextSections_Offset = offsetof(FAnimMontageInstance, NextSections);
	static_assert(FAnimMontageInstance_NextSections_Offset == 0xc0, "FAnimMontageInstance::NextSections offset is not c0");
	auto constexpr FAnimMontageInstance_PrevSections_Offset = offsetof(FAnimMontageInstance, PrevSections);
	static_assert(FAnimMontageInstance_PrevSections_Offset == 0xd0, "FAnimMontageInstance::PrevSections offset is not d0");
	auto constexpr FAnimMontageInstance_ActiveStateBranchingPoints_Offset = offsetof(FAnimMontageInstance, ActiveStateBranchingPoints);
	static_assert(FAnimMontageInstance_ActiveStateBranchingPoints_Offset == 0xf0, "FAnimMontageInstance::ActiveStateBranchingPoints offset is not f0");
	auto constexpr FAnimMontageInstance_Position_Offset = offsetof(FAnimMontageInstance, Position);
	static_assert(FAnimMontageInstance_Position_Offset == 0x100, "FAnimMontageInstance::Position offset is not 100");
	auto constexpr FAnimMontageInstance_PlayRate_Offset = offsetof(FAnimMontageInstance, PlayRate);
	static_assert(FAnimMontageInstance_PlayRate_Offset == 0x104, "FAnimMontageInstance::PlayRate offset is not 104");
	auto constexpr FAnimMontageInstance_Blend_Offset = offsetof(FAnimMontageInstance, Blend);
	static_assert(FAnimMontageInstance_Blend_Offset == 0x108, "FAnimMontageInstance::Blend offset is not 108");
	auto constexpr FAnimMontageInstance_DisableRootMotionCount_Offset = offsetof(FAnimMontageInstance, DisableRootMotionCount);
	static_assert(FAnimMontageInstance_DisableRootMotionCount_Offset == 0x160, "FAnimMontageInstance::DisableRootMotionCount offset is not 160");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
