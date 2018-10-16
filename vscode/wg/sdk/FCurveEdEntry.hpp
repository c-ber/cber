#pragma once
#include "FColor.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FCurveEdEntry // Size: 0x38
{
public:
    ExternalPtr<struct UObject> CurveObject; /* Ofs: 0x0 Size: 0x8 ObjectProperty Engine.CurveEdEntry.CurveObject */
    FColor CurveColor; /* Ofs: 0x8 Size: 0x4 StructProperty Engine.CurveEdEntry.CurveColor */
    uint8_t UnknownDataC[0x4];
    FString CurveName; /* Ofs: 0x10 Size: 0x10 StrProperty Engine.CurveEdEntry.CurveName */
    int32_t bHideCurve; /* Ofs: 0x20 Size: 0x4 IntProperty Engine.CurveEdEntry.bHideCurve */
    int32_t bColorCurve; /* Ofs: 0x24 Size: 0x4 IntProperty Engine.CurveEdEntry.bColorCurve */
    int32_t bFloatingPointColorCurve; /* Ofs: 0x28 Size: 0x4 IntProperty Engine.CurveEdEntry.bFloatingPointColorCurve */
    int32_t bClamp; /* Ofs: 0x2C Size: 0x4 IntProperty Engine.CurveEdEntry.bClamp */
    float ClampLow; /* Ofs: 0x30 Size: 0x4 FloatProperty Engine.CurveEdEntry.ClampLow */
    float ClampHigh; /* Ofs: 0x34 Size: 0x4 FloatProperty Engine.CurveEdEntry.ClampHigh */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFCurveEdEntry = sizeof(FCurveEdEntry); // 56
    static_assert(sizeof(FCurveEdEntry) == 0x38, "Size of FCurveEdEntry is not correct.");
	auto constexpr FCurveEdEntry_CurveObject_Offset = offsetof(FCurveEdEntry, CurveObject);
	static_assert(FCurveEdEntry_CurveObject_Offset == 0x0, "FCurveEdEntry::CurveObject offset is not 0");
	auto constexpr FCurveEdEntry_CurveColor_Offset = offsetof(FCurveEdEntry, CurveColor);
	static_assert(FCurveEdEntry_CurveColor_Offset == 0x8, "FCurveEdEntry::CurveColor offset is not 8");
	auto constexpr FCurveEdEntry_CurveName_Offset = offsetof(FCurveEdEntry, CurveName);
	static_assert(FCurveEdEntry_CurveName_Offset == 0x10, "FCurveEdEntry::CurveName offset is not 10");
	auto constexpr FCurveEdEntry_bHideCurve_Offset = offsetof(FCurveEdEntry, bHideCurve);
	static_assert(FCurveEdEntry_bHideCurve_Offset == 0x20, "FCurveEdEntry::bHideCurve offset is not 20");
	auto constexpr FCurveEdEntry_bColorCurve_Offset = offsetof(FCurveEdEntry, bColorCurve);
	static_assert(FCurveEdEntry_bColorCurve_Offset == 0x24, "FCurveEdEntry::bColorCurve offset is not 24");
	auto constexpr FCurveEdEntry_bFloatingPointColorCurve_Offset = offsetof(FCurveEdEntry, bFloatingPointColorCurve);
	static_assert(FCurveEdEntry_bFloatingPointColorCurve_Offset == 0x28, "FCurveEdEntry::bFloatingPointColorCurve offset is not 28");
	auto constexpr FCurveEdEntry_bClamp_Offset = offsetof(FCurveEdEntry, bClamp);
	static_assert(FCurveEdEntry_bClamp_Offset == 0x2c, "FCurveEdEntry::bClamp offset is not 2c");
	auto constexpr FCurveEdEntry_ClampLow_Offset = offsetof(FCurveEdEntry, ClampLow);
	static_assert(FCurveEdEntry_ClampLow_Offset == 0x30, "FCurveEdEntry::ClampLow offset is not 30");
	auto constexpr FCurveEdEntry_ClampHigh_Offset = offsetof(FCurveEdEntry, ClampHigh);
	static_assert(FCurveEdEntry_ClampHigh_Offset == 0x34, "FCurveEdEntry::ClampHigh offset is not 34");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
