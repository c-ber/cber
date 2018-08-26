#pragma once
#include "UCurveBase.hpp"
#include "FRichCurve.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UCurveLinearColor // Size: 0x1F8
	: public UCurveBase // Size: 0x38
{
private:
	typedef UCurveLinearColor t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(706); // id32("Class Engine.CurveLinearColor")
		return ptr;
	}
	FRichCurve FloatCurves[4]; /* Ofs: 0x4 Size: 0x70 - StructProperty Engine.CurveLinearColor.FloatCurves */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUCurveLinearColor = sizeof(UCurveLinearColor); // 504
    static_assert(sizeof(UCurveLinearColor) == 0x1F8, "Size of UCurveLinearColor is not correct.");
	auto constexpr UCurveLinearColor_FloatCurves_Offset = offsetof(UCurveLinearColor, FloatCurves);
	static_assert(UCurveLinearColor_FloatCurves_Offset == 0x38, "UCurveLinearColor::FloatCurves offset is not 38");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
