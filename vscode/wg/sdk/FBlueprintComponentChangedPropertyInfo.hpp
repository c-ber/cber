#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FBlueprintComponentChangedPropertyInfo // Size: 0x18
{
public:
    FName PropertyName; /* Ofs: 0x0 Size: 0x8 NameProperty Engine.BlueprintComponentChangedPropertyInfo.PropertyName */
    int32_t ArrayIndex; /* Ofs: 0x8 Size: 0x4 IntProperty Engine.BlueprintComponentChangedPropertyInfo.ArrayIndex */
    uint8_t UnknownDataC[0x4];
    ExternalPtr<struct UStruct> PropertyScope; /* Ofs: 0x10 Size: 0x8 ObjectProperty Engine.BlueprintComponentChangedPropertyInfo.PropertyScope */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFBlueprintComponentChangedPropertyInfo = sizeof(FBlueprintComponentChangedPropertyInfo); // 24
    static_assert(sizeof(FBlueprintComponentChangedPropertyInfo) == 0x18, "Size of FBlueprintComponentChangedPropertyInfo is not correct.");
	auto constexpr FBlueprintComponentChangedPropertyInfo_PropertyName_Offset = offsetof(FBlueprintComponentChangedPropertyInfo, PropertyName);
	static_assert(FBlueprintComponentChangedPropertyInfo_PropertyName_Offset == 0x0, "FBlueprintComponentChangedPropertyInfo::PropertyName offset is not 0");
	auto constexpr FBlueprintComponentChangedPropertyInfo_ArrayIndex_Offset = offsetof(FBlueprintComponentChangedPropertyInfo, ArrayIndex);
	static_assert(FBlueprintComponentChangedPropertyInfo_ArrayIndex_Offset == 0x8, "FBlueprintComponentChangedPropertyInfo::ArrayIndex offset is not 8");
	auto constexpr FBlueprintComponentChangedPropertyInfo_PropertyScope_Offset = offsetof(FBlueprintComponentChangedPropertyInfo, PropertyScope);
	static_assert(FBlueprintComponentChangedPropertyInfo_PropertyScope_Offset == 0x10, "FBlueprintComponentChangedPropertyInfo::PropertyScope offset is not 10");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
