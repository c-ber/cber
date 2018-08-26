#pragma once
#include "FVector.hpp"
#include "FNiagaraTestStructInner.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FNiagaraTestStruct // Size: 0x48
{
public:
    FVector Vector1; /* Ofs: 0x0 Size: 0xC StructProperty Niagara.NiagaraTestStruct.Vector1 */
    FVector Vector2; /* Ofs: 0xC Size: 0xC StructProperty Niagara.NiagaraTestStruct.Vector2 */
    FNiagaraTestStructInner InnerStruct1; /* Ofs: 0x18 Size: 0x18 StructProperty Niagara.NiagaraTestStruct.InnerStruct1 */
    FNiagaraTestStructInner InnerStruct2; /* Ofs: 0x30 Size: 0x18 StructProperty Niagara.NiagaraTestStruct.InnerStruct2 */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFNiagaraTestStruct = sizeof(FNiagaraTestStruct); // 72
    static_assert(sizeof(FNiagaraTestStruct) == 0x48, "Size of FNiagaraTestStruct is not correct.");
	auto constexpr FNiagaraTestStruct_Vector1_Offset = offsetof(FNiagaraTestStruct, Vector1);
	static_assert(FNiagaraTestStruct_Vector1_Offset == 0x0, "FNiagaraTestStruct::Vector1 offset is not 0");
	auto constexpr FNiagaraTestStruct_Vector2_Offset = offsetof(FNiagaraTestStruct, Vector2);
	static_assert(FNiagaraTestStruct_Vector2_Offset == 0xc, "FNiagaraTestStruct::Vector2 offset is not c");
	auto constexpr FNiagaraTestStruct_InnerStruct1_Offset = offsetof(FNiagaraTestStruct, InnerStruct1);
	static_assert(FNiagaraTestStruct_InnerStruct1_Offset == 0x18, "FNiagaraTestStruct::InnerStruct1 offset is not 18");
	auto constexpr FNiagaraTestStruct_InnerStruct2_Offset = offsetof(FNiagaraTestStruct, InnerStruct2);
	static_assert(FNiagaraTestStruct_InnerStruct2_Offset == 0x30, "FNiagaraTestStruct::InnerStruct2 offset is not 30");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
