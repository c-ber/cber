#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FGeomSelection // Size: 0xC
{
public:
    int32_t Type; /* Ofs: 0x0 Size: 0x4 IntProperty Engine.GeomSelection.Type */
    int32_t Index; /* Ofs: 0x4 Size: 0x4 IntProperty Engine.GeomSelection.Index */
    int32_t SelectionIndex; /* Ofs: 0x8 Size: 0x4 IntProperty Engine.GeomSelection.SelectionIndex */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFGeomSelection = sizeof(FGeomSelection); // 12
    static_assert(sizeof(FGeomSelection) == 0xC, "Size of FGeomSelection is not correct.");
	auto constexpr FGeomSelection_Type_Offset = offsetof(FGeomSelection, Type);
	static_assert(FGeomSelection_Type_Offset == 0x0, "FGeomSelection::Type offset is not 0");
	auto constexpr FGeomSelection_Index_Offset = offsetof(FGeomSelection, Index);
	static_assert(FGeomSelection_Index_Offset == 0x4, "FGeomSelection::Index offset is not 4");
	auto constexpr FGeomSelection_SelectionIndex_Offset = offsetof(FGeomSelection, SelectionIndex);
	static_assert(FGeomSelection_SelectionIndex_Offset == 0x8, "FGeomSelection::SelectionIndex offset is not 8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
