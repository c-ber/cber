#pragma once
#include "UGeneralItemSpawner.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTableGeneralItemSpawner // Size: 0xF0
	: public UGeneralItemSpawner // Size: 0x30
{
private:
	typedef UTableGeneralItemSpawner t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1894); // id32("Class TslGame.TableGeneralItemSpawner")
		return ptr;
	}
	ExternalPtr<struct UDataTable> RawItemSpawnDataTable; /* Ofs: 0x30 Size: 0x8 - ObjectProperty TslGame.TableGeneralItemSpawner.RawItemSpawnDataTable */
	ExternalPtr<struct UDataTable> RawItemSpawnTogetherDataTable; /* Ofs: 0x38 Size: 0x8 - ObjectProperty TslGame.TableGeneralItemSpawner.RawItemSpawnTogetherDataTable */
	TArray<struct FGeneralItemSpawnProb> SpawnProbArray; /* Ofs: 0x40 Size: 0x10 - ArrayProperty TslGame.TableGeneralItemSpawner.SpawnProbArray */
	uint8_t UnknownData50[0xA0];


	inline bool SetRawItemSpawnDataTable(t_structHelper inst, ExternalPtr<struct UDataTable> value) { inst.WriteOffset(0x30, value); }
	inline bool SetRawItemSpawnTogetherDataTable(t_structHelper inst, ExternalPtr<struct UDataTable> value) { inst.WriteOffset(0x38, value); }
	inline bool SetSpawnProbArray(t_structHelper inst, TArray<struct FGeneralItemSpawnProb> value) { inst.WriteOffset(0x40, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTableGeneralItemSpawner = sizeof(UTableGeneralItemSpawner); // 240
    static_assert(sizeof(UTableGeneralItemSpawner) == 0xF0, "Size of UTableGeneralItemSpawner is not correct.");
	auto constexpr UTableGeneralItemSpawner_RawItemSpawnDataTable_Offset = offsetof(UTableGeneralItemSpawner, RawItemSpawnDataTable);
	static_assert(UTableGeneralItemSpawner_RawItemSpawnDataTable_Offset == 0x30, "UTableGeneralItemSpawner::RawItemSpawnDataTable offset is not 30");
	auto constexpr UTableGeneralItemSpawner_RawItemSpawnTogetherDataTable_Offset = offsetof(UTableGeneralItemSpawner, RawItemSpawnTogetherDataTable);
	static_assert(UTableGeneralItemSpawner_RawItemSpawnTogetherDataTable_Offset == 0x38, "UTableGeneralItemSpawner::RawItemSpawnTogetherDataTable offset is not 38");
	auto constexpr UTableGeneralItemSpawner_SpawnProbArray_Offset = offsetof(UTableGeneralItemSpawner, SpawnProbArray);
	static_assert(UTableGeneralItemSpawner_SpawnProbArray_Offset == 0x40, "UTableGeneralItemSpawner::SpawnProbArray offset is not 40");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
