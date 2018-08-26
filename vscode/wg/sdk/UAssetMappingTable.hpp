#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UAssetMappingTable // Size: 0x40
	: public UObject // Size: 0x30
{
private:
	typedef UAssetMappingTable t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(282); // id32("Class Engine.AssetMappingTable")
		return ptr;
	}
	TArray<struct FAssetMapping> MappedAssets; /* Ofs: 0x30 Size: 0x10 - ArrayProperty Engine.AssetMappingTable.MappedAssets */


	inline bool SetMappedAssets(t_structHelper inst, TArray<struct FAssetMapping> value) { inst.WriteOffset(0x30, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUAssetMappingTable = sizeof(UAssetMappingTable); // 64
    static_assert(sizeof(UAssetMappingTable) == 0x40, "Size of UAssetMappingTable is not correct.");
	auto constexpr UAssetMappingTable_MappedAssets_Offset = offsetof(UAssetMappingTable, MappedAssets);
	static_assert(UAssetMappingTable_MappedAssets_Offset == 0x30, "UAssetMappingTable::MappedAssets offset is not 30");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
