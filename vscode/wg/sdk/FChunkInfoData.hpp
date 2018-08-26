#pragma once
#include "FGuid.hpp"
#include "FSHAHashData.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FChunkInfoData // Size: 0x40
{
public:
    FGuid Guid; /* Ofs: 0x0 Size: 0x10 StructProperty BuildPatchServices.ChunkInfoData.Guid */
    uint64_t Hash; /* Ofs: 0x10 Size: 0x8 UInt64Property BuildPatchServices.ChunkInfoData.Hash */
    FSHAHashData ShaHash; /* Ofs: 0x18 Size: 0x14 StructProperty BuildPatchServices.ChunkInfoData.ShaHash */
    uint8_t UnknownData2C[0x4];
    int64_t FileSize; /* Ofs: 0x30 Size: 0x8 Int64Property BuildPatchServices.ChunkInfoData.FileSize */
    uint8_t GroupNumber; /* Ofs: 0x38 Size: 0x1 ByteProperty BuildPatchServices.ChunkInfoData.GroupNumber */
    uint8_t UnknownData39[0x7];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFChunkInfoData = sizeof(FChunkInfoData); // 64
    static_assert(sizeof(FChunkInfoData) == 0x40, "Size of FChunkInfoData is not correct.");
	auto constexpr FChunkInfoData_Guid_Offset = offsetof(FChunkInfoData, Guid);
	static_assert(FChunkInfoData_Guid_Offset == 0x0, "FChunkInfoData::Guid offset is not 0");
	auto constexpr FChunkInfoData_Hash_Offset = offsetof(FChunkInfoData, Hash);
	static_assert(FChunkInfoData_Hash_Offset == 0x10, "FChunkInfoData::Hash offset is not 10");
	auto constexpr FChunkInfoData_ShaHash_Offset = offsetof(FChunkInfoData, ShaHash);
	static_assert(FChunkInfoData_ShaHash_Offset == 0x18, "FChunkInfoData::ShaHash offset is not 18");
	auto constexpr FChunkInfoData_FileSize_Offset = offsetof(FChunkInfoData, FileSize);
	static_assert(FChunkInfoData_FileSize_Offset == 0x30, "FChunkInfoData::FileSize offset is not 30");
	auto constexpr FChunkInfoData_GroupNumber_Offset = offsetof(FChunkInfoData, GroupNumber);
	static_assert(FChunkInfoData_GroupNumber_Offset == 0x38, "FChunkInfoData::GroupNumber offset is not 38");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
