#pragma once
#include "EInterpCurveMode.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FInterpCurvePointFloat // Size: 0x14
{
public:
    float InVal; /* Ofs: 0x0 Size: 0x4 FloatProperty CoreUObject.InterpCurvePointFloat.InVal */
    float OutVal; /* Ofs: 0x4 Size: 0x4 FloatProperty CoreUObject.InterpCurvePointFloat.OutVal */
    float ArriveTangent; /* Ofs: 0x8 Size: 0x4 FloatProperty CoreUObject.InterpCurvePointFloat.ArriveTangent */
    float LeaveTangent; /* Ofs: 0xC Size: 0x4 FloatProperty CoreUObject.InterpCurvePointFloat.LeaveTangent */
    TEnumAsByte<enum EInterpCurveMode> InterpMode; /* Ofs: 0x10 Size: 0x1 ByteProperty CoreUObject.InterpCurvePointFloat.InterpMode */
    uint8_t UnknownData11[0x3];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFInterpCurvePointFloat = sizeof(FInterpCurvePointFloat); // 20
    static_assert(sizeof(FInterpCurvePointFloat) == 0x14, "Size of FInterpCurvePointFloat is not correct.");
	auto constexpr FInterpCurvePointFloat_InVal_Offset = offsetof(FInterpCurvePointFloat, InVal);
	static_assert(FInterpCurvePointFloat_InVal_Offset == 0x0, "FInterpCurvePointFloat::InVal offset is not 0");
	auto constexpr FInterpCurvePointFloat_OutVal_Offset = offsetof(FInterpCurvePointFloat, OutVal);
	static_assert(FInterpCurvePointFloat_OutVal_Offset == 0x4, "FInterpCurvePointFloat::OutVal offset is not 4");
	auto constexpr FInterpCurvePointFloat_ArriveTangent_Offset = offsetof(FInterpCurvePointFloat, ArriveTangent);
	static_assert(FInterpCurvePointFloat_ArriveTangent_Offset == 0x8, "FInterpCurvePointFloat::ArriveTangent offset is not 8");
	auto constexpr FInterpCurvePointFloat_LeaveTangent_Offset = offsetof(FInterpCurvePointFloat, LeaveTangent);
	static_assert(FInterpCurvePointFloat_LeaveTangent_Offset == 0xc, "FInterpCurvePointFloat::LeaveTangent offset is not c");
	auto constexpr FInterpCurvePointFloat_InterpMode_Offset = offsetof(FInterpCurvePointFloat, InterpMode);
	static_assert(FInterpCurvePointFloat_InterpMode_Offset == 0x10, "FInterpCurvePointFloat::InterpMode offset is not 10");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
