#pragma once
#include "FSHAHashData.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FFileManifestData // Size: 0x70
{
public:
    FString Filename; /* Ofs: 0x0 Size: 0x10 StrProperty BuildPatchServices.FileManifestData.Filename */
    FSHAHashData FileHash; /* Ofs: 0x10 Size: 0x14 StructProperty BuildPatchServices.FileManifestData.FileHash */
    uint8_t UnknownData24[0x4];
    TArray<struct FChunkPartData> FileChunkParts; /* Ofs: 0x28 Size: 0x10 ArrayProperty BuildPatchServices.FileManifestData.FileChunkParts */
    TArray<struct FString> InstallTags; /* Ofs: 0x38 Size: 0x10 ArrayProperty BuildPatchServices.FileManifestData.InstallTags */
    bool bIsUnixExecutable; /* Ofs: 0x48 Size: 0x1 BitMask: 01 BoolProperty BuildPatchServices.FileManifestData.bIsUnixExecutable */
    uint8_t UnknownData49[0x7];
    FString SymlinkTarget; /* Ofs: 0x50 Size: 0x10 StrProperty BuildPatchServices.FileManifestData.SymlinkTarget */
    bool bIsReadOnly; /* Ofs: 0x60 Size: 0x1 BitMask: 01 BoolProperty BuildPatchServices.FileManifestData.bIsReadOnly */
    bool bIsCompressed; /* Ofs: 0x61 Size: 0x1 BitMask: 01 BoolProperty BuildPatchServices.FileManifestData.bIsCompressed */
    uint8_t UnknownData62[0xE];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFFileManifestData = sizeof(FFileManifestData); // 112
    static_assert(sizeof(FFileManifestData) == 0x70, "Size of FFileManifestData is not correct.");
	auto constexpr FFileManifestData_Filename_Offset = offsetof(FFileManifestData, Filename);
	static_assert(FFileManifestData_Filename_Offset == 0x0, "FFileManifestData::Filename offset is not 0");
	auto constexpr FFileManifestData_FileHash_Offset = offsetof(FFileManifestData, FileHash);
	static_assert(FFileManifestData_FileHash_Offset == 0x10, "FFileManifestData::FileHash offset is not 10");
	auto constexpr FFileManifestData_FileChunkParts_Offset = offsetof(FFileManifestData, FileChunkParts);
	static_assert(FFileManifestData_FileChunkParts_Offset == 0x28, "FFileManifestData::FileChunkParts offset is not 28");
	auto constexpr FFileManifestData_InstallTags_Offset = offsetof(FFileManifestData, InstallTags);
	static_assert(FFileManifestData_InstallTags_Offset == 0x38, "FFileManifestData::InstallTags offset is not 38");
	auto constexpr FFileManifestData_SymlinkTarget_Offset = offsetof(FFileManifestData, SymlinkTarget);
	static_assert(FFileManifestData_SymlinkTarget_Offset == 0x50, "FFileManifestData::SymlinkTarget offset is not 50");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
