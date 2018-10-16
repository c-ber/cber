#pragma once
#include "UDistributionFloat.hpp"
#include "FInterpCurveVector2D.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UDistributionFloatUniformCurve // Size: 0x58
	: public UDistributionFloat // Size: 0x40
{
private:
	typedef UDistributionFloatUniformCurve t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(745); // id32("Class Engine.DistributionFloatUniformCurve")
		return ptr;
	}
	FInterpCurveVector2D ConstantCurve; /* Ofs: 0x40 Size: 0x18 - StructProperty Engine.DistributionFloatUniformCurve.ConstantCurve */


	inline bool SetConstantCurve(t_structHelper inst, FInterpCurveVector2D value) { inst.WriteOffset(0x40, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUDistributionFloatUniformCurve = sizeof(UDistributionFloatUniformCurve); // 88
    static_assert(sizeof(UDistributionFloatUniformCurve) == 0x58, "Size of UDistributionFloatUniformCurve is not correct.");
	auto constexpr UDistributionFloatUniformCurve_ConstantCurve_Offset = offsetof(UDistributionFloatUniformCurve, ConstantCurve);
	static_assert(UDistributionFloatUniformCurve_ConstantCurve_Offset == 0x40, "UDistributionFloatUniformCurve::ConstantCurve offset is not 40");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
