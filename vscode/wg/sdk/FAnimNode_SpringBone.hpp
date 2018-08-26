#pragma once
#include "FAnimNode_SkeletalControlBase.hpp"
#include "FBoneReference.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FAnimNode_SpringBone // Size: 0xD8
 : public FAnimNode_SkeletalControlBase // Size: 0x70
{
public:
    FBoneReference SpringBone; /* Ofs: 0x70 Size: 0x18 StructProperty AnimGraphRuntime.AnimNode_SpringBone.SpringBone */
    bool bLimitDisplacement; /* Ofs: 0x88 Size: 0x1 BitMask: 01 BoolProperty AnimGraphRuntime.AnimNode_SpringBone.bLimitDisplacement */
    uint8_t UnknownData89[0x3];
    float MaxDisplacement; /* Ofs: 0x8C Size: 0x4 FloatProperty AnimGraphRuntime.AnimNode_SpringBone.MaxDisplacement */
    float SpringStiffness; /* Ofs: 0x90 Size: 0x4 FloatProperty AnimGraphRuntime.AnimNode_SpringBone.SpringStiffness */
    float SpringDamping; /* Ofs: 0x94 Size: 0x4 FloatProperty AnimGraphRuntime.AnimNode_SpringBone.SpringDamping */
    float ErrorResetThresh; /* Ofs: 0x98 Size: 0x4 FloatProperty AnimGraphRuntime.AnimNode_SpringBone.ErrorResetThresh */
    bool bNoZSpring; /* Ofs: 0x9C Size: 0x1 BitMask: 01 BoolProperty AnimGraphRuntime.AnimNode_SpringBone.bNoZSpring */
    bool bTranslateX; /* Ofs: 0x9D Size: 0x1 BitMask: 01 BoolProperty AnimGraphRuntime.AnimNode_SpringBone.bTranslateX */
    bool bTranslateY; /* Ofs: 0x9E Size: 0x1 BitMask: 01 BoolProperty AnimGraphRuntime.AnimNode_SpringBone.bTranslateY */
    bool bTranslateZ; /* Ofs: 0x9F Size: 0x1 BitMask: 01 BoolProperty AnimGraphRuntime.AnimNode_SpringBone.bTranslateZ */
    bool bRotateX; /* Ofs: 0xA0 Size: 0x1 BitMask: 01 BoolProperty AnimGraphRuntime.AnimNode_SpringBone.bRotateX */
    bool bRotateY; /* Ofs: 0xA1 Size: 0x1 BitMask: 01 BoolProperty AnimGraphRuntime.AnimNode_SpringBone.bRotateY */
    bool bRotateZ; /* Ofs: 0xA2 Size: 0x1 BitMask: 01 BoolProperty AnimGraphRuntime.AnimNode_SpringBone.bRotateZ */
    uint8_t UnknownDataA3[0x35];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFAnimNode_SpringBone = sizeof(FAnimNode_SpringBone); // 216
    static_assert(sizeof(FAnimNode_SpringBone) == 0xD8, "Size of FAnimNode_SpringBone is not correct.");
	auto constexpr FAnimNode_SpringBone_SpringBone_Offset = offsetof(FAnimNode_SpringBone, SpringBone);
	static_assert(FAnimNode_SpringBone_SpringBone_Offset == 0x70, "FAnimNode_SpringBone::SpringBone offset is not 70");
	auto constexpr FAnimNode_SpringBone_MaxDisplacement_Offset = offsetof(FAnimNode_SpringBone, MaxDisplacement);
	static_assert(FAnimNode_SpringBone_MaxDisplacement_Offset == 0x8c, "FAnimNode_SpringBone::MaxDisplacement offset is not 8c");
	auto constexpr FAnimNode_SpringBone_SpringStiffness_Offset = offsetof(FAnimNode_SpringBone, SpringStiffness);
	static_assert(FAnimNode_SpringBone_SpringStiffness_Offset == 0x90, "FAnimNode_SpringBone::SpringStiffness offset is not 90");
	auto constexpr FAnimNode_SpringBone_SpringDamping_Offset = offsetof(FAnimNode_SpringBone, SpringDamping);
	static_assert(FAnimNode_SpringBone_SpringDamping_Offset == 0x94, "FAnimNode_SpringBone::SpringDamping offset is not 94");
	auto constexpr FAnimNode_SpringBone_ErrorResetThresh_Offset = offsetof(FAnimNode_SpringBone, ErrorResetThresh);
	static_assert(FAnimNode_SpringBone_ErrorResetThresh_Offset == 0x98, "FAnimNode_SpringBone::ErrorResetThresh offset is not 98");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
