#pragma once
#include "FRichCurve.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FRuntimeFloatCurve // Size: 0x78
{
public:
    FRichCurve EditorCurveData; /* Ofs: 0x0 Size: 0x70 StructProperty Engine.RuntimeFloatCurve.EditorCurveData */
    ExternalPtr<struct UCurveFloat> ExternalCurve; /* Ofs: 0x70 Size: 0x8 ObjectProperty Engine.RuntimeFloatCurve.ExternalCurve */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFRuntimeFloatCurve = sizeof(FRuntimeFloatCurve); // 120
    static_assert(sizeof(FRuntimeFloatCurve) == 0x78, "Size of FRuntimeFloatCurve is not correct.");
	auto constexpr FRuntimeFloatCurve_EditorCurveData_Offset = offsetof(FRuntimeFloatCurve, EditorCurveData);
	static_assert(FRuntimeFloatCurve_EditorCurveData_Offset == 0x0, "FRuntimeFloatCurve::EditorCurveData offset is not 0");
	auto constexpr FRuntimeFloatCurve_ExternalCurve_Offset = offsetof(FRuntimeFloatCurve, ExternalCurve);
	static_assert(FRuntimeFloatCurve_ExternalCurve_Offset == 0x70, "FRuntimeFloatCurve::ExternalCurve offset is not 70");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
