#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FNiagaraParameters // Size: 0x10
{
public:
    TArray<struct FNiagaraVariable> Parameters; /* Ofs: 0x0 Size: 0x10 ArrayProperty Niagara.NiagaraParameters.Parameters */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFNiagaraParameters = sizeof(FNiagaraParameters); // 16
    static_assert(sizeof(FNiagaraParameters) == 0x10, "Size of FNiagaraParameters is not correct.");
	auto constexpr FNiagaraParameters_Parameters_Offset = offsetof(FNiagaraParameters, Parameters);
	static_assert(FNiagaraParameters_Parameters_Offset == 0x0, "FNiagaraParameters::Parameters offset is not 0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
