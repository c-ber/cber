#pragma once
#include "FVector2D.hpp"
#include "FLinearColor.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FCanvasUVTri // Size: 0x60
{
public:
    FVector2D V0_Pos; /* Ofs: 0x0 Size: 0x8 StructProperty Engine.CanvasUVTri.V0_Pos */
    FVector2D V0_UV; /* Ofs: 0x8 Size: 0x8 StructProperty Engine.CanvasUVTri.V0_UV */
    FLinearColor V0_Color; /* Ofs: 0x10 Size: 0x10 StructProperty Engine.CanvasUVTri.V0_Color */
    FVector2D V1_Pos; /* Ofs: 0x20 Size: 0x8 StructProperty Engine.CanvasUVTri.V1_Pos */
    FVector2D V1_UV; /* Ofs: 0x28 Size: 0x8 StructProperty Engine.CanvasUVTri.V1_UV */
    FLinearColor V1_Color; /* Ofs: 0x30 Size: 0x10 StructProperty Engine.CanvasUVTri.V1_Color */
    FVector2D V2_Pos; /* Ofs: 0x40 Size: 0x8 StructProperty Engine.CanvasUVTri.V2_Pos */
    FVector2D V2_UV; /* Ofs: 0x48 Size: 0x8 StructProperty Engine.CanvasUVTri.V2_UV */
    FLinearColor V2_Color; /* Ofs: 0x50 Size: 0x10 StructProperty Engine.CanvasUVTri.V2_Color */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFCanvasUVTri = sizeof(FCanvasUVTri); // 96
    static_assert(sizeof(FCanvasUVTri) == 0x60, "Size of FCanvasUVTri is not correct.");
	auto constexpr FCanvasUVTri_V0_Pos_Offset = offsetof(FCanvasUVTri, V0_Pos);
	static_assert(FCanvasUVTri_V0_Pos_Offset == 0x0, "FCanvasUVTri::V0_Pos offset is not 0");
	auto constexpr FCanvasUVTri_V0_UV_Offset = offsetof(FCanvasUVTri, V0_UV);
	static_assert(FCanvasUVTri_V0_UV_Offset == 0x8, "FCanvasUVTri::V0_UV offset is not 8");
	auto constexpr FCanvasUVTri_V0_Color_Offset = offsetof(FCanvasUVTri, V0_Color);
	static_assert(FCanvasUVTri_V0_Color_Offset == 0x10, "FCanvasUVTri::V0_Color offset is not 10");
	auto constexpr FCanvasUVTri_V1_Pos_Offset = offsetof(FCanvasUVTri, V1_Pos);
	static_assert(FCanvasUVTri_V1_Pos_Offset == 0x20, "FCanvasUVTri::V1_Pos offset is not 20");
	auto constexpr FCanvasUVTri_V1_UV_Offset = offsetof(FCanvasUVTri, V1_UV);
	static_assert(FCanvasUVTri_V1_UV_Offset == 0x28, "FCanvasUVTri::V1_UV offset is not 28");
	auto constexpr FCanvasUVTri_V1_Color_Offset = offsetof(FCanvasUVTri, V1_Color);
	static_assert(FCanvasUVTri_V1_Color_Offset == 0x30, "FCanvasUVTri::V1_Color offset is not 30");
	auto constexpr FCanvasUVTri_V2_Pos_Offset = offsetof(FCanvasUVTri, V2_Pos);
	static_assert(FCanvasUVTri_V2_Pos_Offset == 0x40, "FCanvasUVTri::V2_Pos offset is not 40");
	auto constexpr FCanvasUVTri_V2_UV_Offset = offsetof(FCanvasUVTri, V2_UV);
	static_assert(FCanvasUVTri_V2_UV_Offset == 0x48, "FCanvasUVTri::V2_UV offset is not 48");
	auto constexpr FCanvasUVTri_V2_Color_Offset = offsetof(FCanvasUVTri, V2_Color);
	static_assert(FCanvasUVTri_V2_Color_Offset == 0x50, "FCanvasUVTri::V2_Color offset is not 50");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
