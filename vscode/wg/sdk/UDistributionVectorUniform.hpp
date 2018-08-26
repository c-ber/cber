#pragma once
#include "UDistributionVector.hpp"
#include "FVector.hpp"
#include "EDistributionVectorLockFlags.hpp"
#include "EDistributionVectorMirrorFlags.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UDistributionVectorUniform // Size: 0x68
	: public UDistributionVector // Size: 0x40
{
private:
	typedef UDistributionVectorUniform t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(751); // id32("Class Engine.DistributionVectorUniform")
		return ptr;
	}
	FVector Max; /* Ofs: 0x40 Size: 0xC - StructProperty Engine.DistributionVectorUniform.Max */
	FVector Min; /* Ofs: 0x4C Size: 0xC - StructProperty Engine.DistributionVectorUniform.Min */
	uint8_t boolField58;
	uint8_t UnknownData59[0x3];
	TEnumAsByte<enum EDistributionVectorLockFlags> LockedAxes; /* Ofs: 0x5C Size: 0x1 - ByteProperty Engine.DistributionVectorUniform.LockedAxes */
	TEnumAsByte<enum EDistributionVectorMirrorFlags> MirrorFlags[3]; /* Ofs: 0x3 Size: 0x1 - ByteProperty Engine.DistributionVectorUniform.MirrorFlags */
	uint8_t boolField60;
	uint8_t UnknownData61[0x7];


	inline bool SetMax(t_structHelper inst, FVector value) { inst.WriteOffset(0x40, value); }
	inline bool SetMin(t_structHelper inst, FVector value) { inst.WriteOffset(0x4C, value); }
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
	inline bool bUseExtremes()
	{
		return boolField60& 0x1;
	}
	inline bool SetbUseExtremes(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x60, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUDistributionVectorUniform = sizeof(UDistributionVectorUniform); // 104
    static_assert(sizeof(UDistributionVectorUniform) == 0x68, "Size of UDistributionVectorUniform is not correct.");
	auto constexpr UDistributionVectorUniform_Max_Offset = offsetof(UDistributionVectorUniform, Max);
	static_assert(UDistributionVectorUniform_Max_Offset == 0x40, "UDistributionVectorUniform::Max offset is not 40");
	auto constexpr UDistributionVectorUniform_Min_Offset = offsetof(UDistributionVectorUniform, Min);
	static_assert(UDistributionVectorUniform_Min_Offset == 0x4c, "UDistributionVectorUniform::Min offset is not 4c");
	auto constexpr UDistributionVectorUniform_boolField58_Offset = offsetof(UDistributionVectorUniform, boolField58);
	static_assert(UDistributionVectorUniform_boolField58_Offset == 0x58, "UDistributionVectorUniform::boolField58 offset is not 58");
	auto constexpr UDistributionVectorUniform_LockedAxes_Offset = offsetof(UDistributionVectorUniform, LockedAxes);
	static_assert(UDistributionVectorUniform_LockedAxes_Offset == 0x5c, "UDistributionVectorUniform::LockedAxes offset is not 5c");
	auto constexpr UDistributionVectorUniform_MirrorFlags_Offset = offsetof(UDistributionVectorUniform, MirrorFlags);
	static_assert(UDistributionVectorUniform_MirrorFlags_Offset == 0x5d, "UDistributionVectorUniform::MirrorFlags offset is not 5d");
	auto constexpr UDistributionVectorUniform_boolField60_Offset = offsetof(UDistributionVectorUniform, boolField60);
	static_assert(UDistributionVectorUniform_boolField60_Offset == 0x60, "UDistributionVectorUniform::boolField60 offset is not 60");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
