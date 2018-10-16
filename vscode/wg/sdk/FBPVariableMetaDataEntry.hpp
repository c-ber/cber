#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FBPVariableMetaDataEntry // Size: 0x18
{
public:
    FName DataKey; /* Ofs: 0x0 Size: 0x8 NameProperty Engine.BPVariableMetaDataEntry.DataKey */
    FString DataValue; /* Ofs: 0x8 Size: 0x10 StrProperty Engine.BPVariableMetaDataEntry.DataValue */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFBPVariableMetaDataEntry = sizeof(FBPVariableMetaDataEntry); // 24
    static_assert(sizeof(FBPVariableMetaDataEntry) == 0x18, "Size of FBPVariableMetaDataEntry is not correct.");
	auto constexpr FBPVariableMetaDataEntry_DataKey_Offset = offsetof(FBPVariableMetaDataEntry, DataKey);
	static_assert(FBPVariableMetaDataEntry_DataKey_Offset == 0x0, "FBPVariableMetaDataEntry::DataKey offset is not 0");
	auto constexpr FBPVariableMetaDataEntry_DataValue_Offset = offsetof(FBPVariableMetaDataEntry, DataValue);
	static_assert(FBPVariableMetaDataEntry_DataValue_Offset == 0x8, "FBPVariableMetaDataEntry::DataValue offset is not 8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
