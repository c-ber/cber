#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FNiagaraEmitterBurst // Size: 0x10
{
public:
    float Time; /* Ofs: 0x0 Size: 0x4 FloatProperty Niagara.NiagaraEmitterBurst.Time */
    float TimeRange; /* Ofs: 0x4 Size: 0x4 FloatProperty Niagara.NiagaraEmitterBurst.TimeRange */
    uint32_t SpawnMinimum; /* Ofs: 0x8 Size: 0x4 UInt32Property Niagara.NiagaraEmitterBurst.SpawnMinimum */
    uint32_t SpawnMaximum; /* Ofs: 0xC Size: 0x4 UInt32Property Niagara.NiagaraEmitterBurst.SpawnMaximum */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFNiagaraEmitterBurst = sizeof(FNiagaraEmitterBurst); // 16
    static_assert(sizeof(FNiagaraEmitterBurst) == 0x10, "Size of FNiagaraEmitterBurst is not correct.");
	auto constexpr FNiagaraEmitterBurst_Time_Offset = offsetof(FNiagaraEmitterBurst, Time);
	static_assert(FNiagaraEmitterBurst_Time_Offset == 0x0, "FNiagaraEmitterBurst::Time offset is not 0");
	auto constexpr FNiagaraEmitterBurst_TimeRange_Offset = offsetof(FNiagaraEmitterBurst, TimeRange);
	static_assert(FNiagaraEmitterBurst_TimeRange_Offset == 0x4, "FNiagaraEmitterBurst::TimeRange offset is not 4");
	auto constexpr FNiagaraEmitterBurst_SpawnMinimum_Offset = offsetof(FNiagaraEmitterBurst, SpawnMinimum);
	static_assert(FNiagaraEmitterBurst_SpawnMinimum_Offset == 0x8, "FNiagaraEmitterBurst::SpawnMinimum offset is not 8");
	auto constexpr FNiagaraEmitterBurst_SpawnMaximum_Offset = offsetof(FNiagaraEmitterBurst, SpawnMaximum);
	static_assert(FNiagaraEmitterBurst_SpawnMaximum_Offset == 0xc, "FNiagaraEmitterBurst::SpawnMaximum offset is not c");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
