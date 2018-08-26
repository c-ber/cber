#pragma once
#include "USubThingSpawnProcessor.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UVehicleSubThingSpawnProcessor // Size: 0x420
	: public USubThingSpawnProcessor // Size: 0x30
{
private:
	typedef UVehicleSubThingSpawnProcessor t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1975); // id32("Class TslGame.VehicleSubThingSpawnProcessor")
		return ptr;
	}
	TArray<struct FVehicleSpotGroupProperty> RawSpotGroupProperties; /* Ofs: 0x30 Size: 0x10 - ArrayProperty TslGame.VehicleSubThingSpawnProcessor.RawSpotGroupProperties */
	ExternalPtr<struct UDataTable> RawVehicleSpawnDataTable; /* Ofs: 0x40 Size: 0x8 - ObjectProperty TslGame.VehicleSubThingSpawnProcessor.RawVehicleSpawnDataTable */
	float SpawnZOffsetFromFloor; /* Ofs: 0x48 Size: 0x4 - FloatProperty TslGame.VehicleSubThingSpawnProcessor.SpawnZOffsetFromFloor */
	uint8_t UnknownData4C[0x3D4];


	inline bool SetRawSpotGroupProperties(t_structHelper inst, TArray<struct FVehicleSpotGroupProperty> value) { inst.WriteOffset(0x30, value); }
	inline bool SetRawVehicleSpawnDataTable(t_structHelper inst, ExternalPtr<struct UDataTable> value) { inst.WriteOffset(0x40, value); }
	inline bool SetSpawnZOffsetFromFloor(t_structHelper inst, float value) { inst.WriteOffset(0x48, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUVehicleSubThingSpawnProcessor = sizeof(UVehicleSubThingSpawnProcessor); // 1056
    static_assert(sizeof(UVehicleSubThingSpawnProcessor) == 0x420, "Size of UVehicleSubThingSpawnProcessor is not correct.");
	auto constexpr UVehicleSubThingSpawnProcessor_RawSpotGroupProperties_Offset = offsetof(UVehicleSubThingSpawnProcessor, RawSpotGroupProperties);
	static_assert(UVehicleSubThingSpawnProcessor_RawSpotGroupProperties_Offset == 0x30, "UVehicleSubThingSpawnProcessor::RawSpotGroupProperties offset is not 30");
	auto constexpr UVehicleSubThingSpawnProcessor_RawVehicleSpawnDataTable_Offset = offsetof(UVehicleSubThingSpawnProcessor, RawVehicleSpawnDataTable);
	static_assert(UVehicleSubThingSpawnProcessor_RawVehicleSpawnDataTable_Offset == 0x40, "UVehicleSubThingSpawnProcessor::RawVehicleSpawnDataTable offset is not 40");
	auto constexpr UVehicleSubThingSpawnProcessor_SpawnZOffsetFromFloor_Offset = offsetof(UVehicleSubThingSpawnProcessor, SpawnZOffsetFromFloor);
	static_assert(UVehicleSubThingSpawnProcessor_SpawnZOffsetFromFloor_Offset == 0x48, "UVehicleSubThingSpawnProcessor::SpawnZOffsetFromFloor offset is not 48");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
