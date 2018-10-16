#pragma once
#include "FVector.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FProcMeshTangent // Size: 0x10
{
public:
    FVector TangentX; /* Ofs: 0x0 Size: 0xC StructProperty ProceduralMeshComponent.ProcMeshTangent.TangentX */
    bool bFlipTangentY; /* Ofs: 0xC Size: 0x1 BitMask: 01 BoolProperty ProceduralMeshComponent.ProcMeshTangent.bFlipTangentY */
    uint8_t UnknownDataD[0x3];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFProcMeshTangent = sizeof(FProcMeshTangent); // 16
    static_assert(sizeof(FProcMeshTangent) == 0x10, "Size of FProcMeshTangent is not correct.");
	auto constexpr FProcMeshTangent_TangentX_Offset = offsetof(FProcMeshTangent, TangentX);
	static_assert(FProcMeshTangent_TangentX_Offset == 0x0, "FProcMeshTangent::TangentX offset is not 0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
