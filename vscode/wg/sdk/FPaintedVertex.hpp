#pragma once
#include "FVector.hpp"
#include "FPackedNormal.hpp"
#include "FColor.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FPaintedVertex // Size: 0x14
{
public:
    FVector Position; /* Ofs: 0x0 Size: 0xC StructProperty Engine.PaintedVertex.Position */
    FPackedNormal Normal; /* Ofs: 0xC Size: 0x4 StructProperty Engine.PaintedVertex.Normal */
    FColor Color; /* Ofs: 0x10 Size: 0x4 StructProperty Engine.PaintedVertex.Color */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFPaintedVertex = sizeof(FPaintedVertex); // 20
    static_assert(sizeof(FPaintedVertex) == 0x14, "Size of FPaintedVertex is not correct.");
	auto constexpr FPaintedVertex_Position_Offset = offsetof(FPaintedVertex, Position);
	static_assert(FPaintedVertex_Position_Offset == 0x0, "FPaintedVertex::Position offset is not 0");
	auto constexpr FPaintedVertex_Normal_Offset = offsetof(FPaintedVertex, Normal);
	static_assert(FPaintedVertex_Normal_Offset == 0xc, "FPaintedVertex::Normal offset is not c");
	auto constexpr FPaintedVertex_Color_Offset = offsetof(FPaintedVertex, Color);
	static_assert(FPaintedVertex_Color_Offset == 0x10, "FPaintedVertex::Color offset is not 10");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
