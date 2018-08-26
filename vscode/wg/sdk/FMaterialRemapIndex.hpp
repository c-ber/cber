#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FMaterialRemapIndex // Size: 0x18
{
public:
    uint32_t ImportVersionKey; /* Ofs: 0x0 Size: 0x4 UInt32Property Engine.MaterialRemapIndex.ImportVersionKey */
    uint8_t UnknownData4[0x4];
    TArray<int32_t> MaterialRemap; /* Ofs: 0x8 Size: 0x10 ArrayProperty Engine.MaterialRemapIndex.MaterialRemap */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFMaterialRemapIndex = sizeof(FMaterialRemapIndex); // 24
    static_assert(sizeof(FMaterialRemapIndex) == 0x18, "Size of FMaterialRemapIndex is not correct.");
	auto constexpr FMaterialRemapIndex_ImportVersionKey_Offset = offsetof(FMaterialRemapIndex, ImportVersionKey);
	static_assert(FMaterialRemapIndex_ImportVersionKey_Offset == 0x0, "FMaterialRemapIndex::ImportVersionKey offset is not 0");
	auto constexpr FMaterialRemapIndex_MaterialRemap_Offset = offsetof(FMaterialRemapIndex, MaterialRemap);
	static_assert(FMaterialRemapIndex_MaterialRemap_Offset == 0x8, "FMaterialRemapIndex::MaterialRemap offset is not 8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
