#pragma once
#include "UDistribution.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UDistributionFloat // Size: 0x40
	: public UDistribution // Size: 0x38
{
private:
	typedef UDistributionFloat t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(739); // id32("Class Engine.DistributionFloat")
		return ptr;
	}
	uint8_t boolField38;
	uint8_t UnknownData39[0x7];


	inline bool bCanBeBaked()
	{
		return boolField38& 0x1;
	}
	inline bool SetbCanBeBaked(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x38, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bBakedDataSuccesfully()
	{
		return boolField38& 0x4;
	}
	inline bool SetbBakedDataSuccesfully(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x38, (uint8_t)(value ? curVal | (uint8_t)4 : curVal & ~(uint8_t)4));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUDistributionFloat = sizeof(UDistributionFloat); // 64
    static_assert(sizeof(UDistributionFloat) == 0x40, "Size of UDistributionFloat is not correct.");
	auto constexpr UDistributionFloat_boolField38_Offset = offsetof(UDistributionFloat, boolField38);
	static_assert(UDistributionFloat_boolField38_Offset == 0x38, "UDistributionFloat::boolField38 offset is not 38");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
