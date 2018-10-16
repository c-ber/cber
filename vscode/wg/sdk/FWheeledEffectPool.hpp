#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FWheeledEffectPool // Size: 0x50
{
public:
    TMap<struct UClass, struct FTslParticleArray> TslParticleMap; /* Ofs: 0x0 Size: 0x50 MapProperty TslGame.WheeledEffectPool.TslParticleMap */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFWheeledEffectPool = sizeof(FWheeledEffectPool); // 80
    static_assert(sizeof(FWheeledEffectPool) == 0x50, "Size of FWheeledEffectPool is not correct.");
	auto constexpr FWheeledEffectPool_TslParticleMap_Offset = offsetof(FWheeledEffectPool, TslParticleMap);
	static_assert(FWheeledEffectPool_TslParticleMap_Offset == 0x0, "FWheeledEffectPool::TslParticleMap offset is not 0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
