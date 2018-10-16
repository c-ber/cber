#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FDestructibleChunkParameters // Size: 0x4
{
public:
    bool bIsSupportChunk; /* Ofs: 0x0 Size: 0x1 BitMask: 01 BoolProperty Engine.DestructibleChunkParameters.bIsSupportChunk */
    bool bDoNotFracture; /* Ofs: 0x1 Size: 0x1 BitMask: 01 BoolProperty Engine.DestructibleChunkParameters.bDoNotFracture */
    bool bDoNotDamage; /* Ofs: 0x2 Size: 0x1 BitMask: 01 BoolProperty Engine.DestructibleChunkParameters.bDoNotDamage */
    bool bDoNotCrumble; /* Ofs: 0x3 Size: 0x1 BitMask: 01 BoolProperty Engine.DestructibleChunkParameters.bDoNotCrumble */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFDestructibleChunkParameters = sizeof(FDestructibleChunkParameters); // 4
    static_assert(sizeof(FDestructibleChunkParameters) == 0x4, "Size of FDestructibleChunkParameters is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
