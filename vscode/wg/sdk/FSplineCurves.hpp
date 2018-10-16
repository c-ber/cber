#pragma once
#include "FInterpCurveVector.hpp"
#include "FInterpCurveQuat.hpp"
#include "FInterpCurveFloat.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FSplineCurves // Size: 0x60
{
public:
    FInterpCurveVector Position; /* Ofs: 0x0 Size: 0x18 StructProperty Engine.SplineCurves.Position */
    FInterpCurveQuat Rotation; /* Ofs: 0x18 Size: 0x18 StructProperty Engine.SplineCurves.Rotation */
    FInterpCurveVector Scale; /* Ofs: 0x30 Size: 0x18 StructProperty Engine.SplineCurves.Scale */
    FInterpCurveFloat ReparamTable; /* Ofs: 0x48 Size: 0x18 StructProperty Engine.SplineCurves.ReparamTable */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFSplineCurves = sizeof(FSplineCurves); // 96
    static_assert(sizeof(FSplineCurves) == 0x60, "Size of FSplineCurves is not correct.");
	auto constexpr FSplineCurves_Position_Offset = offsetof(FSplineCurves, Position);
	static_assert(FSplineCurves_Position_Offset == 0x0, "FSplineCurves::Position offset is not 0");
	auto constexpr FSplineCurves_Rotation_Offset = offsetof(FSplineCurves, Rotation);
	static_assert(FSplineCurves_Rotation_Offset == 0x18, "FSplineCurves::Rotation offset is not 18");
	auto constexpr FSplineCurves_Scale_Offset = offsetof(FSplineCurves, Scale);
	static_assert(FSplineCurves_Scale_Offset == 0x30, "FSplineCurves::Scale offset is not 30");
	auto constexpr FSplineCurves_ReparamTable_Offset = offsetof(FSplineCurves, ReparamTable);
	static_assert(FSplineCurves_ReparamTable_Offset == 0x48, "FSplineCurves::ReparamTable offset is not 48");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
