#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FParticleBurst // Size: 0xC
{
public:
    int32_t Count; /* Ofs: 0x0 Size: 0x4 IntProperty Engine.ParticleBurst.Count */
    int32_t CountLow; /* Ofs: 0x4 Size: 0x4 IntProperty Engine.ParticleBurst.CountLow */
    float Time; /* Ofs: 0x8 Size: 0x4 FloatProperty Engine.ParticleBurst.Time */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFParticleBurst = sizeof(FParticleBurst); // 12
    static_assert(sizeof(FParticleBurst) == 0xC, "Size of FParticleBurst is not correct.");
	auto constexpr FParticleBurst_Count_Offset = offsetof(FParticleBurst, Count);
	static_assert(FParticleBurst_Count_Offset == 0x0, "FParticleBurst::Count offset is not 0");
	auto constexpr FParticleBurst_CountLow_Offset = offsetof(FParticleBurst, CountLow);
	static_assert(FParticleBurst_CountLow_Offset == 0x4, "FParticleBurst::CountLow offset is not 4");
	auto constexpr FParticleBurst_Time_Offset = offsetof(FParticleBurst, Time);
	static_assert(FParticleBurst_Time_Offset == 0x8, "FParticleBurst::Time offset is not 8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
