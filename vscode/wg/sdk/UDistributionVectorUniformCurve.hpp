#pragma once
#include "UDistributionVector.hpp"
#include "FInterpCurveTwoVectors.hpp"
#include "EDistributionVectorLockFlags.hpp"
#include "EDistributionVectorMirrorFlags.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UDistributionVectorUniformCurve // Size: 0x68
	: public UDistributionVector // Size: 0x40
{
private:
	typedef UDistributionVectorUniformCurve t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(752); // id32("Class Engine.DistributionVectorUniformCurve")
		return ptr;
	}
	FInterpCurveTwoVectors ConstantCurve; /* Ofs: 0x40 Size: 0x18 - StructProperty Engine.DistributionVectorUniformCurve.ConstantCurve */
	uint8_t boolField58;
	uint8_t UnknownData59[0x3];
	TEnumAsByte<enum EDistributionVectorLockFlags> LockedAxes[2]; /* Ofs: 0x2 Size: 0x1 - ByteProperty Engine.DistributionVectorUniformCurve.LockedAxes */
	TEnumAsByte<enum EDistributionVectorMirrorFlags> MirrorFlags[3]; /* Ofs: 0x3 Size: 0x1 - ByteProperty Engine.DistributionVectorUniformCurve.MirrorFlags */
	uint8_t UnknownData61[0x3];
	uint8_t boolField64;
	uint8_t UnknownData65[0x3];


	inline bool SetConstantCurve(t_structHelper inst, FInterpCurveTwoVectors value) { inst.WriteOffset(0x40, value); }
	inline bool bLockAxes1()
	{
		return boolField58& 0x1;
	}
	inline bool SetbLockAxes1(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x58, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bLockAxes2()
	{
		return boolField58& 0x2;
	}
	inline bool SetbLockAxes2(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x58, (uint8_t)(value ? curVal | (uint8_t)2 : curVal & ~(uint8_t)2));
	}
	inline bool bUseExtremes()
	{
		return boolField64& 0x1;
	}
	inline bool SetbUseExtremes(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x64, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUDistributionVectorUniformCurve = sizeof(UDistributionVectorUniformCurve); // 104
    static_assert(sizeof(UDistributionVectorUniformCurve) == 0x68, "Size of UDistributionVectorUniformCurve is not correct.");
	auto constexpr UDistributionVectorUniformCurve_ConstantCurve_Offset = offsetof(UDistributionVectorUniformCurve, ConstantCurve);
	static_assert(UDistributionVectorUniformCurve_ConstantCurve_Offset == 0x40, "UDistributionVectorUniformCurve::ConstantCurve offset is not 40");
	auto constexpr UDistributionVectorUniformCurve_boolField58_Offset = offsetof(UDistributionVectorUniformCurve, boolField58);
	static_assert(UDistributionVectorUniformCurve_boolField58_Offset == 0x58, "UDistributionVectorUniformCurve::boolField58 offset is not 58");
	auto constexpr UDistributionVectorUniformCurve_LockedAxes_Offset = offsetof(UDistributionVectorUniformCurve, LockedAxes);
	static_assert(UDistributionVectorUniformCurve_LockedAxes_Offset == 0x5c, "UDistributionVectorUniformCurve::LockedAxes offset is not 5c");
	auto constexpr UDistributionVectorUniformCurve_MirrorFlags_Offset = offsetof(UDistributionVectorUniformCurve, MirrorFlags);
	static_assert(UDistributionVectorUniformCurve_MirrorFlags_Offset == 0x5e, "UDistributionVectorUniformCurve::MirrorFlags offset is not 5e");
	auto constexpr UDistributionVectorUniformCurve_boolField64_Offset = offsetof(UDistributionVectorUniformCurve, boolField64);
	static_assert(UDistributionVectorUniformCurve_boolField64_Offset == 0x64, "UDistributionVectorUniformCurve::boolField64 offset is not 64");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
