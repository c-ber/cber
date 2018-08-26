#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FAnimationStateBase // Size: 0x8
{
public:
    FName StateName; /* Ofs: 0x0 Size: 0x8 NameProperty Engine.AnimationStateBase.StateName */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFAnimationStateBase = sizeof(FAnimationStateBase); // 8
    static_assert(sizeof(FAnimationStateBase) == 0x8, "Size of FAnimationStateBase is not correct.");
	auto constexpr FAnimationStateBase_StateName_Offset = offsetof(FAnimationStateBase, StateName);
	static_assert(FAnimationStateBase_StateName_Offset == 0x0, "FAnimationStateBase::StateName offset is not 0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
