#pragma once
#include "UActorComponent.hpp"
#include "FGuid.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UProceduralFoliageComponent // Size: 0x210
	: public UActorComponent // Size: 0x1F0
{
private:
	typedef UProceduralFoliageComponent t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(397); // id32("Class Foliage.ProceduralFoliageComponent")
		return ptr;
	}
//	ExternalPtr<struct UProceduralFoliageSpawner> FoliageSpawner; /* Ofs: 0x1E8 Size: 0x8 - ObjectProperty Foliage.ProceduralFoliageComponent.FoliageSpawner */
	float TileOverlap; /* Ofs: 0x1F0 Size: 0x4 - FloatProperty Foliage.ProceduralFoliageComponent.TileOverlap */
	uint8_t UnknownData1F4[0x4];
	ExternalPtr<struct UVolume> SpawningVolume; /* Ofs: 0x1F8 Size: 0x8 - ObjectProperty Foliage.ProceduralFoliageComponent.SpawningVolume */
	FGuid ProceduralGuid; /* Ofs: 0x200 Size: 0x10 - StructProperty Foliage.ProceduralFoliageComponent.ProceduralGuid */


//	inline bool SetFoliageSpawner(t_structHelper inst, ExternalPtr<struct UProceduralFoliageSpawner> value) { inst.WriteOffset(0x1E8, value); }
	inline bool SetTileOverlap(t_structHelper inst, float value) { inst.WriteOffset(0x1F0, value); }
	inline bool SetSpawningVolume(t_structHelper inst, ExternalPtr<struct UVolume> value) { inst.WriteOffset(0x1F8, value); }
	inline bool SetProceduralGuid(t_structHelper inst, FGuid value) { inst.WriteOffset(0x200, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUProceduralFoliageComponent = sizeof(UProceduralFoliageComponent); // 528
    static_assert(sizeof(UProceduralFoliageComponent) == 0x210, "Size of UProceduralFoliageComponent is not correct.");
//	auto constexpr UProceduralFoliageComponent_FoliageSpawner_Offset = offsetof(UProceduralFoliageComponent, FoliageSpawner);
//	static_assert(UProceduralFoliageComponent_FoliageSpawner_Offset == 0x1e8, "UProceduralFoliageComponent::FoliageSpawner offset is not 1e8");
	auto constexpr UProceduralFoliageComponent_TileOverlap_Offset = offsetof(UProceduralFoliageComponent, TileOverlap);
	static_assert(UProceduralFoliageComponent_TileOverlap_Offset == 0x1f0, "UProceduralFoliageComponent::TileOverlap offset is not 1f0");
	auto constexpr UProceduralFoliageComponent_SpawningVolume_Offset = offsetof(UProceduralFoliageComponent, SpawningVolume);
	static_assert(UProceduralFoliageComponent_SpawningVolume_Offset == 0x1f8, "UProceduralFoliageComponent::SpawningVolume offset is not 1f8");
	auto constexpr UProceduralFoliageComponent_ProceduralGuid_Offset = offsetof(UProceduralFoliageComponent, ProceduralGuid);
	static_assert(UProceduralFoliageComponent_ProceduralGuid_Offset == 0x200, "UProceduralFoliageComponent::ProceduralGuid offset is not 200");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
