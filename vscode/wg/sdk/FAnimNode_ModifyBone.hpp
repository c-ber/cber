#pragma once
#include "FAnimNode_SkeletalControlBase.hpp"
#include "FBoneReference.hpp"
#include "FVector.hpp"
#include "FRotator.hpp"
#include "EBoneModificationMode.hpp"
#include "EBoneControlSpace.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FAnimNode_ModifyBone // Size: 0xB8
 : public FAnimNode_SkeletalControlBase // Size: 0x70
{
public:
    FBoneReference BoneToModify; /* Ofs: 0x70 Size: 0x18 StructProperty AnimGraphRuntime.AnimNode_ModifyBone.BoneToModify */
    FVector Translation; /* Ofs: 0x88 Size: 0xC StructProperty AnimGraphRuntime.AnimNode_ModifyBone.Translation */
    FRotator Rotation; /* Ofs: 0x94 Size: 0xC StructProperty AnimGraphRuntime.AnimNode_ModifyBone.Rotation */
    FVector Scale; /* Ofs: 0xA0 Size: 0xC StructProperty AnimGraphRuntime.AnimNode_ModifyBone.Scale */
    TEnumAsByte<enum EBoneModificationMode> TranslationMode; /* Ofs: 0xAC Size: 0x1 ByteProperty AnimGraphRuntime.AnimNode_ModifyBone.TranslationMode */
    TEnumAsByte<enum EBoneModificationMode> RotationMode; /* Ofs: 0xAD Size: 0x1 ByteProperty AnimGraphRuntime.AnimNode_ModifyBone.RotationMode */
    TEnumAsByte<enum EBoneModificationMode> ScaleMode; /* Ofs: 0xAE Size: 0x1 ByteProperty AnimGraphRuntime.AnimNode_ModifyBone.ScaleMode */
    TEnumAsByte<enum EBoneControlSpace> TranslationSpace; /* Ofs: 0xAF Size: 0x1 ByteProperty AnimGraphRuntime.AnimNode_ModifyBone.TranslationSpace */
    TEnumAsByte<enum EBoneControlSpace> RotationSpace; /* Ofs: 0xB0 Size: 0x1 ByteProperty AnimGraphRuntime.AnimNode_ModifyBone.RotationSpace */
    TEnumAsByte<enum EBoneControlSpace> ScaleSpace; /* Ofs: 0xB1 Size: 0x1 ByteProperty AnimGraphRuntime.AnimNode_ModifyBone.ScaleSpace */
    uint8_t UnknownDataB2[0x6];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFAnimNode_ModifyBone = sizeof(FAnimNode_ModifyBone); // 184
    static_assert(sizeof(FAnimNode_ModifyBone) == 0xB8, "Size of FAnimNode_ModifyBone is not correct.");
	auto constexpr FAnimNode_ModifyBone_BoneToModify_Offset = offsetof(FAnimNode_ModifyBone, BoneToModify);
	static_assert(FAnimNode_ModifyBone_BoneToModify_Offset == 0x70, "FAnimNode_ModifyBone::BoneToModify offset is not 70");
	auto constexpr FAnimNode_ModifyBone_Translation_Offset = offsetof(FAnimNode_ModifyBone, Translation);
	static_assert(FAnimNode_ModifyBone_Translation_Offset == 0x88, "FAnimNode_ModifyBone::Translation offset is not 88");
	auto constexpr FAnimNode_ModifyBone_Rotation_Offset = offsetof(FAnimNode_ModifyBone, Rotation);
	static_assert(FAnimNode_ModifyBone_Rotation_Offset == 0x94, "FAnimNode_ModifyBone::Rotation offset is not 94");
	auto constexpr FAnimNode_ModifyBone_Scale_Offset = offsetof(FAnimNode_ModifyBone, Scale);
	static_assert(FAnimNode_ModifyBone_Scale_Offset == 0xa0, "FAnimNode_ModifyBone::Scale offset is not a0");
	auto constexpr FAnimNode_ModifyBone_TranslationMode_Offset = offsetof(FAnimNode_ModifyBone, TranslationMode);
	static_assert(FAnimNode_ModifyBone_TranslationMode_Offset == 0xac, "FAnimNode_ModifyBone::TranslationMode offset is not ac");
	auto constexpr FAnimNode_ModifyBone_RotationMode_Offset = offsetof(FAnimNode_ModifyBone, RotationMode);
	static_assert(FAnimNode_ModifyBone_RotationMode_Offset == 0xad, "FAnimNode_ModifyBone::RotationMode offset is not ad");
	auto constexpr FAnimNode_ModifyBone_ScaleMode_Offset = offsetof(FAnimNode_ModifyBone, ScaleMode);
	static_assert(FAnimNode_ModifyBone_ScaleMode_Offset == 0xae, "FAnimNode_ModifyBone::ScaleMode offset is not ae");
	auto constexpr FAnimNode_ModifyBone_TranslationSpace_Offset = offsetof(FAnimNode_ModifyBone, TranslationSpace);
	static_assert(FAnimNode_ModifyBone_TranslationSpace_Offset == 0xaf, "FAnimNode_ModifyBone::TranslationSpace offset is not af");
	auto constexpr FAnimNode_ModifyBone_RotationSpace_Offset = offsetof(FAnimNode_ModifyBone, RotationSpace);
	static_assert(FAnimNode_ModifyBone_RotationSpace_Offset == 0xb0, "FAnimNode_ModifyBone::RotationSpace offset is not b0");
	auto constexpr FAnimNode_ModifyBone_ScaleSpace_Offset = offsetof(FAnimNode_ModifyBone, ScaleSpace);
	static_assert(FAnimNode_ModifyBone_ScaleSpace_Offset == 0xb1, "FAnimNode_ModifyBone::ScaleSpace offset is not b1");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
