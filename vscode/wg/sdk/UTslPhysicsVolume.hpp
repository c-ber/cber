#pragma once
#include "UPhysicsVolume.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTslPhysicsVolume // Size: 0x490
	: public UPhysicsVolume // Size: 0x450
{
private:
	typedef UTslPhysicsVolume t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1475); // id32("Class TslGame.TslPhysicsVolume")
		return ptr;
	}
	ExternalPtr<struct UOceanManager> OceanManager; /* Ofs: 0x450 Size: 0x8 - ObjectProperty TslGame.TslPhysicsVolume.OceanManager */
	ExternalPtr<struct UClass> DefaultWaterSplash; /* Ofs: 0x458 Size: 0x8 - ClassProperty TslGame.TslPhysicsVolume.DefaultWaterSplash */
	ExternalPtr<struct UClass> VehicleWaterSplash; /* Ofs: 0x460 Size: 0x8 - ClassProperty TslGame.TslPhysicsVolume.VehicleWaterSplash */
	TArray<ExternalPtr<struct UClass>> WaterSplashMuteTypes; /* Ofs: 0x468 Size: 0x10 - ArrayProperty TslGame.TslPhysicsVolume.WaterSplashMuteTypes */
	uint8_t UnknownData478[0x18];


	inline bool SetOceanManager(t_structHelper inst, ExternalPtr<struct UOceanManager> value) { inst.WriteOffset(0x450, value); }
	inline bool SetDefaultWaterSplash(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0x458, value); }
	inline bool SetVehicleWaterSplash(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0x460, value); }
	inline bool SetWaterSplashMuteTypes(t_structHelper inst, TArray<ExternalPtr<struct UClass>> value) { inst.WriteOffset(0x468, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTslPhysicsVolume = sizeof(UTslPhysicsVolume); // 1168
    static_assert(sizeof(UTslPhysicsVolume) == 0x490, "Size of UTslPhysicsVolume is not correct.");
	auto constexpr UTslPhysicsVolume_OceanManager_Offset = offsetof(UTslPhysicsVolume, OceanManager);
	static_assert(UTslPhysicsVolume_OceanManager_Offset == 0x450, "UTslPhysicsVolume::OceanManager offset is not 450");
	auto constexpr UTslPhysicsVolume_DefaultWaterSplash_Offset = offsetof(UTslPhysicsVolume, DefaultWaterSplash);
	static_assert(UTslPhysicsVolume_DefaultWaterSplash_Offset == 0x458, "UTslPhysicsVolume::DefaultWaterSplash offset is not 458");
	auto constexpr UTslPhysicsVolume_VehicleWaterSplash_Offset = offsetof(UTslPhysicsVolume, VehicleWaterSplash);
	static_assert(UTslPhysicsVolume_VehicleWaterSplash_Offset == 0x460, "UTslPhysicsVolume::VehicleWaterSplash offset is not 460");
	auto constexpr UTslPhysicsVolume_WaterSplashMuteTypes_Offset = offsetof(UTslPhysicsVolume, WaterSplashMuteTypes);
	static_assert(UTslPhysicsVolume_WaterSplashMuteTypes_Offset == 0x468, "UTslPhysicsVolume::WaterSplashMuteTypes offset is not 468");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
