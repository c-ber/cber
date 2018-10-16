#pragma once
#include "FQuat.hpp"
#include "EInterpCurveMode.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FInterpCurvePointQuat // Size: 0x50
{
public:
    float InVal; /* Ofs: 0x0 Size: 0x4 FloatProperty CoreUObject.InterpCurvePointQuat.InVal */
    uint8_t UnknownData4[0xC];
    FQuat OutVal; /* Ofs: 0x10 Size: 0x10 StructProperty CoreUObject.InterpCurvePointQuat.OutVal */
    FQuat ArriveTangent; /* Ofs: 0x20 Size: 0x10 StructProperty CoreUObject.InterpCurvePointQuat.ArriveTangent */
    FQuat LeaveTangent; /* Ofs: 0x30 Size: 0x10 StructProperty CoreUObject.InterpCurvePointQuat.LeaveTangent */
    TEnumAsByte<enum EInterpCurveMode> InterpMode; /* Ofs: 0x40 Size: 0x1 ByteProperty CoreUObject.InterpCurvePointQuat.InterpMode */
    uint8_t UnknownData41[0xF];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFInterpCurvePointQuat = sizeof(FInterpCurvePointQuat); // 80
    static_assert(sizeof(FInterpCurvePointQuat) == 0x50, "Size of FInterpCurvePointQuat is not correct.");
	auto constexpr FInterpCurvePointQuat_InVal_Offset = offsetof(FInterpCurvePointQuat, InVal);
	static_assert(FInterpCurvePointQuat_InVal_Offset == 0x0, "FInterpCurvePointQuat::InVal offset is not 0");
	auto constexpr FInterpCurvePointQuat_OutVal_Offset = offsetof(FInterpCurvePointQuat, OutVal);
	static_assert(FInterpCurvePointQuat_OutVal_Offset == 0x10, "FInterpCurvePointQuat::OutVal offset is not 10");
	auto constexpr FInterpCurvePointQuat_ArriveTangent_Offset = offsetof(FInterpCurvePointQuat, ArriveTangent);
	static_assert(FInterpCurvePointQuat_ArriveTangent_Offset == 0x20, "FInterpCurvePointQuat::ArriveTangent offset is not 20");
	auto constexpr FInterpCurvePointQuat_LeaveTangent_Offset = offsetof(FInterpCurvePointQuat, LeaveTangent);
	static_assert(FInterpCurvePointQuat_LeaveTangent_Offset == 0x30, "FInterpCurvePointQuat::LeaveTangent offset is not 30");
	auto constexpr FInterpCurvePointQuat_InterpMode_Offset = offsetof(FInterpCurvePointQuat, InterpMode);
	static_assert(FInterpCurvePointQuat_InterpMode_Offset == 0x40, "FInterpCurvePointQuat::InterpMode offset is not 40");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
