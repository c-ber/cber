#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FNiagaraStatScope // Size: 0x20
{
public:
    uint8_t UnknownData0[0x20];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFNiagaraStatScope = sizeof(FNiagaraStatScope); // 32
    static_assert(sizeof(FNiagaraStatScope) == 0x20, "Size of FNiagaraStatScope is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
