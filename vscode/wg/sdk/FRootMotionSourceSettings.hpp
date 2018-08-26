#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FRootMotionSourceSettings // Size: 0x1
{
public:
    uint8_t Flags; /* Ofs: 0x0 Size: 0x1 ByteProperty Engine.RootMotionSourceSettings.Flags */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFRootMotionSourceSettings = sizeof(FRootMotionSourceSettings); // 1
    static_assert(sizeof(FRootMotionSourceSettings) == 0x1, "Size of FRootMotionSourceSettings is not correct.");
	auto constexpr FRootMotionSourceSettings_Flags_Offset = offsetof(FRootMotionSourceSettings, Flags);
	static_assert(FRootMotionSourceSettings_Flags_Offset == 0x0, "FRootMotionSourceSettings::Flags offset is not 0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
