#pragma once
#include "FNiagaraDataSetProperties.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FNiagaraEventGeneratorProperties // Size: 0x38
{
public:
    int32_t MaxEventsPerFrame; /* Ofs: 0x0 Size: 0x4 IntProperty Niagara.NiagaraEventGeneratorProperties.MaxEventsPerFrame */
    uint8_t UnknownData4[0x14];
    FNiagaraDataSetProperties SetProps; /* Ofs: 0x18 Size: 0x20 StructProperty Niagara.NiagaraEventGeneratorProperties.SetProps */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFNiagaraEventGeneratorProperties = sizeof(FNiagaraEventGeneratorProperties); // 56
    static_assert(sizeof(FNiagaraEventGeneratorProperties) == 0x38, "Size of FNiagaraEventGeneratorProperties is not correct.");
	auto constexpr FNiagaraEventGeneratorProperties_MaxEventsPerFrame_Offset = offsetof(FNiagaraEventGeneratorProperties, MaxEventsPerFrame);
	static_assert(FNiagaraEventGeneratorProperties_MaxEventsPerFrame_Offset == 0x0, "FNiagaraEventGeneratorProperties::MaxEventsPerFrame offset is not 0");
	auto constexpr FNiagaraEventGeneratorProperties_SetProps_Offset = offsetof(FNiagaraEventGeneratorProperties, SetProps);
	static_assert(FNiagaraEventGeneratorProperties_SetProps_Offset == 0x18, "FNiagaraEventGeneratorProperties::SetProps offset is not 18");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
