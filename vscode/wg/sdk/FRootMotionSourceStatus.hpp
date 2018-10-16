#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FRootMotionSourceStatus // Size: 0x1
{
public:
    uint8_t Flags; /* Ofs: 0x0 Size: 0x1 ByteProperty Engine.RootMotionSourceStatus.Flags */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFRootMotionSourceStatus = sizeof(FRootMotionSourceStatus); // 1
    static_assert(sizeof(FRootMotionSourceStatus) == 0x1, "Size of FRootMotionSourceStatus is not correct.");
	auto constexpr FRootMotionSourceStatus_Flags_Offset = offsetof(FRootMotionSourceStatus, Flags);
	static_assert(FRootMotionSourceStatus_Flags_Offset == 0x0, "FRootMotionSourceStatus::Flags offset is not 0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
