#pragma once
#include "FVector_NetQuantize10.hpp"
#include "FRootMotionSourceSettings.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FRootMotionSourceGroup // Size: 0x100
{
public:
    uint8_t UnknownData0[0xE8];
    bool bHasAdditiveSources; /* Ofs: 0xE8 Size: 0x1 BitMask: 01 BoolProperty Engine.RootMotionSourceGroup.bHasAdditiveSources */
    bool bHasOverrideSources; /* Ofs: 0xE9 Size: 0x1 BitMask: 01 BoolProperty Engine.RootMotionSourceGroup.bHasOverrideSources */
    uint8_t UnknownDataEA[0x2];
    FVector_NetQuantize10 LastPreAdditiveVelocity; /* Ofs: 0xEC Size: 0xC StructProperty Engine.RootMotionSourceGroup.LastPreAdditiveVelocity */
    bool bIsAdditiveVelocityApplied; /* Ofs: 0xF8 Size: 0x1 BitMask: 01 BoolProperty Engine.RootMotionSourceGroup.bIsAdditiveVelocityApplied */
    FRootMotionSourceSettings LastAccumulatedSettings; /* Ofs: 0xF9 Size: 0x1 StructProperty Engine.RootMotionSourceGroup.LastAccumulatedSettings */
    uint8_t UnknownDataFA[0x6];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFRootMotionSourceGroup = sizeof(FRootMotionSourceGroup); // 256
    static_assert(sizeof(FRootMotionSourceGroup) == 0x100, "Size of FRootMotionSourceGroup is not correct.");
	auto constexpr FRootMotionSourceGroup_LastPreAdditiveVelocity_Offset = offsetof(FRootMotionSourceGroup, LastPreAdditiveVelocity);
	static_assert(FRootMotionSourceGroup_LastPreAdditiveVelocity_Offset == 0xec, "FRootMotionSourceGroup::LastPreAdditiveVelocity offset is not ec");
	auto constexpr FRootMotionSourceGroup_LastAccumulatedSettings_Offset = offsetof(FRootMotionSourceGroup, LastAccumulatedSettings);
	static_assert(FRootMotionSourceGroup_LastAccumulatedSettings_Offset == 0xf9, "FRootMotionSourceGroup::LastAccumulatedSettings offset is not f9");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
