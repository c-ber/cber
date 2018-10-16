#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UProceduralFoliageSpawner // Size: 0x78
	: public UObject // Size: 0x30
{
private:
	typedef UProceduralFoliageSpawner t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(398); // id32("Class Foliage.ProceduralFoliageSpawner")
		return ptr;
	}
	int32_t RandomSeed; /* Ofs: 0x30 Size: 0x4 - IntProperty Foliage.ProceduralFoliageSpawner.RandomSeed */
	float TileSize; /* Ofs: 0x34 Size: 0x4 - FloatProperty Foliage.ProceduralFoliageSpawner.TileSize */
	int32_t NumUniqueTiles; /* Ofs: 0x38 Size: 0x4 - IntProperty Foliage.ProceduralFoliageSpawner.NumUniqueTiles */
	float MinimumQuadTreeSize; /* Ofs: 0x3C Size: 0x4 - FloatProperty Foliage.ProceduralFoliageSpawner.MinimumQuadTreeSize */
	uint8_t UnknownData40[0x8];
	TArray<struct FFoliageTypeObject> FoliageTypes; /* Ofs: 0x48 Size: 0x10 - ArrayProperty Foliage.ProceduralFoliageSpawner.FoliageTypes */
	uint8_t boolField58;
	uint8_t UnknownData59[0x1F];


	inline bool SetRandomSeed(t_structHelper inst, int32_t value) { inst.WriteOffset(0x30, value); }
	inline bool SetTileSize(t_structHelper inst, float value) { inst.WriteOffset(0x34, value); }
	inline bool SetNumUniqueTiles(t_structHelper inst, int32_t value) { inst.WriteOffset(0x38, value); }
	inline bool SetMinimumQuadTreeSize(t_structHelper inst, float value) { inst.WriteOffset(0x3C, value); }
	inline bool SetFoliageTypes(t_structHelper inst, TArray<struct FFoliageTypeObject> value) { inst.WriteOffset(0x48, value); }
	inline bool bNeedsSimulation()
	{
		return boolField58& 0x1;
	}
	inline bool SetbNeedsSimulation(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x58, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUProceduralFoliageSpawner = sizeof(UProceduralFoliageSpawner); // 120
    static_assert(sizeof(UProceduralFoliageSpawner) == 0x78, "Size of UProceduralFoliageSpawner is not correct.");
	auto constexpr UProceduralFoliageSpawner_RandomSeed_Offset = offsetof(UProceduralFoliageSpawner, RandomSeed);
	static_assert(UProceduralFoliageSpawner_RandomSeed_Offset == 0x30, "UProceduralFoliageSpawner::RandomSeed offset is not 30");
	auto constexpr UProceduralFoliageSpawner_TileSize_Offset = offsetof(UProceduralFoliageSpawner, TileSize);
	static_assert(UProceduralFoliageSpawner_TileSize_Offset == 0x34, "UProceduralFoliageSpawner::TileSize offset is not 34");
	auto constexpr UProceduralFoliageSpawner_NumUniqueTiles_Offset = offsetof(UProceduralFoliageSpawner, NumUniqueTiles);
	static_assert(UProceduralFoliageSpawner_NumUniqueTiles_Offset == 0x38, "UProceduralFoliageSpawner::NumUniqueTiles offset is not 38");
	auto constexpr UProceduralFoliageSpawner_MinimumQuadTreeSize_Offset = offsetof(UProceduralFoliageSpawner, MinimumQuadTreeSize);
	static_assert(UProceduralFoliageSpawner_MinimumQuadTreeSize_Offset == 0x3c, "UProceduralFoliageSpawner::MinimumQuadTreeSize offset is not 3c");
	auto constexpr UProceduralFoliageSpawner_FoliageTypes_Offset = offsetof(UProceduralFoliageSpawner, FoliageTypes);
	static_assert(UProceduralFoliageSpawner_FoliageTypes_Offset == 0x48, "UProceduralFoliageSpawner::FoliageTypes offset is not 48");
	auto constexpr UProceduralFoliageSpawner_boolField58_Offset = offsetof(UProceduralFoliageSpawner, boolField58);
	static_assert(UProceduralFoliageSpawner_boolField58_Offset == 0x58, "UProceduralFoliageSpawner::boolField58 offset is not 58");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
