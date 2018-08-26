#pragma once
#include "FA2Pose.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FA2CSPose // Size: 0x28
 : public FA2Pose // Size: 0x10
{
public:
    uint8_t UnknownData10[0x8];
    TArray<uint8_t> ComponentSpaceFlags; /* Ofs: 0x18 Size: 0x10 ArrayProperty Engine.A2CSPose.ComponentSpaceFlags */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFA2CSPose = sizeof(FA2CSPose); // 40
    static_assert(sizeof(FA2CSPose) == 0x28, "Size of FA2CSPose is not correct.");
	auto constexpr FA2CSPose_ComponentSpaceFlags_Offset = offsetof(FA2CSPose, ComponentSpaceFlags);
	static_assert(FA2CSPose_ComponentSpaceFlags_Offset == 0x18, "FA2CSPose::ComponentSpaceFlags offset is not 18");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
