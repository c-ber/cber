#pragma once
#include "UDistributionFloat.hpp"
#include "FInterpCurveFloat.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UDistributionFloatConstantCurve // Size: 0x58
	: public UDistributionFloat // Size: 0x40
{
private:
	typedef UDistributionFloatConstantCurve t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(743); // id32("Class Engine.DistributionFloatConstantCurve")
		return ptr;
	}
	FInterpCurveFloat ConstantCurve; /* Ofs: 0x40 Size: 0x18 - StructProperty Engine.DistributionFloatConstantCurve.ConstantCurve */


	inline bool SetConstantCurve(t_structHelper inst, FInterpCurveFloat value) { inst.WriteOffset(0x40, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUDistributionFloatConstantCurve = sizeof(UDistributionFloatConstantCurve); // 88
    static_assert(sizeof(UDistributionFloatConstantCurve) == 0x58, "Size of UDistributionFloatConstantCurve is not correct.");
	auto constexpr UDistributionFloatConstantCurve_ConstantCurve_Offset = offsetof(UDistributionFloatConstantCurve, ConstantCurve);
	static_assert(UDistributionFloatConstantCurve_ConstantCurve_Offset == 0x40, "UDistributionFloatConstantCurve::ConstantCurve offset is not 40");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
