#pragma once
#include "FGuid.hpp"
#include "FEdGraphPinType.hpp"
#include "ELifetimeCondition.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FBPVariableDescription // Size: 0xF8
{
public:
    FName VarName; /* Ofs: 0x0 Size: 0x8 NameProperty Engine.BPVariableDescription.VarName */
    FGuid VarGuid; /* Ofs: 0x8 Size: 0x10 StructProperty Engine.BPVariableDescription.VarGuid */
    FEdGraphPinType VarType; /* Ofs: 0x18 Size: 0x80 StructProperty Engine.BPVariableDescription.VarType */
    FString FriendlyName; /* Ofs: 0x98 Size: 0x10 StrProperty Engine.BPVariableDescription.FriendlyName */
    FText Category; /* Ofs: 0xA8 Size: 0x18 TextProperty Engine.BPVariableDescription.Category */
    uint64_t PropertyFlags; /* Ofs: 0xC0 Size: 0x8 UInt64Property Engine.BPVariableDescription.PropertyFlags */
    FName RepNotifyFunc; /* Ofs: 0xC8 Size: 0x8 NameProperty Engine.BPVariableDescription.RepNotifyFunc */
    TEnumAsByte<enum ELifetimeCondition> ReplicationCondition; /* Ofs: 0xD0 Size: 0x1 ByteProperty Engine.BPVariableDescription.ReplicationCondition */
    uint8_t UnknownDataD1[0x7];
    TArray<struct FBPVariableMetaDataEntry> MetaDataArray; /* Ofs: 0xD8 Size: 0x10 ArrayProperty Engine.BPVariableDescription.MetaDataArray */
    FString DefaultValue; /* Ofs: 0xE8 Size: 0x10 StrProperty Engine.BPVariableDescription.DefaultValue */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFBPVariableDescription = sizeof(FBPVariableDescription); // 248
    static_assert(sizeof(FBPVariableDescription) == 0xF8, "Size of FBPVariableDescription is not correct.");
	auto constexpr FBPVariableDescription_VarName_Offset = offsetof(FBPVariableDescription, VarName);
	static_assert(FBPVariableDescription_VarName_Offset == 0x0, "FBPVariableDescription::VarName offset is not 0");
	auto constexpr FBPVariableDescription_VarGuid_Offset = offsetof(FBPVariableDescription, VarGuid);
	static_assert(FBPVariableDescription_VarGuid_Offset == 0x8, "FBPVariableDescription::VarGuid offset is not 8");
	auto constexpr FBPVariableDescription_VarType_Offset = offsetof(FBPVariableDescription, VarType);
	static_assert(FBPVariableDescription_VarType_Offset == 0x18, "FBPVariableDescription::VarType offset is not 18");
	auto constexpr FBPVariableDescription_FriendlyName_Offset = offsetof(FBPVariableDescription, FriendlyName);
	static_assert(FBPVariableDescription_FriendlyName_Offset == 0x98, "FBPVariableDescription::FriendlyName offset is not 98");
	auto constexpr FBPVariableDescription_Category_Offset = offsetof(FBPVariableDescription, Category);
	static_assert(FBPVariableDescription_Category_Offset == 0xa8, "FBPVariableDescription::Category offset is not a8");
	auto constexpr FBPVariableDescription_PropertyFlags_Offset = offsetof(FBPVariableDescription, PropertyFlags);
	static_assert(FBPVariableDescription_PropertyFlags_Offset == 0xc0, "FBPVariableDescription::PropertyFlags offset is not c0");
	auto constexpr FBPVariableDescription_RepNotifyFunc_Offset = offsetof(FBPVariableDescription, RepNotifyFunc);
	static_assert(FBPVariableDescription_RepNotifyFunc_Offset == 0xc8, "FBPVariableDescription::RepNotifyFunc offset is not c8");
	auto constexpr FBPVariableDescription_ReplicationCondition_Offset = offsetof(FBPVariableDescription, ReplicationCondition);
	static_assert(FBPVariableDescription_ReplicationCondition_Offset == 0xd0, "FBPVariableDescription::ReplicationCondition offset is not d0");
	auto constexpr FBPVariableDescription_MetaDataArray_Offset = offsetof(FBPVariableDescription, MetaDataArray);
	static_assert(FBPVariableDescription_MetaDataArray_Offset == 0xd8, "FBPVariableDescription::MetaDataArray offset is not d8");
	auto constexpr FBPVariableDescription_DefaultValue_Offset = offsetof(FBPVariableDescription, DefaultValue);
	static_assert(FBPVariableDescription_DefaultValue_Offset == 0xe8, "FBPVariableDescription::DefaultValue offset is not e8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
