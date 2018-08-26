#pragma once
#include "FAnimNode_SkeletalControlBase.hpp"
#include "FTransform.hpp"
#include "EBoneControlSpace.hpp"
#include "FBoneReference.hpp"
#include "EBoneRotationSource.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FAnimNode_Fabrik // Size: 0x110
 : public FAnimNode_SkeletalControlBase // Size: 0x70
{
public:
    FTransform EffectorTransform; /* Ofs: 0x70 Size: 0x30 StructProperty AnimGraphRuntime.AnimNode_Fabrik.EffectorTransform */
    TEnumAsByte<enum EBoneControlSpace> EffectorTransformSpace; /* Ofs: 0xA0 Size: 0x1 ByteProperty AnimGraphRuntime.AnimNode_Fabrik.EffectorTransformSpace */
    uint8_t UnknownDataA1[0x7];
    FBoneReference EffectorTransformBone; /* Ofs: 0xA8 Size: 0x18 StructProperty AnimGraphRuntime.AnimNode_Fabrik.EffectorTransformBone */
    TEnumAsByte<enum EBoneRotationSource> EffectorRotationSource; /* Ofs: 0xC0 Size: 0x1 ByteProperty AnimGraphRuntime.AnimNode_Fabrik.EffectorRotationSource */
    uint8_t UnknownDataC1[0x7];
    FBoneReference TipBone; /* Ofs: 0xC8 Size: 0x18 StructProperty AnimGraphRuntime.AnimNode_Fabrik.TipBone */
    FBoneReference RootBone; /* Ofs: 0xE0 Size: 0x18 StructProperty AnimGraphRuntime.AnimNode_Fabrik.RootBone */
    float Precision; /* Ofs: 0xF8 Size: 0x4 FloatProperty AnimGraphRuntime.AnimNode_Fabrik.Precision */
    int32_t MaxIterations; /* Ofs: 0xFC Size: 0x4 IntProperty AnimGraphRuntime.AnimNode_Fabrik.MaxIterations */
    bool bEnableDebugDraw; /* Ofs: 0x100 Size: 0x1 BitMask: 01 BoolProperty AnimGraphRuntime.AnimNode_Fabrik.bEnableDebugDraw */
    uint8_t UnknownData101[0xF];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFAnimNode_Fabrik = sizeof(FAnimNode_Fabrik); // 272
    static_assert(sizeof(FAnimNode_Fabrik) == 0x110, "Size of FAnimNode_Fabrik is not correct.");
	auto constexpr FAnimNode_Fabrik_EffectorTransform_Offset = offsetof(FAnimNode_Fabrik, EffectorTransform);
	static_assert(FAnimNode_Fabrik_EffectorTransform_Offset == 0x70, "FAnimNode_Fabrik::EffectorTransform offset is not 70");
	auto constexpr FAnimNode_Fabrik_EffectorTransformSpace_Offset = offsetof(FAnimNode_Fabrik, EffectorTransformSpace);
	static_assert(FAnimNode_Fabrik_EffectorTransformSpace_Offset == 0xa0, "FAnimNode_Fabrik::EffectorTransformSpace offset is not a0");
	auto constexpr FAnimNode_Fabrik_EffectorTransformBone_Offset = offsetof(FAnimNode_Fabrik, EffectorTransformBone);
	static_assert(FAnimNode_Fabrik_EffectorTransformBone_Offset == 0xa8, "FAnimNode_Fabrik::EffectorTransformBone offset is not a8");
	auto constexpr FAnimNode_Fabrik_EffectorRotationSource_Offset = offsetof(FAnimNode_Fabrik, EffectorRotationSource);
	static_assert(FAnimNode_Fabrik_EffectorRotationSource_Offset == 0xc0, "FAnimNode_Fabrik::EffectorRotationSource offset is not c0");
	auto constexpr FAnimNode_Fabrik_TipBone_Offset = offsetof(FAnimNode_Fabrik, TipBone);
	static_assert(FAnimNode_Fabrik_TipBone_Offset == 0xc8, "FAnimNode_Fabrik::TipBone offset is not c8");
	auto constexpr FAnimNode_Fabrik_RootBone_Offset = offsetof(FAnimNode_Fabrik, RootBone);
	static_assert(FAnimNode_Fabrik_RootBone_Offset == 0xe0, "FAnimNode_Fabrik::RootBone offset is not e0");
	auto constexpr FAnimNode_Fabrik_Precision_Offset = offsetof(FAnimNode_Fabrik, Precision);
	static_assert(FAnimNode_Fabrik_Precision_Offset == 0xf8, "FAnimNode_Fabrik::Precision offset is not f8");
	auto constexpr FAnimNode_Fabrik_MaxIterations_Offset = offsetof(FAnimNode_Fabrik, MaxIterations);
	static_assert(FAnimNode_Fabrik_MaxIterations_Offset == 0xfc, "FAnimNode_Fabrik::MaxIterations offset is not fc");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
