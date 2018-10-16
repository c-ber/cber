#pragma once
#include "FGuid.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UClothingAssetBase // Size: 0x50
	: public UObject // Size: 0x30
{
private:
	typedef UClothingAssetBase t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(182); // id32("Class ClothingSystemRuntimeInterface.ClothingAssetBase")
		return ptr;
	}
	FString ImportedFilePath; /* Ofs: 0x30 Size: 0x10 - StrProperty ClothingSystemRuntimeInterface.ClothingAssetBase.ImportedFilePath */
	FGuid AssetGuid; /* Ofs: 0x40 Size: 0x10 - StructProperty ClothingSystemRuntimeInterface.ClothingAssetBase.AssetGuid */


	inline bool SetImportedFilePath(t_structHelper inst, FString value) { inst.WriteOffset(0x30, value); }
	inline bool SetAssetGuid(t_structHelper inst, FGuid value) { inst.WriteOffset(0x40, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUClothingAssetBase = sizeof(UClothingAssetBase); // 80
    static_assert(sizeof(UClothingAssetBase) == 0x50, "Size of UClothingAssetBase is not correct.");
	auto constexpr UClothingAssetBase_ImportedFilePath_Offset = offsetof(UClothingAssetBase, ImportedFilePath);
	static_assert(UClothingAssetBase_ImportedFilePath_Offset == 0x30, "UClothingAssetBase::ImportedFilePath offset is not 30");
	auto constexpr UClothingAssetBase_AssetGuid_Offset = offsetof(UClothingAssetBase, AssetGuid);
	static_assert(UClothingAssetBase_AssetGuid_Offset == 0x40, "UClothingAssetBase::AssetGuid offset is not 40");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
