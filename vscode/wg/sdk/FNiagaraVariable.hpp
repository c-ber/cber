#pragma once
#include "FGuid.hpp"
#include "FNiagaraTypeDefinition.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FNiagaraVariable // Size: 0x30
{
public:
    FGuid ID; /* Ofs: 0x0 Size: 0x10 StructProperty Niagara.NiagaraVariable.ID */
    FName Name; /* Ofs: 0x10 Size: 0x8 NameProperty Niagara.NiagaraVariable.Name */
    FNiagaraTypeDefinition TypeDef; /* Ofs: 0x18 Size: 0x8 StructProperty Niagara.NiagaraVariable.TypeDef */
    TArray<uint8_t> VarData; /* Ofs: 0x20 Size: 0x10 ArrayProperty Niagara.NiagaraVariable.VarData */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFNiagaraVariable = sizeof(FNiagaraVariable); // 48
    static_assert(sizeof(FNiagaraVariable) == 0x30, "Size of FNiagaraVariable is not correct.");
	auto constexpr FNiagaraVariable_ID_Offset = offsetof(FNiagaraVariable, ID);
	static_assert(FNiagaraVariable_ID_Offset == 0x0, "FNiagaraVariable::ID offset is not 0");
	auto constexpr FNiagaraVariable_Name_Offset = offsetof(FNiagaraVariable, Name);
	static_assert(FNiagaraVariable_Name_Offset == 0x10, "FNiagaraVariable::Name offset is not 10");
	auto constexpr FNiagaraVariable_TypeDef_Offset = offsetof(FNiagaraVariable, TypeDef);
	static_assert(FNiagaraVariable_TypeDef_Offset == 0x18, "FNiagaraVariable::TypeDef offset is not 18");
	auto constexpr FNiagaraVariable_VarData_Offset = offsetof(FNiagaraVariable, VarData);
	static_assert(FNiagaraVariable_VarData_Offset == 0x20, "FNiagaraVariable::VarData offset is not 20");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
