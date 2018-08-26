#pragma once
#include "UDistributionFloat.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UDistributionFloatConstant // Size: 0x48
	: public UDistributionFloat // Size: 0x40
{
private:
	typedef UDistributionFloatConstant t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(740); // id32("Class Engine.DistributionFloatConstant")
		return ptr;
	}
	float Constant; /* Ofs: 0x40 Size: 0x4 - FloatProperty Engine.DistributionFloatConstant.Constant */
	uint8_t UnknownData44[0x4];


	inline bool SetConstant(t_structHelper inst, float value) { inst.WriteOffset(0x40, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUDistributionFloatConstant = sizeof(UDistributionFloatConstant); // 72
    static_assert(sizeof(UDistributionFloatConstant) == 0x48, "Size of UDistributionFloatConstant is not correct.");
	auto constexpr UDistributionFloatConstant_Constant_Offset = offsetof(UDistributionFloatConstant, Constant);
	static_assert(UDistributionFloatConstant_Constant_Offset == 0x40, "UDistributionFloatConstant::Constant offset is not 40");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
