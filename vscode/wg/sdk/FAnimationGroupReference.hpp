#pragma once
#include "EAnimGroupRole.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FAnimationGroupReference // Size: 0x10
{
public:
    FName GroupName; /* Ofs: 0x0 Size: 0x8 NameProperty Engine.AnimationGroupReference.GroupName */
    TEnumAsByte<enum EAnimGroupRole> GroupRole; /* Ofs: 0x8 Size: 0x1 ByteProperty Engine.AnimationGroupReference.GroupRole */
    uint8_t UnknownData9[0x7];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFAnimationGroupReference = sizeof(FAnimationGroupReference); // 16
    static_assert(sizeof(FAnimationGroupReference) == 0x10, "Size of FAnimationGroupReference is not correct.");
	auto constexpr FAnimationGroupReference_GroupName_Offset = offsetof(FAnimationGroupReference, GroupName);
	static_assert(FAnimationGroupReference_GroupName_Offset == 0x0, "FAnimationGroupReference::GroupName offset is not 0");
	auto constexpr FAnimationGroupReference_GroupRole_Offset = offsetof(FAnimationGroupReference, GroupRole);
	static_assert(FAnimationGroupReference_GroupRole_Offset == 0x8, "FAnimationGroupReference::GroupRole offset is not 8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
