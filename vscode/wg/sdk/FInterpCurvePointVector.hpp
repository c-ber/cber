#pragma once
#include "FVector.hpp"
#include "EInterpCurveMode.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FInterpCurvePointVector // Size: 0x2C
{
public:
    float InVal; /* Ofs: 0x0 Size: 0x4 FloatProperty CoreUObject.InterpCurvePointVector.InVal */
    FVector OutVal; /* Ofs: 0x4 Size: 0xC StructProperty CoreUObject.InterpCurvePointVector.OutVal */
    FVector ArriveTangent; /* Ofs: 0x10 Size: 0xC StructProperty CoreUObject.InterpCurvePointVector.ArriveTangent */
    FVector LeaveTangent; /* Ofs: 0x1C Size: 0xC StructProperty CoreUObject.InterpCurvePointVector.LeaveTangent */
    TEnumAsByte<enum EInterpCurveMode> InterpMode; /* Ofs: 0x28 Size: 0x1 ByteProperty CoreUObject.InterpCurvePointVector.InterpMode */
    uint8_t UnknownData29[0x3];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFInterpCurvePointVector = sizeof(FInterpCurvePointVector); // 44
    static_assert(sizeof(FInterpCurvePointVector) == 0x2C, "Size of FInterpCurvePointVector is not correct.");
	auto constexpr FInterpCurvePointVector_InVal_Offset = offsetof(FInterpCurvePointVector, InVal);
	static_assert(FInterpCurvePointVector_InVal_Offset == 0x0, "FInterpCurvePointVector::InVal offset is not 0");
	auto constexpr FInterpCurvePointVector_OutVal_Offset = offsetof(FInterpCurvePointVector, OutVal);
	static_assert(FInterpCurvePointVector_OutVal_Offset == 0x4, "FInterpCurvePointVector::OutVal offset is not 4");
	auto constexpr FInterpCurvePointVector_ArriveTangent_Offset = offsetof(FInterpCurvePointVector, ArriveTangent);
	static_assert(FInterpCurvePointVector_ArriveTangent_Offset == 0x10, "FInterpCurvePointVector::ArriveTangent offset is not 10");
	auto constexpr FInterpCurvePointVector_LeaveTangent_Offset = offsetof(FInterpCurvePointVector, LeaveTangent);
	static_assert(FInterpCurvePointVector_LeaveTangent_Offset == 0x1c, "FInterpCurvePointVector::LeaveTangent offset is not 1c");
	auto constexpr FInterpCurvePointVector_InterpMode_Offset = offsetof(FInterpCurvePointVector, InterpMode);
	static_assert(FInterpCurvePointVector_InterpMode_Offset == 0x28, "FInterpCurvePointVector::InterpMode offset is not 28");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
