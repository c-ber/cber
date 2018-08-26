#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FDataTableRowHandle // Size: 0x10
{
public:
    ExternalPtr<struct UDataTable> DataTable; /* Ofs: 0x0 Size: 0x8 ObjectProperty Engine.DataTableRowHandle.DataTable */
    FName RowName; /* Ofs: 0x8 Size: 0x8 NameProperty Engine.DataTableRowHandle.RowName */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFDataTableRowHandle = sizeof(FDataTableRowHandle); // 16
    static_assert(sizeof(FDataTableRowHandle) == 0x10, "Size of FDataTableRowHandle is not correct.");
	auto constexpr FDataTableRowHandle_DataTable_Offset = offsetof(FDataTableRowHandle, DataTable);
	static_assert(FDataTableRowHandle_DataTable_Offset == 0x0, "FDataTableRowHandle::DataTable offset is not 0");
	auto constexpr FDataTableRowHandle_RowName_Offset = offsetof(FDataTableRowHandle, RowName);
	static_assert(FDataTableRowHandle_RowName_Offset == 0x8, "FDataTableRowHandle::RowName offset is not 8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
