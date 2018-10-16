#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FDataTableCategoryHandle // Size: 0x18
{
public:
    ExternalPtr<struct UDataTable> DataTable; /* Ofs: 0x0 Size: 0x8 ObjectProperty Engine.DataTableCategoryHandle.DataTable */
    FName ColumnName; /* Ofs: 0x8 Size: 0x8 NameProperty Engine.DataTableCategoryHandle.ColumnName */
    FName RowContents; /* Ofs: 0x10 Size: 0x8 NameProperty Engine.DataTableCategoryHandle.RowContents */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFDataTableCategoryHandle = sizeof(FDataTableCategoryHandle); // 24
    static_assert(sizeof(FDataTableCategoryHandle) == 0x18, "Size of FDataTableCategoryHandle is not correct.");
	auto constexpr FDataTableCategoryHandle_DataTable_Offset = offsetof(FDataTableCategoryHandle, DataTable);
	static_assert(FDataTableCategoryHandle_DataTable_Offset == 0x0, "FDataTableCategoryHandle::DataTable offset is not 0");
	auto constexpr FDataTableCategoryHandle_ColumnName_Offset = offsetof(FDataTableCategoryHandle, ColumnName);
	static_assert(FDataTableCategoryHandle_ColumnName_Offset == 0x8, "FDataTableCategoryHandle::ColumnName offset is not 8");
	auto constexpr FDataTableCategoryHandle_RowContents_Offset = offsetof(FDataTableCategoryHandle, RowContents);
	static_assert(FDataTableCategoryHandle_RowContents_Offset == 0x10, "FDataTableCategoryHandle::RowContents offset is not 10");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
