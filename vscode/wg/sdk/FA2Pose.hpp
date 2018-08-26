#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FA2Pose // Size: 0x10
{
public:
    TArray<struct FTransform> Bones; /* Ofs: 0x0 Size: 0x10 ArrayProperty Engine.A2Pose.Bones */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFA2Pose = sizeof(FA2Pose); // 16
    static_assert(sizeof(FA2Pose) == 0x10, "Size of FA2Pose is not correct.");
	auto constexpr FA2Pose_Bones_Offset = offsetof(FA2Pose, Bones);
	static_assert(FA2Pose_Bones_Offset == 0x0, "FA2Pose::Bones offset is not 0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
