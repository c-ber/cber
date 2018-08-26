#pragma once
#include "FVector4.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FNiagaraMatrix // Size: 0x40
{
public:
    FVector4 Row0; /* Ofs: 0x0 Size: 0x10 StructProperty Niagara.NiagaraMatrix.Row0 */
    FVector4 Row1; /* Ofs: 0x10 Size: 0x10 StructProperty Niagara.NiagaraMatrix.Row1 */
    FVector4 Row2; /* Ofs: 0x20 Size: 0x10 StructProperty Niagara.NiagaraMatrix.Row2 */
    FVector4 Row3; /* Ofs: 0x30 Size: 0x10 StructProperty Niagara.NiagaraMatrix.Row3 */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFNiagaraMatrix = sizeof(FNiagaraMatrix); // 64
    static_assert(sizeof(FNiagaraMatrix) == 0x40, "Size of FNiagaraMatrix is not correct.");
	auto constexpr FNiagaraMatrix_Row0_Offset = offsetof(FNiagaraMatrix, Row0);
	static_assert(FNiagaraMatrix_Row0_Offset == 0x0, "FNiagaraMatrix::Row0 offset is not 0");
	auto constexpr FNiagaraMatrix_Row1_Offset = offsetof(FNiagaraMatrix, Row1);
	static_assert(FNiagaraMatrix_Row1_Offset == 0x10, "FNiagaraMatrix::Row1 offset is not 10");
	auto constexpr FNiagaraMatrix_Row2_Offset = offsetof(FNiagaraMatrix, Row2);
	static_assert(FNiagaraMatrix_Row2_Offset == 0x20, "FNiagaraMatrix::Row2 offset is not 20");
	auto constexpr FNiagaraMatrix_Row3_Offset = offsetof(FNiagaraMatrix, Row3);
	static_assert(FNiagaraMatrix_Row3_Offset == 0x30, "FNiagaraMatrix::Row3 offset is not 30");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
