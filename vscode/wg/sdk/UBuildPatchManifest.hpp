#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBuildPatchManifest // Size: 0xD8
	: public UObject // Size: 0x30
{
private:
	typedef UBuildPatchManifest t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1823); // id32("Class BuildPatchServices.BuildPatchManifest")
		return ptr;
	}
	uint8_t ManifestFileVersion; /* Ofs: 0x30 Size: 0x1 - ByteProperty BuildPatchServices.BuildPatchManifest.ManifestFileVersion */
	uint8_t boolField31;
	uint8_t UnknownData32[0x2];
	uint32_t AppID; /* Ofs: 0x34 Size: 0x4 - UInt32Property BuildPatchServices.BuildPatchManifest.AppID */
	FString AppName; /* Ofs: 0x38 Size: 0x10 - StrProperty BuildPatchServices.BuildPatchManifest.AppName */
	FString BuildVersion; /* Ofs: 0x48 Size: 0x10 - StrProperty BuildPatchServices.BuildPatchManifest.BuildVersion */
	FString LaunchExe; /* Ofs: 0x58 Size: 0x10 - StrProperty BuildPatchServices.BuildPatchManifest.LaunchExe */
	FString LaunchCommand; /* Ofs: 0x68 Size: 0x10 - StrProperty BuildPatchServices.BuildPatchManifest.LaunchCommand */
	FString PrereqName; /* Ofs: 0x78 Size: 0x10 - StrProperty BuildPatchServices.BuildPatchManifest.PrereqName */
	FString PrereqPath; /* Ofs: 0x88 Size: 0x10 - StrProperty BuildPatchServices.BuildPatchManifest.PrereqPath */
	FString PrereqArgs; /* Ofs: 0x98 Size: 0x10 - StrProperty BuildPatchServices.BuildPatchManifest.PrereqArgs */
	TArray<struct FFileManifestData> FileManifestList; /* Ofs: 0xA8 Size: 0x10 - ArrayProperty BuildPatchServices.BuildPatchManifest.FileManifestList */
	TArray<struct FChunkInfoData> ChunkList; /* Ofs: 0xB8 Size: 0x10 - ArrayProperty BuildPatchServices.BuildPatchManifest.ChunkList */
	TArray<struct FCustomFieldData> CustomFields; /* Ofs: 0xC8 Size: 0x10 - ArrayProperty BuildPatchServices.BuildPatchManifest.CustomFields */


	inline bool SetManifestFileVersion(t_structHelper inst, uint8_t value) { inst.WriteOffset(0x30, value); }
	inline bool bIsFileData()
	{
		return boolField31& 0x1;
	}
	inline bool SetbIsFileData(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x31, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetAppID(t_structHelper inst, uint32_t value) { inst.WriteOffset(0x34, value); }
	inline bool SetAppName(t_structHelper inst, FString value) { inst.WriteOffset(0x38, value); }
	inline bool SetBuildVersion(t_structHelper inst, FString value) { inst.WriteOffset(0x48, value); }
	inline bool SetLaunchExe(t_structHelper inst, FString value) { inst.WriteOffset(0x58, value); }
	inline bool SetLaunchCommand(t_structHelper inst, FString value) { inst.WriteOffset(0x68, value); }
	inline bool SetPrereqName(t_structHelper inst, FString value) { inst.WriteOffset(0x78, value); }
	inline bool SetPrereqPath(t_structHelper inst, FString value) { inst.WriteOffset(0x88, value); }
	inline bool SetPrereqArgs(t_structHelper inst, FString value) { inst.WriteOffset(0x98, value); }
	inline bool SetFileManifestList(t_structHelper inst, TArray<struct FFileManifestData> value) { inst.WriteOffset(0xA8, value); }
	inline bool SetChunkList(t_structHelper inst, TArray<struct FChunkInfoData> value) { inst.WriteOffset(0xB8, value); }
	inline bool SetCustomFields(t_structHelper inst, TArray<struct FCustomFieldData> value) { inst.WriteOffset(0xC8, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBuildPatchManifest = sizeof(UBuildPatchManifest); // 216
    static_assert(sizeof(UBuildPatchManifest) == 0xD8, "Size of UBuildPatchManifest is not correct.");
	auto constexpr UBuildPatchManifest_ManifestFileVersion_Offset = offsetof(UBuildPatchManifest, ManifestFileVersion);
	static_assert(UBuildPatchManifest_ManifestFileVersion_Offset == 0x30, "UBuildPatchManifest::ManifestFileVersion offset is not 30");
	auto constexpr UBuildPatchManifest_boolField31_Offset = offsetof(UBuildPatchManifest, boolField31);
	static_assert(UBuildPatchManifest_boolField31_Offset == 0x31, "UBuildPatchManifest::boolField31 offset is not 31");
	auto constexpr UBuildPatchManifest_AppID_Offset = offsetof(UBuildPatchManifest, AppID);
	static_assert(UBuildPatchManifest_AppID_Offset == 0x34, "UBuildPatchManifest::AppID offset is not 34");
	auto constexpr UBuildPatchManifest_AppName_Offset = offsetof(UBuildPatchManifest, AppName);
	static_assert(UBuildPatchManifest_AppName_Offset == 0x38, "UBuildPatchManifest::AppName offset is not 38");
	auto constexpr UBuildPatchManifest_BuildVersion_Offset = offsetof(UBuildPatchManifest, BuildVersion);
	static_assert(UBuildPatchManifest_BuildVersion_Offset == 0x48, "UBuildPatchManifest::BuildVersion offset is not 48");
	auto constexpr UBuildPatchManifest_LaunchExe_Offset = offsetof(UBuildPatchManifest, LaunchExe);
	static_assert(UBuildPatchManifest_LaunchExe_Offset == 0x58, "UBuildPatchManifest::LaunchExe offset is not 58");
	auto constexpr UBuildPatchManifest_LaunchCommand_Offset = offsetof(UBuildPatchManifest, LaunchCommand);
	static_assert(UBuildPatchManifest_LaunchCommand_Offset == 0x68, "UBuildPatchManifest::LaunchCommand offset is not 68");
	auto constexpr UBuildPatchManifest_PrereqName_Offset = offsetof(UBuildPatchManifest, PrereqName);
	static_assert(UBuildPatchManifest_PrereqName_Offset == 0x78, "UBuildPatchManifest::PrereqName offset is not 78");
	auto constexpr UBuildPatchManifest_PrereqPath_Offset = offsetof(UBuildPatchManifest, PrereqPath);
	static_assert(UBuildPatchManifest_PrereqPath_Offset == 0x88, "UBuildPatchManifest::PrereqPath offset is not 88");
	auto constexpr UBuildPatchManifest_PrereqArgs_Offset = offsetof(UBuildPatchManifest, PrereqArgs);
	static_assert(UBuildPatchManifest_PrereqArgs_Offset == 0x98, "UBuildPatchManifest::PrereqArgs offset is not 98");
	auto constexpr UBuildPatchManifest_FileManifestList_Offset = offsetof(UBuildPatchManifest, FileManifestList);
	static_assert(UBuildPatchManifest_FileManifestList_Offset == 0xa8, "UBuildPatchManifest::FileManifestList offset is not a8");
	auto constexpr UBuildPatchManifest_ChunkList_Offset = offsetof(UBuildPatchManifest, ChunkList);
	static_assert(UBuildPatchManifest_ChunkList_Offset == 0xb8, "UBuildPatchManifest::ChunkList offset is not b8");
	auto constexpr UBuildPatchManifest_CustomFields_Offset = offsetof(UBuildPatchManifest, CustomFields);
	static_assert(UBuildPatchManifest_CustomFields_Offset == 0xc8, "UBuildPatchManifest::CustomFields offset is not c8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
