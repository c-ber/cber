#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FMeshSectionInfoDataBase // Size: 0x50
{
public:
    TMap<struct FString, struct FMeshSectionInfoMap> Map; /* Ofs: 0x0 Size: 0x50 MapProperty Engine.MeshSectionInfoDataBase.Map */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFMeshSectionInfoDataBase = sizeof(FMeshSectionInfoDataBase); // 80
    static_assert(sizeof(FMeshSectionInfoDataBase) == 0x50, "Size of FMeshSectionInfoDataBase is not correct.");
	auto constexpr FMeshSectionInfoDataBase_Map_Offset = offsetof(FMeshSectionInfoDataBase, Map);
	static_assert(FMeshSectionInfoDataBase_Map_Offset == 0x0, "FMeshSectionInfoDataBase::Map offset is not 0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
