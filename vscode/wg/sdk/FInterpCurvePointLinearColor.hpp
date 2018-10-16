#pragma once
#include "FLinearColor.hpp"
#include "EInterpCurveMode.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FInterpCurvePointLinearColor // Size: 0x38
{
public:
    float InVal; /* Ofs: 0x0 Size: 0x4 FloatProperty CoreUObject.InterpCurvePointLinearColor.InVal */
    FLinearColor OutVal; /* Ofs: 0x4 Size: 0x10 StructProperty CoreUObject.InterpCurvePointLinearColor.OutVal */
    FLinearColor ArriveTangent; /* Ofs: 0x14 Size: 0x10 StructProperty CoreUObject.InterpCurvePointLinearColor.ArriveTangent */
    FLinearColor LeaveTangent; /* Ofs: 0x24 Size: 0x10 StructProperty CoreUObject.InterpCurvePointLinearColor.LeaveTangent */
    TEnumAsByte<enum EInterpCurveMode> InterpMode; /* Ofs: 0x34 Size: 0x1 ByteProperty CoreUObject.InterpCurvePointLinearColor.InterpMode */
    uint8_t UnknownData35[0x3];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFInterpCurvePointLinearColor = sizeof(FInterpCurvePointLinearColor); // 56
    static_assert(sizeof(FInterpCurvePointLinearColor) == 0x38, "Size of FInterpCurvePointLinearColor is not correct.");
	auto constexpr FInterpCurvePointLinearColor_InVal_Offset = offsetof(FInterpCurvePointLinearColor, InVal);
	static_assert(FInterpCurvePointLinearColor_InVal_Offset == 0x0, "FInterpCurvePointLinearColor::InVal offset is not 0");
	auto constexpr FInterpCurvePointLinearColor_OutVal_Offset = offsetof(FInterpCurvePointLinearColor, OutVal);
	static_assert(FInterpCurvePointLinearColor_OutVal_Offset == 0x4, "FInterpCurvePointLinearColor::OutVal offset is not 4");
	auto constexpr FInterpCurvePointLinearColor_ArriveTangent_Offset = offsetof(FInterpCurvePointLinearColor, ArriveTangent);
	static_assert(FInterpCurvePointLinearColor_ArriveTangent_Offset == 0x14, "FInterpCurvePointLinearColor::ArriveTangent offset is not 14");
	auto constexpr FInterpCurvePointLinearColor_LeaveTangent_Offset = offsetof(FInterpCurvePointLinearColor, LeaveTangent);
	static_assert(FInterpCurvePointLinearColor_LeaveTangent_Offset == 0x24, "FInterpCurvePointLinearColor::LeaveTangent offset is not 24");
	auto constexpr FInterpCurvePointLinearColor_InterpMode_Offset = offsetof(FInterpCurvePointLinearColor, InterpMode);
	static_assert(FInterpCurvePointLinearColor_InterpMode_Offset == 0x34, "FInterpCurvePointLinearColor::InterpMode offset is not 34");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
