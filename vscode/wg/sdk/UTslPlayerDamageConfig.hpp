#pragma once
#include "UDataAsset.hpp"
#include "EDamageZoneType.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTslPlayerDamageConfig // Size: 0x88
	: public UDataAsset // Size: 0x38
{
private:
	typedef UTslPlayerDamageConfig t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1478); // id32("Class TslGame.TslPlayerDamageConfig")
		return ptr;
	}
	TMap<EDamageZoneType, struct FPlayerDamageZoneDesc> DamageZones; /* Ofs: 0x38 Size: 0x50 - MapProperty TslGame.TslPlayerDamageConfig.DamageZones */


	inline bool SetDamageZones(t_structHelper inst, TMap<EDamageZoneType, struct FPlayerDamageZoneDesc> value) { inst.WriteOffset(0x38, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTslPlayerDamageConfig = sizeof(UTslPlayerDamageConfig); // 136
    static_assert(sizeof(UTslPlayerDamageConfig) == 0x88, "Size of UTslPlayerDamageConfig is not correct.");
	auto constexpr UTslPlayerDamageConfig_DamageZones_Offset = offsetof(UTslPlayerDamageConfig, DamageZones);
	static_assert(UTslPlayerDamageConfig_DamageZones_Offset == 0x38, "UTslPlayerDamageConfig::DamageZones offset is not 38");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
