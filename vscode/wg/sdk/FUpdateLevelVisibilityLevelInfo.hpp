#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FUpdateLevelVisibilityLevelInfo // Size: 0x10
{
public:
    FName PackageName; /* Ofs: 0x0 Size: 0x8 NameProperty Engine.UpdateLevelVisibilityLevelInfo.PackageName */
    bool bIsVisible; /* Ofs: 0x8 Size: 0x1 BitMask: 01 BoolProperty Engine.UpdateLevelVisibilityLevelInfo.bIsVisible */
    uint8_t UnknownData9[0x7];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFUpdateLevelVisibilityLevelInfo = sizeof(FUpdateLevelVisibilityLevelInfo); // 16
    static_assert(sizeof(FUpdateLevelVisibilityLevelInfo) == 0x10, "Size of FUpdateLevelVisibilityLevelInfo is not correct.");
	auto constexpr FUpdateLevelVisibilityLevelInfo_PackageName_Offset = offsetof(FUpdateLevelVisibilityLevelInfo, PackageName);
	static_assert(FUpdateLevelVisibilityLevelInfo_PackageName_Offset == 0x0, "FUpdateLevelVisibilityLevelInfo::PackageName offset is not 0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
