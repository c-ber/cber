#pragma once
#include "FGuid.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FChunkPartData // Size: 0x18
{
public:
    FGuid Guid; /* Ofs: 0x0 Size: 0x10 StructProperty BuildPatchServices.ChunkPartData.Guid */
    uint32_t Offset; /* Ofs: 0x10 Size: 0x4 UInt32Property BuildPatchServices.ChunkPartData.Offset */
    uint32_t Size; /* Ofs: 0x14 Size: 0x4 UInt32Property BuildPatchServices.ChunkPartData.Size */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFChunkPartData = sizeof(FChunkPartData); // 24
    static_assert(sizeof(FChunkPartData) == 0x18, "Size of FChunkPartData is not correct.");
	auto constexpr FChunkPartData_Guid_Offset = offsetof(FChunkPartData, Guid);
	static_assert(FChunkPartData_Guid_Offset == 0x0, "FChunkPartData::Guid offset is not 0");
	auto constexpr FChunkPartData_Offset_Offset = offsetof(FChunkPartData, Offset);
	static_assert(FChunkPartData_Offset_Offset == 0x10, "FChunkPartData::Offset offset is not 10");
	auto constexpr FChunkPartData_Size_Offset = offsetof(FChunkPartData, Size);
	static_assert(FChunkPartData_Size_Offset == 0x14, "FChunkPartData::Size offset is not 14");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
