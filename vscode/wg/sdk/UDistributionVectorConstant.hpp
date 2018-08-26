#pragma once
#include "UDistributionVector.hpp"
#include "FVector.hpp"
#include "EDistributionVectorLockFlags.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UDistributionVectorConstant // Size: 0x58
	: public UDistributionVector // Size: 0x40
{
private:
	typedef UDistributionVectorConstant t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(747); // id32("Class Engine.DistributionVectorConstant")
		return ptr;
	}
	FVector Constant; /* Ofs: 0x40 Size: 0xC - StructProperty Engine.DistributionVectorConstant.Constant */
	uint8_t boolField4C;
	uint8_t UnknownData4D[0x3];
	TEnumAsByte<enum EDistributionVectorLockFlags> LockedAxes; /* Ofs: 0x50 Size: 0x1 - ByteProperty Engine.DistributionVectorConstant.LockedAxes */
	uint8_t UnknownData51[0x7];


	inline bool SetConstant(t_structHelper inst, FVector value) { inst.WriteOffset(0x40, value); }
	inline bool bLockAxes()
	{
		return boolField4C& 0x1;
	}
	inline bool SetbLockAxes(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x4C, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetLockedAxes(t_structHelper inst, TEnumAsByte<enum EDistributionVectorLockFlags> value) { inst.WriteOffset(0x50, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUDistributionVectorConstant = sizeof(UDistributionVectorConstant); // 88
    static_assert(sizeof(UDistributionVectorConstant) == 0x58, "Size of UDistributionVectorConstant is not correct.");
	auto constexpr UDistributionVectorConstant_Constant_Offset = offsetof(UDistributionVectorConstant, Constant);
	static_assert(UDistributionVectorConstant_Constant_Offset == 0x40, "UDistributionVectorConstant::Constant offset is not 40");
	auto constexpr UDistributionVectorConstant_boolField4C_Offset = offsetof(UDistributionVectorConstant, boolField4C);
	static_assert(UDistributionVectorConstant_boolField4C_Offset == 0x4c, "UDistributionVectorConstant::boolField4C offset is not 4c");
	auto constexpr UDistributionVectorConstant_LockedAxes_Offset = offsetof(UDistributionVectorConstant, LockedAxes);
	static_assert(UDistributionVectorConstant_LockedAxes_Offset == 0x50, "UDistributionVectorConstant::LockedAxes offset is not 50");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
