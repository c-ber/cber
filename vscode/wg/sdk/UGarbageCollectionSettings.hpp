#pragma once
#include "UDeveloperSettings.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UGarbageCollectionSettings // Size: 0x60
	: public UDeveloperSettings // Size: 0x40
{
private:
	typedef UGarbageCollectionSettings t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(728); // id32("Class Engine.GarbageCollectionSettings")
		return ptr;
	}
	float TimeBetweenPurgingPendingKillObjects; /* Ofs: 0x40 Size: 0x4 - FloatProperty Engine.GarbageCollectionSettings.TimeBetweenPurgingPendingKillObjects */
	uint8_t boolField44;
	uint8_t UnknownData45[0x3];
	int32_t NumRetriesBeforeForcingGC; /* Ofs: 0x48 Size: 0x4 - IntProperty Engine.GarbageCollectionSettings.NumRetriesBeforeForcingGC */
	int32_t MaxObjectsNotConsideredByGC; /* Ofs: 0x4C Size: 0x4 - IntProperty Engine.GarbageCollectionSettings.MaxObjectsNotConsideredByGC */
	int32_t SizeOfPermanentObjectPool; /* Ofs: 0x50 Size: 0x4 - IntProperty Engine.GarbageCollectionSettings.SizeOfPermanentObjectPool */
	int32_t MaxObjectsInGame; /* Ofs: 0x54 Size: 0x4 - IntProperty Engine.GarbageCollectionSettings.MaxObjectsInGame */
	int32_t MaxObjectsInEditor; /* Ofs: 0x58 Size: 0x4 - IntProperty Engine.GarbageCollectionSettings.MaxObjectsInEditor */
	uint8_t UnknownData5C[0x4];


	inline bool SetTimeBetweenPurgingPendingKillObjects(t_structHelper inst, float value) { inst.WriteOffset(0x40, value); }
	inline bool FlushStreamingOnGC()
	{
		return boolField44& 0x1;
	}
	inline bool SetFlushStreamingOnGC(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x44, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool AllowParallelGC()
	{
		return boolField44& 0x2;
	}
	inline bool SetAllowParallelGC(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x44, (uint8_t)(value ? curVal | (uint8_t)2 : curVal & ~(uint8_t)2));
	}
	inline bool CreateGCClusters()
	{
		return boolField44& 0x4;
	}
	inline bool SetCreateGCClusters(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x44, (uint8_t)(value ? curVal | (uint8_t)4 : curVal & ~(uint8_t)4));
	}
	inline bool MergeGCClusters()
	{
		return boolField44& 0x8;
	}
	inline bool SetMergeGCClusters(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x44, (uint8_t)(value ? curVal | (uint8_t)8 : curVal & ~(uint8_t)8));
	}
	inline bool ActorClusteringEnabled()
	{
		return boolField44& 0x10;
	}
	inline bool SetActorClusteringEnabled(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x44, (uint8_t)(value ? curVal | (uint8_t)16 : curVal & ~(uint8_t)16));
	}
	inline bool BlueprintClusteringEnabled()
	{
		return boolField44& 0x20;
	}
	inline bool SetBlueprintClusteringEnabled(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x44, (uint8_t)(value ? curVal | (uint8_t)32 : curVal & ~(uint8_t)32));
	}
	inline bool SetNumRetriesBeforeForcingGC(t_structHelper inst, int32_t value) { inst.WriteOffset(0x48, value); }
	inline bool SetMaxObjectsNotConsideredByGC(t_structHelper inst, int32_t value) { inst.WriteOffset(0x4C, value); }
	inline bool SetSizeOfPermanentObjectPool(t_structHelper inst, int32_t value) { inst.WriteOffset(0x50, value); }
	inline bool SetMaxObjectsInGame(t_structHelper inst, int32_t value) { inst.WriteOffset(0x54, value); }
	inline bool SetMaxObjectsInEditor(t_structHelper inst, int32_t value) { inst.WriteOffset(0x58, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUGarbageCollectionSettings = sizeof(UGarbageCollectionSettings); // 96
    static_assert(sizeof(UGarbageCollectionSettings) == 0x60, "Size of UGarbageCollectionSettings is not correct.");
	auto constexpr UGarbageCollectionSettings_TimeBetweenPurgingPendingKillObjects_Offset = offsetof(UGarbageCollectionSettings, TimeBetweenPurgingPendingKillObjects);
	static_assert(UGarbageCollectionSettings_TimeBetweenPurgingPendingKillObjects_Offset == 0x40, "UGarbageCollectionSettings::TimeBetweenPurgingPendingKillObjects offset is not 40");
	auto constexpr UGarbageCollectionSettings_boolField44_Offset = offsetof(UGarbageCollectionSettings, boolField44);
	static_assert(UGarbageCollectionSettings_boolField44_Offset == 0x44, "UGarbageCollectionSettings::boolField44 offset is not 44");
	auto constexpr UGarbageCollectionSettings_NumRetriesBeforeForcingGC_Offset = offsetof(UGarbageCollectionSettings, NumRetriesBeforeForcingGC);
	static_assert(UGarbageCollectionSettings_NumRetriesBeforeForcingGC_Offset == 0x48, "UGarbageCollectionSettings::NumRetriesBeforeForcingGC offset is not 48");
	auto constexpr UGarbageCollectionSettings_MaxObjectsNotConsideredByGC_Offset = offsetof(UGarbageCollectionSettings, MaxObjectsNotConsideredByGC);
	static_assert(UGarbageCollectionSettings_MaxObjectsNotConsideredByGC_Offset == 0x4c, "UGarbageCollectionSettings::MaxObjectsNotConsideredByGC offset is not 4c");
	auto constexpr UGarbageCollectionSettings_SizeOfPermanentObjectPool_Offset = offsetof(UGarbageCollectionSettings, SizeOfPermanentObjectPool);
	static_assert(UGarbageCollectionSettings_SizeOfPermanentObjectPool_Offset == 0x50, "UGarbageCollectionSettings::SizeOfPermanentObjectPool offset is not 50");
	auto constexpr UGarbageCollectionSettings_MaxObjectsInGame_Offset = offsetof(UGarbageCollectionSettings, MaxObjectsInGame);
	static_assert(UGarbageCollectionSettings_MaxObjectsInGame_Offset == 0x54, "UGarbageCollectionSettings::MaxObjectsInGame offset is not 54");
	auto constexpr UGarbageCollectionSettings_MaxObjectsInEditor_Offset = offsetof(UGarbageCollectionSettings, MaxObjectsInEditor);
	static_assert(UGarbageCollectionSettings_MaxObjectsInEditor_Offset == 0x58, "UGarbageCollectionSettings::MaxObjectsInEditor offset is not 58");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
