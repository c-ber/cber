#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FCurveTableRowHandle // Size: 0x10
{
public:
    ExternalPtr<struct UCurveTable> CurveTable; /* Ofs: 0x0 Size: 0x8 ObjectProperty Engine.CurveTableRowHandle.CurveTable */
    FName RowName; /* Ofs: 0x8 Size: 0x8 NameProperty Engine.CurveTableRowHandle.RowName */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFCurveTableRowHandle = sizeof(FCurveTableRowHandle); // 16
    static_assert(sizeof(FCurveTableRowHandle) == 0x10, "Size of FCurveTableRowHandle is not correct.");
	auto constexpr FCurveTableRowHandle_CurveTable_Offset = offsetof(FCurveTableRowHandle, CurveTable);
	static_assert(FCurveTableRowHandle_CurveTable_Offset == 0x0, "FCurveTableRowHandle::CurveTable offset is not 0");
	auto constexpr FCurveTableRowHandle_RowName_Offset = offsetof(FCurveTableRowHandle, RowName);
	static_assert(FCurveTableRowHandle_RowName_Offset == 0x8, "FCurveTableRowHandle::RowName offset is not 8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
