#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UProceduralFoliageTile // Size: 0x160
	: public UObject // Size: 0x30
{
private:
	typedef UProceduralFoliageTile t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(399); // id32("Class Foliage.ProceduralFoliageTile")
		return ptr;
	}
	ExternalPtr<struct UProceduralFoliageSpawner> FoliageSpawner; /* Ofs: 0x30 Size: 0x8 - ObjectProperty Foliage.ProceduralFoliageTile.FoliageSpawner */
	uint8_t UnknownData38[0xA0];
	TArray<struct FProceduralFoliageInstance> InstancesArray; /* Ofs: 0xD8 Size: 0x10 - ArrayProperty Foliage.ProceduralFoliageTile.InstancesArray */
	uint8_t UnknownDataE8[0x78];


	inline bool SetFoliageSpawner(t_structHelper inst, ExternalPtr<struct UProceduralFoliageSpawner> value) { inst.WriteOffset(0x30, value); }
	inline bool SetInstancesArray(t_structHelper inst, TArray<struct FProceduralFoliageInstance> value) { inst.WriteOffset(0xD8, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUProceduralFoliageTile = sizeof(UProceduralFoliageTile); // 352
    static_assert(sizeof(UProceduralFoliageTile) == 0x160, "Size of UProceduralFoliageTile is not correct.");
	auto constexpr UProceduralFoliageTile_FoliageSpawner_Offset = offsetof(UProceduralFoliageTile, FoliageSpawner);
	static_assert(UProceduralFoliageTile_FoliageSpawner_Offset == 0x30, "UProceduralFoliageTile::FoliageSpawner offset is not 30");
	auto constexpr UProceduralFoliageTile_InstancesArray_Offset = offsetof(UProceduralFoliageTile, InstancesArray);
	static_assert(UProceduralFoliageTile_InstancesArray_Offset == 0xd8, "UProceduralFoliageTile::InstancesArray offset is not d8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
