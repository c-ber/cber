#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FMeshSectionInfoExt // Size: 0xC
{
public:
    int32_t LODIndex; /* Ofs: 0x0 Size: 0x4 IntProperty Engine.MeshSectionInfoExt.LODIndex */
    int32_t SectionIndex; /* Ofs: 0x4 Size: 0x4 IntProperty Engine.MeshSectionInfoExt.SectionIndex */
    bool bOverrideIndoorOutdoorMask; /* Ofs: 0x8 Size: 0x1 BitMask: 01 BoolProperty Engine.MeshSectionInfoExt.bOverrideIndoorOutdoorMask */
    uint8_t IndoorOutdoorMask; /* Ofs: 0x9 Size: 0x1 ByteProperty Engine.MeshSectionInfoExt.IndoorOutdoorMask */
    uint8_t UnknownDataA[0x2];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFMeshSectionInfoExt = sizeof(FMeshSectionInfoExt); // 12
    static_assert(sizeof(FMeshSectionInfoExt) == 0xC, "Size of FMeshSectionInfoExt is not correct.");
	auto constexpr FMeshSectionInfoExt_LODIndex_Offset = offsetof(FMeshSectionInfoExt, LODIndex);
	static_assert(FMeshSectionInfoExt_LODIndex_Offset == 0x0, "FMeshSectionInfoExt::LODIndex offset is not 0");
	auto constexpr FMeshSectionInfoExt_SectionIndex_Offset = offsetof(FMeshSectionInfoExt, SectionIndex);
	static_assert(FMeshSectionInfoExt_SectionIndex_Offset == 0x4, "FMeshSectionInfoExt::SectionIndex offset is not 4");
	auto constexpr FMeshSectionInfoExt_IndoorOutdoorMask_Offset = offsetof(FMeshSectionInfoExt, IndoorOutdoorMask);
	static_assert(FMeshSectionInfoExt_IndoorOutdoorMask_Offset == 0x9, "FMeshSectionInfoExt::IndoorOutdoorMask offset is not 9");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
