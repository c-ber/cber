#pragma once
#include "UActor.hpp"
#include "FVector2D.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UOceanManager // Size: 0x490
	: public UActor // Size: 0x410
{
private:
	typedef UOceanManager t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(2050); // id32("Class OceanPlugin.OceanManager")
		return ptr;
	}
//	uint8_t boolField408;
//	FVector2D GlobalWaveDirection; /* Ofs: 0x40C Size: 0x8 - StructProperty OceanPlugin.OceanManager.GlobalWaveDirection */
	uint8_t UnknownData410[0x4];
	float GlobalWaveSpeed; /* Ofs: 0x414 Size: 0x4 - FloatProperty OceanPlugin.OceanManager.GlobalWaveSpeed */
	float GlobalWaveAmplitude; /* Ofs: 0x418 Size: 0x4 - FloatProperty OceanPlugin.OceanManager.GlobalWaveAmplitude */
	float DistanceCheck; /* Ofs: 0x41C Size: 0x4 - FloatProperty OceanPlugin.OceanManager.DistanceCheck */
	TArray<struct FWaveParameter> WaveClusters; /* Ofs: 0x420 Size: 0x10 - ArrayProperty OceanPlugin.OceanManager.WaveClusters */
	TArray<struct FWaveSetParameters> WaveSetOffsetsOverride; /* Ofs: 0x430 Size: 0x10 - ArrayProperty OceanPlugin.OceanManager.WaveSetOffsetsOverride */
	float NetWorkTimeOffset; /* Ofs: 0x440 Size: 0x4 - FloatProperty OceanPlugin.OceanManager.NetWorkTimeOffset */
	uint8_t boolField444;
	uint8_t UnknownData445[0x3];
	float ModulationStartHeight; /* Ofs: 0x448 Size: 0x4 - FloatProperty OceanPlugin.OceanManager.ModulationStartHeight */
	float ModulationMaxHeight; /* Ofs: 0x44C Size: 0x4 - FloatProperty OceanPlugin.OceanManager.ModulationMaxHeight */
	float ModulationPower; /* Ofs: 0x450 Size: 0x4 - FloatProperty OceanPlugin.OceanManager.ModulationPower */
	uint8_t UnknownData454[0x4];
	ExternalPtr<struct ULandscape> Landscape; /* Ofs: 0x458 Size: 0x8 - ObjectProperty OceanPlugin.OceanManager.Landscape */
	ExternalPtr<struct UTexture2D> HeightmapTexture; /* Ofs: 0x460 Size: 0x8 - ObjectProperty OceanPlugin.OceanManager.HeightmapTexture */
	uint8_t UnknownData468[0x28];


//	inline bool SetGlobalWaveDirection(t_structHelper inst, FVector2D value) { inst.WriteOffset(0x40C, value); }
	inline bool SetGlobalWaveSpeed(t_structHelper inst, float value) { inst.WriteOffset(0x414, value); }
	inline bool SetGlobalWaveAmplitude(t_structHelper inst, float value) { inst.WriteOffset(0x418, value); }
	inline bool SetDistanceCheck(t_structHelper inst, float value) { inst.WriteOffset(0x41C, value); }
	inline bool SetWaveClusters(t_structHelper inst, TArray<struct FWaveParameter> value) { inst.WriteOffset(0x420, value); }
	inline bool SetWaveSetOffsetsOverride(t_structHelper inst, TArray<struct FWaveSetParameters> value) { inst.WriteOffset(0x430, value); }
	inline bool SetNetWorkTimeOffset(t_structHelper inst, float value) { inst.WriteOffset(0x440, value); }
	inline bool bEnableLandscapeModulation()
	{
		return boolField444& 0x1;
	}
	inline bool SetbEnableLandscapeModulation(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x444, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetModulationStartHeight(t_structHelper inst, float value) { inst.WriteOffset(0x448, value); }
	inline bool SetModulationMaxHeight(t_structHelper inst, float value) { inst.WriteOffset(0x44C, value); }
	inline bool SetModulationPower(t_structHelper inst, float value) { inst.WriteOffset(0x450, value); }
	inline bool SetLandscape(t_structHelper inst, ExternalPtr<struct ULandscape> value) { inst.WriteOffset(0x458, value); }
	inline bool SetHeightmapTexture(t_structHelper inst, ExternalPtr<struct UTexture2D> value) { inst.WriteOffset(0x460, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUOceanManager = sizeof(UOceanManager); // 1168
    static_assert(sizeof(UOceanManager) == 0x490, "Size of UOceanManager is not correct.");
//	auto constexpr UOceanManager_boolField408_Offset = offsetof(UOceanManager, boolField408);
//	static_assert(UOceanManager_boolField408_Offset == 0x408, "UOceanManager::boolField408 offset is not 408");
//	auto constexpr UOceanManager_GlobalWaveDirection_Offset = offsetof(UOceanManager, GlobalWaveDirection);
//	static_assert(UOceanManager_GlobalWaveDirection_Offset == 0x40c, "UOceanManager::GlobalWaveDirection offset is not 40c");
	auto constexpr UOceanManager_GlobalWaveSpeed_Offset = offsetof(UOceanManager, GlobalWaveSpeed);
	static_assert(UOceanManager_GlobalWaveSpeed_Offset == 0x414, "UOceanManager::GlobalWaveSpeed offset is not 414");
	auto constexpr UOceanManager_GlobalWaveAmplitude_Offset = offsetof(UOceanManager, GlobalWaveAmplitude);
	static_assert(UOceanManager_GlobalWaveAmplitude_Offset == 0x418, "UOceanManager::GlobalWaveAmplitude offset is not 418");
	auto constexpr UOceanManager_DistanceCheck_Offset = offsetof(UOceanManager, DistanceCheck);
	static_assert(UOceanManager_DistanceCheck_Offset == 0x41c, "UOceanManager::DistanceCheck offset is not 41c");
	auto constexpr UOceanManager_WaveClusters_Offset = offsetof(UOceanManager, WaveClusters);
	static_assert(UOceanManager_WaveClusters_Offset == 0x420, "UOceanManager::WaveClusters offset is not 420");
	auto constexpr UOceanManager_WaveSetOffsetsOverride_Offset = offsetof(UOceanManager, WaveSetOffsetsOverride);
	static_assert(UOceanManager_WaveSetOffsetsOverride_Offset == 0x430, "UOceanManager::WaveSetOffsetsOverride offset is not 430");
	auto constexpr UOceanManager_NetWorkTimeOffset_Offset = offsetof(UOceanManager, NetWorkTimeOffset);
	static_assert(UOceanManager_NetWorkTimeOffset_Offset == 0x440, "UOceanManager::NetWorkTimeOffset offset is not 440");
	auto constexpr UOceanManager_boolField444_Offset = offsetof(UOceanManager, boolField444);
	static_assert(UOceanManager_boolField444_Offset == 0x444, "UOceanManager::boolField444 offset is not 444");
	auto constexpr UOceanManager_ModulationStartHeight_Offset = offsetof(UOceanManager, ModulationStartHeight);
	static_assert(UOceanManager_ModulationStartHeight_Offset == 0x448, "UOceanManager::ModulationStartHeight offset is not 448");
	auto constexpr UOceanManager_ModulationMaxHeight_Offset = offsetof(UOceanManager, ModulationMaxHeight);
	static_assert(UOceanManager_ModulationMaxHeight_Offset == 0x44c, "UOceanManager::ModulationMaxHeight offset is not 44c");
	auto constexpr UOceanManager_ModulationPower_Offset = offsetof(UOceanManager, ModulationPower);
	static_assert(UOceanManager_ModulationPower_Offset == 0x450, "UOceanManager::ModulationPower offset is not 450");
	auto constexpr UOceanManager_Landscape_Offset = offsetof(UOceanManager, Landscape);
	static_assert(UOceanManager_Landscape_Offset == 0x458, "UOceanManager::Landscape offset is not 458");
	auto constexpr UOceanManager_HeightmapTexture_Offset = offsetof(UOceanManager, HeightmapTexture);
	static_assert(UOceanManager_HeightmapTexture_Offset == 0x460, "UOceanManager::HeightmapTexture offset is not 460");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
