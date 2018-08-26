#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FStaticMeshComponentLODInfo // Size: 0xB0
{
public:
    uint8_t UnknownData0[0x20];
    TArray<struct FPaintedVertex> PaintedVertices; /* Ofs: 0x20 Size: 0x10 ArrayProperty Engine.StaticMeshComponentLODInfo.PaintedVertices */
    uint8_t UnknownData30[0x80];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFStaticMeshComponentLODInfo = sizeof(FStaticMeshComponentLODInfo); // 176
    static_assert(sizeof(FStaticMeshComponentLODInfo) == 0xB0, "Size of FStaticMeshComponentLODInfo is not correct.");
	auto constexpr FStaticMeshComponentLODInfo_PaintedVertices_Offset = offsetof(FStaticMeshComponentLODInfo, PaintedVertices);
	static_assert(FStaticMeshComponentLODInfo_PaintedVertices_Offset == 0x20, "FStaticMeshComponentLODInfo::PaintedVertices offset is not 20");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
