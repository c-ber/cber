#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FMeshSectionInfoMap // Size: 0x50
{
public:
    TMap<uint32_t, struct FMeshSectionInfo> Map; /* Ofs: 0x0 Size: 0x50 MapProperty Engine.MeshSectionInfoMap.Map */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFMeshSectionInfoMap = sizeof(FMeshSectionInfoMap); // 80
    static_assert(sizeof(FMeshSectionInfoMap) == 0x50, "Size of FMeshSectionInfoMap is not correct.");
	auto constexpr FMeshSectionInfoMap_Map_Offset = offsetof(FMeshSectionInfoMap, Map);
	static_assert(FMeshSectionInfoMap_Map_Offset == 0x0, "FMeshSectionInfoMap::Map offset is not 0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
