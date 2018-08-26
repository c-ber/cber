#pragma once
#include "USubThingSpawnProcessor.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UPackageSubThingSpawnProcessor // Size: 0x400
	: public USubThingSpawnProcessor // Size: 0x30
{
private:
	typedef UPackageSubThingSpawnProcessor t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1974); // id32("Class TslGame.PackageSubThingSpawnProcessor")
		return ptr;
	}
	ExternalPtr<struct UDataTable> RawItemSpawnDataTable; /* Ofs: 0x30 Size: 0x8 - ObjectProperty TslGame.PackageSubThingSpawnProcessor.RawItemSpawnDataTable */
	ExternalPtr<struct UDataTable> RawItemSpawnTogetherDataTable; /* Ofs: 0x38 Size: 0x8 - ObjectProperty TslGame.PackageSubThingSpawnProcessor.RawItemSpawnTogetherDataTable */
	TArray<struct FPackageSpotGroupProperty> RawSpotGroupProperties; /* Ofs: 0x40 Size: 0x10 - ArrayProperty TslGame.PackageSubThingSpawnProcessor.RawSpotGroupProperties */
	uint8_t UnknownData50[0x3B0];


	inline bool SetRawItemSpawnDataTable(t_structHelper inst, ExternalPtr<struct UDataTable> value) { inst.WriteOffset(0x30, value); }
	inline bool SetRawItemSpawnTogetherDataTable(t_structHelper inst, ExternalPtr<struct UDataTable> value) { inst.WriteOffset(0x38, value); }
	inline bool SetRawSpotGroupProperties(t_structHelper inst, TArray<struct FPackageSpotGroupProperty> value) { inst.WriteOffset(0x40, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUPackageSubThingSpawnProcessor = sizeof(UPackageSubThingSpawnProcessor); // 1024
    static_assert(sizeof(UPackageSubThingSpawnProcessor) == 0x400, "Size of UPackageSubThingSpawnProcessor is not correct.");
	auto constexpr UPackageSubThingSpawnProcessor_RawItemSpawnDataTable_Offset = offsetof(UPackageSubThingSpawnProcessor, RawItemSpawnDataTable);
	static_assert(UPackageSubThingSpawnProcessor_RawItemSpawnDataTable_Offset == 0x30, "UPackageSubThingSpawnProcessor::RawItemSpawnDataTable offset is not 30");
	auto constexpr UPackageSubThingSpawnProcessor_RawItemSpawnTogetherDataTable_Offset = offsetof(UPackageSubThingSpawnProcessor, RawItemSpawnTogetherDataTable);
	static_assert(UPackageSubThingSpawnProcessor_RawItemSpawnTogetherDataTable_Offset == 0x38, "UPackageSubThingSpawnProcessor::RawItemSpawnTogetherDataTable offset is not 38");
	auto constexpr UPackageSubThingSpawnProcessor_RawSpotGroupProperties_Offset = offsetof(UPackageSubThingSpawnProcessor, RawSpotGroupProperties);
	static_assert(UPackageSubThingSpawnProcessor_RawSpotGroupProperties_Offset == 0x40, "UPackageSubThingSpawnProcessor::RawSpotGroupProperties offset is not 40");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
