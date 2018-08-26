#pragma once
#include "FVector.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FNiagaraTestStructInner // Size: 0x18
{
public:
    FVector InnerVector1; /* Ofs: 0x0 Size: 0xC StructProperty Niagara.NiagaraTestStructInner.InnerVector1 */
    FVector InnerVector2; /* Ofs: 0xC Size: 0xC StructProperty Niagara.NiagaraTestStructInner.InnerVector2 */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFNiagaraTestStructInner = sizeof(FNiagaraTestStructInner); // 24
    static_assert(sizeof(FNiagaraTestStructInner) == 0x18, "Size of FNiagaraTestStructInner is not correct.");
	auto constexpr FNiagaraTestStructInner_InnerVector1_Offset = offsetof(FNiagaraTestStructInner, InnerVector1);
	static_assert(FNiagaraTestStructInner_InnerVector1_Offset == 0x0, "FNiagaraTestStructInner::InnerVector1 offset is not 0");
	auto constexpr FNiagaraTestStructInner_InnerVector2_Offset = offsetof(FNiagaraTestStructInner, InnerVector2);
	static_assert(FNiagaraTestStructInner_InnerVector2_Offset == 0xc, "FNiagaraTestStructInner::InnerVector2 offset is not c");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
