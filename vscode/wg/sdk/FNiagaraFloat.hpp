#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FNiagaraFloat // Size: 0x4
{
public:
    float Value; /* Ofs: 0x0 Size: 0x4 FloatProperty Niagara.NiagaraFloat.Value */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFNiagaraFloat = sizeof(FNiagaraFloat); // 4
    static_assert(sizeof(FNiagaraFloat) == 0x4, "Size of FNiagaraFloat is not correct.");
	auto constexpr FNiagaraFloat_Value_Offset = offsetof(FNiagaraFloat, Value);
	static_assert(FNiagaraFloat_Value_Offset == 0x0, "FNiagaraFloat::Value offset is not 0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
