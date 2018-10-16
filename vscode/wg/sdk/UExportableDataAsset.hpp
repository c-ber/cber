#pragma once
#include "UDataAsset.hpp"
#include "FDirectoryPath.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UExportableDataAsset // Size: 0x58
	: public UDataAsset // Size: 0x38
{
private:
	typedef UExportableDataAsset t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1857); // id32("Class TslGame.ExportableDataAsset")
		return ptr;
	}
	FDirectoryPath JsonSaveDirectory; /* Ofs: 0x38 Size: 0x10 - StructProperty TslGame.ExportableDataAsset.JsonSaveDirectory */
	FString JsonSaveFileName; /* Ofs: 0x48 Size: 0x10 - StrProperty TslGame.ExportableDataAsset.JsonSaveFileName */


	inline bool SetJsonSaveDirectory(t_structHelper inst, FDirectoryPath value) { inst.WriteOffset(0x38, value); }
	inline bool SetJsonSaveFileName(t_structHelper inst, FString value) { inst.WriteOffset(0x48, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUExportableDataAsset = sizeof(UExportableDataAsset); // 88
    static_assert(sizeof(UExportableDataAsset) == 0x58, "Size of UExportableDataAsset is not correct.");
	auto constexpr UExportableDataAsset_JsonSaveDirectory_Offset = offsetof(UExportableDataAsset, JsonSaveDirectory);
	static_assert(UExportableDataAsset_JsonSaveDirectory_Offset == 0x38, "UExportableDataAsset::JsonSaveDirectory offset is not 38");
	auto constexpr UExportableDataAsset_JsonSaveFileName_Offset = offsetof(UExportableDataAsset, JsonSaveFileName);
	static_assert(UExportableDataAsset_JsonSaveFileName_Offset == 0x48, "UExportableDataAsset::JsonSaveFileName offset is not 48");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
