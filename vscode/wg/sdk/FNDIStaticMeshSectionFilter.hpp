#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FNDIStaticMeshSectionFilter // Size: 0x68
{
public:
    TArray<int32_t> AllowedMaterialSlots; /* Ofs: 0x0 Size: 0x10 ArrayProperty Niagara.NDIStaticMeshSectionFilter.AllowedMaterialSlots */
    uint8_t UnknownData10[0x58];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFNDIStaticMeshSectionFilter = sizeof(FNDIStaticMeshSectionFilter); // 104
    static_assert(sizeof(FNDIStaticMeshSectionFilter) == 0x68, "Size of FNDIStaticMeshSectionFilter is not correct.");
	auto constexpr FNDIStaticMeshSectionFilter_AllowedMaterialSlots_Offset = offsetof(FNDIStaticMeshSectionFilter, AllowedMaterialSlots);
	static_assert(FNDIStaticMeshSectionFilter_AllowedMaterialSlots_Offset == 0x0, "FNDIStaticMeshSectionFilter::AllowedMaterialSlots offset is not 0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
