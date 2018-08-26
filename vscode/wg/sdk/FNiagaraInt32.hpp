#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FNiagaraInt32 // Size: 0x4
{
public:
    int32_t Value; /* Ofs: 0x0 Size: 0x4 IntProperty Niagara.NiagaraInt32.Value */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFNiagaraInt32 = sizeof(FNiagaraInt32); // 4
    static_assert(sizeof(FNiagaraInt32) == 0x4, "Size of FNiagaraInt32 is not correct.");
	auto constexpr FNiagaraInt32_Value_Offset = offsetof(FNiagaraInt32, Value);
	static_assert(FNiagaraInt32_Value_Offset == 0x0, "FNiagaraInt32::Value offset is not 0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
