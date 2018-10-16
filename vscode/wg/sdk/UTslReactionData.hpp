#pragma once
#include "UDataAsset.hpp"
#include "FVehicleReactionData.hpp"
#include "FRadialDamageReactionData.hpp"
#include "FPointDamageReactionData.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTslReactionData // Size: 0x78
	: public UDataAsset // Size: 0x38
{
private:
	typedef UTslReactionData t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1377); // id32("Class TslGame.TslReactionData")
		return ptr;
	}
	float DestroyDelay; /* Ofs: 0x38 Size: 0x4 - FloatProperty TslGame.TslReactionData.DestroyDelay */
	FVehicleReactionData VehicleReactionData; /* Ofs: 0x3C Size: 0xC - StructProperty TslGame.TslReactionData.VehicleReactionData */
	FRadialDamageReactionData RadialDamageReactionData; /* Ofs: 0x48 Size: 0xC - StructProperty TslGame.TslReactionData.RadialDamageReactionData */
	FPointDamageReactionData PointDamageReactionData; /* Ofs: 0x54 Size: 0x10 - StructProperty TslGame.TslReactionData.PointDamageReactionData */
	int32_t DependancyCountBySibling; /* Ofs: 0x64 Size: 0x4 - IntProperty TslGame.TslReactionData.DependancyCountBySibling */
	ExternalPtr<struct UAkAudioEvent> PhysicsReactionSoundAk; /* Ofs: 0x68 Size: 0x8 - ObjectProperty TslGame.TslReactionData.PhysicsReactionSoundAk */
	ExternalPtr<struct UAkAudioEvent> DestructibleReactionSoundAk; /* Ofs: 0x70 Size: 0x8 - ObjectProperty TslGame.TslReactionData.DestructibleReactionSoundAk */


	inline bool SetDestroyDelay(t_structHelper inst, float value) { inst.WriteOffset(0x38, value); }
	inline bool SetVehicleReactionData(t_structHelper inst, FVehicleReactionData value) { inst.WriteOffset(0x3C, value); }
	inline bool SetRadialDamageReactionData(t_structHelper inst, FRadialDamageReactionData value) { inst.WriteOffset(0x48, value); }
	inline bool SetPointDamageReactionData(t_structHelper inst, FPointDamageReactionData value) { inst.WriteOffset(0x54, value); }
	inline bool SetDependancyCountBySibling(t_structHelper inst, int32_t value) { inst.WriteOffset(0x64, value); }
	inline bool SetPhysicsReactionSoundAk(t_structHelper inst, ExternalPtr<struct UAkAudioEvent> value) { inst.WriteOffset(0x68, value); }
	inline bool SetDestructibleReactionSoundAk(t_structHelper inst, ExternalPtr<struct UAkAudioEvent> value) { inst.WriteOffset(0x70, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTslReactionData = sizeof(UTslReactionData); // 120
    static_assert(sizeof(UTslReactionData) == 0x78, "Size of UTslReactionData is not correct.");
	auto constexpr UTslReactionData_DestroyDelay_Offset = offsetof(UTslReactionData, DestroyDelay);
	static_assert(UTslReactionData_DestroyDelay_Offset == 0x38, "UTslReactionData::DestroyDelay offset is not 38");
	auto constexpr UTslReactionData_VehicleReactionData_Offset = offsetof(UTslReactionData, VehicleReactionData);
	static_assert(UTslReactionData_VehicleReactionData_Offset == 0x3c, "UTslReactionData::VehicleReactionData offset is not 3c");
	auto constexpr UTslReactionData_RadialDamageReactionData_Offset = offsetof(UTslReactionData, RadialDamageReactionData);
	static_assert(UTslReactionData_RadialDamageReactionData_Offset == 0x48, "UTslReactionData::RadialDamageReactionData offset is not 48");
	auto constexpr UTslReactionData_PointDamageReactionData_Offset = offsetof(UTslReactionData, PointDamageReactionData);
	static_assert(UTslReactionData_PointDamageReactionData_Offset == 0x54, "UTslReactionData::PointDamageReactionData offset is not 54");
	auto constexpr UTslReactionData_DependancyCountBySibling_Offset = offsetof(UTslReactionData, DependancyCountBySibling);
	static_assert(UTslReactionData_DependancyCountBySibling_Offset == 0x64, "UTslReactionData::DependancyCountBySibling offset is not 64");
	auto constexpr UTslReactionData_PhysicsReactionSoundAk_Offset = offsetof(UTslReactionData, PhysicsReactionSoundAk);
	static_assert(UTslReactionData_PhysicsReactionSoundAk_Offset == 0x68, "UTslReactionData::PhysicsReactionSoundAk offset is not 68");
	auto constexpr UTslReactionData_DestructibleReactionSoundAk_Offset = offsetof(UTslReactionData, DestructibleReactionSoundAk);
	static_assert(UTslReactionData_DestructibleReactionSoundAk_Offset == 0x70, "UTslReactionData::DestructibleReactionSoundAk offset is not 70");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
