#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FNiagaraScriptDataUsageInfo // Size: 0x1
{
public:
    bool bReadsAttriubteData; /* Ofs: 0x0 Size: 0x1 BitMask: 01 BoolProperty Niagara.NiagaraScriptDataUsageInfo.bReadsAttriubteData */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFNiagaraScriptDataUsageInfo = sizeof(FNiagaraScriptDataUsageInfo); // 1
    static_assert(sizeof(FNiagaraScriptDataUsageInfo) == 0x1, "Size of FNiagaraScriptDataUsageInfo is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
