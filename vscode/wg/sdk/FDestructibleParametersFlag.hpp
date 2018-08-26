#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FDestructibleParametersFlag // Size: 0x4
{
public:
    bool bAccumulateDamage : 1; /* Ofs: 0x0 Size: 0x1 BitMask: 01 BoolProperty Engine.DestructibleParametersFlag.bAccumulateDamage */
    bool bAssetDefinedSupport : 1; /* Ofs: 0x0 Size: 0x1 BitMask: 02 BoolProperty Engine.DestructibleParametersFlag.bAssetDefinedSupport */
    bool bWorldSupport : 1; /* Ofs: 0x0 Size: 0x1 BitMask: 04 BoolProperty Engine.DestructibleParametersFlag.bWorldSupport */
    bool bDebrisTimeout : 1; /* Ofs: 0x0 Size: 0x1 BitMask: 08 BoolProperty Engine.DestructibleParametersFlag.bDebrisTimeout */
    bool bDebrisMaxSeparation : 1; /* Ofs: 0x0 Size: 0x1 BitMask: 10 BoolProperty Engine.DestructibleParametersFlag.bDebrisMaxSeparation */
    bool bCrumbleSmallestChunks : 1; /* Ofs: 0x0 Size: 0x1 BitMask: 20 BoolProperty Engine.DestructibleParametersFlag.bCrumbleSmallestChunks */
    bool bAccurateRaycasts : 1; /* Ofs: 0x0 Size: 0x1 BitMask: 40 BoolProperty Engine.DestructibleParametersFlag.bAccurateRaycasts */
    bool bUseValidBounds : 1; /* Ofs: 0x0 Size: 0x1 BitMask: 80 BoolProperty Engine.DestructibleParametersFlag.bUseValidBounds */
    bool bFormExtendedStructures; /* Ofs: 0x1 Size: 0x1 BitMask: 01 BoolProperty Engine.DestructibleParametersFlag.bFormExtendedStructures */
    uint8_t UnknownData2[0x2];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFDestructibleParametersFlag = sizeof(FDestructibleParametersFlag); // 4
    static_assert(sizeof(FDestructibleParametersFlag) == 0x4, "Size of FDestructibleParametersFlag is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
