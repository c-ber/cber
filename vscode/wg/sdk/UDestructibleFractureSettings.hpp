#pragma once
#include "FFractureMaterial.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UDestructibleFractureSettings // Size: 0xC0
	: public UObject // Size: 0x30
{
private:
	typedef UDestructibleFractureSettings t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(722); // id32("Class Engine.DestructibleFractureSettings")
		return ptr;
	}
	int32_t CellSiteCount; /* Ofs: 0x30 Size: 0x4 - IntProperty Engine.DestructibleFractureSettings.CellSiteCount */
	FFractureMaterial FractureMaterialDesc; /* Ofs: 0x34 Size: 0x24 - StructProperty Engine.DestructibleFractureSettings.FractureMaterialDesc */
	int32_t RandomSeed; /* Ofs: 0x58 Size: 0x4 - IntProperty Engine.DestructibleFractureSettings.RandomSeed */
	uint8_t UnknownData5C[0x4];
	TArray<struct FVector> VoronoiSites; /* Ofs: 0x60 Size: 0x10 - ArrayProperty Engine.DestructibleFractureSettings.VoronoiSites */
	int32_t OriginalSubmeshCount; /* Ofs: 0x70 Size: 0x4 - IntProperty Engine.DestructibleFractureSettings.OriginalSubmeshCount */
	uint8_t UnknownData74[0x4];
	TArray<ExternalPtr<struct UMaterialInterface>> Materials; /* Ofs: 0x78 Size: 0x10 - ArrayProperty Engine.DestructibleFractureSettings.Materials */
	TArray<struct FDestructibleChunkParameters> ChunkParameters; /* Ofs: 0x88 Size: 0x10 - ArrayProperty Engine.DestructibleFractureSettings.ChunkParameters */
	uint8_t UnknownData98[0x28];


	inline bool SetCellSiteCount(t_structHelper inst, int32_t value) { inst.WriteOffset(0x30, value); }
	inline bool SetFractureMaterialDesc(t_structHelper inst, FFractureMaterial value) { inst.WriteOffset(0x34, value); }
	inline bool SetRandomSeed(t_structHelper inst, int32_t value) { inst.WriteOffset(0x58, value); }
	inline bool SetVoronoiSites(t_structHelper inst, TArray<struct FVector> value) { inst.WriteOffset(0x60, value); }
	inline bool SetOriginalSubmeshCount(t_structHelper inst, int32_t value) { inst.WriteOffset(0x70, value); }
	inline bool SetMaterials(t_structHelper inst, TArray<ExternalPtr<struct UMaterialInterface>> value) { inst.WriteOffset(0x78, value); }
	inline bool SetChunkParameters(t_structHelper inst, TArray<struct FDestructibleChunkParameters> value) { inst.WriteOffset(0x88, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUDestructibleFractureSettings = sizeof(UDestructibleFractureSettings); // 192
    static_assert(sizeof(UDestructibleFractureSettings) == 0xC0, "Size of UDestructibleFractureSettings is not correct.");
	auto constexpr UDestructibleFractureSettings_CellSiteCount_Offset = offsetof(UDestructibleFractureSettings, CellSiteCount);
	static_assert(UDestructibleFractureSettings_CellSiteCount_Offset == 0x30, "UDestructibleFractureSettings::CellSiteCount offset is not 30");
	auto constexpr UDestructibleFractureSettings_FractureMaterialDesc_Offset = offsetof(UDestructibleFractureSettings, FractureMaterialDesc);
	static_assert(UDestructibleFractureSettings_FractureMaterialDesc_Offset == 0x34, "UDestructibleFractureSettings::FractureMaterialDesc offset is not 34");
	auto constexpr UDestructibleFractureSettings_RandomSeed_Offset = offsetof(UDestructibleFractureSettings, RandomSeed);
	static_assert(UDestructibleFractureSettings_RandomSeed_Offset == 0x58, "UDestructibleFractureSettings::RandomSeed offset is not 58");
	auto constexpr UDestructibleFractureSettings_VoronoiSites_Offset = offsetof(UDestructibleFractureSettings, VoronoiSites);
	static_assert(UDestructibleFractureSettings_VoronoiSites_Offset == 0x60, "UDestructibleFractureSettings::VoronoiSites offset is not 60");
	auto constexpr UDestructibleFractureSettings_OriginalSubmeshCount_Offset = offsetof(UDestructibleFractureSettings, OriginalSubmeshCount);
	static_assert(UDestructibleFractureSettings_OriginalSubmeshCount_Offset == 0x70, "UDestructibleFractureSettings::OriginalSubmeshCount offset is not 70");
	auto constexpr UDestructibleFractureSettings_Materials_Offset = offsetof(UDestructibleFractureSettings, Materials);
	static_assert(UDestructibleFractureSettings_Materials_Offset == 0x78, "UDestructibleFractureSettings::Materials offset is not 78");
	auto constexpr UDestructibleFractureSettings_ChunkParameters_Offset = offsetof(UDestructibleFractureSettings, ChunkParameters);
	static_assert(UDestructibleFractureSettings_ChunkParameters_Offset == 0x88, "UDestructibleFractureSettings::ChunkParameters offset is not 88");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
