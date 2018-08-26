#pragma once
#include "FAnimNode_SkeletalControlBase.hpp"
#include "FBoneReference.hpp"
#include "FVector.hpp"
#include "FVector2D.hpp"
#include "EBoneControlSpace.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FAnimNode_TwoBoneIK // Size: 0xC8
 : public FAnimNode_SkeletalControlBase // Size: 0x70
{
public:
    FBoneReference IKBone; /* Ofs: 0x70 Size: 0x18 StructProperty AnimGraphRuntime.AnimNode_TwoBoneIK.IKBone */
    FVector EffectorLocation; /* Ofs: 0x88 Size: 0xC StructProperty AnimGraphRuntime.AnimNode_TwoBoneIK.EffectorLocation */
    FVector JointTargetLocation; /* Ofs: 0x94 Size: 0xC StructProperty AnimGraphRuntime.AnimNode_TwoBoneIK.JointTargetLocation */
    FName EffectorSpaceBoneName; /* Ofs: 0xA0 Size: 0x8 NameProperty AnimGraphRuntime.AnimNode_TwoBoneIK.EffectorSpaceBoneName */
    bool bTakeRotationFromEffectorSpace : 1; /* Ofs: 0xA8 Size: 0x1 BitMask: 01 BoolProperty AnimGraphRuntime.AnimNode_TwoBoneIK.bTakeRotationFromEffectorSpace */
    bool bMaintainEffectorRelRot : 1; /* Ofs: 0xA8 Size: 0x1 BitMask: 02 BoolProperty AnimGraphRuntime.AnimNode_TwoBoneIK.bMaintainEffectorRelRot */
    bool bAllowStretching : 1; /* Ofs: 0xA8 Size: 0x1 BitMask: 04 BoolProperty AnimGraphRuntime.AnimNode_TwoBoneIK.bAllowStretching */
    uint8_t UnknownDataA9[0x3];
    FVector2D StretchLimits; /* Ofs: 0xAC Size: 0x8 StructProperty AnimGraphRuntime.AnimNode_TwoBoneIK.StretchLimits */
    float StartStretchRatio; /* Ofs: 0xB4 Size: 0x4 FloatProperty AnimGraphRuntime.AnimNode_TwoBoneIK.StartStretchRatio */
    float MaxStretchScale; /* Ofs: 0xB8 Size: 0x4 FloatProperty AnimGraphRuntime.AnimNode_TwoBoneIK.MaxStretchScale */
    TEnumAsByte<enum EBoneControlSpace> EffectorLocationSpace; /* Ofs: 0xBC Size: 0x1 ByteProperty AnimGraphRuntime.AnimNode_TwoBoneIK.EffectorLocationSpace */
    TEnumAsByte<enum EBoneControlSpace> JointTargetLocationSpace; /* Ofs: 0xBD Size: 0x1 ByteProperty AnimGraphRuntime.AnimNode_TwoBoneIK.JointTargetLocationSpace */
    uint8_t UnknownDataBE[0x2];
    FName JointTargetSpaceBoneName; /* Ofs: 0xC0 Size: 0x8 NameProperty AnimGraphRuntime.AnimNode_TwoBoneIK.JointTargetSpaceBoneName */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFAnimNode_TwoBoneIK = sizeof(FAnimNode_TwoBoneIK); // 200
    static_assert(sizeof(FAnimNode_TwoBoneIK) == 0xC8, "Size of FAnimNode_TwoBoneIK is not correct.");
	auto constexpr FAnimNode_TwoBoneIK_IKBone_Offset = offsetof(FAnimNode_TwoBoneIK, IKBone);
	static_assert(FAnimNode_TwoBoneIK_IKBone_Offset == 0x70, "FAnimNode_TwoBoneIK::IKBone offset is not 70");
	auto constexpr FAnimNode_TwoBoneIK_EffectorLocation_Offset = offsetof(FAnimNode_TwoBoneIK, EffectorLocation);
	static_assert(FAnimNode_TwoBoneIK_EffectorLocation_Offset == 0x88, "FAnimNode_TwoBoneIK::EffectorLocation offset is not 88");
	auto constexpr FAnimNode_TwoBoneIK_JointTargetLocation_Offset = offsetof(FAnimNode_TwoBoneIK, JointTargetLocation);
	static_assert(FAnimNode_TwoBoneIK_JointTargetLocation_Offset == 0x94, "FAnimNode_TwoBoneIK::JointTargetLocation offset is not 94");
	auto constexpr FAnimNode_TwoBoneIK_EffectorSpaceBoneName_Offset = offsetof(FAnimNode_TwoBoneIK, EffectorSpaceBoneName);
	static_assert(FAnimNode_TwoBoneIK_EffectorSpaceBoneName_Offset == 0xa0, "FAnimNode_TwoBoneIK::EffectorSpaceBoneName offset is not a0");
	auto constexpr FAnimNode_TwoBoneIK_StretchLimits_Offset = offsetof(FAnimNode_TwoBoneIK, StretchLimits);
	static_assert(FAnimNode_TwoBoneIK_StretchLimits_Offset == 0xac, "FAnimNode_TwoBoneIK::StretchLimits offset is not ac");
	auto constexpr FAnimNode_TwoBoneIK_StartStretchRatio_Offset = offsetof(FAnimNode_TwoBoneIK, StartStretchRatio);
	static_assert(FAnimNode_TwoBoneIK_StartStretchRatio_Offset == 0xb4, "FAnimNode_TwoBoneIK::StartStretchRatio offset is not b4");
	auto constexpr FAnimNode_TwoBoneIK_MaxStretchScale_Offset = offsetof(FAnimNode_TwoBoneIK, MaxStretchScale);
	static_assert(FAnimNode_TwoBoneIK_MaxStretchScale_Offset == 0xb8, "FAnimNode_TwoBoneIK::MaxStretchScale offset is not b8");
	auto constexpr FAnimNode_TwoBoneIK_EffectorLocationSpace_Offset = offsetof(FAnimNode_TwoBoneIK, EffectorLocationSpace);
	static_assert(FAnimNode_TwoBoneIK_EffectorLocationSpace_Offset == 0xbc, "FAnimNode_TwoBoneIK::EffectorLocationSpace offset is not bc");
	auto constexpr FAnimNode_TwoBoneIK_JointTargetLocationSpace_Offset = offsetof(FAnimNode_TwoBoneIK, JointTargetLocationSpace);
	static_assert(FAnimNode_TwoBoneIK_JointTargetLocationSpace_Offset == 0xbd, "FAnimNode_TwoBoneIK::JointTargetLocationSpace offset is not bd");
	auto constexpr FAnimNode_TwoBoneIK_JointTargetSpaceBoneName_Offset = offsetof(FAnimNode_TwoBoneIK, JointTargetSpaceBoneName);
	static_assert(FAnimNode_TwoBoneIK_JointTargetSpaceBoneName_Offset == 0xc0, "FAnimNode_TwoBoneIK::JointTargetSpaceBoneName offset is not c0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
