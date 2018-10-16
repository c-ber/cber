#pragma once
#include "UDistribution.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UDistributionVector // Size: 0x40
	: public UDistribution // Size: 0x38
{
private:
	typedef UDistributionVector t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(746); // id32("Class Engine.DistributionVector")
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
	inline bool bIsDirty()
	{
		return boolField38& 0x2;
	}
	inline bool SetbIsDirty(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x38, (uint8_t)(value ? curVal | (uint8_t)2 : curVal & ~(uint8_t)2));
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

    auto constexpr sizeofUDistributionVector = sizeof(UDistributionVector); // 64
    static_assert(sizeof(UDistributionVector) == 0x40, "Size of UDistributionVector is not correct.");
	auto constexpr UDistributionVector_boolField38_Offset = offsetof(UDistributionVector, boolField38);
	static_assert(UDistributionVector_boolField38_Offset == 0x38, "UDistributionVector::boolField38 offset is not 38");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
