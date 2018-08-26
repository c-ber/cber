#pragma once
#include "UDataAsset.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTireConfig // Size: 0x58
	: public UDataAsset // Size: 0x38
{
private:
	typedef UTireConfig t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(2079); // id32("Class PhysXVehicles.TireConfig")
		return ptr;
	}
	float FrictionScale; /* Ofs: 0x38 Size: 0x4 - FloatProperty PhysXVehicles.TireConfig.FrictionScale */
	uint8_t UnknownData3C[0x4];
	TArray<struct FTireConfigMaterialFriction> TireFrictionScales; /* Ofs: 0x40 Size: 0x10 - ArrayProperty PhysXVehicles.TireConfig.TireFrictionScales */
	uint8_t UnknownData50[0x8];


	inline bool SetFrictionScale(t_structHelper inst, float value) { inst.WriteOffset(0x38, value); }
	inline bool SetTireFrictionScales(t_structHelper inst, TArray<struct FTireConfigMaterialFriction> value) { inst.WriteOffset(0x40, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTireConfig = sizeof(UTireConfig); // 88
    static_assert(sizeof(UTireConfig) == 0x58, "Size of UTireConfig is not correct.");
	auto constexpr UTireConfig_FrictionScale_Offset = offsetof(UTireConfig, FrictionScale);
	static_assert(UTireConfig_FrictionScale_Offset == 0x38, "UTireConfig::FrictionScale offset is not 38");
	auto constexpr UTireConfig_TireFrictionScales_Offset = offsetof(UTireConfig, TireFrictionScales);
	static_assert(UTireConfig_TireFrictionScales_Offset == 0x40, "UTireConfig::TireFrictionScales offset is not 40");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
