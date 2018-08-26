#pragma once
#include "UItemSpawnProcessor.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) USpawnTableItemSpawnProcessor // Size: 0xF70
	: public UItemSpawnProcessor // Size: 0x40
{
private:
	typedef USpawnTableItemSpawnProcessor t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1916); // id32("Class TslGame.SpawnTableItemSpawnProcessor")
		return ptr;
	}
	TArray<struct FItemSpotGroupTypeProperty> RawSpotGroupProperties; /* Ofs: 0x40 Size: 0x10 - ArrayProperty TslGame.SpawnTableItemSpawnProcessor.RawSpotGroupProperties */
	ExternalPtr<struct UDataTable> RawItemSpawnDataTable; /* Ofs: 0x50 Size: 0x8 - ObjectProperty TslGame.SpawnTableItemSpawnProcessor.RawItemSpawnDataTable */
	ExternalPtr<struct UDataTable> RawItemSpawnTogetherDataTable; /* Ofs: 0x58 Size: 0x8 - ObjectProperty TslGame.SpawnTableItemSpawnProcessor.RawItemSpawnTogetherDataTable */
	uint8_t UnknownData60[0xEB8];
	uint8_t boolFieldF18;
	uint8_t UnknownDataF19[0x57];


	inline bool SetRawSpotGroupProperties(t_structHelper inst, TArray<struct FItemSpotGroupTypeProperty> value) { inst.WriteOffset(0x40, value); }
	inline bool SetRawItemSpawnDataTable(t_structHelper inst, ExternalPtr<struct UDataTable> value) { inst.WriteOffset(0x50, value); }
	inline bool SetRawItemSpawnTogetherDataTable(t_structHelper inst, ExternalPtr<struct UDataTable> value) { inst.WriteOffset(0x58, value); }
	inline bool bUseActorSpawn()
	{
		return boolFieldF18& 0x1;
	}
	inline bool SetbUseActorSpawn(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xF18, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUSpawnTableItemSpawnProcessor = sizeof(USpawnTableItemSpawnProcessor); // 3952
    static_assert(sizeof(USpawnTableItemSpawnProcessor) == 0xF70, "Size of USpawnTableItemSpawnProcessor is not correct.");
	auto constexpr USpawnTableItemSpawnProcessor_RawSpotGroupProperties_Offset = offsetof(USpawnTableItemSpawnProcessor, RawSpotGroupProperties);
	static_assert(USpawnTableItemSpawnProcessor_RawSpotGroupProperties_Offset == 0x40, "USpawnTableItemSpawnProcessor::RawSpotGroupProperties offset is not 40");
	auto constexpr USpawnTableItemSpawnProcessor_RawItemSpawnDataTable_Offset = offsetof(USpawnTableItemSpawnProcessor, RawItemSpawnDataTable);
	static_assert(USpawnTableItemSpawnProcessor_RawItemSpawnDataTable_Offset == 0x50, "USpawnTableItemSpawnProcessor::RawItemSpawnDataTable offset is not 50");
	auto constexpr USpawnTableItemSpawnProcessor_RawItemSpawnTogetherDataTable_Offset = offsetof(USpawnTableItemSpawnProcessor, RawItemSpawnTogetherDataTable);
	static_assert(USpawnTableItemSpawnProcessor_RawItemSpawnTogetherDataTable_Offset == 0x58, "USpawnTableItemSpawnProcessor::RawItemSpawnTogetherDataTable offset is not 58");
	auto constexpr USpawnTableItemSpawnProcessor_boolFieldF18_Offset = offsetof(USpawnTableItemSpawnProcessor, boolFieldF18);
	static_assert(USpawnTableItemSpawnProcessor_boolFieldF18_Offset == 0xf18, "USpawnTableItemSpawnProcessor::boolFieldF18 offset is not f18");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
