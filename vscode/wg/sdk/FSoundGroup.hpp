#pragma once
#include "ESoundGroup.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FSoundGroup // Size: 0x20
{
public:
    TEnumAsByte<enum ESoundGroup> SoundGroup; /* Ofs: 0x0 Size: 0x1 ByteProperty Engine.SoundGroup.SoundGroup */
    uint8_t UnknownData1[0x7];
    FString DisplayName; /* Ofs: 0x8 Size: 0x10 StrProperty Engine.SoundGroup.DisplayName */
    bool bAlwaysDecompressOnLoad; /* Ofs: 0x18 Size: 0x1 BitMask: 01 BoolProperty Engine.SoundGroup.bAlwaysDecompressOnLoad */
    uint8_t UnknownData19[0x3];
    float DecompressedDuration; /* Ofs: 0x1C Size: 0x4 FloatProperty Engine.SoundGroup.DecompressedDuration */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFSoundGroup = sizeof(FSoundGroup); // 32
    static_assert(sizeof(FSoundGroup) == 0x20, "Size of FSoundGroup is not correct.");
	auto constexpr FSoundGroup_SoundGroup_Offset = offsetof(FSoundGroup, SoundGroup);
	static_assert(FSoundGroup_SoundGroup_Offset == 0x0, "FSoundGroup::SoundGroup offset is not 0");
	auto constexpr FSoundGroup_DisplayName_Offset = offsetof(FSoundGroup, DisplayName);
	static_assert(FSoundGroup_DisplayName_Offset == 0x8, "FSoundGroup::DisplayName offset is not 8");
	auto constexpr FSoundGroup_DecompressedDuration_Offset = offsetof(FSoundGroup, DecompressedDuration);
	static_assert(FSoundGroup_DecompressedDuration_Offset == 0x1c, "FSoundGroup::DecompressedDuration offset is not 1c");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
