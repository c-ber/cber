#pragma once
#include "UDataAsset.hpp"
#include "FFloatInterval.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTslHealthGaugeData // Size: 0x58
	: public UDataAsset // Size: 0x38
{
private:
	typedef UTslHealthGaugeData t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1400); // id32("Class TslGame.TslHealthGaugeData")
		return ptr;
	}
	TArray<struct FHealthColorData> HealthGaugeColors; /* Ofs: 0x38 Size: 0x10 - ArrayProperty TslGame.TslHealthGaugeData.HealthGaugeColors */
	FFloatInterval WarningRage; /* Ofs: 0x48 Size: 0x8 - StructProperty TslGame.TslHealthGaugeData.WarningRage */
	ExternalPtr<struct UCurveLinearColor> GroggyColorCurve; /* Ofs: 0x50 Size: 0x8 - ObjectProperty TslGame.TslHealthGaugeData.GroggyColorCurve */


	inline bool SetHealthGaugeColors(t_structHelper inst, TArray<struct FHealthColorData> value) { inst.WriteOffset(0x38, value); }
	inline bool SetWarningRage(t_structHelper inst, FFloatInterval value) { inst.WriteOffset(0x48, value); }
	inline bool SetGroggyColorCurve(t_structHelper inst, ExternalPtr<struct UCurveLinearColor> value) { inst.WriteOffset(0x50, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTslHealthGaugeData = sizeof(UTslHealthGaugeData); // 88
    static_assert(sizeof(UTslHealthGaugeData) == 0x58, "Size of UTslHealthGaugeData is not correct.");
	auto constexpr UTslHealthGaugeData_HealthGaugeColors_Offset = offsetof(UTslHealthGaugeData, HealthGaugeColors);
	static_assert(UTslHealthGaugeData_HealthGaugeColors_Offset == 0x38, "UTslHealthGaugeData::HealthGaugeColors offset is not 38");
	auto constexpr UTslHealthGaugeData_WarningRage_Offset = offsetof(UTslHealthGaugeData, WarningRage);
	static_assert(UTslHealthGaugeData_WarningRage_Offset == 0x48, "UTslHealthGaugeData::WarningRage offset is not 48");
	auto constexpr UTslHealthGaugeData_GroggyColorCurve_Offset = offsetof(UTslHealthGaugeData, GroggyColorCurve);
	static_assert(UTslHealthGaugeData_GroggyColorCurve_Offset == 0x50, "UTslHealthGaugeData::GroggyColorCurve offset is not 50");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
