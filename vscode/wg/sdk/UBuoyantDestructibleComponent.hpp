#pragma once
#include "UDestructibleComponent.hpp"
#include "FVector.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBuoyantDestructibleComponent // Size: 0xC90
	: public UDestructibleComponent // Size: 0xC40
{
private:
	typedef UBuoyantDestructibleComponent t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(2053); // id32("Class OceanPlugin.BuoyantDestructibleComponent")
		return ptr;
	}
	uint8_t UnknownDataC40[0x10];
	ExternalPtr<struct UOceanManager> OceanManager; /* Ofs: 0xC50 Size: 0x8 - ObjectProperty OceanPlugin.BuoyantDestructibleComponent.OceanManager */
	float ChunkDensity; /* Ofs: 0xC58 Size: 0x4 - FloatProperty OceanPlugin.BuoyantDestructibleComponent.ChunkDensity */
	float FluidDensity; /* Ofs: 0xC5C Size: 0x4 - FloatProperty OceanPlugin.BuoyantDestructibleComponent.FluidDensity */
	float FluidLinearDamping; /* Ofs: 0xC60 Size: 0x4 - FloatProperty OceanPlugin.BuoyantDestructibleComponent.FluidLinearDamping */
	float FluidAngularDamping; /* Ofs: 0xC64 Size: 0x4 - FloatProperty OceanPlugin.BuoyantDestructibleComponent.FluidAngularDamping */
	FVector VelocityDamper; /* Ofs: 0xC68 Size: 0xC - StructProperty OceanPlugin.BuoyantDestructibleComponent.VelocityDamper */
	uint8_t boolFieldC74;
	uint8_t UnknownDataC75[0x3];
	float MaxUnderwaterVelocity; /* Ofs: 0xC78 Size: 0x4 - FloatProperty OceanPlugin.BuoyantDestructibleComponent.MaxUnderwaterVelocity */
	float TestPointRadius; /* Ofs: 0xC7C Size: 0x4 - FloatProperty OceanPlugin.BuoyantDestructibleComponent.TestPointRadius */
	uint8_t boolFieldC80;
	uint8_t boolFieldC81;
	uint8_t UnknownDataC82[0x2];
	float WaveForceMultiplier; /* Ofs: 0xC84 Size: 0x4 - FloatProperty OceanPlugin.BuoyantDestructibleComponent.WaveForceMultiplier */
	float ChunkSleepThreshold; /* Ofs: 0xC88 Size: 0x4 - FloatProperty OceanPlugin.BuoyantDestructibleComponent.ChunkSleepThreshold */
	float ChunkStabilizationThreshold; /* Ofs: 0xC8C Size: 0x4 - FloatProperty OceanPlugin.BuoyantDestructibleComponent.ChunkStabilizationThreshold */


	inline bool SetOceanManager(t_structHelper inst, ExternalPtr<struct UOceanManager> value) { inst.WriteOffset(0xC50, value); }
	inline bool SetChunkDensity(t_structHelper inst, float value) { inst.WriteOffset(0xC58, value); }
	inline bool SetFluidDensity(t_structHelper inst, float value) { inst.WriteOffset(0xC5C, value); }
	inline bool SetFluidLinearDamping(t_structHelper inst, float value) { inst.WriteOffset(0xC60, value); }
	inline bool SetFluidAngularDamping(t_structHelper inst, float value) { inst.WriteOffset(0xC64, value); }
	inline bool SetVelocityDamper(t_structHelper inst, FVector value) { inst.WriteOffset(0xC68, value); }
	inline bool ClampMaxVelocity()
	{
		return boolFieldC74& 0x1;
	}
	inline bool SetClampMaxVelocity(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xC74, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetMaxUnderwaterVelocity(t_structHelper inst, float value) { inst.WriteOffset(0xC78, value); }
	inline bool SetTestPointRadius(t_structHelper inst, float value) { inst.WriteOffset(0xC7C, value); }
	inline bool DrawDebugPoints()
	{
		return boolFieldC80& 0x1;
	}
	inline bool SetDrawDebugPoints(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xC80, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool EnableWaveForces()
	{
		return boolFieldC81& 0x1;
	}
	inline bool SetEnableWaveForces(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xC81, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetWaveForceMultiplier(t_structHelper inst, float value) { inst.WriteOffset(0xC84, value); }
	inline bool SetChunkSleepThreshold(t_structHelper inst, float value) { inst.WriteOffset(0xC88, value); }
	inline bool SetChunkStabilizationThreshold(t_structHelper inst, float value) { inst.WriteOffset(0xC8C, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBuoyantDestructibleComponent = sizeof(UBuoyantDestructibleComponent); // 3216
    static_assert(sizeof(UBuoyantDestructibleComponent) == 0xC90, "Size of UBuoyantDestructibleComponent is not correct.");
	auto constexpr UBuoyantDestructibleComponent_OceanManager_Offset = offsetof(UBuoyantDestructibleComponent, OceanManager);
	static_assert(UBuoyantDestructibleComponent_OceanManager_Offset == 0xc50, "UBuoyantDestructibleComponent::OceanManager offset is not c50");
	auto constexpr UBuoyantDestructibleComponent_ChunkDensity_Offset = offsetof(UBuoyantDestructibleComponent, ChunkDensity);
	static_assert(UBuoyantDestructibleComponent_ChunkDensity_Offset == 0xc58, "UBuoyantDestructibleComponent::ChunkDensity offset is not c58");
	auto constexpr UBuoyantDestructibleComponent_FluidDensity_Offset = offsetof(UBuoyantDestructibleComponent, FluidDensity);
	static_assert(UBuoyantDestructibleComponent_FluidDensity_Offset == 0xc5c, "UBuoyantDestructibleComponent::FluidDensity offset is not c5c");
	auto constexpr UBuoyantDestructibleComponent_FluidLinearDamping_Offset = offsetof(UBuoyantDestructibleComponent, FluidLinearDamping);
	static_assert(UBuoyantDestructibleComponent_FluidLinearDamping_Offset == 0xc60, "UBuoyantDestructibleComponent::FluidLinearDamping offset is not c60");
	auto constexpr UBuoyantDestructibleComponent_FluidAngularDamping_Offset = offsetof(UBuoyantDestructibleComponent, FluidAngularDamping);
	static_assert(UBuoyantDestructibleComponent_FluidAngularDamping_Offset == 0xc64, "UBuoyantDestructibleComponent::FluidAngularDamping offset is not c64");
	auto constexpr UBuoyantDestructibleComponent_VelocityDamper_Offset = offsetof(UBuoyantDestructibleComponent, VelocityDamper);
	static_assert(UBuoyantDestructibleComponent_VelocityDamper_Offset == 0xc68, "UBuoyantDestructibleComponent::VelocityDamper offset is not c68");
	auto constexpr UBuoyantDestructibleComponent_boolFieldC74_Offset = offsetof(UBuoyantDestructibleComponent, boolFieldC74);
	static_assert(UBuoyantDestructibleComponent_boolFieldC74_Offset == 0xc74, "UBuoyantDestructibleComponent::boolFieldC74 offset is not c74");
	auto constexpr UBuoyantDestructibleComponent_MaxUnderwaterVelocity_Offset = offsetof(UBuoyantDestructibleComponent, MaxUnderwaterVelocity);
	static_assert(UBuoyantDestructibleComponent_MaxUnderwaterVelocity_Offset == 0xc78, "UBuoyantDestructibleComponent::MaxUnderwaterVelocity offset is not c78");
	auto constexpr UBuoyantDestructibleComponent_TestPointRadius_Offset = offsetof(UBuoyantDestructibleComponent, TestPointRadius);
	static_assert(UBuoyantDestructibleComponent_TestPointRadius_Offset == 0xc7c, "UBuoyantDestructibleComponent::TestPointRadius offset is not c7c");
	auto constexpr UBuoyantDestructibleComponent_boolFieldC80_Offset = offsetof(UBuoyantDestructibleComponent, boolFieldC80);
	static_assert(UBuoyantDestructibleComponent_boolFieldC80_Offset == 0xc80, "UBuoyantDestructibleComponent::boolFieldC80 offset is not c80");
	auto constexpr UBuoyantDestructibleComponent_boolFieldC81_Offset = offsetof(UBuoyantDestructibleComponent, boolFieldC81);
	static_assert(UBuoyantDestructibleComponent_boolFieldC81_Offset == 0xc81, "UBuoyantDestructibleComponent::boolFieldC81 offset is not c81");
	auto constexpr UBuoyantDestructibleComponent_WaveForceMultiplier_Offset = offsetof(UBuoyantDestructibleComponent, WaveForceMultiplier);
	static_assert(UBuoyantDestructibleComponent_WaveForceMultiplier_Offset == 0xc84, "UBuoyantDestructibleComponent::WaveForceMultiplier offset is not c84");
	auto constexpr UBuoyantDestructibleComponent_ChunkSleepThreshold_Offset = offsetof(UBuoyantDestructibleComponent, ChunkSleepThreshold);
	static_assert(UBuoyantDestructibleComponent_ChunkSleepThreshold_Offset == 0xc88, "UBuoyantDestructibleComponent::ChunkSleepThreshold offset is not c88");
	auto constexpr UBuoyantDestructibleComponent_ChunkStabilizationThreshold_Offset = offsetof(UBuoyantDestructibleComponent, ChunkStabilizationThreshold);
	static_assert(UBuoyantDestructibleComponent_ChunkStabilizationThreshold_Offset == 0xc8c, "UBuoyantDestructibleComponent::ChunkStabilizationThreshold offset is not c8c");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
