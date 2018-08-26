#pragma once
#include "FGuid.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FNiagaraEmitterHandle // Size: 0x30
{
public:
    FGuid ID; /* Ofs: 0x0 Size: 0x10 StructProperty Niagara.NiagaraEmitterHandle.ID */
    FName IdName; /* Ofs: 0x10 Size: 0x8 NameProperty Niagara.NiagaraEmitterHandle.IdName */
    bool bIsEnabled; /* Ofs: 0x18 Size: 0x1 BitMask: 01 BoolProperty Niagara.NiagaraEmitterHandle.bIsEnabled */
    uint8_t UnknownData19[0x7];
    FName Name; /* Ofs: 0x20 Size: 0x8 NameProperty Niagara.NiagaraEmitterHandle.Name */
    ExternalPtr<struct UNiagaraEmitterProperties> Instance; /* Ofs: 0x28 Size: 0x8 ObjectProperty Niagara.NiagaraEmitterHandle.Instance */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFNiagaraEmitterHandle = sizeof(FNiagaraEmitterHandle); // 48
    static_assert(sizeof(FNiagaraEmitterHandle) == 0x30, "Size of FNiagaraEmitterHandle is not correct.");
	auto constexpr FNiagaraEmitterHandle_ID_Offset = offsetof(FNiagaraEmitterHandle, ID);
	static_assert(FNiagaraEmitterHandle_ID_Offset == 0x0, "FNiagaraEmitterHandle::ID offset is not 0");
	auto constexpr FNiagaraEmitterHandle_IdName_Offset = offsetof(FNiagaraEmitterHandle, IdName);
	static_assert(FNiagaraEmitterHandle_IdName_Offset == 0x10, "FNiagaraEmitterHandle::IdName offset is not 10");
	auto constexpr FNiagaraEmitterHandle_Name_Offset = offsetof(FNiagaraEmitterHandle, Name);
	static_assert(FNiagaraEmitterHandle_Name_Offset == 0x20, "FNiagaraEmitterHandle::Name offset is not 20");
	auto constexpr FNiagaraEmitterHandle_Instance_Offset = offsetof(FNiagaraEmitterHandle, Instance);
	static_assert(FNiagaraEmitterHandle_Instance_Offset == 0x28, "FNiagaraEmitterHandle::Instance offset is not 28");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
