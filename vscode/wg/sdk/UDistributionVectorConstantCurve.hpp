#pragma once
#include "UDistributionVector.hpp"
#include "FInterpCurveVector.hpp"
#include "EDistributionVectorLockFlags.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UDistributionVectorConstantCurve // Size: 0x60
	: public UDistributionVector // Size: 0x40
{
private:
	typedef UDistributionVectorConstantCurve t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(750); // id32("Class Engine.DistributionVectorConstantCurve")
		return ptr;
	}
	FInterpCurveVector ConstantCurve; /* Ofs: 0x40 Size: 0x18 - StructProperty Engine.DistributionVectorConstantCurve.ConstantCurve */
	uint8_t boolField58;
	uint8_t UnknownData59[0x3];
	TEnumAsByte<enum EDistributionVectorLockFlags> LockedAxes; /* Ofs: 0x5C Size: 0x1 - ByteProperty Engine.DistributionVectorConstantCurve.LockedAxes */
	uint8_t UnknownData5D[0x3];


	inline bool SetConstantCurve(t_structHelper inst, FInterpCurveVector value) { inst.WriteOffset(0x40, value); }
	inline bool bLockAxes()
	{
		return boolField58& 0x1;
	}
	inline bool SetbLockAxes(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x58, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetLockedAxes(t_structHelper inst, TEnumAsByte<enum EDistributionVectorLockFlags> value) { inst.WriteOffset(0x5C, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUDistributionVectorConstantCurve = sizeof(UDistributionVectorConstantCurve); // 96
    static_assert(sizeof(UDistributionVectorConstantCurve) == 0x60, "Size of UDistributionVectorConstantCurve is not correct.");
	auto constexpr UDistributionVectorConstantCurve_ConstantCurve_Offset = offsetof(UDistributionVectorConstantCurve, ConstantCurve);
	static_assert(UDistributionVectorConstantCurve_ConstantCurve_Offset == 0x40, "UDistributionVectorConstantCurve::ConstantCurve offset is not 40");
	auto constexpr UDistributionVectorConstantCurve_boolField58_Offset = offsetof(UDistributionVectorConstantCurve, boolField58);
	static_assert(UDistributionVectorConstantCurve_boolField58_Offset == 0x58, "UDistributionVectorConstantCurve::boolField58 offset is not 58");
	auto constexpr UDistributionVectorConstantCurve_LockedAxes_Offset = offsetof(UDistributionVectorConstantCurve, LockedAxes);
	static_assert(UDistributionVectorConstantCurve_LockedAxes_Offset == 0x5c, "UDistributionVectorConstantCurve::LockedAxes offset is not 5c");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
