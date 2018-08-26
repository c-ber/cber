#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FDropCarePackageTableData // Size: 0x8
{
public:
    int32_t DropCount; /* Ofs: 0x0 Size: 0x4 IntProperty TslGame.DropCarePackageTableData.DropCount */
    float DropPercent; /* Ofs: 0x4 Size: 0x4 FloatProperty TslGame.DropCarePackageTableData.DropPercent */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFDropCarePackageTableData = sizeof(FDropCarePackageTableData); // 8
    static_assert(sizeof(FDropCarePackageTableData) == 0x8, "Size of FDropCarePackageTableData is not correct.");
	auto constexpr FDropCarePackageTableData_DropCount_Offset = offsetof(FDropCarePackageTableData, DropCount);
	static_assert(FDropCarePackageTableData_DropCount_Offset == 0x0, "FDropCarePackageTableData::DropCount offset is not 0");
	auto constexpr FDropCarePackageTableData_DropPercent_Offset = offsetof(FDropCarePackageTableData, DropPercent);
	static_assert(FDropCarePackageTableData_DropPercent_Offset == 0x4, "FDropCarePackageTableData::DropPercent offset is not 4");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
