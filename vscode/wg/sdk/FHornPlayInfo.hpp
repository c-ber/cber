#pragma once
#include "EHornSoundType.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FHornPlayInfo // Size: 0x8
{
public:
    bool bMakeSureDirty; /* Ofs: 0x0 Size: 0x1 BitMask: 01 BoolProperty TslGame.HornPlayInfo.bMakeSureDirty */
    TEnumAsByte<enum EHornSoundType> HornSoundType; /* Ofs: 0x1 Size: 0x1 EnumProperty TslGame.HornPlayInfo.HornSoundType */
    uint8_t UnknownData2[0x2];
    float KeyPressedTime; /* Ofs: 0x4 Size: 0x4 FloatProperty TslGame.HornPlayInfo.KeyPressedTime */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFHornPlayInfo = sizeof(FHornPlayInfo); // 8
    static_assert(sizeof(FHornPlayInfo) == 0x8, "Size of FHornPlayInfo is not correct.");
	auto constexpr FHornPlayInfo_HornSoundType_Offset = offsetof(FHornPlayInfo, HornSoundType);
	static_assert(FHornPlayInfo_HornSoundType_Offset == 0x1, "FHornPlayInfo::HornSoundType offset is not 1");
	auto constexpr FHornPlayInfo_KeyPressedTime_Offset = offsetof(FHornPlayInfo, KeyPressedTime);
	static_assert(FHornPlayInfo_KeyPressedTime_Offset == 0x4, "FHornPlayInfo::KeyPressedTime offset is not 4");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
