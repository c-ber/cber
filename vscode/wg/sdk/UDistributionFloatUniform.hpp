#pragma once
#include "UDistributionFloat.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UDistributionFloatUniform // Size: 0x48
	: public UDistributionFloat // Size: 0x40
{
private:
	typedef UDistributionFloatUniform t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(744); // id32("Class Engine.DistributionFloatUniform")
		return ptr;
	}
	float Min; /* Ofs: 0x40 Size: 0x4 - FloatProperty Engine.DistributionFloatUniform.Min */
	float Max; /* Ofs: 0x44 Size: 0x4 - FloatProperty Engine.DistributionFloatUniform.Max */


	inline bool SetMin(t_structHelper inst, float value) { inst.WriteOffset(0x40, value); }
	inline bool SetMax(t_structHelper inst, float value) { inst.WriteOffset(0x44, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUDistributionFloatUniform = sizeof(UDistributionFloatUniform); // 72
    static_assert(sizeof(UDistributionFloatUniform) == 0x48, "Size of UDistributionFloatUniform is not correct.");
	auto constexpr UDistributionFloatUniform_Min_Offset = offsetof(UDistributionFloatUniform, Min);
	static_assert(UDistributionFloatUniform_Min_Offset == 0x40, "UDistributionFloatUniform::Min offset is not 40");
	auto constexpr UDistributionFloatUniform_Max_Offset = offsetof(UDistributionFloatUniform, Max);
	static_assert(UDistributionFloatUniform_Max_Offset == 0x44, "UDistributionFloatUniform::Max offset is not 44");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
