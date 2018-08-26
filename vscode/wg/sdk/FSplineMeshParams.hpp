#pragma once
#include "FVector.hpp"
#include "FVector2D.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FSplineMeshParams // Size: 0x58
{
public:
    FVector StartPos; /* Ofs: 0x0 Size: 0xC StructProperty Engine.SplineMeshParams.StartPos */
    FVector StartTangent; /* Ofs: 0xC Size: 0xC StructProperty Engine.SplineMeshParams.StartTangent */
    FVector2D StartScale; /* Ofs: 0x18 Size: 0x8 StructProperty Engine.SplineMeshParams.StartScale */
    float StartRoll; /* Ofs: 0x20 Size: 0x4 FloatProperty Engine.SplineMeshParams.StartRoll */
    FVector2D StartOffset; /* Ofs: 0x24 Size: 0x8 StructProperty Engine.SplineMeshParams.StartOffset */
    FVector EndPos; /* Ofs: 0x2C Size: 0xC StructProperty Engine.SplineMeshParams.EndPos */
    FVector EndTangent; /* Ofs: 0x38 Size: 0xC StructProperty Engine.SplineMeshParams.EndTangent */
    FVector2D EndScale; /* Ofs: 0x44 Size: 0x8 StructProperty Engine.SplineMeshParams.EndScale */
    float EndRoll; /* Ofs: 0x4C Size: 0x4 FloatProperty Engine.SplineMeshParams.EndRoll */
    FVector2D EndOffset; /* Ofs: 0x50 Size: 0x8 StructProperty Engine.SplineMeshParams.EndOffset */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFSplineMeshParams = sizeof(FSplineMeshParams); // 88
    static_assert(sizeof(FSplineMeshParams) == 0x58, "Size of FSplineMeshParams is not correct.");
	auto constexpr FSplineMeshParams_StartPos_Offset = offsetof(FSplineMeshParams, StartPos);
	static_assert(FSplineMeshParams_StartPos_Offset == 0x0, "FSplineMeshParams::StartPos offset is not 0");
	auto constexpr FSplineMeshParams_StartTangent_Offset = offsetof(FSplineMeshParams, StartTangent);
	static_assert(FSplineMeshParams_StartTangent_Offset == 0xc, "FSplineMeshParams::StartTangent offset is not c");
	auto constexpr FSplineMeshParams_StartScale_Offset = offsetof(FSplineMeshParams, StartScale);
	static_assert(FSplineMeshParams_StartScale_Offset == 0x18, "FSplineMeshParams::StartScale offset is not 18");
	auto constexpr FSplineMeshParams_StartRoll_Offset = offsetof(FSplineMeshParams, StartRoll);
	static_assert(FSplineMeshParams_StartRoll_Offset == 0x20, "FSplineMeshParams::StartRoll offset is not 20");
	auto constexpr FSplineMeshParams_StartOffset_Offset = offsetof(FSplineMeshParams, StartOffset);
	static_assert(FSplineMeshParams_StartOffset_Offset == 0x24, "FSplineMeshParams::StartOffset offset is not 24");
	auto constexpr FSplineMeshParams_EndPos_Offset = offsetof(FSplineMeshParams, EndPos);
	static_assert(FSplineMeshParams_EndPos_Offset == 0x2c, "FSplineMeshParams::EndPos offset is not 2c");
	auto constexpr FSplineMeshParams_EndTangent_Offset = offsetof(FSplineMeshParams, EndTangent);
	static_assert(FSplineMeshParams_EndTangent_Offset == 0x38, "FSplineMeshParams::EndTangent offset is not 38");
	auto constexpr FSplineMeshParams_EndScale_Offset = offsetof(FSplineMeshParams, EndScale);
	static_assert(FSplineMeshParams_EndScale_Offset == 0x44, "FSplineMeshParams::EndScale offset is not 44");
	auto constexpr FSplineMeshParams_EndRoll_Offset = offsetof(FSplineMeshParams, EndRoll);
	static_assert(FSplineMeshParams_EndRoll_Offset == 0x4c, "FSplineMeshParams::EndRoll offset is not 4c");
	auto constexpr FSplineMeshParams_EndOffset_Offset = offsetof(FSplineMeshParams, EndOffset);
	static_assert(FSplineMeshParams_EndOffset_Offset == 0x50, "FSplineMeshParams::EndOffset offset is not 50");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
