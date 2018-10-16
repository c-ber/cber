#pragma once
#include "FGuid.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FExtendedReflectionSharedCubemap // Size: 0x30
{
public:
    int32_t CubemapSize; /* Ofs: 0x0 Size: 0x4 IntProperty Engine.ExtendedReflectionSharedCubemap.CubemapSize */
    uint8_t UnknownData4[0x4];
    ExternalPtr<struct UTextureCube> SourceCube; /* Ofs: 0x8 Size: 0x8 ObjectProperty Engine.ExtendedReflectionSharedCubemap.SourceCube */
    FGuid SourceId; /* Ofs: 0x10 Size: 0x10 StructProperty Engine.ExtendedReflectionSharedCubemap.SourceId */
    TArray<uint8_t> UncompressedFullHDR; /* Ofs: 0x20 Size: 0x10 ArrayProperty Engine.ExtendedReflectionSharedCubemap.UncompressedFullHDR */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFExtendedReflectionSharedCubemap = sizeof(FExtendedReflectionSharedCubemap); // 48
    static_assert(sizeof(FExtendedReflectionSharedCubemap) == 0x30, "Size of FExtendedReflectionSharedCubemap is not correct.");
	auto constexpr FExtendedReflectionSharedCubemap_CubemapSize_Offset = offsetof(FExtendedReflectionSharedCubemap, CubemapSize);
	static_assert(FExtendedReflectionSharedCubemap_CubemapSize_Offset == 0x0, "FExtendedReflectionSharedCubemap::CubemapSize offset is not 0");
	auto constexpr FExtendedReflectionSharedCubemap_SourceCube_Offset = offsetof(FExtendedReflectionSharedCubemap, SourceCube);
	static_assert(FExtendedReflectionSharedCubemap_SourceCube_Offset == 0x8, "FExtendedReflectionSharedCubemap::SourceCube offset is not 8");
	auto constexpr FExtendedReflectionSharedCubemap_SourceId_Offset = offsetof(FExtendedReflectionSharedCubemap, SourceId);
	static_assert(FExtendedReflectionSharedCubemap_SourceId_Offset == 0x10, "FExtendedReflectionSharedCubemap::SourceId offset is not 10");
	auto constexpr FExtendedReflectionSharedCubemap_UncompressedFullHDR_Offset = offsetof(FExtendedReflectionSharedCubemap, UncompressedFullHDR);
	static_assert(FExtendedReflectionSharedCubemap_UncompressedFullHDR_Offset == 0x20, "FExtendedReflectionSharedCubemap::UncompressedFullHDR offset is not 20");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
