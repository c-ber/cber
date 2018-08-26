#pragma once
#include "FVector2D.hpp"
#include "EInterpCurveMode.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FInterpCurvePointVector2D // Size: 0x20
{
public:
    float InVal; /* Ofs: 0x0 Size: 0x4 FloatProperty CoreUObject.InterpCurvePointVector2D.InVal */
    FVector2D OutVal; /* Ofs: 0x4 Size: 0x8 StructProperty CoreUObject.InterpCurvePointVector2D.OutVal */
    FVector2D ArriveTangent; /* Ofs: 0xC Size: 0x8 StructProperty CoreUObject.InterpCurvePointVector2D.ArriveTangent */
    FVector2D LeaveTangent; /* Ofs: 0x14 Size: 0x8 StructProperty CoreUObject.InterpCurvePointVector2D.LeaveTangent */
    TEnumAsByte<enum EInterpCurveMode> InterpMode; /* Ofs: 0x1C Size: 0x1 ByteProperty CoreUObject.InterpCurvePointVector2D.InterpMode */
    uint8_t UnknownData1D[0x3];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFInterpCurvePointVector2D = sizeof(FInterpCurvePointVector2D); // 32
    static_assert(sizeof(FInterpCurvePointVector2D) == 0x20, "Size of FInterpCurvePointVector2D is not correct.");
	auto constexpr FInterpCurvePointVector2D_InVal_Offset = offsetof(FInterpCurvePointVector2D, InVal);
	static_assert(FInterpCurvePointVector2D_InVal_Offset == 0x0, "FInterpCurvePointVector2D::InVal offset is not 0");
	auto constexpr FInterpCurvePointVector2D_OutVal_Offset = offsetof(FInterpCurvePointVector2D, OutVal);
	static_assert(FInterpCurvePointVector2D_OutVal_Offset == 0x4, "FInterpCurvePointVector2D::OutVal offset is not 4");
	auto constexpr FInterpCurvePointVector2D_ArriveTangent_Offset = offsetof(FInterpCurvePointVector2D, ArriveTangent);
	static_assert(FInterpCurvePointVector2D_ArriveTangent_Offset == 0xc, "FInterpCurvePointVector2D::ArriveTangent offset is not c");
	auto constexpr FInterpCurvePointVector2D_LeaveTangent_Offset = offsetof(FInterpCurvePointVector2D, LeaveTangent);
	static_assert(FInterpCurvePointVector2D_LeaveTangent_Offset == 0x14, "FInterpCurvePointVector2D::LeaveTangent offset is not 14");
	auto constexpr FInterpCurvePointVector2D_InterpMode_Offset = offsetof(FInterpCurvePointVector2D, InterpMode);
	static_assert(FInterpCurvePointVector2D_InterpMode_Offset == 0x1c, "FInterpCurvePointVector2D::InterpMode offset is not 1c");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
