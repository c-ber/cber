#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FParticleRandomSeedInfo // Size: 0x20
{
public:
    FName ParameterName; /* Ofs: 0x0 Size: 0x8 NameProperty Engine.ParticleRandomSeedInfo.ParameterName */
    bool bGetSeedFromInstance : 1; /* Ofs: 0x8 Size: 0x1 BitMask: 01 BoolProperty Engine.ParticleRandomSeedInfo.bGetSeedFromInstance */
    bool bInstanceSeedIsIndex : 1; /* Ofs: 0x8 Size: 0x1 BitMask: 02 BoolProperty Engine.ParticleRandomSeedInfo.bInstanceSeedIsIndex */
    bool bResetSeedOnEmitterLooping : 1; /* Ofs: 0x8 Size: 0x1 BitMask: 04 BoolProperty Engine.ParticleRandomSeedInfo.bResetSeedOnEmitterLooping */
    bool bRandomlySelectSeedArray : 1; /* Ofs: 0x8 Size: 0x1 BitMask: 08 BoolProperty Engine.ParticleRandomSeedInfo.bRandomlySelectSeedArray */
    uint8_t UnknownData9[0x7];
    TArray<int32_t> RandomSeeds; /* Ofs: 0x10 Size: 0x10 ArrayProperty Engine.ParticleRandomSeedInfo.RandomSeeds */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFParticleRandomSeedInfo = sizeof(FParticleRandomSeedInfo); // 32
    static_assert(sizeof(FParticleRandomSeedInfo) == 0x20, "Size of FParticleRandomSeedInfo is not correct.");
	auto constexpr FParticleRandomSeedInfo_ParameterName_Offset = offsetof(FParticleRandomSeedInfo, ParameterName);
	static_assert(FParticleRandomSeedInfo_ParameterName_Offset == 0x0, "FParticleRandomSeedInfo::ParameterName offset is not 0");
	auto constexpr FParticleRandomSeedInfo_RandomSeeds_Offset = offsetof(FParticleRandomSeedInfo, RandomSeeds);
	static_assert(FParticleRandomSeedInfo_RandomSeeds_Offset == 0x10, "FParticleRandomSeedInfo::RandomSeeds offset is not 10");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
