#pragma once
#include "UParticleModuleEventReceiverBase.hpp"
#include "FRawDistributionFloat.hpp"
#include "FRawDistributionVector.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UParticleModuleEventReceiverSpawn // Size: 0xF0
	: public UParticleModuleEventReceiverBase // Size: 0x48
{
private:
	typedef UParticleModuleEventReceiverSpawn t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1084); // id32("Class Engine.ParticleModuleEventReceiverSpawn")
		return ptr;
	}
	FRawDistributionFloat SpawnCount; /* Ofs: 0x48 Size: 0x38 - StructProperty Engine.ParticleModuleEventReceiverSpawn.SpawnCount */
	uint8_t boolField80;
	uint8_t UnknownData81[0x7];
	FRawDistributionVector InheritVelocityScale; /* Ofs: 0x88 Size: 0x50 - StructProperty Engine.ParticleModuleEventReceiverSpawn.InheritVelocityScale */
	TArray<ExternalPtr<struct UPhysicalMaterial>> PhysicalMaterials; /* Ofs: 0xD8 Size: 0x10 - ArrayProperty Engine.ParticleModuleEventReceiverSpawn.PhysicalMaterials */
	uint8_t boolFieldE8;
	uint8_t UnknownDataE9[0x7];


	inline bool SetSpawnCount(t_structHelper inst, FRawDistributionFloat value) { inst.WriteOffset(0x48, value); }
	inline bool bUseParticleTime()
	{
		return boolField80& 0x1;
	}
	inline bool SetbUseParticleTime(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x80, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bUsePSysLocation()
	{
		return boolField80& 0x2;
	}
	inline bool SetbUsePSysLocation(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x80, (uint8_t)(value ? curVal | (uint8_t)2 : curVal & ~(uint8_t)2));
	}
	inline bool bInheritVelocity()
	{
		return boolField80& 0x4;
	}
	inline bool SetbInheritVelocity(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x80, (uint8_t)(value ? curVal | (uint8_t)4 : curVal & ~(uint8_t)4));
	}
	inline bool SetInheritVelocityScale(t_structHelper inst, FRawDistributionVector value) { inst.WriteOffset(0x88, value); }
	inline bool SetPhysicalMaterials(t_structHelper inst, TArray<ExternalPtr<struct UPhysicalMaterial>> value) { inst.WriteOffset(0xD8, value); }
	inline bool bBanPhysicalMaterials()
	{
		return boolFieldE8& 0x1;
	}
	inline bool SetbBanPhysicalMaterials(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xE8, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUParticleModuleEventReceiverSpawn = sizeof(UParticleModuleEventReceiverSpawn); // 240
    static_assert(sizeof(UParticleModuleEventReceiverSpawn) == 0xF0, "Size of UParticleModuleEventReceiverSpawn is not correct.");
	auto constexpr UParticleModuleEventReceiverSpawn_SpawnCount_Offset = offsetof(UParticleModuleEventReceiverSpawn, SpawnCount);
	static_assert(UParticleModuleEventReceiverSpawn_SpawnCount_Offset == 0x48, "UParticleModuleEventReceiverSpawn::SpawnCount offset is not 48");
	auto constexpr UParticleModuleEventReceiverSpawn_boolField80_Offset = offsetof(UParticleModuleEventReceiverSpawn, boolField80);
	static_assert(UParticleModuleEventReceiverSpawn_boolField80_Offset == 0x80, "UParticleModuleEventReceiverSpawn::boolField80 offset is not 80");
	auto constexpr UParticleModuleEventReceiverSpawn_InheritVelocityScale_Offset = offsetof(UParticleModuleEventReceiverSpawn, InheritVelocityScale);
	static_assert(UParticleModuleEventReceiverSpawn_InheritVelocityScale_Offset == 0x88, "UParticleModuleEventReceiverSpawn::InheritVelocityScale offset is not 88");
	auto constexpr UParticleModuleEventReceiverSpawn_PhysicalMaterials_Offset = offsetof(UParticleModuleEventReceiverSpawn, PhysicalMaterials);
	static_assert(UParticleModuleEventReceiverSpawn_PhysicalMaterials_Offset == 0xd8, "UParticleModuleEventReceiverSpawn::PhysicalMaterials offset is not d8");
	auto constexpr UParticleModuleEventReceiverSpawn_boolFieldE8_Offset = offsetof(UParticleModuleEventReceiverSpawn, boolFieldE8);
	static_assert(UParticleModuleEventReceiverSpawn_boolFieldE8_Offset == 0xe8, "UParticleModuleEventReceiverSpawn::boolFieldE8 offset is not e8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
