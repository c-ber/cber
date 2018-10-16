#pragma once
#include "UActor.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UDeployedItemPackage // Size: 0x420
	: public UActor // Size: 0x410
{
private:
	typedef UDeployedItemPackage t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1847); // id32("Class TslGame.DeployedItemPackage")
		return ptr;
	}
//	ExternalPtr<struct UClass> ItemPackageType; /* Ofs: 0x408 Size: 0x8 - ClassProperty TslGame.DeployedItemPackage.ItemPackageType */
	TArray<struct FPackagedItemInfo> ItemInfos; /* Ofs: 0x410 Size: 0x10 - ArrayProperty TslGame.DeployedItemPackage.ItemInfos */


//	inline bool SetItemPackageType(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0x408, value); }
	inline bool SetItemInfos(t_structHelper inst, TArray<struct FPackagedItemInfo> value) { inst.WriteOffset(0x410, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUDeployedItemPackage = sizeof(UDeployedItemPackage); // 1056
    static_assert(sizeof(UDeployedItemPackage) == 0x420, "Size of UDeployedItemPackage is not correct.");
//	auto constexpr UDeployedItemPackage_ItemPackageType_Offset = offsetof(UDeployedItemPackage, ItemPackageType);
//	static_assert(UDeployedItemPackage_ItemPackageType_Offset == 0x408, "UDeployedItemPackage::ItemPackageType offset is not 408");
	auto constexpr UDeployedItemPackage_ItemInfos_Offset = offsetof(UDeployedItemPackage, ItemInfos);
	static_assert(UDeployedItemPackage_ItemInfos_Offset == 0x410, "UDeployedItemPackage::ItemInfos offset is not 410");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
