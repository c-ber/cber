#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FNiagaraTypeDefinition // Size: 0x8
{
public:
    ExternalPtr<struct UStruct> Struct; /* Ofs: 0x0 Size: 0x8 ObjectProperty Niagara.NiagaraTypeDefinition.Struct */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFNiagaraTypeDefinition = sizeof(FNiagaraTypeDefinition); // 8
    static_assert(sizeof(FNiagaraTypeDefinition) == 0x8, "Size of FNiagaraTypeDefinition is not correct.");
	auto constexpr FNiagaraTypeDefinition_Struct_Offset = offsetof(FNiagaraTypeDefinition, Struct);
	static_assert(FNiagaraTypeDefinition_Struct_Offset == 0x0, "FNiagaraTypeDefinition::Struct offset is not 0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
