#pragma once
#include "FBox.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FProcMeshSection // Size: 0x40
{
public:
    TArray<struct FProcMeshVertex> ProcVertexBuffer; /* Ofs: 0x0 Size: 0x10 ArrayProperty ProceduralMeshComponent.ProcMeshSection.ProcVertexBuffer */
    TArray<int32_t> ProcIndexBuffer; /* Ofs: 0x10 Size: 0x10 ArrayProperty ProceduralMeshComponent.ProcMeshSection.ProcIndexBuffer */
    FBox SectionLocalBox; /* Ofs: 0x20 Size: 0x1C StructProperty ProceduralMeshComponent.ProcMeshSection.SectionLocalBox */
    bool bEnableCollision; /* Ofs: 0x3C Size: 0x1 BitMask: 01 BoolProperty ProceduralMeshComponent.ProcMeshSection.bEnableCollision */
    bool bSectionVisible; /* Ofs: 0x3D Size: 0x1 BitMask: 01 BoolProperty ProceduralMeshComponent.ProcMeshSection.bSectionVisible */
    uint8_t UnknownData3E[0x2];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFProcMeshSection = sizeof(FProcMeshSection); // 64
    static_assert(sizeof(FProcMeshSection) == 0x40, "Size of FProcMeshSection is not correct.");
	auto constexpr FProcMeshSection_ProcVertexBuffer_Offset = offsetof(FProcMeshSection, ProcVertexBuffer);
	static_assert(FProcMeshSection_ProcVertexBuffer_Offset == 0x0, "FProcMeshSection::ProcVertexBuffer offset is not 0");
	auto constexpr FProcMeshSection_ProcIndexBuffer_Offset = offsetof(FProcMeshSection, ProcIndexBuffer);
	static_assert(FProcMeshSection_ProcIndexBuffer_Offset == 0x10, "FProcMeshSection::ProcIndexBuffer offset is not 10");
	auto constexpr FProcMeshSection_SectionLocalBox_Offset = offsetof(FProcMeshSection, SectionLocalBox);
	static_assert(FProcMeshSection_SectionLocalBox_Offset == 0x20, "FProcMeshSection::SectionLocalBox offset is not 20");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
