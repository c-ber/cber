#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FDistributionLookupTable // Size: 0x28
{
public:
    uint8_t Op; /* Ofs: 0x0 Size: 0x1 ByteProperty Engine.DistributionLookupTable.Op */
    uint8_t EntryCount; /* Ofs: 0x1 Size: 0x1 ByteProperty Engine.DistributionLookupTable.EntryCount */
    uint8_t EntryStride; /* Ofs: 0x2 Size: 0x1 ByteProperty Engine.DistributionLookupTable.EntryStride */
    uint8_t SubEntryStride; /* Ofs: 0x3 Size: 0x1 ByteProperty Engine.DistributionLookupTable.SubEntryStride */
    float TimeScale; /* Ofs: 0x4 Size: 0x4 FloatProperty Engine.DistributionLookupTable.TimeScale */
    float TimeBias; /* Ofs: 0x8 Size: 0x4 FloatProperty Engine.DistributionLookupTable.TimeBias */
    uint8_t UnknownDataC[0x4];
    TArray<float> Values; /* Ofs: 0x10 Size: 0x10 ArrayProperty Engine.DistributionLookupTable.Values */
    uint8_t LockFlag; /* Ofs: 0x20 Size: 0x1 ByteProperty Engine.DistributionLookupTable.LockFlag */
    uint8_t UnknownData21[0x7];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFDistributionLookupTable = sizeof(FDistributionLookupTable); // 40
    static_assert(sizeof(FDistributionLookupTable) == 0x28, "Size of FDistributionLookupTable is not correct.");
	auto constexpr FDistributionLookupTable_Op_Offset = offsetof(FDistributionLookupTable, Op);
	static_assert(FDistributionLookupTable_Op_Offset == 0x0, "FDistributionLookupTable::Op offset is not 0");
	auto constexpr FDistributionLookupTable_EntryCount_Offset = offsetof(FDistributionLookupTable, EntryCount);
	static_assert(FDistributionLookupTable_EntryCount_Offset == 0x1, "FDistributionLookupTable::EntryCount offset is not 1");
	auto constexpr FDistributionLookupTable_EntryStride_Offset = offsetof(FDistributionLookupTable, EntryStride);
	static_assert(FDistributionLookupTable_EntryStride_Offset == 0x2, "FDistributionLookupTable::EntryStride offset is not 2");
	auto constexpr FDistributionLookupTable_SubEntryStride_Offset = offsetof(FDistributionLookupTable, SubEntryStride);
	static_assert(FDistributionLookupTable_SubEntryStride_Offset == 0x3, "FDistributionLookupTable::SubEntryStride offset is not 3");
	auto constexpr FDistributionLookupTable_TimeScale_Offset = offsetof(FDistributionLookupTable, TimeScale);
	static_assert(FDistributionLookupTable_TimeScale_Offset == 0x4, "FDistributionLookupTable::TimeScale offset is not 4");
	auto constexpr FDistributionLookupTable_TimeBias_Offset = offsetof(FDistributionLookupTable, TimeBias);
	static_assert(FDistributionLookupTable_TimeBias_Offset == 0x8, "FDistributionLookupTable::TimeBias offset is not 8");
	auto constexpr FDistributionLookupTable_Values_Offset = offsetof(FDistributionLookupTable, Values);
	static_assert(FDistributionLookupTable_Values_Offset == 0x10, "FDistributionLookupTable::Values offset is not 10");
	auto constexpr FDistributionLookupTable_LockFlag_Offset = offsetof(FDistributionLookupTable, LockFlag);
	static_assert(FDistributionLookupTable_LockFlag_Offset == 0x20, "FDistributionLookupTable::LockFlag offset is not 20");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
