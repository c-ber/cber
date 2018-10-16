#pragma once
#include "UParticleModuleSpawnBase.hpp"
#include "FRawDistributionFloat.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UParticleModuleSpawnPerUnit // Size: 0x90
	: public UParticleModuleSpawnBase // Size: 0x40
{
private:
	typedef UParticleModuleSpawnPerUnit t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1145); // id32("Class Engine.ParticleModuleSpawnPerUnit")
		return ptr;
	}
	float UnitScalar; /* Ofs: 0x40 Size: 0x4 - FloatProperty Engine.ParticleModuleSpawnPerUnit.UnitScalar */
	uint8_t UnknownData44[0x4];
	FRawDistributionFloat SpawnPerUnit; /* Ofs: 0x48 Size: 0x38 - StructProperty Engine.ParticleModuleSpawnPerUnit.SpawnPerUnit */
	uint8_t boolField80;
	uint8_t UnknownData81[0x3];
	float MovementTolerance; /* Ofs: 0x84 Size: 0x4 - FloatProperty Engine.ParticleModuleSpawnPerUnit.MovementTolerance */
	float MaxFrameDistance; /* Ofs: 0x88 Size: 0x4 - FloatProperty Engine.ParticleModuleSpawnPerUnit.MaxFrameDistance */
	uint8_t boolField8C;
	uint8_t UnknownData8D[0x3];


	inline bool SetUnitScalar(t_structHelper inst, float value) { inst.WriteOffset(0x40, value); }
	inline bool SetSpawnPerUnit(t_structHelper inst, FRawDistributionFloat value) { inst.WriteOffset(0x48, value); }
	inline bool bIgnoreSpawnRateWhenMoving()
	{
		return boolField80& 0x1;
	}
	inline bool SetbIgnoreSpawnRateWhenMoving(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x80, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetMovementTolerance(t_structHelper inst, float value) { inst.WriteOffset(0x84, value); }
	inline bool SetMaxFrameDistance(t_structHelper inst, float value) { inst.WriteOffset(0x88, value); }
	inline bool bIgnoreMovementAlongX()
	{
		return boolField8C& 0x1;
	}
	inline bool SetbIgnoreMovementAlongX(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x8C, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bIgnoreMovementAlongY()
	{
		return boolField8C& 0x2;
	}
	inline bool SetbIgnoreMovementAlongY(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x8C, (uint8_t)(value ? curVal | (uint8_t)2 : curVal & ~(uint8_t)2));
	}
	inline bool bIgnoreMovementAlongZ()
	{
		return boolField8C& 0x4;
	}
	inline bool SetbIgnoreMovementAlongZ(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x8C, (uint8_t)(value ? curVal | (uint8_t)4 : curVal & ~(uint8_t)4));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUParticleModuleSpawnPerUnit = sizeof(UParticleModuleSpawnPerUnit); // 144
    static_assert(sizeof(UParticleModuleSpawnPerUnit) == 0x90, "Size of UParticleModuleSpawnPerUnit is not correct.");
	auto constexpr UParticleModuleSpawnPerUnit_UnitScalar_Offset = offsetof(UParticleModuleSpawnPerUnit, UnitScalar);
	static_assert(UParticleModuleSpawnPerUnit_UnitScalar_Offset == 0x40, "UParticleModuleSpawnPerUnit::UnitScalar offset is not 40");
	auto constexpr UParticleModuleSpawnPerUnit_SpawnPerUnit_Offset = offsetof(UParticleModuleSpawnPerUnit, SpawnPerUnit);
	static_assert(UParticleModuleSpawnPerUnit_SpawnPerUnit_Offset == 0x48, "UParticleModuleSpawnPerUnit::SpawnPerUnit offset is not 48");
	auto constexpr UParticleModuleSpawnPerUnit_boolField80_Offset = offsetof(UParticleModuleSpawnPerUnit, boolField80);
	static_assert(UParticleModuleSpawnPerUnit_boolField80_Offset == 0x80, "UParticleModuleSpawnPerUnit::boolField80 offset is not 80");
	auto constexpr UParticleModuleSpawnPerUnit_MovementTolerance_Offset = offsetof(UParticleModuleSpawnPerUnit, MovementTolerance);
	static_assert(UParticleModuleSpawnPerUnit_MovementTolerance_Offset == 0x84, "UParticleModuleSpawnPerUnit::MovementTolerance offset is not 84");
	auto constexpr UParticleModuleSpawnPerUnit_MaxFrameDistance_Offset = offsetof(UParticleModuleSpawnPerUnit, MaxFrameDistance);
	static_assert(UParticleModuleSpawnPerUnit_MaxFrameDistance_Offset == 0x88, "UParticleModuleSpawnPerUnit::MaxFrameDistance offset is not 88");
	auto constexpr UParticleModuleSpawnPerUnit_boolField8C_Offset = offsetof(UParticleModuleSpawnPerUnit, boolField8C);
	static_assert(UParticleModuleSpawnPerUnit_boolField8C_Offset == 0x8c, "UParticleModuleSpawnPerUnit::boolField8C offset is not 8c");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
