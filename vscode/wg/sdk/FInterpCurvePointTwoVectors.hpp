#pragma once
#include "FTwoVectors.hpp"
#include "EInterpCurveMode.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FInterpCurvePointTwoVectors // Size: 0x50
{
public:
    float InVal; /* Ofs: 0x0 Size: 0x4 FloatProperty CoreUObject.InterpCurvePointTwoVectors.InVal */
    FTwoVectors OutVal; /* Ofs: 0x4 Size: 0x18 StructProperty CoreUObject.InterpCurvePointTwoVectors.OutVal */
    FTwoVectors ArriveTangent; /* Ofs: 0x1C Size: 0x18 StructProperty CoreUObject.InterpCurvePointTwoVectors.ArriveTangent */
    FTwoVectors LeaveTangent; /* Ofs: 0x34 Size: 0x18 StructProperty CoreUObject.InterpCurvePointTwoVectors.LeaveTangent */
    TEnumAsByte<enum EInterpCurveMode> InterpMode; /* Ofs: 0x4C Size: 0x1 ByteProperty CoreUObject.InterpCurvePointTwoVectors.InterpMode */
    uint8_t UnknownData4D[0x3];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFInterpCurvePointTwoVectors = sizeof(FInterpCurvePointTwoVectors); // 80
    static_assert(sizeof(FInterpCurvePointTwoVectors) == 0x50, "Size of FInterpCurvePointTwoVectors is not correct.");
	auto constexpr FInterpCurvePointTwoVectors_InVal_Offset = offsetof(FInterpCurvePointTwoVectors, InVal);
	static_assert(FInterpCurvePointTwoVectors_InVal_Offset == 0x0, "FInterpCurvePointTwoVectors::InVal offset is not 0");
	auto constexpr FInterpCurvePointTwoVectors_OutVal_Offset = offsetof(FInterpCurvePointTwoVectors, OutVal);
	static_assert(FInterpCurvePointTwoVectors_OutVal_Offset == 0x4, "FInterpCurvePointTwoVectors::OutVal offset is not 4");
	auto constexpr FInterpCurvePointTwoVectors_ArriveTangent_Offset = offsetof(FInterpCurvePointTwoVectors, ArriveTangent);
	static_assert(FInterpCurvePointTwoVectors_ArriveTangent_Offset == 0x1c, "FInterpCurvePointTwoVectors::ArriveTangent offset is not 1c");
	auto constexpr FInterpCurvePointTwoVectors_LeaveTangent_Offset = offsetof(FInterpCurvePointTwoVectors, LeaveTangent);
	static_assert(FInterpCurvePointTwoVectors_LeaveTangent_Offset == 0x34, "FInterpCurvePointTwoVectors::LeaveTangent offset is not 34");
	auto constexpr FInterpCurvePointTwoVectors_InterpMode_Offset = offsetof(FInterpCurvePointTwoVectors, InterpMode);
	static_assert(FInterpCurvePointTwoVectors_InterpMode_Offset == 0x4c, "FInterpCurvePointTwoVectors::InterpMode offset is not 4c");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
