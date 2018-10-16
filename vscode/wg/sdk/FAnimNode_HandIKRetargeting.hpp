#pragma once
#include "FAnimNode_SkeletalControlBase.hpp"
#include "FBoneReference.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FAnimNode_HandIKRetargeting // Size: 0xE8
 : public FAnimNode_SkeletalControlBase // Size: 0x70
{
public:
    FBoneReference RightHandFK; /* Ofs: 0x70 Size: 0x18 StructProperty AnimGraphRuntime.AnimNode_HandIKRetargeting.RightHandFK */
    FBoneReference LeftHandFK; /* Ofs: 0x88 Size: 0x18 StructProperty AnimGraphRuntime.AnimNode_HandIKRetargeting.LeftHandFK */
    FBoneReference RightHandIK; /* Ofs: 0xA0 Size: 0x18 StructProperty AnimGraphRuntime.AnimNode_HandIKRetargeting.RightHandIK */
    FBoneReference LeftHandIK; /* Ofs: 0xB8 Size: 0x18 StructProperty AnimGraphRuntime.AnimNode_HandIKRetargeting.LeftHandIK */
    TArray<struct FBoneReference> IKBonesToMove; /* Ofs: 0xD0 Size: 0x10 ArrayProperty AnimGraphRuntime.AnimNode_HandIKRetargeting.IKBonesToMove */
    float HandFKWeight; /* Ofs: 0xE0 Size: 0x4 FloatProperty AnimGraphRuntime.AnimNode_HandIKRetargeting.HandFKWeight */
    uint8_t UnknownDataE4[0x4];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFAnimNode_HandIKRetargeting = sizeof(FAnimNode_HandIKRetargeting); // 232
    static_assert(sizeof(FAnimNode_HandIKRetargeting) == 0xE8, "Size of FAnimNode_HandIKRetargeting is not correct.");
	auto constexpr FAnimNode_HandIKRetargeting_RightHandFK_Offset = offsetof(FAnimNode_HandIKRetargeting, RightHandFK);
	static_assert(FAnimNode_HandIKRetargeting_RightHandFK_Offset == 0x70, "FAnimNode_HandIKRetargeting::RightHandFK offset is not 70");
	auto constexpr FAnimNode_HandIKRetargeting_LeftHandFK_Offset = offsetof(FAnimNode_HandIKRetargeting, LeftHandFK);
	static_assert(FAnimNode_HandIKRetargeting_LeftHandFK_Offset == 0x88, "FAnimNode_HandIKRetargeting::LeftHandFK offset is not 88");
	auto constexpr FAnimNode_HandIKRetargeting_RightHandIK_Offset = offsetof(FAnimNode_HandIKRetargeting, RightHandIK);
	static_assert(FAnimNode_HandIKRetargeting_RightHandIK_Offset == 0xa0, "FAnimNode_HandIKRetargeting::RightHandIK offset is not a0");
	auto constexpr FAnimNode_HandIKRetargeting_LeftHandIK_Offset = offsetof(FAnimNode_HandIKRetargeting, LeftHandIK);
	static_assert(FAnimNode_HandIKRetargeting_LeftHandIK_Offset == 0xb8, "FAnimNode_HandIKRetargeting::LeftHandIK offset is not b8");
	auto constexpr FAnimNode_HandIKRetargeting_IKBonesToMove_Offset = offsetof(FAnimNode_HandIKRetargeting, IKBonesToMove);
	static_assert(FAnimNode_HandIKRetargeting_IKBonesToMove_Offset == 0xd0, "FAnimNode_HandIKRetargeting::IKBonesToMove offset is not d0");
	auto constexpr FAnimNode_HandIKRetargeting_HandFKWeight_Offset = offsetof(FAnimNode_HandIKRetargeting, HandFKWeight);
	static_assert(FAnimNode_HandIKRetargeting_HandFKWeight_Offset == 0xe0, "FAnimNode_HandIKRetargeting::HandFKWeight offset is not e0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
