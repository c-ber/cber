#pragma once
#include "UCurveBase.hpp"
#include "FRichCurve.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UCurveVector // Size: 0x188
	: public UCurveBase // Size: 0x38
{
private:
	typedef UCurveVector t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(707); // id32("Class Engine.CurveVector")
		return ptr;
	}
	FRichCurve FloatCurves[3]; /* Ofs: 0x3 Size: 0x70 - StructProperty Engine.CurveVector.FloatCurves */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUCurveVector = sizeof(UCurveVector); // 392
    static_assert(sizeof(UCurveVector) == 0x188, "Size of UCurveVector is not correct.");
	auto constexpr UCurveVector_FloatCurves_Offset = offsetof(UCurveVector, FloatCurves);
	static_assert(UCurveVector_FloatCurves_Offset == 0x38, "UCurveVector::FloatCurves offset is not 38");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
