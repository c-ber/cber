#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UDataTable // Size: 0x88
	: public UObject // Size: 0x30
{
private:
	typedef UDataTable t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(297); // id32("Class Engine.DataTable")
		return ptr;
	}
	ExternalPtr<struct UScriptStruct> RowStruct; /* Ofs: 0x30 Size: 0x8 - ObjectProperty Engine.DataTable.RowStruct */
	uint8_t UnknownData38[0x50];


	inline bool SetRowStruct(t_structHelper inst, ExternalPtr<struct UScriptStruct> value) { inst.WriteOffset(0x30, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUDataTable = sizeof(UDataTable); // 136
    static_assert(sizeof(UDataTable) == 0x88, "Size of UDataTable is not correct.");
	auto constexpr UDataTable_RowStruct_Offset = offsetof(UDataTable, RowStruct);
	static_assert(UDataTable_RowStruct_Offset == 0x30, "UDataTable::RowStruct offset is not 30");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
