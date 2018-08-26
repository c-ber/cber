#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FTslParticleArray // Size: 0x10
{
public:
    TArray<ExternalPtr<struct UTslParticle>> ParticleArray; /* Ofs: 0x0 Size: 0x10 ArrayProperty TslGame.TslParticleArray.ParticleArray */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFTslParticleArray = sizeof(FTslParticleArray); // 16
    static_assert(sizeof(FTslParticleArray) == 0x10, "Size of FTslParticleArray is not correct.");
	auto constexpr FTslParticleArray_ParticleArray_Offset = offsetof(FTslParticleArray, ParticleArray);
	static_assert(FTslParticleArray_ParticleArray_Offset == 0x0, "FTslParticleArray::ParticleArray offset is not 0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
